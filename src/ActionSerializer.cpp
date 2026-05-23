#include "ActionSerializer.hpp"
#include <Geode/Geode.hpp>

using namespace geode::prelude;

namespace mpedit::ActionSerializer {

    // ============================================================
    // Serialization
    // ============================================================

    matjson::Value objectDataToJson(ObjectData const& data) {
        matjson::Value obj;
        obj["uuid"] = data.uuid;
        obj["saveString"] = data.saveString;
        obj["objectID"] = data.objectID;
        obj["x"] = data.x;
        obj["y"] = data.y;
        obj["rotation"] = data.rotation;
        obj["scaleX"] = data.scaleX;
        obj["scaleY"] = data.scaleY;
        obj["flipX"] = data.flipX;
        obj["flipY"] = data.flipY;
        obj["zOrder"] = data.zOrder;
        obj["editorLayer"] = data.editorLayer;
        obj["editorLayer2"] = data.editorLayer2;
        obj["mainColor"] = data.mainColorChannel;
        obj["secondColor"] = data.secondColorChannel;

        auto groupsArr = matjson::Value::array();
        for (int g : data.groups) {
            groupsArr.push(g);
        }
        obj["groups"] = groupsArr;

        return obj;
    }

    ObjectData jsonToObjectData(matjson::Value const& json) {
        ObjectData data;

        if (auto v = json.get<std::string>("uuid")) data.uuid = *v;
        if (auto v = json.get<std::string>("saveString")) data.saveString = *v;
        if (auto v = json.get<int>("objectID")) data.objectID = *v;
        if (auto v = json.get<double>("x")) data.x = static_cast<float>(*v);
        if (auto v = json.get<double>("y")) data.y = static_cast<float>(*v);
        if (auto v = json.get<double>("rotation")) data.rotation = static_cast<float>(*v);
        if (auto v = json.get<double>("scaleX")) data.scaleX = static_cast<float>(*v);
        if (auto v = json.get<double>("scaleY")) data.scaleY = static_cast<float>(*v);
        if (auto v = json.get<bool>("flipX")) data.flipX = *v;
        if (auto v = json.get<bool>("flipY")) data.flipY = *v;
        if (auto v = json.get<int>("zOrder")) data.zOrder = *v;
        if (auto v = json.get<int>("editorLayer")) data.editorLayer = *v;
        if (auto v = json.get<int>("editorLayer2")) data.editorLayer2 = *v;
        if (auto v = json.get<int>("mainColor")) data.mainColorChannel = *v;
        if (auto v = json.get<int>("secondColor")) data.secondColorChannel = *v;

        auto groupsResult = json.get("groups");
        if (groupsResult.isOk()) {
            for (auto& g : groupsResult.unwrap()) {
                if (auto gVal = g.asInt()) {
                    data.groups.push_back(static_cast<int>(*gVal));
                }
            }
        }

        return data;
    }

    matjson::Value serializePlaceObjects(std::vector<ObjectData> const& objects) {
        matjson::Value msg;
        msg["action"] = "place_objects";
        
        auto arr = matjson::Value::array();
        for (auto& obj : objects) {
            arr.push(objectDataToJson(obj));
        }
        msg["objects"] = arr;
        
        return msg;
    }

    matjson::Value serializeSyncLevel(int targetPlayerId, std::string const& objectsString, std::vector<std::string> const& uuids, LevelSettingsData const& settings, std::vector<LockData> const& locks) {
        matjson::Value msg;
        msg["action"] = "sync_level";
        msg["targetPlayerId"] = targetPlayerId;
        msg["objectsString"] = objectsString;
        
        auto arr = matjson::Value::array();
        for (auto const& uuid : uuids) {
            arr.push(uuid);
        }
        msg["uuids"] = arr;
        
        auto settingsObj = matjson::Value::object();
        settingsObj["saveString"] = settings.saveString;
        settingsObj["audioTrack"] = settings.audioTrack;
        settingsObj["songID"] = settings.songID;
        settingsObj["levelLength"] = settings.levelLength;
        msg["settings"] = settingsObj;

        auto locksArr = matjson::Value::array();
        for (auto const& lock : locks) {
            auto lockObj = matjson::Value::object();
            lockObj["uuid"] = lock.uuid;
            lockObj["playerId"] = lock.playerId;
            lockObj["timeLeft"] = lock.timeLeft;
            locksArr.push(lockObj);
        }
        msg["locks"] = locksArr;
        
        return msg;
    }

