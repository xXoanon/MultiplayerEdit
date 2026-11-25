#include "RevertManager.hpp"
#include "SessionManager.hpp"
#include "RemoteActionHandler.hpp"
#include "P2PManager.hpp"
#include "BinaryProtocol.hpp"
#include <Geode/Geode.hpp>
#include <Geode/binding/TeleportPortalObject.hpp>
#include <fmt/format.h>
#include <algorithm>

using namespace geode::prelude;

namespace mpedit {

    RevertManager::RevertManager() {
        clear();
    }

    RevertManager& RevertManager::get() {
        static RevertManager instance;
        return instance;
    }

    std::string RevertManager::resolvePlayerName(int playerId) {
        if (playerId == SessionManager::get().getLocalPlayerId()) {
            return SessionManager::get().getLocalPlayerName();
        }
        if (auto* p = SessionManager::get().getPlayer(playerId)) {
            return p->name;
        }
        for (auto const& dp : SessionManager::get().getDisconnectedPlayers()) {
            if (dp.player.id == playerId) {
                return dp.player.name;
            }
        }
        return fmt::format("Player_{}", playerId);
    }

    void RevertManager::ensureBranch() {
        if (m_branches.empty()) {
            TimelineBranch mainBranch;
            mainBranch.id = 1;
            mainBranch.name = "Branch 1";
            mainBranch.createdAt = std::chrono::steady_clock::now();
            mainBranch.forkTime = mainBranch.createdAt;
            m_branches.push_back(std::move(mainBranch));
            m_activeBranchIndex = 0;
        }
        if (m_activeBranchIndex >= m_branches.size()) {
            m_activeBranchIndex = m_branches.size() - 1;
        }
    }

    void RevertManager::prepareNewAction() {
        ensureBranch();
        auto& active = m_branches[m_activeBranchIndex];
        if (active.cursor < active.actionLog.size()) {
            TimelineBranch newBranch;
            int nextId = 1;
            for (auto const& b : m_branches) {
                if (b.id >= nextId) nextId = b.id + 1;
            }
            newBranch.id = nextId;
            newBranch.name = fmt::format("Branch {}", newBranch.id);
            newBranch.createdAt = std::chrono::steady_clock::now();
            newBranch.forkTime = (active.cursor > 0) ? active.actionLog[active.cursor - 1].timestamp : m_branches[0].createdAt;

            int parentId = active.id;
            while (true) {
                size_t pIdx = getBranchIndexById(parentId);
                if (!m_branches[pIdx].isForked) {
                    parentId = m_branches[pIdx].id;
                    break;
                }
                if (newBranch.forkTime > m_branches[pIdx].forkTime) {
                    parentId = m_branches[pIdx].id;
                    break;
                }
                parentId = m_branches[pIdx].forkedFromBranchId;
            }
            newBranch.forkedFromBranchId = parentId;
            newBranch.isForked = true;
            newBranch.actionLog.assign(active.actionLog.begin(), active.actionLog.begin() + active.cursor);
            newBranch.cursor = newBranch.actionLog.size();

            m_branches.push_back(std::move(newBranch));
            m_activeBranchIndex = m_branches.size() - 1;
        }
    }

    void RevertManager::captureBaseline() {
        auto* editor = LevelEditorLayer::get();
        if (!editor) return;

        if (editor->m_levelSettings) {
            ActionSerializer::LevelSettingsData settings;
            settings.saveString = getLevelSettingsSaveString(editor);
            if (editor->m_level) {
                settings.audioTrack = editor->m_level->m_audioTrack;
                settings.songID = editor->m_level->m_songID;
                settings.levelLength = editor->m_level->m_levelLength;
                settings.levelName = editor->m_level->m_levelName;
            }
            if (!m_baselineSettings.has_value()) {
                m_baselineSettings = settings;
            }
            if (!m_currentSettings.has_value()) {
                m_currentSettings = settings;
            }
        }

        if (editor->m_levelSettings && editor->m_levelSettings->m_effectManager) {
            auto* effectMgr = editor->m_levelSettings->m_effectManager;
            for (size_t i = 0; i < effectMgr->m_colorActionVector.size(); i++) {
                if (auto* action = effectMgr->m_colorActionVector[i]) {
                    int channelID = action->m_colorID;
                    if (channelID == 0) channelID = static_cast<int>(i);
                    ActionSerializer::ColorChannelData data;
                    data.channelID = channelID;
                    data.color = action->m_color;
                    data.fromColor = action->m_fromColor;
                    data.toColor = action->m_toColor;
                    data.duration = action->m_duration;
                    data.blending = action->m_blending;
                    data.playerColor = action->m_playerColor;
                    data.fromOpacity = action->m_fromOpacity;
                    data.toOpacity = action->m_toOpacity;
                    data.copyHSV = action->m_copyHSV;
                    data.copyID = action->m_copyID;
                    data.copyOpacity = action->m_copyOpacity;
                    data.copyColorCalculated = action->m_copyColorCalculated;
                    data.colorID = action->m_colorID;
                    data.copyColorLoop = action->m_copyColorLoop;
                    data.legacyHSV = action->m_legacyHSV;

                    if (m_baselineColors.find(channelID) == m_baselineColors.end()) {
                        m_baselineColors[channelID] = data;
                    }
                    if (m_currentColors.find(channelID) == m_currentColors.end()) {
                        m_currentColors[channelID] = data;
                    }
                }
            }
        }
    }

    void RevertManager::clear() {
        m_lastTouchedBy.clear();
        m_createdObjects.clear();
        m_baselineStates.clear();
        m_deletedObjects.clear();
        m_touchTimestamps.clear();
        m_baselineColors.clear();
        m_currentColors.clear();
        m_lastTouchedColor.clear();
        m_colorTimestamps.clear();
        m_baselineSettings.reset();
        m_currentSettings.reset();
        m_lastTouchedSettings.clear();
        m_branches.clear();
        m_activeBranchIndex = 0;
        m_isApplyingRollback = false;

        TimelineBranch mainBranch;
        mainBranch.id = 1;
        mainBranch.name = "Branch 1";
        mainBranch.createdAt = std::chrono::steady_clock::now();
        mainBranch.forkTime = mainBranch.createdAt;
        m_branches.push_back(std::move(mainBranch));

        captureBaseline();
    }

