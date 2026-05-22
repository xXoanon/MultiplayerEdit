#pragma once

#include <cocos2d.h>
#include <vector>

namespace mpedit {

    /**
     * Displays a list of connected players in the editor sidebar.
     */
    class PlayerListNode : public cocos2d::CCNode {
    protected:
        struct PlayerCacheInfo {
            int id;
            std::string name;
            int colorIndex;
        };

        cocos2d::CCLabelBMFont* m_titleLabel = nullptr;
        cocos2d::CCNode* m_listContainer = nullptr;
        std::vector<PlayerCacheInfo> m_cachedPlayers;

        bool init() override;
        void update(float dt) override;
        void refreshList();

    public:
        static PlayerListNode* create();
    };

} // namespace mpedit