    matjson::Value serializeUpdateSettings(LevelSettingsData const& settings) {
        matjson::Value msg;
        msg["action"] = "update_settings";
        
        auto settingsObj = matjson::Value::object();
        settingsObj["saveString"] = settings.saveString;
        settingsObj["audioTrack"] = settings.audioTrack;
        settingsObj["songID"] = settings.songID;
        settingsObj["levelLength"] = settings.levelLength;
        msg["settings"] = settingsObj;
        
        return msg;
    }

    matjson::Value serializeDeleteObjects(std::vector<std::string> const& uuids) {
        matjson::Value msg;
        msg["action"] = "delete_objects";
        
        auto arr = matjson::Value::array();
        for (auto& uuid : uuids) {
            arr.push(uuid);
        }
        msg["objectKeys"] = arr;
        
        return msg;
    }

    matjson::Value serializeMoveObjects(std::vector<MoveData> const& moves) {
        matjson::Value msg;
        msg["action"] = "move_objects";
        
        auto arr = matjson::Value::array();
        for (auto& m : moves) {
            matjson::Value moveObj;
            moveObj["uuid"] = m.uuid;
            moveObj["dx"] = m.dx;
            moveObj["dy"] = m.dy;
            arr.push(moveObj);
        }
        msg["moves"] = arr;
        
        return msg;
    }

    matjson::Value serializeTransformObjects(std::vector<TransformData> const& transforms) {
        matjson::Value msg;
        msg["action"] = "transform_objects";
        
        auto arr = matjson::Value::array();
        for (auto& t : transforms) {
            matjson::Value transformObj;
            transformObj["uuid"] = t.uuid;
            transformObj["rotation"] = t.rotation;
            transformObj["scaleX"] = t.scaleX;
            transformObj["scaleY"] = t.scaleY;
            transformObj["flipX"] = t.flipX;
            transformObj["flipY"] = t.flipY;
            arr.push(transformObj);
        }
        msg["transforms"] = arr;
        
        return msg;
    }

    matjson::Value serializeUpdateObjects(std::vector<ObjectData> const& objects) {
        matjson::Value msg;
        msg["action"] = "update_objects";
        
        auto arr = matjson::Value::array();
        for (auto& obj : objects) {
            arr.push(objectDataToJson(obj));
        }
        msg["objects"] = arr;
        
        return msg;
    }

    matjson::Value serializeCursorUpdate(float x, float y, std::string const& status) {
        matjson::Value msg;
        msg["action"] = "cursor_update";
        msg["x"] = x;
        msg["y"] = y;
        msg["status"] = status;
        return msg;
    }

    matjson::Value serializeLockObjects(std::vector<std::string> const& uuids, bool locked) {
        matjson::Value msg;
        msg["action"] = "lock_objects";
        msg["locked"] = locked;
        
        auto arr = matjson::Value::array();
        for (auto& uuid : uuids) {
            arr.push(uuid);
        }
        msg["objectKeys"] = arr;
        
        return msg;
    }

    // ============================================================
    // Deserialization
    // ============================================================

    std::vector<ObjectData> deserializePlacedObjects(matjson::Value const& data) {
        std::vector<ObjectData> result;
        
        auto arrRes = data.get("objects");
        if (arrRes.isOk()) {
            for (auto& item : arrRes.unwrap()) {
                result.push_back(jsonToObjectData(item));
            }
        }
        
        return result;
    }

    std::vector<std::string> deserializeDeletedObjects(matjson::Value const& data) {
        std::vector<std::string> result;
        
        auto arrRes = data.get("objectKeys");
        if (arrRes.isOk()) {
            for (auto& item : arrRes.unwrap()) {
                if (auto str = item.asString()) {
                    result.push_back(*str);
                }
            }
        }
        
        return result;
    }

