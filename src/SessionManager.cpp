#include "SessionManager.hpp"
#include "P2PManager.hpp"
#include "utils/ChatFilter.hpp"
#include "RemoteActionHandler.hpp"
#include "BinaryProtocol.hpp"
#include <Geode/loader/Log.hpp>
#include <Geode/loader/Mod.hpp>
#include <Geode/Geode.hpp>
#include <Geode/ui/Notification.hpp>

using namespace geode::prelude;

namespace mpedit {

    SessionManager& SessionManager::get() {
        static SessionManager instance;
        return instance;
    }

    void SessionManager::hostSession(std::string const& playerName, RoomSettings const& settings) {
        if (isInSession()) {
            log::warn("SessionManager: Already in a session");
            return;
        }

        std::string actualName = playerName;
        if (actualName == "Player" || actualName.empty()) {
            actualName = GJAccountManager::sharedState()->m_username;
            if (actualName.empty()) actualName = "Player";
        }

        m_localPlayerName = actualName;
        m_role = Role::Host;
        m_defaultViewOnly = settings.defaultViewOnly;

        setupNetworkHandlers();
        P2PManager::RoomSettings p2pSettings;
        p2pSettings.roomName = settings.roomName;
        p2pSettings.description = settings.description;
        p2pSettings.playerLimit = settings.playerLimit;
        p2pSettings.isPrivate = settings.isPrivate;
        p2pSettings.password = settings.password;

        P2PManager::get().hostSession(actualName, p2pSettings);

        log::info("SessionManager: Hosting session as '{}'", actualName);
    }

    void SessionManager::joinSession(std::string const& roomCode, std::string const& playerName, std::string const& password) {
        if (isInSession()) {
            log::warn("SessionManager: Already in a session");
            return;
        }

        std::string actualName = playerName;
        if (actualName == "Player" || actualName.empty()) {
            actualName = GJAccountManager::sharedState()->m_username;
            if (actualName.empty()) actualName = "Player";
        }

        m_localPlayerName = actualName;
        m_roomCode = roomCode;
        m_role = Role::Client;

        setupNetworkHandlers();
        P2PManager::get().joinSession(roomCode, actualName, password);

        log::info("SessionManager: Joining room '{}' as '{}'", roomCode, actualName);
    }

    void SessionManager::joinDedicatedServer(std::string const& url, std::string const& roomCode, std::string const& password) {
        if (isInSession()) return;
        std::string actualName = Mod::get()->getSettingValue<std::string>("player-name");
        if (actualName == "Player" || actualName.empty()) {
            actualName = GJAccountManager::sharedState()->m_username;
            if (actualName.empty()) actualName = "Player";
        }
        m_localPlayerName = actualName;
        m_roomCode = roomCode;
        m_role = Role::Client;
        setupNetworkHandlers();
        P2PManager::get().joinDedicatedServer(url, roomCode, actualName, password);
        log::info("SessionManager: Joining dedicated server '{}' room '{}'", url, roomCode);
    }

    void SessionManager::leaveSession() {
        if (!isInSession()) return;

        P2PManager::get().leaveSession();
        
        auto sessionEndedCallbacks = m_onSessionEnded;
        clearNetworkHandlers();

        m_role = Role::None;
        m_roomCode.clear();
        m_localPlayerId = -1;
        m_defaultViewOnly = false;
        m_players.clear();
        m_chatHistory.clear();

        for (auto& [id, cb] : sessionEndedCallbacks) {
            cb();
        }

        log::info("SessionManager: Left session");
    }

    bool SessionManager::isInSession() const {
        return m_role != Role::None;
    }

    SessionManager::Role SessionManager::getRole() const {
        return m_role;
    }

    std::string SessionManager::getRoomCode() const {
        return m_roomCode;
    }

    int SessionManager::getLocalPlayerId() const {
        return m_localPlayerId;
    }

    std::string SessionManager::getLocalPlayerName() const {
        return m_localPlayerName;
    }

    bool SessionManager::isLocalPlayerViewOnly() const {
        if (auto p = getPlayer(m_localPlayerId)) {
            return p->isViewOnly;
        }
        return false;
    }

