#include "ChatFeedNode.hpp"
#include "../SessionManager.hpp"
#include "../utils/ColorPalette.hpp"
#include <Geode/Geode.hpp>
#include <algorithm>

using namespace geode::prelude;

namespace mpedit {

    ChatFeedNode::~ChatFeedNode() {
        SessionManager::get().removeListener(this);
    }

    ChatFeedNode* ChatFeedNode::create() {
        auto* ret = new ChatFeedNode();
        if (ret && ret->init()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    bool ChatFeedNode::init() {
        if (!CCNode::init()) return false;

        SessionManager::get().onChatMessage(this, [this](SessionManager::ChatMessage const& msg) {
            this->addMessage(msg.playerId, msg.senderName, msg.message);
        });

        this->scheduleUpdate();
        return true;
    }

    void ChatFeedNode::clearItems() {
        for (auto& item : m_items) {
            if (item.root) item.root->removeFromParent();
        }
        m_items.clear();
    }

    void ChatFeedNode::addMessage(int playerId, std::string const& senderName, std::string const& message) {
        auto& session = SessionManager::get();
        if (!session.isInSession()) return;

        while (m_items.size() >= 4) {
            if (m_items.front().root) m_items.front().root->removeFromParent();
            m_items.erase(m_items.begin());
        }

        auto* pInfo = session.getPlayer(playerId);
        cocos2d::ccColor3B pColor = pInfo
            ? getPlayerEffectiveColor(pInfo->colorIndex, pInfo->iconStr)
            : ColorPalette::getColor(0);

        auto app = pInfo ? parsePlayerAppearance(pInfo->iconStr) : PlayerAppearance{};
        auto* gm = GameManager::sharedState();
        cocos2d::ccColor3B col1 = gm ? gm->colorForIdx(app.col1) : pColor;
        cocos2d::ccColor3B col2 = gm ? gm->colorForIdx(app.col2) : cocos2d::ccColor3B{255, 255, 255};
        cocos2d::ccColor3B glowCol = gm ? gm->colorForIdx(app.glowCol) : cocos2d::ccColor3B{0, 0, 0};

        bool isHost = (playerId == 0 && !session.isDedicatedServer());

        double settingDur = Mod::get()->getSettingValue<double>("chat-bubble-duration");
        float duration = std::max(5.f, static_cast<float>(settingDur));

        FeedItem item;
        item.maxDuration = duration;
        item.timer = 0.f;
        item.root = cocos2d::CCNode::create();
        this->addChild(item.root);

        float padX = 8.f;
        float padY = 4.f;
        float cursorX = padX;

        item.icon = SimplePlayer::create(app.cubeFrame);
        item.icon->setColor(col1);
        item.icon->setSecondColor(col2);
        if (app.glow) {
            item.icon->setGlowOutline(glowCol);
        } else {
            item.icon->disableGlowOutline();
        }
        item.icon->setScale(0.36f);
        float iconW = 14.f;
        cursorX += iconW * 0.5f;
        float iconX = cursorX;
        cursorX += iconW * 0.5f + 5.f;

        float fontScale = 0.5f;

        if (isHost) {
            item.hostLabel = geode::Label::create("[HOST]", "chatFont.fnt");
            item.hostLabel->setScale(fontScale);
            item.hostLabel->setColor({255, 215, 70});
            item.hostLabel->setAnchorPoint({0.f, 0.5f});
            item.hostLabel->setPositionX(cursorX);
            cursorX += item.hostLabel->getScaledContentSize().width + 4.f;
        }

        item.nameLabel = geode::Label::create(fmt::format("{}:", senderName), "chatFont.fnt");
        item.nameLabel->setScale(fontScale);
        item.nameLabel->setColor(pColor);
        item.nameLabel->setAnchorPoint({0.f, 0.5f});
        item.nameLabel->setPositionX(cursorX);
        cursorX += item.nameLabel->getScaledContentSize().width + 4.f;

        auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        float maxTotalW = std::min(winSize.width - 40.f, 340.f);
        float maxMsgW = std::max(80.f, maxTotalW - cursorX - padX);

        item.msgLabel = geode::Label::create(message, "chatFont.fnt");
        item.msgLabel->setScale(fontScale);
        item.msgLabel->setMaxWidth(maxMsgW / fontScale);
        item.msgLabel->setBreakWords(true);
        item.msgLabel->setColor({255, 255, 255});
        item.msgLabel->setAnchorPoint({0.f, 0.5f});
        item.msgLabel->setPositionX(cursorX);

        auto msgSize = item.msgLabel->getScaledContentSize();
        float totalW = cursorX + msgSize.width + padX;
        float totalH = std::max(20.f, msgSize.height + padY * 2.f);
        float midY = totalH * 0.5f;

        item.height = totalH;
        item.root->setContentSize({totalW, totalH});
        item.root->setAnchorPoint({0.5f, 0.5f});

        item.bg = cocos2d::extension::CCScale9Sprite::create("square02_small.png");
        item.bg->setContentSize({totalW, totalH});
        item.bg->setAnchorPoint({0.f, 0.f});
        item.bg->setPosition({0.f, 0.f});
        item.bg->setColor({0, 0, 0});
        item.bg->setOpacity(140);
        item.root->addChild(item.bg, 0);

        item.icon->setPosition({iconX, midY});
        item.root->addChild(item.icon, 1);

        if (item.hostLabel) {
            item.hostLabel->setPositionY(midY);
            item.root->addChild(item.hostLabel, 1);
        }

        item.nameLabel->setPositionY(midY);
        item.root->addChild(item.nameLabel, 1);

        item.msgLabel->setPositionY(midY);
        item.root->addChild(item.msgLabel, 1);

        item.root->setScale(0.85f);
        item.root->runAction(cocos2d::CCEaseBackOut::create(cocos2d::CCScaleTo::create(0.14f, 1.f)));

        m_items.push_back(item);
    }

    void ChatFeedNode::update(float dt) {
        auto& session = SessionManager::get();
        if (!session.isInSession()) {
            if (!m_items.empty()) clearItems();
            return;
        }

        if (m_items.empty()) return;

        for (size_t i = 0; i < m_items.size();) {
            m_items[i].timer += dt;
            if (m_items[i].timer >= m_items[i].maxDuration) {
                if (m_items[i].root) m_items[i].root->removeFromParent();
                m_items.erase(m_items.begin() + i);
            } else {
                float timeLeft = m_items[i].maxDuration - m_items[i].timer;
                if (timeLeft < 0.5f && timeLeft >= 0.f) {
                    float alpha = std::clamp(timeLeft / 0.5f, 0.f, 1.f);
                    GLubyte textOp = static_cast<GLubyte>(alpha * 255.f);
                    GLubyte bgOp = static_cast<GLubyte>(alpha * 140.f);
                    if (m_items[i].bg) m_items[i].bg->setOpacity(bgOp);
                    if (m_items[i].icon) m_items[i].icon->setOpacity(textOp);
                    if (m_items[i].hostLabel) m_items[i].hostLabel->setOpacity(textOp);
                    if (m_items[i].nameLabel) m_items[i].nameLabel->setOpacity(textOp);
                    if (m_items[i].msgLabel) m_items[i].msgLabel->setOpacity(textOp);
                }
                ++i;
            }
        }

        if (m_items.empty()) return;

        auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        float baseY = 104.f;
        if (auto* editor = LevelEditorLayer::get()) {
            bool noUiPlaytest = editor->m_playbackMode == PlaybackMode::Playing
                && GameManager::get()->getGameVariable(GameVar::PlaytestNoUI);
            if (noUiPlaytest) {
                baseY = 24.f;
            }
        }

        float stackY = baseY;
        for (int i = static_cast<int>(m_items.size()) - 1; i >= 0; --i) {
            auto& item = m_items[i];
            float targetY = stackY + item.height * 0.5f;
            if (!item.positioned) {
                item.currentY = targetY;
                item.positioned = true;
            } else {
                item.currentY += (targetY - item.currentY) * std::min(18.f * dt, 1.f);
            }
            if (item.root) {
                item.root->setPosition({winSize.width * 0.5f, item.currentY});
            }
            stackY += item.height + 4.f;
        }
    }

}
