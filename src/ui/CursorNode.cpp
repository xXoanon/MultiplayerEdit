#include "CursorNode.hpp"
#include <Geode/Geode.hpp>
#include "../RemoteActionHandler.hpp"
#include <sstream>

using namespace geode::prelude;

namespace mpedit {

    CursorNode* CursorNode::create() {
        auto* ret = new CursorNode();
        if (ret->init()) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }

    ccColor3B CursorNode::getColorForIndex(int index) {
        static const std::array<ccColor3B, 6> colors = {
            ccColor3B{100, 200, 255},
            ccColor3B{255, 120, 100},
            ccColor3B{100, 255, 150},
            ccColor3B{255, 200, 100},
            ccColor3B{200, 150, 255},
            ccColor3B{255, 150, 200},
        };
        return colors[index % colors.size()];
    }

    CursorNode::~CursorNode() {
        SessionManager::get().removeListener(this);
    }


    bool CursorNode::init() {
        if (!CCNode::init()) return false;
        
        m_selectionDrawNode = cocos2d::CCDrawNode::create();
        this->addChild(m_selectionDrawNode);
        SessionManager::get().onChatMessage(this, [this](SessionManager::ChatMessage const& msg) {
            this->showChatBubble(msg.playerId, msg.message);
        });

        this->scheduleUpdate();
        return true;
    }