    void SessionManager::sendChatMessage(std::string const& message) {
        if (!isInSession()) return;
        auto msg = proto::serializeChatMessage(message);
        if (m_role == Role::Host) {
            P2PManager::get().broadcast(msg, ChannelType::Reliable);
            onChatMessageReceived(m_localPlayerId, message);
        } else {
            P2PManager::get().sendTo(0, msg, ChannelType::Reliable);
            onChatMessageReceived(m_localPlayerId, message);
        }
    }

    void SessionManager::onChatMessageReceived(int playerId, std::string const& message) {
        std::string senderName = "Unknown";
        if (auto p = getPlayer(playerId)) senderName = ChatFilter::filter(p->name);
        ChatMessage chatMsg{playerId, senderName, ChatFilter::filter(message)};
        m_chatHistory.push_back(chatMsg);
        if (m_chatHistory.size() > 50) m_chatHistory.erase(m_chatHistory.begin());
        auto callbacks = m_onChatMessage;
        for (auto& [id, cb] : callbacks) cb(chatMsg);
    }

    std::vector<SessionManager::ChatMessage> const& SessionManager::getChatHistory() const {
        return m_chatHistory;
    }

    void SessionManager::onChatMessage(void* id, ChatCallback cb) {
        m_onChatMessage[id] = std::move(cb);
    }

    void SessionManager::setPlayerViewOnly(int id, bool viewOnly) {
        for (auto& p : m_players) {
            if (p.id == id) {
                p.isViewOnly = viewOnly;
                return;
            }
        }
    }

    void SessionManager::setPlayerPing(int id, int ping) {
        for (auto& p : m_players) {
            if (p.id == id) {
                p.ping = ping;
                return;
            }
        }
    }

    std::vector<PlayerInfo> const& SessionManager::getPlayers() const {
        return m_players;
    }

    PlayerInfo const* SessionManager::getPlayer(int id) const {
        for (auto& p : m_players) {
            if (p.id == id) return &p;
        }
        return nullptr;
    }

    void SessionManager::updatePlayerCursor(int playerId, float x, float y, std::string const& status) {
        for (auto& p : m_players) {
            if (p.id == playerId) {
                p.cursorX = x;
                p.cursorY = y;
                p.status = status;
                return;
            }
        }
    }

    void SessionManager::onSessionStarted(void* id, SessionCallback cb) {
        m_onSessionStarted[id] = std::move(cb);
    }

    void SessionManager::onSessionEnded(void* id, SessionCallback cb) {
        m_onSessionEnded[id] = std::move(cb);
    }

    void SessionManager::onPlayerJoined(void* id, PlayerCallback cb) {
        m_onPlayerJoined[id] = std::move(cb);
    }

    void SessionManager::onPlayerLeft(void* id, PlayerCallback cb) {
        m_onPlayerLeft[id] = std::move(cb);
    }

    void SessionManager::onError(void* id, ErrorCallback cb) {
        m_onError[id] = std::move(cb);
    }

    void SessionManager::onStatus(void* id, StatusCallback cb) {
        m_onStatus[id] = std::move(cb);
    }

    void SessionManager::updateStatus(std::string const& status) {
        auto callbacks = m_onStatus;
        for (auto& [id, cb] : callbacks) {
            cb(status);
        }
    }

    void SessionManager::removeListener(void* id) {
        m_onSessionStarted.erase(id);
        m_onSessionEnded.erase(id);
        m_onPlayerJoined.erase(id);
        m_onPlayerLeft.erase(id);
        m_onError.erase(id);
        m_onStatus.erase(id);
        m_onChatMessage.erase(id);
    }

    void SessionManager::clearCallbacks() {
        m_onSessionStarted.clear();
        m_onSessionEnded.clear();
        m_onPlayerJoined.clear();
        m_onPlayerLeft.clear();
        m_onError.clear();
        m_onStatus.clear();
        m_onChatMessage.clear();
    }

    void SessionManager::dispatchError(std::string const& error) {
        auto callbacks = m_onError;
        for (auto& [id, cb] : callbacks) cb(error);
    }

