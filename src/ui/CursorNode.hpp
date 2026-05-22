#pragma once

#include <cocos2d.h>
#include <unordered_map>
#include "../SessionManager.hpp"

namespace mpedit {

    class CursorNode : public cocos2d::CCNode {
    protected:
        struct PlayerCursor {
            cocos2d::CCDrawNode* drawNode = nullptr;
            cocos2d::CCLabelBMFont* label = nullptr;
            cocos2d::CCNode* toolIndicator = nullptr;
            std::string lastStatus;
            float targetX = 0.f;
            float targetY = 0.f;
        };

        std::unordered_map<int, PlayerCursor> m_cursors;
        cocos2d::CCDrawNode* m_selectionDrawNode = nullptr;

        bool init() override;
        void update(float dt) override;

    public:
        static CursorNode* create();
        
        static cocos2d::ccColor3B getColorForIndex(int index);
    };

} 

