#pragma once

#include <string>
#include <vector>
#include <functional>
#include <chrono>
#include <cocos2d.h>

namespace mpedit {

    struct PlayerAppearance {
        int cubeFrame = 1;
        int col1 = 0;
        int col2 = 0;
        bool glow = false;
        int glowCol = 0;
        int waveFrame = 1;
        int cursorType = 0;
    };

    PlayerAppearance parsePlayerAppearance(std::string const& iconStr);
    cocos2d::ccColor3B getPlayerEffectiveColor(int colorIndex, std::string const& iconStr);
    std::string buildLocalIconStr();
    int getLocalSavedCursorType();
    int getLocalSavedCursorColor();

    struct PlayerInfo {
        int id = -1;
        std::string name;
        int colorIndex = 0;
        std::string iconStr;
        float cursorX = 0.f;
        float cursorY = 0.f;
        std::string status;
        bool isViewOnly = false;
        bool isBanned = false;
        int ping = 0;
        std::string connectionType;
    };

    struct DisconnectedPlayerInfo {
        PlayerInfo player;
        std::chrono::steady_clock::time_point leftAt;
    };

    std::string formatTimeSince(std::chrono::steady_clock::time_point tp);

    struct RoomSettings {
        std::string roomName = "Room";
        std::string description = "";
        uint32_t playerLimit = 100;
        bool isPrivate = false;
        std::string password = "";
        bool defaultViewOnly = false;
    };

    class SessionManager {
    public:
        enum class Role {
            None,
            Host,
            Client
        };

        static SessionManager& get();

        void hostSession(std::string const& playerName, RoomSettings const& settings = RoomSettings());
        void joinSession(std::string const& roomCode, std::string const& playerName, std::string const& password = "");
        void joinDedicatedServer(std::string const& url, std::string const& roomCode, std::string const& password = "");
        void leaveSession();

        bool isInSession() const;
        Role getRole() const;
        std::string getRoomCode() const;
        int getLocalPlayerId() const;
        std::string getLocalPlayerName() const;
        bool isLocalPlayerViewOnly() const;
        bool isDedicatedServer() const;

        struct ChatMessage {
            int playerId;
            std::string senderName;
            std::string message;
        };

        void sendChatMessage(std::string const& message);
        void onChatMessageReceived(int playerId, std::string const& message);
        std::vector<ChatMessage> const& getChatHistory() const;

        void setPlayerViewOnly(int id, bool viewOnly);
        void setPlayerPing(int id, int ping);
        void setPlayerConnectionType(int id, std::string const& type);
        std::vector<PlayerInfo> const& getPlayers() const;
        std::vector<DisconnectedPlayerInfo> const& getDisconnectedPlayers() const;
        void addDisconnectedPlayer(PlayerInfo const& player);
        void removeDisconnectedPlayer(std::string const& name);
        PlayerInfo const* getPlayer(int id) const;
        void updatePlayerCursor(int playerId, float x, float y, std::string const& status);
        void updateLocalAppearance(int cursorType, int colorIndex);

        using SessionCallback = std::function<void()>;
        using PlayerCallback = std::function<void(PlayerInfo const&)>;
        using ErrorCallback = std::function<void(std::string const&)>;
        using StatusCallback = std::function<void(std::string const&)>;
        using ChatCallback = std::function<void(ChatMessage const&)>;

        void updateStatus(std::string const& status);

        void onSessionStarted(void* id, SessionCallback cb);
        void onSessionEnded(void* id, SessionCallback cb);
        void onPlayerJoined(void* id, PlayerCallback cb);
        void onPlayerLeft(void* id, PlayerCallback cb);
        void onError(void* id, ErrorCallback cb);
        void onStatus(void* id, StatusCallback cb);
        void onChatMessage(void* id, ChatCallback cb);
        void removeListener(void* id);
        void clearCallbacks();
        void dispatchError(std::string const& error);

    private:
        SessionManager() = default;
        ~SessionManager() = default;

        SessionManager(SessionManager const&) = delete;
        SessionManager& operator=(SessionManager const&) = delete;

        void setupNetworkHandlers();
        void clearNetworkHandlers();

        Role m_role = Role::None;
        std::string m_roomCode;
        int m_localPlayerId = -1;
        std::string m_localPlayerName;
        std::vector<PlayerInfo> m_players;
        std::vector<DisconnectedPlayerInfo> m_disconnectedPlayers;
        bool m_defaultViewOnly = false;

        std::map<void*, SessionCallback> m_onSessionStarted;
        std::map<void*, SessionCallback> m_onSessionEnded;
        std::map<void*, PlayerCallback> m_onPlayerJoined;
        std::map<void*, PlayerCallback> m_onPlayerLeft;
        std::map<void*, ErrorCallback> m_onError;
        std::map<void*, StatusCallback> m_onStatus;
        std::map<void*, ChatCallback> m_onChatMessage;

        std::vector<ChatMessage> m_chatHistory;
    };

}
