#include "SessionManager.hpp"
#include "NetworkManager.hpp"
#include "RemoteActionHandler.hpp"
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

    void SessionManager::hostSession(std::string const& playerName) {
        if (isInSession()) {
            log::warn("SessionManager: Already in a session");
            return;
        }

        m_localPlayerName = playerName;
        m_role = Role::Host;

        auto& net = NetworkManager::get();
        auto serverUrl = Mod::get()->getSettingValue<std::string>("server-url");
        
        setupNetworkHandlers();
        net.connect(serverUrl);

        // Send host request
        matjson::Value msg;
        msg["action"] = "host";
        msg["playerName"] = playerName;
        net.send(msg);

        log::info("SessionManager: Hosting session as '{}'", playerName);
    }

    void SessionManager::joinSession(std::string const& roomCode, std::string const& playerName) {
        if (isInSession()) {
            log::warn("SessionManager: Already in a session");
            return;
        }

        m_localPlayerName = playerName;
        m_roomCode = roomCode;
        m_role = Role::Client;

        auto& net = NetworkManager::get();
        auto serverUrl = Mod::get()->getSettingValue<std::string>("server-url");
        
        setupNetworkHandlers();
        net.connect(serverUrl);

        // Send join request
        matjson::Value msg;
        msg["action"] = "join";
        msg["roomCode"] = roomCode;
        msg["playerName"] = playerName;
        net.send(msg);

        log::info("SessionManager: Joining room '{}' as '{}'", roomCode, playerName);
    }

    void SessionManager::leaveSession() {
        if (!isInSession()) return;

        auto& net = NetworkManager::get();

        // Send leave message
        matjson::Value msg;
        msg["action"] = "leave";
        net.send(msg);

        net.disconnect();
        
        auto sessionEndedCallbacks = m_onSessionEnded;
        clearNetworkHandlers();

        m_role = Role::None;
        m_roomCode.clear();
        m_localPlayerId = -1;
        m_players.clear();

        for (auto& cb : sessionEndedCallbacks) {
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

    std::vector<PlayerInfo> const& SessionManager::getPlayers() const {
        return m_players;
    }

    PlayerInfo const* SessionManager::getPlayer(int id) const {
        for (auto& p : m_players) {
            if (p.id == id) return &p;
        }
        return nullptr;
    }

    void SessionManager::updatePlayerCursor(int playerId, float x, float y) {
        for (auto& p : m_players) {
            if (p.id == playerId) {
                p.cursorX = x;
                p.cursorY = y;
                return;
            }
        }
    }

    void SessionManager::onSessionStarted(SessionCallback cb) {
        m_onSessionStarted.push_back(std::move(cb));
    }

    void SessionManager::onSessionEnded(SessionCallback cb) {
        m_onSessionEnded.push_back(std::move(cb));
    }

    void SessionManager::onPlayerJoined(PlayerCallback cb) {
        m_onPlayerJoined.push_back(std::move(cb));
    }

    void SessionManager::onPlayerLeft(PlayerCallback cb) {
        m_onPlayerLeft.push_back(std::move(cb));
    }

    void SessionManager::onError(ErrorCallback cb) {
        m_onError.push_back(std::move(cb));
    }

    void SessionManager::clearCallbacks() {
        m_onSessionStarted.clear();
        m_onSessionEnded.clear();
        m_onPlayerJoined.clear();
        m_onPlayerLeft.clear();
        m_onError.clear();
    }

    void SessionManager::clearPopupCallbacks() {
        m_onSessionStarted.clear();
        m_onError.clear();
    }

    void SessionManager::setupNetworkHandlers() {
        auto& net = NetworkManager::get();
        RemoteActionHandler::get().setupHandlers();

        net.on("room_created", [this](matjson::Value const& data) {
            handleRoomCreated(data);
        });
        net.on("room_joined", [this](matjson::Value const& data) {
            handleRoomJoined(data);
        });
        net.on("player_joined", [this](matjson::Value const& data) {
            handlePlayerJoined(data);
        });
        net.on("player_left", [this](matjson::Value const& data) {
            handlePlayerLeft(data);
        });
        net.on("error", [this](matjson::Value const& data) {
            handleError(data);
        });
        net.on("cursor_moved", [this](matjson::Value const& data) {
            handleCursorMoved(data);
        });
    }

    void SessionManager::clearNetworkHandlers() {
        NetworkManager::get().clearHandlers();
        RemoteActionHandler::get().clearHandlers();
        m_onSessionStarted.clear();
        m_onSessionEnded.clear();
        m_onPlayerJoined.clear();
        m_onPlayerLeft.clear();
        m_onError.clear();
    }

    void SessionManager::handleRoomCreated(matjson::Value const& data) {
        if (auto rc = data.get<std::string>("roomCode")) {
            m_roomCode = *rc;
        }
        if (auto pid = data.get<int>("playerId")) {
            m_localPlayerId = *pid;
        }

        // Add self to players list
        PlayerInfo self;
        self.id = m_localPlayerId;
        self.name = m_localPlayerName;
        self.colorIndex = 0;
        m_players.push_back(self);

        log::info("SessionManager: Room created with code '{}'", m_roomCode);

        for (auto& cb : m_onSessionStarted) {
            cb();
        }
    }

    void SessionManager::handleRoomJoined(matjson::Value const& data) {
        if (auto pid = data.get<int>("playerId")) {
            m_localPlayerId = *pid;
        }

        // Parse player list
        auto playersResult = data.get("players");
        if (playersResult.isOk()) {
            auto& playersVal = playersResult.unwrap();
            m_players.clear();
            for (auto& p : playersVal) {
                PlayerInfo info;
                if (auto id = p.get<int>("id")) info.id = *id;
                if (auto name = p.get<std::string>("name")) info.name = *name;
                if (auto color = p.get<int>("colorIndex")) info.colorIndex = *color;
                m_players.push_back(info);
            }
        }

        log::info("SessionManager: Joined room '{}' with {} players", m_roomCode, m_players.size());

        for (auto& cb : m_onSessionStarted) {
            cb();
        }
    }

    void SessionManager::handlePlayerJoined(matjson::Value const& data) {
        PlayerInfo info;
        if (auto id = data.get<int>("playerId")) info.id = *id;
        if (auto name = data.get<std::string>("playerName")) info.name = *name;
        if (auto color = data.get<int>("colorIndex")) info.colorIndex = *color;

        m_players.push_back(info);

        log::info("SessionManager: Player '{}' joined (id={})", info.name, info.id);

        for (auto& cb : m_onPlayerJoined) {
            cb(info);
        }
    }

    void SessionManager::handlePlayerLeft(matjson::Value const& data) {
        auto idRes = data.get<int>("playerId");
        if (!idRes) return;

        int playerId = *idRes;
        PlayerInfo leftPlayer;

        for (auto it = m_players.begin(); it != m_players.end(); ++it) {
            if (it->id == playerId) {
                leftPlayer = *it;
                m_players.erase(it);
                break;
            }
        }

        log::info("SessionManager: Player '{}' left (id={})", leftPlayer.name, playerId);

        for (auto& cb : m_onPlayerLeft) {
            cb(leftPlayer);
        }
    }

    void SessionManager::handleError(matjson::Value const& data) {
        std::string errorMsg = "Unknown error";
        if (auto msg = data.get<std::string>("message")) {
            errorMsg = *msg;
        }

        log::error("SessionManager: Server error: {}", errorMsg);

        auto role = m_role;

        // Copy callbacks since leaveSession clears them
        auto callbacks = m_onError;
        leaveSession();

        for (auto& cb : callbacks) {
            cb(errorMsg);
        }

        // If client/guest encountered an error (e.g. host left or connection lost) while inside the editor, close the level and exit
        if (role == Role::Client) {
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
                        pauseLayer->onExitEditor(nullptr);
                    } else {
                        director->popScene();
                    }

                    geode::Notification::create(errorMsg, geode::NotificationIcon::Error)->show();
                }
            }
        }
    }

    void SessionManager::handleCursorMoved(matjson::Value const& data) {
        auto idRes = data.get<int>("playerId");
        auto xRes = data.get<double>("x");
        auto yRes = data.get<double>("y");

        if (idRes && xRes && yRes) {
            updatePlayerCursor(*idRes, static_cast<float>(*xRes), static_cast<float>(*yRes));
        }
    }

} // namespace mpedit
