#pragma once

#include "BinaryProtocol.hpp"
#include <Geode/utils/web.hpp>
#include <Geode/utils/async.hpp>
#include <string>
#include <functional>
#include <unordered_map>
#include <mutex>
#include <queue>
#include <vector>
#include <memory>
#include <atomic>
#include <chrono>

namespace rtc {
    class PeerConnection;
    class DataChannel;
    struct Configuration;
    class WebSocket;
}

namespace mpedit {

    enum class ChannelType {
        Reliable,
        Unreliable
    };

    /**
     * Manages peer-to-peer connections via WebRTC data channels.
     *
     * Star topology: Host connects to all clients. Clients connect only to host.
     * Host relays messages between clients.
     */
    class P2PManager {
    public:
        enum class State {
            Disconnected,
            Connecting,
            Connected,
            Reconnecting,
            Error
        };

        enum class Role {
            None,
            Host,
            Client
        };

        using MessageCallback = std::function<void(int playerId, proto::Reader& reader)>;

        static P2PManager& get();

        void disconnectPeer(int playerId);
        void banPlayer(std::string const& playerName);


        struct RoomSettings {
            std::string roomName;
            std::string description;
            uint32_t playerLimit;
            bool isPrivate;
            std::string password;

            RoomSettings() : roomName("Room"), description(""), playerLimit(100), isPrivate(false), password("") {}
        };

        struct RoomInfo {
            std::string roomCode;
            std::string hostName;
            std::string roomName;
            std::string description;
            int playerCount;
            int playerLimit;
            bool isPrivate;
            bool hasPassword;
            std::string version;
            std::string serverUrl;
        };

        using FetchRoomsCb = std::function<void(std::vector<RoomInfo> const&)>;
        void fetchRooms(FetchRoomsCb cb, std::string const& customUrl = "");

        void hostSession(std::string const& playerName, RoomSettings const& settings = RoomSettings());
        void joinSession(std::string const& roomCode, std::string const& playerName, std::string const& password = "");
        void joinDedicatedServer(std::string const& url, std::string const& roomCode, std::string const& playerName, std::string const& password = "");
        void leaveSession();


        State getState() const;
        Role getRole() const;
        void triggerSessionStarted(int localPlayerId) {
            m_state.store(State::Connected);
            m_localPlayerId = localPlayerId;
            auto roomCode = getRoomCode();
            for (auto& cb : m_onSessionStarted) {
                cb(roomCode, localPlayerId);
            }
        }
        bool isDedicatedServer() const { return m_isDedicated; }
        bool isConnected() const;
        std::string getRoomCode() const;
        int getLocalPlayerId() const;
        std::string getError() const;



        void send(std::vector<uint8_t> const& data, ChannelType channel = ChannelType::Reliable);
        void send(std::vector<uint8_t>&& data, ChannelType channel = ChannelType::Reliable);

        void sendTo(int playerId, std::vector<uint8_t> const& data, ChannelType channel = ChannelType::Reliable);

        void broadcast(std::vector<uint8_t> const& data, ChannelType channel = ChannelType::Reliable, int excludePlayerId = -1);



        void on(proto::Opcode opcode, MessageCallback callback);
        void clearHandlers();

        void dispatchMessages();


        using SessionStartedCb = std::function<void(std::string const& roomCode, int localPlayerId)>;
        using PeerConnectedCb  = std::function<void(int playerId, std::string const& name, int colorIndex, std::string const& iconStr)>;
        using PeerDisconnectedCb = std::function<void(int playerId)>;
        using ErrorCb = std::function<void(std::string const& error)>;
        using StatusCb = std::function<void(std::string const& status)>;

        void onSessionStarted(SessionStartedCb cb);
        void onPeerConnected(PeerConnectedCb cb);
        void onPeerDisconnected(PeerDisconnectedCb cb);
        void onError(ErrorCb cb);
        void onStatus(StatusCb cb);
        void clearCallbacks();


        static std::string getSignalingUrl();

        size_t getReliableBufferedAmount(int playerId);

    private:
        P2PManager();
        ~P2PManager();

        P2PManager(P2PManager const&) = delete;
        P2PManager& operator=(P2PManager const&) = delete;


        struct PendingMessage {
            std::vector<uint8_t> data;
            ChannelType channel;
        };

        struct PendingCandidate {
            std::string candidate;
            std::string mid;
        };

        struct PeerInfo {
            std::shared_ptr<rtc::PeerConnection> pc;
            std::shared_ptr<rtc::DataChannel> reliable;
            std::shared_ptr<rtc::DataChannel> unreliable;
            int playerId = -1;
            std::string playerName;
            int colorIndex = 0;
            std::string iconStr;
            bool ready = false;
            std::vector<PendingMessage> pendingMessages;
            std::vector<PendingCandidate> pendingCandidates;
            int localIceCount = 0;
            int remoteIceCount = 0;
        };

        rtc::Configuration makeRtcConfig();
        void createHostPeer(int clientPlayerId, std::string const& clientName, std::string const& iconStr = "");

        void signalingCreateRoom(std::string const& playerName, RoomSettings const& settings);
        void signalingJoinRoom(std::string const& roomCode, std::string const& playerName, std::string const& password);
        void startSignalPolling(std::string const& code, std::string const& role, int playerId);
        void pollSignalOnce(std::string const& code, std::string const& role, int playerId);
        void stopSignalPolling();
        void sendSignalingMessage(std::string const& roomCode, matjson::Value const& msg);
        void handleSignalingMessages(matjson::Value const& messages);

        void onPeerMessage(int fromPlayerId, const uint8_t* data, size_t len);
        void onPeerDisconnected(int playerId, bool unexpected);

        void relayMessage(int fromPlayerId, const uint8_t* data, size_t len, ChannelType channel);
        void checkPeerReady(int playerId);


        std::atomic<State> m_state{State::Disconnected};
        Role m_role = Role::None;
        std::string m_roomCode;
        int m_localPlayerId = -1;
        std::string m_localPlayerName;
        std::string m_error;
        mutable std::mutex m_stateMutex;
        RoomSettings m_settings;


        std::unordered_map<int, PeerInfo> m_peers;
        std::mutex m_peersMutex;
        int m_nextPlayerId = 1;


        struct QueuedMessage {
            int fromPlayerId;
            std::vector<uint8_t> data;
        };
        std::queue<QueuedMessage> m_incoming;
        std::mutex m_incomingMutex;
        bool m_dispatching = false;


        std::unordered_map<uint8_t, std::vector<MessageCallback>> m_handlers;


        std::vector<SessionStartedCb> m_onSessionStarted;
        std::vector<PeerConnectedCb> m_onPeerConnected;
        std::vector<PeerDisconnectedCb> m_onPeerDisconnected;
        std::vector<ErrorCb> m_onError;
        std::vector<StatusCb> m_onStatus;


        geode::async::TaskHolder<geode::utils::web::WebResponse> m_signalingListener;
        geode::async::TaskHolder<geode::utils::web::WebResponse> m_signalPollListener;
        std::atomic<bool> m_signalingActive{false};
        std::string m_signalingRoomId;
        std::chrono::time_point<std::chrono::steady_clock> m_fastPollEndTime;
        void extendFastPoll();

        bool m_isDedicated = false;
        std::shared_ptr<rtc::WebSocket> m_webSocket;
        std::shared_ptr<std::atomic<bool>> m_waitingTimerFlag;
        std::atomic<int> m_connectionAttemptId{0};


    };

}
