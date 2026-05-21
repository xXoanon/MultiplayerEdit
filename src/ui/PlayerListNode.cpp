#include "PlayerListNode.hpp"
#include "../SessionManager.hpp"
#include <Geode/Geode.hpp>

using namespace geode::prelude;

namespace mpedit {

    PlayerListNode* PlayerListNode::create() {
        auto* ret = new PlayerListNode();
        if (ret->init()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    bool PlayerListNode::init() {
        if (!CCNode::init()) return false;

        auto winSize = CCDirector::sharedDirector()->getWinSize();

        // Position on the right side of the screen
        this->setPosition({winSize.width - 10.f, winSize.height / 2.f});
        this->setAnchorPoint({1.f, 0.5f});

        // Title
        m_titleLabel = CCLabelBMFont::create("Players", "bigFont.fnt");
        m_titleLabel->setScale(0.3f);
        m_titleLabel->setAnchorPoint({1.f, 0.5f});
        m_titleLabel->setPosition({0.f, 60.f});
        m_titleLabel->setColor({200, 200, 200});
        m_titleLabel->setOpacity(180);
        this->addChild(m_titleLabel);

        // List container
        m_listContainer = CCNode::create();
        m_listContainer->setPosition({0.f, 0.f});
        m_listContainer->setAnchorPoint({1.f, 0.5f});
        this->addChild(m_listContainer);

        this->scheduleUpdate();

        return true;
    }

    void PlayerListNode::update(float dt) {
        auto& session = SessionManager::get();
        
        if (!session.isInSession()) {
            this->setVisible(false);
            return;
        }

        this->setVisible(true);
        refreshList();
    }

    void PlayerListNode::refreshList() {
        m_listContainer->removeAllChildren();

        auto& session = SessionManager::get();
        auto& players = session.getPlayers();

        static const std::array<ccColor3B, 6> colors = {
            ccColor3B{100, 200, 255},  // Blue
            ccColor3B{255, 120, 100},  // Red
            ccColor3B{100, 255, 150},  // Green
            ccColor3B{255, 200, 100},  // Yellow
            ccColor3B{200, 150, 255},  // Purple
            ccColor3B{255, 150, 200},  // Pink
        };

        float yOffset = 40.f;
        for (auto& player : players) {
            auto displayName = player.name;
            if (player.id == session.getLocalPlayerId()) {
                displayName += " (you)";
            }

            auto* label = CCLabelBMFont::create(displayName.c_str(), "chatFont.fnt");
            label->setScale(0.4f);
            label->setAnchorPoint({1.f, 0.5f});
            label->setPosition({0.f, yOffset});
            label->setColor(colors[player.colorIndex % colors.size()]);
            label->setOpacity(200);
            m_listContainer->addChild(label);

            yOffset -= 16.f;
        }
    }

} // namespace mpedit
