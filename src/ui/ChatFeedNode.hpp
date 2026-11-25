#pragma once

#include <cocos2d.h>
#include <Geode/ui/Label.hpp>
#include <Geode/binding/SimplePlayer.hpp>
#include <vector>
#include <string>

namespace mpedit {

    class ChatFeedNode : public cocos2d::CCNode {
    protected:
        struct FeedItem {
            cocos2d::CCNode* root = nullptr;
            cocos2d::extension::CCScale9Sprite* bg = nullptr;
            SimplePlayer* icon = nullptr;
            geode::Label* hostLabel = nullptr;
            geode::Label* nameLabel = nullptr;
            geode::Label* msgLabel = nullptr;
            float timer = 0.f;
            float maxDuration = 6.f;
            float currentY = 0.f;
            float height = 0.f;
            bool positioned = false;
        };

        std::vector<FeedItem> m_items;

        bool init() override;
        void update(float dt) override;
        void addMessage(int playerId, std::string const& senderName, std::string const& message);
        void clearItems();

    public:
        ~ChatFeedNode() override;
        static ChatFeedNode* create();
    };

}
