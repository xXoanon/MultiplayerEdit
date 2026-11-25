#pragma once

#include <string>
#include <vector>

class GameObject;

namespace mpedit {


    namespace ActionSerializer {

        struct ObjectData {
            std::string uuid;
            std::string saveString;
            int objectID = 0;
            float x = 0.f;
            float y = 0.f;
            float rotation = 0.f;
            float scaleX = 1.f;
            float scaleY = 1.f;
            bool flipX = false;
            bool flipY = false;
            int zOrder = 0;
            int editorLayer = 0;
            int editorLayer2 = 0;
            std::vector<int> groups;
            int mainColorChannel = -1;
            int secondColorChannel = -1;
        };

        struct LevelSettingsData {
            std::string saveString;
            int audioTrack = 0;
            int songID = 0;
            float levelLength = 0;
            std::string levelName = "";

            bool operator==(LevelSettingsData const& o) const = default;
        };

        struct ColorChannelData {
            int channelID = 0;
            cocos2d::ccColor3B color = {255, 255, 255};
            cocos2d::ccColor3B fromColor = {255, 255, 255};
            cocos2d::ccColor3B toColor = {255, 255, 255};
            float duration = 0.f;
            bool blending = false;
            int playerColor = 0;
            float fromOpacity = 1.f;
            float toOpacity = 1.f;
            cocos2d::ccHSVValue copyHSV = {0.f, 1.f, 1.f, false, false};
            int copyID = 0;
            bool copyOpacity = false;
            bool copyColorCalculated = false;
            int colorID = 0;
            bool copyColorLoop = false;
            bool legacyHSV = false;

            bool operator==(ColorChannelData const& o) const {
                return channelID == o.channelID &&
                       color.r == o.color.r && color.g == o.color.g && color.b == o.color.b &&
                       fromColor.r == o.fromColor.r && fromColor.g == o.fromColor.g && fromColor.b == o.fromColor.b &&
                       toColor.r == o.toColor.r && toColor.g == o.toColor.g && toColor.b == o.toColor.b &&
                       duration == o.duration &&
                       blending == o.blending &&
                       playerColor == o.playerColor &&
                       fromOpacity == o.fromOpacity &&
                       toOpacity == o.toOpacity &&
                       copyHSV.h == o.copyHSV.h && copyHSV.s == o.copyHSV.s && copyHSV.v == o.copyHSV.v &&
                       copyHSV.absoluteSaturation == o.copyHSV.absoluteSaturation && copyHSV.absoluteBrightness == o.copyHSV.absoluteBrightness &&
                       copyID == o.copyID &&
                       copyOpacity == o.copyOpacity &&
                       copyColorCalculated == o.copyColorCalculated &&
                       colorID == o.colorID &&
                       copyColorLoop == o.copyColorLoop &&
                       legacyHSV == o.legacyHSV;
            }

            bool operator!=(ColorChannelData const& o) const {
                return !(*this == o);
            }
        };

        struct MoveData {
            std::string uuid;
            float dx = 0.f;
            float dy = 0.f;
        };

        struct TransformData {
            std::string uuid;
            float rotation = 0.f;
            float scaleX = 1.f;
            float scaleY = 1.f;
            bool flipX = false;
            bool flipY = false;
        };

        struct ReconcileData {
            std::string uuid;
            float x = 0.f;
            float y = 0.f;
            float rotation = 0.f;
            float scaleX = 1.f;
            float scaleY = 1.f;
            bool flipX = false;
            bool flipY = false;
        };

        struct LockData {
            std::string uuid;
            int playerId = 0;
            float timeLeft = 3.0f;
        };


        ObjectData extractObjectData(GameObject* obj, std::string const& uuid);
        
        std::unordered_map<std::string, std::string> parseSaveString(std::string const& str);
        std::string buildSaveString(std::unordered_map<std::string, std::string> const& map);
        std::vector<std::pair<std::string, std::string>> parseSaveStringOrdered(std::string const& str);
        std::string buildSaveStringOrdered(std::vector<std::pair<std::string, std::string>> const& vec);
        void injectLocalStartPosState(ObjectData& remoteData, GameObject* localObj);

        bool hasDeepPropertyChanges(GameObject* obj, std::string const& oldSave, std::string const& newSave);

    }

}
