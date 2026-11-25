#include "CursorOverlayNode.hpp"
#include "CursorNode.hpp"
#include "../SessionManager.hpp"
#include "../utils/ColorPalette.hpp"
#include <Geode/Geode.hpp>
#include <cmath>
#include <algorithm>
#include <unordered_set>

using namespace geode::prelude;

namespace mpedit {

    void CursorOverlayNode::EdgeIndicator::pulse() {
        if (!root || !arrow) return;

        arrow->stopActionByTag(101);
        arrow->setScale(1.0f);
        auto pulseAction = cocos2d::CCSequence::create(
            cocos2d::CCScaleTo::create(0.08f, 1.45f),
            cocos2d::CCScaleTo::create(0.12f, 1.0f),
            cocos2d::CCScaleTo::create(0.08f, 1.25f),
            cocos2d::CCScaleTo::create(0.12f, 1.0f),
            nullptr
        );
        pulseAction->setTag(101);
        arrow->runAction(pulseAction);

        pingTimer = 0.f;
        pingActive = true;
        if (sonarPing) sonarPing->clear();
    }

    void CursorOverlayNode::EdgeIndicator::updatePing(float dt) {
        if (!pingActive || !sonarPing) return;

        pingTimer += dt;
        float progress = pingTimer / pingDuration;
        if (progress >= 1.0f) {
            sonarPing->clear();
            pingActive = false;
            return;
        }

        float radius = 5.f + progress * 24.f;
        float alpha = std::max(0.f, (1.f - progress) * 0.95f);

        sonarPing->clear();
        sonarPing->drawCircle(
            {0.f, 0.f},
            radius,
            {0.f, 0.f, 0.f, 0.f},
            2.0f,
            {color.r / 255.f, color.g / 255.f, color.b / 255.f, alpha},
            36
        );
    }

    CursorOverlayNode::~CursorOverlayNode() {
        SessionManager::get().removeListener(this);
    }

