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
            ccColor3B{100, 200, 255},  // Blue
            ccColor3B{255, 120, 100},  // Red
            ccColor3B{100, 255, 150},  // Green
            ccColor3B{255, 200, 100},  // Yellow
            ccColor3B{200, 150, 255},  // Purple
            ccColor3B{255, 150, 200},  // Pink
        };
        return colors[index % colors.size()];
    }

    bool CursorNode::init() {
        if (!CCNode::init()) return false;
        
        m_selectionDrawNode = cocos2d::CCDrawNode::create();
        this->addChild(m_selectionDrawNode);

        this->scheduleUpdate();
        return true;
    }

    void CursorNode::update(float dt) {
        auto& session = SessionManager::get();
        
        if (!session.isInSession()) {
            this->removeAllChildren();
            m_cursors.clear();
            m_selectionDrawNode = nullptr; // Since removeAllChildren deleted it
            return;
        }
        
        if (!m_selectionDrawNode) {
            m_selectionDrawNode = cocos2d::CCDrawNode::create();
            this->addChild(m_selectionDrawNode);
        }

        auto& players = session.getPlayers();
        int localId = session.getLocalPlayerId();

        // Keep track of which players we updated this frame
        std::unordered_set<int> activeIds;

        for (auto& player : players) {
            // Don't draw our own cursor
            if (player.id == localId) continue;
            
            activeIds.insert(player.id);

            // Create cursor if it doesn't exist
            if (m_cursors.find(player.id) == m_cursors.end()) {
                PlayerCursor pc;
                pc.playtestIcon = nullptr;
                
                pc.drawNode = CCDrawNode::create();
                
                // SVG-based pointer shape
                cocos2d::CCPoint verts[] = {
                    {0.0f, 0.0f},
                    {0.0f, -17.8f},
                    {5.7f, -13.3f},
                    {12.9f, -13.1f}
                };
                
                auto color3 = getColorForIndex(player.colorIndex);
                cocos2d::ccColor4F color4 = {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 0.9f};
                cocos2d::ccColor4F outline = {0.f, 0.f, 0.f, 1.f}; // Black outline
                
                pc.drawNode->drawPolygon(verts, 4, color4, 1.0f, outline);
                this->addChild(pc.drawNode);

                // Name label
                pc.label = CCLabelBMFont::create(player.name.c_str(), "chatFont.fnt");
                pc.label->setScale(0.4f);
                pc.label->setColor(color3);
                pc.label->setOpacity(200);
                pc.label->setAnchorPoint({0.f, 0.5f});
                this->addChild(pc.label);

                // Initial position
                pc.targetX = player.cursorX;
                pc.targetY = player.cursorY;
                pc.drawNode->setPosition({pc.targetX, pc.targetY});
                pc.label->setPosition({pc.targetX + 15.f, pc.targetY - 15.f});

                m_cursors[player.id] = pc;
            } else {
                auto& pc = m_cursors[player.id];
                pc.targetX = player.cursorX;
                pc.targetY = player.cursorY;
            }

            auto& pc = m_cursors[player.id];
            
            // Smooth interpolation (lerp) towards target
            auto currentPos = pc.drawNode->getPosition();
            float newX = currentPos.x + (pc.targetX - currentPos.x) * 15.f * dt;
            float newY = currentPos.y + (pc.targetY - currentPos.y) * 15.f * dt;
            
            pc.drawNode->setPosition({newX, newY});
            pc.label->setString(player.name.c_str());

            // Rebuild toolIndicator if status changed
            if (player.status != pc.lastStatus) {
                pc.lastStatus = player.status;
                if (pc.toolIndicator) {
                    pc.toolIndicator->removeFromParent();
                    pc.toolIndicator = nullptr;
                }

                if (!player.status.empty() && player.status.rfind("pt:", 0) != 0) {
                    // Parse "mode:swipe:objectId"
                    int mode = 0;
                    int swipe = 0;
                    int objectId = 0;
                    std::stringstream ss(player.status);
                    std::string modeStr, swipeStr, objStr;
                    if (std::getline(ss, modeStr, ':') && std::getline(ss, swipeStr, ':') && std::getline(ss, objStr, ':')) {
                        try {
                            mode = std::stoi(modeStr);
                            swipe = std::stoi(swipeStr);
                            objectId = std::stoi(objStr);
                        } catch (...) {}
                    }

                    ccColor4F bgColor;
                    std::string modeText;
                    bool hasIndicator = true;
                    if (mode == 2) { // Build
                        bgColor = {0.12f, 0.56f, 1.0f, 0.9f}; // Dodger Blue
                        modeText = "BUILD";
                    } else if (mode == 1) { // Delete
                        bgColor = {1.0f, 0.25f, 0.25f, 0.9f}; // Red
                        modeText = "DELETE";
                    } else if (mode == 3) { // Edit
                        bgColor = {1.0f, 0.6f, 0.07f, 0.9f}; // Orange
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

            // Parse playtesting information
            bool isPlaytesting = false;
            int iconType = 0;
            float rotation = 0.f;
            bool isUpsideDown = false;
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
                    try {
                        iconType = std::stoi(tokens[2]);
                        rotation = std::stof(tokens[3]);
                        isUpsideDown = (tokens[4] == "1");
                        cubeFrame = std::stoi(tokens[5]);
                        shipFrame = std::stoi(tokens[6]);
                        ballFrame = std::stoi(tokens[7]);
                        ufoFrame = std::stoi(tokens[8]);
                        waveFrame = std::stoi(tokens[9]);
                        robotFrame = std::stoi(tokens[10]);
                        spiderFrame = std::stoi(tokens[11]);
                        swingFrame = std::stoi(tokens[12]);
                        
                        col1.r = std::stoi(tokens[13]);
                        col1.g = std::stoi(tokens[14]);
                        col1.b = std::stoi(tokens[15]);
                        
                        col2.r = std::stoi(tokens[16]);
                        col2.g = std::stoi(tokens[17]);
                        col2.b = std::stoi(tokens[18]);
                        
                        glowEnabled = (tokens[19] == "1");
                        
                        glowCol.r = std::stoi(tokens[20]);
                        glowCol.g = std::stoi(tokens[21]);
                        glowCol.b = std::stoi(tokens[22]);
                    } catch (...) {}
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
                }
                
                pc.playtestIcon->setVisible(true);
                pc.playtestIcon->setPosition({newX, newY});
                pc.playtestIcon->setRotation(rotation);
                pc.playtestIcon->setScaleY(isUpsideDown ? -1.f : 1.f);
                
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
                    activeIconId = shipFrame; // Jetpack uses ship frame
                    activeIconType = IconType::Jetpack;
                }
                
                pc.playtestIcon->updatePlayerFrame(activeIconId, activeIconType);
                pc.playtestIcon->setColors(col1, col2);
                if (glowEnabled) {
                    pc.playtestIcon->setGlowOutline(glowCol);
                } else {
                    pc.playtestIcon->disableGlowOutline();
                }
                
                pc.label->setAnchorPoint({0.5f, 0.f});
                pc.label->setPosition({newX, newY + 20.f});
            } else {
                pc.drawNode->setVisible(true);
                if (pc.toolIndicator) {
                    pc.toolIndicator->setVisible(true);
                }
                if (pc.playtestIcon) {
                    pc.playtestIcon->setVisible(false);
                }
                pc.label->setAnchorPoint({0.f, 0.5f});
                pc.label->setPosition({newX + 15.f, newY - 15.f});
            }

            // Update toolIndicator position
            if (pc.toolIndicator && !isPlaytesting) {
                float labelWidth = pc.label->getContentSize().width * pc.label->getScaleX();
                float labelX = pc.label->getPositionX();
                float labelY = pc.label->getPositionY();
                pc.toolIndicator->setPosition({labelX + labelWidth + 6.f, labelY});
            }
        }

        // Draw visual indicators for remote-locked objects
        m_selectionDrawNode->clear();
        auto& handler = RemoteActionHandler::get();
        auto const& lockedObjects = handler.getObjectLocks();
        
        for (auto const& [uuid, lockInfo] : lockedObjects) {
            auto* obj = handler.getObjectByUUID(uuid);
            if (!obj) continue;
            
            // Get locking player's color if available
            cocos2d::ccColor3B color3 = {255, 0, 0}; // Default red
            auto* player = session.getPlayer(lockInfo.playerId);
            if (player) {
                color3 = getColorForIndex(player->colorIndex);
            }
            
            // Draw a bounding box
            auto rect = obj->boundingBox();
            cocos2d::ccColor4F fill = {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 0.2f};
            cocos2d::ccColor4F border = {color3.r / 255.f, color3.g / 255.f, color3.b / 255.f, 0.8f};
            
            cocos2d::CCPoint bl = {rect.getMinX(), rect.getMinY()};
            cocos2d::CCPoint tl = {rect.getMinX(), rect.getMaxY()};
            cocos2d::CCPoint tr = {rect.getMaxX(), rect.getMaxY()};
            cocos2d::CCPoint br = {rect.getMaxX(), rect.getMinY()};
            
            cocos2d::CCPoint verts[] = {bl, tl, tr, br};
            m_selectionDrawNode->drawPolygon(verts, 4, fill, 1.f, border);
        }

        // Remove disconnected players
        for (auto it = m_cursors.begin(); it != m_cursors.end();) {
            if (activeIds.find(it->first) == activeIds.end()) {
                if (it->second.drawNode) it->second.drawNode->removeFromParent();
                if (it->second.label) it->second.label->removeFromParent();
                if (it->second.toolIndicator) it->second.toolIndicator->removeFromParent();
                if (it->second.playtestIcon) it->second.playtestIcon->removeFromParent();
                it = m_cursors.erase(it);
            } else {
                ++it;
            }
        }
    }

} // namespace mpedit