    void SessionManager::setupNetworkHandlers() {
        auto& net = P2PManager::get();
        RemoteActionHandler::get().setupHandlers();

        net.onSessionStarted([this](std::string const& roomCode, int localPlayerId) {
            m_roomCode = roomCode;
            m_localPlayerId = localPlayerId;
            m_role = (localPlayerId == 0) ? Role::Host : Role::Client;

            m_players.clear();
        m_chatHistory.clear();
            PlayerInfo self;
            self.id = localPlayerId;
            self.name = m_localPlayerName;
            self.colorIndex = (localPlayerId == 0) ? 0 : (localPlayerId % 6);
            if (auto gm = GameManager::sharedState()) {
                self.iconStr = fmt::format("{}:{}:{}:{}:{}", gm->getPlayerFrame(), gm->getPlayerColor(), gm->getPlayerColor2(), gm->getPlayerGlow() ? 1 : 0, gm->getPlayerGlowColor());
            }
            m_players.push_back(self);

            auto callbacks = m_onSessionStarted;
            for (auto& [id, cb] : callbacks) cb();
        });

        net.onPeerConnected([this](int playerId, std::string const& name, int colorIndex, std::string const& iconStr) {
            std::string filteredName = ChatFilter::filter(name);
            for (auto& p : m_players) {
                if (p.id == playerId) {
                    p.name = filteredName;
                    p.colorIndex = colorIndex;
                    p.iconStr = iconStr;
                    return;
                }
            }

            PlayerInfo info;
            info.id = playerId;
            info.name = filteredName;
            info.colorIndex = colorIndex;
            info.iconStr = iconStr;
            m_players.push_back(info);

            auto callbacks = m_onPlayerJoined;
            for (auto& [id, cb] : callbacks) cb(info);
            
            geode::queueInMainThread([filteredName] {
                geode::Notification::create(filteredName + " joined", cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"))->show();
            });
            
            if (m_role == Role::Host && m_defaultViewOnly) {
                setPlayerViewOnly(playerId, true);
                
                std::vector<uint8_t> data;
                data.push_back(static_cast<uint8_t>(proto::Opcode::SetViewOnly));
                proto::Writer writer;
                writer.writeU32(playerId);
                writer.writeBool(true);
                auto p = writer.data();
                data.insert(data.end(), p.begin(), p.end());
                P2PManager::get().send(data, ChannelType::Reliable);
            }
        });

        net.on(proto::Opcode::PlayerJoined, [this](int fromPlayerId, proto::Reader& reader) {
            auto msg = proto::deserializePlayerJoined(reader);
            if (msg.name.empty()) return;
            msg.name = ChatFilter::filter(msg.name);

            for (auto& p : m_players) {
                if (p.id == msg.playerId) {
                    p.name = msg.name;
                    p.colorIndex = msg.colorIndex;
                    p.iconStr = msg.iconStr;
                    return;
                }
            }

            PlayerInfo info;
            info.id = msg.playerId;
            info.name = msg.name;
            info.colorIndex = msg.colorIndex;
            info.iconStr = msg.iconStr;
            m_players.push_back(info);

            auto callbacks = m_onPlayerJoined;
            for (auto& [id, cb] : callbacks) cb(info);

            geode::queueInMainThread([msg] {
                geode::Notification::create(msg.name + " joined", cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"))->show();
            });
        });

        net.on(proto::Opcode::PlayerLeft, [this](int fromPlayerId, proto::Reader& reader) {
            int leftId = static_cast<int>(reader.readVarInt());
            PlayerInfo leftPlayer;
            for (auto it = m_players.begin(); it != m_players.end(); ++it) {
                if (it->id == leftId) {
                    leftPlayer = *it;
                    m_players.erase(it);
                    break;
                }
            }
            if (!leftPlayer.name.empty()) {
                auto callbacks = m_onPlayerLeft;
                for (auto& [id, cb] : callbacks) cb(leftPlayer);

                geode::queueInMainThread([leftPlayer] {
                    geode::Notification::create(leftPlayer.name + " left", cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteIcon_001.png"))->show();
                });
            }
        });


        net.onPeerDisconnected([this](int playerId) {
            PlayerInfo leftPlayer;
            for (auto it = m_players.begin(); it != m_players.end(); ++it) {
                if (it->id == playerId) {
                    leftPlayer = *it;
                    m_players.erase(it);
                    break;
                }
            }

            auto callbacks = m_onPlayerLeft;
            for (auto& [id, cb] : callbacks) cb(leftPlayer);

            if (!leftPlayer.name.empty()) {
                geode::queueInMainThread([leftPlayer] {
                    geode::Notification::create(leftPlayer.name + " left", cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteIcon_001.png"))->show();
                });
            }
        });

        net.onError([this](std::string const& error) {
            auto role = m_role;
            auto callbacks = m_onError;
            leaveSession();

            for (auto& [id, cb] : callbacks) {
                cb(error);
            }

            if (role == Role::Client) {
                geode::queueInMainThread([error]() {
                    if (auto* editor = LevelEditorLayer::get()) {
                        auto* director = cocos2d::CCDirector::sharedDirector();
                        if (auto* runningScene = director->getRunningScene()) {
                            std::function<EditorPauseLayer*(cocos2d::CCNode*)> findPauseLayer = [&](cocos2d::CCNode* parent) -> EditorPauseLayer* {
                                if (!parent) return nullptr;
                                if (auto* pause = typeinfo_cast<EditorPauseLayer*>(parent)) {
                                    return pause;
                                }
                                if (parent->getChildren()) {
                                    for (auto* child : CCArrayExt<CCNode*>(parent->getChildren())) {
                                        if (auto* p = findPauseLayer(child)) return p;
                                    }
                                }
                                return nullptr;
                            };

                            auto* pauseLayer = findPauseLayer(runningScene);
                            if (pauseLayer) {
                                auto* dummySender = cocos2d::CCNode::create();
                                pauseLayer->onExitEditor(dummySender);
                            } else {
                                director->popScene();
                            }

                            geode::Notification::create(error, geode::NotificationIcon::Error)->show();
                        }
                    }
                });
            }
        });

        net.onStatus([this](std::string const& status) {
            auto callbacks = m_onStatus;
            for (auto& [id, cb] : callbacks) {
                cb(status);
            }
        });

        net.on(proto::Opcode::ChatMessage, [this](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeChatMessage(reader);
            onChatMessageReceived(playerId, msg.message);
        });

        net.on(proto::Opcode::CursorUpdate, [this](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeCursorUpdate(reader);
            updatePlayerCursor(playerId, msg.x, msg.y, msg.status);
        });

        net.on(proto::Opcode::Ping, [](int playerId, proto::Reader& reader) {
            auto ts = proto::deserializePing(reader);
            P2PManager::get().sendTo(playerId, proto::serializePong(ts), ChannelType::Unreliable);
        });

        net.on(proto::Opcode::Pong, [this](int playerId, proto::Reader& reader) {
            auto ts = proto::deserializePong(reader);
            auto nowMs = static_cast<uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::steady_clock::now().time_since_epoch()).count());
            uint32_t rtt = nowMs - ts;
            this->setPlayerPing(this->m_localPlayerId, static_cast<int>(rtt));
            
            P2PManager::get().send(proto::serializePingUpdate(static_cast<uint32_t>(rtt)), ChannelType::Unreliable);
        });

        net.on(proto::Opcode::PingUpdate, [this](int playerId, proto::Reader& reader) {
            auto ping = proto::deserializePingUpdate(reader);
            this->setPlayerPing(playerId, static_cast<int>(ping));
        });

        net.on(proto::Opcode::RoomInfo, [this](int playerId, proto::Reader& reader) {
            auto msg = proto::deserializeRoomInfo(reader);
            if (P2PManager::get().isDedicatedServer()) {
                m_localPlayerId = msg.localPlayerId;
                P2PManager::get().triggerSessionStarted(msg.localPlayerId);
            }
            
            PlayerInfo self;
            self.id = m_localPlayerId;
            self.name = m_localPlayerName;
            self.colorIndex = 0;
            for (auto const& p : m_players) {
                if (p.id == m_localPlayerId) {
                    self = p;
                    break;
                }
            }
            m_players.clear();
        m_chatHistory.clear();
            m_players.push_back(self);

            for (auto const& p : msg.players) {
                if (p.id == m_localPlayerId) {
                    m_players[0].colorIndex = p.colorIndex;
                    m_players[0].iconStr = p.iconStr;
                    continue;
                }
                
                bool exists = false;
                for (auto& existing : m_players) {
                    if (existing.id == p.id) {
                        exists = true;
                        break;
                    }
                }
                
                if (!exists) {
                    PlayerInfo info;
                    info.id = p.id;
                    info.name = p.name;
                    info.colorIndex = p.colorIndex;
                    info.iconStr = p.iconStr;
                    m_players.push_back(info);
                }
            }
        });
    }

    void SessionManager::clearNetworkHandlers() {
        P2PManager::get().clearHandlers();
        P2PManager::get().clearCallbacks();
        RemoteActionHandler::get().clearHandlers();
    }

}