    CursorOverlayNode* CursorOverlayNode::create() {
        auto* ret = new CursorOverlayNode();
        if (ret && ret->init()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    bool CursorOverlayNode::init() {
        if (!CCNode::init()) return false;

        SessionManager::get().onChatMessage(this, [this](SessionManager::ChatMessage const& msg) {
            this->addBubble(msg.playerId, msg.message);
        });

        this->scheduleUpdate();
        return true;
    }

    void CursorOverlayNode::addBubble(int playerId, std::string const& message) {
        if (!Mod::get()->getSettingValue<bool>("show-chat-bubbles")) return;

        double duration = Mod::get()->getSettingValue<double>("chat-bubble-duration");
        if (duration <= 0.0) duration = 5.0;

        auto indIt = m_indicators.find(playerId);
        if (indIt != m_indicators.end() && indIt->second.isOffScreen) {
            indIt->second.pulse();
        }

        auto& list = m_bubbles[playerId];
        while (list.size() >= 3) {
            if (list.front().root) list.front().root->removeFromParent();
            list.erase(list.begin());
        }

        auto color3 = ColorPalette::getColor(0);
        if (auto* p = SessionManager::get().getPlayer(playerId)) {
            color3 = getPlayerEffectiveColor(p->colorIndex, p->iconStr);
        }

        BubbleItem item;
        item.maxDuration = static_cast<float>(duration);
        item.timer = 0.f;

        item.root = cocos2d::CCNode::create();
        this->addChild(item.root, 20);

        item.label = geode::Label::create(message, "chatFont.fnt");
        item.label->setLimitLabelWidth(130.f, 0.32f, 0.18f);
        item.label->setAnchorPoint({0.5f, 0.5f});
        item.label->setPosition({0.f, 0.f});

        auto lblSize = item.label->getScaledContentSize();
        float radius = 9.5f;
        float pillWidth = std::max(lblSize.width + 16.f, 26.f);
        float halfSpan = std::max((pillWidth - 2.f * radius) * 0.5f, 0.f);
        item.height = radius * 2.f;

        item.drawNode = cocos2d::CCDrawNode::create();
        item.drawNode->drawSegment(
            {-halfSpan, 0.f},
            {halfSpan, 0.f},
            radius,
            {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 0.95f}
        );
        item.drawNode->drawSegment(
            {-halfSpan, 0.f},
            {halfSpan, 0.f},
            radius - 1.2f,
            {0.05f, 0.05f, 0.08f, 0.88f}
        );

        item.root->addChild(item.drawNode, 0);
        item.root->addChild(item.label, 1);

        if (indIt != m_indicators.end() && indIt->second.isOffScreen) {
            item.root->setVisible(false);
        } else {
            item.root->setScale(0.f);
            item.root->runAction(cocos2d::CCEaseBackOut::create(cocos2d::CCScaleTo::create(0.15f, 1.f)));
        }

        list.push_back(item);
    }

    void CursorOverlayNode::update(float dt) {
        auto& session = SessionManager::get();
        if (!session.isInSession()) {
            for (auto& [id, list] : m_bubbles) {
                for (auto& b : list) {
                    if (b.root) b.root->removeFromParent();
                }
            }
            m_bubbles.clear();
            for (auto& [id, ind] : m_indicators) {
                if (ind.root) ind.root->removeFromParent();
            }
            m_indicators.clear();
            return;
        }

        auto* editor = LevelEditorLayer::get();
        if (!editor || !editor->m_objectLayer) return;

        bool showBubbles = Mod::get()->getSettingValue<bool>("show-chat-bubbles");
        bool showIndicators = Mod::get()->getSettingValue<bool>("show-offscreen-indicators");

        auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        float minX = 10.f;
        float maxX = winSize.width - 10.f;
        float minY = 10.f;
        float maxY = winSize.height - 10.f;
        cocos2d::CCPoint center(winSize.width * 0.5f, winSize.height * 0.5f);

        auto& players = session.getPlayers();
        int localId = session.getLocalPlayerId();

        std::unordered_set<int> activeIds;

        for (auto& player : players) {
            activeIds.insert(player.id);

            cocos2d::CCPoint worldPos(player.cursorX, player.cursorY);
            cocos2d::CCPoint screenPos = editor->m_objectLayer->convertToWorldSpace(worldPos);

            bool onScreen = (screenPos.x >= 0.f && screenPos.x <= winSize.width &&
                             screenPos.y >= 0.f && screenPos.y <= winSize.height);

            float edgeX = screenPos.x;
            float edgeY = screenPos.y;
            float angleRad = 0.f;

            if (!onScreen) {
                cocos2d::CCPoint dir = screenPos - center;
                if (dir.x == 0.f && dir.y == 0.f) dir.y = 1.f;

                float tx = (dir.x > 0.f) ? (maxX - center.x) / dir.x : (minX - center.x) / dir.x;
                float ty = (dir.y > 0.f) ? (maxY - center.y) / dir.y : (minY - center.y) / dir.y;
                float t = std::min(tx, ty);

                edgeX = std::clamp(center.x + dir.x * t, minX, maxX);
                edgeY = std::clamp(center.y + dir.y * t, minY, maxY);
                angleRad = std::atan2(dir.y, dir.x);
            }

            if (player.id != localId) {
                if (m_indicators.find(player.id) == m_indicators.end()) {
                    EdgeIndicator ind;
                    ind.root = cocos2d::CCNode::create();
                    this->addChild(ind.root, 10);

                    auto color3 = getPlayerEffectiveColor(player.colorIndex, player.iconStr);
                    ind.color = color3;

                    ind.sonarPing = cocos2d::CCDrawNode::create();
                    ind.root->addChild(ind.sonarPing, 1);

                    ind.arrow = cocos2d::CCDrawNode::create();
                    cocos2d::CCPoint verts[] = {
                        {9.0f, 0.0f},
                        {-6.0f, -6.0f},
                        {-2.5f, 0.0f},
                        {-6.0f, 6.0f}
                    };
                    cocos2d::ccColor4F fill = {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 1.0f};
                    cocos2d::ccColor4F outline = {0.f, 0.f, 0.f, 1.0f};
                    ind.arrow->drawPolygon(verts, 4, fill, 1.2f, outline);
                    ind.root->addChild(ind.arrow, 2);

                    m_indicators[player.id] = ind;
                }

                auto& ind = m_indicators[player.id];
                ind.isOffScreen = !onScreen;

                if (!onScreen && showIndicators) {
                    ind.root->setVisible(true);
                    ind.root->setPosition({edgeX, edgeY});

                    float angleDeg = -CC_RADIANS_TO_DEGREES(angleRad);
                    ind.arrow->setRotation(angleDeg);
                } else {
                    ind.root->setVisible(false);
                }
            }

            auto bubbleIt = m_bubbles.find(player.id);
            if (bubbleIt != m_bubbles.end()) {
                auto& list = bubbleIt->second;
                if (!showBubbles) {
                    for (auto& b : list) {
                        if (b.root) b.root->removeFromParent();
                    }
                    list.clear();
                } else {
                    for (size_t i = 0; i < list.size();) {
                        list[i].timer += dt;
                        if (list[i].timer >= list[i].maxDuration) {
                            if (list[i].root) list[i].root->removeFromParent();
                            list.erase(list.begin() + i);
                        } else {
                            float timeLeft = list[i].maxDuration - list[i].timer;
                            if (timeLeft < 0.2f && timeLeft > 0.f) {
                                float popScale = timeLeft / 0.2f;
                                if (list[i].root) list[i].root->setScale(popScale);
                            }
                            ++i;
                        }
                    }

                    if (!list.empty()) {
                        if (!onScreen) {
                            for (auto& item : list) {
                                if (item.root) item.root->setVisible(false);
                            }
                        } else {
                            float baseX = std::clamp(screenPos.x, 70.f, winSize.width - 70.f);
                            float baseY = screenPos.y + 20.f;

                            float currentStackY = baseY;
                            for (int i = static_cast<int>(list.size()) - 1; i >= 0; --i) {
                                auto& item = list[i];
                                if (item.root) {
                                    item.root->setVisible(true);
                                    float itemCenterY = currentStackY + item.height * 0.5f;
                                    if (item.currentY == 0.f) {
                                        item.currentY = itemCenterY;
                                    } else {
                                        item.currentY += (itemCenterY - item.currentY) * std::min(20.f * dt, 1.f);
                                    }
                                    item.root->setPosition({baseX, item.currentY});
                                }
                                currentStackY += item.height + 3.f;
                            }
                        }
                    }
                }
            }
        }

        for (auto& [id, ind] : m_indicators) {
            ind.updatePing(dt);
        }

        for (auto it = m_indicators.begin(); it != m_indicators.end();) {
            if (activeIds.find(it->first) == activeIds.end()) {
                if (it->second.root) it->second.root->removeFromParent();
                it = m_indicators.erase(it);
            } else {
                ++it;
            }
        }

        for (auto it = m_bubbles.begin(); it != m_bubbles.end();) {
            if (activeIds.find(it->first) == activeIds.end() || it->second.empty()) {
                if (activeIds.find(it->first) == activeIds.end()) {
                    for (auto& b : it->second) {
                        if (b.root) b.root->removeFromParent();
                    }
                }
                it = m_bubbles.erase(it);
            } else {
                ++it;
            }
        }
    }

}