    void RevertManager::onObjectsPlaced(int playerId, std::vector<ActionSerializer::ObjectData> const& objects) {
        if (m_isApplyingRollback) return;
        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        for (auto const& obj : objects) {
            if (obj.uuid.empty()) continue;
            m_lastTouchedBy[obj.uuid] = pName;
            m_createdObjects[obj.uuid] = pName;
            m_touchTimestamps[obj.uuid] = now;
            m_deletedObjects.erase(obj.uuid);

            ActionRecord rec;
            rec.type = ActionRecord::Type::Place;
            rec.playerName = pName;
            rec.playerId = playerId;
            rec.timestamp = now;
            rec.uuid = obj.uuid;
            rec.postState = obj;
            branch.actionLog.push_back(rec);
        }
        branch.cursor = branch.actionLog.size();
    }

    void RevertManager::onObjectsDeleted(int playerId, std::vector<std::string> const& uuids) {
        if (m_isApplyingRollback) return;
        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        auto& handler = RemoteActionHandler::get();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        for (auto const& uuid : uuids) {
            if (uuid.empty()) continue;
            auto* obj = handler.getObjectByUUID(uuid);
            if (!obj) continue;

            ActionSerializer::ObjectData data = ActionSerializer::extractObjectData(obj, uuid);

            DeletedEntry entry;
            entry.data = data;
            entry.deletedBy = pName;
            entry.timestamp = now;
            m_deletedObjects[uuid] = entry;

            m_lastTouchedBy[uuid] = pName;
            m_touchTimestamps[uuid] = now;

            ActionRecord rec;
            rec.type = ActionRecord::Type::Delete;
            rec.playerName = pName;
            rec.playerId = playerId;
            rec.timestamp = now;
            rec.uuid = uuid;
            rec.preState = data;
            branch.actionLog.push_back(rec);

            if (auto* tpPortal = typeinfo_cast<TeleportPortalObject*>(obj)) {
                if (!tpPortal->m_isYellowPortal && tpPortal->m_orangePortal) {
                    auto orangeUuid = handler.getUUIDForObject(tpPortal->m_orangePortal);
                    if (!orangeUuid.empty()) {
                        auto orangeData = ActionSerializer::extractObjectData(tpPortal->m_orangePortal, orangeUuid);

                        DeletedEntry orangeEntry;
                        orangeEntry.data = orangeData;
                        orangeEntry.deletedBy = pName;
                        orangeEntry.timestamp = now;
                        m_deletedObjects[orangeUuid] = orangeEntry;

                        m_lastTouchedBy[orangeUuid] = pName;
                        m_touchTimestamps[orangeUuid] = now;

                        ActionRecord orangeRec;
                        orangeRec.type = ActionRecord::Type::Delete;
                        orangeRec.playerName = pName;
                        orangeRec.playerId = playerId;
                        orangeRec.timestamp = now;
                        orangeRec.uuid = orangeUuid;
                        orangeRec.preState = orangeData;
                        branch.actionLog.push_back(orangeRec);
                    }
                }
            }
        }
        branch.cursor = branch.actionLog.size();
    }

    void RevertManager::onObjectsMoved(int playerId, std::vector<ActionSerializer::MoveData> const& moves) {
        if (m_isApplyingRollback) return;
        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        auto& handler = RemoteActionHandler::get();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        for (auto const& move : moves) {
            if (move.uuid.empty()) continue;
            auto* obj = handler.getObjectByUUID(move.uuid);
            if (!obj) continue;

            auto it = m_lastTouchedBy.find(move.uuid);
            if (it == m_lastTouchedBy.end() || it->second != pName) {
                if (m_baselineStates.find(move.uuid) == m_baselineStates.end()) {
                    m_baselineStates[move.uuid] = ActionSerializer::extractObjectData(obj, move.uuid);
                }
            }

            m_lastTouchedBy[move.uuid] = pName;
            m_touchTimestamps[move.uuid] = now;

            ActionRecord rec;
            rec.type = ActionRecord::Type::Modify;
            rec.playerName = pName;
            rec.playerId = playerId;
            rec.timestamp = now;
            rec.uuid = move.uuid;

            auto curData = ActionSerializer::extractObjectData(obj, move.uuid);
            if (playerId == SessionManager::get().getLocalPlayerId()) {
                rec.postState = curData;
                rec.preState = curData;
                rec.preState.x -= move.dx;
                rec.preState.y -= move.dy;
            } else {
                rec.preState = curData;
                rec.postState = curData;
                rec.postState.x += move.dx;
                rec.postState.y += move.dy;
            }
            branch.actionLog.push_back(rec);
        }
        branch.cursor = branch.actionLog.size();
    }

    void RevertManager::onObjectsTransformed(int playerId, std::vector<ActionSerializer::TransformData> const& transforms) {
        if (m_isApplyingRollback) return;
        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        auto& handler = RemoteActionHandler::get();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        for (auto const& t : transforms) {
            if (t.uuid.empty()) continue;
            auto* obj = handler.getObjectByUUID(t.uuid);
            if (!obj) continue;

            auto it = m_lastTouchedBy.find(t.uuid);
            if (it == m_lastTouchedBy.end() || it->second != pName) {
                if (m_baselineStates.find(t.uuid) == m_baselineStates.end()) {
                    m_baselineStates[t.uuid] = ActionSerializer::extractObjectData(obj, t.uuid);
                }
            }

            m_lastTouchedBy[t.uuid] = pName;
            m_touchTimestamps[t.uuid] = now;

            ActionRecord rec;
            rec.type = ActionRecord::Type::Modify;
            rec.playerName = pName;
            rec.playerId = playerId;
            rec.timestamp = now;
            rec.uuid = t.uuid;

            auto curData = ActionSerializer::extractObjectData(obj, t.uuid);
            if (playerId == SessionManager::get().getLocalPlayerId()) {
                rec.postState = curData;
                rec.preState = curData;
                if (m_baselineStates.find(t.uuid) != m_baselineStates.end()) {
                    rec.preState = m_baselineStates[t.uuid];
                }
            } else {
                rec.preState = curData;
                rec.postState = curData;
                rec.postState.rotation = t.rotation;
                rec.postState.scaleX = t.scaleX;
                rec.postState.scaleY = t.scaleY;
                rec.postState.flipX = t.flipX;
                rec.postState.flipY = t.flipY;
            }
            branch.actionLog.push_back(rec);
        }
        branch.cursor = branch.actionLog.size();
    }

