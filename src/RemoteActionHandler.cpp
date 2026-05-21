#include "RemoteActionHandler.hpp"
#include "NetworkManager.hpp"
#include "SessionManager.hpp"
#include <Geode/Geode.hpp>
#include <random>
#include <sstream>
#include <iomanip>

using namespace geode::prelude;

namespace mpedit {

    RemoteActionHandler& RemoteActionHandler::get() {
        static RemoteActionHandler instance;
        return instance;
    }

    void RemoteActionHandler::setupHandlers() {
        auto& net = NetworkManager::get();

        net.on("objects_placed", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto objects = ActionSerializer::deserializePlacedObjects(data);
            handleRemotePlaceObjects(playerId, objects);
        });

        net.on("objects_deleted", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto uuids = ActionSerializer::deserializeDeletedObjects(data);
            handleRemoteDeleteObjects(playerId, uuids);
        });

        net.on("objects_moved", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto moves = ActionSerializer::deserializeMovedObjects(data);
            handleRemoteMoveObjects(playerId, moves);
        });

        net.on("objects_transformed", [this](matjson::Value const& data) {
            auto idRes = data.get<int>("playerId");
            if (!idRes) return;
            int playerId = *idRes;
            if (playerId == SessionManager::get().getLocalPlayerId()) return;

            auto transforms = ActionSerializer::deserializeTransformedObjects(data);
            handleRemoteTransformObjects(playerId, transforms);
        });
    }

    void RemoteActionHandler::clearHandlers() {
        // Handlers are cleared via NetworkManager::clearHandlers()
    }

    LevelEditorLayer* RemoteActionHandler::getEditorLayer() const {
        auto* scene = CCDirector::sharedDirector()->getRunningScene();
        if (!scene) return nullptr;
        return scene->getChildByType<LevelEditorLayer>(0);
    }

    void RemoteActionHandler::handleRemotePlaceObjects(
        int playerId, 
        std::vector<ActionSerializer::ObjectData> const& objects
    ) {
        auto* editor = getEditorLayer();
        if (!editor) {
            log::warn("RemoteActionHandler: No editor layer found");
            return;
        }

        m_processingRemote = true;

        for (auto& objData : objects) {
            auto* obj = editor->createObject(objData.objectID, {objData.x, objData.y}, false);
            if (!obj) {
                log::warn("RemoteActionHandler: Failed to create object ID {}", objData.objectID);
                continue;
            }

            obj->setRotation(objData.rotation);
            obj->setScaleX(objData.scaleX);
            obj->setScaleY(objData.scaleY);
            obj->setFlipX(objData.flipX);
            obj->setFlipY(objData.flipY);
            obj->m_editorLayer = objData.editorLayer;
            obj->m_editorLayer2 = objData.editorLayer2;

            registerObject(objData.uuid, obj);
            log::debug("RemoteActionHandler: Placed object {} (uuid={})", objData.objectID, objData.uuid);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteDeleteObjects(
        int playerId, 
        std::vector<std::string> const& uuids
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        for (auto& uuid : uuids) {
            auto* obj = getObjectByUUID(uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for deletion", uuid);
                continue;
            }

            editor->removeObject(obj, true);
            unregisterObject(uuid);
            log::debug("RemoteActionHandler: Deleted object (uuid={})", uuid);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteMoveObjects(
        int playerId, 
        std::vector<ActionSerializer::MoveData> const& moves
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        for (auto& move : moves) {
            auto* obj = getObjectByUUID(move.uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for move", move.uuid);
                continue;
            }

            auto pos = obj->getPosition();
            obj->setPosition({pos.x + move.dx, pos.y + move.dy});
            log::debug("RemoteActionHandler: Moved object (uuid={}) by ({}, {})", move.uuid, move.dx, move.dy);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::handleRemoteTransformObjects(
        int playerId, 
        std::vector<ActionSerializer::TransformData> const& transforms
    ) {
        auto* editor = getEditorLayer();
        if (!editor) return;

        m_processingRemote = true;

        for (auto& t : transforms) {
            auto* obj = getObjectByUUID(t.uuid);
            if (!obj) {
                log::warn("RemoteActionHandler: Object with uuid '{}' not found for transform", t.uuid);
                continue;
            }

            obj->setRotation(t.rotation);
            obj->setScaleX(t.scaleX);
            obj->setScaleY(t.scaleY);
            obj->setFlipX(t.flipX);
            obj->setFlipY(t.flipY);
            log::debug("RemoteActionHandler: Transformed object (uuid={})", t.uuid);
        }

        m_processingRemote = false;
    }

    void RemoteActionHandler::registerObject(std::string const& uuid, GameObject* obj) {
        m_uuidToObject[uuid] = obj;
        m_objectToUuid[obj] = uuid;
    }

    void RemoteActionHandler::unregisterObject(std::string const& uuid) {
        auto it = m_uuidToObject.find(uuid);
        if (it != m_uuidToObject.end()) {
            m_objectToUuid.erase(it->second);
            m_uuidToObject.erase(it);
        }
    }

    GameObject* RemoteActionHandler::getObjectByUUID(std::string const& uuid) const {
        auto it = m_uuidToObject.find(uuid);
        return it != m_uuidToObject.end() ? it->second : nullptr;
    }

    std::string RemoteActionHandler::getUUIDForObject(GameObject* obj) const {
        auto it = m_objectToUuid.find(obj);
        return it != m_objectToUuid.end() ? it->second : "";
    }

    std::string RemoteActionHandler::generateUUID() {
        static std::mt19937 rng(std::random_device{}());
        static std::uniform_int_distribution<int> dist(0, 0xFFFF);

        int playerId = SessionManager::get().getLocalPlayerId();
        int counter = s_uuidCounter++;
        int random = dist(rng);

        std::ostringstream ss;
        ss << std::hex << std::setfill('0')
           << std::setw(4) << playerId << "-"
           << std::setw(8) << counter << "-"
           << std::setw(4) << random;

        return ss.str();
    }

    void RemoteActionHandler::clearMappings() {
        m_uuidToObject.clear();
        m_objectToUuid.clear();
        s_uuidCounter = 0;
    }

} // namespace mpedit
