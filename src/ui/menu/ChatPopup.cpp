#include "ChatPopup.hpp"
#include "../../SessionManager.hpp"
#include "../../utils/ColorPalette.hpp"
#include <Geode/ui/ScrollLayer.hpp>
#include <Geode/ui/Label.hpp>
#include <Geode/binding/SimplePlayer.hpp>
#include <Geode/binding/EmoteSprite.hpp>

using namespace geode::prelude;

namespace mpedit {

    bool ChatPopup::setup(bool autoFocus) {
        m_autoFocus = autoFocus;
        this->setTitle("Chat");

#ifndef GEODE_IS_MOBILE
        auto hintLabel = geode::Label::create("Press / in editor to open chat", "chatFont.fnt");
        hintLabel->setPosition({m_size.width / 2.f, m_size.height - 32.f});
        hintLabel->setScale(0.45f);
        hintLabel->setColor({200, 200, 200});
        m_mainLayer->addChild(hintLabel);
#endif

        float topMargin = 42.f;
        float bottomMargin = 54.f;
        float scrollHeight = m_size.height - topMargin - bottomMargin;
        float scrollWidth = m_size.width - 36.f;
        float scrollCenterY = bottomMargin + scrollHeight / 2.f;

        m_scrollLayer = ScrollLayer::create({scrollWidth, scrollHeight});
        m_scrollLayer->setPosition({m_size.width / 2.f, scrollCenterY});
        m_mainLayer->addChild(m_scrollLayer);

        auto borders = ListBorders::create();
        borders->setContentSize(m_scrollLayer->getContentSize());
        borders->setPosition({m_size.width / 2.f, scrollCenterY});
        m_mainLayer->addChild(borders);

        float inputWidth = m_size.width - 144.f;
        m_input = TextInput::create(inputWidth, "Type a message...", "chatFont.fnt");
        m_input->setCommonFilter(CommonFilter::TextEmojis);
        m_input->setMaxCharCount(100);
        m_input->setPosition({18.f + inputWidth / 2.f, 28.f});
        m_input->setEnterCallback([this](std::string const&) {
            this->onSend(nullptr);
        });
        m_mainLayer->addChild(m_input);

        m_dummyInput = CCTextInputNode::create(10.f, 10.f, "", "chatFont.fnt");
        m_dummyInput->setAllowedChars("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_:");
        m_dummyInput->setVisible(false);
        m_dummyInput->setTouchEnabled(false);
        m_dummyInput->m_delegate = this;
        m_mainLayer->addChild(m_dummyInput);

        auto menu = CCMenu::create();
        menu->setContentSize(m_size);
        menu->setPosition({0.f, 0.f});
        m_mainLayer->addChild(menu, 10);

        CCNode* emoteSpr = nullptr;
        if (auto* spr = EmoteSprite::createWithName("easy")) {
            spr->fitToHeight(20.f, 0.f);
            emoteSpr = spr;
        } else if (auto* fallback = CCSprite::createWithSpriteFrameName("GJ_chatBtn_001.png")) {
            fallback->setScale(0.6f);
            emoteSpr = fallback;
        }
        auto emoteBtn = CCMenuItemSpriteExtra::create(emoteSpr, this, menu_selector(ChatPopup::onToggleEmotePicker));
        emoteBtn->m_scaleMultiplier = 1.5f;
        emoteBtn->setPosition({18.f + inputWidth + 18.f, 28.f});
        menu->addChild(emoteBtn);

        auto sendSpr = ButtonSprite::create("Send");
        sendSpr->setScale(0.65f);
        auto sendBtn = CCMenuItemSpriteExtra::create(sendSpr, this, menu_selector(ChatPopup::onSend));
        sendBtn->setPosition({m_size.width - 46.f, 28.f});
        menu->addChild(sendBtn);

        populateChat();

        SessionManager::get().onChatMessage(this, [this](SessionManager::ChatMessage const&) {
            this->populateChat();
        });

        if (m_autoFocus) {
            geode::Loader::get()->queueInMainThread([self = geode::Ref(this)]() {
                if (!self->m_isClosing && self->m_input) {
                    self->m_input->focus();
                }
            });
        }

        return true;
    }

