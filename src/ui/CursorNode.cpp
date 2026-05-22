#include "CursorNode.hpp"
#include <Geode/Geode.hpp>
#include "../RemoteActionHandler.hpp"

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
                
                // Smooth interpolation (lerp) towards target
                auto currentPos = pc.drawNode->getPosition();
                float newX = currentPos.x + (pc.targetX - currentPos.x) * 15.f * dt;
                float newY = currentPos.y + (pc.targetY - currentPos.y) * 15.f * dt;
                
                pc.drawNode->setPosition({newX, newY});
                pc.label->setPosition({newX + 15.f, newY - 15.f});

                pc.label->setString(player.name.c_str());
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
                it->second.drawNode->removeFromParent();
                it->second.label->removeFromParent();
                it = m_cursors.erase(it);
            } else {
                ++it;
            }
        }
    }

} // namespace mpedit
