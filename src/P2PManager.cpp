#include "P2PManager.hpp"
#include "SessionManager.hpp"
#include "utils/ChatFilter.hpp"
#include "BinaryProtocol.hpp"
#include "RemoteActionHandler.hpp"

#include <rtc/rtc.hpp>
#include <rtc/websocket.hpp>
#include <Geode/Geode.hpp>
#include <Geode/utils/web.hpp>
#include <thread>
#include <chrono>
#include <algorithm>
#include <cctype>
#include <unordered_set>

using namespace geode::prelude;

namespace mpedit {

    namespace {
        std::string toLower(std::string value) {
            std::transform(value.begin(), value.end(), value.begin(), [](unsigned char c) {
                return static_cast<char>(std::tolower(c));
            });
            return value;
        }

        bool isTcpOrTlsTurnUrl(std::string const& url) {
            auto lower = toLower(url);
            if (lower.rfind("turns:", 0) == 0) return true;
            if (lower.find("transport=tcp") != std::string::npos) return true;
            if (lower.find("transport=tls") != std::string::npos) return true;
            return false;
        }

        int turnUrlRank(std::string const& url) {
            auto lower = toLower(url);
            if (lower.find(":443") != std::string::npos) return 0;
            if (lower.find(":3478") != std::string::npos) return 1;
            return 2;
        }

        std::string urlEncode(std::string const& value) {
            static char const* hex = "0123456789ABCDEF";
            std::string out;
            out.reserve(value.size());
            for (unsigned char c : value) {
                if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
                    (c >= '0' && c <= '9') || c == '-' || c == '_' || c == '.' || c == '~') {
                    out.push_back(static_cast<char>(c));
                } else {
                    out.push_back('%');
                    out.push_back(hex[(c >> 4) & 0x0F]);
                    out.push_back(hex[c & 0x0F]);
                }
            }
            return out;
        }

        bool isHostOnlyOpcode(uint8_t opcode) {
            switch (opcode) {
                case static_cast<uint8_t>(proto::Opcode::PlayerJoined):
                case static_cast<uint8_t>(proto::Opcode::PlayerLeft):
                case static_cast<uint8_t>(proto::Opcode::RoomInfo):
                case static_cast<uint8_t>(proto::Opcode::HostMigration):
                case static_cast<uint8_t>(proto::Opcode::Reconnect):
                case static_cast<uint8_t>(proto::Opcode::SetViewOnly):
                case static_cast<uint8_t>(proto::Opcode::KickPlayer):
                case static_cast<uint8_t>(proto::Opcode::BanPlayer):
                case static_cast<uint8_t>(proto::Opcode::ServerMessage):
                case static_cast<uint8_t>(proto::Opcode::Error):
                    return true;
                default:
                    return false;
            }
        }

