#pragma once

#include <cocos2d.h>
#include <Geode/ui/Label.hpp>
#include <unordered_map>
#include <vector>
#include <string>

namespace mpedit {

    class CursorOverlayNode : public cocos2d::CCNode {
    protected:
        struct BubbleItem {
            cocos2d::CCNode* root = nullptr;
            cocos2d::CCDrawNode* drawNode = nullptr;
            geode::Label* label = nullptr;
            float timer = 0.f;
            float maxDuration = 5.f;
            float currentY = 0.f;
            float height = 0.f;
        };

        struct EdgeIndicator {
            cocos2d::CCNode* root = nullptr;
            cocos2d::CCDrawNode* arrow = nullptr;
            cocos2d::CCDrawNode* sonarPing = nullptr;
            cocos2d::ccColor3B color;
            float pingTimer = 0.f;
            float pingDuration = 0.5f;
            bool pingActive = false;
            bool isOffScreen = false;

            void pulse();
            void updatePing(float dt);
        };

        std::unordered_map<int, std::vector<BubbleItem>> m_bubbles;
        std::unordered_map<int, EdgeIndicator> m_indicators;

        bool init() override;
        void update(float dt) override;

        void addBubble(int playerId, std::string const& message);

    public:
        ~CursorOverlayNode() override;
        static CursorOverlayNode* create();
    };

}