    void RevertManager::onObjectsReconciled(int playerId, std::vector<ActionSerializer::ReconcileData> const& reconciles) {
        if (m_isApplyingRollback) return;
        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        auto& handler = RemoteActionHandler::get();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        for (auto const& r : reconciles) {
            if (r.uuid.empty()) continue;
            auto* obj = handler.getObjectByUUID(r.uuid);
            if (!obj) continue;

            auto it = m_lastTouchedBy.find(r.uuid);
            if (it == m_lastTouchedBy.end() || it->second != pName) {
                if (m_baselineStates.find(r.uuid) == m_baselineStates.end()) {
                    m_baselineStates[r.uuid] = ActionSerializer::extractObjectData(obj, r.uuid);
                }
            }

            m_lastTouchedBy[r.uuid] = pName;
            m_touchTimestamps[r.uuid] = now;

            ActionRecord rec;
            rec.type = ActionRecord::Type::Modify;
            rec.playerName = pName;
            rec.playerId = playerId;
            rec.timestamp = now;
            rec.uuid = r.uuid;
            rec.preState = ActionSerializer::extractObjectData(obj, r.uuid);
            rec.postState = rec.preState;
            rec.postState.x = r.x;
            rec.postState.y = r.y;
            rec.postState.rotation = r.rotation;
            rec.postState.scaleX = r.scaleX;
            rec.postState.scaleY = r.scaleY;
            rec.postState.flipX = r.flipX;
            rec.postState.flipY = r.flipY;
            branch.actionLog.push_back(rec);
        }
        branch.cursor = branch.actionLog.size();
    }

    void RevertManager::onObjectsUpdated(int playerId, std::vector<ActionSerializer::ObjectData> const& objects) {
        if (m_isApplyingRollback) return;
        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        auto& handler = RemoteActionHandler::get();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        for (auto const& data : objects) {
            if (data.uuid.empty()) continue;
            auto* obj = handler.getObjectByUUID(data.uuid);
            if (!obj) continue;

            auto it = m_lastTouchedBy.find(data.uuid);
            if (it == m_lastTouchedBy.end() || it->second != pName) {
                if (m_baselineStates.find(data.uuid) == m_baselineStates.end()) {
                    m_baselineStates[data.uuid] = ActionSerializer::extractObjectData(obj, data.uuid);
                }
            }

            m_lastTouchedBy[data.uuid] = pName;
            m_touchTimestamps[data.uuid] = now;

            ActionRecord rec;
            rec.type = ActionRecord::Type::Modify;
            rec.playerName = pName;
            rec.playerId = playerId;
            rec.timestamp = now;
            rec.uuid = data.uuid;
            rec.preState = ActionSerializer::extractObjectData(obj, data.uuid);
            rec.postState = data;
            branch.actionLog.push_back(rec);
        }
        branch.cursor = branch.actionLog.size();
    }

    void RevertManager::onColorChannelUpdated(int playerId, ActionSerializer::ColorChannelData const& data) {
        if (m_isApplyingRollback) return;
        if (m_currentColors.empty()) {
            captureBaseline();
        }

        auto it = m_currentColors.find(data.channelID);
        if (it != m_currentColors.end() && it->second == data) {
            return;
        }

        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        ActionSerializer::ColorChannelData prevColor = (it != m_currentColors.end()) ? it->second : data;
        if (m_baselineColors.find(data.channelID) == m_baselineColors.end()) {
            m_baselineColors[data.channelID] = prevColor;
        }

        m_lastTouchedColor[data.channelID] = pName;
        m_colorTimestamps[data.channelID] = now;
        m_currentColors[data.channelID] = data;

        ActionRecord rec;
        rec.type = ActionRecord::Type::Color;
        rec.playerName = pName;
        rec.playerId = playerId;
        rec.timestamp = now;
        rec.preColor = prevColor;
        rec.postColor = data;
        rec.colorChannelId = data.channelID;
        branch.actionLog.push_back(rec);
        branch.cursor = branch.actionLog.size();
    }

    void RevertManager::onSettingsUpdated(int playerId, ActionSerializer::LevelSettingsData const& settings) {
        if (m_isApplyingRollback) return;
        if (!m_currentSettings.has_value()) {
            captureBaseline();
        }

        if (m_currentSettings.has_value() && m_currentSettings.value() == settings) {
            return;
        }

        prepareNewAction();
        auto now = std::chrono::steady_clock::now();
        std::string pName = resolvePlayerName(playerId);
        auto& branch = m_branches[m_activeBranchIndex];

        ActionSerializer::LevelSettingsData prevSettings = m_currentSettings.value_or(settings);
        if (!m_baselineSettings.has_value()) {
            m_baselineSettings = prevSettings;
        }

        m_lastTouchedSettings = pName;
        m_settingsTimestamp = now;
        m_currentSettings = settings;

        ActionRecord rec;
        rec.type = ActionRecord::Type::Settings;
        rec.playerName = pName;
        rec.playerId = playerId;
        rec.timestamp = now;
        rec.preSettings = prevSettings;
        rec.postSettings = settings;
        branch.actionLog.push_back(rec);
        branch.cursor = branch.actionLog.size();
    }

    size_t RevertManager::getBranchCount() const {
        return m_branches.empty() ? 1 : m_branches.size();
    }

