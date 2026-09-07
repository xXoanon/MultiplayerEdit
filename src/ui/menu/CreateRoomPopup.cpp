#include "CreateRoomPopup.hpp"
#include "../../P2PManager.hpp"
#include "MultiplayerMenuPopup.hpp"
#include "../../SessionManager.hpp"
#include <Geode/utils/web.hpp>

using namespace geode::prelude;

namespace mpedit {

    CreateRoomPopup* CreateRoomPopup::create(MultiplayerMenuPopup* parent) {
        auto ret = new CreateRoomPopup();
        if (ret->init(parent)) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    bool CreateRoomPopup::init(MultiplayerMenuPopup* parent) {
        if (!BasePopup::init(300.f, 260.f)) return false;
        m_parentPopup = parent;
        
        this->setTitle("Create Room");

        auto layoutNode = CCNode::create();
        layoutNode->setContentSize({260.f, 190.f});
        layoutNode->setPosition(this->center() + cocos2d::CCPoint{0.f, 15.f});
        layoutNode->setAnchorPoint({0.5f, 0.5f});
        layoutNode->setLayout(ColumnLayout::create()->setGap(12.f)->setAxisReverse(true));
        m_mainLayer->addChild(layoutNode);

        auto createLabeledInput = [](CCNode* parent, const char* labelStr, float width, const char* placeholder, int maxLen, geode::CommonFilter filter, geode::TextInput*& outInput) {
            auto wrapper = CCNode::create();
            wrapper->setContentSize({width, 45.f});
            wrapper->setLayout(ColumnLayout::create()->setAxisReverse(true)->setGap(4.f));
            
            auto label = CCLabelBMFont::create(labelStr, "goldFont.fnt");
            label->setScale(0.5f);
            wrapper->addChild(label);
            
            outInput = geode::TextInput::create(width, placeholder, "chatFont.fnt");
            outInput->setMaxCharCount(maxLen);
            outInput->setCommonFilter(filter);
            wrapper->addChild(outInput);
            
            wrapper->updateLayout();
            parent->addChild(wrapper);
        };

        createLabeledInput(layoutNode, "Room Name", 240.f, "Room Name", 32, geode::CommonFilter::Any, m_nameInput);
        m_nameInput->setString(fmt::format("{}'s room", GJAccountManager::sharedState()->m_username));

        auto row = CCNode::create();
        row->setContentSize({240.f, 45.f});
        row->setLayout(RowLayout::create()->setGap(15.f));
        
        createLabeledInput(row, "Passcode", 112.5f, "(none)", 11, geode::CommonFilter::Uint, m_passInput);
        createLabeledInput(row, "Player limit", 112.5f, "Unlimited", 6, geode::CommonFilter::Uint, m_limitInput);
        
        row->updateLayout();
        layoutNode->addChild(row);

        auto privRow = CCNode::create();
        privRow->setContentSize({240.f, 30.f});
        privRow->setLayout(RowLayout::create()->setGap(8.f)->setAxisAlignment(AxisAlignment::Center));
        
        auto privLabel = CCLabelBMFont::create("Private Room", "goldFont.fnt");
        privLabel->setScale(0.4f);
        privRow->addChild(privLabel);
        
        auto onSpr = CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png");
        auto offSpr = CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png");
        onSpr->setScale(0.6f);
        offSpr->setScale(0.6f);
        m_privateToggle = CCMenuItemToggler::create(offSpr, onSpr, this, nullptr);
        
        auto privMenu = CCMenu::create();
        privMenu->setContentSize({30.f, 30.f});
        m_privateToggle->setPosition({15.f, 15.f});
        privMenu->addChild(m_privateToggle);
        privRow->addChild(privMenu);
        
        privRow->updateLayout();
        layoutNode->addChild(privRow);

        auto voRow = CCNode::create();
        voRow->setContentSize({240.f, 30.f});
        voRow->setLayout(RowLayout::create()->setGap(8.f)->setAxisAlignment(AxisAlignment::Center));
        
        auto voLabel = CCLabelBMFont::create("Default View-Only", "goldFont.fnt");
        voLabel->setScale(0.4f);
        voRow->addChild(voLabel);
        
        auto voOnSpr = CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png");
        auto voOffSpr = CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png");
        voOnSpr->setScale(0.6f);
        voOffSpr->setScale(0.6f);
        m_viewOnlyToggle = CCMenuItemToggler::create(voOffSpr, voOnSpr, this, nullptr);
        
        auto voMenu = CCMenu::create();
        voMenu->setContentSize({30.f, 30.f});
        m_viewOnlyToggle->setPosition({15.f, 15.f});
        voMenu->addChild(m_viewOnlyToggle);
        voRow->addChild(voMenu);
        
        voRow->updateLayout();
        layoutNode->addChild(voRow);

        layoutNode->updateLayout();

        
        auto hostBtnSprite = ButtonSprite::create("Create", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        auto hostBtn = CCMenuItemSpriteExtra::create(hostBtnSprite, this, menu_selector(CreateRoomPopup::onCreate));
        hostBtn->setPosition(this->fromBottom(25.f));
        m_uiMenu->addChild(hostBtn);

        return true;
    }

    void CreateRoomPopup::onCreate(CCObject*) {
        RoomSettings settings;
        settings.roomName = m_nameInput->getString();
        if (settings.roomName.empty()) settings.roomName = fmt::format("{}'s room", GJAccountManager::sharedState()->m_username);
        
        std::string lim = m_limitInput->getString();
        if (!lim.empty()) {
            settings.playerLimit = std::stoi(lim);
        } else {
            settings.playerLimit = 0;
        }
        
        settings.password = m_passInput->getString();
        settings.isPrivate = m_privateToggle->isToggled();
        settings.defaultViewOnly = m_viewOnlyToggle->isToggled();
        
        SessionManager::get().hostSession(Mod::get()->getSettingValue<std::string>("player-name"), settings);
        
        this->setKeyboardEnabled(false);
        this->setTouchEnabled(false);
        this->removeFromParentAndCleanup(true);
        if (m_parentPopup) {
            m_parentPopup->onConnecting();
        } else {
            auto popup = MultiplayerMenuPopup::create();
            popup->show();
            popup->onConnecting();
        }
    }

}
