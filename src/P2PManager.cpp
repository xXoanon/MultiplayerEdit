#include "P2PManager.hpp"
#include "utils/ChatFilter.hpp"
#include "BinaryProtocol.hpp"
#include "RemoteActionHandler.hpp"

#include <rtc/rtc.hpp>
#include <rtc/websocket.hpp>
#include <Geode/Geode.hpp>
#include <Geode/utils/web.hpp>
#include <thread>
#include <chrono>

using namespace geode::prelude;

namespace mpedit {



    P2PManager& P2PManager::get() {
        static P2PManager instance;
        return instance;
    }

    P2PManager::P2PManager() {
        rtc::InitLogger(rtc::LogLevel::Warning);
    }

    P2PManager::~P2PManager() {
        leaveSession();
    }



    rtc::Configuration P2PManager::makeRtcConfig() {
        rtc::Configuration config;
        config.iceServers.push_back({"stun:stun.l.google.com:19302"});
        config.iceServers.push_back({"stun:stun.cloudflare.com:3478"});
        config.maxMessageSize = 250 * 1024 * 1024;
        return config;
    }

    std::string P2PManager::getSignalingUrl() {
        auto url = Mod::get()->getSettingValue<std::string>("signaling-url");
        if (url.empty()) return "https://dewy-flea-9364.d050.deno.net";
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
            } else if (m_role == Role::Host) {
                broadcast(proto::serializePingUpdate(0), ChannelType::Unreliable);
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

        {
            std::lock_guard lock(m_incomingMutex);
            m_incoming.push(QueuedMessage{
                fromPlayerId,
                std::vector<uint8_t>(data, data + len)
            });
        }

        if (m_role == Role::Host) {
            uint8_t opcode = data[0];
            if (opcode == static_cast<uint8_t>(proto::Opcode::Heartbeat) ||
                opcode == static_cast<uint8_t>(proto::Opcode::Ping) ||
                opcode == static_cast<uint8_t>(proto::Opcode::Pong)) return;

            ChannelType ch = ChannelType::Reliable;
            if (opcode == static_cast<uint8_t>(proto::Opcode::CursorUpdate) ||
                opcode == static_cast<uint8_t>(proto::Opcode::MoveBatch) ||
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
            auto body = matjson::makeObject({{"playerName", playerName},
            {"iconStr", fmt::format("{}:{}:{}:{}:{}", GameManager::sharedState()->getPlayerFrame(), GameManager::sharedState()->getPlayerColor(), GameManager::sharedState()->getPlayerColor2(), GameManager::sharedState()->getPlayerGlow() ? 1 : 0, GameManager::sharedState()->getPlayerGlowColor())}});
            req.bodyJSON(body);
            async::spawn(req.send("POST", url));
        }
    }

    void P2PManager::onPeerDisconnected(int playerId, bool unexpected) {
        dispatchMessages();
        
        {
            std::lock_guard lock(m_peersMutex);
            auto it = m_peers.find(playerId);
            if (it != m_peers.end()) {
                if (it->second.pc) it->second.pc->close();
                m_peers.erase(it);
            }
        }

        if (m_role == Role::Host) {
            proto::Writer w;
            w.writeOpcode(proto::Opcode::PlayerLeft);
            w.writeVarInt(static_cast<uint32_t>(playerId));
            broadcast(w.data(), ChannelType::Reliable);
        }

        log::info("P2PManager: Player {} disconnected (unexpected={})", playerId, unexpected);

        queueInMainThread([this, playerId, unexpected]() {
            if (m_role == Role::Client && playerId == 0) {
                for (auto& cb : m_onError) {
                    cb("Host disconnected");
                }
                return;
            }

            for (auto& cb : m_onPeerDisconnected) {
                cb(playerId);
            }

            if (m_role == Role::Host) {
                auto msg = proto::serializePlayerLeft(playerId);
                broadcast(msg, ChannelType::Reliable);
                if (!m_roomCode.empty()) {
                    auto url = getSignalingUrl() + "/rooms/" + m_roomCode + "/leave";
                    auto req = geode::utils::web::WebRequest();
                    req.header("ngrok-skip-browser-warning", "1");
                    req.header("Content-Type", "application/json");
                    auto body = matjson::makeObject({{"playerId", playerId}});
                    req.bodyJSON(body);
                    async::spawn(req.send("POST", url));
                }
            }
        });
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

        auto req = geode::utils::web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Content-Type", "application/json");

        matjson::Value body = matjson::makeObject({
            {"action", "create"},
            {"hostName", playerName},
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
            [this](web::WebResponse res) {
                if (res.ok()) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    auto roomCode = json.get<std::string>("roomCode").unwrapOr("");
                    m_signalingRoomId = json.get<std::string>("roomId").unwrapOr("");

                     if (roomCode.empty()) {
                        std::vector<ErrorCb> callbacks;
                        std::string err;
                        {
                            std::lock_guard lock(m_stateMutex);
                            m_error = "Failed to create room: no room code";
                            m_state.store(State::Error);
                            callbacks = m_onError;
                            err = m_error;
                        }
                        for (auto& cb : callbacks) cb(err);
                        return;
                    }

                    {
                        std::lock_guard lock(m_stateMutex);
                        m_roomCode = roomCode;
                    }
                    m_state.store(State::Connected);

                    log::info("P2PManager: Room created with code: {}", roomCode);

                    startSignalPolling(roomCode, "host", 0);
                    
                    std::vector<SessionStartedCb> callbacks;
                    {
                        std::lock_guard lock(m_stateMutex);
                        callbacks = m_onSessionStarted;
                    }
                    for (auto& cb : callbacks) cb(roomCode, 0);

                } else {
                    std::vector<ErrorCb> callbacks;
                    std::string err;
                    {
                        std::lock_guard lock(m_stateMutex);
                        m_error = "Signaling error: " + res.string().unwrapOr("unknown error");
                        m_state.store(State::Error);
                        callbacks = m_onError;
                        err = m_error;
                    }
                    for (auto& cb : callbacks) cb(err);
                    m_signalingActive = false;
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
        
        m_signalingListener.spawn(
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

        float timeoutSec = 1.0f;

        auto url = getSignalingUrl() + "/rooms/" + code + "/signal?role=" + role + "&playerId=" + std::to_string(playerId) + "&timeout=" + std::to_string(static_cast<int>(timeoutSec * 1000));

        auto req = web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.timeout(std::chrono::seconds(30));

        m_signalPollListener.spawn(
            req.get(url),
            [this, code, role, playerId](web::WebResponse res) {
                if (!m_signalingActive.load()) return;

                if (res.ok()) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    handleSignalingMessages(json);
                } else {
                    log::warn("P2PManager: Signal poll returned {}", res.code());
                }

                if (m_signalingActive.load()) {
                    float delay = 25.0f;
                    if (std::chrono::steady_clock::now() < m_fastPollEndTime) {
                        delay = 1.0f;
                    }
                    
                    std::thread([this, code, role, playerId, delay]() {
                        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(delay * 1000)));
                        geode::queueInMainThread([this, code, role, playerId]() {
                            pollSignalOnce(code, role, playerId);
                        });
                    }).detach();
                }
            }
        );
    }

    void P2PManager::extendFastPoll() {
        m_fastPollEndTime = std::chrono::steady_clock::now() + std::chrono::seconds(30);
    }

    void P2PManager::stopSignalPolling() {
        m_signalingActive.store(false);
        m_signalPollListener.cancel();
    }

    void P2PManager::sendSignalingMessage(std::string const& roomCode, matjson::Value const& msg) {
        extendFastPoll();
        auto url = getSignalingUrl() + "/rooms/" + roomCode + "/signal";
        auto req = web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Content-Type", "application/json");
        req.bodyJSON(msg);
        async::spawn(req.post(url));
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
                    } else {
                        m_nextPlayerId = std::max(m_nextPlayerId, clientId + 1);
                        createHostPeer(clientId, clientName, iconStr);
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
                        if (it->second.pc->remoteDescription().has_value()) {
                            rtc::Candidate rtcCand(cand, mid);
                            it->second.pc->addRemoteCandidate(rtcCand);
                        } else {
                            log::info("P2PManager: Remote description not set, buffering candidate from {}", fromId);
                            it->second.pendingCandidates.push_back({cand, mid});
                        }
                        
                        if (m_role == Role::Client && m_state.load() == State::Connecting && fromId == 0) {
                            if (m_waitingTimerFlag) m_waitingTimerFlag->store(false);
                            queueInMainThread([this, totalCount = it->second.localIceCount + it->second.remoteIceCount]() {
                                for (auto& cb : m_onStatus) {
                                    cb(fmt::format("Checking routes ({} found)...", totalCount));
                                }
                            });
                        }
                    }
                }
            } else if (type == "error") {
                auto errMsg = msg.get<std::string>("error").unwrapOr("Unknown error");
                log::error("P2PManager: Received signaling error: {}", errMsg);
                
                std::vector<ErrorCb> callbacks;
                {
                    std::lock_guard lock(m_stateMutex);
                    m_error = errMsg;
                    m_state.store(State::Error);
                    callbacks = m_onError;
                }
                for (auto& cb : callbacks) cb(errMsg);
                leaveSession();
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

        for (auto& cb : m_onStatus) cb("Connecting to lobby...");

        auto req = geode::utils::web::WebRequest();
        req.header("ngrok-skip-browser-warning", "1");
        req.header("Content-Type", "application/json");

        matjson::Value body = matjson::makeObject({
            {"action", "join"},
            {"roomCode", roomCode},
            {"playerName", playerName},
            {"iconStr", fmt::format("{}:{}:{}:{}:{}", GameManager::sharedState()->getPlayerFrame(), GameManager::sharedState()->getPlayerColor(), GameManager::sharedState()->getPlayerColor2(), GameManager::sharedState()->getPlayerGlow() ? 1 : 0, GameManager::sharedState()->getPlayerGlowColor())}
        });
        if (password != "") {
            body.set("password", password);
        }
        
        req.bodyJSON(body);

        auto url = getSignalingUrl() + "/rooms/" + roomCode + "/join";
        log::info("P2PManager: Joining room {} on signaling server", roomCode);
        m_signalingListener.spawn(
            req.post(url),
            [this, roomCode, playerName](web::WebResponse res) {
                if (res.ok()) {
                    auto json = res.json().unwrapOr(matjson::Value());
                    m_localPlayerId = json.get<int>("playerId").unwrapOr(-1);
                    auto hostName = json.get<std::string>("hostName").unwrapOr("Host");

                    if (m_localPlayerId < 0) {
                        std::vector<ErrorCb> callbacks;
                        std::string err;
                        {
                            std::lock_guard lock(m_stateMutex);
                            m_error = "Failed to join room";
                            m_state.store(State::Error);
                            callbacks = m_onError;
                            err = m_error;
                        }
                        for (auto& cb : callbacks) cb(err);
                        m_signalingActive = false;
                        return;
                    }

                    int attemptId = ++m_connectionAttemptId;
                    m_waitingTimerFlag = std::make_shared<std::atomic<bool>>(true);
                    auto timerFlag = m_waitingTimerFlag;
                    
                    std::thread([this, attemptId, timerFlag]() {
                        int secondsLeft = 30;
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

                    auto pc = std::make_shared<rtc::PeerConnection>(makeRtcConfig());

                    PeerInfo hostPeer;
                    hostPeer.pc = pc;
                    hostPeer.playerId = 0;
                    hostPeer.playerName = hostName;
                    hostPeer.colorIndex = 0;

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



                    auto answerSent = std::make_shared<bool>(false);

                    pc->onLocalCandidate([this, myId, roomCode](rtc::Candidate candidate) {
                        auto body = matjson::Value();
                        body["type"] = "candidate";
                        body["candidate"] = std::string(candidate.candidate());
                        body["mid"] = std::string(candidate.mid());
                        body["playerId"] = myId;
                        queueInMainThread([this, roomCode, body]() {
                            {
                                std::lock_guard lock(m_peersMutex);
                                if (m_peers.find(0) != m_peers.end()) {
                                    m_peers[0].localIceCount++;
                                    if (m_state.load() == State::Connecting) {
                                        for (auto& cb : m_onStatus) {
                                            cb(fmt::format("Checking routes ({} found)...", m_peers[0].localIceCount + m_peers[0].remoteIceCount));
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
                            if (*answerSent) return;
                            *answerSent = true;
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
                                    if (*answerSent) return;
                                    *answerSent = true;
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
                                    int total = 0;
                                    {
                                        std::lock_guard lock(m_peersMutex);
                                        if (m_peers.find(0) != m_peers.end()) {
                                            total = m_peers.at(0).localIceCount + m_peers.at(0).remoteIceCount;
                                        }
                                    }
                                    stateStr = fmt::format("Checking routes ({} found)...", total);
                                    break;
                                }
                                case rtc::PeerConnection::State::Connected: stateStr = "Route found! Securing connection..."; break;
                                case rtc::PeerConnection::State::Disconnected: stateStr = "Disconnected"; break;
                                case rtc::PeerConnection::State::Failed: stateStr = "Connection Failed"; break;
                                case rtc::PeerConnection::State::Closed: stateStr = "Closed"; break;
                            }
                            for (auto& cb : m_onStatus) cb(stateStr);
                            
                            if (state == rtc::PeerConnection::State::Disconnected ||
                                state == rtc::PeerConnection::State::Failed ||
                                state == rtc::PeerConnection::State::Closed) {
                                onPeerDisconnected(0, true);
                            }
                        });
                    });

                    {
                        std::lock_guard lock(m_peersMutex);
                        m_peers[0] = std::move(hostPeer);
                    }

                    startSignalPolling(roomCode, "client", m_localPlayerId);

                } else if (res.code() == 404) {
                    std::vector<ErrorCb> callbacks;
                    std::string err;
                    {
                        std::lock_guard lock(m_stateMutex);
                        m_error = "Room not found";
                        m_state.store(State::Error);
                        callbacks = m_onError;
                        err = m_error;
                    }
                    for (auto& cb : callbacks) cb(err);
                    m_signalingActive = false;
                } else {
                    auto json = res.json().unwrapOr(matjson::Value());
                    std::string errMsg = json.get<std::string>("error").unwrapOr("HTTP " + std::to_string(res.code()));

                    std::vector<ErrorCb> callbacks;
                    std::string err;
                    {
                        std::lock_guard lock(m_stateMutex);
                        m_error = "Failed to join room: " + errMsg;
                        m_state.store(State::Error);
                        callbacks = m_onError;
                        err = m_error;
                    }
                    for (auto& cb : callbacks) cb(err);
                    m_signalingActive = false;
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
        }
        for (auto& cb : m_onStatus) cb("Connecting to server...");

        std::string finalUrl = geode::utils::string::trim(url);
        if (finalUrl.starts_with("ws://") && (finalUrl.find("ngrok.io") != std::string::npos || finalUrl.find("ngrok.app") != std::string::npos || finalUrl.find("ngrok-free.app") != std::string::npos)) {
            finalUrl.replace(0, 5, "wss://");
        }
        if (!finalUrl.empty() && finalUrl.back() == '/') finalUrl.pop_back();

        std::string fullUrl = finalUrl + "/" + roomCode;
        if (!password.empty()) fullUrl += "?password=" + password;

        rtc::WebSocketConfiguration wsConfig;
        wsConfig.pingInterval = std::chrono::milliseconds(0);
        wsConfig.maxMessageSize = 250 * 1024 * 1024;
        wsConfig.disableTlsVerification = true;
        m_webSocket = std::make_shared<rtc::WebSocket>(wsConfig);
        
        m_webSocket->onOpen([this]() {
            queueInMainThread([this]() {
                for (auto& cb : m_onStatus) cb("Connected! Handshaking...");
                
                m_state.store(State::Connected);

                std::string iconStr = "";
                if (auto gm = GameManager::sharedState()) {
                    iconStr = fmt::format("{}:{}:{}:{}:{}", gm->getPlayerFrame(), gm->getPlayerColor(), gm->getPlayerColor2(), gm->getPlayerGlow() ? 1 : 0, gm->getPlayerGlowColor());
                }
                auto handshake = proto::serializePlayerJoined(0, m_localPlayerName, 0, iconStr);
                try {
                    m_webSocket->send(reinterpret_cast<const std::byte*>(handshake.data()), handshake.size());
                } catch (std::exception const& e) {
                    log::warn("P2PManager: Handshake failed: {}", e.what());
                }
            });
        });

        m_webSocket->onMessage([this](auto data) {
            if (auto* binaryMsg = std::get_if<rtc::binary>(&data)) {
                queueInMainThread([this, data = *binaryMsg]() {
                    onPeerMessage(0, reinterpret_cast<const uint8_t*>(data.data()), data.size());
                });
            }
        });

        m_webSocket->onClosed([this]() {
            queueInMainThread([this]() {
                log::info("P2PManager: WebSocket closed");
                onPeerDisconnected(0, true);
            });
        });

        m_webSocket->onError([this](std::string const& error) {
            queueInMainThread([this, error]() {
                log::error("P2PManager: WebSocket error: {}", error);
                std::vector<ErrorCb> callbacks;
                std::string err;
                {
                    std::lock_guard lock(m_stateMutex);
                    m_error = "WebSocket Error: " + error;
                    m_state.store(State::Error);
                    callbacks = m_onError;
                    err = m_error;
                }
                for (auto& cb : callbacks) cb(err);
            });
        });

        m_webSocket->open(fullUrl);
    }


    void P2PManager::createHostPeer(int clientPlayerId, std::string const& clientName, std::string const& iconStr) {
        auto pc = std::make_shared<rtc::PeerConnection>(makeRtcConfig());

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
        peer.colorIndex = clientPlayerId % 6;
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

            dc->onClosed([this, clientPlayerId]() {
                log::info("P2PManager: Channel to player {} closed", clientPlayerId);
            });
        };

        setupChannelCallbacks(reliable, true);
        setupChannelCallbacks(unreliable, false);

        auto roomCode = getRoomCode();

        auto offerSent = std::make_shared<bool>(false);

        pc->onLocalCandidate([this, clientPlayerId, roomCode](rtc::Candidate candidate) {
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
                if (*offerSent) return;
                *offerSent = true;
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
                        if (*offerSent) return;
                        *offerSent = true;
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
            if (state == rtc::PeerConnection::State::Disconnected ||
                state == rtc::PeerConnection::State::Failed ||
                state == rtc::PeerConnection::State::Closed) {
                queueInMainThread([this, clientPlayerId]() {
                    onPeerDisconnected(clientPlayerId, true);
                });
            }
        });

        pc->setLocalDescription();

        {
            auto desc = pc->localDescription();
            if (desc.has_value() && !*offerSent) {
                *offerSent = true;
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
            stopSignalPolling();
        }

        queueInMainThread([this, pid, name, colorIdx, iconStr]() {
            if (m_role == Role::Client && pid == 0) {
                auto roomCode = getRoomCode();
                for (auto& cb : m_onSessionStarted) {
                    cb(roomCode, m_localPlayerId);
                }
            }

            for (auto& cb : m_onPeerConnected) {
                cb(pid, name, colorIdx, iconStr);
            }

            if (m_role == Role::Client && pid == 0) {
                std::string myIconStr = "";
                if (auto gm = GameManager::sharedState()) {
                    myIconStr = fmt::format("{}:{}:{}:{}:{}", gm->getPlayerFrame(), gm->getPlayerColor(), gm->getPlayerColor2(), gm->getPlayerGlow() ? 1 : 0, gm->getPlayerGlowColor());
                }
                auto myMsg = proto::serializePlayerJoined(m_localPlayerId, m_localPlayerName, m_localPlayerId % 6, myIconStr);
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
                
                std::string hostIconStr = "";
                if (auto gm = GameManager::sharedState()) {
                    hostIconStr = fmt::format("{}:{}:{}:{}:{}", gm->getPlayerFrame(), gm->getPlayerColor(), gm->getPlayerColor2(), gm->getPlayerGlow() ? 1 : 0, gm->getPlayerGlowColor());
                }
                auto hostMsg = proto::serializePlayerJoined(0, m_localPlayerName, 0, hostIconStr);
                sendTo(pid, hostMsg, ChannelType::Reliable);
            }
        });
    }



    void P2PManager::leaveSession() {
        m_connectionAttemptId++;
        stopSignalPolling();

        {
            std::lock_guard lock(m_peersMutex);
            for (auto& [id, peer] : m_peers) {
                if (peer.reliable) peer.reliable->close();
                if (peer.unreliable) peer.unreliable->close();
                if (peer.pc) peer.pc->close();
            }
            m_peers.clear();
        }

        if (m_role == Role::Host && !m_roomCode.empty()) {
            auto url = getSignalingUrl() + "/rooms/" + m_roomCode;
            auto req = web::WebRequest();
            req.header("ngrok-skip-browser-warning", "1");
            async::spawn(req.send("DELETE", url));
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
        }

        m_state.store(State::Disconnected);
        m_nextPlayerId = 1;
        m_signalingRoomId.clear();

        log::info("P2PManager: Session ended");
    }

}
