#include "NetworkManager.hpp"
#include <ixwebsocket/IXNetSystem.h>

using namespace geode::prelude;

namespace mpedit {

    NetworkManager& NetworkManager::get() {
        static NetworkManager instance;
        return instance;
    }

    NetworkManager::NetworkManager() {
        ix::initNetSystem();
        
        m_webSocket.setOnMessageCallback([this](const ix::WebSocketMessagePtr& msg) {
            this->onMessage(msg);
        });
    }

    NetworkManager::~NetworkManager() {
        disconnect();
        ix::uninitNetSystem();
    }

    void NetworkManager::connect(std::string const& url) {
        if (m_state == State::Connecting || m_state == State::Connected) {
            log::warn("NetworkManager: Already connected or connecting");
            return;
        }

        m_state = State::Connecting;
        m_error.clear();
        
        m_webSocket.setUrl(url);
        log::info("NetworkManager: Connecting to {} (TLS enabled for wss://)", url);
        m_webSocket.start();
    }

    void NetworkManager::disconnect() {
        if (m_state == State::Disconnected) return;
        
        m_webSocket.stop();
        m_state = State::Disconnected;
        
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
        return m_state == State::Connected;
    }

    NetworkManager::State NetworkManager::getState() const {
        return m_state;
    }

    std::string NetworkManager::getError() const {
        return m_error;
    }

    void NetworkManager::send(matjson::Value const& message) {
        if (m_state == State::Connected) {
            std::string raw = message.dump(matjson::NO_INDENTATION);
            m_webSocket.send(raw);
        } else if (m_state == State::Connecting) {
            std::lock_guard lock(m_pendingMutex);
            m_pendingOutgoing.push(message);
            log::info("NetworkManager: Queued message (still connecting)");
        } else {
            log::warn("NetworkManager: Cannot send, not connected (state={})", static_cast<int>(m_state));
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
                auto it = m_handlers.find(*eventName);
                if (it != m_handlers.end()) {
                    for (auto& handler : it->second) {
                        handler(msg);
                    }
                }
            }

            messages.pop();
        }
    }

    void NetworkManager::onMessage(const ix::WebSocketMessagePtr& msg) {
        if (msg->type == ix::WebSocketMessageType::Open) {
            m_state = State::Connected;
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
            m_state = State::Disconnected;
            log::info("NetworkManager: Connection closed");
        }
        else if (msg->type == ix::WebSocketMessageType::Message) {
            processIncoming(msg->str);
        }
        else if (msg->type == ix::WebSocketMessageType::Error) {
            m_state = State::Error;
            m_error = msg->errorInfo.reason;
            log::error("NetworkManager: WebSocket error: {}", m_error);
            log::error("NetworkManager: Error details - retries: {}, wait_time: {}ms, http_status: {}", 
                msg->errorInfo.retries, 
                msg->errorInfo.wait_time,
                msg->errorInfo.http_status);
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
