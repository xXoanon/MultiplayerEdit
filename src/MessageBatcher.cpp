#include "MessageBatcher.hpp"
#include "P2PManager.hpp"
#include "BinaryProtocol.hpp"
#include "RevertManager.hpp"
#include "SessionManager.hpp"
#include <Geode/loader/Log.hpp>
#include <algorithm>

namespace mpedit {

    MessageBatcher& MessageBatcher::get() {
        static MessageBatcher instance;
        return instance;
    }

    void MessageBatcher::queueMove(std::string const& uuid, float dx, float dy) {
        auto& accum = m_pendingMoves[uuid];
        accum.dx += dx;
        accum.dy += dy;
    }

    void MessageBatcher::queueTransform(std::string const& uuid,
        ActionSerializer::TransformData const& transform)
    {
        m_pendingTransforms[uuid] = transform;
    }

    void MessageBatcher::flushMoves() {
        if (m_pendingMoves.empty()) return;
        
        std::vector<ActionSerializer::MoveData> moves;
        moves.reserve(m_pendingMoves.size());
        for (auto& [uuid, accum] : m_pendingMoves) {
            if (accum.dx == 0.f && accum.dy == 0.f) continue;
            moves.push_back({uuid, accum.dx, accum.dy});
        }
        m_pendingMoves.clear();
        m_moveTimer = 0.f;

        if (!moves.empty()) {
            RevertManager::get().onObjectsMoved(SessionManager::get().getLocalPlayerId(), moves);
            constexpr size_t MAX_MOVES_PER_MESSAGE = 300;
            for (size_t i = 0; i < moves.size(); i += MAX_MOVES_PER_MESSAGE) {
                size_t count = std::min(MAX_MOVES_PER_MESSAGE, moves.size() - i);
                std::vector<ActionSerializer::MoveData> chunk(moves.begin() + i, moves.begin() + i + count);
                auto data = proto::serializeMoveBatch(chunk);
                P2PManager::get().send(std::move(data), ChannelType::Reliable);
            }
        }
    }

    void MessageBatcher::flushTransforms() {
        if (m_pendingTransforms.empty()) return;

        std::vector<ActionSerializer::TransformData> transforms;
        transforms.reserve(m_pendingTransforms.size());
        for (auto& [uuid, t] : m_pendingTransforms) {
            transforms.push_back(t);
        }
        m_pendingTransforms.clear();
        m_transformTimer = 0.f;

        if (!transforms.empty()) {
            RevertManager::get().onObjectsTransformed(SessionManager::get().getLocalPlayerId(), transforms);
            constexpr size_t MAX_TRANSFORMS_PER_MESSAGE = 300;
            for (size_t i = 0; i < transforms.size(); i += MAX_TRANSFORMS_PER_MESSAGE) {
                size_t count = std::min(MAX_TRANSFORMS_PER_MESSAGE, transforms.size() - i);
                std::vector<ActionSerializer::TransformData> chunk(transforms.begin() + i, transforms.begin() + i + count);
                auto data = proto::serializeTransformObjects(chunk);
                P2PManager::get().send(std::move(data), ChannelType::Reliable);
            }
        }
    }

    void MessageBatcher::update(float dt) {
        m_moveTimer += dt;
        m_transformTimer += dt;

        if (m_moveTimer >= m_flushInterval) {
            flushMoves();
        }
        if (m_transformTimer >= m_flushInterval) {
            flushTransforms();
        }
    }

    void MessageBatcher::flush() {
        flushMoves();
        flushTransforms();
    }

    void MessageBatcher::clear() {
        m_pendingMoves.clear();
        m_pendingTransforms.clear();
        m_moveTimer = 0.f;
        m_transformTimer = 0.f;
    }

    void MessageBatcher::removePending(std::string const& uuid) {
        m_pendingMoves.erase(uuid);
        m_pendingTransforms.erase(uuid);
    }

    bool MessageBatcher::hasPending(std::string const& uuid) const {
        return m_pendingMoves.count(uuid) > 0 || m_pendingTransforms.count(uuid) > 0;
    }

}