    void CursorNode::update(float dt) {
        auto& session = SessionManager::get();
        
        if (!session.isInSession()) {
            this->removeAllChildren();
            m_cursors.clear();
            m_selectionDrawNode = nullptr;
            return;
        }
        
        if (!m_selectionDrawNode) {
            m_selectionDrawNode = cocos2d::CCDrawNode::create();
            this->addChild(m_selectionDrawNode);
        SessionManager::get().onChatMessage(this, [this](SessionManager::ChatMessage const& msg) {
            this->showChatBubble(msg.playerId, msg.message);
        });
        }

        auto& players = session.getPlayers();
        int localId = session.getLocalPlayerId();

        std::unordered_set<int> activeIds;

        for (auto& player : players) {
            if (player.id == localId) { }
            
            activeIds.insert(player.id);

            if (m_cursors.find(player.id) == m_cursors.end()) {
                PlayerCursor pc;
                pc.playtestIcon = nullptr;
                pc.lockIcon = nullptr;
                
                pc.drawNode = CCDrawNode::create();
                
                cocos2d::CCPoint verts[] = {
                    {0.0f, 0.0f},
                    {0.0f, -17.8f},
                    {5.7f, -13.3f},
                    {12.9f, -13.1f}
                };
                
                auto color3 = getColorForIndex(player.colorIndex);
                cocos2d::ccColor4F color4 = {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 0.9f};
                cocos2d::ccColor4F outline = {0.f, 0.f, 0.f, 1.f};
                
                pc.drawNode->drawPolygon(verts, 4, color4, 1.0f, outline);
                this->addChild(pc.drawNode);

                pc.label = CCLabelBMFont::create(player.name.c_str(), "chatFont.fnt");
                if (player.id == localId) {
                    pc.drawNode->setVisible(false);
                    pc.label->setVisible(false);
                }
                pc.label->setScale(0.4f);
                pc.label->setColor(color3);
                pc.label->setOpacity(200);
                pc.label->setAnchorPoint({0.f, 0.5f});
                this->addChild(pc.label);

                pc.targetX = player.cursorX;
                pc.targetY = player.cursorY;
                pc.chatBubble = cocos2d::extension::CCScale9Sprite::create("square02_001.png");
                pc.chatBubble->setContentSize({100.f, 30.f});
                pc.chatBubble->setOpacity(0);
                pc.chatBubble->setAnchorPoint({0.5f, 0.f});
                this->addChild(pc.chatBubble, 20);
                pc.chatLabel = CCLabelBMFont::create("", "chatFont.fnt");
                pc.chatLabel->setScale(0.6f);
                pc.chatLabel->setOpacity(0);
                this->addChild(pc.chatLabel, 21);

                pc.drawNode->setPosition({pc.targetX, pc.targetY});
                pc.label->setPosition({pc.targetX + 15.f, pc.targetY - 15.f});

                m_cursors[player.id] = pc;
            } else {
                auto& pc = m_cursors[player.id];
                pc.targetX = player.cursorX;
                pc.targetY = player.cursorY;
            }

            auto& pc = m_cursors[player.id];
            
            auto currentPos = pc.drawNode->getPosition();
            float t = std::min(25.f * dt, 1.0f);
            float newX = currentPos.x + (pc.targetX - currentPos.x) * t;
            float newY = currentPos.y + (pc.targetY - currentPos.y) * t;
            
            float new2X = 0.f, new2Y = 0.f;
            if (pc.playtestIcon2) {
                auto currentPos2 = pc.playtestIcon2->getPosition();
                new2X = currentPos2.x + (pc.target2X - currentPos2.x) * t;
                new2Y = currentPos2.y + (pc.target2Y - currentPos2.y) * t;
            }
            
            pc.drawNode->setPosition({newX, newY});
            if (pc.chatBubble) pc.chatBubble->setPosition({newX, newY + 20.f});
            if (pc.chatLabel) pc.chatLabel->setPosition({newX, newY + 35.f});

            pc.label->setString(player.name.c_str());

            if (player.isViewOnly) {
                if (!pc.lockIcon) {
                    pc.lockIcon = cocos2d::CCSprite::createWithSpriteFrameName("GJ_lock_001.png");
                    pc.lockIcon->setScale(0.4f);
                    this->addChild(pc.lockIcon, 10);
                }
                pc.lockIcon->setPosition({newX - 12.f, newY + 12.f});
            } else if (pc.lockIcon) {
                pc.lockIcon->removeFromParent();
                pc.lockIcon = nullptr;
            }

            if (player.status != pc.lastStatus) {
                pc.lastStatus = player.status;
                if (pc.toolIndicator) {
                    pc.toolIndicator->removeFromParent();
                    pc.toolIndicator = nullptr;
                }

                if (!player.status.empty() && player.status.rfind("pt:", 0) != 0) {
                    int mode = 0;
                    int swipe = 0;
                    int objectId = 0;
                    std::stringstream ss(player.status);
                    std::string modeStr, swipeStr, objStr;
                    if (std::getline(ss, modeStr, ':') && std::getline(ss, swipeStr, ':') && std::getline(ss, objStr, ':')) {
                        mode = geode::utils::numFromString<int>(modeStr).unwrapOr(0);
                        swipe = geode::utils::numFromString<int>(swipeStr).unwrapOr(0);
                        objectId = geode::utils::numFromString<int>(objStr).unwrapOr(0);
                    }

                    ccColor4F bgColor;
                    std::string modeText;
                    bool hasIndicator = true;
                    if (mode == 2) {
                        bgColor = {0.12f, 0.56f, 1.0f, 0.9f};
                        modeText = "BUILD";
                    } else if (mode == 1) {
                        bgColor = {1.0f, 0.25f, 0.25f, 0.9f};
                        modeText = "DELETE";
                    } else if (mode == 3) {
                        bgColor = {1.0f, 0.6f, 0.07f, 0.9f};
                        modeText = "EDIT";
                    } else {
                        hasIndicator = false;
                    }

                    if (hasIndicator) {
                        pc.toolIndicator = CCNode::create();

                        if (swipe != 0) {
                            modeText += " (SWIPE)";
                        }

                        auto* badgeLabel = CCLabelBMFont::create(modeText.c_str(), "chatFont.fnt");
                        badgeLabel->setScale(0.35f);
                        badgeLabel->setColor({255, 255, 255});
                        
                        float labelWidth = badgeLabel->getContentSize().width * badgeLabel->getScaleX();
                        float labelHeight = badgeLabel->getContentSize().height * badgeLabel->getScaleY();
                        
                        float paddingX = 8.f;
                        float paddingY = 4.f;
                        
                        float badgeWidth = labelWidth + paddingX * 2.f;
                        float badgeHeight = labelHeight + paddingY * 2.f;

                        GameObject* previewObj = nullptr;
                        float previewWidth = 0.f;
                        if ((mode == 2 || mode == 3) && objectId > 0) {
                            auto* obj = GameObject::createWithKey(objectId);
                            if (obj) {
                                float maxDim = std::max(obj->getContentSize().width, obj->getContentSize().height);
                                if (maxDim > 0.f) {
                                    float targetDim = 14.f;
                                    obj->setScale(targetDim / maxDim);
                                    previewWidth = targetDim;
                                    previewObj = obj;
                                }
                            }
                        }

                        if (previewObj) {
                            badgeWidth += previewWidth + 4.f;
                        }

                        auto* bgNode = CCDrawNode::create();
                        float radius = badgeHeight / 2.f;
                        bgNode->drawSegment({radius, radius}, {badgeWidth - radius, radius}, radius, bgColor);
                        pc.toolIndicator->addChild(bgNode, -1);

                        if (previewObj) {
                            previewObj->setPosition({paddingX + previewWidth / 2.f, radius});
                            pc.toolIndicator->addChild(previewObj, 1);
                            badgeLabel->setPosition({paddingX + previewWidth + 4.f + labelWidth / 2.f, radius});
                        } else {
                            badgeLabel->setPosition({badgeWidth / 2.f, radius});
                        }
                        
                        pc.toolIndicator->addChild(badgeLabel, 1);
                        pc.toolIndicator->setContentSize({badgeWidth, badgeHeight});
                        pc.toolIndicator->setAnchorPoint({0.f, 0.5f});
                        pc.toolIndicator->ignoreAnchorPointForPosition(false);
                        
                        this->addChild(pc.toolIndicator);
                    }
                }
            }

            bool isPlaytesting = false;
            int iconType = 0;
            float rotation = 0.f;
            bool isUpsideDown = false;
            bool isMini = false;
            bool isFacingLeft = false;
            
            bool isDual = false;
            float p2X = 0.f;
            float p2Y = 0.f;
            float p2Rot = 0.f;
            bool p2UpsideDown = false;
            bool p2Mini = false;
            int p2IconType = 0;
            bool p2IsFacingLeft = false;
            
            int cubeFrame = 1, shipFrame = 1, ballFrame = 1, ufoFrame = 1, waveFrame = 1, robotFrame = 1, spiderFrame = 1, swingFrame = 1;
            cocos2d::ccColor3B col1{255, 255, 255}, col2{255, 255, 255}, glowCol{0, 0, 0};
            bool glowEnabled = false;

            if (player.status.rfind("pt:", 0) == 0) {
                std::vector<std::string> tokens;
                std::stringstream ss(player.status);
                std::string token;
                while (std::getline(ss, token, ':')) {
                    tokens.push_back(token);
                }
                
                if (tokens.size() >= 23) {
                    isPlaytesting = (tokens[1] == "1");
                    iconType = geode::utils::numFromString<int>(tokens[2]).unwrapOr(0);
                    rotation = geode::utils::numFromString<float>(tokens[3]).unwrapOr(0.f);
                    isUpsideDown = (tokens[4] == "1");
                    cubeFrame = geode::utils::numFromString<int>(tokens[5]).unwrapOr(1);
                    shipFrame = geode::utils::numFromString<int>(tokens[6]).unwrapOr(1);
                    ballFrame = geode::utils::numFromString<int>(tokens[7]).unwrapOr(1);
                    ufoFrame = geode::utils::numFromString<int>(tokens[8]).unwrapOr(1);
                    waveFrame = geode::utils::numFromString<int>(tokens[9]).unwrapOr(1);
                    robotFrame = geode::utils::numFromString<int>(tokens[10]).unwrapOr(1);
                    spiderFrame = geode::utils::numFromString<int>(tokens[11]).unwrapOr(1);
                    swingFrame = geode::utils::numFromString<int>(tokens[12]).unwrapOr(1);
                    
                    col1.r = geode::utils::numFromString<int>(tokens[13]).unwrapOr(255);
                    col1.g = geode::utils::numFromString<int>(tokens[14]).unwrapOr(255);
                    col1.b = geode::utils::numFromString<int>(tokens[15]).unwrapOr(255);
                    
                    col2.r = geode::utils::numFromString<int>(tokens[16]).unwrapOr(255);
                    col2.g = geode::utils::numFromString<int>(tokens[17]).unwrapOr(255);
                    col2.b = geode::utils::numFromString<int>(tokens[18]).unwrapOr(255);
                    
                    glowEnabled = (tokens[19] == "1");
                    
                    glowCol.r = geode::utils::numFromString<int>(tokens[20]).unwrapOr(0);
                    glowCol.g = geode::utils::numFromString<int>(tokens[21]).unwrapOr(0);
                    glowCol.b = geode::utils::numFromString<int>(tokens[22]).unwrapOr(0);
                }
                
                if (tokens.size() >= 31) {
                    isMini = (tokens[23] == "1");
                    isDual = (tokens[24] == "1");
                    p2X = geode::utils::numFromString<float>(tokens[25]).unwrapOr(0.f);
                    p2Y = geode::utils::numFromString<float>(tokens[26]).unwrapOr(0.f);
                    pc.target2X = p2X;
                    pc.target2Y = p2Y;
                    p2Rot = geode::utils::numFromString<float>(tokens[27]).unwrapOr(0.f);
                    p2UpsideDown = (tokens[28] == "1");
                    p2Mini = (tokens[29] == "1");
                    p2IconType = geode::utils::numFromString<int>(tokens[30]).unwrapOr(0);
                }
                
                if (tokens.size() >= 33) {
                    isFacingLeft = (tokens[31] == "1");
                    p2IsFacingLeft = (tokens[32] == "1");
                }
            }

            if (isPlaytesting) {
                pc.drawNode->setVisible(false);
                if (pc.toolIndicator) {
                    pc.toolIndicator->setVisible(false);
                }
                
                if (!pc.playtestIcon) {
                    pc.playtestIcon = SimplePlayer::create(1);
                    this->addChild(pc.playtestIcon);
                    
                    pc.playtestInnerCube = SimplePlayer::create(1);
                    pc.playtestInnerCube->setScale(0.55f);
                    pc.playtestIcon->addChild(pc.playtestInnerCube, -1);
                }
                
                bool isLocal = (player.id == localId);
                
                pc.playtestIcon->setVisible(!isLocal);
                pc.playtestIcon->setPosition({newX, newY});
                pc.playtestIcon->setRotation(rotation);
                
                float baseScale = isMini ? 0.6f : 1.0f;
                pc.playtestIcon->setScaleX(isFacingLeft ? -baseScale : baseScale);
                pc.playtestIcon->setScaleY(isUpsideDown ? -baseScale : baseScale);
                
                if (isDual) {
                    if (!pc.playtestIcon2) {
                        pc.playtestIcon2 = SimplePlayer::create(1);
                        this->addChild(pc.playtestIcon2);
                        
                        pc.playtestInnerCube2 = SimplePlayer::create(1);
                        pc.playtestInnerCube2->setScale(0.55f);
                        pc.playtestIcon2->addChild(pc.playtestInnerCube2, -1);
                    }
                    pc.playtestIcon2->setVisible(!isLocal);
                    pc.playtestIcon2->setPosition({new2X, new2Y});
                    pc.playtestIcon2->setRotation(p2Rot);
                    
                    float p2BaseScale = p2Mini ? 0.6f : 1.0f;
                    pc.playtestIcon2->setScaleX(p2IsFacingLeft ? -p2BaseScale : p2BaseScale);
                    pc.playtestIcon2->setScaleY(p2UpsideDown ? -p2BaseScale : p2BaseScale);
                } else if (pc.playtestIcon2) {
                    pc.playtestIcon2->setVisible(false);
                }
                
                int activeIconId = cubeFrame;
                IconType activeIconType = IconType::Cube;
                
                if (iconType == 1) {
                    activeIconId = shipFrame;
                    activeIconType = IconType::Ship;
                } else if (iconType == 2) {
                    activeIconId = ballFrame;
                    activeIconType = IconType::Ball;
                } else if (iconType == 3) {
                    activeIconId = ufoFrame;
                    activeIconType = IconType::Ufo;
                } else if (iconType == 4) {
                    activeIconId = waveFrame;
                    activeIconType = IconType::Wave;
                } else if (iconType == 5) {
                    activeIconId = robotFrame;
                    activeIconType = IconType::Robot;
                } else if (iconType == 6) {
                    activeIconId = spiderFrame;
                    activeIconType = IconType::Spider;
                } else if (iconType == 7) {
                    activeIconId = swingFrame;
                    activeIconType = IconType::Swing;
                } else if (iconType == 8) {
                    activeIconId = shipFrame;
                    activeIconType = IconType::Jetpack;
                }
                
                pc.playtestIcon->updatePlayerFrame(activeIconId, activeIconType);
                pc.playtestIcon->setColors(col1, col2);
                if (glowEnabled) {
                    pc.playtestIcon->setGlowOutline(glowCol);
                } else {
                    pc.playtestIcon->disableGlowOutline();
                }
                
                if (pc.playtestInnerCube) {
                    if (activeIconType == IconType::Ship || activeIconType == IconType::Ufo || activeIconType == IconType::Jetpack) {
                        pc.playtestInnerCube->setVisible(!isLocal);
                        pc.playtestInnerCube->updatePlayerFrame(cubeFrame, IconType::Cube);
                        pc.playtestInnerCube->setColors(col1, col2);
                        if (glowEnabled) {
                            pc.playtestInnerCube->setGlowOutline(glowCol);
                        } else {
                            pc.playtestInnerCube->disableGlowOutline();
                        }
                        cocos2d::CCPoint offset = cocos2d::CCPoint(0.f, 0.f);
                        if (activeIconType == IconType::Ship) {
                            offset = cocos2d::CCPoint(0.f, 10.f);
                        } else if (activeIconType == IconType::Ufo) {
                            offset = cocos2d::CCPoint(0.f, 3.0f);
                        } else if (activeIconType == IconType::Jetpack) {
                            offset = cocos2d::CCPoint(6.f, 0.0f);
                        }
                        pc.playtestInnerCube->setPosition(pc.playtestIcon->getContentSize() / 2 + offset);
                    } else {
                        pc.playtestInnerCube->setVisible(false);
                    }
                }
                
                if (isDual && pc.playtestIcon2) {
                    int p2ActiveIconId = cubeFrame;
                    IconType p2ActiveIconType = IconType::Cube;
                    
                    if (p2IconType == 1) {
                        p2ActiveIconId = shipFrame;
                        p2ActiveIconType = IconType::Ship;
                    } else if (p2IconType == 2) {
                        p2ActiveIconId = ballFrame;
                        p2ActiveIconType = IconType::Ball;
                    } else if (p2IconType == 3) {
                        p2ActiveIconId = ufoFrame;
                        p2ActiveIconType = IconType::Ufo;
                    } else if (p2IconType == 4) {
                        p2ActiveIconId = waveFrame;
                        p2ActiveIconType = IconType::Wave;
                    } else if (p2IconType == 5) {
                        p2ActiveIconId = robotFrame;
                        p2ActiveIconType = IconType::Robot;
                    } else if (p2IconType == 6) {
                        p2ActiveIconId = spiderFrame;
                        p2ActiveIconType = IconType::Spider;
                    } else if (p2IconType == 7) {
                        p2ActiveIconId = swingFrame;
                        p2ActiveIconType = IconType::Swing;
                    } else if (p2IconType == 8) {
                        p2ActiveIconId = shipFrame;
                        p2ActiveIconType = IconType::Jetpack;
                    }
                    
                    pc.playtestIcon2->updatePlayerFrame(p2ActiveIconId, p2ActiveIconType);
                    pc.playtestIcon2->setColors(col2, col1);
                    if (glowEnabled) {
                        pc.playtestIcon2->setGlowOutline(glowCol);
                    } else {
                        pc.playtestIcon2->disableGlowOutline();
                    }
                    
                    if (pc.playtestInnerCube2) {
                        if (p2ActiveIconType == IconType::Ship || p2ActiveIconType == IconType::Ufo || p2ActiveIconType == IconType::Jetpack) {
                            pc.playtestInnerCube2->setVisible(!isLocal);
                            pc.playtestInnerCube2->updatePlayerFrame(cubeFrame, IconType::Cube);
                            pc.playtestInnerCube2->setColors(col2, col1);
                            if (glowEnabled) {
                                pc.playtestInnerCube2->setGlowOutline(glowCol);
                            } else {
                                pc.playtestInnerCube2->disableGlowOutline();
                            }
                            cocos2d::CCPoint offset2 = cocos2d::CCPoint(0.f, 0.f);
                            if (p2ActiveIconType == IconType::Ship) {
                                offset2 = cocos2d::CCPoint(0.f, 10.f);
                            } else if (p2ActiveIconType == IconType::Ufo) {
                                offset2 = cocos2d::CCPoint(0.f, 3.0f);
                            } else if (p2ActiveIconType == IconType::Jetpack) {
                                offset2 = cocos2d::CCPoint(6.f, 0.0f);
                            }
                            pc.playtestInnerCube2->setPosition(pc.playtestIcon2->getContentSize() / 2 + offset2);
                        } else {
                            pc.playtestInnerCube2->setVisible(false);
                        }
                    }
                }
                
                pc.label->setAnchorPoint({0.5f, 0.f});
                pc.label->setPosition({newX, newY + 20.f});
            } else {
                bool isLocal = (player.id == localId);
                pc.drawNode->setVisible(!isLocal);
                pc.label->setVisible(!isLocal);
                if (pc.toolIndicator) {
                    pc.toolIndicator->setVisible(!isLocal);
                }
                if (pc.playtestIcon) {
                    pc.playtestIcon->setVisible(false);
                }
                if (pc.playtestIcon2) {
                    pc.playtestIcon2->setVisible(false);
                }
                pc.label->setAnchorPoint({0.f, 0.5f});
                pc.label->setPosition({newX + 15.f, newY - 15.f});
            }

            if (pc.toolIndicator && !isPlaytesting) {
                float labelWidth = pc.label->getContentSize().width * pc.label->getScaleX();
                float labelX = pc.label->getPositionX();
                float labelY = pc.label->getPositionY();
                pc.toolIndicator->setPosition({labelX + labelWidth + 6.f, labelY});
            }
        }

        m_selectionDrawNode->clear();
        auto& handler = RemoteActionHandler::get();
        auto const& lockedObjects = handler.getObjectLocks();
        
        for (auto const& [uuid, lockInfo] : lockedObjects) {
            auto* obj = handler.getObjectByUUID(uuid);
            if (!obj) continue;
            
            cocos2d::ccColor3B color3 = {255, 0, 0};
            auto* player = session.getPlayer(lockInfo.playerId);
            if (player) {
                color3 = getColorForIndex(player->colorIndex);
            }
            
            ccBlendFunc blend = {GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA};
            m_selectionDrawNode->setBlendFunc(blend);

            auto rect = obj->boundingBox();
            
            cocos2d::ccColor4F fill = {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 0.50f};
            cocos2d::ccColor4F border = {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 0.50f};
            
            cocos2d::CCPoint bl = {rect.getMinX(), rect.getMinY()};
            cocos2d::CCPoint tl = {rect.getMinX(), rect.getMaxY()};
            cocos2d::CCPoint tr = {rect.getMaxX(), rect.getMaxY()};
            cocos2d::CCPoint br = {rect.getMaxX(), rect.getMinY()};
            
            cocos2d::CCPoint verts[] = {bl, tl, tr, br};
            m_selectionDrawNode->drawPolygon(verts, 4, fill, 1.f, border);
        }

        for (auto it = m_cursors.begin(); it != m_cursors.end();) {
            if (activeIds.find(it->first) == activeIds.end()) {
                if (it->second.drawNode) it->second.drawNode->removeFromParent();
                if (it->second.label) it->second.label->removeFromParent();
                if (it->second.toolIndicator) it->second.toolIndicator->removeFromParent();
                if (it->second.playtestIcon) it->second.playtestIcon->removeFromParent();
                if (it->second.playtestIcon2) it->second.playtestIcon2->removeFromParent();
                if (it->second.chatBubble) it->second.chatBubble->removeFromParent();
                if (it->second.chatLabel) it->second.chatLabel->removeFromParent();
                if (it->second.lockIcon) it->second.lockIcon->removeFromParent();

                it = m_cursors.erase(it);
            } else {
                ++it;
            }
        }
    }



    void CursorNode::showChatBubble(int playerId, std::string const& message) {
        auto it = m_cursors.find(playerId);
        if (it == m_cursors.end()) return;
        
        auto& pc = it->second;
        if (!pc.chatBubble || !pc.chatLabel) return;

        pc.chatLabel->setString(message.c_str());
        pc.chatLabel->limitLabelWidth(150.f, 0.6f, 0.2f);
        
        auto size = pc.chatLabel->getScaledContentSize();
        pc.chatBubble->setContentSize({std::max(size.width + 20.f, 30.f), size.height + 15.f});

        pc.chatBubble->stopAllActions();
        pc.chatLabel->stopAllActions();

        pc.chatBubble->runAction(cocos2d::CCSequence::create(
            cocos2d::CCFadeTo::create(0.2f, 150),
            cocos2d::CCDelayTime::create(6.0f),
            cocos2d::CCFadeOut::create(0.5f),
            nullptr
        ));

        pc.chatLabel->runAction(cocos2d::CCSequence::create(
            cocos2d::CCFadeIn::create(0.2f),
            cocos2d::CCDelayTime::create(6.0f),
            cocos2d::CCFadeOut::create(0.5f),
            nullptr
        ));
    }

}
