#include "MultiplayerMenuPopup.hpp"
#include "CreateRoomPopup.hpp"
#include "../../P2PManager.hpp"
#include "../../BinaryProtocol.hpp"
#include "../core/BasePopup.hpp"
#include "../UpdateHelperNode.hpp"
#include <Geode/ui/TextInput.hpp>
#include <Geode/ui/TextArea.hpp>
#include <Geode/ui/BasedButtonSprite.hpp>
#include <Geode/utils/web.hpp>
#include <Geode/utils/file.hpp>
#include "DedicatedServersPopup.hpp"
#include "AppearancePopup.hpp"
#include "ChatPopup.hpp"
#include "../../utils/ColorPalette.hpp"
#include "../../RevertManager.hpp"
#include <Geode/binding/Slider.hpp>
#include <Geode/binding/CCMenuItemToggler.hpp>
#include <Geode/binding/SliderThumb.hpp>
#include <Geode/binding/TextArea.hpp>
#include <Geode/binding/GameLevelManager.hpp>
#include <Geode/binding/LevelBrowserLayer.hpp>
#include <Geode/binding/GJSearchObject.hpp>


using namespace geode::prelude;

namespace mpedit {
    static inline std::unordered_set<std::string> s_knownDeadRooms;


    class JoinPasswordPopup : public BasePopup {
    protected:
        geode::TextInput* m_input = nullptr;
        P2PManager::RoomInfo m_room;
        MultiplayerMenuPopup* m_parent = nullptr;

        bool init(P2PManager::RoomInfo const& room, MultiplayerMenuPopup* parent) {
            if (!BasePopup::init(260.f, 160.f)) return false;
            m_room = room;
            m_parent = parent;
            this->setTitle("Enter Password");

            m_input = geode::TextInput::create(200.f, "Password", "chatFont.fnt");
            m_input->setPosition(this->center());
            m_input->setCommonFilter(geode::CommonFilter::Any);
            m_mainLayer->addChild(m_input);

            auto joinBtnSprite = ButtonSprite::create("Join", "goldFont.fnt", "GJ_button_01.png", 0.6f);
            auto joinBtn = CCMenuItemSpriteExtra::create(joinBtnSprite, this, menu_selector(JoinPasswordPopup::onJoin));
            joinBtn->setPosition(this->fromBottom(25.f));
            m_uiMenu->addChild(joinBtn);

            return true;
        }

        void onJoin(cocos2d::CCObject*) {
            std::string pwd = m_input->getString();
            if (m_room.serverUrl.starts_with("ws://") || m_room.serverUrl.starts_with("wss://") || m_room.serverUrl.starts_with("http://") || m_room.serverUrl.starts_with("https://")) {
                std::string wsUrl = m_room.serverUrl;
                if (wsUrl.starts_with("http://")) wsUrl.replace(0, 7, "ws://");
                else if (wsUrl.starts_with("https://")) wsUrl.replace(0, 8, "wss://");
                SessionManager::get().joinDedicatedServer(wsUrl, m_room.roomCode, pwd);
            } else {
                SessionManager::get().joinSession(m_room.roomCode, Mod::get()->getSettingValue<std::string>("player-name"), pwd);
            }
            auto parent = m_parent;
            this->onClose(nullptr);
            if (parent) parent->onConnecting();
        }

