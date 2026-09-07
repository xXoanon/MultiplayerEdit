#include "../../utils/ChatFilter.hpp"
#include "MyHostedRoomsPopup.hpp"
#include <Geode/ui/TextInput.hpp>

using namespace geode::prelude;

namespace mpedit {

class HostedRoomCell : public cocos2d::CCNode {
protected:
    matjson::Value m_roomObj;
    std::string m_url;
    std::string m_token;

    bool init(matjson::Value const& roomObj, std::string const& url, std::string const& token, float width) {
        if (!CCNode::init()) return false;
        m_roomObj = roomObj;
        m_url = url;
        m_token = token;
        
        this->setContentSize({width, 40.f});

        auto bg = CCScale9Sprite::create("square02_small.png");
        bg->setContentSize(this->getContentSize());
        bg->setAnchorPoint({0, 0});
        bg->setOpacity(90);
        bg->setColor({0, 0, 0});
        this->addChild(bg);

        std::string name = "Unnamed";
        if (roomObj.contains("name")) name = ChatFilter::filter(roomObj["name"].asString().unwrapOr("Unnamed"));
        std::string code = "---";
        if (roomObj.contains("code")) code = roomObj["code"].asString().unwrapOr("---");
        int players = 0;
        if (roomObj.contains("players")) players = roomObj["players"].asInt().unwrapOr(0);
        int maxPlayers = 0;
        if (roomObj.contains("maxPlayers")) maxPlayers = roomObj["maxPlayers"].asInt().unwrapOr(0);

        auto nameLabel = CCLabelBMFont::create(name.c_str(), "bigFont.fnt");
        nameLabel->setAnchorPoint({0, 0.5f});
        nameLabel->setPosition({10.f, 26.f});
        nameLabel->setScale(0.45f);
        this->addChild(nameLabel);

        auto infoStr = fmt::format("Code: {} | Players: {}/{}", code, players, maxPlayers);
        auto infoLabel = CCLabelBMFont::create(infoStr.c_str(), "chatFont.fnt");
        infoLabel->setAnchorPoint({0, 0.5f});
        infoLabel->setPosition({10.f, 10.f});
        infoLabel->setScale(0.45f);
        infoLabel->setColor({200, 200, 200});
        this->addChild(infoLabel);

        auto menu = CCMenu::create();
        menu->setPosition({width - 40.f, 20.f});
        this->addChild(menu);

        auto manageBtnSprite = ButtonSprite::create("Manage", "goldFont.fnt", "GJ_button_01.png", 0.6f);
        manageBtnSprite->setScale(0.6f);
        auto manageBtn = CCMenuItemSpriteExtra::create(manageBtnSprite, this, menu_selector(HostedRoomCell::onManage));
        manageBtn->setPosition({0, 0});
        menu->addChild(manageBtn);

        return true;
    }