    std::vector<MoveData> deserializeMovedObjects(matjson::Value const& data) {
        std::vector<MoveData> result;
        
        auto arrRes = data.get("moves");
        if (arrRes.isOk()) {
            for (auto& item : arrRes.unwrap()) {
                MoveData m;
                if (auto v = item.get<std::string>("uuid")) m.uuid = *v;
                if (auto v = item.get<double>("dx")) m.dx = static_cast<float>(*v);
                if (auto v = item.get<double>("dy")) m.dy = static_cast<float>(*v);
                result.push_back(m);
            }
        }
        
        return result;
    }

    std::vector<TransformData> deserializeTransformedObjects(matjson::Value const& data) {
        std::vector<TransformData> result;
        
        auto arrRes = data.get("transforms");
        if (arrRes.isOk()) {
            for (auto& item : arrRes.unwrap()) {
                TransformData t;
                if (auto v = item.get<std::string>("uuid")) t.uuid = *v;
                if (auto v = item.get<double>("rotation")) t.rotation = static_cast<float>(*v);
                if (auto v = item.get<double>("scaleX")) t.scaleX = static_cast<float>(*v);
                if (auto v = item.get<double>("scaleY")) t.scaleY = static_cast<float>(*v);
                if (auto v = item.get<bool>("flipX")) t.flipX = *v;
                if (auto v = item.get<bool>("flipY")) t.flipY = *v;
                result.push_back(t);
            }
        }
        
        return result;
    }

    std::vector<ObjectData> deserializeUpdatedObjects(matjson::Value const& data) {
        std::vector<ObjectData> result;
        
        auto arrRes = data.get("objects");
        if (arrRes.isOk()) {
            for (auto& item : arrRes.unwrap()) {
                result.push_back(jsonToObjectData(item));
            }
        }
        
        return result;
    }

    LevelSettingsData deserializeLevelSettings(matjson::Value const& data) {
        LevelSettingsData settings;
        if (auto settingsRes = data.get("settings"); settingsRes.isOk()) {
            auto& s = settingsRes.unwrap();
            if (auto str = s.get<std::string>("saveString")) settings.saveString = *str;
            if (auto t = s.get<int>("audioTrack")) settings.audioTrack = *t;
            if (auto sID = s.get<int>("songID")) settings.songID = *sID;
            if (auto l = s.get<double>("levelLength")) settings.levelLength = static_cast<float>(*l);
        }
        return settings;
    }

    std::vector<LockData> deserializeSyncLevelLocks(matjson::Value const& data) {
        std::vector<LockData> result;
        auto locksRes = data.get("locks");
        if (locksRes.isOk()) {
            for (auto& item : locksRes.unwrap()) {
                LockData ld;
                if (auto u = item.get<std::string>("uuid")) ld.uuid = *u;
                if (auto p = item.get<int>("playerId")) ld.playerId = *p;
                if (auto t = item.get<double>("timeLeft")) ld.timeLeft = static_cast<float>(*t);
                result.push_back(ld);
            }
        }
        return result;
    }

    // ============================================================
    // GameObject Helpers
    // ============================================================

    ObjectData extractObjectData(GameObject* obj, std::string const& uuid) {
        ObjectData data;
        data.uuid = uuid;

        if (!obj) return data;

        data.objectID = obj->m_objectID;
        data.x = obj->getPositionX();
        data.y = obj->getPositionY();
        data.rotation = obj->getRotation();
        data.scaleX = obj->getScaleX();
        data.scaleY = obj->getScaleY();
        data.flipX = obj->isFlipX();
        data.flipY = obj->isFlipY();
        data.zOrder = obj->getZOrder();
        data.editorLayer = obj->m_editorLayer;
        data.editorLayer2 = obj->m_editorLayer2;
        data.saveString = obj->getSaveString(LevelEditorLayer::get());

        // Extract groups
        if (obj->m_groups && obj->m_groupCount > 0) {
            for (int i = 0; i < obj->m_groupCount; i++) {
                data.groups.push_back(obj->m_groups->at(i));
            }
        }

        return data;
    }

} // namespace mpedit::ActionSerializer
