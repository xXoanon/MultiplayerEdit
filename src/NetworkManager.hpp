#pragma once

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#endif

#include <ixwebsocket/IXWebSocket.h>

#include <string>
#include <functional>
#include <queue>
#include <mutex>
#include <matjson.hpp>
#include <Geode/loader/Log.hpp>

namespace mpedit {

    class NetworkManager {
    public:
        enum class State {
            Disconnected,
            Connecting,
            Connected,
            Error
        };

        using MessageCallback = std::function<void(matjson::Value const&)>;

        static NetworkManager& get();

        void connect(std::string const& url);
        void disconnect();
        bool isConnected() const;
        State getState() const;
        std::string getError() const;

        void send(matjson::Value const& message);

        void on(std::string const& event, MessageCallback callback);
        void clearHandlers();
        void dispatchMessages();

    private:
        NetworkManager();
        ~NetworkManager();

        NetworkManager(NetworkManager const&) = delete;
        NetworkManager& operator=(NetworkManager const&) = delete;

        void onMessage(const ix::WebSocketMessagePtr& msg);
        void processIncoming(std::string const& raw);

        State m_state = State::Disconnected;
        std::string m_error;
        mutable std::mutex m_stateMutex;

        ix::WebSocket m_webSocket;

        std::queue<matjson::Value> m_incoming;
        std::mutex m_incomingMutex;

        std::unordered_map<std::string, std::vector<MessageCallback>> m_handlers;

        std::queue<matjson::Value> m_pendingOutgoing;
        std::mutex m_pendingMutex;

        bool m_dispatching = false;
    };

} // namespace mpedit