    void onManage(CCObject*) {
        ManageRoomPopup::create(m_roomObj, m_url, m_token)->show();
    }

public:
    static HostedRoomCell* create(matjson::Value const& roomObj, std::string const& url, std::string const& token, float width) {
        auto ret = new HostedRoomCell();
        if (ret->init(roomObj, url, token, width)) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }
};


bool MyHostedRoomsPopup::init() {
    if (!geode::Popup::init(360.f, 240.f)) return false;
    this->setTitle("My Hosted Rooms");

    m_token = Mod::get()->getSettingValue<std::string>("cloud-auth-token");
    m_url = Mod::get()->getSettingValue<std::string>("cloud-hosting-url");

    this->fetchRooms();

    auto menu = CCMenu::create();
    menu->setPosition({m_mainLayer->getContentSize().width - 25.f, 25.f});
    m_mainLayer->addChild(menu);

    auto refreshSprite = CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png");
    refreshSprite->setScale(0.8f);
    auto refreshBtn = CCMenuItemSpriteExtra::create(refreshSprite, this, menu_selector(MyHostedRoomsPopup::onRefresh));
    menu->addChild(refreshBtn);

    return true;
}

void MyHostedRoomsPopup::onRefresh(CCObject*) {
    if (m_scrollLayer) {
        m_scrollLayer->m_contentLayer->removeAllChildren();
    }
    this->fetchRooms();
}

void MyHostedRoomsPopup::fetchRooms() {
    std::string reqUrl = m_url + "/api/my-rooms";
    auto req = geode::utils::web::WebRequest();
    req.header("Authorization", "Bearer " + m_token);
    
    m_fetchTask.spawn(
        req.get(reqUrl),
        [this](geode::utils::web::WebResponse res) {
            if (res.ok()) {
                auto json = res.json().unwrapOr(matjson::Value());
                if (json.contains("rooms") && json["rooms"].isArray()) {
                    this->setupList(json["rooms"]);
                } else {
                    FLAlertLayer::create("Error", "Invalid response from server", "OK")->show();
                }
            } else {
                FLAlertLayer::create("Error", fmt::format("Failed to fetch rooms: {}", res.code()), "OK")->show();
            }
        }
    );
}

void MyHostedRoomsPopup::setupList(matjson::Value const& rooms) {
    if (m_scrollLayer) {
        m_scrollLayer->removeFromParent();
        m_scrollLayer = nullptr;
    }
    
    auto listSize = CCSize{320.f, 150.f};
    m_scrollLayer = ScrollLayer::create(listSize);
    m_scrollLayer->setPosition(m_mainLayer->getContentSize() / 2 - listSize / 2 - CCPoint{0, 10.f});
    
    auto bg = CCScale9Sprite::create("square02_small.png");
    bg->setContentSize(listSize);
    bg->setPosition(m_scrollLayer->getPosition() + listSize / 2);
    bg->setOpacity(75);
    m_mainLayer->addChild(bg, -1);
    m_mainLayer->addChild(m_scrollLayer);

    auto roomsArr = rooms.asArray().unwrapOr(std::vector<matjson::Value>());
    
    if (roomsArr.empty()) {
        auto lbl = CCLabelBMFont::create("No rooms found.", "chatFont.fnt");
        lbl->setPosition(listSize / 2);
        m_scrollLayer->addChild(lbl);
        return;
    }

    float y = 0.f;
    for (int i = 0; i < roomsArr.size(); i++) {
        auto cell = HostedRoomCell::create(roomsArr[i], m_url, m_token, listSize.width);
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
}

MyHostedRoomsPopup* MyHostedRoomsPopup::create() {
    auto ret = new MyHostedRoomsPopup();
    if (ret->init()) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}


bool ManageRoomPopup::init(matjson::Value const& roomObj, std::string const& url, std::string const& token) {
    if (!geode::Popup::init(300.f, 280.f)) return false;
    
    m_code = roomObj.contains("code") ? roomObj["code"].asString().unwrapOr("") : "";
    m_url = url;
    m_token = token;

    std::string name = roomObj.contains("name") ? ChatFilter::filter(roomObj["name"].asString().unwrapOr("Unnamed")) : "Unnamed";

    this->setTitle(name);
    
    auto codeLabel = CCLabelBMFont::create(fmt::format("Code: {}", m_code).c_str(), "chatFont.fnt");
    codeLabel->setPosition({m_mainLayer->getContentSize().width / 2, m_mainLayer->getContentSize().height - 50.f});
    m_mainLayer->addChild(codeLabel);

    auto menu = CCMenu::create();
    menu->setPosition({m_mainLayer->getContentSize().width / 2, m_mainLayer->getContentSize().height / 2});
    m_mainLayer->addChild(menu);

    auto copyBtnSprite = ButtonSprite::create("Copy Invite URL");
    auto copyBtn = CCMenuItemSpriteExtra::create(copyBtnSprite, this, menu_selector(ManageRoomPopup::onCopyInvite));
    copyBtn->setPosition({0, 60.f});
    menu->addChild(copyBtn);

    auto passBtnSprite = ButtonSprite::create("Change Password");
    auto passBtn = CCMenuItemSpriteExtra::create(passBtnSprite, this, menu_selector(ManageRoomPopup::onChangePassword));
    passBtn->setPosition({0, 20.f});
    menu->addChild(passBtn);

    auto maxPlayersBtnSprite = ButtonSprite::create("Change Max Players");
    auto maxPlayersBtn = CCMenuItemSpriteExtra::create(maxPlayersBtnSprite, this, menu_selector(ManageRoomPopup::onChangeMaxPlayers));
    maxPlayersBtn->setPosition({0, -20.f});
    menu->addChild(maxPlayersBtn);

    auto dlBtnSprite = ButtonSprite::create("View Files in Browser");
    auto dlBtn = CCMenuItemSpriteExtra::create(dlBtnSprite, this, menu_selector(ManageRoomPopup::onDownloadBackups));
    dlBtn->setPosition({0, -60.f});
    menu->addChild(dlBtn);

    auto shutBtnSprite = ButtonSprite::create("Shut Down", "goldFont.fnt", "GJ_button_06.png", 0.8f);
    auto shutBtn = CCMenuItemSpriteExtra::create(shutBtnSprite, this, menu_selector(ManageRoomPopup::onShutDown));
    shutBtn->setPosition({0, -100.f});
    menu->addChild(shutBtn);

    return true;
}

void ManageRoomPopup::onCopyInvite(CCObject*) {
    std::string wsUrl = m_url;
    if (wsUrl.find("http://") == 0) wsUrl.replace(0, 7, "ws://");
    else if (wsUrl.find("https://") == 0) wsUrl.replace(0, 8, "wss://");
    if (wsUrl.back() == '/') wsUrl.pop_back();

    std::string inviteUrl = fmt::format("{}/{}", wsUrl, m_code);
    clipboard::write(inviteUrl);
    Notification::create("Copied to clipboard!", NotificationIcon::Success)->show();
}

void ManageRoomPopup::onDownloadBackups(CCObject*) {
    std::string dlUrl = fmt::format("{}/api/backups?code={}&token={}", m_url, m_code, m_token);
    geode::utils::web::openLinkInBrowser(dlUrl);
}

class PasswordPopup : public geode::Popup {
protected:
    ManageRoomPopup* m_parentPopup = nullptr;
    geode::TextInput* m_input = nullptr;

    bool init(ManageRoomPopup* parent) {
        if (!geode::Popup::init(280.f, 150.f)) return false;
        m_parentPopup = parent;
        this->setTitle("Change Password");

        m_input = TextInput::create(220.f, "New Password", "chatFont.fnt");
        m_input->setPosition(this->m_mainLayer->getContentSize() / 2);
        m_input->setCommonFilter(CommonFilter::Any);
        this->m_mainLayer->addChild(m_input);

        auto btnSprite = ButtonSprite::create("Apply", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        auto btn = CCMenuItemSpriteExtra::create(btnSprite, this, menu_selector(PasswordPopup::onApply));
        btn->setPosition(this->m_mainLayer->getContentSize().width / 2, 40.f);
        
        auto menu = CCMenu::create();
        menu->setPosition(0, 0);
        menu->addChild(btn);
        this->m_mainLayer->addChild(menu);

        return true;
    }

    void onApply(CCObject*) {
        auto req = geode::utils::web::WebRequest();
        req.header("Authorization", "Bearer " + m_parentPopup->m_token);
        req.header("Content-Type", "application/json");

        auto body = matjson::makeObject({});
        body["action"] = "setPassword";
        body["code"] = m_parentPopup->m_code;
        body["password"] = std::string(m_input->getString());
        
        req.bodyJSON(body);
        m_parentPopup->m_manageTask.spawn(
            req.post(m_parentPopup->m_url + "/api/manage"),
            [parent = m_parentPopup](geode::utils::web::WebResponse res) {
                if (res.ok()) {
                    FLAlertLayer::create("Success", "Password changed.", "OK")->show();
                    parent->onClose(nullptr);
                } else {
                    FLAlertLayer::create("Error", fmt::format("Failed: {}", res.code()), "OK")->show();
                }
            }
        );

        this->onClose(nullptr);
    }

public:
    static PasswordPopup* create(ManageRoomPopup* parent) {
        auto ret = new PasswordPopup();
        if (ret->init(parent)) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }
};

void ManageRoomPopup::onChangePassword(CCObject*) {
    PasswordPopup::create(this)->show();
}

class MaxPlayersPopup : public geode::Popup {
protected:
    ManageRoomPopup* m_parentPopup = nullptr;
    geode::TextInput* m_input = nullptr;

    bool init(ManageRoomPopup* parent) {
        if (!geode::Popup::init(280.f, 150.f)) return false;
        m_parentPopup = parent;
        this->setTitle("Max Players");

        m_input = TextInput::create(220.f, "Max Players", "chatFont.fnt");
        m_input->setPosition(this->m_mainLayer->getContentSize() / 2);
        m_input->setFilter("0123456789");
        this->m_mainLayer->addChild(m_input);

        auto btnSprite = ButtonSprite::create("Apply", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        auto btn = CCMenuItemSpriteExtra::create(btnSprite, this, menu_selector(MaxPlayersPopup::onApply));
        btn->setPosition(this->m_mainLayer->getContentSize().width / 2, 40.f);
        
        auto menu = CCMenu::create();
        menu->setPosition(0, 0);
        menu->addChild(btn);
        this->m_mainLayer->addChild(menu);

        return true;
    }

    void onApply(CCObject*) {
        auto req = geode::utils::web::WebRequest();
        req.header("Authorization", "Bearer " + m_parentPopup->m_token);
        req.header("Content-Type", "application/json");

        auto body = matjson::makeObject({});
        body["action"] = "setMaxPlayers";
        body["code"] = m_parentPopup->m_code;
        
        int maxPlayers = 100;
        try {
            maxPlayers = std::stoi(std::string(m_input->getString()));
        } catch(...) {}
        body["maxPlayers"] = maxPlayers;
        
        req.bodyJSON(body);
        m_parentPopup->m_manageTask.spawn(
            req.post(m_parentPopup->m_url + "/api/manage"),
            [parent = m_parentPopup](geode::utils::web::WebResponse res) {
                if (res.ok()) {
                    FLAlertLayer::create("Success", "Max players changed.", "OK")->show();
                    parent->onClose(nullptr);
                } else {
                    FLAlertLayer::create("Error", fmt::format("Failed: {}", res.code()), "OK")->show();
                }
            }
        );

        this->onClose(nullptr);
    }

public:
    static MaxPlayersPopup* create(ManageRoomPopup* parent) {
        auto ret = new MaxPlayersPopup();
        if (ret->init(parent)) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }
};

void ManageRoomPopup::onChangeMaxPlayers(CCObject*) {
    MaxPlayersPopup::create(this)->show();
}

void ManageRoomPopup::onShutDown(CCObject*) {
    geode::createQuickPopup(
        "Confirm",
        "Are you sure you want to shut down this room?",
        "Cancel", "Shut Down",
        [this](auto, bool btn2) {
            if (btn2) {
                auto req = geode::utils::web::WebRequest();
                req.header("Authorization", "Bearer " + m_token);
                req.header("Content-Type", "application/json");

                auto body = matjson::makeObject({});
                body["action"] = "close";
                body["code"] = m_code;
                
                req.bodyJSON(body);
                m_manageTask.spawn(
                    req.post(m_url + "/api/manage"),
                    [this](geode::utils::web::WebResponse res) {
                        if (res.ok()) {
                            FLAlertLayer::create("Success", "Room shut down.", "OK")->show();
                            this->onClose(nullptr);
                        } else {
                            FLAlertLayer::create("Error", fmt::format("Failed: {}", res.code()), "OK")->show();
                        }
                    }
                );
            }
        }
    );
}

ManageRoomPopup* ManageRoomPopup::create(matjson::Value const& roomObj, std::string const& url, std::string const& token) {
    auto ret = new ManageRoomPopup();
    if (ret->init(roomObj, url, token)) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}

}