    RevertManager::TimelineBranchInfo RevertManager::getBranchInfo(size_t index) const {
        TimelineBranchInfo info;
        if (index >= m_branches.size()) return info;
        auto const& b = m_branches[index];
        info.id = b.id;
        info.name = b.name;
        info.createdAt = b.createdAt;
        info.forkTime = b.forkTime;
        info.forkedFromBranchId = b.forkedFromBranchId;
        info.parentIndex = getBranchIndexById(b.forkedFromBranchId);
        info.actionCount = b.actionLog.size();
        info.cursor = b.cursor;
        info.isForked = b.isForked;
        return info;
    }

    size_t RevertManager::getBranchIndexById(int id) const {
        for (size_t i = 0; i < m_branches.size(); ++i) {
            if (m_branches[i].id == id) return i;
        }
        return 0;
    }

    size_t RevertManager::getActiveBranchIndex() const {
        return m_activeBranchIndex;
    }

    bool RevertManager::deleteBranch(size_t index) {
        if (index >= m_branches.size() || index == m_activeBranchIndex || m_branches.size() <= 1) {
            return false;
        }

        int delId = m_branches[index].id;
        int parentId = m_branches[index].forkedFromBranchId;

        for (auto& b : m_branches) {
            if (b.forkedFromBranchId == delId) {
                b.forkedFromBranchId = parentId;
            }
        }

        m_branches.erase(m_branches.begin() + index);

        if (index < m_activeBranchIndex) {
            m_activeBranchIndex--;
        }

        return true;
    }

    std::pair<std::chrono::steady_clock::time_point, std::chrono::steady_clock::time_point> RevertManager::getBranchTimeRange(size_t branchIndex) const {
        if (branchIndex >= m_branches.size() || m_branches[branchIndex].actionLog.empty()) {
            auto now = std::chrono::steady_clock::now();
            return {now, now};
        }
        auto const& b = m_branches[branchIndex];
        if (b.isForked) {
            auto e = b.actionLog.back().timestamp;
            auto s = b.forkTime;
            if (s > e) e = s;
            return {s, e};
        }
        auto s = b.createdAt;
        if (s >= b.actionLog.front().timestamp) {
            s = b.actionLog.front().timestamp - std::chrono::milliseconds(500);
        }
        return {s, b.actionLog.back().timestamp};
    }

    std::pair<std::chrono::steady_clock::time_point, std::chrono::steady_clock::time_point> RevertManager::getTimelineTimeRange() const {
        return getBranchTimeRange(m_activeBranchIndex);
    }

    std::chrono::steady_clock::time_point RevertManager::getBranchCurrentTime(size_t branchIndex) const {
        if (branchIndex >= m_branches.size() || m_branches[branchIndex].actionLog.empty()) {
            return std::chrono::steady_clock::now();
        }
        auto const& b = m_branches[branchIndex];
        if (b.cursor == 0) return b.actionLog.front().timestamp;
        if (b.cursor >= b.actionLog.size()) return b.actionLog.back().timestamp;
        return b.actionLog[b.cursor - 1].timestamp;
    }

    std::chrono::steady_clock::time_point RevertManager::getCurrentTimelineTime() const {
        return getBranchCurrentTime(m_activeBranchIndex);
    }

    std::pair<std::chrono::steady_clock::time_point, std::chrono::steady_clock::time_point> RevertManager::getPlayerTimeRange(std::string const& playerName) const {
        std::optional<std::chrono::steady_clock::time_point> firstTime;
        std::optional<std::chrono::steady_clock::time_point> lastTime;

        if (!m_branches.empty()) {
            for (auto const& b : m_branches) {
                for (auto const& rec : b.actionLog) {
                    if (rec.playerName == playerName) {
                        if (!firstTime.has_value() || rec.timestamp < firstTime.value()) firstTime = rec.timestamp;
                        if (!lastTime.has_value() || rec.timestamp > lastTime.value()) lastTime = rec.timestamp;
                    }
                }
            }
        }

        if (!firstTime.has_value()) {
            auto now = std::chrono::steady_clock::now();
            return {now, now};
        }
        return {firstTime.value(), lastTime.value()};
    }

    bool RevertManager::isRolledBack() const {
        if (m_branches.empty()) return false;
        auto const& b = m_branches[m_activeBranchIndex];
        return b.cursor < b.actionLog.size();
    }

    RevertPreview RevertManager::getRevertPreview(std::string const& playerName, std::optional<std::chrono::seconds> timeWindow) {
        RevertPreview preview;
        auto now = std::chrono::steady_clock::now();

        auto inWindow = [&](std::chrono::steady_clock::time_point tp) {
            if (!timeWindow.has_value()) return true;
            return (now - tp) <= timeWindow.value();
        };

        for (auto const& [uuid, owner] : m_lastTouchedBy) {
            if (owner != playerName) continue;
            auto tIt = m_touchTimestamps.find(uuid);
            if (tIt != m_touchTimestamps.end() && !inWindow(tIt->second)) continue;

            if (m_deletedObjects.find(uuid) != m_deletedObjects.end()) {
                preview.deletedCount++;
            } else if (m_createdObjects.find(uuid) != m_createdObjects.end() && m_createdObjects.at(uuid) == playerName) {
                preview.placedCount++;
            } else if (m_baselineStates.find(uuid) != m_baselineStates.end()) {
                preview.modifiedCount++;
            }
        }

        for (auto const& [ch, owner] : m_lastTouchedColor) {
            if (owner != playerName) continue;
            auto tIt = m_colorTimestamps.find(ch);
            if (tIt != m_colorTimestamps.end() && !inWindow(tIt->second)) continue;
            preview.colorCount++;
        }

        if (m_lastTouchedSettings == playerName) {
            if (inWindow(m_settingsTimestamp)) {
                preview.settingsChanged = true;
            }
        }

        return preview;
    }

    RevertPreview RevertManager::getRollbackPreview(std::chrono::seconds timeWindow) {
        return getRollbackPreviewAtTime(std::chrono::steady_clock::now() - timeWindow);
    }