        constexpr size_t MAX_INCOMING_MESSAGES = 2048;
        constexpr size_t MAX_PENDING_MESSAGES = 256;
        constexpr size_t MAX_PENDING_CANDIDATES = 128;
    }

    P2PManager& P2PManager::get() {
        static P2PManager instance;
        return instance;
    }

    P2PManager::P2PManager() {
        rtc::InitLogger(rtc::LogLevel::Warning);

        m_dispatchRunning.store(true);
        m_dispatchThread = std::thread([this]() {
            while (m_dispatchRunning.load()) {
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
                geode::queueInMainThread([]() {
                    P2PManager::get().dispatchMessages();
                });
            }
        });
    }

    P2PManager::~P2PManager() {
        m_dispatchRunning.store(false);
        if (m_dispatchThread.joinable()) {
            m_dispatchThread.join();
        }
        leaveSession();
    }



    rtc::Configuration P2PManager::makeRtcConfig() {
        rtc::Configuration config;

        auto mode = Mod::get()->getSettingValue<std::string>("ice-transport-mode");

        if (mode != "TURN Only") {
            try {
                config.iceServers.push_back({"stun:stun.cloudflare.com:3478"});
            } catch (std::exception const& e) {
                log::warn("P2PManager: Failed to configure STUN server: {}", e.what());
            }
        }

        if (mode != "STUN Only") {
            std::vector<TurnServerInfo> usable;
            for (auto const& ts : m_turnServers) {
                if (ts.urls.empty() || isTcpOrTlsTurnUrl(ts.urls)) continue;
                usable.push_back(ts);
            }

            std::sort(usable.begin(), usable.end(), [](TurnServerInfo const& a, TurnServerInfo const& b) {
                int ar = turnUrlRank(a.urls);
                int br = turnUrlRank(b.urls);
                if (ar != br) return ar < br;
                return a.urls < b.urls;
            });

            int added = 0;
            std::unordered_set<std::string> seen;
            for (auto const& ts : usable) {
                if (added >= 2) break;
                if (!seen.insert(ts.urls).second) continue;
                try {
                    rtc::IceServer server(ts.urls);
                    server.username = ts.username;
                    server.password = ts.credential;
                    server.type = rtc::IceServer::Type::Turn;
                    server.relayType = rtc::IceServer::RelayType::TurnUdp;
                    config.iceServers.push_back(std::move(server));
                    ++added;
                    log::info("P2PManager: Using TURN server {}", ts.urls);
                } catch (std::exception const& e) {
                    log::warn("P2PManager: Ignoring invalid TURN server {}: {}", ts.urls, e.what());
                }
            }

            if (added == 0) {
                log::warn("P2PManager: No usable TURN servers; using Open Relay fallback");
                try {
                    config.iceServers.emplace_back("openrelay.metered.ca", 443,
                        "openrelayproject", "openrelayproject", rtc::IceServer::RelayType::TurnUdp);
                    config.iceServers.emplace_back("openrelay.metered.ca", 3478,
                        "openrelayproject", "openrelayproject", rtc::IceServer::RelayType::TurnUdp);
                } catch (std::exception const& e) {
                    log::warn("P2PManager: Failed to configure TURN fallback: {}", e.what());
                }
            }
        }

        if (mode == "TURN Only") {
            config.iceTransportPolicy = rtc::TransportPolicy::Relay;
        }

        config.maxMessageSize = 16 * 1024 * 1024;
        return config;
    }

    std::string P2PManager::getSignalingUrl() {
        auto url = geode::utils::string::trim(Mod::get()->getSettingValue<std::string>("signaling-url"));
        if (url.empty() || url == "https://" || url == "http://" || url.find("://") == std::string::npos || url == "https://dewy-flea-9364.d050.deno.net") {
            return "https://multiplayer-edit.d050.workers.dev";
        }
        if (url.find('.') == std::string::npos && url.find("localhost") == std::string::npos && url.find("127.0.0.1") == std::string::npos) {
            return "https://multiplayer-edit.d050.workers.dev";
        }
        while (!url.empty() && url.back() == '/') url.pop_back();
        return url;
    }



    P2PManager::State P2PManager::getState() const {
        return m_state.load();
    }

    P2PManager::Role P2PManager::getRole() const {
        std::lock_guard lock(m_stateMutex);
        return m_role;
    }

    bool P2PManager::isConnected() const {
        return m_state.load() == State::Connected;
    }

    std::string P2PManager::getRoomCode() const {
        std::lock_guard lock(m_stateMutex);
        return m_roomCode;
    }

    int P2PManager::getLocalPlayerId() const {
        return m_localPlayerId;
    }

    std::string P2PManager::getError() const {
        std::lock_guard lock(m_stateMutex);
        return m_error;
    }

    size_t P2PManager::getReliableBufferedAmount(int playerId) {
        std::lock_guard lock(m_peersMutex);
        auto it = m_peers.find(playerId);
        if (it != m_peers.end() && it->second.reliable) {
            return it->second.reliable->bufferedAmount();
        }
        return 0;
    }

    std::string P2PManager::getConnectionType(int playerId) {
        if (m_isDedicated) return "SERVER";

        int targetId = playerId;
        if (m_role == Role::Client) {
            if (playerId == m_localPlayerId || playerId == 0) {
                targetId = 0;
            } else {
                return "";
            }
        } else if (m_role == Role::Host) {
            if (playerId == 0) return "HOST";
        }

        std::lock_guard lock(m_peersMutex);
        auto it = m_peers.find(targetId);
        if (it != m_peers.end() && it->second.pc) {
            rtc::Candidate local, remote;
            if (it->second.pc->getSelectedCandidatePair(&local, &remote)) {
                if (local.type() == rtc::Candidate::Type::Relayed || remote.type() == rtc::Candidate::Type::Relayed) {
                    return "TURN";
                }
                if (local.type() == rtc::Candidate::Type::ServerReflexive || remote.type() == rtc::Candidate::Type::ServerReflexive ||
                    local.type() == rtc::Candidate::Type::PeerReflexive || remote.type() == rtc::Candidate::Type::PeerReflexive) {
                    return "STUN";
                }
                if (local.type() == rtc::Candidate::Type::Host && remote.type() == rtc::Candidate::Type::Host) {
                    return "LAN";
                }
            }
        }
        return "";
    }



    void P2PManager::onSessionStarted(SessionStartedCb cb) {
        m_onSessionStarted.push_back(std::move(cb));
    }
    void P2PManager::onPeerConnected(PeerConnectedCb cb) {
        m_onPeerConnected.push_back(std::move(cb));
    }
    void P2PManager::onPeerDisconnected(PeerDisconnectedCb cb) {
        m_onPeerDisconnected.push_back(std::move(cb));
    }
    void P2PManager::onError(ErrorCb cb) {
        m_onError.push_back(std::move(cb));
    }
    void P2PManager::onStatus(StatusCb cb) {
        m_onStatus.push_back(std::move(cb));
    }
    void P2PManager::clearCallbacks() {
        m_onSessionStarted.clear();
        m_onPeerConnected.clear();
        m_onPeerDisconnected.clear();
        m_onError.clear();
        m_onStatus.clear();
    }



    void P2PManager::on(proto::Opcode opcode, MessageCallback callback) {
        m_handlers[static_cast<uint8_t>(opcode)].push_back(std::move(callback));
    }

    void P2PManager::clearHandlers() {
        m_handlers.clear();
    }



    void P2PManager::dispatchMessages() {
        if (m_dispatching) return;
        m_dispatching = true;

        static auto lastPingTime = std::chrono::steady_clock::now();
        auto now = std::chrono::steady_clock::now();
        if (now - lastPingTime > std::chrono::seconds(2)) {
            lastPingTime = now;
            auto nowMs = static_cast<uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
                now.time_since_epoch()).count());
            
            if (m_role == Role::Client) {
                sendTo(0, proto::serializePing(nowMs), ChannelType::Unreliable);
            }
        }

        std::queue<QueuedMessage> messages;
        {
            std::lock_guard lock(m_incomingMutex);
            std::swap(messages, m_incoming);
        }

        while (!messages.empty()) {
            auto& msg = messages.front();

            if (!msg.data.empty()) {
                uint8_t opcodeRaw = msg.data[0];
                int fromId = msg.fromPlayerId;
                const uint8_t* payloadData = msg.data.data();
                size_t payloadLen = msg.data.size();

                if (m_role == Role::Client && opcodeRaw == static_cast<uint8_t>(proto::Opcode::Relay)) {
                    proto::Reader r(msg.data.data() + 1, msg.data.size() - 1);
                    fromId = static_cast<int>(r.readVarInt());
                    payloadLen = msg.data.size() - 1 - r.position();
                    payloadData = msg.data.data() + 1 + r.position();
                    if (payloadLen > 0) {
                        opcodeRaw = payloadData[0];
                    } else {
                        opcodeRaw = 0; 
                    }
                }

                if (payloadLen > 0) {
                    if (isHostOnlyOpcode(opcodeRaw) && fromId != 0) {
                        log::warn("P2PManager: Ignoring host-only opcode 0x{:02x} from player {}", opcodeRaw, fromId);
                        messages.pop();
                        continue;
                    }

                    auto it = m_handlers.find(opcodeRaw);
                    if (it != m_handlers.end()) {
                        auto handlersCopy = it->second;
                        for (auto const& handler : handlersCopy) {
                            proto::Reader handlerReader(payloadData + 1, payloadLen - 1);
                            handler(fromId, handlerReader);
                            if (m_handlers.empty()) break;
                        }
                    }
                }
            }

            if (m_handlers.empty()) break;
            messages.pop();
        }

        m_dispatching = false;
    }



    void P2PManager::send(std::vector<uint8_t> const& data, ChannelType channel) {
        if (m_role == Role::Host) {
            broadcast(data, channel);
        } else if (m_role == Role::Client) {
            sendTo(0, data, channel);
        }
    }

    void P2PManager::send(std::vector<uint8_t>&& data, ChannelType channel) {
        send(static_cast<std::vector<uint8_t> const&>(data), channel);
    }

    void P2PManager::sendTo(int playerId, std::vector<uint8_t> const& data, ChannelType channel) {
        if (m_isDedicated) {
            if (m_webSocket && m_webSocket->readyState() == rtc::WebSocket::State::Open) {
                try {
                    m_webSocket->send(reinterpret_cast<const std::byte*>(data.data()), data.size());
                } catch (std::exception const& e) {
                    log::warn("P2PManager: WebSocket send failed: {}", e.what());
                }
            }
            return;
        }

        std::lock_guard lock(m_peersMutex);
        auto it = m_peers.find(playerId);
        if (it == m_peers.end()) return;

        auto& peer = it->second;
        if (!peer.ready) {
            if (peer.pendingMessages.size() >= MAX_PENDING_MESSAGES) {
                peer.pendingMessages.erase(peer.pendingMessages.begin());
            }
            peer.pendingMessages.push_back({data, channel});
            return;
        }
        auto& dc = (channel == ChannelType::Reliable) ? peer.reliable : peer.unreliable;

        if (dc && dc->isOpen()) {
            try {
                dc->send(reinterpret_cast<const std::byte*>(data.data()), data.size());
            } catch (std::exception const& e) {
                log::warn("P2PManager: sendTo failed for player {}: {}", playerId, e.what());
            }
        }
    }

    void P2PManager::broadcast(std::vector<uint8_t> const& data, ChannelType channel, int excludePlayerId) {
        std::vector<int> peerIds;
        {
            std::lock_guard lock(m_peersMutex);
            for (auto& [id, peer] : m_peers) {
                if (id != excludePlayerId && peer.ready) {
                    peerIds.push_back(id);
                }
            }
        }

        for (int id : peerIds) {
            sendTo(id, data, channel);
        }
    }



    void P2PManager::onPeerMessage(int fromPlayerId, const uint8_t* data, size_t len) {
        if (len == 0) return;

        uint8_t opcode = data[0];

        if (m_role == Role::Host && fromPlayerId != 0) {
            if (opcode == static_cast<uint8_t>(proto::Opcode::PlayerJoined)) {
                if (len > 1) {
                    proto::Reader r(data + 1, len - 1);
                    auto pj = proto::deserializePlayerJoined(r);
                    if (!r.hasError() && !pj.name.empty()) {
                        pj.name = ChatFilter::filter(pj.name);
                        {
                            std::lock_guard lock(m_peersMutex);
                            auto it = m_peers.find(fromPlayerId);
                            if (it != m_peers.end()) {
                                it->second.playerName = pj.name;
                                it->second.colorIndex = pj.colorIndex;
                                it->second.iconStr = pj.iconStr;
                            }
                        }
                        auto sanitized = proto::serializePlayerJoined(
                            fromPlayerId, pj.name, pj.colorIndex, pj.iconStr);
                        {
                            std::lock_guard lock(m_incomingMutex);
                            if (m_incoming.size() >= MAX_INCOMING_MESSAGES) {
                                m_incoming.pop();
                            }
                            m_incoming.push(QueuedMessage{0, sanitized});
                        }
                        broadcast(sanitized, ChannelType::Reliable, fromPlayerId);
                    }
                }
                return;
            }

            if (opcode == static_cast<uint8_t>(proto::Opcode::Relay) || isHostOnlyOpcode(opcode)) {
                log::warn("P2PManager: Dropping client-originated opcode 0x{:02x} from player {}",
                    opcode, fromPlayerId);
                return;
            }
        } else if (m_role == Role::Client && fromPlayerId != 0 && isHostOnlyOpcode(opcode)) {
            log::warn("P2PManager: Dropping non-host opcode 0x{:02x} from player {}", opcode, fromPlayerId);
            return;
        }

        {
            std::lock_guard lock(m_incomingMutex);
            if (m_incoming.size() >= MAX_INCOMING_MESSAGES) {
                m_incoming.pop();
            }
            m_incoming.push(QueuedMessage{
                fromPlayerId,
                std::vector<uint8_t>(data, data + len)
            });
        }

        if (m_role == Role::Host) {
            if (opcode == static_cast<uint8_t>(proto::Opcode::Heartbeat) ||
                opcode == static_cast<uint8_t>(proto::Opcode::Ping) ||
                opcode == static_cast<uint8_t>(proto::Opcode::Pong)) return;

            ChannelType ch = ChannelType::Reliable;
            if (opcode == static_cast<uint8_t>(proto::Opcode::CursorUpdate) ||
                opcode == static_cast<uint8_t>(proto::Opcode::PingUpdate)) {
                ch = ChannelType::Unreliable;
            }
            relayMessage(fromPlayerId, data, len, ch);
        }
    }

    void P2PManager::relayMessage(int fromPlayerId, const uint8_t* data, size_t len, ChannelType channel) {
        proto::Writer w;
        w.writeU8(static_cast<uint8_t>(proto::Opcode::Relay));
        w.writeVarInt(static_cast<uint32_t>(fromPlayerId));
        w.writeBytes(data, len);
        
        std::vector<uint8_t> relayData = w.data();
        broadcast(relayData, channel, fromPlayerId);
    }

    void P2PManager::disconnectPeer(int playerId) {
        onPeerDisconnected(playerId, false);
    }

    void P2PManager::banPlayer(std::string const& playerName) {
        if (m_role == Role::Host && !m_roomCode.empty()) {
            auto url = getSignalingUrl() + "/rooms/" + m_roomCode + "/ban";
            auto req = geode::utils::web::WebRequest();
            req.header("ngrok-skip-browser-warning", "1");
            req.header("Content-Type", "application/json");
            if (!m_hostToken.empty()) {
                req.header("X-Room-Token", m_hostToken);
            }
            auto body = matjson::makeObject({{"playerName", playerName},
            {"iconStr", fmt::format("{}:{}:{}:{}:{}", GameManager::sharedState()->getPlayerFrame(), GameManager::sharedState()->getPlayerColor(), GameManager::sharedState()->getPlayerColor2(), GameManager::sharedState()->getPlayerGlow() ? 1 : 0, GameManager::sharedState()->getPlayerGlowColor())}});
            req.bodyJSON(body);
            req.timeout(asp::Duration::fromSecs(10));
            async::spawn(req.send("POST", url));
        }
    }

    void P2PManager::onPeerDisconnected(int playerId, bool unexpected) {
        dispatchMessages();

        bool existed = false;
        {
            std::lock_guard lock(m_peersMutex);
            auto it = m_peers.find(playerId);
            if (it != m_peers.end()) {
                if (it->second.pc) it->second.pc->close();
                m_peers.erase(it);
                existed = true;
            }
        }

        if (!existed) return;

        log::info("P2PManager: Player {} disconnected (unexpected={})", playerId, unexpected);

        int attemptId = m_connectionAttemptId.load();
        queueInMainThread([this, playerId, unexpected, attemptId]() {
            if (m_connectionAttemptId.load() != attemptId) return;
            if (m_role == Role::Client && playerId == 0) {
                auto callbacks = m_onError;
                auto message = m_isDedicated ? std::string("Disconnected from server") : std::string("Host disconnected");
                for (auto& cb : callbacks) {
                    cb(message);
                }
                return;
            }

            auto disconnectCallbacks = m_onPeerDisconnected;
            for (auto& cb : disconnectCallbacks) {
                cb(playerId);
            }

            if (m_role == Role::Host) {
                auto msg = proto::serializePlayerLeft(playerId);
                broadcast(msg, ChannelType::Reliable);
                sendLeaveForPlayer(playerId);
            }
        });
    }

    void P2PManager::scheduleDisconnectCheck(int playerId, int delayMs) {
        int token = 0;
        {
            std::lock_guard lock(m_peersMutex);
            auto it = m_peers.find(playerId);
            if (it == m_peers.end()) return;
            token = ++it->second.disconnectToken;
        }

        std::thread([this, playerId, token, delayMs]() {
            std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
            geode::queueInMainThread([this, playerId, token]() {
                {
                    std::lock_guard lock(m_peersMutex);
                    auto it = m_peers.find(playerId);
                    if (it == m_peers.end()) return;
                    if (it->second.disconnectToken != token) return;
                    if (it->second.pc) {
                        auto state = it->second.pc->state();
                        if (state == rtc::PeerConnection::State::Connected ||
                            state == rtc::PeerConnection::State::Connecting) {
                            return;
                        }
                    }
                }
                log::warn("P2PManager: Peer {} did not recover from disconnect", playerId);
                onPeerDisconnected(playerId, true);
            });
        }).detach();
    }

    void P2PManager::cancelDisconnectCheck(int playerId) {
        std::lock_guard lock(m_peersMutex);
        auto it = m_peers.find(playerId);
        if (it != m_peers.end()) {
            ++it->second.disconnectToken;
        }
    }

    void P2PManager::armConnectionWatchdog(int attemptId, int timeoutSeconds, std::string const& message) {
        std::thread([this, attemptId, timeoutSeconds, message]() {
            std::this_thread::sleep_for(std::chrono::seconds(timeoutSeconds));
            geode::queueInMainThread([this, attemptId, message]() {
                if (m_connectionAttemptId.load() != attemptId) return;
                if (m_state.load() != State::Connecting) return;
                log::warn("P2PManager: Connection watchdog fired: {}", message);
                failSession(message);
            });
        }).detach();
    }

    void P2PManager::sendLeaveForPlayer(int playerId) {
        if (m_role != Role::Host || m_roomCode.empty() || m_isDedicated) return;

        auto url = getSignalingUrl() + "/rooms/" + m_roomCode + "/leave";
        auto req = geode::utils::web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Content-Type", "application/json");
        if (!m_hostToken.empty()) {
            req.header("X-Room-Token", m_hostToken);
        }
        auto body = matjson::makeObject({{"playerId", playerId}});
        req.bodyJSON(body);
        req.timeout(asp::Duration::fromSecs(10));
        async::spawn(req.send("POST", url));
    }

    void P2PManager::fetchTurnServers(std::string const& roomCode) {
        if (roomCode.empty()) return;

        auto token = (m_role == Role::Host) ? m_hostToken : m_playerToken;
        if (token.empty()) return;

        auto url = getSignalingUrl() + "/rooms/" + roomCode + "/turn";
        auto req = web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.timeout(asp::Duration::fromSecs(8));
        if (m_role == Role::Host) {
            req.header("X-Room-Token", m_hostToken);
        } else {
            req.header("X-Player-Token", m_playerToken);
        }

        int attemptId = m_connectionAttemptId.load();
        m_turnListener.spawn(req.get(url), [this, attemptId](web::WebResponse res) {
            if (m_connectionAttemptId.load() != attemptId) return;
            if (res.ok()) {
                auto json = res.json().unwrapOr(matjson::Value());
                std::vector<TurnServerInfo> servers;
                if (json.contains("turnServers") && json["turnServers"].isArray()) {
                    for (auto const& item : json["turnServers"].asArray().unwrap()) {
                        TurnServerInfo info;
                        info.urls = item.get<std::string>("urls").unwrapOr("");
                        info.username = item.get<std::string>("username").unwrapOr("");
                        info.credential = item.get<std::string>("credential").unwrapOr("");
                        if (!info.urls.empty()) {
                            servers.push_back(std::move(info));
                        }
                    }
                }
                if (!servers.empty()) {
                    m_turnServers = std::move(servers);
                    log::info("P2PManager: Fetched {} TURN server(s) from retry endpoint", m_turnServers.size());
                } else {
                    log::warn("P2PManager: TURN retry endpoint returned no servers");
                }
            } else {
                log::warn("P2PManager: TURN retry endpoint returned {}", res.code());
            }
        });
    }

    void P2PManager::failSession(std::string const& error) {
        std::vector<ErrorCb> callbacks;
        {
            std::lock_guard lock(m_stateMutex);
            m_error = error;
            m_state.store(State::Error);
            callbacks = m_onError;
        }

        m_signalingActive = false;
        stopSignalPolling();

        for (auto& cb : callbacks) {
            cb(error);
        }
    }



    void P2PManager::hostSession(std::string const& playerName, RoomSettings const& settings) {
        {
            std::lock_guard lock(m_stateMutex);
            m_role = Role::Host;
            m_localPlayerId = 0;
            m_localPlayerName = playerName;
            m_error.clear();
        }
        m_state.store(State::Connecting);
        m_nextPlayerId = 1;

        signalingCreateRoom(playerName, settings);
    }

    void P2PManager::signalingCreateRoom(std::string const& playerName, RoomSettings const& settings) {
        if (m_signalingActive) return;
        m_signalingActive = true;
        m_settings = settings;
        m_hostToken.clear();
        m_playerToken.clear();
        int attemptId = ++m_connectionAttemptId;

        auto req = geode::utils::web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Content-Type", "application/json");
        req.timeout(asp::Duration::fromSecs(15));

        matjson::Value body = matjson::makeObject({
            {"action", "create"},
            {"hostName", playerName},
            {"iconStr", buildLocalIconStr()},
            {"colorIndex", getLocalSavedCursorColor()},
            {"roomName", settings.roomName},
            {"description", settings.description},
            {"playerLimit", settings.playerLimit},
            {"isPrivate", settings.isPrivate},
            {"hasPassword", settings.password != ""},
            {"version", geode::Mod::get()->getVersion().toVString()}
        });
        if (settings.password != "") {
            body.set("password", settings.password);
        }

        req.bodyJSON(body);

        auto url = getSignalingUrl() + "/rooms";
        log::info("P2PManager: Creating room on signaling server: {}", url);
        m_signalingListener.spawn(
            req.post(url),
            [this, attemptId](web::WebResponse res) {
                if (m_connectionAttemptId.load() != attemptId) return;
                if (res.ok()) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    auto roomCode = json.get<std::string>("roomCode").unwrapOr("");
                    m_signalingRoomId = json.get<std::string>("roomId").unwrapOr("");
                    m_hostToken = json.get<std::string>("hostToken").unwrapOr("");

                    m_turnServers.clear();
                    if (json.contains("turnServers") && json["turnServers"].isArray()) {
                        for (auto const& item : json["turnServers"].asArray().unwrap()) {
                            TurnServerInfo info;
                            info.urls = item.get<std::string>("urls").unwrapOr("");
                            info.username = item.get<std::string>("username").unwrapOr("");
                            info.credential = item.get<std::string>("credential").unwrapOr("");
                            if (!info.urls.empty()) {
                                m_turnServers.push_back(std::move(info));
                            }
                        }
                    }

                    if (roomCode.empty()) {
                        failSession("Failed to create room: no room code");
                        return;
                    }

                    {
                        std::lock_guard lock(m_stateMutex);
                        m_roomCode = roomCode;
                    }
                    m_state.store(State::Connected);

                    log::info("P2PManager: Room created with code: {}", roomCode);

                    auto mode = Mod::get()->getSettingValue<std::string>("ice-transport-mode");
                    bool hasUsableTurn = false;
                    for (auto const& ts : m_turnServers) {
                        if (!ts.urls.empty() && !isTcpOrTlsTurnUrl(ts.urls)) {
                            hasUsableTurn = true;
                            break;
                        }
                    }
                    if (mode != "STUN Only" && !hasUsableTurn && !m_hostToken.empty()) {
                        fetchTurnServers(roomCode);
                    }

                    startSignalPolling(roomCode, "host", 0);

                    std::vector<SessionStartedCb> callbacks;
                    {
                        std::lock_guard lock(m_stateMutex);
                        callbacks = m_onSessionStarted;
                    }
                    for (auto& cb : callbacks) cb(roomCode, 0);

                } else {
                    failSession("Signaling error: " + res.string().unwrapOr("unknown error"));
                }
            }
        );
    }

    void P2PManager::fetchRooms(FetchRoomsCb cb, std::string const& customUrl) {
        std::string cleanUrl = geode::utils::string::trim(customUrl);
        if (!cleanUrl.empty() && cleanUrl.back() == '/') cleanUrl.pop_back();

        auto url = cleanUrl.empty() ? getSignalingUrl() + "/rooms" : cleanUrl + "/rooms";

        if (!cleanUrl.empty()) {
            if (url.starts_with("ws://")) url.replace(0, 5, "http://");
            else if (url.starts_with("wss://")) url.replace(0, 6, "https://");
        }
        
        auto req = geode::utils::web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Bypass-Tunnel-Reminder", "true");
        req.timeout(asp::Duration::fromSecs(10));

        m_roomListListener.spawn(
            req.get(url),
            [cb, cleanUrl](geode::utils::web::WebResponse res) {
                std::vector<RoomInfo> rooms;
                if (res.ok()) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    if (json.isArray()) {
                        for (auto& roomJson : json.asArray().unwrap()) {
                            RoomInfo info;
                            info.roomCode = roomJson.get<std::string>("roomCode").unwrapOr("");
                            info.hostName = roomJson.get<std::string>("hostName").unwrapOr("Unknown");
                            info.roomName = ChatFilter::filter(roomJson.get<std::string>("roomName").unwrapOr("Room"));
                            info.description = ChatFilter::filter(roomJson.get<std::string>("description").unwrapOr(""));
                            info.playerCount = roomJson.get<int>("playerCount").unwrapOr(0);
                            info.playerLimit = roomJson.get<int>("playerLimit").unwrapOr(100);
                            info.isPrivate = roomJson.get<bool>("isPrivate").unwrapOr(false);
                            info.hasPassword = roomJson.get<bool>("hasPassword").unwrapOr(false);
                            info.version = roomJson.get<std::string>("version").unwrapOr("Unknown");
                            info.serverUrl = cleanUrl;
                            rooms.push_back(info);
                        }
                    }
                }
                cb(rooms);
            }
        );
    }



    void P2PManager::startSignalPolling(std::string const& code, std::string const& role, int playerId) {
        extendFastPoll();
        m_signalingActive.store(true);
        log::info("P2PManager: Starting signaling long poll (role={}, playerId={})", role, playerId);
        pollSignalOnce(code, role, playerId);
    }

    void P2PManager::pollSignalOnce(std::string const& code, std::string const& role, int playerId) {
        if (!m_signalingActive.load()) return;
        int attemptId = m_connectionAttemptId.load();

        float timeoutSec = 20.0f;

        auto url = getSignalingUrl() + "/rooms/" + code + "/signal?role=" + role + "&playerId=" + std::to_string(playerId) + "&timeout=" + std::to_string(static_cast<int>(timeoutSec * 1000));

        auto req = web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.timeout(asp::Duration::fromSecs(30));
        if (role == "host") {
            if (!m_hostToken.empty()) req.header("X-Room-Token", m_hostToken);
        } else {
            if (!m_playerToken.empty()) req.header("X-Player-Token", m_playerToken);
        }

        m_signalPollListener.spawn(
            req.get(url),
            [this, code, role, playerId, attemptId](web::WebResponse res) {
                if (m_connectionAttemptId.load() != attemptId) return;
                if (!m_signalingActive.load()) return;

                if (res.ok()) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    handleSignalingMessages(json);
                } else if (res.code() == 404 || res.code() == 410) {
                    failSession("Lobby is no longer active");
                    return;
                } else if (res.code() == 403) {
                    failSession("Signaling authentication failed");
                    return;
                } else {
                    log::warn("P2PManager: Signal poll returned {}", res.code());
                }

                if (m_signalingActive.load()) {
                    float delay = 1.0f;
                    if (std::chrono::steady_clock::now() < m_fastPollEndTime) {
                        delay = 0.1f;
                    }

                    std::thread([this, code, role, playerId, delay, attemptId]() {
                        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(delay * 1000)));
                        geode::queueInMainThread([this, code, role, playerId, attemptId]() {
                            if (m_connectionAttemptId.load() != attemptId) return;
                            pollSignalOnce(code, role, playerId);
                        });
                    }).detach();
                }
            }
        );
    }

    void P2PManager::extendFastPoll() {
        m_fastPollEndTime = std::chrono::steady_clock::now() + std::chrono::seconds(8);
    }

    void P2PManager::stopSignalPolling() {
        m_signalingActive.store(false);
        m_signalPollListener.cancel();
    }

    void P2PManager::sendSignalingMessage(std::string const& roomCode, matjson::Value const& msg) {
        sendSignalingMessageImpl(roomCode, msg, 2);
    }

    void P2PManager::sendSignalingMessageImpl(std::string const& roomCode, matjson::Value const& msg, int attemptsLeft) {
        if (roomCode.empty()) return;
        {
            std::lock_guard lock(m_stateMutex);
            if (m_role == Role::None || m_roomCode != roomCode) return;
        }

        extendFastPoll();
        auto url = getSignalingUrl() + "/rooms/" + roomCode + "/signal";
        auto req = web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Content-Type", "application/json");
        req.timeout(asp::Duration::fromSecs(10));
        {
            std::lock_guard lock(m_stateMutex);
            if (m_role == Role::Host) {
                if (!m_hostToken.empty()) req.header("X-Room-Token", m_hostToken);
            } else {
                if (!m_playerToken.empty()) req.header("X-Player-Token", m_playerToken);
            }
        }
        req.bodyJSON(msg);

        async::spawn(req.post(url), [this, roomCode, msg, attemptsLeft](web::WebResponse res) {
            if (res.ok()) return;
            if (attemptsLeft <= 1) {
                log::warn("P2PManager: Signaling message delivery failed ({})", res.code());
                return;
            }
            log::warn("P2PManager: Signaling message failed ({}); retrying", res.code());
            std::thread([this, roomCode, msg, attemptsLeft]() {
                std::this_thread::sleep_for(std::chrono::milliseconds(750));
                geode::queueInMainThread([this, roomCode, msg, attemptsLeft]() {
                    sendSignalingMessageImpl(roomCode, msg, attemptsLeft - 1);
                });
            }).detach();
        });
    }

    void P2PManager::handleSignalingMessages(matjson::Value const& messages) {
        if (!messages.isArray()) return;
        if (messages.size() > 0) extendFastPoll();

        for (size_t i = 0; i < messages.size(); i++) {
            auto msgOpt = messages.get(i);
            if (!msgOpt.isOk()) continue;
            auto msg = msgOpt.unwrap();

            auto type = msg.get<std::string>("type").unwrapOr("");

            if (type == "client_joined") {
                int clientId = msg.get<int>("playerId").unwrapOr(-1);
                auto clientName = msg.get<std::string>("playerName").unwrapOr("Player " + std::to_string(clientId));
                auto iconStr = msg.get<std::string>("iconStr").unwrapOr("");
                int colorIdx = msg.get<int>("colorIndex").unwrapOr(clientId % 16);
                if (clientId >= 0) {
                    log::info("P2PManager: Client {} ({}) connecting via signal poll", clientId, clientName);
                    
                    int currentPlayers = 1;
                    {
                        std::lock_guard lock(m_peersMutex);
                        currentPlayers += m_peers.size();
                    }
                    if (m_settings.playerLimit > 0 && currentPlayers >= m_settings.playerLimit) {
                        log::warn("P2PManager: Rejecting client {} due to player limit ({} / {})", clientId, currentPlayers, m_settings.playerLimit);
                        auto errBody = matjson::makeObject({
                            {"type", "error"},
                            {"error", "Lobby is full"},
                            {"targetPlayerId", clientId}
                        });
                        sendSignalingMessage(m_roomCode, errBody);
                        int attemptId = m_connectionAttemptId.load();
                        std::thread([this, clientId, attemptId]() {
                            std::this_thread::sleep_for(std::chrono::seconds(5));
                            geode::queueInMainThread([this, clientId, attemptId]() {
                                if (m_connectionAttemptId.load() != attemptId) return;
                                sendLeaveForPlayer(clientId);
                            });
                        }).detach();
                    } else {
                        bool alreadyExists = false;
                        {
                            std::lock_guard lock(m_peersMutex);
                            alreadyExists = m_peers.find(clientId) != m_peers.end();
                        }
                        if (alreadyExists) {
                            log::warn("P2PManager: Ignoring duplicate client_joined for {}", clientId);
                        } else {
                            m_nextPlayerId = std::max(m_nextPlayerId, clientId + 1);
                            createHostPeer(clientId, clientName, iconStr, colorIdx);
                        }
                    }
                }
            } else if (type == "answer") {
                auto sdp = msg.get<std::string>("sdp").unwrapOr("");
                int clientId = msg.get<int>("playerId").unwrapOr(-1);
                if (!sdp.empty() && clientId >= 0) {
                    log::info("P2PManager: Received SDP answer from client {} via poll", clientId);

                    size_t setupPos = sdp.find("a=setup:actpass");
                    while (setupPos != std::string::npos) {
                        sdp.replace(setupPos, 15, "a=setup:active");
                        setupPos = sdp.find("a=setup:actpass", setupPos);
                    }

                    log::info("Answer SDP:\n{}", sdp);
                    std::lock_guard lock(m_peersMutex);
                    auto it = m_peers.find(clientId);
                    if (it != m_peers.end() && it->second.pc) {
                        auto state = it->second.pc->signalingState();
                        if (state == rtc::PeerConnection::SignalingState::HaveLocalOffer) {
                            it->second.pc->setRemoteDescription(
                                rtc::Description(sdp, rtc::Description::Type::Answer, rtc::Description::Role::Active));
                            
                            for (auto const& pCand : it->second.pendingCandidates) {
                                it->second.pc->addRemoteCandidate(rtc::Candidate(pCand.candidate, pCand.mid));
                            }
                            it->second.pendingCandidates.clear();
                        } else {
                            log::warn("P2PManager: Ignoring duplicate answer from client {} (state={})", clientId, (int)state);
                        }
                    }
                }
            } else if (type == "offer") {
                auto sdp = msg.get<std::string>("sdp").unwrapOr("");
                if (!sdp.empty()) {
                    std::lock_guard lock(m_peersMutex);
                    auto it = m_peers.find(0);
                    if (it != m_peers.end() && it->second.pc) {
                        auto state = it->second.pc->signalingState();
                        if (state == rtc::PeerConnection::SignalingState::Stable) {
                            log::info("P2PManager: Received host's SDP offer via poll");
                            it->second.pc->setRemoteDescription(
                                rtc::Description(sdp, rtc::Description::Type::Offer, rtc::Description::Role::ActPass));
                            
                            for (auto const& pCand : it->second.pendingCandidates) {
                                it->second.pc->addRemoteCandidate(rtc::Candidate(pCand.candidate, pCand.mid));
                            }
                            it->second.pendingCandidates.clear();

                            it->second.pc->setLocalDescription();
                            
                            if (m_role == Role::Client) {
                                if (m_waitingTimerFlag) m_waitingTimerFlag->store(false);
                                queueInMainThread([this]() {
                                    for (auto& cb : m_onStatus) cb("Host found! Synchronizing...");
                                });
                            }
                        } else {
                            log::warn("P2PManager: Ignoring duplicate offer (state={})", (int)state);
                        }
                    }
                }
            } else if (type == "candidate") {
                auto cand = msg.get<std::string>("candidate").unwrapOr("");
                auto mid = msg.get<std::string>("mid").unwrapOr("");
                int clientId = msg.get<int>("playerId").unwrapOr(-1);
                int fromId = (m_role == Role::Host) ? clientId : 0;
                
                if (!cand.empty() && !mid.empty() && fromId >= 0) {
                    std::lock_guard lock(m_peersMutex);
                    auto it = m_peers.find(fromId);
                    if (it != m_peers.end() && it->second.pc) {
                        it->second.remoteIceCount++;
                        rtc::Candidate rtcCand(cand, mid);
                        if (rtcCand.type() == rtc::Candidate::Type::ServerReflexive) {
                            it->second.remoteStunCount++;
                        } else if (rtcCand.type() == rtc::Candidate::Type::Relayed) {
                            it->second.remoteTurnCount++;
                        }
                        if (it->second.pc->remoteDescription().has_value()) {
                            auto candType = rtcCand.type();
                            std::string typeStr = "host";
                            if (candType == rtc::Candidate::Type::ServerReflexive) typeStr = "srflx";
                            else if (candType == rtc::Candidate::Type::PeerReflexive) typeStr = "prflx";
                            else if (candType == rtc::Candidate::Type::Relayed) typeStr = "relay";
                            log::info("P2PManager: Adding remote {} candidate from {}", typeStr, fromId);
                            it->second.pc->addRemoteCandidate(rtcCand);
                        } else {
                            log::info("P2PManager: Remote description not set, buffering candidate from {}", fromId);
                            if (it->second.pendingCandidates.size() >= MAX_PENDING_CANDIDATES) {
                                it->second.pendingCandidates.erase(it->second.pendingCandidates.begin());
                            }
                            it->second.pendingCandidates.push_back({cand, mid});
                        }
                        
                        if (m_role == Role::Client && m_state.load() == State::Connecting && fromId == 0) {
                            if (m_waitingTimerFlag) m_waitingTimerFlag->store(false);
                            int totalStun = it->second.localStunCount + it->second.remoteStunCount;
                            int totalTurn = it->second.localTurnCount + it->second.remoteTurnCount;
                            queueInMainThread([this, totalStun, totalTurn]() {
                                std::string status;
                                if (totalTurn > 0) {
                                    status = fmt::format("Testing TURN routes ({})...", totalTurn);
                                } else if (totalStun > 0) {
                                    status = fmt::format("Testing STUN routes ({})...", totalStun);
                                } else {
                                    status = "Checking routes...";
                                }
                                for (auto& cb : m_onStatus) {
                                    cb(status);
                                }
                            });
                        }
                    }
                }
            } else if (type == "error") {
                auto errMsg = msg.get<std::string>("error").unwrapOr("Unknown error");
                log::error("P2PManager: Received signaling error: {}", errMsg);
                failSession(errMsg);
                return;
            }
        }
    }



    void P2PManager::joinSession(std::string const& roomCode, std::string const& playerName, std::string const& password) {
        {
            std::lock_guard lock(m_stateMutex);
            m_role = Role::Client;
            m_roomCode = roomCode;
            m_localPlayerName = playerName;
            m_error.clear();
        }
        m_state.store(State::Connecting);

        signalingJoinRoom(roomCode, playerName, password);
    }

    void P2PManager::signalingJoinRoom(std::string const& roomCode, std::string const& playerName, std::string const& password) {
        if (m_signalingActive) return;
        m_signalingActive = true;
        m_hostToken.clear();
        m_playerToken.clear();
        int attemptId = ++m_connectionAttemptId;

        for (auto& cb : m_onStatus) cb("Connecting to lobby...");

        auto req = geode::utils::web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Content-Type", "application/json");
        req.timeout(asp::Duration::fromSecs(15));

        matjson::Value body = matjson::makeObject({
            {"action", "join"},
            {"roomCode", roomCode},
            {"playerName", playerName},
            {"iconStr", buildLocalIconStr()},
            {"colorIndex", getLocalSavedCursorColor()}
        });
        if (password != "") {
            body.set("password", password);
        }

        req.bodyJSON(body);

        auto url = getSignalingUrl() + "/rooms/" + roomCode + "/join";
        log::info("P2PManager: Joining room {} on signaling server", roomCode);
        m_signalingListener.spawn(
            req.post(url),
            [this, roomCode, playerName, attemptId](web::WebResponse res) {
                if (m_connectionAttemptId.load() != attemptId) return;
                if (res.ok()) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    m_localPlayerId = json.get<int>("playerId").unwrapOr(-1);
                    m_playerToken = json.get<std::string>("playerToken").unwrapOr("");
                    auto hostName = json.get<std::string>("hostName").unwrapOr("Host");
                    auto hostIconStr = json.get<std::string>("hostIconStr").unwrapOr("");
                    int hostColorIndex = json.get<int>("hostColorIndex").unwrapOr(0);

                    if (m_localPlayerId < 0) {
                        failSession("Failed to join room");
                        return;
                    }

                    m_waitingTimerFlag = std::make_shared<std::atomic<bool>>(true);
                    auto timerFlag = m_waitingTimerFlag;

                    std::thread([this, attemptId, timerFlag]() {
                        int secondsLeft = 8;
                        while (secondsLeft > 0 && timerFlag->load() && m_connectionAttemptId.load() == attemptId) {
                            geode::queueInMainThread([this, attemptId, timerFlag, secondsLeft]() {
                                if (timerFlag->load() && m_connectionAttemptId.load() == attemptId) {
                                    for (auto& cb : m_onStatus) cb(fmt::format("Waiting for Host (can take up to {}s)...", secondsLeft));
                                }
                            });
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            secondsLeft--;
                        }
                        if (secondsLeft == 0 && timerFlag->load() && m_connectionAttemptId.load() == attemptId) {
                            geode::queueInMainThread([this, attemptId, timerFlag]() {
                                if (timerFlag->load() && m_connectionAttemptId.load() == attemptId) {
                                    for (auto& cb : m_onStatus) cb("Waiting for Host (Host might be unresponsive)...");
                                }
                            });
                        }
                    }).detach();

                    log::info("P2PManager: Joined room {} as player {}", roomCode, m_localPlayerId);

                    m_turnServers.clear();
                    if (json.contains("turnServers") && json["turnServers"].isArray()) {
                        for (auto const& item : json["turnServers"].asArray().unwrap()) {
                            TurnServerInfo info;
                            info.urls = item.get<std::string>("urls").unwrapOr("");
                            info.username = item.get<std::string>("username").unwrapOr("");
                            info.credential = item.get<std::string>("credential").unwrapOr("");
                            if (!info.urls.empty()) {
                                m_turnServers.push_back(std::move(info));
                            }
                        }
                    }

                    auto mode = Mod::get()->getSettingValue<std::string>("ice-transport-mode");
                    bool hasUsableTurn = false;
                    for (auto const& ts : m_turnServers) {
                        if (!ts.urls.empty() && !isTcpOrTlsTurnUrl(ts.urls)) {
                            hasUsableTurn = true;
                            break;
                        }
                    }
                    if (mode != "STUN Only" && !hasUsableTurn && !m_playerToken.empty()) {
                        fetchTurnServers(roomCode);
                    }

                    std::shared_ptr<rtc::PeerConnection> pc;
                    try {
                        pc = std::make_shared<rtc::PeerConnection>(makeRtcConfig());
                    } catch (std::exception const& e) {
                        log::error("P2PManager: Failed to create peer connection: {}", e.what());
                        failSession("Failed to create peer connection");
                        return;
                    }

                    PeerInfo hostPeer;
                    hostPeer.pc = pc;
                    hostPeer.playerId = 0;
                    hostPeer.playerName = hostName;
                    hostPeer.colorIndex = hostColorIndex;
                    hostPeer.iconStr = hostIconStr;

                    int myId = m_localPlayerId;

                    pc->onDataChannel([this](std::shared_ptr<rtc::DataChannel> dc) {
                        bool isReliable = dc->label() == "reliable";
                        log::info("P2PManager: Received {} data channel", dc->label());

                        {
                            std::lock_guard lock(m_peersMutex);
                            auto it = m_peers.find(0);
                            if (it != m_peers.end()) {
                                if (isReliable) it->second.reliable = dc;
                                else it->second.unreliable = dc;
                            }
                        }

                        dc->onOpen([this, isReliable]() {
                            log::info("P2PManager: {} channel to host opened", isReliable ? "Reliable" : "Unreliable");
                            queueInMainThread([this]() {
                                for (auto& cb : m_onStatus) cb("Opening game data streams...");
                            });
                            checkPeerReady(0);
                        });

                        dc->onMessage([this](auto data) {
                            if (auto* binaryMsg = std::get_if<rtc::binary>(&data)) {
                                onPeerMessage(0, reinterpret_cast<const uint8_t*>(binaryMsg->data()), binaryMsg->size());
                            }
                        });

                        dc->onClosed([this]() { log::info("P2PManager: Channel to host closed"); });
                    });



                    auto answerSent = std::make_shared<std::atomic<bool>>(false);

                    pc->onLocalCandidate([this, myId, roomCode](rtc::Candidate candidate) {
                        auto candType = candidate.type();
                        std::string typeStr = "host";
                        if (candType == rtc::Candidate::Type::ServerReflexive) typeStr = "srflx";
                        else if (candType == rtc::Candidate::Type::PeerReflexive) typeStr = "prflx";
                        else if (candType == rtc::Candidate::Type::Relayed) typeStr = "relay";
                        log::info("P2PManager: Client generated {} candidate", typeStr);

                        auto body = matjson::Value();
                        body["type"] = "candidate";
                        body["candidate"] = std::string(candidate.candidate());
                        body["mid"] = std::string(candidate.mid());
                        body["playerId"] = myId;
                        queueInMainThread([this, roomCode, body, candType]() {
                            {
                                std::lock_guard lock(m_peersMutex);
                                if (m_peers.find(0) != m_peers.end()) {
                                    m_peers[0].localIceCount++;
                                    if (candType == rtc::Candidate::Type::ServerReflexive) {
                                        m_peers[0].localStunCount++;
                                    } else if (candType == rtc::Candidate::Type::Relayed) {
                                        m_peers[0].localTurnCount++;
                                    }
                                    if (m_state.load() == State::Connecting) {
                                        int totalStun = m_peers[0].localStunCount + m_peers[0].remoteStunCount;
                                        int totalTurn = m_peers[0].localTurnCount + m_peers[0].remoteTurnCount;
                                        std::string status;
                                        if (totalTurn > 0) {
                                            status = fmt::format("Testing TURN routes ({})...", totalTurn);
                                        } else if (totalStun > 0) {
                                            status = fmt::format("Testing STUN routes ({})...", totalStun);
                                        } else {
                                            status = "Checking routes...";
                                        }
                                        for (auto& cb : m_onStatus) {
                                            cb(status);
                                        }
                                    }
                                }
                            }
                            sendSignalingMessage(roomCode, body);
                        });
                    });

                    pc->onLocalDescription([this, pc, myId, roomCode, answerSent](rtc::Description desc) {
                        std::string sdp = std::string(desc);

                        size_t setupPos = sdp.find("a=setup:actpass");
                        while (setupPos != std::string::npos) {
                            sdp.replace(setupPos, 15, "a=setup:active");
                            setupPos = sdp.find("a=setup:actpass", setupPos);
                        }

                        log::info("P2PManager: Local description set, sending SDP answer via HTTP (early/trickle)");

                        queueInMainThread([this, sdp, myId, roomCode, answerSent]() {
                            if (answerSent->exchange(true)) return;
                            auto body = matjson::Value();
                            body["type"] = "answer";
                            body["sdp"] = sdp;
                            body["playerId"] = myId;
                            sendSignalingMessage(roomCode, body);
                        });
                    });

                    pc->onGatheringStateChange([this, pc, myId, roomCode, answerSent](
                        rtc::PeerConnection::GatheringState state)
                    {
                        if (state == rtc::PeerConnection::GatheringState::Complete) {
                            auto desc = pc->localDescription();
                            if (desc.has_value()) {
                                std::string sdp = std::string(desc.value());

                                size_t setupPos = sdp.find("a=setup:actpass");
                                while (setupPos != std::string::npos) {
                                    sdp.replace(setupPos, 15, "a=setup:active");
                                    setupPos = sdp.find("a=setup:actpass", setupPos);
                                }

                                queueInMainThread([this, sdp, myId, roomCode, answerSent]() {
                                    if (answerSent->exchange(true)) return;
                                    log::info("P2PManager: ICE gathering complete, sending SDP answer via HTTP (fallback)");
                                    auto body = matjson::Value();
                                    body["type"] = "answer";
                                    body["sdp"] = sdp;
                                    body["playerId"] = myId;
                                    sendSignalingMessage(roomCode, body);
                                });
                            }
                        }
                    });

                    pc->onStateChange([this](rtc::PeerConnection::State state) {
                        queueInMainThread([this, state]() {
                            std::string stateStr;
                            switch (state) {
                                case rtc::PeerConnection::State::New: stateStr = "New"; break;
                                case rtc::PeerConnection::State::Connecting: {
                                    int totalStun = 0;
                                    int totalTurn = 0;
                                    {
                                        std::lock_guard lock(m_peersMutex);
                                        if (m_peers.find(0) != m_peers.end()) {
                                            totalStun = m_peers.at(0).localStunCount + m_peers.at(0).remoteStunCount;
                                            totalTurn = m_peers.at(0).localTurnCount + m_peers.at(0).remoteTurnCount;
                                        }
                                    }
                                    if (totalTurn > 0) {
                                        stateStr = fmt::format("Testing TURN routes ({})...", totalTurn);
                                    } else if (totalStun > 0) {
                                        stateStr = fmt::format("Testing STUN routes ({})...", totalStun);
                                    } else {
                                        stateStr = "Checking routes...";
                                    }
                                    break;
                                }
                                case rtc::PeerConnection::State::Connected: {
                                    auto type = getConnectionType(0);
                                    if (type == "STUN") {
                                        stateStr = "Connected (STUN)! Securing...";
                                    } else if (type == "TURN") {
                                        stateStr = "Connected (TURN)! Securing...";
                                    } else if (type == "LAN") {
                                        stateStr = "Connected (LAN)! Securing...";
                                    } else {
                                        stateStr = "Connected! Securing...";
                                    }
                                    break;
                                }
                                case rtc::PeerConnection::State::Disconnected: stateStr = "Disconnected"; break;
                                case rtc::PeerConnection::State::Failed: stateStr = "Connection Failed"; break;
                                case rtc::PeerConnection::State::Closed: stateStr = "Closed"; break;
                            }
                            for (auto& cb : m_onStatus) cb(stateStr);

                            if (state == rtc::PeerConnection::State::Disconnected) {
                                scheduleDisconnectCheck(0, 5000);
                            } else if (state == rtc::PeerConnection::State::Failed ||
                                       state == rtc::PeerConnection::State::Closed) {
                                onPeerDisconnected(0, true);
                            } else if (state == rtc::PeerConnection::State::Connected) {
                                cancelDisconnectCheck(0);
                            }
                        });
                    });

                    {
                        std::lock_guard lock(m_peersMutex);
                        m_peers[0] = std::move(hostPeer);
                    }

                    startSignalPolling(roomCode, "client", m_localPlayerId);
                    armConnectionWatchdog(attemptId, 45, "Timed out connecting to host");

                } else if (res.code() == 404) {
                    failSession("Room not found");
                } else if (res.code() == 410) {
                    failSession("Lobby is no longer active");
                } else if (res.code() == 403) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    auto errMsg = json.get<std::string>("error").unwrapOr("Access denied");
                    failSession(errMsg);
                } else {
                    auto json = res.json().unwrapOr(matjson::Value());
                    std::string errMsg = json.get<std::string>("error").unwrapOr("HTTP " + std::to_string(res.code()));
                    failSession("Failed to join room: " + errMsg);
                }
            }
        );
    }
    void P2PManager::joinDedicatedServer(std::string const& url, std::string const& roomCode, std::string const& playerName, std::string const& password) {
        {
            std::lock_guard lock(m_stateMutex);
            if (m_state.load() != State::Disconnected && m_state.load() != State::Error) {
                return;
            }
            m_state.store(State::Connecting);
            m_role = Role::Client;
            m_roomCode = roomCode;
            m_localPlayerName = playerName;
            m_isDedicated = true;
            m_error.clear();
            m_hostToken.clear();
            m_playerToken.clear();
        }
        int attemptId = ++m_connectionAttemptId;
        for (auto& cb : m_onStatus) cb("Connecting to server...");

        std::string finalUrl = geode::utils::string::trim(url);
        if (finalUrl.starts_with("ws://") && (finalUrl.find("ngrok.io") != std::string::npos || finalUrl.find("ngrok.app") != std::string::npos || finalUrl.find("ngrok-free.app") != std::string::npos)) {
            finalUrl.replace(0, 5, "wss://");
        }
        if (!finalUrl.empty() && finalUrl.back() == '/') finalUrl.pop_back();

        std::string fullUrl = finalUrl + "/" + roomCode;
        if (!password.empty()) fullUrl += "?password=" + urlEncode(password);

        {
            std::lock_guard lock(m_peersMutex);
            PeerInfo serverPeer;
            serverPeer.playerId = 0;
            serverPeer.playerName = playerName;
            m_peers[0] = std::move(serverPeer);
        }

        rtc::WebSocketConfiguration wsConfig;
        wsConfig.pingInterval = std::chrono::milliseconds(15000);
        wsConfig.maxMessageSize = 16 * 1024 * 1024;
        wsConfig.disableTlsVerification = false;
        try {
            m_webSocket = std::make_shared<rtc::WebSocket>(wsConfig);
        } catch (std::exception const& e) {
            log::error("P2PManager: Failed to create WebSocket: {}", e.what());
            failSession("Failed to connect to server");
            return;
        }

        m_webSocket->onOpen([this, attemptId]() {
            queueInMainThread([this, attemptId]() {
                if (m_connectionAttemptId.load() != attemptId) return;
                for (auto& cb : m_onStatus) cb("Connected! Handshaking...");

                auto handshake = proto::serializePlayerJoined(0, m_localPlayerName, getLocalSavedCursorColor(), buildLocalIconStr());
                try {
                    m_webSocket->send(reinterpret_cast<const std::byte*>(handshake.data()), handshake.size());
                } catch (std::exception const& e) {
                    log::warn("P2PManager: Handshake failed: {}", e.what());
                }
            });
        });

        m_webSocket->onMessage([this, attemptId](auto data) {
            if (auto* binaryMsg = std::get_if<rtc::binary>(&data)) {
                queueInMainThread([this, attemptId, data = *binaryMsg]() {
                    if (m_connectionAttemptId.load() != attemptId) return;
                    onPeerMessage(0, reinterpret_cast<const uint8_t*>(data.data()), data.size());
                });
            }
        });

        m_webSocket->onClosed([this, attemptId]() {
            queueInMainThread([this, attemptId]() {
                if (m_connectionAttemptId.load() != attemptId) return;
                log::info("P2PManager: WebSocket closed");
                onPeerDisconnected(0, true);
            });
        });

        m_webSocket->onError([this, attemptId](std::string const& error) {
            queueInMainThread([this, attemptId, error]() {
                if (m_connectionAttemptId.load() != attemptId) return;
                log::error("P2PManager: WebSocket error: {}", error);
                failSession("WebSocket Error: " + error);
            });
        });

        try {
            m_webSocket->open(fullUrl);
        } catch (std::exception const& e) {
            log::error("P2PManager: Failed to open WebSocket: {}", e.what());
            m_webSocket.reset();
            failSession("Invalid server URL");
            return;
        }
        armConnectionWatchdog(attemptId, 15, "Server handshake timed out");
    }


    void P2PManager::createHostPeer(int clientPlayerId, std::string const& clientName, std::string const& iconStr, int colorIndex) {
        int attemptId = m_connectionAttemptId.load();
        std::shared_ptr<rtc::PeerConnection> pc;
        try {
            pc = std::make_shared<rtc::PeerConnection>(makeRtcConfig());
        } catch (std::exception const& e) {
            log::error("P2PManager: Failed to create peer connection for player {}: {}", clientPlayerId, e.what());
            auto errBody = matjson::makeObject({
                {"type", "error"},
                {"error", "Connection failed"},
                {"targetPlayerId", clientPlayerId}
            });
            sendSignalingMessage(m_roomCode, errBody);
            return;
        }

        auto reliable = pc->createDataChannel("reliable");

        rtc::DataChannelInit unreliableInit;
        unreliableInit.reliability.maxRetransmits = 0;
        auto unreliable = pc->createDataChannel("unreliable", unreliableInit);

        PeerInfo peer;
        peer.pc = pc;
        peer.reliable = reliable;
        peer.unreliable = unreliable;
        peer.playerId = clientPlayerId;
        peer.playerName = clientName;
        peer.colorIndex = (colorIndex >= 0) ? colorIndex : (clientPlayerId % 16);
        peer.iconStr = iconStr;

        auto setupChannelCallbacks = [this, clientPlayerId](std::shared_ptr<rtc::DataChannel> dc, bool isReliable) {
            dc->onOpen([this, clientPlayerId, isReliable]() {
                log::info("P2PManager: {} channel to player {} opened",
                    isReliable ? "Reliable" : "Unreliable", clientPlayerId);
                checkPeerReady(clientPlayerId);
            });

            dc->onMessage([this, clientPlayerId](auto data) {
                if (auto* binaryMsg = std::get_if<rtc::binary>(&data)) {
                    onPeerMessage(clientPlayerId,
                        reinterpret_cast<const uint8_t*>(binaryMsg->data()),
                        binaryMsg->size());
                }
            });

            dc->onClosed([this, clientPlayerId, isReliable]() {
                log::info("P2PManager: {} channel to player {} closed",
                    isReliable ? "Reliable" : "Unreliable", clientPlayerId);
                if (isReliable) {
                    queueInMainThread([this, clientPlayerId]() {
                        onPeerDisconnected(clientPlayerId, false);
                    });
                }
            });
        };

        setupChannelCallbacks(reliable, true);
        setupChannelCallbacks(unreliable, false);

        auto roomCode = getRoomCode();

        auto offerSent = std::make_shared<std::atomic<bool>>(false);

        pc->onLocalCandidate([this, clientPlayerId, roomCode](rtc::Candidate candidate) {
            auto candType = candidate.type();
            std::string typeStr = "host";
            if (candType == rtc::Candidate::Type::ServerReflexive) typeStr = "srflx";
            else if (candType == rtc::Candidate::Type::PeerReflexive) typeStr = "prflx";
            else if (candType == rtc::Candidate::Type::Relayed) typeStr = "relay";
            log::info("P2PManager: Host generated {} candidate for player {}", typeStr, clientPlayerId);

            auto body = matjson::Value();
            body["type"] = "candidate";
            body["candidate"] = std::string(candidate.candidate());
            body["mid"] = std::string(candidate.mid());
            body["targetPlayerId"] = clientPlayerId;
            queueInMainThread([this, roomCode, body]() {
                sendSignalingMessage(roomCode, body);
            });
        });

        pc->onLocalDescription([this, clientPlayerId, roomCode, offerSent](rtc::Description desc) {
            std::string sdp = std::string(desc);
            log::info("P2PManager: Local description set, sending SDP offer for player {} via HTTP (early/trickle)", clientPlayerId);

            queueInMainThread([this, sdp, clientPlayerId, roomCode, offerSent]() {
                if (offerSent->exchange(true)) return;
                auto body = matjson::Value();
                body["type"] = "offer";
                body["sdp"] = sdp;
                body["targetPlayerId"] = clientPlayerId;
                sendSignalingMessage(roomCode, body);
            });
        });

        pc->onGatheringStateChange([this, pc, clientPlayerId, roomCode, offerSent](
            rtc::PeerConnection::GatheringState state)
        {
            if (state == rtc::PeerConnection::GatheringState::Complete) {
                auto desc = pc->localDescription();
                if (desc.has_value()) {
                    std::string sdp = std::string(desc.value());

                    queueInMainThread([this, sdp, clientPlayerId, roomCode, offerSent]() {
                        if (offerSent->exchange(true)) return;
                        log::info("P2PManager: ICE gathering complete, sending SDP offer for player {} via HTTP (fallback)", clientPlayerId);
                        auto body = matjson::Value();
                        body["type"] = "offer";
                        body["sdp"] = sdp;
                        body["targetPlayerId"] = clientPlayerId;
                        sendSignalingMessage(roomCode, body);
                    });
                }
            }
        });

        pc->onStateChange([this, clientPlayerId](rtc::PeerConnection::State state) {
            if (state == rtc::PeerConnection::State::Disconnected) {
                queueInMainThread([this, clientPlayerId]() {
                    scheduleDisconnectCheck(clientPlayerId, 5000);
                });
            } else if (state == rtc::PeerConnection::State::Failed ||
                       state == rtc::PeerConnection::State::Closed) {
                queueInMainThread([this, clientPlayerId]() {
                    onPeerDisconnected(clientPlayerId, true);
                });
            } else if (state == rtc::PeerConnection::State::Connected) {
                queueInMainThread([this, clientPlayerId]() {
                    cancelDisconnectCheck(clientPlayerId);
                });
            }
        });

        pc->setLocalDescription();

        {
            auto desc = pc->localDescription();
            if (desc.has_value() && !offerSent->exchange(true)) {
                std::string sdp = std::string(desc.value());
                log::info("P2PManager: Sending SDP offer for player {} immediately after setLocalDescription", clientPlayerId);
                auto body = matjson::Value();
                body["type"] = "offer";
                body["sdp"] = sdp;
                body["targetPlayerId"] = clientPlayerId;
                sendSignalingMessage(roomCode, body);
            }
        }

        {
            std::lock_guard lock(m_peersMutex);
            m_peers[clientPlayerId] = std::move(peer);
        }

        std::thread([this, clientPlayerId, attemptId]() {
            std::this_thread::sleep_for(std::chrono::seconds(35));
            geode::queueInMainThread([this, clientPlayerId, attemptId]() {
                if (m_connectionAttemptId.load() != attemptId) return;
                if (m_role != Role::Host) return;
                bool needsDisconnect = false;
                {
                    std::lock_guard lock(m_peersMutex);
                    auto it = m_peers.find(clientPlayerId);
                    if (it != m_peers.end() && !it->second.ready) {
                        needsDisconnect = true;
                    }
                }
                if (needsDisconnect) {
                    log::warn("P2PManager: Handshake timed out for client {}, cleaning up", clientPlayerId);
                    onPeerDisconnected(clientPlayerId, true);
                }
            });
        }).detach();
    }



    void P2PManager::checkPeerReady(int playerId) {
        bool becameReady = false;
        int pid = -1;
        std::string name;
        int colorIdx = 0;
        std::string iconStr;
        std::vector<PendingMessage> pending;

        {
            std::lock_guard lock(m_peersMutex);
            auto it = m_peers.find(playerId);
            if (it == m_peers.end()) return;

            auto& peer = it->second;
            bool reliableOpen = peer.reliable && peer.reliable->isOpen();
            bool unreliableOpen = peer.unreliable && peer.unreliable->isOpen();

            if (reliableOpen && unreliableOpen && !peer.ready) {
                peer.ready = true;
                pid = peer.playerId;
                name = peer.playerName;
                colorIdx = peer.colorIndex;
                iconStr = peer.iconStr;
                becameReady = true;

                pending = std::move(peer.pendingMessages);
                peer.pendingMessages.clear();

                log::info("P2PManager: Player {} ({}) fully connected", pid, name);
            }
        }

        if (!becameReady) return;

        for (auto& msg : pending) {
            sendTo(pid, msg.data, msg.channel);
        }

        if (m_role == Role::Client && pid == 0) {
            m_state.store(State::Connected);
        }

        queueInMainThread([this, pid, name, colorIdx, iconStr]() {
            if (m_role == Role::Client && pid == 0) {
                stopSignalPolling();
                auto roomCode = getRoomCode();
                auto callbacks = m_onSessionStarted;
                for (auto& cb : callbacks) {
                    cb(roomCode, m_localPlayerId);
                }
            }

            auto peerCallbacks = m_onPeerConnected;
            for (auto& cb : peerCallbacks) {
                cb(pid, name, colorIdx, iconStr);
            }

            if (m_role == Role::Client && pid == 0) {
                auto myMsg = proto::serializePlayerJoined(m_localPlayerId, m_localPlayerName, getLocalSavedCursorColor(), buildLocalIconStr());
                sendTo(0, myMsg, ChannelType::Reliable);
            }

            if (m_role == Role::Host) {
                auto msg = proto::serializePlayerJoined(pid, name, colorIdx, iconStr);
                broadcast(msg, ChannelType::Reliable, pid);
                
                std::vector<std::vector<uint8_t>> existingPeerMsgs;
                {
                    std::lock_guard lock(m_peersMutex);
                    for (auto& [existingId, peer] : m_peers) {
                        if (existingId != pid && peer.ready) {
                            existingPeerMsgs.push_back(
                                proto::serializePlayerJoined(existingId, peer.playerName, peer.colorIndex, peer.iconStr)
                            );
                        }
                    }
                }
                
                for (auto const& peerMsg : existingPeerMsgs) {
                    sendTo(pid, peerMsg, ChannelType::Reliable);
                }
                
                auto hostMsg = proto::serializePlayerJoined(0, m_localPlayerName, getLocalSavedCursorColor(), buildLocalIconStr());
                sendTo(pid, hostMsg, ChannelType::Reliable);
            }
        });
    }



    void P2PManager::leaveSession() {
        m_connectionAttemptId++;
        stopSignalPolling();
        m_signalingListener.cancel();
        m_roomListListener.cancel();
        m_turnListener.cancel();
        if (m_waitingTimerFlag) {
            m_waitingTimerFlag->store(false);
        }

        {
            std::lock_guard lock(m_peersMutex);
            for (auto& [id, peer] : m_peers) {
                if (peer.reliable) peer.reliable->close();
                if (peer.unreliable) peer.unreliable->close();
                if (peer.pc) peer.pc->close();
            }
            m_peers.clear();
        }

        Role role;
        std::string roomCode;
        int localPlayerId;
        std::string hostToken;
        std::string playerToken;
        {
            std::lock_guard lock(m_stateMutex);
            role = m_role;
            roomCode = m_roomCode;
            localPlayerId = m_localPlayerId;
            hostToken = m_hostToken;
            playerToken = m_playerToken;
        }

        if (role == Role::Host && !roomCode.empty()) {
            auto url = getSignalingUrl() + "/rooms/" + roomCode;
            auto req = web::WebRequest();
            req.header("ngrok-skip-browser-warning", "1");
            if (!hostToken.empty()) {
                req.header("X-Room-Token", hostToken);
            }
            req.timeout(asp::Duration::fromSecs(10));
            async::spawn(req.send("DELETE", url));
        }

        if (role == Role::Client && !roomCode.empty() && localPlayerId >= 0 && !m_isDedicated) {
            auto url = getSignalingUrl() + "/rooms/" + roomCode + "/leave";
            auto req = geode::utils::web::WebRequest();
            req.header("ngrok-skip-browser-warning", "1");
            req.header("Content-Type", "application/json");
            if (!playerToken.empty()) {
                req.header("X-Player-Token", playerToken);
            }
            auto body = matjson::makeObject({{"playerId", localPlayerId}});
            req.bodyJSON(body);
            req.timeout(asp::Duration::fromSecs(10));
            async::spawn(req.post(url));
        }

        {
            std::lock_guard lock(m_incomingMutex);
            std::queue<QueuedMessage> empty;
            std::swap(m_incoming, empty);
        }

        {
            std::lock_guard lock(m_stateMutex);
            m_role = Role::None;
            m_roomCode.clear();
            m_localPlayerId = -1;
            m_localPlayerName.clear();
            m_error.clear();

            if (m_webSocket) {
                auto ws = m_webSocket;
                m_webSocket = nullptr;
                std::thread([ws]() {
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    ws->close();
                }).detach();
            }
            m_isDedicated = false;
            m_hostToken.clear();
            m_playerToken.clear();
        }

        m_state.store(State::Disconnected);
        m_nextPlayerId = 1;
        m_signalingRoomId.clear();
        m_turnServers.clear();
        m_settings = RoomSettings();

        log::info("P2PManager: Session ended");
    }

}
