#include "DedicatedServersPopup.hpp"
#include "MyHostedRoomsPopup.hpp"
#include "MultiplayerMenuPopup.hpp"
#include <Geode/ui/TextInput.hpp>
#include <Geode/ui/BasedButtonSprite.hpp>

using namespace geode::prelude;

namespace mpedit {

    std::vector<SavedServer> DedicatedServersPopup::getSavedServers() {
        std::vector<SavedServer> ret;
        auto saved = Mod::get()->getSavedValue<matjson::Value>("saved-servers");
        if (saved.isArray()) {
            for (auto& item : saved.asArray().unwrap()) {
                SavedServer s;
                s.name = item.get<std::string>("name").unwrapOr("");
                s.url = item.get<std::string>("url").unwrapOr("");
                if (!s.url.empty()) ret.push_back(s);
            }
        }
        return ret;
    }

    void DedicatedServersPopup::saveServers(std::vector<SavedServer> const& servers) {
        std::vector<matjson::Value> arr;
        for (auto& s : servers) {
            auto obj = matjson::makeObject({
                {"name", s.name},
                {"url", s.url}
            });
            arr.push_back(obj);
        }
        Mod::get()->setSavedValue("saved-servers", matjson::Value(arr));
    }

    class SavedServerCell : public cocos2d::CCNode {
    protected:
        DedicatedServersPopup* m_parentPopup;
        int m_index;
        SavedServer m_info;

        bool init(SavedServer const& info, int index, DedicatedServersPopup* parent, float width) {
            if (!CCNode::init()) return false;
            m_info = info;
            m_index = index;
            m_parentPopup = parent;
            this->setContentSize({width, 40.f});

            auto bg = CCScale9Sprite::create("square02_small.png");
            bg->setContentSize(this->getContentSize());
            bg->setAnchorPoint({0, 0});
            bg->setOpacity(90);
            bg->setColor({0, 0, 0});
            this->addChild(bg);

            auto nameStr = info.name.empty() ? "Unnamed Server" : info.name;
            auto nameLabel = CCLabelBMFont::create(nameStr.c_str(), "bigFont.fnt");
            nameLabel->setAnchorPoint({0, 0.5f});
            nameLabel->setPosition({10.f, 26.f});
            nameLabel->setScale(0.45f);
            this->addChild(nameLabel);

            auto urlLabel = CCLabelBMFont::create(info.url.c_str(), "chatFont.fnt");
            urlLabel->setAnchorPoint({0, 0.5f});
            urlLabel->setPosition({10.f, 10.f});
            urlLabel->setScale(0.45f);
            urlLabel->setColor({200, 200, 200});
            this->addChild(urlLabel);

            auto menu = CCMenu::create();
            menu->setPosition({width - 30.f, 20.f});
            this->addChild(menu);

            auto joinBtnSprite = ButtonSprite::create("Join", "goldFont.fnt", "GJ_button_01.png", 0.7f);
            joinBtnSprite->setScale(0.55f);
            auto joinBtn = CCMenuItemSpriteExtra::create(joinBtnSprite, this, menu_selector(SavedServerCell::onJoin));
            joinBtn->setPosition({-30.f, 0});
            menu->addChild(joinBtn);

            auto delSprite = CCSprite::createWithSpriteFrameName("GJ_trashBtn_001.png");
            delSprite->setScale(0.5f);
            auto delBtn = CCMenuItemSpriteExtra::create(delSprite, this, menu_selector(SavedServerCell::onDelete));
            delBtn->setPosition({15.f, 0});
            menu->addChild(delBtn);

            return true;
        }

        void onJoin(CCObject*) {
            m_parentPopup->connectTo(m_info.url);
        }

        void onDelete(CCObject*) {
            m_parentPopup->deleteServer(m_index);
        }