    void ChatPopup::populateChat() {
        m_scrollLayer->m_contentLayer->removeAllChildren();

        auto& session = SessionManager::get();
        auto& history = session.getChatHistory();
        float width = m_scrollLayer->getContentSize().width;
        bool isDedicated = session.isDedicatedServer();

        std::vector<cocos2d::CCNode*> cells;
        float totalHeight = 6.f;

        for (auto const& msg : history) {
            auto* pInfo = session.getPlayer(msg.playerId);
            cocos2d::ccColor3B pColor = pInfo
                ? getPlayerEffectiveColor(pInfo->colorIndex, pInfo->iconStr)
                : ColorPalette::getColor(0);

            auto app = pInfo ? parsePlayerAppearance(pInfo->iconStr) : PlayerAppearance{};
            auto* gm = GameManager::sharedState();
            cocos2d::ccColor3B col1 = gm ? gm->colorForIdx(app.col1) : pColor;
            cocos2d::ccColor3B col2 = gm ? gm->colorForIdx(app.col2) : cocos2d::ccColor3B{255, 255, 255};
            cocos2d::ccColor3B glowCol = gm ? gm->colorForIdx(app.glowCol) : cocos2d::ccColor3B{0, 0, 0};

            bool isHost = (msg.playerId == 0 && !isDedicated);

            auto cell = cocos2d::CCNode::create();
            float cursorX = 28.f;
            float fontScale = 0.58f;

            geode::Label* hostLabel = nullptr;
            if (isHost) {
                hostLabel = geode::Label::create("[HOST]", "chatFont.fnt");
                hostLabel->setScale(fontScale);
                hostLabel->setColor({255, 215, 70});
                hostLabel->setAnchorPoint({0.f, 1.f});
                hostLabel->setPositionX(cursorX);
                cursorX += hostLabel->getScaledContentSize().width + 4.f;
            }

            auto nameLabel = geode::Label::create(fmt::format("{}:", msg.senderName), "chatFont.fnt");
            nameLabel->setScale(fontScale);
            nameLabel->setColor(pColor);
            nameLabel->setAnchorPoint({0.f, 1.f});
            nameLabel->setPositionX(cursorX);
            cursorX += nameLabel->getScaledContentSize().width + 4.f;

            float maxMsgW = std::max(80.f, width - cursorX - 8.f);
            auto msgLabel = geode::Label::create(msg.message, "chatFont.fnt");
            msgLabel->setScale(fontScale);
            msgLabel->setMaxWidth(maxMsgW / fontScale);
            msgLabel->setBreakWords(true);
            msgLabel->setColor({255, 255, 255});
            msgLabel->setAnchorPoint({0.f, 1.f});
            msgLabel->setPositionX(cursorX);

            float textH = std::max(nameLabel->getScaledContentSize().height, msgLabel->getScaledContentSize().height);
            float cellHeight = std::max(26.f, textH + 10.f);
            float topY = cellHeight - 5.f;

            auto playerIcon = SimplePlayer::create(app.cubeFrame);
            playerIcon->setColor(col1);
            playerIcon->setSecondColor(col2);
            if (app.glow) {
                playerIcon->setGlowOutline(glowCol);
            } else {
                playerIcon->disableGlowOutline();
            }
            playerIcon->setScale(0.46f);
            playerIcon->setPosition({14.f, cellHeight - 13.f});
            cell->addChild(playerIcon);

            if (hostLabel) {
                hostLabel->setPositionY(topY);
                cell->addChild(hostLabel);
            }
            nameLabel->setPositionY(topY);
            cell->addChild(nameLabel);

            msgLabel->setPositionY(topY);
            cell->addChild(msgLabel);

            cell->setContentSize({width, cellHeight});
            cells.push_back(cell);
            totalHeight += cellHeight + 2.f;
        }

        float viewHeight = m_scrollLayer->getContentSize().height;
        float contentHeight = std::max(totalHeight, viewHeight);
        m_scrollLayer->m_contentLayer->setContentSize({width, contentHeight});

        float currentY = contentHeight - 3.f;
        for (auto* cell : cells) {
            currentY -= cell->getContentSize().height;
            cell->setPosition({0.f, currentY});
            m_scrollLayer->m_contentLayer->addChild(cell);
            currentY -= 2.f;
        }

        if (contentHeight > viewHeight) {
            m_scrollLayer->m_contentLayer->setPositionY(0.f);
        } else {
            m_scrollLayer->m_contentLayer->setPositionY(viewHeight - contentHeight);
        }
    }

    void ChatPopup::insertEmoteTag(std::string const& tag) {
        if (!m_input || tag.empty()) return;
        std::string current = m_input->getString();
        size_t maxLen = m_input->getMaxCharCount();
        if (maxLen > 0 && current.size() + tag.size() > maxLen) return;

        int pos = m_input->isFocused()
            ? std::clamp(m_input->getCursorPos(), 0, static_cast<int>(current.size()))
            : static_cast<int>(current.size());
        current.insert(static_cast<size_t>(pos), tag);
        m_input->setString(current);
        m_input->setCursorPos(pos + static_cast<int>(tag.size()));
        m_input->focus();
    }

    void ChatPopup::onToggleEmotePicker(CCObject* sender) {
        auto* btn = static_cast<CCNode*>(sender);
        m_emotePicker = EmotePickerPopup::toggle(m_emotePicker, this, btn, m_dummyInput, 100, 100);
    }

    void ChatPopup::emotePickerClosed(EmotePickerPopup* picker) {
        if (m_emotePicker == picker) {
            m_emotePicker = nullptr;
        }
    }

    void ChatPopup::emotePicked(EmotePickerPopup*, EmoteDef const* def) {
        if (!def || !def->m_name) return;
        this->insertEmoteTag(fmt::format(":{}:", def->m_name));
    }

    void ChatPopup::emotePickerKeyDown(EmotePickerPopup*, cocos2d::enumKeyCodes, double) {}

    void ChatPopup::textChanged(CCTextInputNode* input) {
        if (!input || input != m_dummyInput) return;
        std::string added = input->getString();
        if (added.empty()) return;
        input->setString("");
        this->insertEmoteTag(added);
    }

    void ChatPopup::onSend(CCObject*) {
        if (!m_input) return;
        if (m_emotePicker) {
            m_emotePicker->onClose(nullptr);
            m_emotePicker = nullptr;
        }
        std::string text = geode::utils::string::trim(m_input->getString());
        if (!text.empty()) {
            SessionManager::get().sendChatMessage(text);
            m_input->setString("");
        }
        m_input->focus();
    }

    void ChatPopup::onClose(CCObject* obj) {
        if (m_emotePicker) {
            m_emotePicker->m_delegate = nullptr;
            m_emotePicker->onClose(nullptr);
            m_emotePicker = nullptr;
        }
        if (m_dummyInput) {
            m_dummyInput->m_delegate = nullptr;
        }
        if (m_input) {
            m_input->unfocus();
        }
        SessionManager::get().removeListener(this);
        BasePopup::onClose(obj);
    }

    ChatPopup* ChatPopup::create(bool autoFocus) {
        auto ret = new ChatPopup();
        if (ret && ret->init(380.f, 270.f) && ret->setup(autoFocus)) {
            ret->autorelease();
            return ret;
        }
        CC_SAFE_DELETE(ret);
        return nullptr;
    }

}
