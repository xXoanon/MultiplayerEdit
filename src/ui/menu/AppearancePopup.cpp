#include "AppearancePopup.hpp"
#include "../CursorNode.hpp"
#include <Geode/binding/GameManager.hpp>
#include <Geode/binding/GJAccountManager.hpp>
#include <Geode/binding/ButtonSprite.hpp>
#include <Geode/binding/SimplePlayer.hpp>

using namespace geode::prelude;

namespace mpedit {

    AppearancePopup* AppearancePopup::create() {
        auto* ret = new AppearancePopup();
        if (ret && ret->init()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    bool AppearancePopup::init() {
        if (!BasePopup::init(350.f, 260.f)) return false;

        this->setTitle("Customize Appearance");

        m_selectedType = getLocalSavedCursorType();
        if (m_selectedType < 0 || m_selectedType > 5) {
            m_selectedType = 0;
        }

        m_selectedColor = getLocalSavedCursorColor();
        if (m_selectedColor < 0 || m_selectedColor >= 16) {
            m_selectedColor = 0;
        }

        float w = m_size.width;
        float h = m_size.height;

        auto typeMenu = CCMenu::create();
        typeMenu->setPosition({w / 2.f, h - 50.f});
        typeMenu->setContentSize({260.f, 36.f});
        typeMenu->setAnchorPoint({0.5f, 0.5f});
        m_mainLayer->addChild(typeMenu);

        m_typeButtons.clear();
        m_typeDrawNodes.clear();

        auto* gm = GameManager::sharedState();
        auto activeColor = ColorPalette::getColor(m_selectedColor);

        for (int i = 0; i < 6; ++i) {
            float posX = -100.f + i * 40.f;

            auto tile = CCScale9Sprite::create("square02_small.png");
            tile->setContentSize({34.f, 34.f});
            tile->setOpacity(110);

            if (i == 0) {
                int waveFrame = gm ? gm->getPlayerDart() : 1;
                auto wave = SimplePlayer::create(waveFrame);
                wave->updatePlayerFrame(waveFrame, IconType::Wave);
                wave->setScale(0.65f);
                wave->setRotation(-135.f);
                wave->setPosition({17.f, 17.f});
                if (gm) {
                    auto c1 = gm->colorForIdx(gm->getPlayerColor());
                    auto c2 = gm->colorForIdx(gm->getPlayerColor2());
                    wave->setColors(c1, c2);
                    if (gm->getPlayerGlow()) {
                        wave->setGlowOutline(gm->colorForIdx(gm->getPlayerGlowColor()));
                    } else {
                        wave->disableGlowOutline();
                    }
                }
                tile->addChild(wave, 1);
            } else {
                auto dn = CCDrawNode::create();
                if (i == 1) {
                    dn->setPosition({11.f, 25.f});
                    dn->setScale(0.85f);
                } else if (i == 2 || i == 3) {
                    dn->setPosition({17.f, 17.f});
                } else if (i == 4) {
                    dn->setPosition({11.f, 22.5f});
                    dn->setScale(0.85f);
                } else if (i == 5) {
                    dn->setPosition({11.f, 23.f});
                    dn->setScale(0.85f);
                }

                CursorNode::drawCursor(dn, i, activeColor);
                tile->addChild(dn, 1);
                m_typeDrawNodes.push_back(dn);
            }

            auto btn = CCMenuItemSpriteExtra::create(tile, this, menu_selector(AppearancePopup::onSelectType));
            btn->setTag(i);
            btn->setPosition({posX, 0.f});
            typeMenu->addChild(btn);
            m_typeButtons.push_back(btn);
        }

        m_cursorTypeSelect = CCSprite::createWithSpriteFrameName("GJ_select_001.png");
        m_cursorTypeSelect->setScale(0.85f);
        typeMenu->addChild(m_cursorTypeSelect, 10);

        m_previewBox = CCNode::create();
        m_previewBox->setContentSize({250.f, 48.f});
        m_previewBox->setPosition({w / 2.f, h - 98.f});
        m_previewBox->setAnchorPoint({0.5f, 0.5f});
        m_mainLayer->addChild(m_previewBox);

        auto previewBg = CCScale9Sprite::create("square02_small.png");
        previewBg->setContentSize(m_previewBox->getContentSize());
        previewBg->setPosition(m_previewBox->getContentSize() / 2.f);
        previewBg->setOpacity(90);
        m_previewBox->addChild(previewBg, -1);

        m_previewArrow = CCDrawNode::create();
        m_previewBox->addChild(m_previewArrow, 1);

        m_previewWave = SimplePlayer::create(1);
        m_previewWave->setScale(1.0f);
        m_previewWave->setRotation(-135.f);
        m_previewBox->addChild(m_previewWave, 1);

        std::string displayName = GJAccountManager::sharedState()->m_username;
        if (displayName.empty()) displayName = "Player";

        m_previewName = CCLabelBMFont::create(displayName.c_str(), "chatFont.fnt");
        m_previewName->setScale(0.4f);
        m_previewName->setAnchorPoint({0.f, 0.5f});
        m_previewBox->addChild(m_previewName, 1);

        m_paletteContainer = CCNode::create();
        m_paletteContainer->setContentSize({260.f, 75.f});
        m_paletteContainer->setPosition({w / 2.f, 72.f});
        m_paletteContainer->setAnchorPoint({0.5f, 0.5f});
        m_mainLayer->addChild(m_paletteContainer);

        auto paletteMenu = CCMenu::create();
        paletteMenu->setPosition({130.f, 37.5f});
        paletteMenu->setContentSize({260.f, 75.f});
        paletteMenu->setAnchorPoint({0.5f, 0.5f});
        m_paletteContainer->addChild(paletteMenu);

        m_colorButtons.clear();

        float startX = -94.5f;
        float startY = 14.f;
        float stepX = 27.f;
        float stepY = 27.f;

        for (int i = 0; i < 16; ++i) {
            int row = i / 8;
            int col = i % 8;
            float posX = startX + col * stepX;
            float posY = startY - row * stepY;

            auto spr = CCSprite::createWithSpriteFrameName("GJ_colorBtn_001.png");
            spr->setScale(0.6f);
            spr->setColor(ColorPalette::getColor(i));

            auto btn = CCMenuItemSpriteExtra::create(spr, this, menu_selector(AppearancePopup::onSelectColor));
            btn->setTag(i);
            btn->setPosition({posX, posY});
            paletteMenu->addChild(btn);
            m_colorButtons.push_back(btn);
        }

        m_cursorSelect = CCSprite::createWithSpriteFrameName("GJ_select_001.png");
        m_cursorSelect->setScale(0.6f);
        paletteMenu->addChild(m_cursorSelect, 10);

        m_waveInfoContainer = CCNode::create();
        m_waveInfoContainer->setContentSize({260.f, 60.f});
        m_waveInfoContainer->setPosition({w / 2.f, 72.f});
        m_waveInfoContainer->setAnchorPoint({0.5f, 0.5f});
        m_mainLayer->addChild(m_waveInfoContainer);

        auto waveInfoLabel = CCLabelBMFont::create("Uses your Geometry Dash Wave & colors", "chatFont.fnt");
        waveInfoLabel->setScale(0.45f);
        waveInfoLabel->setColor({200, 200, 200});
        waveInfoLabel->setPosition({130.f, 35.f});
        m_waveInfoContainer->addChild(waveInfoLabel);

        auto okSpr = ButtonSprite::create("OK", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        okSpr->setScale(0.75f);
        auto okBtn = CCMenuItemSpriteExtra::create(okSpr, this, menu_selector(AppearancePopup::onSave));

        auto okMenu = CCMenu::create();
        okMenu->setPosition({w / 2.f, 22.f});
        okMenu->addChild(okBtn);
        m_mainLayer->addChild(okMenu);

        this->updateTypeSelection();
        this->updateColorSelection();
        this->updatePreview();

        m_paletteContainer->setVisible(m_selectedType != 0);
        m_waveInfoContainer->setVisible(m_selectedType == 0);

        return true;
    }

    void AppearancePopup::updateTypeSelection() {
        if (m_cursorTypeSelect && m_selectedType >= 0 && m_selectedType < static_cast<int>(m_typeButtons.size())) {
            m_cursorTypeSelect->setVisible(true);
            m_cursorTypeSelect->setPosition(m_typeButtons[m_selectedType]->getPosition());
        }
    }

    void AppearancePopup::updateCursorListColors() {
        auto col = ColorPalette::getColor(m_selectedColor);
        for (size_t i = 0; i < m_typeDrawNodes.size(); ++i) {
            int type = static_cast<int>(i) + 1;
            CursorNode::drawCursor(m_typeDrawNodes[i], type, col);
        }
    }

    void AppearancePopup::updateColorSelection() {
        if (m_cursorSelect && m_selectedColor >= 0 && m_selectedColor < static_cast<int>(m_colorButtons.size())) {
            m_cursorSelect->setVisible(true);
            m_cursorSelect->setPosition(m_colorButtons[m_selectedColor]->getPosition());
        } else if (m_cursorSelect) {
            m_cursorSelect->setVisible(false);
        }
    }

    void AppearancePopup::updatePreview() {
        auto* gm = GameManager::sharedState();
        float boxW = m_previewBox->getContentSize().width;
        float boxH = m_previewBox->getContentSize().height;
        float centerY = boxH / 2.f;
        float nameW = m_previewName->getContentSize().width * m_previewName->getScaleX();

        if (m_selectedType == 0) {
            m_previewArrow->setVisible(false);
            m_previewWave->setVisible(true);

            if (gm) {
                m_previewWave->updatePlayerFrame(gm->getPlayerDart(), IconType::Wave);
                auto c1 = gm->colorForIdx(gm->getPlayerColor());
                auto c2 = gm->colorForIdx(gm->getPlayerColor2());
                m_previewWave->setColors(c1, c2);
                if (gm->getPlayerGlow()) {
                    m_previewWave->setGlowOutline(gm->colorForIdx(gm->getPlayerGlowColor()));
                } else {
                    m_previewWave->disableGlowOutline();
                }
                m_previewName->setColor(c1);
            }

            m_previewWave->setScale(1.0f);
            m_previewWave->setRotation(-135.f);

            float waveVisualWidth = 26.f;
            float gap = 8.f;
            float totalW = waveVisualWidth + gap + nameW;
            float startX = (boxW - totalW) / 2.f;

            m_previewWave->setPosition({startX + 13.f, centerY});
            m_previewName->setPosition({startX + waveVisualWidth + gap, centerY});
        } else {
            m_previewWave->setVisible(false);
            m_previewArrow->setVisible(true);

            auto col = ColorPalette::getColor(m_selectedColor);
            CursorNode::drawCursor(m_previewArrow, m_selectedType, col);

            m_previewName->setColor(col);

            float cursorW = 14.f;
            float cursorOffsetTipX = 0.f;
            float cursorOffsetTipY = centerY;

            if (m_selectedType == 2) {
                cursorW = 17.f;
                cursorOffsetTipX = 8.5f;
                cursorOffsetTipY = centerY;
            } else if (m_selectedType == 3) {
                cursorW = 10.f;
                cursorOffsetTipX = 5.f;
                cursorOffsetTipY = centerY;
            } else if (m_selectedType == 4) {
                cursorW = 13.f;
                cursorOffsetTipX = 0.f;
                cursorOffsetTipY = centerY + 6.5f;
            } else if (m_selectedType == 5) {
                cursorW = 14.f;
                cursorOffsetTipX = 0.f;
                cursorOffsetTipY = centerY + 7.f;
            } else {
                cursorW = 13.f;
                cursorOffsetTipX = 0.f;
                cursorOffsetTipY = centerY + 8.9f;
            }

            float gap = 8.f;
            float totalW = cursorW + gap + nameW;
            float startX = (boxW - totalW) / 2.f;

            m_previewArrow->setPosition({startX + cursorOffsetTipX, cursorOffsetTipY});
            m_previewName->setPosition({startX + cursorW + gap, centerY});
        }
    }

    void AppearancePopup::onSelectType(cocos2d::CCObject* sender) {
        m_selectedType = sender->getTag();
        this->updateTypeSelection();
        this->updatePreview();
        m_paletteContainer->setVisible(m_selectedType != 0);
        m_waveInfoContainer->setVisible(m_selectedType == 0);
    }

    void AppearancePopup::onSelectColor(cocos2d::CCObject* sender) {
        m_selectedColor = sender->getTag();
        this->updateColorSelection();
        this->updateCursorListColors();
        this->updatePreview();
    }

    void AppearancePopup::onSave(cocos2d::CCObject*) {
        SessionManager::get().updateLocalAppearance(m_selectedType, m_selectedColor);
        this->onClose(nullptr);
    }

}