    public:
        static SavedServerCell* create(SavedServer const& info, int index, DedicatedServersPopup* parent, float width) {
            auto ret = new SavedServerCell();
            if (ret->init(info, index, parent, width)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class DirectConnectPopup : public BasePopup {
    protected:
        geode::TextInput* m_input = nullptr;
        DedicatedServersPopup* m_parentPopup = nullptr;

        bool init(DedicatedServersPopup* parent) {
            if (!BasePopup::init(280.f, 160.f)) return false;
            m_parentPopup = parent;
            this->setTitle("Direct Connect");

            m_input = geode::TextInput::create(220.f, "", "chatFont.fnt");
            m_input->setPosition(this->center());
            m_input->setCommonFilter(geode::CommonFilter::Any);
            m_mainLayer->addChild(m_input);

            auto joinBtnSprite = ButtonSprite::create("Connect", "goldFont.fnt", "GJ_button_01.png", 0.6f);
            auto joinBtn = CCMenuItemSpriteExtra::create(joinBtnSprite, this, menu_selector(DirectConnectPopup::onConnect));
            joinBtn->setPosition(this->fromBottom(25.f));
            m_uiMenu->addChild(joinBtn);

            return true;
        }

        void onConnect(CCObject*) {
            std::string url = geode::utils::string::trim(m_input->getString());
            if (url.empty()) return;
            
            auto parent = m_parentPopup;
            this->onClose(nullptr);
            if (parent) parent->connectTo(url);
        }

    public:
        static DirectConnectPopup* create(DedicatedServersPopup* parent) {
            auto ret = new DirectConnectPopup();
            if (ret->init(parent)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class AddServerPopup : public BasePopup {
    protected:
        geode::TextInput* m_nameInput = nullptr;
        geode::TextInput* m_urlInput = nullptr;
        DedicatedServersPopup* m_parentPopup = nullptr;

        bool init(DedicatedServersPopup* parent) {
            if (!BasePopup::init(280.f, 200.f)) return false;
            m_parentPopup = parent;
            this->setTitle("Add Server");

            auto nameLabel = CCLabelBMFont::create("Server Name", "goldFont.fnt");
            nameLabel->setPosition(this->center() + CCPoint{0, 45.f});
            nameLabel->setScale(0.5f);
            m_mainLayer->addChild(nameLabel);

            m_nameInput = geode::TextInput::create(220.f, "", "chatFont.fnt");
            m_nameInput->setPosition(this->center() + CCPoint{0, 20.f});
            m_nameInput->setCommonFilter(geode::CommonFilter::Any);
            m_mainLayer->addChild(m_nameInput);

            auto urlLabel = CCLabelBMFont::create("Server Address", "goldFont.fnt");
            urlLabel->setPosition(this->center() + CCPoint{0, -15.f});
            urlLabel->setScale(0.5f);
            m_mainLayer->addChild(urlLabel);

            m_urlInput = geode::TextInput::create(220.f, "", "chatFont.fnt");
            m_urlInput->setPosition(this->center() + CCPoint{0, -40.f});
            m_urlInput->setCommonFilter(geode::CommonFilter::Any);
            m_mainLayer->addChild(m_urlInput);

            auto addBtnSprite = ButtonSprite::create("Add", "goldFont.fnt", "GJ_button_01.png", 0.6f);
            auto addBtn = CCMenuItemSpriteExtra::create(addBtnSprite, this, menu_selector(AddServerPopup::onAdd));
            addBtn->setPosition(this->fromBottom(25.f));
            m_uiMenu->addChild(addBtn);

            return true;
        }

        void onAdd(CCObject*) {
            std::string name = m_nameInput->getString();
            std::string url = geode::utils::string::trim(m_urlInput->getString());
            if (name.empty() || url.empty()) return;
            
            auto servers = m_parentPopup->getSavedServers();
            servers.push_back({name, url});
            m_parentPopup->saveServers(servers);
            m_parentPopup->setupList();
            
            this->onClose(nullptr);
        }

    public:
        static AddServerPopup* create(DedicatedServersPopup* parent) {
            auto ret = new AddServerPopup();
            if (ret->init(parent)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };


    bool DedicatedServersPopup::init(std::function<void(std::string const&)> onConnect) {
        if (!BasePopup::init(360.f, 240.f)) return false;
        m_onConnect = onConnect;
        MultiplayerMenuPopup::checkUpdatesAndPatreon();
        this->setTitle("Dedicated Servers");

        m_statusLabel = CCLabelBMFont::create("No saved servers.", "chatFont.fnt");
        m_statusLabel->setPosition(this->center());
        m_statusLabel->setScale(0.6f);
        m_statusLabel->setColor({200, 200, 200});
        m_statusLabel->setVisible(false);
        m_mainLayer->addChild(m_statusLabel);

        auto bottomMenu = CCMenu::create();
        bottomMenu->setPosition(this->fromBottom(25.f));
        bottomMenu->setLayout(RowLayout::create()->setGap(10.f));
        m_uiMenu->addChild(bottomMenu);

        auto directBtnSprite = ButtonSprite::create("Direct Connect", "goldFont.fnt", "GJ_button_04.png", 0.6f);
        directBtnSprite->setScale(0.7f);
        auto directBtn = CCMenuItemSpriteExtra::create(directBtnSprite, this, menu_selector(DedicatedServersPopup::onDirectConnect));
        bottomMenu->addChild(directBtn);

        auto addBtnSprite = ButtonSprite::create("Add Server", "goldFont.fnt", "GJ_button_01.png", 0.6f);
        addBtnSprite->setScale(0.7f);
        auto addBtn = CCMenuItemSpriteExtra::create(addBtnSprite, this, menu_selector(DedicatedServersPopup::onAddServer));
        bottomMenu->addChild(addBtn);

        auto myRoomsSprite = ButtonSprite::create("My Hosted Rooms", "goldFont.fnt", "GJ_button_01.png", 0.6f);
        myRoomsSprite->setScale(0.7f);
        auto myRoomsBtn = CCMenuItemSpriteExtra::create(myRoomsSprite, this, menu_selector(DedicatedServersPopup::onMyHostedRooms));
        bottomMenu->addChild(myRoomsBtn);

        bottomMenu->updateLayout();

        this->setupList();

        return true;
    }

    void DedicatedServersPopup::setupList() {
        if (m_scrollLayer) {
            m_scrollLayer->removeFromParent();
            m_scrollLayer = nullptr;
        }
        if (m_bg) {
            m_bg->removeFromParent();
            m_bg = nullptr;
        }

        auto servers = this->getSavedServers();
        if (servers.empty()) {
            m_statusLabel->setVisible(true);
            return;
        }
        m_statusLabel->setVisible(false);

        auto listSize = CCSize{320.f, 130.f};
        m_scrollLayer = ScrollLayer::create(listSize);
        m_scrollLayer->setPosition(this->center() - listSize / 2.f + CCPoint{0, 10.f});
        
        m_bg = CCScale9Sprite::create("square02_small.png");
        m_bg->setContentSize(listSize);
        m_bg->setPosition(m_scrollLayer->getPosition() + listSize / 2.f);
        m_bg->setOpacity(75);
        m_mainLayer->addChild(m_bg, -1);
        m_mainLayer->addChild(m_scrollLayer);

        float y = 0.f;
        for (int i = 0; i < servers.size(); i++) {
            auto cell = SavedServerCell::create(servers[i], i, this, listSize.width);
            m_scrollLayer->m_contentLayer->addChild(cell);
            y += 45.f;
        }

        float totalHeight = std::max(y, listSize.height);
        m_scrollLayer->m_contentLayer->setContentSize({listSize.width, totalHeight});
        
        int i = 0;
        for (auto* child : CCArrayExt<CCNode*>(m_scrollLayer->m_contentLayer->getChildren())) {
            child->setPosition({0, totalHeight - (i + 1) * 45.f});
            i++;
        }
        m_scrollLayer->moveToTop();
        this->syncTouchPriority();
    }

    void DedicatedServersPopup::onAddServer(CCObject*) {
        AddServerPopup::create(this)->show();
    }

    void DedicatedServersPopup::onMyHostedRooms(CCObject*) {
        if (Mod::get()->getSettingValue<std::string>("cloud-auth-token").empty()) {
            FLAlertLayer::create("Error", "Please set your Cloud Auth Token in the mod settings.", "OK")->show();
            return;
        }
        MyHostedRoomsPopup::create()->show();
    }

    void DedicatedServersPopup::onDirectConnect(CCObject*) {
        DirectConnectPopup::create(this)->show();
    }

    void DedicatedServersPopup::deleteServer(int index) {
        auto servers = this->getSavedServers();
        if (index >= 0 && index < servers.size()) {
            servers.erase(servers.begin() + index);
            this->saveServers(servers);
            this->setupList();
        }
    }

    void DedicatedServersPopup::connectTo(std::string const& url) {
        auto onConnect = m_onConnect;
        this->onClose(nullptr);
        if (onConnect) onConnect(url);
    }

    DedicatedServersPopup* DedicatedServersPopup::create(std::function<void(std::string const&)> onConnect) {
        auto ret = new DedicatedServersPopup();
        if (ret->init(onConnect)) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

}
