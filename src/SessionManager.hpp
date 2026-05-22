#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include <matjson.hpp>

namespace mpedit {

    /**
     * Represents a connected player in the session.
     */
    struct PlayerInfo {
        int id = -1;
        std::string name;
        // Color index for cursor/highlight (assigned by server)
        int colorIndex = 0;
        // Last known cursor position
        float cursorX = 0.f;
        float cursorY = 0.f;
        std::string status;
    };

    /**
     * Manages the multiplayer session state.
     * Tracks room code, connected players, and session lifecycle.
     */
    class SessionManager {
    public:
        enum class Role {
            None,       // Not in a session
            Host,       // Created the room
            Client      // Joined an existing room
        };

        static SessionManager& get();

        // Session lifecycle
        void hostSession(std::string const& playerName);
        void joinSession(std::string const& roomCode, std::string const& playerName);
        void leaveSession();

        // State queries
        bool isInSession() const;
        Role getRole() const;
        std::string getRoomCode() const;
        int getLocalPlayerId() const;
        std::string getLocalPlayerName() const;

        // Player management
        std::vector<PlayerInfo> const& getPlayers() const;
        PlayerInfo const* getPlayer(int id) const;
        void updatePlayerCursor(int playerId, float x, float y, std::string const& status);

        // Register callbacks for session events
        using SessionCallback = std::function<void()>;
        using PlayerCallback = std::function<void(PlayerInfo const&)>;
        using ErrorCallback = std::function<void(std::string const&)>;

        void onSessionStarted(SessionCallback cb);
        void onSessionEnded(SessionCallback cb);
        void onPlayerJoined(PlayerCallback cb);
        void onPlayerLeft(PlayerCallback cb);
        void onError(ErrorCallback cb);
        void clearCallbacks();
        void clearPopupCallbacks();

    private:
        SessionManager() = default;
        ~SessionManager() = default;

        SessionManager(SessionManager const&) = delete;
        SessionManager& operator=(SessionManager const&) = delete;

        void setupNetworkHandlers();
        void clearNetworkHandlers();

        void handleRoomCreated(matjson::Value const& data);
        void handleRoomJoined(matjson::Value const& data);
        void handlePlayerJoined(matjson::Value const& data);
        void handlePlayerLeft(matjson::Value const& data);
        void handleError(matjson::Value const& data);
        void handleCursorMoved(matjson::Value const& data);

        Role m_role = Role::None;
        std::string m_roomCode;
        int m_localPlayerId = -1;
        std::string m_localPlayerName;
        std::vector<PlayerInfo> m_players;

        // Event callbacks
        std::vector<SessionCallback> m_onSessionStarted;
        std::vector<SessionCallback> m_onSessionEnded;
        std::vector<PlayerCallback> m_onPlayerJoined;
        std::vector<PlayerCallback> m_onPlayerLeft;
        std::vector<ErrorCallback> m_onError;
    };

} // namespace mpedit