    public:
        static JoinPasswordPopup* create(P2PManager::RoomInfo const& room, MultiplayerMenuPopup* parent) {
            auto ret = new JoinPasswordPopup();
            if (ret->init(room, parent)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class PatreonPopup;
    static void showPatreonNoticeInternal();

    static bool s_updatePopupOpen = false;
    static bool s_patreonPopupOpen = false;
    static bool s_pendingPatreon = false;
    static std::pair<std::string, std::string> s_pendingUpdate = {"", ""};
    static bool s_patreonShown = false;
    static bool s_updateAvailable = false;
    static std::string s_updateTagName = "";
    static std::string s_updateDownloadUrl = "";

    class UpdatePopup : public BasePopup {
    protected:
        std::string m_downloadUrl;
        std::string m_latestVer;
        bool m_isDownloaded = false;
        geode::async::TaskHolder<geode::utils::web::WebResponse> m_downloadTask;
        TextArea* m_textArea = nullptr;
        CCMenuItemSpriteExtra* m_updateBtn = nullptr;
        CCMenuItemSpriteExtra* m_laterBtn = nullptr;
        CCMenuItemSpriteExtra* m_discordBtn = nullptr;
        ButtonSprite* m_updateSpr = nullptr;

        bool init(std::string const& latestVer, std::string const& downloadUrl) {
            if (!BasePopup::init(360.f, 225.f)) return false;

            m_latestVer = latestVer;
            m_downloadUrl = downloadUrl;

            this->setTitle("Update Available!");

            std::string cleanCurrent;
            auto currentVer = geode::Mod::get()->getVersion();
            cleanCurrent = fmt::format("v{}.{}.{}", currentVer.getMajor(), currentVer.getMinor(), currentVer.getPatch());

            std::string cleanLatest = latestVer;
            if (auto latestVerRes = geode::VersionInfo::parse(latestVer)) {
                auto v = latestVerRes.unwrap();
                cleanLatest = fmt::format("v{}.{}.{}", v.getMajor(), v.getMinor(), v.getPatch());
            } else {
                if (auto dashPos = cleanLatest.find('-'); dashPos != std::string::npos) {
                    cleanLatest = cleanLatest.substr(0, dashPos);
                }
                if (!cleanLatest.starts_with('v')) {
                    cleanLatest = "v" + cleanLatest;
                }
            }

            auto msg = fmt::format(
                "A <cy>new version</c> of Multiplayer Edit is available!\n\n"
                "Your version: <cg>{}</c>\n"
                "Latest version: <cy>{}</c>\n\n"
                "Consider joining our <cl>Discord server</c> to stay\n"
                "updated and talk to the community!",
                cleanCurrent, cleanLatest
            );

            m_textArea = TextArea::create(
                msg,
                "chatFont.fnt",
                1.0f,
                360.f,
                ccp(0.5f, 0.5f),
                21.f,
                false
            );
            m_textArea->setScale(0.85f);
            m_mainLayer->addChildAtPosition(m_textArea, Anchor::Center, ccp(0.f, 5.f));

            auto btnMenu = CCMenu::create();
            btnMenu->setContentSize({260.f, 35.f});
            btnMenu->setPosition(this->fromBottom(25.f));
            btnMenu->setAnchorPoint({0.5f, 0.5f});
            btnMenu->setLayout(RowLayout::create()->setAxisAlignment(AxisAlignment::Center)->setGap(10.f));
            m_mainLayer->addChild(btnMenu);

            auto discordSpr = CCSprite::createWithSpriteFrameName("gj_discordIcon_001.png");
            m_discordBtn = CCMenuItemSpriteExtra::create(discordSpr, this, menu_selector(UpdatePopup::onDiscord));
            btnMenu->addChild(m_discordBtn);

            auto laterSpr = ButtonSprite::create("Later", "goldFont.fnt", "GJ_button_06.png", 0.8f);
            m_laterBtn = CCMenuItemSpriteExtra::create(laterSpr, this, menu_selector(UpdatePopup::onClose));
            btnMenu->addChild(m_laterBtn);

            m_updateSpr = ButtonSprite::create("Update", "goldFont.fnt", "GJ_button_01.png", 0.8f);
            m_updateBtn = CCMenuItemSpriteExtra::create(m_updateSpr, this, menu_selector(UpdatePopup::onUpdate));
            btnMenu->addChild(m_updateBtn);

            btnMenu->updateLayout();

            return true;
        }

        void onClose(CCObject* sender) override {
            s_updatePopupOpen = false;
            BasePopup::onClose(sender);

            if (s_updateAvailable && MultiplayerMenuPopup::s_instance) {
                MultiplayerMenuPopup::s_instance->showHeaderUpdateButton();
            }

            if (s_pendingPatreon) {
                s_pendingPatreon = false;
                showPatreonNoticeInternal();
            }
        }

        void onDiscord(CCObject*) {
            geode::utils::web::openLinkInBrowser("https://discord.gg/mdsuxYu2YP");
        }

        void onUpdate(CCObject*) {
            if (m_isDownloaded) {
                geode::utils::game::restart(true);
                return;
            }

            if (m_downloadUrl.empty()) return;

            m_updateBtn->setEnabled(false);
            m_laterBtn->setEnabled(false);
            m_discordBtn->setEnabled(false);

            if (m_textArea) {
                m_textArea->setString("Downloading update, please wait...\n\nDo not close the game.");
            }

            auto req = geode::utils::web::WebRequest();
            req.header("User-Agent", "MultiplayerEdit-GeodeMod");
            m_downloadTask.spawn(
                req.get(m_downloadUrl),
                [this](geode::utils::web::WebResponse res) {
                    if (!res.ok()) {
                        if (m_textArea) {
                            m_textArea->setString("<cr>Failed to download update.</c>\n\nPlease check your internet connection\nor download manually from Discord.");
                        }
                        if (m_updateBtn) m_updateBtn->setEnabled(true);
                        if (m_laterBtn) m_laterBtn->setEnabled(true);
                        if (m_discordBtn) m_discordBtn->setEnabled(true);
                        return;
                    }

                    auto data = std::move(res).data();
                    auto targetPath = geode::Mod::get()->getPackagePath();
                    if (targetPath.empty()) {
                        targetPath = geode::dirs::getModsDir() / "d050.multiplayeredit.geode";
                    }

                    auto ok = geode::utils::file::writeBinary(targetPath, data);
                    if (!ok) {
                        if (m_textArea) {
                            m_textArea->setString("<cr>Failed to save update file.</c>\n\nPlease check file permissions\nor download manually.");
                        }
                        if (m_updateBtn) m_updateBtn->setEnabled(true);
                        if (m_laterBtn) m_laterBtn->setEnabled(true);
                        if (m_discordBtn) m_discordBtn->setEnabled(true);
                        return;
                    }

                    m_isDownloaded = true;
                    s_updateAvailable = false;
                    if (MultiplayerMenuPopup::s_instance) {
                        MultiplayerMenuPopup::s_instance->hideHeaderUpdateButton();
                    }
                    this->setTitle("Update Complete!");

                    if (m_textArea) {
                        m_textArea->setString(fmt::format(
                            "Multiplayer Edit has been updated to <cg>{}</c>!\n\n"
                            "Restart Geometry Dash now to apply the update?",
                            m_latestVer
                        ));
                    }

                    if (m_discordBtn) m_discordBtn->setVisible(false);
                    if (m_laterBtn) {
                        m_laterBtn->setEnabled(true);
                        m_laterBtn->setVisible(true);
                    }
                    if (m_updateBtn) {
                        m_updateBtn->setEnabled(true);
                        if (m_updateSpr) {
                            m_updateSpr->setString("Restart");
                        }
                    }

                    if (auto* menu = typeinfo_cast<CCMenu*>(m_updateBtn->getParent())) {
                        menu->updateLayout();
                    }
                }
            );
        }

    public:
        static UpdatePopup* create(std::string const& latestVer, std::string const& downloadUrl) {
            auto ret = new UpdatePopup();
            if (ret->init(latestVer, downloadUrl)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class PatreonPopup : public BasePopup {
    protected:
        bool m_canClose = false;
        float m_timer = 0.f;
        int m_lastSeconds = 3;
        ButtonSprite* m_laterSpr = nullptr;
        CCMenuItemSpriteExtra* m_laterBtn = nullptr;
        TextArea* m_textArea = nullptr;

        bool init() override {
            if (!BasePopup::init(360.f, 215.f)) return false;

            this->setTitle("Support the Mod");

            if (m_closeBtn) {
                m_closeBtn->setVisible(false);
            }

            std::string msg = 
                "Multiplayer Edit relies on <cy>community funding</c>\n"
                "for active development.\n\n"
                "Without enough support on <cr>Patreon</c>, development\n"
                "and servers will unfortunately have to stop.\n\n"
                "Please consider <cg>supporting the project</c> to keep it alive!";

            m_textArea = TextArea::create(
                msg,
                "chatFont.fnt",
                1.0f,
                360.f,
                ccp(0.5f, 0.5f),
                21.f,
                false
            );
            m_textArea->setScale(0.85f);
            m_mainLayer->addChildAtPosition(m_textArea, Anchor::Center, ccp(0.f, 8.f));

            auto btnMenu = CCMenu::create();
            btnMenu->setContentSize({260.f, 35.f});
            btnMenu->setPosition(this->fromBottom(25.f));
            btnMenu->setAnchorPoint({0.5f, 0.5f});
            btnMenu->setLayout(RowLayout::create()->setAxisAlignment(AxisAlignment::Center)->setGap(15.f));
            m_mainLayer->addChild(btnMenu);

            m_laterSpr = ButtonSprite::create("Wait (3)", "goldFont.fnt", "GJ_button_06.png", 0.8f);
            m_laterBtn = CCMenuItemSpriteExtra::create(m_laterSpr, this, menu_selector(PatreonPopup::onClose));
            m_laterBtn->setEnabled(false);
            btnMenu->addChild(m_laterBtn);

            auto patreonSpr = ButtonSprite::create("Patreon", "goldFont.fnt", "GJ_button_01.png", 0.8f);
            auto patreonBtn = CCMenuItemSpriteExtra::create(patreonSpr, this, menu_selector(PatreonPopup::onPatreon));
            btnMenu->addChild(patreonBtn);

            btnMenu->updateLayout();

            this->scheduleUpdate();

            return true;
        }

        void update(float dt) override {
            m_timer += dt;
            int remaining = 3 - static_cast<int>(m_timer);
            if (remaining <= 0) {
                m_canClose = true;
                if (m_laterBtn) m_laterBtn->setEnabled(true);
                if (m_laterSpr) m_laterSpr->setString("Later");
                if (m_closeBtn) m_closeBtn->setVisible(true);
                this->unscheduleUpdate();
            } else if (remaining != m_lastSeconds) {
                m_lastSeconds = remaining;
                if (m_laterSpr) {
                    m_laterSpr->setString(fmt::format("Wait ({})", remaining).c_str());
                }
            }
        }

        void onClose(CCObject* sender) override {
            if (!m_canClose) return;
            s_patreonPopupOpen = false;
            BasePopup::onClose(sender);

            if (!s_pendingUpdate.first.empty()) {
                auto tag = s_pendingUpdate.first;
                auto url = s_pendingUpdate.second;
                s_pendingUpdate = {"", ""};
                geode::queueInMainThread([tag, url]() {
                    if (auto* popup = UpdatePopup::create(tag, url)) {
                        s_updatePopupOpen = true;
                        popup->show();
                    }
                });
            }
        }

        void keyBackClicked() override {
            if (!m_canClose) return;
            BasePopup::keyBackClicked();
        }

        void keyDown(cocos2d::enumKeyCodes key, double p1) override {
            if (key == cocos2d::KEY_Escape && !m_canClose) return;
            BasePopup::keyDown(key, p1);
        }

        void onPatreon(CCObject*) {
            geode::utils::web::openLinkInBrowser("https://www.patreon.com/cw/d050/membership");
            m_canClose = true;
            this->onClose(nullptr);
        }

    public:
        static PatreonPopup* create() {
            auto ret = new PatreonPopup();
            if (ret->init()) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    static void showPatreonNoticeInternal() {
        if (s_patreonShown) return;

        if (s_updatePopupOpen) {
            s_pendingPatreon = true;
            return;
        }

        s_patreonShown = true;
        s_patreonPopupOpen = true;
        geode::queueInMainThread([]() {
            if (auto* popup = PatreonPopup::create()) {
                popup->show();
            }
        });
    }

    static geode::async::TaskHolder<geode::utils::web::WebResponse> s_globalUpdateTask;
    static bool s_hasCheckedForUpdates = false;

    void MultiplayerMenuPopup::checkUpdatesAndPatreon() {
        if (!s_hasCheckedForUpdates && geode::Mod::get()->getSettingValue<bool>("check-updates")) {
            s_hasCheckedForUpdates = true;

            std::thread([]() {
                std::this_thread::sleep_for(std::chrono::milliseconds(1500));
                geode::queueInMainThread([]() {
                    if (!s_updatePopupOpen && !s_patreonShown) {
                        showPatreonNoticeInternal();
                    }
                });
            }).detach();

            auto req = geode::utils::web::WebRequest();
            req.header("User-Agent", "MultiplayerEdit-GeodeMod");
            s_globalUpdateTask.spawn(
                req.get("https://api.github.com/repos/xXoanon/MultiplayerEdit/releases?per_page=1"),
                [](geode::utils::web::WebResponse res) {
                    bool needsUpdate = false;
                    std::string tagName;
                    std::string downloadUrl;

                    if (res.ok()) {
                        auto json = res.json().unwrapOr(matjson::Value());
                        if (json.isArray() && !json.asArray().unwrap().empty()) {
                            auto release = json[0];
                            tagName = release.get<std::string>("tag_name").unwrapOr("");
                            if (!tagName.empty() && release.contains("assets") && release["assets"].isArray()) {
                                for (auto const& asset : release["assets"].asArray().unwrap()) {
                                    auto name = asset.get<std::string>("name").unwrapOr("");
                                    if (name.ends_with(".geode")) {
                                        downloadUrl = asset.get<std::string>("browser_download_url").unwrapOr("");
                                        break;
                                    }
                                }
                            }

                            if (!downloadUrl.empty()) {
                                auto currentVer = geode::Mod::get()->getVersion();

                                auto stripSuffix = [](std::string const& str) -> std::string {
                                    std::string s = str;
                                    if (!s.empty() && (s[0] == 'v' || s[0] == 'V')) {
                                        s = s.substr(1);
                                    }
                                    auto dashPos = s.find('-');
                                    if (dashPos != std::string::npos) {
                                        s = s.substr(0, dashPos);
                                    }
                                    auto plusPos = s.find('+');
                                    if (plusPos != std::string::npos) {
                                        s = s.substr(0, plusPos);
                                    }
                                    return s;
                                };

                                auto strippedLatest = stripSuffix(tagName);
                                auto strippedCurrent = stripSuffix(currentVer.toNonVString());

                                if (auto latestVerRes = geode::VersionInfo::parse(strippedLatest)) {
                                    auto latestVer = latestVerRes.unwrap();
                                    if (auto curVerRes = geode::VersionInfo::parse(strippedCurrent)) {
                                        auto cur = curVerRes.unwrap();
                                        if (latestVer.getMajor() != cur.getMajor() ||
                                            latestVer.getMinor() != cur.getMinor() ||
                                            latestVer.getPatch() != cur.getPatch()) {
                                            needsUpdate = true;
                                        }
                                    } else {
                                        if (latestVer.getMajor() != currentVer.getMajor() ||
                                            latestVer.getMinor() != currentVer.getMinor() ||
                                            latestVer.getPatch() != currentVer.getPatch()) {
                                            needsUpdate = true;
                                        }
                                    }
                                } else {
                                    if (strippedLatest != strippedCurrent) {
                                        needsUpdate = true;
                                    }
                                }
                            }
                        }
                    }

                    if (needsUpdate) {
                        s_updateAvailable = true;
                        s_updateTagName = tagName;
                        s_updateDownloadUrl = downloadUrl;
                        s_pendingPatreon = true;
                        if (s_patreonPopupOpen) {
                            s_pendingUpdate = { tagName, downloadUrl };
                        } else {
                            geode::queueInMainThread([tagName, downloadUrl]() {
                                if (auto* popup = UpdatePopup::create(tagName, downloadUrl)) {
                                    s_updatePopupOpen = true;
                                    popup->show();
                                }
                            });
                        }
                    } else {
                        showPatreonNoticeInternal();
                    }
                }
            );
        } else {
            showPatreonNoticeInternal();
        }
    }


    class RevertPlayerPopup : public BasePopup {
    protected:
        PlayerInfo m_player;
        bool m_isDisconnected = false;
        Slider* m_slider = nullptr;
        CCLabelBMFont* m_timeLabel = nullptr;
        CCLabelBMFont* m_previewLabel = nullptr;
        CCMenuItemToggler* m_kickToggle = nullptr;
        CCMenuItemToggler* m_banToggle = nullptr;
        std::chrono::steady_clock::time_point m_firstTime;
        std::chrono::steady_clock::time_point m_lastTime;
        float m_durationSeconds = 0.f;

        bool init(PlayerInfo const& p, bool isDisconnected = false) {
            if (!BasePopup::init(280.f, 250.f)) return false;
            m_player = p;
            m_isDisconnected = isDisconnected;
            this->setTitle("Revert Player");

            auto [fTime, lTime] = RevertManager::get().getPlayerTimeRange(m_player.name);
            m_firstTime = fTime;
            m_lastTime = lTime;
            m_durationSeconds = std::chrono::duration_cast<std::chrono::milliseconds>(m_lastTime - m_firstTime).count() / 1000.f;

            auto layout = CCNode::create();
            layout->setContentSize({260.f, 195.f});
            layout->setPosition(this->center() + CCPoint{0.f, -12.f});
            layout->setAnchorPoint({0.5f, 0.5f});
            m_mainLayer->addChild(layout);

            auto nameLabel = CCLabelBMFont::create(fmt::format("Player: {}", m_player.name).c_str(), "goldFont.fnt");
            nameLabel->setScale(0.5f);
            nameLabel->setPosition({130.f, 182.f});
            layout->addChild(nameLabel);

            m_slider = Slider::create(this, menu_selector(RevertPlayerPopup::onSlider), 0.8f);
            m_slider->setPosition({130.f, 155.f});
            layout->addChild(m_slider);

            m_timeLabel = CCLabelBMFont::create("Revert: All edits (All time)", "chatFont.fnt");
            m_timeLabel->setScale(0.42f);
            m_timeLabel->setPosition({130.f, 134.f});
            layout->addChild(m_timeLabel);

            auto presetMenu = CCMenu::create();
            presetMenu->setContentSize({240.f, 20.f});
            presetMenu->setPosition({130.f, 114.f});
            presetMenu->setLayout(RowLayout::create()->setGap(5.f)->setAxisAlignment(AxisAlignment::Center));
            layout->addChild(presetMenu);

            struct PresetInfo { const char* label; int seconds; };
            PresetInfo presets[] = {
                {"All", -1},
                {"30m", 1800},
                {"15m", 900},
                {"5m", 300},
                {"1m", 60}
            };

            for (auto const& pr : presets) {
                auto spr = ButtonSprite::create(pr.label, "goldFont.fnt", "GJ_button_04.png", 0.5f);
                spr->setScale(0.45f);
                auto btn = CCMenuItemSpriteExtra::create(spr, this, menu_selector(RevertPlayerPopup::onPreset));
                btn->setUserData(reinterpret_cast<void*>(static_cast<intptr_t>(pr.seconds)));
                presetMenu->addChild(btn);
            }
            presetMenu->updateLayout();

            auto badgeBg = CCScale9Sprite::create("square02_small.png");
            badgeBg->setContentSize({240.f, 30.f});
            badgeBg->setInsetTop(6.f);
            badgeBg->setInsetBottom(6.f);
            badgeBg->setInsetLeft(6.f);
            badgeBg->setInsetRight(6.f);
            badgeBg->setPosition({130.f, 88.f});
            badgeBg->setOpacity(90);
            badgeBg->setColor({0, 0, 0});
            layout->addChild(badgeBg);

            m_previewLabel = CCLabelBMFont::create("Loading...", "chatFont.fnt");
            m_previewLabel->setScale(0.40f);
            m_previewLabel->setPosition({130.f, 88.f});
            layout->addChild(m_previewLabel);

            auto optionsNode = CCNode::create();
            optionsNode->setContentSize({240.f, 25.f});
            optionsNode->setPosition({130.f, 56.f});
            optionsNode->setAnchorPoint({0.5f, 0.5f});
            layout->addChild(optionsNode);

            if (!m_isDisconnected) {
                auto kickMenu = CCMenu::create();
                kickMenu->setPosition({55.f, 12.f});
                m_kickToggle = CCMenuItemToggler::createWithStandardSprites(this, nullptr, 0.55f);
                m_kickToggle->setPosition({0.f, 0.f});
                kickMenu->addChild(m_kickToggle);

                auto kickLabel = CCLabelBMFont::create("Kick", "chatFont.fnt");
                kickLabel->setScale(0.45f);
                kickLabel->setAnchorPoint({0.f, 0.5f});
                kickLabel->setPosition({15.f, 0.f});
                kickMenu->addChild(kickLabel);
                optionsNode->addChild(kickMenu);

                auto banMenu = CCMenu::create();
                banMenu->setPosition({145.f, 12.f});
                m_banToggle = CCMenuItemToggler::createWithStandardSprites(this, nullptr, 0.55f);
                m_banToggle->setPosition({0.f, 0.f});
                banMenu->addChild(m_banToggle);

                auto banLabel = CCLabelBMFont::create("Ban", "chatFont.fnt");
                banLabel->setScale(0.45f);
                banLabel->setAnchorPoint({0.f, 0.5f});
                banLabel->setPosition({15.f, 0.f});
                banMenu->addChild(banLabel);
                optionsNode->addChild(banMenu);
            } else {
                auto banMenu = CCMenu::create();
                banMenu->setPosition({105.f, 12.f});
                m_banToggle = CCMenuItemToggler::createWithStandardSprites(this, nullptr, 0.55f);
                m_banToggle->setPosition({0.f, 0.f});
                banMenu->addChild(m_banToggle);

                auto banLabel = CCLabelBMFont::create("Ban", "chatFont.fnt");
                banLabel->setScale(0.45f);
                banLabel->setAnchorPoint({0.f, 0.5f});
                banLabel->setPosition({15.f, 0.f});
                banMenu->addChild(banLabel);
                optionsNode->addChild(banMenu);
            }

            auto confirmMenu = CCMenu::create();
            confirmMenu->setPosition({130.f, 18.f});
            layout->addChild(confirmMenu);

            auto revertSpr = ButtonSprite::create("Confirm Revert", "goldFont.fnt", "GJ_button_06.png", 0.65f);
            revertSpr->setScale(0.6f);
            auto revertBtn = CCMenuItemSpriteExtra::create(revertSpr, this, menu_selector(RevertPlayerPopup::onConfirm));
            confirmMenu->addChild(revertBtn);

            m_slider->setValue(0.0f);
            updatePreview();

            this->syncTouchPriority();
            return true;
        }

        std::optional<std::chrono::seconds> getTimeWindow() const {
            if (!m_slider) return std::nullopt;
            float val = m_slider->getValue();
            if (val <= 0.001f || m_durationSeconds <= 0.001f) {
                return std::nullopt;
            }
            float remaining = (1.0f - val) * m_durationSeconds;
            int secs = std::max(1, static_cast<int>(remaining));
            return std::chrono::seconds(secs);
        }

        void onSlider(CCObject*) {
            updatePreview();
        }

        void onPreset(CCObject* sender) {
            auto btn = static_cast<CCNode*>(sender);
            int secs = static_cast<int>(reinterpret_cast<intptr_t>(btn->getUserData()));
            if (secs == -1 || m_durationSeconds <= 0.001f) {
                m_slider->setValue(0.0f);
            } else {
                float fraction = static_cast<float>(secs) / m_durationSeconds;
                float val = std::clamp(1.0f - fraction, 0.0f, 1.0f);
                m_slider->setValue(val);
            }
            updatePreview();
        }

        void updatePreview() {
            if (!m_slider) return;
            auto window = getTimeWindow();
            if (!window.has_value()) {
                m_timeLabel->setString("Revert: All edits (All time)");
            } else {
                auto secs = window.value().count();
                if (secs < 60) {
                    m_timeLabel->setString(fmt::format("Revert: Edits in last {}s", secs).c_str());
                } else if (secs < 3600) {
                    m_timeLabel->setString(fmt::format("Revert: Edits in last {}m", secs / 60).c_str());
                } else {
                    m_timeLabel->setString(fmt::format("Revert: Edits in last {}h {}m", secs / 3600, (secs % 3600) / 60).c_str());
                }
            }

            auto preview = RevertManager::get().getRevertPreview(m_player.name, window);
            m_previewLabel->setString(
                fmt::format("Placed: {} | Deleted: {} | Modified: {}",
                    preview.placedCount, preview.deletedCount, preview.modifiedCount
                ).c_str()
            );
        }

        void onConfirm(CCObject*) {
            auto window = getTimeWindow();
            RevertManager::get().revertPlayer(m_player.name, window);

            bool ban = m_banToggle && m_banToggle->isToggled();
            bool kick = m_kickToggle && m_kickToggle->isToggled();

            if (ban) {
                std::vector<uint8_t> data;
                data.push_back(static_cast<uint8_t>(proto::Opcode::BanPlayer));
                proto::Writer writer;
                writer.writeU32(m_player.id);
                auto p = writer.data();
                data.insert(data.end(), p.begin(), p.end());
                P2PManager::get().send(data, ChannelType::Reliable);
                P2PManager::get().banPlayer(m_player.name);

                int id = m_player.id;
                if (!m_isDisconnected && id != -1) {
                    std::thread([id]() {
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        geode::queueInMainThread([id]() {
                            P2PManager::get().disconnectPeer(id);
                        });
                    }).detach();
                }
            } else if (kick && !m_isDisconnected) {
                std::vector<uint8_t> data;
                data.push_back(static_cast<uint8_t>(proto::Opcode::KickPlayer));
                proto::Writer writer;
                writer.writeU32(m_player.id);
                auto p = writer.data();
                data.insert(data.end(), p.begin(), p.end());
                P2PManager::get().send(data, ChannelType::Reliable);

                int id = m_player.id;
                if (id != -1) {
                    std::thread([id]() {
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        geode::queueInMainThread([id]() {
                            P2PManager::get().disconnectPeer(id);
                        });
                    }).detach();
                }
            }

            geode::Notification::create(
                fmt::format("Reverted changes by {}", m_player.name),
                geode::NotificationIcon::Success
            )->show();

            this->onClose(nullptr);
        }

    public:
        static RevertPlayerPopup* create(PlayerInfo const& p, bool isDisconnected = false) {
            auto ret = new RevertPlayerPopup();
            if (ret->init(p, isDisconnected)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class RollbackPopup : public BasePopup {
    protected:
        size_t m_selectedBranchIndex = 0;
        CCMenuItemSpriteExtra* m_prevBtn = nullptr;
        CCMenuItemSpriteExtra* m_nextBtn = nullptr;
        CCMenuItemSpriteExtra* m_deleteBtn = nullptr;
        CCLabelBMFont* m_branchTitleLabel = nullptr;
        CCLabelBMFont* m_branchSubLabel = nullptr;
        CCScale9Sprite* m_diagramBg = nullptr;
        CCDrawNode* m_branchDrawNode = nullptr;
        CCNode* m_pillLabelsNode = nullptr;
        CCMenu* m_pillMenu = nullptr;
        Slider* m_slider = nullptr;
        CCLabelBMFont* m_timeLabel = nullptr;
        CCLabelBMFont* m_previewLabel = nullptr;
        ButtonSprite* m_confirmSpr = nullptr;
        CCMenuItemSpriteExtra* m_confirmBtn = nullptr;
        std::chrono::steady_clock::time_point m_startTime;
        std::chrono::steady_clock::time_point m_endTime;
        float m_durationSeconds = 0.f;

        bool init() {
            if (!BasePopup::init(300.f, 300.f)) return false;
            this->setTitle("Level Timeline");

            m_selectedBranchIndex = RevertManager::get().getActiveBranchIndex();

            auto layout = CCNode::create();
            layout->setContentSize({280.f, 250.f});
            layout->setPosition(this->center() + CCPoint{0.f, -10.f});
            layout->setAnchorPoint({0.5f, 0.5f});
            m_mainLayer->addChild(layout);

            auto branchArrowMenu = CCMenu::create();
            branchArrowMenu->setContentSize({280.f, 250.f});
            branchArrowMenu->setPosition({0.f, 0.f});
            branchArrowMenu->setAnchorPoint({0.f, 0.f});
            layout->addChild(branchArrowMenu);

            auto leftSpr = CCSprite::createWithSpriteFrameName("edit_leftBtn_001.png");
            leftSpr->setScale(0.75f);
            m_prevBtn = CCMenuItemSpriteExtra::create(leftSpr, this, menu_selector(RollbackPopup::onPrevBranch));
            m_prevBtn->setPosition({20.f, 226.f});
            branchArrowMenu->addChild(m_prevBtn);

            auto rightSpr = CCSprite::createWithSpriteFrameName("edit_rightBtn_001.png");
            rightSpr->setScale(0.75f);
            m_nextBtn = CCMenuItemSpriteExtra::create(rightSpr, this, menu_selector(RollbackPopup::onNextBranch));
            m_nextBtn->setPosition({260.f, 226.f});
            branchArrowMenu->addChild(m_nextBtn);

            auto delSpr = CCSprite::createWithSpriteFrameName("GJ_trashBtn_001.png");
            delSpr->setScale(0.65f);
            m_deleteBtn = CCMenuItemSpriteExtra::create(delSpr, this, menu_selector(RollbackPopup::onDeleteBranch));
            m_deleteBtn->setPosition({234.f, 226.f});
            branchArrowMenu->addChild(m_deleteBtn);

            m_branchTitleLabel = CCLabelBMFont::create("Branch 1", "goldFont.fnt");
            m_branchTitleLabel->setScale(0.38f);
            m_branchTitleLabel->setPosition({140.f, 226.f});
            layout->addChild(m_branchTitleLabel);

            m_branchSubLabel = CCLabelBMFont::create("Main Timeline", "chatFont.fnt");
            m_branchSubLabel->setScale(0.32f);
            m_branchSubLabel->setColor({180, 200, 220});
            m_branchSubLabel->setPosition({140.f, 210.f});
            layout->addChild(m_branchSubLabel);

            m_diagramBg = CCScale9Sprite::create("square02_small.png");
            m_diagramBg->setContentSize({260.f, 64.f});
            m_diagramBg->setInsetTop(6.f);
            m_diagramBg->setInsetBottom(6.f);
            m_diagramBg->setInsetLeft(6.f);
            m_diagramBg->setInsetRight(6.f);
            m_diagramBg->setPosition({140.f, 168.f});
            m_diagramBg->setOpacity(110);
            m_diagramBg->setColor({0, 0, 0});
            layout->addChild(m_diagramBg);

            m_branchDrawNode = CCDrawNode::create();
            m_diagramBg->addChild(m_branchDrawNode, 0);

            m_pillLabelsNode = CCNode::create();
            m_diagramBg->addChild(m_pillLabelsNode, 1);

            m_pillMenu = CCMenu::create();
            m_pillMenu->setContentSize({260.f, 64.f});
            m_pillMenu->setPosition({0.f, 0.f});
            m_pillMenu->setAnchorPoint({0.f, 0.f});
            m_diagramBg->addChild(m_pillMenu, 2);

            m_slider = Slider::create(this, menu_selector(RollbackPopup::onSlider), 0.85f);
            m_slider->setPosition({140.f, 122.f});
            layout->addChild(m_slider);

            m_timeLabel = CCLabelBMFont::create("Timeline: Now (Latest)", "goldFont.fnt");
            m_timeLabel->setScale(0.40f);
            m_timeLabel->setPosition({140.f, 102.f});
            layout->addChild(m_timeLabel);

            auto badgeBg = CCScale9Sprite::create("square02_small.png");
            badgeBg->setContentSize({260.f, 30.f});
            badgeBg->setInsetTop(6.f);
            badgeBg->setInsetBottom(6.f);
            badgeBg->setInsetLeft(6.f);
            badgeBg->setInsetRight(6.f);
            badgeBg->setPosition({140.f, 76.f});
            badgeBg->setOpacity(90);
            badgeBg->setColor({0, 0, 0});
            layout->addChild(badgeBg);

            m_previewLabel = CCLabelBMFont::create("Loading...", "chatFont.fnt");
            m_previewLabel->setScale(0.36f);
            m_previewLabel->setPosition({140.f, 76.f});
            layout->addChild(m_previewLabel);

            auto presetMenu = CCMenu::create();
            presetMenu->setContentSize({260.f, 20.f});
            presetMenu->setPosition({140.f, 46.f});
            presetMenu->setLayout(RowLayout::create()->setGap(5.f)->setAxisAlignment(AxisAlignment::Center));
            layout->addChild(presetMenu);

            struct PresetInfo { const char* label; int seconds; };
            PresetInfo presets[] = {
                {"1m", 60},
                {"5m", 300},
                {"15m", 900},
                {"30m", 1800},
                {"All", -1},
                {"Now", 0}
            };

            for (auto const& p : presets) {
                auto spr = ButtonSprite::create(p.label, "goldFont.fnt", "GJ_button_04.png", 0.55f);
                spr->setScale(0.5f);
                auto btn = CCMenuItemSpriteExtra::create(spr, this, menu_selector(RollbackPopup::onPreset));
                btn->setUserData(reinterpret_cast<void*>(static_cast<intptr_t>(p.seconds)));
                presetMenu->addChild(btn);
            }
            presetMenu->updateLayout();

            auto confirmMenu = CCMenu::create();
            confirmMenu->setPosition({140.f, 18.f});
            layout->addChild(confirmMenu);

            m_confirmSpr = ButtonSprite::create("Apply Rollback", "goldFont.fnt", "GJ_button_01.png", 0.7f);
            m_confirmSpr->setScale(0.65f);
            m_confirmBtn = CCMenuItemSpriteExtra::create(m_confirmSpr, this, menu_selector(RollbackPopup::onConfirm));
            confirmMenu->addChild(m_confirmBtn);

            updateBranchView();

            this->syncTouchPriority();
            return true;
        }

        std::chrono::steady_clock::time_point getTargetTime() const {
            if (m_durationSeconds <= 0.001f) return m_endTime;
            float val = m_slider ? m_slider->getValue() : 1.0f;
            if (val <= 0.001f) {
                return m_startTime - std::chrono::milliseconds(500);
            }
            if (val >= 0.999f) {
                return m_endTime + std::chrono::milliseconds(500);
            }
            int64_t ms = static_cast<int64_t>(val * m_durationSeconds * 1000.f);
            return m_startTime + std::chrono::milliseconds(ms);
        }

        void onDeleteBranch(CCObject*) {
            auto const& revert = RevertManager::get();
            if (m_selectedBranchIndex >= revert.getBranchCount()) return;
            if (m_selectedBranchIndex == revert.getActiveBranchIndex()) return;
            if (revert.getBranchCount() <= 1) return;

            auto info = revert.getBranchInfo(m_selectedBranchIndex);
            size_t idx = m_selectedBranchIndex;

            geode::createQuickPopup(
                "Delete Branch",
                fmt::format("Are you sure you want to delete <cr>{}</c>? This cannot be undone.", info.name),
                "Cancel",
                "Delete",
                [this, idx](auto*, bool btn2) {
                    if (btn2) {
                        if (RevertManager::get().deleteBranch(idx)) {
                            size_t count = RevertManager::get().getBranchCount();
                            if (m_selectedBranchIndex >= count) {
                                m_selectedBranchIndex = count - 1;
                            }
                            updateBranchView();
                            drawDiagram();
                            geode::Notification::create(
                                "Branch deleted",
                                geode::NotificationIcon::Success
                            )->show();
                        }
                    }
                }
            );
        }

        void onSelectBranchPill(CCObject* sender) {
            auto node = static_cast<CCNode*>(sender);
            size_t idx = static_cast<size_t>(reinterpret_cast<intptr_t>(node->getUserData()));
            if (idx < RevertManager::get().getBranchCount() && idx != m_selectedBranchIndex) {
                m_selectedBranchIndex = idx;
                updateBranchView();
            }
        }

        void drawDiagram() {
            if (!m_branchDrawNode) return;
            m_branchDrawNode->clear();
            if (m_pillLabelsNode) m_pillLabelsNode->removeAllChildren();
            if (m_pillMenu) m_pillMenu->removeAllChildren();

            auto const& revert = RevertManager::get();
            size_t totalBranches = revert.getBranchCount();
            if (totalBranches == 0) return;

            auto [rootStart, rootEnd] = revert.getBranchTimeRange(0);
            auto globalMin = rootStart;
            auto globalMax = rootEnd;
            for (size_t b = 0; b < totalBranches; ++b) {
                auto [s, e] = revert.getBranchTimeRange(b);
                if (e > globalMax) globalMax = e;
                if (s < globalMin) globalMin = s;
            }
            float totalDurationSecs = std::chrono::duration_cast<std::chrono::milliseconds>(globalMax - globalMin).count() / 1000.f;
            if (totalDurationSecs <= 0.001f) totalDurationSecs = 1.0f;

            float startX = 46.f;
            float endX = 244.f;

            auto timeToX = [&](std::chrono::steady_clock::time_point tp) {
                float elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(tp - globalMin).count() / 1000.f;
                float ratio = std::clamp(elapsed / totalDurationSecs, 0.0f, 1.0f);
                return startX + ratio * (endX - startX);
            };

            auto getLaneY = [&](size_t idx) {
                if (totalBranches == 1) return 32.f;
                float topY = 52.f;
                float botY = 12.f;
                float spacing = (topY - botY) / static_cast<float>(totalBranches - 1);
                return topY - static_cast<float>(idx) * spacing;
            };

            cocos2d::ccColor4F selStroke = {0.35f, 0.95f, 0.35f, 1.0f};
            cocos2d::ccColor4F selFill = {0.05f, 0.14f, 0.07f, 0.92f};
            cocos2d::ccColor4F unselStroke = {0.30f, 0.42f, 0.55f, 0.70f};
            cocos2d::ccColor4F unselFill = {0.06f, 0.07f, 0.10f, 0.85f};
            cocos2d::ccColor4F forkDotColor = {1.0f, 0.82f, 0.20f, 1.0f};
            cocos2d::ccColor4F white = {1.0f, 1.0f, 1.0f, 1.0f};

            for (size_t i = 0; i < totalBranches; ++i) {
                auto info = revert.getBranchInfo(i);
                auto [sTime, eTime] = revert.getBranchTimeRange(i);
                float y = getLaneY(i);
                float headX = std::max(startX + 8.f, timeToX(eTime));
                bool isSelected = (i == m_selectedBranchIndex);

                float pillRadius = 6.0f;
                float pillWidth = 26.f;
                float halfSpan = (pillWidth - 2.f * pillRadius) * 0.5f;
                float pillCenterX = 18.f;

                auto stroke = isSelected ? selStroke : unselStroke;
                auto fill = isSelected ? selFill : unselFill;

                m_branchDrawNode->drawSegment({pillCenterX - halfSpan, y}, {pillCenterX + halfSpan, y}, pillRadius, stroke);
                m_branchDrawNode->drawSegment({pillCenterX - halfSpan, y}, {pillCenterX + halfSpan, y}, pillRadius - 1.2f, fill);

                auto lbl = CCLabelBMFont::create(fmt::format("B{}", i + 1).c_str(), "chatFont.fnt");
                lbl->setScale(0.24f);
                lbl->setPosition({pillCenterX, y});
                lbl->setColor(isSelected ? cocos2d::ccColor3B{120, 255, 120} : cocos2d::ccColor3B{140, 160, 180});
                m_pillLabelsNode->addChild(lbl);

                auto pillBtnSpr = CCNode::create();
                pillBtnSpr->setContentSize({30.f, 14.f});
                pillBtnSpr->setAnchorPoint({0.5f, 0.5f});
                auto pillBtn = CCMenuItemSpriteExtra::create(pillBtnSpr, this, menu_selector(RollbackPopup::onSelectBranchPill));
                pillBtn->setUserData(reinterpret_cast<void*>(static_cast<intptr_t>(i)));
                pillBtn->setPosition({pillCenterX, y});
                m_pillMenu->addChild(pillBtn);

                float lineRad = isSelected ? 1.2f : 0.7f;
                auto lineCol = isSelected ? selStroke : unselStroke;

                if (i == 0) {
                    m_branchDrawNode->drawSegment({startX, y}, {headX, y}, lineRad, lineCol);
                    m_branchDrawNode->drawDot({startX, y}, 2.0f, lineCol);
                    m_branchDrawNode->drawDot({headX, y}, 2.2f, lineCol);
                } else {
                    size_t parentIdx = info.parentIndex;
                    if (parentIdx >= totalBranches) parentIdx = 0;
                    auto parentInfo = revert.getBranchInfo(parentIdx);
                    float parentY = getLaneY(parentIdx);
                    float parentStartX = (parentIdx == 0) ? startX : (timeToX(parentInfo.forkTime) + 12.f);
                    float forkX = std::max(parentStartX, timeToX(info.forkTime));
                    float joinX = std::min(headX - 6.f, forkX + 12.f);

                    m_branchDrawNode->drawSegment({forkX, parentY}, {joinX, y}, lineRad, lineCol);
                    m_branchDrawNode->drawDot({forkX, parentY}, 2.2f, forkDotColor);
                    m_branchDrawNode->drawSegment({joinX, y}, {headX, y}, lineRad, lineCol);
                    m_branchDrawNode->drawDot({headX, y}, 2.2f, lineCol);
                }

                if (isSelected) {
                    float bStart = (i == 0) ? startX : (timeToX(info.forkTime) + 12.f);
                    float sliderVal = m_slider ? m_slider->getValue() : 1.0f;
                    float cursorX = bStart + sliderVal * (headX - bStart);
                    m_branchDrawNode->drawDot({cursorX, y}, 4.0f, {0.35f, 0.95f, 0.35f, 0.35f});
                    m_branchDrawNode->drawDot({cursorX, y}, 2.0f, white);
                }
            }
        }

        void updateBranchView() {
            auto const& revert = RevertManager::get();
            size_t totalBranches = revert.getBranchCount();
            if (m_selectedBranchIndex >= totalBranches) {
                m_selectedBranchIndex = totalBranches - 1;
            }

            auto info = revert.getBranchInfo(m_selectedBranchIndex);
            bool isActive = (m_selectedBranchIndex == revert.getActiveBranchIndex());

            if (m_prevBtn) m_prevBtn->setVisible(m_selectedBranchIndex > 0);
            if (m_nextBtn) m_nextBtn->setVisible(m_selectedBranchIndex + 1 < totalBranches);
            if (m_deleteBtn) m_deleteBtn->setVisible(!isActive && totalBranches > 1);

            m_branchTitleLabel->setString(info.name.c_str());
            m_branchTitleLabel->setColor(isActive ? cocos2d::ccColor3B{120, 255, 120} : cocos2d::ccColor3B{255, 255, 255});
            m_branchTitleLabel->limitLabelWidth(150.f, 0.38f, 0.2f);

            if (info.isForked) {
                m_branchSubLabel->setString(
                    fmt::format("Forked from Branch {} ({} edits)", info.forkedFromBranchId, info.actionCount).c_str()
                );
            } else {
                m_branchSubLabel->setString(
                    fmt::format("Main Timeline ({} edits)", info.actionCount).c_str()
                );
            }
            m_branchSubLabel->limitLabelWidth(240.f, 0.32f, 0.2f);

            auto [sTime, eTime] = revert.getBranchTimeRange(m_selectedBranchIndex);
            m_startTime = sTime;
            m_endTime = eTime;
            m_durationSeconds = std::chrono::duration_cast<std::chrono::milliseconds>(m_endTime - m_startTime).count() / 1000.f;

            float initialVal = 1.0f;
            if (m_durationSeconds > 0.001f) {
                auto curTime = revert.getBranchCurrentTime(m_selectedBranchIndex);
                float curElapsed = std::chrono::duration_cast<std::chrono::milliseconds>(curTime - m_startTime).count() / 1000.f;
                initialVal = std::clamp(curElapsed / m_durationSeconds, 0.0f, 1.0f);
            }
            m_slider->setValue(initialVal);

            if (isActive) {
                m_confirmSpr->setString("Apply Rollback");
            } else {
                m_confirmSpr->setString("Switch to Branch");
            }

            updatePreview();
            drawDiagram();
        }

        void onPrevBranch(CCObject*) {
            if (m_selectedBranchIndex > 0) {
                m_selectedBranchIndex--;
                updateBranchView();
            }
        }

        void onNextBranch(CCObject*) {
            if (m_selectedBranchIndex + 1 < RevertManager::get().getBranchCount()) {
                m_selectedBranchIndex++;
                updateBranchView();
            }
        }

        void onSlider(CCObject*) {
            updatePreview();
            drawDiagram();
        }

        void onPreset(CCObject* sender) {
            auto btn = static_cast<CCNode*>(sender);
            int secs = static_cast<int>(reinterpret_cast<intptr_t>(btn->getUserData()));
            if (secs == -1) {
                m_slider->setValue(0.0f);
            } else if (secs == 0 || m_durationSeconds <= 0.001f) {
                m_slider->setValue(1.0f);
            } else {
                float targetSecs = m_durationSeconds - static_cast<float>(secs);
                float val = std::clamp(targetSecs / m_durationSeconds, 0.0f, 1.0f);
                m_slider->setValue(val);
            }
            updatePreview();
            drawDiagram();
        }

        void updatePreview() {
            if (!m_slider) return;
            float val = m_slider->getValue();
            auto targetTime = getTargetTime();

            if (m_durationSeconds <= 0.001f) {
                m_timeLabel->setString("No timeline history");
                m_previewLabel->setString("No edits in this branch");
                return;
            }

            if (val >= 0.999f) {
                m_timeLabel->setString("Timeline: Head (Latest)");
            } else {
                auto diffSecs = std::chrono::duration_cast<std::chrono::seconds>(m_endTime - targetTime).count();
                if (diffSecs < 60) {
                    m_timeLabel->setString(fmt::format("Timeline: {}s ago", std::max<int64_t>(1, diffSecs)).c_str());
                } else if (diffSecs < 3600) {
                    m_timeLabel->setString(fmt::format("Timeline: {}m {}s ago", diffSecs / 60, diffSecs % 60).c_str());
                } else {
                    m_timeLabel->setString(fmt::format("Timeline: {}h {}m ago", diffSecs / 3600, (diffSecs % 3600) / 60).c_str());
                }
            }

            bool isActive = (m_selectedBranchIndex == RevertManager::get().getActiveBranchIndex());
            auto curTime = RevertManager::get().getBranchCurrentTime(m_selectedBranchIndex);
            auto preview = RevertManager::get().getRollbackPreviewAtTimeInBranch(m_selectedBranchIndex, targetTime);

            if (preview.isEmpty()) {
                m_previewLabel->setString("No changes at this position");
            } else {
                std::vector<std::string> parts;
                if (preview.deletedCount > 0 || preview.placedCount > 0 || preview.modifiedCount > 0) {
                    if (isActive && targetTime <= curTime) {
                        parts.push_back(fmt::format("-{} placed, +{} del, ~{} mod",
                            preview.deletedCount, preview.placedCount, preview.modifiedCount));
                    } else if (isActive) {
                        parts.push_back(fmt::format("+{} placed, -{} del, ~{} mod",
                            preview.placedCount, preview.deletedCount, preview.modifiedCount));
                    } else {
                        parts.push_back(fmt::format("-{} placed, +{} del, ~{} mod",
                            preview.deletedCount, preview.placedCount, preview.modifiedCount));
                    }
                }
                if (preview.colorCount > 0) {
                    parts.push_back(fmt::format("{} col", preview.colorCount));
                }
                if (preview.settingsChanged) {
                    parts.push_back("settings");
                }

                std::string prefix = (isActive && targetTime <= curTime) ? "Undo: " : (isActive ? "Redo: " : "Switch: ");
                std::string fullText = prefix;
                for (size_t i = 0; i < parts.size(); i++) {
                    if (i > 0) fullText += ", ";
                    fullText += parts[i];
                }
                m_previewLabel->setString(fullText.c_str());
            }
        }

        void onConfirm(CCObject*) {
            auto targetTime = getTargetTime();
            bool isActive = (m_selectedBranchIndex == RevertManager::get().getActiveBranchIndex());

            if (isActive) {
                RevertManager::get().rollbackToTime(targetTime);
                geode::Notification::create(
                    "Timeline updated!",
                    geode::NotificationIcon::Success
                )->show();
            } else {
                RevertManager::get().switchActiveBranch(m_selectedBranchIndex, targetTime);
                geode::Notification::create(
                    fmt::format("Switched to Branch {}", m_selectedBranchIndex + 1),
                    geode::NotificationIcon::Success
                )->show();
            }

            this->onClose(nullptr);
        }

    public:
        static RollbackPopup* create() {
            auto ret = new RollbackPopup();
            if (ret && ret->init()) {
                ret->autorelease();
                return ret;
            }
            CC_SAFE_DELETE(ret);
            return nullptr;
        }
    };

    class PlayerControlsPopup : public BasePopup {
    protected:
        PlayerInfo m_player;
        bool m_isDisconnected = false;
        
        bool init(PlayerInfo const& p, bool isDisconnected = false) {
            if (!BasePopup::init(240.f, 220.f)) return false;
            m_player = p;
            m_isDisconnected = isDisconnected;
            this->setTitle(m_isDisconnected ? "Player (Left)" : "Player Controls");
            
            auto layoutNode = CCMenu::create();
            layoutNode->setContentSize({200.f, 150.f});
            layoutNode->setPosition(this->center() + cocos2d::CCPoint{0.f, -10.f});
            layoutNode->setLayout(ColumnLayout::create()->setGap(8.f)->setAxisReverse(true));
            m_mainLayer->addChild(layoutNode);
            
            if (!m_isDisconnected) {
                auto viewSprite = ButtonSprite::create(m_player.isViewOnly ? "Remove View-Only" : "Make View-Only", "goldFont.fnt", "GJ_button_01.png", 0.6f);
                auto viewBtn = CCMenuItemSpriteExtra::create(viewSprite, this, menu_selector(PlayerControlsPopup::onToggleViewOnly));
                layoutNode->addChild(viewBtn);
                
                auto kickSprite = ButtonSprite::create("Kick", "goldFont.fnt", "GJ_button_06.png", 0.6f);
                auto kickBtn = CCMenuItemSpriteExtra::create(kickSprite, this, menu_selector(PlayerControlsPopup::onKick));
                layoutNode->addChild(kickBtn);
            }
            
            auto banSprite = ButtonSprite::create("Ban", "goldFont.fnt", "GJ_button_06.png", 0.6f);
            auto banBtn = CCMenuItemSpriteExtra::create(banSprite, this, menu_selector(PlayerControlsPopup::onBan));
            layoutNode->addChild(banBtn);

            if (SessionManager::get().getRole() == SessionManager::Role::Host) {
                auto revertSprite = ButtonSprite::create("Revert Changes", "goldFont.fnt", "GJ_button_06.png", 0.6f);
                auto revertBtn = CCMenuItemSpriteExtra::create(revertSprite, this, menu_selector(PlayerControlsPopup::onRevert));
                layoutNode->addChild(revertBtn);
            }
            
            layoutNode->updateLayout();
            
            return true;
        }

        void sendAction(proto::Opcode op, bool hasBool = false, bool boolVal = false) {
            std::vector<uint8_t> data;
            data.push_back(static_cast<uint8_t>(op));
            proto::Writer writer;
            writer.writeU32(m_player.id);
            if (hasBool) writer.writeBool(boolVal);
            auto p = writer.data();
            data.insert(data.end(), p.begin(), p.end());
            P2PManager::get().send(data, ChannelType::Reliable);
            this->onClose(nullptr);
        }

        void onToggleViewOnly(CCObject*) {
            bool newValue = !m_player.isViewOnly;
            sendAction(proto::Opcode::SetViewOnly, true, newValue);
            SessionManager::get().setPlayerViewOnly(m_player.id, newValue);
            if (MultiplayerMenuPopup::s_instance) MultiplayerMenuPopup::s_instance->setupActiveSession();
        }

        void onKick(CCObject*) { 
            sendAction(proto::Opcode::KickPlayer); 
            int id = m_player.id;
            std::thread([id]() {
                std::this_thread::sleep_for(std::chrono::milliseconds(500));
                geode::queueInMainThread([id]() {
                    P2PManager::get().disconnectPeer(id);
                });
            }).detach();
        }

        void onBan(CCObject*) { 
            sendAction(proto::Opcode::BanPlayer); 
            P2PManager::get().banPlayer(m_player.name);
            int id = m_player.id;
            std::thread([id]() {
                std::this_thread::sleep_for(std::chrono::milliseconds(500));
                geode::queueInMainThread([id]() {
                    P2PManager::get().disconnectPeer(id);
                });
            }).detach();
        }

        void onRevert(CCObject*) {
            auto player = m_player;
            bool isDisconnected = m_isDisconnected;
            this->onClose(nullptr);
            RevertPlayerPopup::create(player, isDisconnected)->show();
        }
        
    public:
        static PlayerControlsPopup* create(PlayerInfo const& p, bool isDisconnected = false) {
            auto ret = new PlayerControlsPopup();
            if (ret->init(p, isDisconnected)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class DisconnectedPlayersPopup : public BasePopup {
    protected:
        geode::ScrollLayer* m_scroll = nullptr;

        bool init() {
            if (!BasePopup::init(260.f, 220.f)) return false;
            this->setTitle("Recent Players");

            auto const& players = SessionManager::get().getDisconnectedPlayers();

            if (players.empty()) {
                auto emptyLbl = CCLabelBMFont::create("No recent players", "chatFont.fnt");
                emptyLbl->setScale(0.5f);
                emptyLbl->setPosition(this->center() + CCPoint{0.f, -10.f});
                m_mainLayer->addChild(emptyLbl);
                return true;
            }

            float w = 230.f;
            float h = 140.f;
            m_scroll = geode::ScrollLayer::create({w, h});
            m_scroll->setPosition(this->center() - CCPoint{w / 2.f, h / 2.f + 5.f});
            m_scroll->m_contentLayer->setLayout(ColumnLayout::create()->setGap(2.f)->setAxisReverse(true)->setAxisAlignment(AxisAlignment::End));
            m_mainLayer->addChild(m_scroll);

            auto borders = ListBorders::create();
            borders->setContentSize({w, h});
            borders->setPosition(this->center() - CCPoint{0.f, 5.f});
            m_mainLayer->addChild(borders);

            for (size_t i = 0; i < players.size(); ++i) {
                auto const& dp = players[i];
                auto cell = CCNode::create();
                cell->setContentSize({w, 28.f});

                auto bg = CCScale9Sprite::create("square02_small.png");
                bg->setContentSize({w, 28.f});
                bg->setAnchorPoint({0, 0});
                bg->setOpacity(70);
                bg->setColor({0, 0, 0});
                cell->addChild(bg);

                auto name = CCLabelBMFont::create(dp.player.name.c_str(), "bigFont.fnt");
                name->setAnchorPoint({0, 0.5f});
                name->setScale(0.35f);
                name->setPosition({10.f, 14.f});
                cell->addChild(name);

                auto timeStr = formatTimeSince(dp.leftAt);
                auto timeLbl = CCLabelBMFont::create(timeStr.c_str(), "chatFont.fnt");
                timeLbl->setAnchorPoint({0, 0.5f});
                timeLbl->setScale(0.35f);
                timeLbl->setColor({180, 180, 180});
                timeLbl->setPosition({name->getPositionX() + name->getScaledContentSize().width + 8.f, 14.f});
                cell->addChild(timeLbl);

                auto menu = CCMenu::create();
                menu->setContentSize(cell->getContentSize());
                menu->setPosition(cell->getContentSize() / 2.f);
                cell->addChild(menu);

                auto manageSpr = ButtonSprite::create("Manage", "goldFont.fnt", "GJ_button_01.png", 0.6f);
                manageSpr->setScale(0.45f);
                auto manageBtn = CCMenuItemSpriteExtra::create(manageSpr, this, menu_selector(DisconnectedPlayersPopup::onManage));
                manageBtn->setPosition({w / 2.f - 25.f, 0.f});
                manageBtn->setTag(static_cast<int>(i));
                menu->addChild(manageBtn);

                m_scroll->m_contentLayer->addChild(cell);
            }

            float totalH = players.size() * 30.f;
            m_scroll->m_contentLayer->setContentHeight(std::max(h, totalH));
            m_scroll->m_contentLayer->updateLayout();
            m_scroll->scrollToTop();
            this->syncTouchPriority();

            return true;
        }

        void onManage(CCObject* sender) {
            auto btn = static_cast<CCNode*>(sender);
            int idx = btn->getTag();
            auto const& players = SessionManager::get().getDisconnectedPlayers();
            if (idx >= 0 && idx < static_cast<int>(players.size())) {
                auto player = players[idx].player;
                this->onClose(nullptr);
                PlayerControlsPopup::create(player, true)->show();
            }
        }

    public:
        static DisconnectedPlayersPopup* create() {
            auto ret = new DisconnectedPlayersPopup();
            if (ret->init()) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class RoomCell : public cocos2d::CCNode {
    protected:
        P2PManager::RoomInfo m_info;
        MultiplayerMenuPopup* m_parentPopup = nullptr;

        bool init(P2PManager::RoomInfo const& info, MultiplayerMenuPopup* parent, float width) {
            if (!CCNode::init()) return false;
            m_info = info;
            m_parentPopup = parent;
            this->setContentSize({width, 45.f});

            auto bg = CCScale9Sprite::create("square02_small.png");
            bg->setContentSize(this->getContentSize());
            bg->setAnchorPoint({0, 0});
            bg->setOpacity(90);
            bg->setColor({0, 0, 0});
            this->addChild(bg);

            std::string nameStr;
            if (info.playerLimit == 0) {
                nameStr = fmt::format("{} ({})", info.roomName, info.playerCount);
            } else {
                nameStr = fmt::format("{} ({}/{})", info.roomName, info.playerCount, info.playerLimit);
            }
            auto nameLabel = CCLabelBMFont::create(nameStr.c_str(), "bigFont.fnt");
            nameLabel->setAnchorPoint({0, 0.5f});
            nameLabel->setPosition({12.f, 30.f});
            nameLabel->setScale(0.45f);
            this->addChild(nameLabel);

            auto hostStr = fmt::format("Host: {} ({})", info.hostName, info.version);
            auto hostLabel = CCLabelBMFont::create(hostStr.c_str(), "goldFont.fnt");
            hostLabel->setAnchorPoint({0, 0.5f});
            hostLabel->setPosition({12.f, 13.f});
            hostLabel->setScale(0.45f);
            this->addChild(hostLabel);
            
            if (!info.description.empty()) {
                auto descLabel = CCLabelBMFont::create(info.description.c_str(), "chatFont.fnt");
                descLabel->setAnchorPoint({0, 0.5f});
                descLabel->setScale(0.45f);
                descLabel->setPosition({width * 0.45f, 22.5f});
                descLabel->setColor({200, 200, 200});
                
                if (descLabel->getContentSize().width * descLabel->getScale() > width * 0.35f) {
                    descLabel->limitLabelWidth(width * 0.35f, 0.45f, 0.1f);
                }
                
                this->addChild(descLabel);
            }
            
            std::string display = info.serverUrl;
            if (display.find("://") != std::string::npos) {
                display = display.substr(display.find("://") + 3);
            }
            auto srvLabel = CCLabelBMFont::create(display.c_str(), "chatFont.fnt");
            srvLabel->setAnchorPoint({1.f, 1.f});
            srvLabel->setPosition({width - 5.f, 43.f});
            srvLabel->setScale(0.35f);
            srvLabel->setOpacity(120);
            this->addChild(srvLabel);

            if (info.hasPassword) {
                auto lock = CCSprite::createWithSpriteFrameName("GJ_lock_001.png");
                lock->setScale(0.5f);
                lock->setPosition({width - 70.f, 22.5f});
                this->addChild(lock);
            }

            auto menu = CCMenu::create();
            menu->setPosition({width - 45.f, 22.5f});
            this->addChild(menu);

            auto joinBtnSprite = ButtonSprite::create("Join", "goldFont.fnt", "GJ_button_01.png", 0.8f);
            joinBtnSprite->setScale(0.55f);
            auto joinBtn = CCMenuItemSpriteExtra::create(joinBtnSprite, this, menu_selector(RoomCell::onJoin));
            menu->addChild(joinBtn);

            return true;
        }

        void onJoin(CCObject*) {
            if (m_parentPopup) {
                m_parentPopup->onJoinRoom(m_info);
            }
        }

    public:
        static RoomCell* create(P2PManager::RoomInfo const& info, MultiplayerMenuPopup* parent, float width) {
            auto ret = new RoomCell();
            if (ret->init(info, parent, width)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };

    class ActivePlayerCell : public cocos2d::CCNode {
    protected:
        bool init(PlayerInfo const& info, float width, cocos2d::ccColor3B nameColor) {
            if (!CCNode::init()) return false;
            this->setContentSize({width, 30.f});

            auto bg = CCScale9Sprite::create("square02_small.png");
            bg->setContentSize({width, 30.f});
            bg->setAnchorPoint({0, 0});
            bg->setOpacity(90);
            bg->setColor({0, 0, 0});
            this->addChild(bg);

            int cubeFrame = 1;
            cocos2d::ccColor3B col1 = nameColor;
            cocos2d::ccColor3B col2 = {255, 255, 255};
            bool glowEnabled = false;
            cocos2d::ccColor3B glowCol = {0, 0, 0};

            if (!info.iconStr.empty()) {
                std::stringstream ss(info.iconStr);
                std::string token;
                std::vector<std::string> tokens;
                while (std::getline(ss, token, ':')) {
                    tokens.push_back(token);
                }
                if (tokens.size() >= 5) {
                    cubeFrame = geode::utils::numFromString<int>(tokens[0]).unwrapOr(1);
                    auto gm = GameManager::sharedState();
                    col1 = gm->colorForIdx(geode::utils::numFromString<int>(tokens[1]).unwrapOr(0));
                    col2 = gm->colorForIdx(geode::utils::numFromString<int>(tokens[2]).unwrapOr(0));
                    glowEnabled = (tokens[3] == "1");
                    glowCol = gm->colorForIdx(geode::utils::numFromString<int>(tokens[4]).unwrapOr(0));
                }
            }

            auto icon = SimplePlayer::create(cubeFrame);
            icon->setColor(col1);
            icon->setSecondColor(col2);
            if (glowEnabled) {
                icon->setGlowOutline(glowCol);
            }
            icon->setScale(0.55f);
            icon->setPosition({15.f, 15.f});
            this->addChild(icon);

            auto name = CCLabelBMFont::create(info.name.c_str(), "bigFont.fnt");
            name->setAnchorPoint({0, 0.5f});
            name->setPosition({30.f, 15.f});
            name->setScale(0.4f);
            name->setColor(nameColor);
            this->addChild(name);
            
            float nextLabelX = name->getPositionX() + name->getScaledContentSize().width + 10.f;
            if (info.isViewOnly) {
                auto viewOnlyLabel = CCLabelBMFont::create("[View Only]", "chatFont.fnt");
                viewOnlyLabel->setAnchorPoint({0, 0.5f});
                viewOnlyLabel->setScale(0.35f);
                viewOnlyLabel->setColor({255, 200, 100});
                viewOnlyLabel->setPosition({nextLabelX, 15.f});
                this->addChild(viewOnlyLabel);
                nextLabelX += viewOnlyLabel->getScaledContentSize().width + 10.f;
            }
            
            if (info.id != SessionManager::get().getLocalPlayerId()) {
                auto pingLabel = CCLabelBMFont::create(fmt::format("{} ms", info.ping).c_str(), "chatFont.fnt");
                pingLabel->setID("ping-label");
                pingLabel->setAnchorPoint({0, 0.5f});
                pingLabel->setScale(0.35f);
                if (info.ping < 100) pingLabel->setColor({100, 255, 100});
                else if (info.ping < 200) pingLabel->setColor({255, 255, 100});
                else pingLabel->setColor({255, 100, 100});
                pingLabel->setPosition({nextLabelX, 15.f});
                this->addChild(pingLabel);

                auto typeLabel = CCLabelBMFont::create("", "chatFont.fnt");
                typeLabel->setID("type-label");
                typeLabel->setAnchorPoint({0, 0.5f});
                typeLabel->setScale(0.35f);
                typeLabel->setPosition({pingLabel->getPositionX() + pingLabel->getScaledContentSize().width + 8.f, 15.f});
                this->addChild(typeLabel);
            }
            
            this->setID(fmt::format("player-cell-{}", info.id));
            
            float nextX = width - 20.f;
            auto menu = CCMenu::create();
            menu->setContentSize(this->getContentSize());
            menu->setPosition(this->getContentSize() / 2.f);
            this->addChild(menu);
            
            if (SessionManager::get().getRole() == SessionManager::Role::Host && info.id != SessionManager::get().getLocalPlayerId()) {
                auto gear = CCSprite::createWithSpriteFrameName("GJ_optionsBtn_001.png");
                gear->setScale(0.5f);
                auto btn = CCMenuItemSpriteExtra::create(gear, this, menu_selector(ActivePlayerCell::onOptions));
                btn->setPosition(CCPoint{nextX, 15.f} - menu->getContentSize() / 2.f);
                btn->setUserData(reinterpret_cast<void*>(static_cast<uintptr_t>(info.id)));
                menu->addChild(btn);
                
                nextX -= 35.f;
            }
            
            if (info.id != SessionManager::get().getLocalPlayerId()) {
                auto viewSprite = ButtonSprite::create("View", "goldFont.fnt", "GJ_button_04.png", 0.7f);
                viewSprite->setScale(0.5f);
                auto viewBtn = CCMenuItemSpriteExtra::create(viewSprite, this, menu_selector(ActivePlayerCell::onView));
                viewBtn->setPosition(CCPoint{nextX - 10.f, 15.f} - menu->getContentSize() / 2.f);
                viewBtn->setUserData(reinterpret_cast<void*>(static_cast<uintptr_t>(info.id)));
                menu->addChild(viewBtn);
            }
            
            return true;
        }
        
        void onView(CCObject* sender) {
            auto btn = static_cast<CCNode*>(sender);
            int id = static_cast<int>(reinterpret_cast<uintptr_t>(btn->getUserData()));
            if (auto p = SessionManager::get().getPlayer(id)) {
                if (auto editor = LevelEditorLayer::get()) {
                    auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
                    float scale = editor->m_objectLayer->getScale();
                    editor->m_objectLayer->setPosition({
                        winSize.width / 2.f - p->cursorX * scale,
                        winSize.height / 2.f - p->cursorY * scale
                    });
                    editor->m_editorUI->constrainGameLayerPosition();
                    
                    auto scene = cocos2d::CCDirector::sharedDirector()->getRunningScene();
                    if (auto popup = scene->getChildByType<MultiplayerMenuPopup>(0)) {
                        popup->forceClose();
                    }
                }
            }
        }
        
        void onOptions(CCObject* sender) {
            auto btn = static_cast<CCNode*>(sender);
            int id = static_cast<int>(reinterpret_cast<uintptr_t>(btn->getUserData()));
            if (auto p = SessionManager::get().getPlayer(id)) {
                auto popup = PlayerControlsPopup::create(*p);
                if (popup) popup->show();
            }
        }
        
    public:
        static ActivePlayerCell* create(PlayerInfo const& info, float width, cocos2d::ccColor3B nameColor = {255, 255, 255}) {
            auto ret = new ActivePlayerCell();
            if (ret->init(info, width, nameColor)) {
                ret->autorelease();
                return ret;
            }
            delete ret;
            return nullptr;
        }
    };


    MultiplayerMenuPopup* MultiplayerMenuPopup::create() {
        auto ret = new MultiplayerMenuPopup();
        if (ret->init()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    bool MultiplayerMenuPopup::init() {
        if (!BasePopup::init(420.f, 280.f)) return false;
        s_instance = this;
        
        this->setTitle("Multiplayer Edit");
        if (m_title) {
            m_title->setPositionY(this->top() - 15.f);
            m_title->setScale(0.85f);
        }

        m_centerNode = CCNode::create();
        m_centerNode->setContentSize({350.f, 180.f});
        m_centerNode->setPosition(this->fromTop(45.f));
        m_centerNode->setAnchorPoint({0.5f, 1.0f});
        m_mainLayer->addChild(m_centerNode);
        
        auto centerBg = CCScale9Sprite::create("square02_small.png");
        centerBg->setContentSize(m_centerNode->getContentSize());
        centerBg->setPosition(m_centerNode->getContentSize() / 2.f);
        centerBg->setOpacity(75);
        m_centerNode->addChild(centerBg, -1);

        m_sessionUiNode = CCNode::create();
        m_sessionUiNode->setContentSize(m_mainLayer->getContentSize());
        m_sessionUiNode->setPosition({0, 0});
        m_mainLayer->addChild(m_sessionUiNode);

        this->setupMenus();

        if (SessionManager::get().isInSession()) {
            this->setupActiveSession();
        } else {
            this->setupRoomBrowser();
        }

        checkUpdatesAndPatreon();

        if (s_updateAvailable) {
            this->showHeaderUpdateButton();
        }


        auto* helper = UpdateHelperNode::create([](float dt) {
            P2PManager::get().dispatchMessages();
        }, 0.05f);
        if (helper) {
            this->addChild(helper);
        }

        SessionManager::get().onSessionStarted(this, [this]() {
            auto& session = SessionManager::get();
            if (session.getRole() == SessionManager::Role::Client) {
                this->createLoadingView("Waiting for host to enter the level...");
            } else {
                this->setupActiveSession();
                geode::Notification::create("Session started!", geode::NotificationIcon::Success)->show();
            }
        });
        SessionManager::get().onPlayerJoined(this, [this](PlayerInfo const&) {
            if (!m_isConnecting) {
                this->setupActiveSession();
            }
        });
        SessionManager::get().onPlayerLeft(this, [this](PlayerInfo const&) {
            if (!m_isConnecting) {
                this->setupActiveSession();
            }
        });
        SessionManager::get().onStatus(this, [this](std::string const& status) {
            this->updateStatus(status);
        });
        SessionManager::get().onError(this, [this](std::string const& error) {
            geode::queueInMainThread([this, error]() {
                this->setupRoomBrowser();
                if (error.find("invalid password") != std::string::npos && !m_lastJoinCode.empty()) {
                    P2PManager::RoomInfo fakeRoom;
                    fakeRoom.roomCode = m_lastJoinCode;
                    fakeRoom.serverUrl = m_lastServerUrl;
                    fakeRoom.hasPassword = true;
                    this->promptPassword(fakeRoom);
                } else {
                    if (!m_lastJoinCode.empty()) {
                        s_knownDeadRooms.insert(m_lastJoinCode);
                    }
                    FLAlertLayer::create("Error", error, "OK")->show();
                }
            });
        });

        this->scheduleUpdate();

        return true;
    }

    void MultiplayerMenuPopup::update(float dt) {
        if (!SessionManager::get().isInSession() || !m_scrollLayer) return;
        
        auto players = SessionManager::get().getPlayers();
        for (auto const& p : players) {
            if (p.id == SessionManager::get().getLocalPlayerId()) continue;
            auto cell = m_scrollLayer->m_contentLayer->getChildByID(fmt::format("player-cell-{}", p.id));
            if (cell) {
                auto pingLabel = typeinfo_cast<CCLabelBMFont*>(cell->getChildByID("ping-label"));
                if (pingLabel) {
                    pingLabel->setString(fmt::format("{} ms", p.ping).c_str());
                    if (p.ping < 100) pingLabel->setColor({100, 255, 100});
                    else if (p.ping < 200) pingLabel->setColor({255, 255, 100});
                    else pingLabel->setColor({255, 100, 100});
                }
                if (auto typeLabel = typeinfo_cast<CCLabelBMFont*>(cell->getChildByID("type-label"))) {
                    if (pingLabel) {
                        typeLabel->setPositionX(pingLabel->getPositionX() + pingLabel->getScaledContentSize().width + 8.f);
                    }
                    auto type = P2PManager::get().getConnectionType(p.id);
                    if (!type.empty()) {
                        typeLabel->setString(fmt::format("[{}]", type).c_str());
                        if (type == "STUN" || type == "LAN") typeLabel->setColor({100, 255, 100});
                        else if (type == "TURN") typeLabel->setColor({255, 180, 100});
                        else typeLabel->setColor({200, 200, 200});
                    } else {
                        typeLabel->setString("");
                    }
                }
            }
        }
    }

    MultiplayerMenuPopup::~MultiplayerMenuPopup() {
        auto& session = SessionManager::get();
        if (session.isInSession() && session.getRole() == SessionManager::Role::Client && !LevelEditorLayer::get()) {
            geode::log::info("MultiplayerMenuPopup: Leaving session because popup was closed during sync");
            session.leaveSession();
        }
        session.removeListener(this);
        if (s_instance == this) s_instance = nullptr;
    }

    void MultiplayerMenuPopup::setupMenus() {
        auto topMenu = CCMenu::create();
        topMenu->setContentSize({80.f, 40.f});
        topMenu->setPosition(this->fromTopRight(10.f, 10.f));
        topMenu->setAnchorPoint({1.f, 1.f});
        topMenu->setLayout(RowLayout::create()->setAxisAlignment(AxisAlignment::End)->setGap(5.f));
        m_uiMenu->addChild(topMenu);

        auto discordSpr = CCSprite::createWithSpriteFrameName("gj_discordIcon_001.png");
        discordSpr->setScale(1.0f);
        auto discordBtn = CCMenuItemSpriteExtra::create(discordSpr, this, menu_selector(MultiplayerMenuPopup::onDiscord));
        topMenu->addChild(discordBtn);

        auto patreonIcon = CCSprite::createWithSpriteFrameName("GJ_starsIcon_001.png");
        auto patreonSpr = CircleButtonSprite::create(
            patreonIcon, CircleBaseColor::Pink, CircleBaseSize::Small
        );
        patreonSpr->setScale(0.85f);
        auto patreonBtn = CCMenuItemSpriteExtra::create(patreonSpr, this, menu_selector(MultiplayerMenuPopup::onPatreon));
        topMenu->addChild(patreonBtn);
        topMenu->updateLayout();

        m_browserUiNode = CCNode::create();
        m_mainLayer->addChild(m_browserUiNode);

        auto centerMenu = CCMenu::create();
        centerMenu->setContentSize({200.f, 40.f});
        centerMenu->setPosition(this->fromBottom(25.f));
        centerMenu->setAnchorPoint({0.5f, 0.5f});
        centerMenu->setLayout(RowLayout::create()->setAxisAlignment(AxisAlignment::Center)->setGap(8.f));
        m_browserUiNode->addChild(centerMenu);

        m_codeInput = geode::TextInput::create(130.f, "Code", "chatFont.fnt");
        m_codeInput->setCommonFilter(geode::CommonFilter::Any);
        centerMenu->addChild(m_codeInput);

        auto joinSprite = ButtonSprite::create("Join", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        joinSprite->setScale(0.65f);
        auto joinBtn = CCMenuItemSpriteExtra::create(joinSprite, this, menu_selector(MultiplayerMenuPopup::onJoinByCode));
        centerMenu->addChild(joinBtn);
        centerMenu->updateLayout();

        auto rightMenu = CCMenu::create();
        rightMenu->setContentSize({50.f, 40.f});
        rightMenu->setPosition(this->fromBottomRight(18.f, 15.f));
        rightMenu->setAnchorPoint({1.f, 0.f});
        rightMenu->setLayout(RowLayout::create()->setAxisAlignment(AxisAlignment::End));
        m_browserUiNode->addChild(rightMenu);

        auto refreshSprite = CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png");
        refreshSprite->setScale(0.85f);
        auto refreshBtn = CCMenuItemSpriteExtra::create(refreshSprite, this, menu_selector(MultiplayerMenuPopup::onRefresh));
        rightMenu->addChild(refreshBtn);
        rightMenu->updateLayout();

        m_leftMenu = CCMenu::create();
        m_leftMenu->setContentSize({100.f, 40.f});
        m_leftMenu->setPosition(this->fromBottomLeft(15.f, 15.f));
        m_leftMenu->setAnchorPoint({0.f, 0.f});
        m_leftMenu->setLayout(RowLayout::create()->setAxisAlignment(AxisAlignment::Start));
        m_browserUiNode->addChild(m_leftMenu);

        auto serversBtnSprite = ButtonSprite::create("Servers", "goldFont.fnt", "GJ_button_04.png", 0.7f);
        serversBtnSprite->setScale(0.65f);
        auto serversBtn = CCMenuItemSpriteExtra::create(serversBtnSprite, this, menu_selector(MultiplayerMenuPopup::onDedicatedServers));
        m_leftMenu->addChild(serversBtn);

        auto appearanceBtnSprite = ButtonSprite::create("Appearance", "goldFont.fnt", "GJ_button_01.png", 0.7f);
        appearanceBtnSprite->setScale(0.65f);
        auto appearanceBtn = CCMenuItemSpriteExtra::create(appearanceBtnSprite, this, menu_selector(MultiplayerMenuPopup::onCustomizeAppearance));
        m_leftMenu->addChild(appearanceBtn);

        m_leftMenu->updateLayout();
        this->syncTouchPriority();
    }

    void MultiplayerMenuPopup::clearCenter() {
        m_statusLabel = nullptr;
        m_flavorLabel = nullptr;
        m_scrollLayer = nullptr;
        m_centerNode->removeAllChildren();
        if (m_sessionUiNode) m_sessionUiNode->removeAllChildren();

        auto centerBg = CCScale9Sprite::create("square02_small.png");
        centerBg->setContentSize(m_centerNode->getContentSize());
        centerBg->setPosition(m_centerNode->getContentSize() / 2.f);
        centerBg->setOpacity(75);
        m_centerNode->addChild(centerBg, -1);
    }

    void MultiplayerMenuPopup::setupRoomBrowser() {
        this->clearCenter();
        m_isConnecting = false;
        if (m_browserUiNode) m_browserUiNode->setVisible(true);

        m_statusLabel = CCLabelBMFont::create("Fetching rooms...", "chatFont.fnt");
        m_statusLabel->setPosition(m_centerNode->getContentSize() / 2.f);
        m_statusLabel->setScale(0.6f);
        m_centerNode->addChild(m_statusLabel);

        m_scrollLayer = ScrollLayer::create(m_centerNode->getContentSize());
        m_scrollLayer->setPosition({0, 0});
        m_scrollLayer->m_contentLayer->setLayout(ColumnLayout::create()->setGap(0.f)->setAxisReverse(true)->setAxisAlignment(AxisAlignment::End));
        m_centerNode->addChild(m_scrollLayer);

        auto borders = ListBorders::create();
        borders->setContentSize(m_scrollLayer->getContentSize());
        borders->setPosition(m_scrollLayer->getContentSize() / 2.f);
        m_centerNode->addChild(borders);

        this->fetchRooms();
    }

    void MultiplayerMenuPopup::fetchRooms() {
        geode::Ref<MultiplayerMenuPopup> safeThis = this;
        
        std::string customUrl = "";
        if (m_codeInput) {
            std::string code = geode::utils::string::trim(m_codeInput->getString());
            if (code.starts_with("ws://") || code.starts_with("wss://") || code.starts_with("http://") || code.starts_with("https://")) {
                customUrl = code;
                if (customUrl.back() == '/') customUrl.pop_back();
            }
        }

        P2PManager::get().fetchRooms([safeThis](std::vector<P2PManager::RoomInfo> const& rooms) {
            if (safeThis->getParent()) {
                safeThis->populateRooms(rooms);
                if (rooms.empty() && safeThis->m_statusLabel) {
                    safeThis->m_statusLabel->setVisible(true);
                    safeThis->m_statusLabel->setString("No rooms found");
                }
            }
        }, customUrl);
    }

    void MultiplayerMenuPopup::populateRooms(std::vector<P2PManager::RoomInfo> const& rooms) {
        if (!m_scrollLayer) return;
        m_scrollLayer->m_contentLayer->removeAllChildren();

        std::vector<P2PManager::RoomInfo> activeRooms;
        activeRooms.reserve(rooms.size());
        for (auto const& r : rooms) {
            if (s_knownDeadRooms.find(r.roomCode) == s_knownDeadRooms.end()) {
                activeRooms.push_back(r);
            }
        }

        if (m_statusLabel) {
            m_statusLabel->setVisible(activeRooms.empty());
            if (activeRooms.empty()) {
                m_statusLabel->setString("No rooms found");
            }
        }

        float totalHeight = activeRooms.size() * 45.f;
        m_scrollLayer->m_contentLayer->setContentHeight(std::max(m_scrollLayer->getContentSize().height, totalHeight));

        for (auto const& r : activeRooms) {
            auto cell = RoomCell::create(r, this, m_scrollLayer->getContentSize().width);
            m_scrollLayer->m_contentLayer->addChild(cell);
        }
        m_scrollLayer->m_contentLayer->updateLayout();
        m_scrollLayer->scrollToTop();
        this->syncTouchPriority();
    }

    void MultiplayerMenuPopup::onRefresh(CCObject*) {
        s_knownDeadRooms.clear();
        if (m_scrollLayer) {
            m_scrollLayer->m_contentLayer->removeAllChildren();
            if (m_statusLabel) {
                m_statusLabel->setVisible(true);
                m_statusLabel->setString("Fetching rooms...");
            }
            fetchRooms();
        }
    }

    void MultiplayerMenuPopup::onJoinByCode(cocos2d::CCObject*) {
        if (!m_codeInput) return;
        std::string code = geode::utils::string::trim(m_codeInput->getString());
        if (code.empty()) {
            geode::Notification::create("Please enter a room code or server URL", geode::NotificationIcon::Warning)->show();
            return;
        }

        m_lastJoinCode = code;
        if (code.starts_with("ws://") || code.starts_with("wss://") || code.starts_with("http://") || code.starts_with("https://")) {
            this->onRefresh(nullptr);
            return;
        }
        SessionManager::get().joinSession(code, Mod::get()->getSettingValue<std::string>("player-name"), "");
        this->onConnecting();
    }

    void MultiplayerMenuPopup::onDedicatedServers(cocos2d::CCObject*) {
        DedicatedServersPopup::create([this](std::string const& url) {
            this->onConnecting();
            
            std::string urlWithoutCode = url;
            std::string requestedCode = "";
            size_t lastSlash = url.find_last_of('/');
            if (lastSlash != std::string::npos && lastSlash < url.length() - 1) {
                std::string possibleCode = url.substr(lastSlash + 1);
                bool isAlphanum = std::all_of(possibleCode.begin(), possibleCode.end(), ::isalnum);
                if (isAlphanum && possibleCode.length() <= 8) {
                    requestedCode = possibleCode;
                    urlWithoutCode = url.substr(0, lastSlash);
                }
            }

            geode::Ref<MultiplayerMenuPopup> safeThis = this;
            P2PManager::get().fetchRooms([safeThis, urlWithoutCode, requestedCode](std::vector<P2PManager::RoomInfo> const& rooms) {
                if (!safeThis->getParent()) return;
                
                if (rooms.empty()) {
                    safeThis->clearCenter();
                    if (safeThis->m_browserUiNode) safeThis->m_browserUiNode->setVisible(true);
                    if (!requestedCode.empty()) {
                        geode::Notification::create("Server has no active levels hosted with that code", geode::NotificationIcon::Warning)->show();
                    } else {
                        geode::Notification::create("Server has no active levels hosted", geode::NotificationIcon::Warning)->show();
                    }
                    return;
                }
                
                if (!requestedCode.empty()) {
                    bool found = false;
                    for (auto const& r : rooms) {
                        if (r.roomCode == requestedCode) {
                            auto room = r;
                            room.serverUrl = urlWithoutCode;
                            safeThis->onJoinRoom(room);
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        safeThis->clearCenter();
                        if (safeThis->m_browserUiNode) safeThis->m_browserUiNode->setVisible(true);
                        geode::Notification::create("Server has no active levels hosted with that code", geode::NotificationIcon::Warning)->show();
                    }
                } else {
                    if (rooms.size() == 1) {
                        auto room = rooms[0];
                        room.serverUrl = urlWithoutCode;
                        safeThis->onJoinRoom(room);
                    } else {
                        safeThis->clearCenter();
                        if (safeThis->m_browserUiNode) safeThis->m_browserUiNode->setVisible(true);
                        geode::Notification::create("Please specify the room code in the URL (e.g., https://host:port/CODE).", geode::NotificationIcon::Warning)->show();
                    }
                }
            }, urlWithoutCode);
        })->show();
    }

    void MultiplayerMenuPopup::onHostForm(cocos2d::CCObject*) {
        CreateRoomPopup::create(this)->show();
    }

    void MultiplayerMenuPopup::onConnecting() {
        this->clearCenter();
        if (m_browserUiNode) m_browserUiNode->setVisible(false);
        m_isConnecting = true;

        auto size = m_centerNode->getContentSize();
        auto center = size / 2.f;

        auto spinner = CCSprite::create("loadingCircle.png");
        if (spinner) {
            spinner->setScale(0.7f);
            spinner->setPosition({center.width, center.height + 15.f});
            spinner->setBlendFunc({GL_SRC_ALPHA, GL_ONE});
            spinner->runAction(CCRepeatForever::create(CCRotateBy::create(1.0f, 360.f)));
            m_centerNode->addChild(spinner);
        }

        m_statusLabel = CCLabelBMFont::create("Connecting...", "chatFont.fnt");
        m_statusLabel->setPosition({center.width, center.height - 30.f});
        m_statusLabel->setScale(0.6f);
        m_statusLabel->setColor({255, 255, 100});
        m_centerNode->addChild(m_statusLabel);

        this->createFlavorLabel({center.width, center.height - 52.f});

        auto cancelSprite = ButtonSprite::create("Cancel", "goldFont.fnt", "GJ_button_06.png", 0.8f);
        cancelSprite->setScale(0.65f);
        auto cancelBtn = CCMenuItemSpriteExtra::create(cancelSprite, this, menu_selector(MultiplayerMenuPopup::onLeave));
        auto cancelMenu = CCMenu::create();
        cancelMenu->setPosition(this->fromBottom(25.f));
        cancelMenu->addChild(cancelBtn);
        m_sessionUiNode->addChild(cancelMenu);

        
        this->syncTouchPriority();
    }

    void MultiplayerMenuPopup::updateStatus(std::string const& status) {
        if (m_statusLabel) {
            m_statusLabel->setString(status.c_str());
        }
    }

    void MultiplayerMenuPopup::setupActiveSession() {
        this->clearCenter();
        if (m_browserUiNode) m_browserUiNode->setVisible(false);
        m_isConnecting = false;
        auto& session = SessionManager::get();

        auto size = m_centerNode->getContentSize();
        float w = size.width;
        float h = size.height;

        auto topRow = CCNode::create();
        topRow->setContentSize({w, 25.f});
        topRow->setPosition({w / 2.f, h - 15.f});
        topRow->setAnchorPoint({0.5f, 0.5f});
        topRow->setLayout(RowLayout::create()->setGap(10.f));
        m_centerNode->addChild(topRow);
        
        auto codeLbl = CCLabelBMFont::create(fmt::format("Code: {}", session.getRoomCode()).c_str(), "goldFont.fnt");
        codeLbl->setScale(0.55f);
        topRow->addChild(codeLbl);
        
        auto copySprite = ButtonSprite::create("Copy", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        copySprite->setScale(0.45f);
        auto copyBtn = CCMenuItemSpriteExtra::create(copySprite, this, menu_selector(MultiplayerMenuPopup::onCopyCode));
        auto copyMenu = CCMenu::create();
        copyMenu->setContentSize(copyBtn->getScaledContentSize());
        copyBtn->setPosition(copyMenu->getContentSize() / 2.f);
        copyMenu->addChild(copyBtn);
        topRow->addChild(copyMenu);

        auto customSprite = ButtonSprite::create("Appearance", "goldFont.fnt", "GJ_button_04.png", 0.8f);
        customSprite->setScale(0.45f);
        auto customBtn = CCMenuItemSpriteExtra::create(customSprite, this, menu_selector(MultiplayerMenuPopup::onCustomizeAppearance));
        auto customMenu = CCMenu::create();
        customMenu->setContentSize(customBtn->getScaledContentSize());
        customBtn->setPosition(customMenu->getContentSize() / 2.f);
        customMenu->addChild(customBtn);
        topRow->addChild(customMenu);
        
        topRow->updateLayout();

        auto roleStr = session.getRole() == SessionManager::Role::Host ? "You are the Host" : "You are a Guest";
        auto roleColor = session.getRole() == SessionManager::Role::Host ? ccColor3B{180, 255, 180} : ccColor3B{100, 200, 255};
        auto roleLabel = CCLabelBMFont::create(roleStr, "bigFont.fnt");
        roleLabel->setScale(0.3f);
        roleLabel->setColor(roleColor);
        roleLabel->setPosition({w / 2.f, h - 35.f});
        m_centerNode->addChild(roleLabel);

        auto players = session.getPlayers();
        auto countStr = fmt::format("Players: {}", players.size());
        auto countLabel = CCLabelBMFont::create(countStr.c_str(), "bigFont.fnt");
        countLabel->setScale(0.3f);
        countLabel->setPosition({w / 2.f, h - 50.f});
        m_centerNode->addChild(countLabel);

        float scrollHeight = h - 65.f;
        m_scrollLayer = ScrollLayer::create({w, scrollHeight});
        m_scrollLayer->setPosition({0, 5.f});
        m_scrollLayer->m_contentLayer->setLayout(ColumnLayout::create()->setGap(2.f)->setAxisReverse(true)->setAxisAlignment(AxisAlignment::End));
        m_centerNode->addChild(m_scrollLayer);

        auto borders = ListBorders::create();
        borders->setContentSize(m_scrollLayer->getContentSize());
        borders->setPosition({w / 2.f, 5.f + scrollHeight / 2.f});
        m_centerNode->addChild(borders);

        for (auto& p : players) {
            auto cell = ActivePlayerCell::create(p, m_scrollLayer->getContentSize().width, getPlayerEffectiveColor(p.colorIndex, p.iconStr));
            m_scrollLayer->m_contentLayer->addChild(cell);
        }

        float totalPlayersHeight = players.size() * 30.f + std::max(0, (int)players.size() - 1) * 2.f;
        m_scrollLayer->m_contentLayer->setContentHeight(std::max(m_scrollLayer->getContentSize().height, totalPlayersHeight));

        m_scrollLayer->m_contentLayer->updateLayout();
        m_scrollLayer->m_contentLayer->setPositionY(
            std::max(0.f, m_scrollLayer->getContentSize().height - m_scrollLayer->m_contentLayer->getContentSize().height)
        );

        m_statusLabel = CCLabelBMFont::create("", "chatFont.fnt");
        m_statusLabel->setPosition(this->fromBottom(48.f));
        m_statusLabel->setScale(0.45f);
        m_statusLabel->setColor({200, 200, 200});
        m_sessionUiNode->addChild(m_statusLabel);
        
        if (LevelEditorLayer::get()) {
            m_statusLabel->setString("");
        } else if (session.getRole() == SessionManager::Role::Client) {
            m_statusLabel->setString("Waiting for host to enter the level...");
        } else {
            m_statusLabel->setString("Waiting for players...");
        }

        auto leaveSprite = ButtonSprite::create("Leave", "goldFont.fnt", "GJ_button_06.png", 0.8f);
        leaveSprite->setScale(0.7f);
        auto leaveBtn = CCMenuItemSpriteExtra::create(leaveSprite, this, menu_selector(MultiplayerMenuPopup::onLeave));
        auto chatSprite = ButtonSprite::create("Chat", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        chatSprite->setScale(0.7f);
        auto chatBtn = CCMenuItemSpriteExtra::create(chatSprite, this, menu_selector(MultiplayerMenuPopup::onChat));
        chatBtn->setPosition({60.f, 0.f});

        auto leaveMenu = CCMenu::create();
        leaveMenu->setPosition(this->fromBottomLeft(35.f, 25.f));
        leaveMenu->addChild(leaveBtn);
        leaveMenu->addChild(chatBtn);

        m_sessionUiNode->addChild(leaveMenu);

        auto actionMenu = CCMenu::create();
        actionMenu->setContentSize({160.f, 40.f});
        actionMenu->setPosition(this->fromBottomRight(35.f, 25.f));
        actionMenu->setAnchorPoint({1.f, 0.5f});
        actionMenu->setLayout(RowLayout::create()->setAxisAlignment(AxisAlignment::End)->setGap(8.f));

        if (session.getRole() == SessionManager::Role::Host) {
            auto rollbackSprite = ButtonSprite::create("Rollback", "goldFont.fnt", "GJ_button_05.png", 0.8f);
            rollbackSprite->setScale(0.7f);
            auto rollbackBtn = CCMenuItemSpriteExtra::create(rollbackSprite, this, menu_selector(MultiplayerMenuPopup::onRollback));
            actionMenu->addChild(rollbackBtn);
        }

        auto recentSprite = ButtonSprite::create("Recent", "goldFont.fnt", "GJ_button_04.png", 0.8f);
        recentSprite->setScale(0.7f);
        auto recentBtn = CCMenuItemSpriteExtra::create(recentSprite, this, menu_selector(MultiplayerMenuPopup::onDisconnectedPlayers));
        actionMenu->addChild(recentBtn);

        actionMenu->updateLayout();
        m_sessionUiNode->addChild(actionMenu);

        this->syncTouchPriority();
    }

    void MultiplayerMenuPopup::onDisconnectedPlayers(CCObject*) {
        DisconnectedPlayersPopup::create()->show();
    }

    void MultiplayerMenuPopup::onRollback(CCObject*) {
        RollbackPopup::create()->show();
    }

    void MultiplayerMenuPopup::onChat(CCObject*) {
        auto popup = ChatPopup::create();
        if (popup) popup->show();
    }

    void MultiplayerMenuPopup::onLeave(CCObject*) {
        if (SessionManager::get().isInSession()) {
            bool isHost = SessionManager::get().getRole() == SessionManager::Role::Host;
            bool isDedicated = P2PManager::get().isDedicatedServer();
            SessionManager::get().leaveSession();
            geode::Notification::create("Left session", geode::NotificationIcon::Info)->show();

            if (isHost) {
                CreateRoomPopup::create(nullptr)->show();
                this->onClose(nullptr);
            } else {
                this->onClose(nullptr);
                if (auto* editor = LevelEditorLayer::get()) {
                    auto* director = cocos2d::CCDirector::sharedDirector();
                    if (isDedicated && editor->m_level) {
                        if (auto* glm = GameLevelManager::sharedState()) {
                            glm->deleteLevel(editor->m_level);
                        }
                        auto* scene = LevelBrowserLayer::scene(GJSearchObject::create(SearchType::MyLevels));
                        director->replaceScene(cocos2d::CCTransitionFade::create(0.5f, scene));
                        return;
                    }
                    if (auto* runningScene = director->getRunningScene()) {
                        std::function<EditorPauseLayer*(cocos2d::CCNode*)> findPauseLayer = [&](cocos2d::CCNode* parent) -> EditorPauseLayer* {
                            if (!parent) return nullptr;
                            if (auto* pause = typeinfo_cast<EditorPauseLayer*>(parent)) {
                                return pause;
                            }
                            if (parent->getChildren()) {
                                for (auto* child : CCArrayExt<CCNode*>(parent->getChildren())) {
                                    if (auto* p = findPauseLayer(child)) return p;
                                }
                            }
                            return nullptr;
                        };

                        auto* pauseLayer = findPauseLayer(runningScene);
                        if (pauseLayer) {
                            auto* dummySender = cocos2d::CCNode::create();
                            pauseLayer->onExitEditor(dummySender);
                        } else {
                            director->popScene();
                        }
                    }
                }
            }
        } else {
            m_isConnecting = false;
            this->setupRoomBrowser();
        }
    }

    void MultiplayerMenuPopup::onDiscord(CCObject*) {
        createQuickPopup(
            "Discord",
            "Join the <cy>Multiplayer Edit</c> Discord server?",
            "Cancel", "Join",
            [](auto, bool btn2) {
                if (btn2) geode::utils::web::openLinkInBrowser("https://discord.gg/mdsuxYu2YP");
            }
        );
    }

    void MultiplayerMenuPopup::showPatreonNoticeIfNeeded() {
        showPatreonNoticeInternal();
    }

    void MultiplayerMenuPopup::onUpdateCheckTimeout(float) {
        if (!s_updatePopupOpen && !s_patreonShown) {
            showPatreonNoticeIfNeeded();
        }
    }

    void MultiplayerMenuPopup::onPatreon(CCObject*) {
        if (auto* popup = PatreonPopup::create()) {
            s_patreonPopupOpen = true;
            popup->show();
        }
    }

    void MultiplayerMenuPopup::showHeaderUpdateButton() {
        if (!s_updateAvailable) return;
        if (m_headerUpdateBtn) {
            m_headerUpdateBtn->setVisible(true);
            return;
        }

        auto* updateMenu = CCMenu::create();
        updateMenu->setPosition({this->m_size.width / 2.f, this->top() - 34.f});
        updateMenu->setID("header-update-menu"_spr);
        this->m_mainLayer->addChild(updateMenu, 15);

        auto* spr = ButtonSprite::create("Update", "goldFont.fnt", "GJ_button_01.png", 0.5f);
        spr->setScale(0.55f);
        auto* pulse = CCRepeatForever::create(CCSequence::create(
            CCEaseInOut::create(CCScaleTo::create(0.7f, 0.62f), 2.0f),
            CCEaseInOut::create(CCScaleTo::create(0.7f, 0.50f), 2.0f),
            nullptr
        ));
        spr->runAction(pulse);

        m_headerUpdateBtn = CCMenuItemSpriteExtra::create(spr, this, menu_selector(MultiplayerMenuPopup::onHeaderUpdate));
        updateMenu->addChild(m_headerUpdateBtn);
    }

    void MultiplayerMenuPopup::hideHeaderUpdateButton() {
        if (m_headerUpdateBtn) {
            m_headerUpdateBtn->setVisible(false);
        }
    }

    void MultiplayerMenuPopup::onHeaderUpdate(CCObject*) {
        if (auto* popup = UpdatePopup::create(s_updateTagName, s_updateDownloadUrl)) {
            s_updatePopupOpen = true;
            popup->show();
        }
    }

    void MultiplayerMenuPopup::onCopyCode(CCObject*) {
        geode::utils::clipboard::write(SessionManager::get().getRoomCode());
        geode::Notification::create("Copied!", CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"))->show();
    }

    void MultiplayerMenuPopup::onCustomizeAppearance(CCObject*) {
        AppearancePopup::create()->show();
    }

    void MultiplayerMenuPopup::onJoinRoom(P2PManager::RoomInfo const& room) {
        m_lastJoinCode = room.roomCode;
        m_lastServerUrl = room.serverUrl;
        if (room.hasPassword) {
            promptPassword(room);
        } else {
            if (room.serverUrl.starts_with("ws://") || room.serverUrl.starts_with("wss://") || room.serverUrl.starts_with("http://") || room.serverUrl.starts_with("https://")) {
                std::string wsUrl = room.serverUrl;
                if (wsUrl.starts_with("http://")) wsUrl.replace(0, 7, "ws://");
                else if (wsUrl.starts_with("https://")) wsUrl.replace(0, 8, "wss://");
                SessionManager::get().joinDedicatedServer(wsUrl, room.roomCode, "");
            } else {
                SessionManager::get().joinSession(room.roomCode, Mod::get()->getSettingValue<std::string>("player-name"), "");
            }
            this->onConnecting();
        }
    }

    void MultiplayerMenuPopup::promptPassword(P2PManager::RoomInfo const& room) {
        if (auto p = JoinPasswordPopup::create(room, this)) {
            p->show();
        }
    }

    void MultiplayerMenuPopup::createLoadingView(std::string const& statusText) {
        this->clearCenter();
        if (m_browserUiNode) m_browserUiNode->setVisible(false);
        m_isConnecting = true;

        auto size = m_centerNode->getContentSize();
        auto center = size / 2.f;

        auto bg = CCScale9Sprite::create("square02b_001.png");
        bg->setContentSize(size);
        bg->setPosition(center);
        bg->setColor({10, 15, 28});
        bg->setOpacity(180);
        m_centerNode->addChild(bg);

        auto title = CCLabelBMFont::create("Synchronizing Level", "goldFont.fnt");
        title->setScale(0.65f);
        title->setPosition({center.width, center.height + 50.f});
        m_centerNode->addChild(title);

        auto spinner = CCSprite::create("loadingCircle.png");
        if (spinner) {
            spinner->setScale(0.7f);
            spinner->setPosition({center.width, center.height + 5.f});
            spinner->setBlendFunc({GL_SRC_ALPHA, GL_ONE});
            spinner->runAction(CCRepeatForever::create(CCRotateBy::create(1.0f, 360.f)));
            m_centerNode->addChild(spinner);
        }

        m_statusLabel = CCLabelBMFont::create(statusText.c_str(), "chatFont.fnt");
        m_statusLabel->setScale(0.55f);
        m_statusLabel->setPosition({center.width, center.height - 35.f});
        m_statusLabel->setColor({200, 200, 200});
        m_centerNode->addChild(m_statusLabel);

        this->createFlavorLabel({center.width, center.height - 56.f});

        auto cancelSprite = ButtonSprite::create("Cancel", "goldFont.fnt", "GJ_button_06.png", 0.8f);
        cancelSprite->setScale(0.65f);
        auto cancelBtn = CCMenuItemSpriteExtra::create(cancelSprite, this, menu_selector(MultiplayerMenuPopup::onLeave));
        auto cancelMenu = CCMenu::create();
        cancelMenu->setPosition(this->fromBottom(25.f));
        cancelMenu->addChild(cancelBtn);
        m_sessionUiNode->addChild(cancelMenu);

        
    }

    static const std::vector<std::string> s_funnyLines = {
        "Loading friends...",
        "Trying to connect to the host's toaster...",
        "Sending out carrier pigeons...",
        "Downloading more RAM...",
        "Toppling the firewall...",
        "Placing crash triggers...",
        "Adding 100,000 glow objects...",
        "Adding lag spikes...",
        "Contacting RobTop Games...",
        "Adding fixed hitboxes...",
        "Support the mod on Patreon!"
    };

    void MultiplayerMenuPopup::createFlavorLabel(cocos2d::CCPoint const& pos) {
        if (!geode::Mod::get()->getSettingValue<bool>("funny-loading-messages")) {
            return;
        }

        m_currentFlavorIndex = rand() % s_funnyLines.size();

        m_flavorLabel = CCLabelBMFont::create(s_funnyLines[m_currentFlavorIndex].c_str(), "chatFont.fnt");
        m_flavorLabel->setScale(0.42f);
        m_flavorLabel->setPosition(pos);
        m_flavorLabel->setColor({180, 180, 200});
        m_flavorLabel->setOpacity(160);
        m_centerNode->addChild(m_flavorLabel);

        auto cycleAction = CCRepeatForever::create(CCSequence::create(
            CCDelayTime::create(3.2f),
            CCFadeTo::create(0.25f, 0),
            CCCallFunc::create(this, callfunc_selector(MultiplayerMenuPopup::cycleFlavorText)),
            CCFadeTo::create(0.25f, 160),
            nullptr
        ));

        m_flavorLabel->runAction(cycleAction);
    }

    void MultiplayerMenuPopup::cycleFlavorText() {
        if (!m_flavorLabel) return;
        if (s_funnyLines.size() > 1) {
            size_t nextIdx = rand() % (s_funnyLines.size() - 1);
            if (nextIdx >= m_currentFlavorIndex) nextIdx++;
            m_currentFlavorIndex = nextIdx;
        }
        m_flavorLabel->setString(s_funnyLines[m_currentFlavorIndex].c_str());
        m_flavorLabel->setOpacity(0);
    }

}
