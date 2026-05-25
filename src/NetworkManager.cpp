#include "NetworkManager.hpp"
#include <ixwebsocket/IXNetSystem.h>
#include <ixwebsocket/IXSocketTLSOptions.h>

using namespace geode::prelude;

namespace mpedit {

    NetworkManager& NetworkManager::get() {
        static NetworkManager instance;
        return instance;
    }

    NetworkManager::NetworkManager() {
        ix::initNetSystem();
        
        // Configure TLS for wss:// connections
        ix::SocketTLSOptions tlsOptions;
#ifdef _WIN32
        tlsOptions.caFile = "SYSTEM"; // Use system certificate store
#else
        tlsOptions.caFile = "NONE";   // Disable verification on Android/macOS (mbedtls lacks SYSTEM cert store mapping)
#endif
        m_webSocket.setTLSOptions(tlsOptions);
        
        // Disable automatic reconnection — we manage connection state explicitly
        // This prevents confusing "connection lost" messages on Android/mbedtls
        m_webSocket.disableAutomaticReconnection();
        
        // Configure heartbeat (ping interval) to keep connection alive (e.g. Render 50s idle timeout)
        m_webSocket.setPingInterval(30);
        
        m_webSocket.setOnMessageCallback([this](const ix::WebSocketMessagePtr& msg) {
            this->onMessage(msg);
        });
    }

    NetworkManager::~NetworkManager() {
        disconnect();
        ix::uninitNetSystem();
    }

    void NetworkManager::connect(std::string const& url) {
        {
            std::lock_guard lock(m_stateMutex);
            if (m_state == State::Connecting || m_state == State::Connected) {
                log::warn("NetworkManager: Already connected or connecting");
                return;
            }
            m_state = State::Connecting;
            m_error.clear();
        }
        
        m_webSocket.setUrl(url);
        log::info("NetworkManager: Connecting to {} (TLS enabled for wss://)", url);
        m_webSocket.start();
    }

    void NetworkManager::disconnect() {
        bool shouldStop = false;
        {
            std::lock_guard lock(m_stateMutex);
            if (m_state != State::Disconnected) {
                shouldStop = true;
                m_state = State::Disconnected;
            }
        }

        if (shouldStop) {
            m_webSocket.stop();
        }
        
        {
            std::lock_guard lock(m_incomingMutex);
            while (!m_incoming.empty()) m_incoming.pop();
        }
        {
            std::lock_guard lock(m_pendingMutex);
            while (!m_pendingOutgoing.empty()) m_pendingOutgoing.pop();
        }
        
        log::info("NetworkManager: Disconnected");
    }

    bool NetworkManager::isConnected() const {
        std::lock_guard lock(m_stateMutex);
        return m_state == State::Connected;
    }

    NetworkManager::State NetworkManager::getState() const {
        std::lock_guard lock(m_stateMutex);
        return m_state;
    }

    std::string NetworkManager::getError() const {
        std::lock_guard lock(m_stateMutex);
        return m_error;
    }

    void NetworkManager::send(matjson::Value const& message) {
        State state;
        {
            std::lock_guard lock(m_stateMutex);
            state = m_state;
        }

        if (state == State::Connected) {
            std::string raw = message.dump(matjson::NO_INDENTATION);
            m_webSocket.send(raw);
        } else if (state == State::Connecting) {
            std::lock_guard lock(m_pendingMutex);
            m_pendingOutgoing.push(message);
            log::info("NetworkManager: Queued message (still connecting)");
        } else {
            log::warn("NetworkManager: Cannot send, not connected (state={})", static_cast<int>(state));
        }
    }

    void NetworkManager::on(std::string const& event, MessageCallback callback) {
        m_handlers[event].push_back(std::move(callback));
    }

    void NetworkManager::clearHandlers() {
        m_handlers.clear();
    }

    void NetworkManager::dispatchMessages() {
        std::queue<matjson::Value> messages;
        {
            std::lock_guard lock(m_incomingMutex);
            std::swap(messages, m_incoming);
        }

        while (!messages.empty()) {
            auto& msg = messages.front();
            
            if (auto eventName = msg.get<std::string>("event")) {
                std::vector<MessageCallback> handlersCopy;
                {
                    auto it = m_handlers.find(*eventName);
                    if (it != m_handlers.end()) {
                        handlersCopy = it->second;
                    }
                }
                for (auto const& handler : handlersCopy) {
                    handler(msg);
                    if (m_handlers.empty()) {
                        break; // Handlers were cleared, abort further execution of handlers
                    }
                }
            }

            if (m_handlers.empty()) {
                break; // Handlers were cleared, discard remaining messages
            }

            messages.pop();
        }
    }

    void NetworkManager::onMessage(const ix::WebSocketMessagePtr& msg) {
        if (msg->type == ix::WebSocketMessageType::Open) {
            {
                std::lock_guard lock(m_stateMutex);
                m_state = State::Connected;
            }
            log::info("NetworkManager: Connected to server");

            // Flush any messages that were queued while connecting
            std::queue<matjson::Value> pending;
            {
                std::lock_guard lock(m_pendingMutex);
                std::swap(pending, m_pendingOutgoing);
            }
            while (!pending.empty()) {
                std::string raw = pending.front().dump(matjson::NO_INDENTATION);
                m_webSocket.send(raw);
                log::info("NetworkManager: Flushed queued message");
                pending.pop();
            }
        }
        else if (msg->type == ix::WebSocketMessageType::Close) {
            bool wasConnectedOrConnecting = false;
            {
                std::lock_guard lock(m_stateMutex);
                wasConnectedOrConnecting = (m_state == State::Connected || m_state == State::Connecting);
                m_state = State::Disconnected;
            }
            log::info("NetworkManager: Connection closed");

            if (wasConnectedOrConnecting) {
                matjson::Value errVal;
                errVal["event"] = "error";
                errVal["message"] = "Connection to server lost";
                {
                    std::lock_guard lock(m_incomingMutex);
                    m_incoming.push(errVal);
                }
            }
        }
        else if (msg->type == ix::WebSocketMessageType::Message) {
            processIncoming(msg->str);
        }
        else if (msg->type == ix::WebSocketMessageType::Error) {
            std::string errMsg;
            {
                std::lock_guard lock(m_stateMutex);
                m_state = State::Error;
                m_error = msg->errorInfo.reason;
                errMsg = m_error;
            }
            log::error("NetworkManager: WebSocket error: {}", errMsg);
            log::error("NetworkManager: Error details - retries: {}, wait_time: {}ms, http_status: {}", 
                msg->errorInfo.retries, 
                msg->errorInfo.wait_time,
                msg->errorInfo.http_status);

            matjson::Value errVal;
            errVal["event"] = "error";
            errVal["message"] = errMsg.empty() ? "WebSocket connection error" : errMsg;
            {
                std::lock_guard lock(m_incomingMutex);
                m_incoming.push(errVal);
            }
        }
    }

    void NetworkManager::processIncoming(std::string const& raw) {
        auto parseResult = matjson::Value::parse(raw);
        if (parseResult.isErr()) {
            log::error("NetworkManager: Failed to parse message: {}", raw);
            return;
        }

        auto val = std::move(parseResult.unwrap());
        if (val.isArray()) {
            for (auto& item : val) {
                std::lock_guard lock(m_incomingMutex);
                m_incoming.push(item);
            }
        } else {
            std::lock_guard lock(m_incomingMutex);
            m_incoming.push(std::move(val));
        }
    }

} // namespace mpedit
