#pragma once

#include <Geode/Geode.hpp>
#include <Geode/loader/SettingV3.hpp>

namespace mpedit {

    class AppearanceSettingV3;

    class AppearanceSettingNodeV3 : public geode::SettingNodeV3 {
    protected:
        bool init(std::shared_ptr<AppearanceSettingV3> setting, float width);
        void onCommit() override;
        void onResetToDefault() override;
        bool hasUncommittedChanges() const override;
        bool hasNonDefaultValue() const override;

        void onCustomize(cocos2d::CCObject* sender);

    public:
        static AppearanceSettingNodeV3* create(std::shared_ptr<AppearanceSettingV3> setting, float width);
        void updateState(cocos2d::CCNode* invoker) override;
    };

    class AppearanceSettingV3 : public geode::SettingV3 {
    public:
        static geode::Result<std::shared_ptr<geode::SettingV3>> parse(std::string key, std::string modID, matjson::Value const& json);

        bool load(matjson::Value const& json) override;
        bool save(matjson::Value& json) const override;
        bool isDefaultValue() const override;
        void reset() override;

        geode::SettingNodeV3* createNode(float width) override;
    };

}
