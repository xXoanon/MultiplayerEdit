#include "UploadServerPopup.hpp"
#include <Geode/utils/web.hpp>

using namespace geode::prelude;

UploadServerPopup* UploadServerPopup::create(GJGameLevel* level) {
    auto ret = new UploadServerPopup();
    if (ret && ret->init(level)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool UploadServerPopup::init(GJGameLevel* level) {
    if (!BasePopup::init(300.f, 200.f)) return false;
    
    m_level = level;

    this->setTitle("Host on Dedicated Server");

    m_maxPlayersInput = TextInput::create(200.f, "Max Players (100)");
    m_maxPlayersInput->setFilter("0123456789");
    m_maxPlayersInput->setNumericMode(true);
    m_maxPlayersInput->setPosition({m_size.width / 2, m_size.height / 2 + 25});
    m_mainLayer->addChild(m_maxPlayersInput);

    m_passwordInput = TextInput::create(200.f, "Password (Optional)");
    m_passwordInput->setPosition({m_size.width / 2, m_size.height / 2 - 15});
    m_mainLayer->addChild(m_passwordInput);

    auto togglerMenu = CCMenu::create();
    togglerMenu->setPosition({m_size.width / 2 - 80.f, m_size.height / 2 - 50.f});
    m_mainLayer->addChild(togglerMenu);

    m_viewOnlyToggler = CCMenuItemToggler::createWithStandardSprites(this, nullptr, 0.6f);
    m_viewOnlyToggler->setPosition({0.f, 0.f});
    togglerMenu->addChild(m_viewOnlyToggler);

    auto viewOnlyLabel = CCLabelBMFont::create("Default View-Only", "chatFont.fnt");
    viewOnlyLabel->setAnchorPoint({0.f, 0.5f});
    viewOnlyLabel->setPosition({15.f, 0.f});
    viewOnlyLabel->setScale(0.6f);
    togglerMenu->addChild(viewOnlyLabel);

    auto hostBtnMenu = CCMenu::create();
    hostBtnMenu->setPosition({m_size.width / 2, 25.f});
    m_mainLayer->addChild(hostBtnMenu);

    auto hostBtn = CCMenuItemSpriteExtra::create(
        ButtonSprite::create("Host Level"),
        this,
        menu_selector(UploadServerPopup::onHost)
    );
    hostBtnMenu->addChild(hostBtn);

    return true;
}

void UploadServerPopup::onHost(CCObject*) {
    std::string maxPlayersStr = m_maxPlayersInput->getString();
    int maxPlayers = 100;
    if (!maxPlayersStr.empty()) {
        try {
            maxPlayers = std::stoi(maxPlayersStr);
        } catch(...) {}
    }
    std::string password = m_passwordInput->getString();

    std::string url = Mod::get()->getSettingValue<std::string>("cloud-hosting-url");
    if (url.empty()) {
        FLAlertLayer::create("Error", "Cloud hosting URL is not set in mod settings.", "OK")->show();
        return;
    }

    if (url.back() == '/') {
        url.pop_back();
    }

    matjson::Value body = matjson::makeObject({});
    body["levelName"] = std::string(m_level->m_levelName);
    body["levelString"] = std::string(m_level->m_levelString);
    body["songID"] = m_level->m_songID;
    body["audioTrack"] = m_level->m_audioTrack;
    body["maxPlayers"] = maxPlayers;
    body["password"] = password;
    body["defaultViewOnly"] = m_viewOnlyToggler->isToggled();

    auto reqUrl = url + "/api/host";
    
    std::string token = Mod::get()->getSettingValue<std::string>("cloud-auth-token");

    auto req = geode::utils::web::WebRequest();
    if (!token.empty()) {
        req.header("Authorization", "Bearer " + token);
    }
    req.bodyJSON(body);

    m_task.spawn(
        req.post(reqUrl),
        [this, url](geode::utils::web::WebResponse res) {
            if (res.ok()) {
                auto resJson = res.json().unwrapOr(matjson::Value());
                if (resJson.contains("success") && resJson["success"].asBool().unwrapOr(false)) {
                    std::string code = resJson.contains("code") ? resJson["code"].asString().unwrapOr("") : "";
                    
                    std::string wsUrl = url;
                    if (wsUrl.find("http://") == 0) {
                        wsUrl.replace(0, 7, "ws://");
                    } else if (wsUrl.find("https://") == 0) {
                        wsUrl.replace(0, 8, "wss://");
                    }
                    
                    wsUrl += "/" + code;

                    auto alert = FLAlertLayer::create("Level Hosted!", fmt::format("Share this URL to let people join: \n\n{}", wsUrl), "OK");
                    alert->show();
                    this->onClose(nullptr);
                } else {
                    auto errorMsg = resJson.contains("error") ? resJson["error"].asString().unwrapOr("") : "";
                    if (!errorMsg.empty()) {
                        FLAlertLayer::create("Error", fmt::format("Failed to host level: {}", errorMsg), "OK")->show();
                    } else {
                        FLAlertLayer::create("Error", "Failed to host level: Server returned success=false", "OK")->show();
                    }
                }
            } else {
                if (res.code() == 401) {
                    FLAlertLayer::create("Error", "Unauthorized. Please set a valid Cloud Auth Token in the mod settings.", "OK")->show();
                } else {
                    std::string errorMsg = "";
                    auto resJson = res.json().unwrapOr(matjson::Value());
                    if (resJson.contains("error") && resJson["error"].isString()) {
                        errorMsg = resJson["error"].asString().unwrapOr("");
                    }
                    if (!errorMsg.empty()) {
                        FLAlertLayer::create("Error", fmt::format("Failed to host level ({}): {}", res.code(), errorMsg), "OK")->show();
                    } else {
                        FLAlertLayer::create("Error", fmt::format("Failed to reach server: {}", res.code()), "OK")->show();
                    }
                }
            }
        }
    );
}