    RevertPreview RevertManager::getRollbackPreviewAtTime(std::chrono::steady_clock::time_point targetTime) {
        return getRollbackPreviewAtTimeInBranch(m_activeBranchIndex, targetTime);
    }

    RevertPreview RevertManager::getRollbackPreviewAtTimeInBranch(size_t branchIndex, std::chrono::steady_clock::time_point targetTime) {
        RevertPreview preview;
        if (branchIndex >= m_branches.size()) return preview;
        auto const& targetBranch = m_branches[branchIndex];
        if (targetBranch.actionLog.empty()) return preview;

        size_t targetIndex = 0;
        while (targetIndex < targetBranch.actionLog.size() && targetBranch.actionLog[targetIndex].timestamp <= targetTime) {
            targetIndex++;
        }

        std::unordered_set<std::string> toDelete;
        std::unordered_map<std::string, ActionSerializer::ObjectData> toRestore;
        std::unordered_map<std::string, ActionSerializer::ObjectData> toUpdate;
        std::unordered_set<int> touchedColors;
        bool touchedSettings = false;

        if (branchIndex == m_activeBranchIndex) {
            auto const& active = m_branches[m_activeBranchIndex];
            if (targetIndex < active.cursor) {
                for (size_t i = active.cursor; i > targetIndex; --i) {
                    auto const& rec = active.actionLog[i - 1];
                    switch (rec.type) {
                        case ActionRecord::Type::Place:
                            if (!rec.uuid.empty()) {
                                toDelete.insert(rec.uuid);
                                toRestore.erase(rec.uuid);
                                toUpdate.erase(rec.uuid);
                            }
                            break;
                        case ActionRecord::Type::Delete:
                            if (!rec.uuid.empty()) {
                                toRestore[rec.uuid] = rec.preState;
                                toDelete.erase(rec.uuid);
                                toUpdate.erase(rec.uuid);
                            }
                            break;
                        case ActionRecord::Type::Modify:
                            if (!rec.uuid.empty()) {
                                if (toRestore.find(rec.uuid) != toRestore.end()) {
                                    toRestore[rec.uuid] = rec.preState;
                                } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                                    toUpdate[rec.uuid] = rec.preState;
                                }
                            }
                            break;
                        case ActionRecord::Type::Color:
                            touchedColors.insert(rec.colorChannelId);
                            break;
                        case ActionRecord::Type::Settings:
                            touchedSettings = true;
                            break;
                    }
                }
            } else if (targetIndex > active.cursor) {
                for (size_t i = active.cursor; i < targetIndex; ++i) {
                    auto const& rec = active.actionLog[i];
                    switch (rec.type) {
                        case ActionRecord::Type::Place:
                            if (!rec.uuid.empty()) {
                                toRestore[rec.uuid] = rec.postState;
                                toDelete.erase(rec.uuid);
                                toUpdate.erase(rec.uuid);
                            }
                            break;
                        case ActionRecord::Type::Delete:
                            if (!rec.uuid.empty()) {
                                toDelete.insert(rec.uuid);
                                toRestore.erase(rec.uuid);
                                toUpdate.erase(rec.uuid);
                            }
                            break;
                        case ActionRecord::Type::Modify:
                            if (!rec.uuid.empty()) {
                                if (toRestore.find(rec.uuid) != toRestore.end()) {
                                    toRestore[rec.uuid] = rec.postState;
                                } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                                    toUpdate[rec.uuid] = rec.postState;
                                }
                            }
                            break;
                        case ActionRecord::Type::Color:
                            touchedColors.insert(rec.colorChannelId);
                            break;
                        case ActionRecord::Type::Settings:
                            touchedSettings = true;
                            break;
                    }
                }
            }
        } else {
            auto const& active = m_branches[m_activeBranchIndex];
            size_t common = 0;
            while (common < active.actionLog.size() &&
                   common < targetBranch.actionLog.size() &&
                   common < active.cursor &&
                   common < targetIndex &&
                   active.actionLog[common].uuid == targetBranch.actionLog[common].uuid &&
                   active.actionLog[common].timestamp == targetBranch.actionLog[common].timestamp) {
                common++;
            }

            for (size_t i = active.cursor; i > common; --i) {
                auto const& rec = active.actionLog[i - 1];
                switch (rec.type) {
                    case ActionRecord::Type::Place:
                        if (!rec.uuid.empty()) {
                            toDelete.insert(rec.uuid);
                            toRestore.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Delete:
                        if (!rec.uuid.empty()) {
                            toRestore[rec.uuid] = rec.preState;
                            toDelete.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Modify:
                        if (!rec.uuid.empty()) {
                            if (toRestore.find(rec.uuid) != toRestore.end()) {
                                toRestore[rec.uuid] = rec.preState;
                            } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                                toUpdate[rec.uuid] = rec.preState;
                            }
                        }
                        break;
                    case ActionRecord::Type::Color:
                        touchedColors.insert(rec.colorChannelId);
                        break;
                    case ActionRecord::Type::Settings:
                        touchedSettings = true;
                        break;
                }
            }

            for (size_t i = common; i < targetIndex; ++i) {
                auto const& rec = targetBranch.actionLog[i];
                switch (rec.type) {
                    case ActionRecord::Type::Place:
                        if (!rec.uuid.empty()) {
                            toRestore[rec.uuid] = rec.postState;
                            toDelete.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Delete:
                        if (!rec.uuid.empty()) {
                            toDelete.insert(rec.uuid);
                            toRestore.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Modify:
                        if (!rec.uuid.empty()) {
                            if (toRestore.find(rec.uuid) != toRestore.end()) {
                                toRestore[rec.uuid] = rec.postState;
                            } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                                toUpdate[rec.uuid] = rec.postState;
                            }
                        }
                        break;
                    case ActionRecord::Type::Color:
                        touchedColors.insert(rec.colorChannelId);
                        break;
                    case ActionRecord::Type::Settings:
                        touchedSettings = true;
                        break;
                }
            }
        }

        preview.deletedCount = static_cast<int>(toDelete.size());
        preview.placedCount = static_cast<int>(toRestore.size());
        preview.modifiedCount = static_cast<int>(toUpdate.size());
        preview.colorCount = static_cast<int>(touchedColors.size());
        preview.settingsChanged = touchedSettings;
        return preview;
    }

    bool RevertManager::revertPlayer(std::string const& playerName, std::optional<std::chrono::seconds> timeWindow) {
        auto* editor = LevelEditorLayer::get();
        if (!editor) return false;

        auto now = std::chrono::steady_clock::now();
        auto inWindow = [&](std::chrono::steady_clock::time_point tp) {
            if (!timeWindow.has_value()) return true;
            return (now - tp) <= timeWindow.value();
        };

        std::vector<std::string> toDelete;
        std::vector<ActionSerializer::ObjectData> toRestore;
        std::vector<ActionSerializer::ObjectData> toUpdate;

        std::vector<std::string> targetUuids;
        for (auto const& [uuid, owner] : m_lastTouchedBy) {
            if (owner == playerName) {
                auto tIt = m_touchTimestamps.find(uuid);
                if (tIt == m_touchTimestamps.end() || inWindow(tIt->second)) {
                    targetUuids.push_back(uuid);
                }
            }
        }

        for (auto const& uuid : targetUuids) {
            auto delIt = m_deletedObjects.find(uuid);
            if (delIt != m_deletedObjects.end()) {
                toRestore.push_back(delIt->second.data);
                m_deletedObjects.erase(delIt);
                m_lastTouchedBy.erase(uuid);
                m_touchTimestamps.erase(uuid);
                continue;
            }

            auto createIt = m_createdObjects.find(uuid);
            if (createIt != m_createdObjects.end() && createIt->second == playerName) {
                toDelete.push_back(uuid);
                m_createdObjects.erase(createIt);
                m_lastTouchedBy.erase(uuid);
                m_touchTimestamps.erase(uuid);
                continue;
            }

            auto baseIt = m_baselineStates.find(uuid);
            if (baseIt != m_baselineStates.end()) {
                toUpdate.push_back(baseIt->second);
                m_baselineStates.erase(baseIt);
                m_lastTouchedBy.erase(uuid);
                m_touchTimestamps.erase(uuid);
            }
        }

        int localId = P2PManager::get().getLocalPlayerId();

        m_isApplyingRollback = true;

        if (!toDelete.empty()) {
            RemoteActionHandler::get().handleRemoteDeleteObjects(localId, toDelete);
            constexpr size_t CHUNK = 300;
            for (size_t i = 0; i < toDelete.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, toDelete.size() - i);
                std::vector<std::string> chunk(toDelete.begin() + i, toDelete.begin() + i + count);
                P2PManager::get().broadcast(proto::serializeDeleteObjects(chunk), ChannelType::Reliable);
            }
        }

        if (!toRestore.empty()) {
            RemoteActionHandler::get().handleRemotePlaceObjects(localId, toRestore);
            constexpr size_t CHUNK = 100;
            for (size_t i = 0; i < toRestore.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, toRestore.size() - i);
                std::vector<ActionSerializer::ObjectData> chunk(toRestore.begin() + i, toRestore.begin() + i + count);
                P2PManager::get().broadcast(proto::serializePlaceObjects(chunk), ChannelType::Reliable);
            }
        }

        if (!toUpdate.empty()) {
            RemoteActionHandler::get().handleRemoteUpdateObjects(localId, toUpdate);
            constexpr size_t CHUNK = 100;
            for (size_t i = 0; i < toUpdate.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, toUpdate.size() - i);
                std::vector<ActionSerializer::ObjectData> chunk(toUpdate.begin() + i, toUpdate.begin() + i + count);
                P2PManager::get().broadcast(proto::serializeUpdateObjects(chunk), ChannelType::Reliable);
            }
        }

        for (auto& [ch, owner] : m_lastTouchedColor) {
            if (owner == playerName) {
                auto tIt = m_colorTimestamps.find(ch);
                if (tIt == m_colorTimestamps.end() || inWindow(tIt->second)) {
                    if (m_baselineColors.find(ch) != m_baselineColors.end()) {
                        RemoteActionHandler::get().handleRemoteUpdateColorChannel(localId, m_baselineColors[ch]);
                        P2PManager::get().broadcast(proto::serializeUpdateColorChannel(m_baselineColors[ch]), ChannelType::Reliable);
                    }
                }
            }
        }

        if (m_lastTouchedSettings == playerName) {
            if (inWindow(m_settingsTimestamp) && m_baselineSettings.has_value()) {
                RemoteActionHandler::get().handleRemoteUpdateSettings(localId, m_baselineSettings.value());
                P2PManager::get().broadcast(proto::serializeUpdateSettings(m_baselineSettings.value()), ChannelType::Reliable);
            }
        }

        m_isApplyingRollback = false;
        return true;
    }

    bool RevertManager::rollbackLevel(std::chrono::seconds timeWindow) {
        return rollbackToTime(std::chrono::steady_clock::now() - timeWindow);
    }

    bool RevertManager::rollbackToTime(std::chrono::steady_clock::time_point targetTime) {
        return rollbackToTimeInBranch(m_activeBranchIndex, targetTime);
    }

    bool RevertManager::rollbackToTimeInBranch(size_t branchIndex, std::chrono::steady_clock::time_point targetTime) {
        if (branchIndex >= m_branches.size()) return false;
        if (branchIndex != m_activeBranchIndex) {
            return switchActiveBranch(branchIndex, targetTime);
        }

        auto* editor = LevelEditorLayer::get();
        if (!editor || m_branches.empty()) return false;
        auto& active = m_branches[m_activeBranchIndex];
        if (active.actionLog.empty()) return false;

        size_t targetIndex = 0;
        while (targetIndex < active.actionLog.size() && active.actionLog[targetIndex].timestamp <= targetTime) {
            targetIndex++;
        }

        if (targetIndex == active.cursor) return true;

        std::unordered_set<std::string> toDelete;
        std::unordered_map<std::string, ActionSerializer::ObjectData> toRestore;
        std::unordered_map<std::string, ActionSerializer::ObjectData> toUpdate;
        std::unordered_map<int, ActionSerializer::ColorChannelData> toRestoreColors;
        std::optional<ActionSerializer::LevelSettingsData> toRestoreSettings;

        int localId = P2PManager::get().getLocalPlayerId();
        m_isApplyingRollback = true;

        if (targetIndex < active.cursor) {
            for (size_t i = active.cursor; i > targetIndex; --i) {
                auto const& rec = active.actionLog[i - 1];
                switch (rec.type) {
                    case ActionRecord::Type::Place:
                        if (!rec.uuid.empty()) {
                            toDelete.insert(rec.uuid);
                            toRestore.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Delete:
                        if (!rec.uuid.empty()) {
                            toRestore[rec.uuid] = rec.preState;
                            toDelete.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Modify:
                        if (!rec.uuid.empty()) {
                            if (toRestore.find(rec.uuid) != toRestore.end()) {
                                toRestore[rec.uuid] = rec.preState;
                            } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                                toUpdate[rec.uuid] = rec.preState;
                            }
                        }
                        break;
                    case ActionRecord::Type::Color:
                        toRestoreColors[rec.colorChannelId] = rec.preColor;
                        break;
                    case ActionRecord::Type::Settings:
                        toRestoreSettings = rec.preSettings;
                        break;
                }
            }
        } else {
            for (size_t i = active.cursor; i < targetIndex; ++i) {
                auto const& rec = active.actionLog[i];
                switch (rec.type) {
                    case ActionRecord::Type::Place:
                        if (!rec.uuid.empty()) {
                            toRestore[rec.uuid] = rec.postState;
                            toDelete.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Delete:
                        if (!rec.uuid.empty()) {
                            toDelete.insert(rec.uuid);
                            toRestore.erase(rec.uuid);
                            toUpdate.erase(rec.uuid);
                        }
                        break;
                    case ActionRecord::Type::Modify:
                        if (!rec.uuid.empty()) {
                            if (toRestore.find(rec.uuid) != toRestore.end()) {
                                toRestore[rec.uuid] = rec.postState;
                            } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                                toUpdate[rec.uuid] = rec.postState;
                            }
                        }
                        break;
                    case ActionRecord::Type::Color:
                        toRestoreColors[rec.colorChannelId] = rec.postColor;
                        break;
                    case ActionRecord::Type::Settings:
                        toRestoreSettings = rec.postSettings;
                        break;
                }
            }
        }

        if (!toDelete.empty()) {
            std::vector<std::string> delList(toDelete.begin(), toDelete.end());
            RemoteActionHandler::get().handleRemoteDeleteObjects(localId, delList);
            constexpr size_t CHUNK = 300;
            for (size_t i = 0; i < delList.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, delList.size() - i);
                std::vector<std::string> chunk(delList.begin() + i, delList.begin() + i + count);
                P2PManager::get().broadcast(proto::serializeDeleteObjects(chunk), ChannelType::Reliable);
            }
        }

        if (!toRestore.empty()) {
            std::vector<ActionSerializer::ObjectData> restList;
            restList.reserve(toRestore.size());
            for (auto const& [_, d] : toRestore) restList.push_back(d);
            RemoteActionHandler::get().handleRemotePlaceObjects(localId, restList);
            constexpr size_t CHUNK = 100;
            for (size_t i = 0; i < restList.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, restList.size() - i);
                std::vector<ActionSerializer::ObjectData> chunk(restList.begin() + i, restList.begin() + i + count);
                P2PManager::get().broadcast(proto::serializePlaceObjects(chunk), ChannelType::Reliable);
            }
        }

        if (!toUpdate.empty()) {
            std::vector<ActionSerializer::ObjectData> updList;
            updList.reserve(toUpdate.size());
            for (auto const& [_, d] : toUpdate) updList.push_back(d);
            RemoteActionHandler::get().handleRemoteUpdateObjects(localId, updList);
            constexpr size_t CHUNK = 100;
            for (size_t i = 0; i < updList.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, updList.size() - i);
                std::vector<ActionSerializer::ObjectData> chunk(updList.begin() + i, updList.begin() + i + count);
                P2PManager::get().broadcast(proto::serializeUpdateObjects(chunk), ChannelType::Reliable);
            }
        }

        for (auto const& [ch, cData] : toRestoreColors) {
            RemoteActionHandler::get().handleRemoteUpdateColorChannel(localId, cData);
            P2PManager::get().broadcast(proto::serializeUpdateColorChannel(cData), ChannelType::Reliable);
            m_currentColors[ch] = cData;
        }

        if (toRestoreSettings.has_value()) {
            RemoteActionHandler::get().handleRemoteUpdateSettings(localId, toRestoreSettings.value());
            P2PManager::get().broadcast(proto::serializeUpdateSettings(toRestoreSettings.value()), ChannelType::Reliable);
            m_currentSettings = toRestoreSettings.value();
        }

        active.cursor = targetIndex;
        m_isApplyingRollback = false;
        return true;
    }

    bool RevertManager::switchActiveBranch(size_t branchIndex, std::optional<std::chrono::steady_clock::time_point> targetTime) {
        if (branchIndex >= m_branches.size()) return false;
        if (branchIndex == m_activeBranchIndex) {
            if (targetTime.has_value()) {
                return rollbackToTimeInBranch(branchIndex, targetTime.value());
            }
            return true;
        }

        auto* editor = LevelEditorLayer::get();
        if (!editor) return false;

        auto& current = m_branches[m_activeBranchIndex];
        auto& target = m_branches[branchIndex];

        size_t targetIndex = target.actionLog.size();
        if (targetTime.has_value()) {
            targetIndex = 0;
            while (targetIndex < target.actionLog.size() && target.actionLog[targetIndex].timestamp <= targetTime.value()) {
                targetIndex++;
            }
        }

        size_t common = 0;
        while (common < current.actionLog.size() &&
               common < target.actionLog.size() &&
               common < current.cursor &&
               common < targetIndex &&
               current.actionLog[common].uuid == target.actionLog[common].uuid &&
               current.actionLog[common].timestamp == target.actionLog[common].timestamp) {
            common++;
        }

        std::unordered_set<std::string> toDelete;
        std::unordered_map<std::string, ActionSerializer::ObjectData> toRestore;
        std::unordered_map<std::string, ActionSerializer::ObjectData> toUpdate;
        std::unordered_map<int, ActionSerializer::ColorChannelData> toRestoreColors;
        std::optional<ActionSerializer::LevelSettingsData> toRestoreSettings;

        int localId = P2PManager::get().getLocalPlayerId();
        m_isApplyingRollback = true;

        for (size_t i = current.cursor; i > common; --i) {
            auto const& rec = current.actionLog[i - 1];
            switch (rec.type) {
                case ActionRecord::Type::Place:
                    if (!rec.uuid.empty()) {
                        toDelete.insert(rec.uuid);
                        toRestore.erase(rec.uuid);
                        toUpdate.erase(rec.uuid);
                    }
                    break;
                case ActionRecord::Type::Delete:
                    if (!rec.uuid.empty()) {
                        toRestore[rec.uuid] = rec.preState;
                        toDelete.erase(rec.uuid);
                        toUpdate.erase(rec.uuid);
                    }
                    break;
                case ActionRecord::Type::Modify:
                    if (!rec.uuid.empty()) {
                        if (toRestore.find(rec.uuid) != toRestore.end()) {
                            toRestore[rec.uuid] = rec.preState;
                        } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                            toUpdate[rec.uuid] = rec.preState;
                        }
                    }
                    break;
                case ActionRecord::Type::Color:
                    toRestoreColors[rec.colorChannelId] = rec.preColor;
                    break;
                case ActionRecord::Type::Settings:
                    toRestoreSettings = rec.preSettings;
                    break;
            }
        }

        for (size_t i = common; i < targetIndex; ++i) {
            auto const& rec = target.actionLog[i];
            switch (rec.type) {
                case ActionRecord::Type::Place:
                    if (!rec.uuid.empty()) {
                        toRestore[rec.uuid] = rec.postState;
                        toDelete.erase(rec.uuid);
                        toUpdate.erase(rec.uuid);
                    }
                    break;
                case ActionRecord::Type::Delete:
                    if (!rec.uuid.empty()) {
                        toDelete.insert(rec.uuid);
                        toRestore.erase(rec.uuid);
                        toUpdate.erase(rec.uuid);
                    }
                    break;
                case ActionRecord::Type::Modify:
                    if (!rec.uuid.empty()) {
                        if (toRestore.find(rec.uuid) != toRestore.end()) {
                            toRestore[rec.uuid] = rec.postState;
                        } else if (toDelete.find(rec.uuid) == toDelete.end()) {
                            toUpdate[rec.uuid] = rec.postState;
                        }
                    }
                    break;
                case ActionRecord::Type::Color:
                    toRestoreColors[rec.colorChannelId] = rec.postColor;
                    break;
                case ActionRecord::Type::Settings:
                    toRestoreSettings = rec.postSettings;
                    break;
            }
        }

        if (!toDelete.empty()) {
            std::vector<std::string> delList(toDelete.begin(), toDelete.end());
            RemoteActionHandler::get().handleRemoteDeleteObjects(localId, delList);
            constexpr size_t CHUNK = 300;
            for (size_t i = 0; i < delList.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, delList.size() - i);
                std::vector<std::string> chunk(delList.begin() + i, delList.begin() + i + count);
                P2PManager::get().broadcast(proto::serializeDeleteObjects(chunk), ChannelType::Reliable);
            }
        }

        if (!toRestore.empty()) {
            std::vector<ActionSerializer::ObjectData> restList;
            restList.reserve(toRestore.size());
            for (auto const& [_, d] : toRestore) restList.push_back(d);
            RemoteActionHandler::get().handleRemotePlaceObjects(localId, restList);
            constexpr size_t CHUNK = 100;
            for (size_t i = 0; i < restList.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, restList.size() - i);
                std::vector<ActionSerializer::ObjectData> chunk(restList.begin() + i, restList.begin() + i + count);
                P2PManager::get().broadcast(proto::serializePlaceObjects(chunk), ChannelType::Reliable);
            }
        }

        if (!toUpdate.empty()) {
            std::vector<ActionSerializer::ObjectData> updList;
            updList.reserve(toUpdate.size());
            for (auto const& [_, d] : toUpdate) updList.push_back(d);
            RemoteActionHandler::get().handleRemoteUpdateObjects(localId, updList);
            constexpr size_t CHUNK = 100;
            for (size_t i = 0; i < updList.size(); i += CHUNK) {
                size_t count = std::min(CHUNK, updList.size() - i);
                std::vector<ActionSerializer::ObjectData> chunk(updList.begin() + i, updList.begin() + i + count);
                P2PManager::get().broadcast(proto::serializeUpdateObjects(chunk), ChannelType::Reliable);
            }
        }

        for (auto const& [ch, cData] : toRestoreColors) {
            RemoteActionHandler::get().handleRemoteUpdateColorChannel(localId, cData);
            P2PManager::get().broadcast(proto::serializeUpdateColorChannel(cData), ChannelType::Reliable);
            m_currentColors[ch] = cData;
        }

        if (toRestoreSettings.has_value()) {
            RemoteActionHandler::get().handleRemoteUpdateSettings(localId, toRestoreSettings.value());
            P2PManager::get().broadcast(proto::serializeUpdateSettings(toRestoreSettings.value()), ChannelType::Reliable);
            m_currentSettings = toRestoreSettings.value();
        }

        target.cursor = targetIndex;
        m_activeBranchIndex = branchIndex;
        m_isApplyingRollback = false;
        return true;
    }

}
