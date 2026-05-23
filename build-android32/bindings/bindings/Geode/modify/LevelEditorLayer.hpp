#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelEditorLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_updateObjectLabel
		#define GEODE_STATICS_updateObjectLabel
		GEODE_AS_STATIC_FUNCTION(updateObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_playerTookDamage
		#define GEODE_STATICS_playerTookDamage
		GEODE_AS_STATIC_FUNCTION(playerTookDamage) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_updateDebugDraw
		#define GEODE_STATICS_updateDebugDraw
		GEODE_AS_STATIC_FUNCTION(updateDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_updateObjectSection
		#define GEODE_STATICS_updateObjectSection
		GEODE_AS_STATIC_FUNCTION(updateObjectSection) 
	#endif

	#ifndef GEODE_STATICS_updateDisabledObjectsLastPos
		#define GEODE_STATICS_updateDisabledObjectsLastPos
		GEODE_AS_STATIC_FUNCTION(updateDisabledObjectsLastPos) 
	#endif

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_posForTime
		#define GEODE_STATICS_posForTime
		GEODE_AS_STATIC_FUNCTION(posForTime) 
	#endif

	#ifndef GEODE_STATICS_resetSPTriggered
		#define GEODE_STATICS_resetSPTriggered
		GEODE_AS_STATIC_FUNCTION(resetSPTriggered) 
	#endif

	#ifndef GEODE_STATICS_didRotateGameplay
		#define GEODE_STATICS_didRotateGameplay
		GEODE_AS_STATIC_FUNCTION(didRotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_manualUpdateObjectColors
		#define GEODE_STATICS_manualUpdateObjectColors
		GEODE_AS_STATIC_FUNCTION(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_claimCustomParticle
		#define GEODE_STATICS_claimCustomParticle
		GEODE_AS_STATIC_FUNCTION(claimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimCustomParticle
		#define GEODE_STATICS_unclaimCustomParticle
		GEODE_AS_STATIC_FUNCTION(unclaimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_activatedAudioTrigger
		#define GEODE_STATICS_activatedAudioTrigger
		GEODE_AS_STATIC_FUNCTION(activatedAudioTrigger) 
	#endif

	#ifndef GEODE_STATICS_checkpointActivated
		#define GEODE_STATICS_checkpointActivated
		GEODE_AS_STATIC_FUNCTION(checkpointActivated) 
	#endif

	#ifndef GEODE_STATICS_addKeyframe
		#define GEODE_STATICS_addKeyframe
		GEODE_AS_STATIC_FUNCTION(addKeyframe) 
	#endif

	#ifndef GEODE_STATICS_levelSettingsUpdated
		#define GEODE_STATICS_levelSettingsUpdated
		GEODE_AS_STATIC_FUNCTION(levelSettingsUpdated) 
	#endif

	#ifndef GEODE_STATICS_activateTriggerEffect
		#define GEODE_STATICS_activateTriggerEffect
		GEODE_AS_STATIC_FUNCTION(activateTriggerEffect) 
	#endif

	#ifndef GEODE_STATICS_addDelayedSpawn
		#define GEODE_STATICS_addDelayedSpawn
		GEODE_AS_STATIC_FUNCTION(addDelayedSpawn) 
	#endif

	#ifndef GEODE_STATICS_addExclusionList
		#define GEODE_STATICS_addExclusionList
		GEODE_AS_STATIC_FUNCTION(addExclusionList) 
	#endif

	#ifndef GEODE_STATICS_addObjectFromVector
		#define GEODE_STATICS_addObjectFromVector
		GEODE_AS_STATIC_FUNCTION(addObjectFromVector) 
	#endif

	#ifndef GEODE_STATICS_addObjectsAtPosition
		#define GEODE_STATICS_addObjectsAtPosition
		GEODE_AS_STATIC_FUNCTION(addObjectsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_addObjectsInRect
		#define GEODE_STATICS_addObjectsInRect
		GEODE_AS_STATIC_FUNCTION(addObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_addObjectToGroup
		#define GEODE_STATICS_addObjectToGroup
		GEODE_AS_STATIC_FUNCTION(addObjectToGroup) 
	#endif

	#ifndef GEODE_STATICS_addPlayer2Point
		#define GEODE_STATICS_addPlayer2Point
		GEODE_AS_STATIC_FUNCTION(addPlayer2Point) 
	#endif

	#ifndef GEODE_STATICS_addPlayerCollisionBlock
		#define GEODE_STATICS_addPlayerCollisionBlock
		GEODE_AS_STATIC_FUNCTION(addPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_STATICS_addPlayerPoint
		#define GEODE_STATICS_addPlayerPoint
		GEODE_AS_STATIC_FUNCTION(addPlayerPoint) 
	#endif

	#ifndef GEODE_STATICS_addSpecial
		#define GEODE_STATICS_addSpecial
		GEODE_AS_STATIC_FUNCTION(addSpecial) 
	#endif

	#ifndef GEODE_STATICS_addToRedoList
		#define GEODE_STATICS_addToRedoList
		GEODE_AS_STATIC_FUNCTION(addToRedoList) 
	#endif

	#ifndef GEODE_STATICS_addTouchPoint
		#define GEODE_STATICS_addTouchPoint
		GEODE_AS_STATIC_FUNCTION(addTouchPoint) 
	#endif

	#ifndef GEODE_STATICS_addToUndoList
		#define GEODE_STATICS_addToUndoList
		GEODE_AS_STATIC_FUNCTION(addToUndoList) 
	#endif

	#ifndef GEODE_STATICS_addTriggersWithGroupID
		#define GEODE_STATICS_addTriggersWithGroupID
		GEODE_AS_STATIC_FUNCTION(addTriggersWithGroupID) 
	#endif

	#ifndef GEODE_STATICS_addTriggersWithTargetGroupID
		#define GEODE_STATICS_addTriggersWithTargetGroupID
		GEODE_AS_STATIC_FUNCTION(addTriggersWithTargetGroupID) 
	#endif

	#ifndef GEODE_STATICS_applyAttributeState
		#define GEODE_STATICS_applyAttributeState
		GEODE_AS_STATIC_FUNCTION(applyAttributeState) 
	#endif

	#ifndef GEODE_STATICS_applyGroupState
		#define GEODE_STATICS_applyGroupState
		GEODE_AS_STATIC_FUNCTION(applyGroupState) 
	#endif

	#ifndef GEODE_STATICS_breakApartTextObject
		#define GEODE_STATICS_breakApartTextObject
		GEODE_AS_STATIC_FUNCTION(breakApartTextObject) 
	#endif

	#ifndef GEODE_STATICS_canPasteState
		#define GEODE_STATICS_canPasteState
		GEODE_AS_STATIC_FUNCTION(canPasteState) 
	#endif

	#ifndef GEODE_STATICS_clearPlayerPoints
		#define GEODE_STATICS_clearPlayerPoints
		GEODE_AS_STATIC_FUNCTION(clearPlayerPoints) 
	#endif

	#ifndef GEODE_STATICS_clearTouchPoints
		#define GEODE_STATICS_clearTouchPoints
		GEODE_AS_STATIC_FUNCTION(clearTouchPoints) 
	#endif

	#ifndef GEODE_STATICS_copyObjectState
		#define GEODE_STATICS_copyObjectState
		GEODE_AS_STATIC_FUNCTION(copyObjectState) 
	#endif

	#ifndef GEODE_STATICS_copyParticleState
		#define GEODE_STATICS_copyParticleState
		GEODE_AS_STATIC_FUNCTION(copyParticleState) 
	#endif

	#ifndef GEODE_STATICS_createObject
		#define GEODE_STATICS_createObject
		GEODE_AS_STATIC_FUNCTION(createObject) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromSetup
		#define GEODE_STATICS_createObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(createObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromString
		#define GEODE_STATICS_createObjectsFromString
		GEODE_AS_STATIC_FUNCTION(createObjectsFromString) 
	#endif

	#ifndef GEODE_STATICS_dirtifyTriggers
		#define GEODE_STATICS_dirtifyTriggers
		GEODE_AS_STATIC_FUNCTION(dirtifyTriggers) 
	#endif

	#ifndef GEODE_STATICS_duplicateKeyframeAnimation
		#define GEODE_STATICS_duplicateKeyframeAnimation
		GEODE_AS_STATIC_FUNCTION(duplicateKeyframeAnimation) 
	#endif

	#ifndef GEODE_STATICS_fastUpdateDisabledGroups
		#define GEODE_STATICS_fastUpdateDisabledGroups
		GEODE_AS_STATIC_FUNCTION(fastUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_STATICS_findGameObject
		#define GEODE_STATICS_findGameObject
		GEODE_AS_STATIC_FUNCTION(findGameObject) 
	#endif

	#ifndef GEODE_STATICS_findStartPosObject
		#define GEODE_STATICS_findStartPosObject
		GEODE_AS_STATIC_FUNCTION(findStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_forceShowSelectedObjects
		#define GEODE_STATICS_forceShowSelectedObjects
		GEODE_AS_STATIC_FUNCTION(forceShowSelectedObjects) 
	#endif

	#ifndef GEODE_STATICS_fullUpdateDisabledGroups
		#define GEODE_STATICS_fullUpdateDisabledGroups
		GEODE_AS_STATIC_FUNCTION(fullUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_STATICS_getAllObjects
		#define GEODE_STATICS_getAllObjects
		GEODE_AS_STATIC_FUNCTION(getAllObjects) 
	#endif

	#ifndef GEODE_STATICS_getDelayedSpawnNode
		#define GEODE_STATICS_getDelayedSpawnNode
		GEODE_AS_STATIC_FUNCTION(getDelayedSpawnNode) 
	#endif

	#ifndef GEODE_STATICS_getGridPos
		#define GEODE_STATICS_getGridPos
		GEODE_AS_STATIC_FUNCTION(getGridPos) 
	#endif

	#ifndef GEODE_STATICS_getLastObjectX
		#define GEODE_STATICS_getLastObjectX
		GEODE_AS_STATIC_FUNCTION(getLastObjectX) 
	#endif

	#ifndef GEODE_STATICS_getLevelString
		#define GEODE_STATICS_getLevelString
		GEODE_AS_STATIC_FUNCTION(getLevelString) 
	#endif

	#ifndef GEODE_STATICS_getLockedLayers
		#define GEODE_STATICS_getLockedLayers
		GEODE_AS_STATIC_FUNCTION(getLockedLayers) 
	#endif

	#ifndef GEODE_STATICS_getNextColorChannel
		#define GEODE_STATICS_getNextColorChannel
		GEODE_AS_STATIC_FUNCTION(getNextColorChannel) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeAreaEffectID
		#define GEODE_STATICS_getNextFreeAreaEffectID
		GEODE_AS_STATIC_FUNCTION(getNextFreeAreaEffectID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeBlockID
		#define GEODE_STATICS_getNextFreeBlockID
		GEODE_AS_STATIC_FUNCTION(getNextFreeBlockID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeEditorLayer
		#define GEODE_STATICS_getNextFreeEditorLayer
		GEODE_AS_STATIC_FUNCTION(getNextFreeEditorLayer) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeEnterChannel
		#define GEODE_STATICS_getNextFreeEnterChannel
		GEODE_AS_STATIC_FUNCTION(getNextFreeEnterChannel) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeGradientID
		#define GEODE_STATICS_getNextFreeGradientID
		GEODE_AS_STATIC_FUNCTION(getNextFreeGradientID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeGroupID
		#define GEODE_STATICS_getNextFreeGroupID
		GEODE_AS_STATIC_FUNCTION(getNextFreeGroupID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeItemID
		#define GEODE_STATICS_getNextFreeItemID
		GEODE_AS_STATIC_FUNCTION(getNextFreeItemID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeOrderChannel
		#define GEODE_STATICS_getNextFreeOrderChannel
		GEODE_AS_STATIC_FUNCTION(getNextFreeOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeSFXGroupID
		#define GEODE_STATICS_getNextFreeSFXGroupID
		GEODE_AS_STATIC_FUNCTION(getNextFreeSFXGroupID) 
	#endif

	#ifndef GEODE_STATICS_getNextFreeSFXID
		#define GEODE_STATICS_getNextFreeSFXID
		GEODE_AS_STATIC_FUNCTION(getNextFreeSFXID) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect
		#define GEODE_STATICS_getObjectRect
		GEODE_AS_STATIC_FUNCTION(getObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getSavedEditorPosition
		#define GEODE_STATICS_getSavedEditorPosition
		GEODE_AS_STATIC_FUNCTION(getSavedEditorPosition) 
	#endif

	#ifndef GEODE_STATICS_getSavedEditorPositions
		#define GEODE_STATICS_getSavedEditorPositions
		GEODE_AS_STATIC_FUNCTION(getSavedEditorPositions) 
	#endif

	#ifndef GEODE_STATICS_getSectionCount
		#define GEODE_STATICS_getSectionCount
		GEODE_AS_STATIC_FUNCTION(getSectionCount) 
	#endif

	#ifndef GEODE_STATICS_getSelectedEditorOrder
		#define GEODE_STATICS_getSelectedEditorOrder
		GEODE_AS_STATIC_FUNCTION(getSelectedEditorOrder) 
	#endif

	#ifndef GEODE_STATICS_getSelectedEffectPos
		#define GEODE_STATICS_getSelectedEffectPos
		GEODE_AS_STATIC_FUNCTION(getSelectedEffectPos) 
	#endif

	#ifndef GEODE_STATICS_getSelectedOrderChannel
		#define GEODE_STATICS_getSelectedOrderChannel
		GEODE_AS_STATIC_FUNCTION(getSelectedOrderChannel) 
	#endif

	#ifndef GEODE_STATICS_getSFXIDs
		#define GEODE_STATICS_getSFXIDs
		GEODE_AS_STATIC_FUNCTION(getSFXIDs) 
	#endif

	#ifndef GEODE_STATICS_getSongIDs
		#define GEODE_STATICS_getSongIDs
		GEODE_AS_STATIC_FUNCTION(getSongIDs) 
	#endif

	#ifndef GEODE_STATICS_getTriggerGroup
		#define GEODE_STATICS_getTriggerGroup
		GEODE_AS_STATIC_FUNCTION(getTriggerGroup) 
	#endif

	#ifndef GEODE_STATICS_handleAction
		#define GEODE_STATICS_handleAction
		GEODE_AS_STATIC_FUNCTION(handleAction) 
	#endif

	#ifndef GEODE_STATICS_hasAction
		#define GEODE_STATICS_hasAction
		GEODE_AS_STATIC_FUNCTION(hasAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isLayerLocked
		#define GEODE_STATICS_isLayerLocked
		GEODE_AS_STATIC_FUNCTION(isLayerLocked) 
	#endif

	#ifndef GEODE_STATICS_objectAtPosition
		#define GEODE_STATICS_objectAtPosition
		GEODE_AS_STATIC_FUNCTION(objectAtPosition) 
	#endif

	#ifndef GEODE_STATICS_objectMoved
		#define GEODE_STATICS_objectMoved
		GEODE_AS_STATIC_FUNCTION(objectMoved) 
	#endif

	#ifndef GEODE_STATICS_objectsAtPosition
		#define GEODE_STATICS_objectsAtPosition
		GEODE_AS_STATIC_FUNCTION(objectsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_objectsInRect
		#define GEODE_STATICS_objectsInRect
		GEODE_AS_STATIC_FUNCTION(objectsInRect) 
	#endif

	#ifndef GEODE_STATICS_onPausePlaytest
		#define GEODE_STATICS_onPausePlaytest
		GEODE_AS_STATIC_FUNCTION(onPausePlaytest) 
	#endif

	#ifndef GEODE_STATICS_onPlaytest
		#define GEODE_STATICS_onPlaytest
		GEODE_AS_STATIC_FUNCTION(onPlaytest) 
	#endif

	#ifndef GEODE_STATICS_onResumePlaytest
		#define GEODE_STATICS_onResumePlaytest
		GEODE_AS_STATIC_FUNCTION(onResumePlaytest) 
	#endif

	#ifndef GEODE_STATICS_onStopPlaytest
		#define GEODE_STATICS_onStopPlaytest
		GEODE_AS_STATIC_FUNCTION(onStopPlaytest) 
	#endif

	#ifndef GEODE_STATICS_pasteAttributeState
		#define GEODE_STATICS_pasteAttributeState
		GEODE_AS_STATIC_FUNCTION(pasteAttributeState) 
	#endif

	#ifndef GEODE_STATICS_pasteColorState
		#define GEODE_STATICS_pasteColorState
		GEODE_AS_STATIC_FUNCTION(pasteColorState) 
	#endif

	#ifndef GEODE_STATICS_pasteGroupState
		#define GEODE_STATICS_pasteGroupState
		GEODE_AS_STATIC_FUNCTION(pasteGroupState) 
	#endif

	#ifndef GEODE_STATICS_pasteParticleState
		#define GEODE_STATICS_pasteParticleState
		GEODE_AS_STATIC_FUNCTION(pasteParticleState) 
	#endif

	#ifndef GEODE_STATICS_processLoadedMoveActions
		#define GEODE_STATICS_processLoadedMoveActions
		GEODE_AS_STATIC_FUNCTION(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_STATICS_quickUpdateAllPositions
		#define GEODE_STATICS_quickUpdateAllPositions
		GEODE_AS_STATIC_FUNCTION(quickUpdateAllPositions) 
	#endif

	#ifndef GEODE_STATICS_recreateGroups
		#define GEODE_STATICS_recreateGroups
		GEODE_AS_STATIC_FUNCTION(recreateGroups) 
	#endif

	#ifndef GEODE_STATICS_redoLastAction
		#define GEODE_STATICS_redoLastAction
		GEODE_AS_STATIC_FUNCTION(redoLastAction) 
	#endif

	#ifndef GEODE_STATICS_refreshSpecial
		#define GEODE_STATICS_refreshSpecial
		GEODE_AS_STATIC_FUNCTION(refreshSpecial) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjectsOfType
		#define GEODE_STATICS_removeAllObjectsOfType
		GEODE_AS_STATIC_FUNCTION(removeAllObjectsOfType) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

	#ifndef GEODE_STATICS_removePlayerCollisionBlock
		#define GEODE_STATICS_removePlayerCollisionBlock
		GEODE_AS_STATIC_FUNCTION(removePlayerCollisionBlock) 
	#endif

	#ifndef GEODE_STATICS_removeSpecial
		#define GEODE_STATICS_removeSpecial
		GEODE_AS_STATIC_FUNCTION(removeSpecial) 
	#endif

	#ifndef GEODE_STATICS_resetDelayedSpawnNodes
		#define GEODE_STATICS_resetDelayedSpawnNodes
		GEODE_AS_STATIC_FUNCTION(resetDelayedSpawnNodes) 
	#endif

	#ifndef GEODE_STATICS_resetEffectTriggerOptim
		#define GEODE_STATICS_resetEffectTriggerOptim
		GEODE_AS_STATIC_FUNCTION(resetEffectTriggerOptim) 
	#endif

	#ifndef GEODE_STATICS_resetMovingObjects
		#define GEODE_STATICS_resetMovingObjects
		GEODE_AS_STATIC_FUNCTION(resetMovingObjects) 
	#endif

	#ifndef GEODE_STATICS_resetObjectVector
		#define GEODE_STATICS_resetObjectVector
		GEODE_AS_STATIC_FUNCTION(resetObjectVector) 
	#endif

	#ifndef GEODE_STATICS_resetPlayback
		#define GEODE_STATICS_resetPlayback
		GEODE_AS_STATIC_FUNCTION(resetPlayback) 
	#endif

	#ifndef GEODE_STATICS_resetToggledGroups
		#define GEODE_STATICS_resetToggledGroups
		GEODE_AS_STATIC_FUNCTION(resetToggledGroups) 
	#endif

	#ifndef GEODE_STATICS_resetToggledGroupsAndObjects
		#define GEODE_STATICS_resetToggledGroupsAndObjects
		GEODE_AS_STATIC_FUNCTION(resetToggledGroupsAndObjects) 
	#endif

	#ifndef GEODE_STATICS_resetUnusedColorChannels
		#define GEODE_STATICS_resetUnusedColorChannels
		GEODE_AS_STATIC_FUNCTION(resetUnusedColorChannels) 
	#endif

	#ifndef GEODE_STATICS_reverseKeyframeAnimationOrder
		#define GEODE_STATICS_reverseKeyframeAnimationOrder
		GEODE_AS_STATIC_FUNCTION(reverseKeyframeAnimationOrder) 
	#endif

	#ifndef GEODE_STATICS_reverseObjectChanged
		#define GEODE_STATICS_reverseObjectChanged
		GEODE_AS_STATIC_FUNCTION(reverseObjectChanged) 
	#endif

	#ifndef GEODE_STATICS_rotationForSlopeNearObject
		#define GEODE_STATICS_rotationForSlopeNearObject
		GEODE_AS_STATIC_FUNCTION(rotationForSlopeNearObject) 
	#endif

	#ifndef GEODE_STATICS_runColorEffect
		#define GEODE_STATICS_runColorEffect
		GEODE_AS_STATIC_FUNCTION(runColorEffect) 
	#endif

	#ifndef GEODE_STATICS_saveEditorPosition
		#define GEODE_STATICS_saveEditorPosition
		GEODE_AS_STATIC_FUNCTION(saveEditorPosition) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_sortBatchnodeChildren
		#define GEODE_STATICS_sortBatchnodeChildren
		GEODE_AS_STATIC_FUNCTION(sortBatchnodeChildren) 
	#endif

	#ifndef GEODE_STATICS_spawnGroupPreview
		#define GEODE_STATICS_spawnGroupPreview
		GEODE_AS_STATIC_FUNCTION(spawnGroupPreview) 
	#endif

	#ifndef GEODE_STATICS_stopPlayback
		#define GEODE_STATICS_stopPlayback
		GEODE_AS_STATIC_FUNCTION(stopPlayback) 
	#endif

	#ifndef GEODE_STATICS_stopTriggersInGroup
		#define GEODE_STATICS_stopTriggersInGroup
		GEODE_AS_STATIC_FUNCTION(stopTriggersInGroup) 
	#endif

	#ifndef GEODE_STATICS_timeObjectChanged
		#define GEODE_STATICS_timeObjectChanged
		GEODE_AS_STATIC_FUNCTION(timeObjectChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleBackground
		#define GEODE_STATICS_toggleBackground
		GEODE_AS_STATIC_FUNCTION(toggleBackground) 
	#endif

	#ifndef GEODE_STATICS_toggleGrid
		#define GEODE_STATICS_toggleGrid
		GEODE_AS_STATIC_FUNCTION(toggleGrid) 
	#endif

	#ifndef GEODE_STATICS_toggleGround
		#define GEODE_STATICS_toggleGround
		GEODE_AS_STATIC_FUNCTION(toggleGround) 
	#endif

	#ifndef GEODE_STATICS_toggleGroupPreview
		#define GEODE_STATICS_toggleGroupPreview
		GEODE_AS_STATIC_FUNCTION(toggleGroupPreview) 
	#endif

	#ifndef GEODE_STATICS_toggleLockActiveLayer
		#define GEODE_STATICS_toggleLockActiveLayer
		GEODE_AS_STATIC_FUNCTION(toggleLockActiveLayer) 
	#endif

	#ifndef GEODE_STATICS_transferDefaultColors
		#define GEODE_STATICS_transferDefaultColors
		GEODE_AS_STATIC_FUNCTION(transferDefaultColors) 
	#endif

	#ifndef GEODE_STATICS_triggerFollowCommand
		#define GEODE_STATICS_triggerFollowCommand
		GEODE_AS_STATIC_FUNCTION(triggerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerPlayerFollowCommand
		#define GEODE_STATICS_triggerPlayerFollowCommand
		GEODE_AS_STATIC_FUNCTION(triggerPlayerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerRotateCommand
		#define GEODE_STATICS_triggerRotateCommand
		GEODE_AS_STATIC_FUNCTION(triggerRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateSpeedObject
		#define GEODE_STATICS_tryUpdateSpeedObject
		GEODE_AS_STATIC_FUNCTION(tryUpdateSpeedObject) 
	#endif

	#ifndef GEODE_STATICS_typeExistsAtPosition
		#define GEODE_STATICS_typeExistsAtPosition
		GEODE_AS_STATIC_FUNCTION(typeExistsAtPosition) 
	#endif

	#ifndef GEODE_STATICS_undoLastAction
		#define GEODE_STATICS_undoLastAction
		GEODE_AS_STATIC_FUNCTION(undoLastAction) 
	#endif

	#ifndef GEODE_STATICS_unlockAllLayers
		#define GEODE_STATICS_unlockAllLayers
		GEODE_AS_STATIC_FUNCTION(unlockAllLayers) 
	#endif

	#ifndef GEODE_STATICS_updateAnimateOnTriggerObjects
		#define GEODE_STATICS_updateAnimateOnTriggerObjects
		GEODE_AS_STATIC_FUNCTION(updateAnimateOnTriggerObjects) 
	#endif

	#ifndef GEODE_STATICS_updateArt
		#define GEODE_STATICS_updateArt
		GEODE_AS_STATIC_FUNCTION(updateArt) 
	#endif

	#ifndef GEODE_STATICS_updateBlendValues
		#define GEODE_STATICS_updateBlendValues
		GEODE_AS_STATIC_FUNCTION(updateBlendValues) 
	#endif

	#ifndef GEODE_STATICS_updateEditor
		#define GEODE_STATICS_updateEditor
		GEODE_AS_STATIC_FUNCTION(updateEditor) 
	#endif

	#ifndef GEODE_STATICS_updateEditorMode
		#define GEODE_STATICS_updateEditorMode
		GEODE_AS_STATIC_FUNCTION(updateEditorMode) 
	#endif

	#ifndef GEODE_STATICS_updateGameObjects
		#define GEODE_STATICS_updateGameObjects
		GEODE_AS_STATIC_FUNCTION(updateGameObjects) 
	#endif

	#ifndef GEODE_STATICS_updateGridLayer
		#define GEODE_STATICS_updateGridLayer
		GEODE_AS_STATIC_FUNCTION(updateGridLayer) 
	#endif

	#ifndef GEODE_STATICS_updateGridLayerParent
		#define GEODE_STATICS_updateGridLayerParent
		GEODE_AS_STATIC_FUNCTION(updateGridLayerParent) 
	#endif

	#ifndef GEODE_STATICS_updateKeyframeObjects
		#define GEODE_STATICS_updateKeyframeObjects
		GEODE_AS_STATIC_FUNCTION(updateKeyframeObjects) 
	#endif

	#ifndef GEODE_STATICS_updateKeyframeVisibility
		#define GEODE_STATICS_updateKeyframeVisibility
		GEODE_AS_STATIC_FUNCTION(updateKeyframeVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateLevelFont
		#define GEODE_STATICS_updateLevelFont
		GEODE_AS_STATIC_FUNCTION(updateLevelFont) 
	#endif

	#ifndef GEODE_STATICS_updateObjectColors
		#define GEODE_STATICS_updateObjectColors
		GEODE_AS_STATIC_FUNCTION(updateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_updateOptions
		#define GEODE_STATICS_updateOptions
		GEODE_AS_STATIC_FUNCTION(updateOptions) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewAnim
		#define GEODE_STATICS_updatePreviewAnim
		GEODE_AS_STATIC_FUNCTION(updatePreviewAnim) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewParticle
		#define GEODE_STATICS_updatePreviewParticle
		GEODE_AS_STATIC_FUNCTION(updatePreviewParticle) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewParticles
		#define GEODE_STATICS_updatePreviewParticles
		GEODE_AS_STATIC_FUNCTION(updatePreviewParticles) 
	#endif

	#ifndef GEODE_STATICS_updateToggledGroups
		#define GEODE_STATICS_updateToggledGroups
		GEODE_AS_STATIC_FUNCTION(updateToggledGroups) 
	#endif

	#ifndef GEODE_STATICS_validGroup
		#define GEODE_STATICS_validGroup
		GEODE_AS_STATIC_FUNCTION(validGroup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectLabel
		#define GEODE_CONCEPT_CHECK_updateObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postUpdate
		#define GEODE_CONCEPT_CHECK_postUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(postUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTookDamage
		#define GEODE_CONCEPT_CHECK_playerTookDamage
		GEODE_CONCEPT_FUNCTION_CHECK(playerTookDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDebugDraw
		#define GEODE_CONCEPT_CHECK_updateDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(updateDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectSection
		#define GEODE_CONCEPT_CHECK_updateObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisabledObjectsLastPos
		#define GEODE_CONCEPT_CHECK_updateDisabledObjectsLastPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisabledObjectsLastPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForPos
		#define GEODE_CONCEPT_CHECK_timeForPos
		GEODE_CONCEPT_FUNCTION_CHECK(timeForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posForTime
		#define GEODE_CONCEPT_CHECK_posForTime
		GEODE_CONCEPT_FUNCTION_CHECK(posForTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSPTriggered
		#define GEODE_CONCEPT_CHECK_resetSPTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(resetSPTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didRotateGameplay
		#define GEODE_CONCEPT_CHECK_didRotateGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(didRotateGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		#define GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		GEODE_CONCEPT_FUNCTION_CHECK(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimCustomParticle
		#define GEODE_CONCEPT_CHECK_claimCustomParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimCustomParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimCustomParticle
		#define GEODE_CONCEPT_CHECK_unclaimCustomParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimCustomParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatedAudioTrigger
		#define GEODE_CONCEPT_CHECK_activatedAudioTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatedAudioTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkpointActivated
		#define GEODE_CONCEPT_CHECK_checkpointActivated
		GEODE_CONCEPT_FUNCTION_CHECK(checkpointActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addKeyframe
		#define GEODE_CONCEPT_CHECK_addKeyframe
		GEODE_CONCEPT_FUNCTION_CHECK(addKeyframe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelSettingsUpdated
		#define GEODE_CONCEPT_CHECK_levelSettingsUpdated
		GEODE_CONCEPT_FUNCTION_CHECK(levelSettingsUpdated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateTriggerEffect
		#define GEODE_CONCEPT_CHECK_activateTriggerEffect
		GEODE_CONCEPT_FUNCTION_CHECK(activateTriggerEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDelayedSpawn
		#define GEODE_CONCEPT_CHECK_addDelayedSpawn
		GEODE_CONCEPT_FUNCTION_CHECK(addDelayedSpawn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addExclusionList
		#define GEODE_CONCEPT_CHECK_addExclusionList
		GEODE_CONCEPT_FUNCTION_CHECK(addExclusionList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectFromVector
		#define GEODE_CONCEPT_CHECK_addObjectFromVector
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectFromVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectsAtPosition
		#define GEODE_CONCEPT_CHECK_addObjectsAtPosition
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectsAtPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectsInRect
		#define GEODE_CONCEPT_CHECK_addObjectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectToGroup
		#define GEODE_CONCEPT_CHECK_addObjectToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPlayer2Point
		#define GEODE_CONCEPT_CHECK_addPlayer2Point
		GEODE_CONCEPT_FUNCTION_CHECK(addPlayer2Point) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPlayerCollisionBlock
		#define GEODE_CONCEPT_CHECK_addPlayerCollisionBlock
		GEODE_CONCEPT_FUNCTION_CHECK(addPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPlayerPoint
		#define GEODE_CONCEPT_CHECK_addPlayerPoint
		GEODE_CONCEPT_FUNCTION_CHECK(addPlayerPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpecial
		#define GEODE_CONCEPT_CHECK_addSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(addSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToRedoList
		#define GEODE_CONCEPT_CHECK_addToRedoList
		GEODE_CONCEPT_FUNCTION_CHECK(addToRedoList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTouchPoint
		#define GEODE_CONCEPT_CHECK_addTouchPoint
		GEODE_CONCEPT_FUNCTION_CHECK(addTouchPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToUndoList
		#define GEODE_CONCEPT_CHECK_addToUndoList
		GEODE_CONCEPT_FUNCTION_CHECK(addToUndoList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTriggersWithGroupID
		#define GEODE_CONCEPT_CHECK_addTriggersWithGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(addTriggersWithGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTriggersWithTargetGroupID
		#define GEODE_CONCEPT_CHECK_addTriggersWithTargetGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(addTriggersWithTargetGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyAttributeState
		#define GEODE_CONCEPT_CHECK_applyAttributeState
		GEODE_CONCEPT_FUNCTION_CHECK(applyAttributeState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyGroupState
		#define GEODE_CONCEPT_CHECK_applyGroupState
		GEODE_CONCEPT_FUNCTION_CHECK(applyGroupState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_breakApartTextObject
		#define GEODE_CONCEPT_CHECK_breakApartTextObject
		GEODE_CONCEPT_FUNCTION_CHECK(breakApartTextObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canPasteState
		#define GEODE_CONCEPT_CHECK_canPasteState
		GEODE_CONCEPT_FUNCTION_CHECK(canPasteState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPlayerPoints
		#define GEODE_CONCEPT_CHECK_clearPlayerPoints
		GEODE_CONCEPT_FUNCTION_CHECK(clearPlayerPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearTouchPoints
		#define GEODE_CONCEPT_CHECK_clearTouchPoints
		GEODE_CONCEPT_FUNCTION_CHECK(clearTouchPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyObjectState
		#define GEODE_CONCEPT_CHECK_copyObjectState
		GEODE_CONCEPT_FUNCTION_CHECK(copyObjectState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyParticleState
		#define GEODE_CONCEPT_CHECK_copyParticleState
		GEODE_CONCEPT_FUNCTION_CHECK(copyParticleState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObject
		#define GEODE_CONCEPT_CHECK_createObject
		GEODE_CONCEPT_FUNCTION_CHECK(createObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFromSetup
		#define GEODE_CONCEPT_CHECK_createObjectsFromSetup
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFromSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFromString
		#define GEODE_CONCEPT_CHECK_createObjectsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dirtifyTriggers
		#define GEODE_CONCEPT_CHECK_dirtifyTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(dirtifyTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateKeyframeAnimation
		#define GEODE_CONCEPT_CHECK_duplicateKeyframeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateKeyframeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastUpdateDisabledGroups
		#define GEODE_CONCEPT_CHECK_fastUpdateDisabledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(fastUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findGameObject
		#define GEODE_CONCEPT_CHECK_findGameObject
		GEODE_CONCEPT_FUNCTION_CHECK(findGameObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findStartPosObject
		#define GEODE_CONCEPT_CHECK_findStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(findStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceShowSelectedObjects
		#define GEODE_CONCEPT_CHECK_forceShowSelectedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(forceShowSelectedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullUpdateDisabledGroups
		#define GEODE_CONCEPT_CHECK_fullUpdateDisabledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(fullUpdateDisabledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllObjects
		#define GEODE_CONCEPT_CHECK_getAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelayedSpawnNode
		#define GEODE_CONCEPT_CHECK_getDelayedSpawnNode
		GEODE_CONCEPT_FUNCTION_CHECK(getDelayedSpawnNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGridPos
		#define GEODE_CONCEPT_CHECK_getGridPos
		GEODE_CONCEPT_FUNCTION_CHECK(getGridPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastObjectX
		#define GEODE_CONCEPT_CHECK_getLastObjectX
		GEODE_CONCEPT_FUNCTION_CHECK(getLastObjectX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelString
		#define GEODE_CONCEPT_CHECK_getLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLockedLayers
		#define GEODE_CONCEPT_CHECK_getLockedLayers
		GEODE_CONCEPT_FUNCTION_CHECK(getLockedLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextColorChannel
		#define GEODE_CONCEPT_CHECK_getNextColorChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getNextColorChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeAreaEffectID
		#define GEODE_CONCEPT_CHECK_getNextFreeAreaEffectID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeAreaEffectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeBlockID
		#define GEODE_CONCEPT_CHECK_getNextFreeBlockID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeBlockID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeEditorLayer
		#define GEODE_CONCEPT_CHECK_getNextFreeEditorLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeEditorLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeEnterChannel
		#define GEODE_CONCEPT_CHECK_getNextFreeEnterChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeEnterChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeGradientID
		#define GEODE_CONCEPT_CHECK_getNextFreeGradientID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeGradientID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeGroupID
		#define GEODE_CONCEPT_CHECK_getNextFreeGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeItemID
		#define GEODE_CONCEPT_CHECK_getNextFreeItemID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeOrderChannel
		#define GEODE_CONCEPT_CHECK_getNextFreeOrderChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeOrderChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeSFXGroupID
		#define GEODE_CONCEPT_CHECK_getNextFreeSFXGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeSFXGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeSFXID
		#define GEODE_CONCEPT_CHECK_getNextFreeSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect
		#define GEODE_CONCEPT_CHECK_getObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeOffset
		#define GEODE_CONCEPT_CHECK_getRelativeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedEditorPosition
		#define GEODE_CONCEPT_CHECK_getSavedEditorPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedEditorPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedEditorPositions
		#define GEODE_CONCEPT_CHECK_getSavedEditorPositions
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedEditorPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSectionCount
		#define GEODE_CONCEPT_CHECK_getSectionCount
		GEODE_CONCEPT_FUNCTION_CHECK(getSectionCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedEditorOrder
		#define GEODE_CONCEPT_CHECK_getSelectedEditorOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedEditorOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedEffectPos
		#define GEODE_CONCEPT_CHECK_getSelectedEffectPos
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedEffectPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedOrderChannel
		#define GEODE_CONCEPT_CHECK_getSelectedOrderChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedOrderChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXIDs
		#define GEODE_CONCEPT_CHECK_getSFXIDs
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongIDs
		#define GEODE_CONCEPT_CHECK_getSongIDs
		GEODE_CONCEPT_FUNCTION_CHECK(getSongIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTriggerGroup
		#define GEODE_CONCEPT_CHECK_getTriggerGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getTriggerGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleAction
		#define GEODE_CONCEPT_CHECK_handleAction
		GEODE_CONCEPT_FUNCTION_CHECK(handleAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasAction
		#define GEODE_CONCEPT_CHECK_hasAction
		GEODE_CONCEPT_FUNCTION_CHECK(hasAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLayerLocked
		#define GEODE_CONCEPT_CHECK_isLayerLocked
		GEODE_CONCEPT_FUNCTION_CHECK(isLayerLocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectAtPosition
		#define GEODE_CONCEPT_CHECK_objectAtPosition
		GEODE_CONCEPT_FUNCTION_CHECK(objectAtPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectMoved
		#define GEODE_CONCEPT_CHECK_objectMoved
		GEODE_CONCEPT_FUNCTION_CHECK(objectMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsAtPosition
		#define GEODE_CONCEPT_CHECK_objectsAtPosition
		GEODE_CONCEPT_FUNCTION_CHECK(objectsAtPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsInRect
		#define GEODE_CONCEPT_CHECK_objectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(objectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPausePlaytest
		#define GEODE_CONCEPT_CHECK_onPausePlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onPausePlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlaytest
		#define GEODE_CONCEPT_CHECK_onPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResumePlaytest
		#define GEODE_CONCEPT_CHECK_onResumePlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onResumePlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStopPlaytest
		#define GEODE_CONCEPT_CHECK_onStopPlaytest
		GEODE_CONCEPT_FUNCTION_CHECK(onStopPlaytest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteAttributeState
		#define GEODE_CONCEPT_CHECK_pasteAttributeState
		GEODE_CONCEPT_FUNCTION_CHECK(pasteAttributeState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteColorState
		#define GEODE_CONCEPT_CHECK_pasteColorState
		GEODE_CONCEPT_FUNCTION_CHECK(pasteColorState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteGroupState
		#define GEODE_CONCEPT_CHECK_pasteGroupState
		GEODE_CONCEPT_FUNCTION_CHECK(pasteGroupState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteParticleState
		#define GEODE_CONCEPT_CHECK_pasteParticleState
		GEODE_CONCEPT_FUNCTION_CHECK(pasteParticleState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processLoadedMoveActions
		#define GEODE_CONCEPT_CHECK_processLoadedMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdateAllPositions
		#define GEODE_CONCEPT_CHECK_quickUpdateAllPositions
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdateAllPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recreateGroups
		#define GEODE_CONCEPT_CHECK_recreateGroups
		GEODE_CONCEPT_FUNCTION_CHECK(recreateGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_redoLastAction
		#define GEODE_CONCEPT_CHECK_redoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(redoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshSpecial
		#define GEODE_CONCEPT_CHECK_refreshSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(refreshSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjects
		#define GEODE_CONCEPT_CHECK_removeAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjectsOfType
		#define GEODE_CONCEPT_CHECK_removeAllObjectsOfType
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjectsOfType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObject
		#define GEODE_CONCEPT_CHECK_removeObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePlayerCollisionBlock
		#define GEODE_CONCEPT_CHECK_removePlayerCollisionBlock
		GEODE_CONCEPT_FUNCTION_CHECK(removePlayerCollisionBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpecial
		#define GEODE_CONCEPT_CHECK_removeSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDelayedSpawnNodes
		#define GEODE_CONCEPT_CHECK_resetDelayedSpawnNodes
		GEODE_CONCEPT_FUNCTION_CHECK(resetDelayedSpawnNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetEffectTriggerOptim
		#define GEODE_CONCEPT_CHECK_resetEffectTriggerOptim
		GEODE_CONCEPT_FUNCTION_CHECK(resetEffectTriggerOptim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMovingObjects
		#define GEODE_CONCEPT_CHECK_resetMovingObjects
		GEODE_CONCEPT_FUNCTION_CHECK(resetMovingObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObjectVector
		#define GEODE_CONCEPT_CHECK_resetObjectVector
		GEODE_CONCEPT_FUNCTION_CHECK(resetObjectVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPlayback
		#define GEODE_CONCEPT_CHECK_resetPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(resetPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetToggledGroups
		#define GEODE_CONCEPT_CHECK_resetToggledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(resetToggledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetToggledGroupsAndObjects
		#define GEODE_CONCEPT_CHECK_resetToggledGroupsAndObjects
		GEODE_CONCEPT_FUNCTION_CHECK(resetToggledGroupsAndObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUnusedColorChannels
		#define GEODE_CONCEPT_CHECK_resetUnusedColorChannels
		GEODE_CONCEPT_FUNCTION_CHECK(resetUnusedColorChannels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverseKeyframeAnimationOrder
		#define GEODE_CONCEPT_CHECK_reverseKeyframeAnimationOrder
		GEODE_CONCEPT_FUNCTION_CHECK(reverseKeyframeAnimationOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverseObjectChanged
		#define GEODE_CONCEPT_CHECK_reverseObjectChanged
		GEODE_CONCEPT_FUNCTION_CHECK(reverseObjectChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotationForSlopeNearObject
		#define GEODE_CONCEPT_CHECK_rotationForSlopeNearObject
		GEODE_CONCEPT_FUNCTION_CHECK(rotationForSlopeNearObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runColorEffect
		#define GEODE_CONCEPT_CHECK_runColorEffect
		GEODE_CONCEPT_FUNCTION_CHECK(runColorEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveEditorPosition
		#define GEODE_CONCEPT_CHECK_saveEditorPosition
		GEODE_CONCEPT_FUNCTION_CHECK(saveEditorPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectCount
		#define GEODE_CONCEPT_CHECK_setObjectCount
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlend
		#define GEODE_CONCEPT_CHECK_shouldBlend
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortBatchnodeChildren
		#define GEODE_CONCEPT_CHECK_sortBatchnodeChildren
		GEODE_CONCEPT_FUNCTION_CHECK(sortBatchnodeChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroupPreview
		#define GEODE_CONCEPT_CHECK_spawnGroupPreview
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroupPreview) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopPlayback
		#define GEODE_CONCEPT_CHECK_stopPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(stopPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopTriggersInGroup
		#define GEODE_CONCEPT_CHECK_stopTriggersInGroup
		GEODE_CONCEPT_FUNCTION_CHECK(stopTriggersInGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeObjectChanged
		#define GEODE_CONCEPT_CHECK_timeObjectChanged
		GEODE_CONCEPT_FUNCTION_CHECK(timeObjectChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleBackground
		#define GEODE_CONCEPT_CHECK_toggleBackground
		GEODE_CONCEPT_FUNCTION_CHECK(toggleBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGrid
		#define GEODE_CONCEPT_CHECK_toggleGrid
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGround
		#define GEODE_CONCEPT_CHECK_toggleGround
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroupPreview
		#define GEODE_CONCEPT_CHECK_toggleGroupPreview
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroupPreview) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLockActiveLayer
		#define GEODE_CONCEPT_CHECK_toggleLockActiveLayer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLockActiveLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transferDefaultColors
		#define GEODE_CONCEPT_CHECK_transferDefaultColors
		GEODE_CONCEPT_FUNCTION_CHECK(transferDefaultColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerFollowCommand
		#define GEODE_CONCEPT_CHECK_triggerFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerPlayerFollowCommand
		#define GEODE_CONCEPT_CHECK_triggerPlayerFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerPlayerFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerRotateCommand
		#define GEODE_CONCEPT_CHECK_triggerRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateSpeedObject
		#define GEODE_CONCEPT_CHECK_tryUpdateSpeedObject
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateSpeedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeExistsAtPosition
		#define GEODE_CONCEPT_CHECK_typeExistsAtPosition
		GEODE_CONCEPT_FUNCTION_CHECK(typeExistsAtPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_undoLastAction
		#define GEODE_CONCEPT_CHECK_undoLastAction
		GEODE_CONCEPT_FUNCTION_CHECK(undoLastAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockAllLayers
		#define GEODE_CONCEPT_CHECK_unlockAllLayers
		GEODE_CONCEPT_FUNCTION_CHECK(unlockAllLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimateOnTriggerObjects
		#define GEODE_CONCEPT_CHECK_updateAnimateOnTriggerObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimateOnTriggerObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateArt
		#define GEODE_CONCEPT_CHECK_updateArt
		GEODE_CONCEPT_FUNCTION_CHECK(updateArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendValues
		#define GEODE_CONCEPT_CHECK_updateBlendValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditor
		#define GEODE_CONCEPT_CHECK_updateEditor
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorMode
		#define GEODE_CONCEPT_CHECK_updateEditorMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameObjects
		#define GEODE_CONCEPT_CHECK_updateGameObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGridLayer
		#define GEODE_CONCEPT_CHECK_updateGridLayer
		GEODE_CONCEPT_FUNCTION_CHECK(updateGridLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGridLayerParent
		#define GEODE_CONCEPT_CHECK_updateGridLayerParent
		GEODE_CONCEPT_FUNCTION_CHECK(updateGridLayerParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateKeyframeObjects
		#define GEODE_CONCEPT_CHECK_updateKeyframeObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateKeyframeObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateKeyframeVisibility
		#define GEODE_CONCEPT_CHECK_updateKeyframeVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateKeyframeVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelFont
		#define GEODE_CONCEPT_CHECK_updateLevelFont
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectColors
		#define GEODE_CONCEPT_CHECK_updateObjectColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOptions
		#define GEODE_CONCEPT_CHECK_updateOptions
		GEODE_CONCEPT_FUNCTION_CHECK(updateOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePreviewAnim
		#define GEODE_CONCEPT_CHECK_updatePreviewAnim
		GEODE_CONCEPT_FUNCTION_CHECK(updatePreviewAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePreviewParticle
		#define GEODE_CONCEPT_CHECK_updatePreviewParticle
		GEODE_CONCEPT_FUNCTION_CHECK(updatePreviewParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePreviewParticles
		#define GEODE_CONCEPT_CHECK_updatePreviewParticles
		GEODE_CONCEPT_FUNCTION_CHECK(updatePreviewParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggledGroups
		#define GEODE_CONCEPT_CHECK_updateToggledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_validGroup
		#define GEODE_CONCEPT_CHECK_validGroup
		GEODE_CONCEPT_FUNCTION_CHECK(validGroup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelEditorLayer> : ModifyBase<ModifyDerive<Der, LevelEditorLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelEditorLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelEditorLayer>>::ModifyBase;
		using Base = LevelEditorLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayerC2Ev")), Default, LevelEditorLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*, bool>::func(&LevelEditorLayer::create)), Default, LevelEditorLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelEditorLayer, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*, bool>::func(&LevelEditorLayer::scene)), Default, LevelEditorLayer, scene, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::updateObjectLabel)), Default, LevelEditorLayer, updateObjectLabel, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelEditorLayer::draw)), Default, LevelEditorLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&LevelEditorLayer::postUpdate)), Default, LevelEditorLayer, postUpdate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&LevelEditorLayer::updateVisibility)), Default, LevelEditorLayer, updateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<PlayerObject*>::func(&LevelEditorLayer::playerTookDamage)), Default, LevelEditorLayer, playerTookDamage, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&LevelEditorLayer::updateColor)), Default, LevelEditorLayer, updateColor, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelEditorLayer::updateDebugDraw)), Default, LevelEditorLayer, updateDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GameObject*, int, bool>::func(&LevelEditorLayer::addToGroup)), Default, LevelEditorLayer, addToGroup, GameObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GameObject*, int>::func(&LevelEditorLayer::removeFromGroup)), Default, LevelEditorLayer, removeFromGroup, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::updateObjectSection)), Default, LevelEditorLayer, updateObjectSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray*>::func(&LevelEditorLayer::updateDisabledObjectsLastPos)), Default, LevelEditorLayer, updateDisabledObjectsLastPos, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint, int, int, bool, int>::func(&LevelEditorLayer::timeForPos)), Default, LevelEditorLayer, timeForPos, cocos2d::CCPoint, int, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&LevelEditorLayer::posForTime)), Default, LevelEditorLayer, posForTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelEditorLayer::resetSPTriggered)), Default, LevelEditorLayer, resetSPTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelEditorLayer::didRotateGameplay)), Default, LevelEditorLayer, didRotateGameplay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::manualUpdateObjectColors)), Default, LevelEditorLayer, manualUpdateObjectColors, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer19claimCustomParticleERKSsRKN7cocos2d14ParticleStructEiiib")), Default, LevelEditorLayer, claimCustomParticle, gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer21unclaimCustomParticleERKSsPN7cocos2d20CCParticleSystemQuadE")), Default, LevelEditorLayer, unclaimCustomParticle, gd::string const&, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXTriggerGameObject*>::func(&LevelEditorLayer::activatedAudioTrigger)), Default, LevelEditorLayer, activatedAudioTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CheckpointGameObject*>::func(&LevelEditorLayer::checkpointActivated)), Default, LevelEditorLayer, checkpointActivated, CheckpointGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<KeyframeGameObject*>::func(&LevelEditorLayer::addKeyframe)), Default, LevelEditorLayer, addKeyframe, KeyframeGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&LevelEditorLayer::levelSettingsUpdated)), Default, LevelEditorLayer, levelSettingsUpdated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, float, float, float, bool>::func(&LevelEditorLayer::activateTriggerEffect)), Default, LevelEditorLayer, activateTriggerEffect, EffectGameObject*, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, float>::func(&LevelEditorLayer::addDelayedSpawn)), Default, LevelEditorLayer, addDelayedSpawn, EffectGameObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer16addExclusionListERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEERS6_")), Default, LevelEditorLayer, addExclusionList, const gd::unordered_set<int>&, gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer19addObjectFromVectorERSt6vectorISsSaISsEERS0_IPvSaIS4_EE")), Default, LevelEditorLayer, addObjectFromVector, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCArray*, cocos2d::CCArray*>::func(&LevelEditorLayer::addObjectsAtPosition)), Default, LevelEditorLayer, addObjectsAtPosition, cocos2d::CCPoint, cocos2d::CCArray*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect, bool, cocos2d::CCArray*, cocos2d::CCArray*>::func(&LevelEditorLayer::addObjectsInRect)), Default, LevelEditorLayer, addObjectsInRect, cocos2d::CCRect, bool, cocos2d::CCArray*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, int>::func(&LevelEditorLayer::addObjectToGroup)), Default, LevelEditorLayer, addObjectToGroup, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, bool>::func(&LevelEditorLayer::addPlayer2Point)), Default, LevelEditorLayer, addPlayer2Point, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::addPlayerCollisionBlock)), Default, LevelEditorLayer, addPlayerCollisionBlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&LevelEditorLayer::addPlayerPoint)), Default, LevelEditorLayer, addPlayerPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::addSpecial)), Default, LevelEditorLayer, addSpecial, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UndoObject*>::func(&LevelEditorLayer::addToRedoList)), Default, LevelEditorLayer, addToRedoList, UndoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&LevelEditorLayer::addTouchPoint)), Default, LevelEditorLayer, addTouchPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UndoObject*, bool>::func(&LevelEditorLayer::addToUndoList)), Default, LevelEditorLayer, addToUndoList, UndoObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer22addTriggersWithGroupIDERSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEEPN7cocos2d7CCArrayERSt13unordered_mapIiiS2_S4_SaISt4pairIKiiEEEi")), Default, LevelEditorLayer, addTriggersWithGroupID, gd::unordered_set<int>&, cocos2d::CCArray*, gd::unordered_map<int, int>&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer28addTriggersWithTargetGroupIDERSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEES7_PN7cocos2d7CCArrayERSt13unordered_mapIiiS2_S4_SaISt4pairIKiiEEEi")), Default, LevelEditorLayer, addTriggersWithTargetGroupID, gd::unordered_set<int>&, gd::unordered_set<int>&, cocos2d::CCArray*, gd::unordered_map<int, int>&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, GameObject*>::func(&LevelEditorLayer::applyAttributeState)), Default, LevelEditorLayer, applyAttributeState, GameObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, GameObject*>::func(&LevelEditorLayer::applyGroupState)), Default, LevelEditorLayer, applyGroupState, GameObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<TextGameObject*>::func(&LevelEditorLayer::breakApartTextObject)), Default, LevelEditorLayer, breakApartTextObject, TextGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::canPasteState)), Default, LevelEditorLayer, canPasteState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::clearPlayerPoints)), Default, LevelEditorLayer, clearPlayerPoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::clearTouchPoints)), Default, LevelEditorLayer, clearTouchPoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::copyObjectState)), Default, LevelEditorLayer, copyObjectState, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ParticleGameObject*>::func(&LevelEditorLayer::copyParticleState)), Default, LevelEditorLayer, copyParticleState, ParticleGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::CCPoint, bool>::func(&LevelEditorLayer::createObject)), Default, LevelEditorLayer, createObject, int, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer22createObjectsFromSetupERSs")), Default, LevelEditorLayer, createObjectsFromSetup, gd::string&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23createObjectsFromStringERKSsbb")), Default, LevelEditorLayer, createObjectsFromString, gd::string const&, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::dirtifyTriggers)), Default, LevelEditorLayer, dirtifyTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::duplicateKeyframeAnimation)), Default, LevelEditorLayer, duplicateKeyframeAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::fastUpdateDisabledGroups)), Default, LevelEditorLayer, fastUpdateDisabledGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::findGameObject)), Default, LevelEditorLayer, findGameObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::findStartPosObject)), Default, LevelEditorLayer, findStartPosObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LevelEditorLayer::forceShowSelectedObjects)), Default, LevelEditorLayer, forceShowSelectedObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::fullUpdateDisabledGroups)), Default, LevelEditorLayer, fullUpdateDisabledGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getAllObjects)), Default, LevelEditorLayer, getAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getDelayedSpawnNode)), Default, LevelEditorLayer, getDelayedSpawnNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&LevelEditorLayer::getGridPos)), Default, LevelEditorLayer, getGridPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getLastObjectX)), Default, LevelEditorLayer, getLastObjectX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getLevelString)), Default, LevelEditorLayer, getLevelString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getLockedLayers)), Default, LevelEditorLayer, getLockedLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getNextColorChannel)), Default, LevelEditorLayer, getNextColorChannel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23getNextFreeAreaEffectIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeAreaEffectID, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer18getNextFreeBlockIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeBlockID, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer22getNextFreeEditorLayerERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeEditorLayer, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23getNextFreeEnterChannelERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeEnterChannel, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer21getNextFreeGradientIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeGradientID, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer18getNextFreeGroupIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeGroupID, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer17getNextFreeItemIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeItemID, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer23getNextFreeOrderChannelERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeOrderChannel, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer21getNextFreeSFXGroupIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeSFXGroupID, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16LevelEditorLayer16getNextFreeSFXIDERKSt13unordered_setIiSt4hashIiESt8equal_toIiESaIiEE")), Default, LevelEditorLayer, getNextFreeSFXID, const gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, bool, bool>::func(&LevelEditorLayer::getObjectRect)), Default, LevelEditorLayer, getObjectRect, GameObject*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::getRelativeOffset)), Default, LevelEditorLayer, getRelativeOffset, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::getSavedEditorPosition)), Default, LevelEditorLayer, getSavedEditorPosition, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getSavedEditorPositions)), Default, LevelEditorLayer, getSavedEditorPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getSectionCount)), Default, LevelEditorLayer, getSectionCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getSelectedEditorOrder)), Default, LevelEditorLayer, getSelectedEditorOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getSelectedEffectPos)), Default, LevelEditorLayer, getSelectedEffectPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getSelectedOrderChannel)), Default, LevelEditorLayer, getSelectedOrderChannel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::getSFXIDs)), Default, LevelEditorLayer, getSFXIDs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool&>::func(&LevelEditorLayer::getSongIDs)), Default, LevelEditorLayer, getSongIDs, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::getTriggerGroup)), Default, LevelEditorLayer, getTriggerGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, cocos2d::CCArray*>::func(&LevelEditorLayer::handleAction)), Default, LevelEditorLayer, handleAction, bool, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LevelEditorLayer::hasAction)), Default, LevelEditorLayer, hasAction, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*, bool>::func(&LevelEditorLayer::init)), Default, LevelEditorLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::isLayerLocked)), Default, LevelEditorLayer, isLayerLocked, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&LevelEditorLayer::objectAtPosition)), Default, LevelEditorLayer, objectAtPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::objectMoved)), Default, LevelEditorLayer, objectMoved, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&LevelEditorLayer::objectsAtPosition)), Default, LevelEditorLayer, objectsAtPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect, bool>::func(&LevelEditorLayer::objectsInRect)), Default, LevelEditorLayer, objectsInRect, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::onPausePlaytest)), Default, LevelEditorLayer, onPausePlaytest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::onPlaytest)), Default, LevelEditorLayer, onPlaytest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::onResumePlaytest)), Default, LevelEditorLayer, onResumePlaytest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::onStopPlaytest)), Default, LevelEditorLayer, onStopPlaytest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, cocos2d::CCArray*>::func(&LevelEditorLayer::pasteAttributeState)), Default, LevelEditorLayer, pasteAttributeState, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, cocos2d::CCArray*>::func(&LevelEditorLayer::pasteColorState)), Default, LevelEditorLayer, pasteColorState, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, cocos2d::CCArray*>::func(&LevelEditorLayer::pasteGroupState)), Default, LevelEditorLayer, pasteGroupState, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ParticleGameObject*, cocos2d::CCArray*>::func(&LevelEditorLayer::pasteParticleState)), Default, LevelEditorLayer, pasteParticleState, ParticleGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::processLoadedMoveActions)), Default, LevelEditorLayer, processLoadedMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::quickUpdateAllPositions)), Default, LevelEditorLayer, quickUpdateAllPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::recreateGroups)), Default, LevelEditorLayer, recreateGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::redoLastAction)), Default, LevelEditorLayer, redoLastAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::refreshSpecial)), Default, LevelEditorLayer, refreshSpecial, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::removeAllObjects)), Default, LevelEditorLayer, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::removeAllObjectsOfType)), Default, LevelEditorLayer, removeAllObjectsOfType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, bool>::func(&LevelEditorLayer::removeObject)), Default, LevelEditorLayer, removeObject, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::removePlayerCollisionBlock)), Default, LevelEditorLayer, removePlayerCollisionBlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::removeSpecial)), Default, LevelEditorLayer, removeSpecial, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::resetDelayedSpawnNodes)), Default, LevelEditorLayer, resetDelayedSpawnNodes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, cocos2d::CCArray*>::func(&LevelEditorLayer::resetEffectTriggerOptim)), Default, LevelEditorLayer, resetEffectTriggerOptim, GameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::resetMovingObjects)), Default, LevelEditorLayer, resetMovingObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::resetObjectVector)), Default, LevelEditorLayer, resetObjectVector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::resetPlayback)), Default, LevelEditorLayer, resetPlayback, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::resetToggledGroups)), Default, LevelEditorLayer, resetToggledGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::resetToggledGroupsAndObjects)), Default, LevelEditorLayer, resetToggledGroupsAndObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::resetUnusedColorChannels)), Default, LevelEditorLayer, resetUnusedColorChannels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::reverseKeyframeAnimationOrder)), Default, LevelEditorLayer, reverseKeyframeAnimationOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&LevelEditorLayer::reverseObjectChanged)), Default, LevelEditorLayer, reverseObjectChanged, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&LevelEditorLayer::rotationForSlopeNearObject)), Default, LevelEditorLayer, rotationForSlopeNearObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, int, float, float, bool>::func(&LevelEditorLayer::runColorEffect)), Default, LevelEditorLayer, runColorEffect, EffectGameObject*, int, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint&, int>::func(&LevelEditorLayer::saveEditorPosition)), Default, LevelEditorLayer, saveEditorPosition, cocos2d::CCPoint&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelEditorLayer, setObjectCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::shouldBlend)), Default, LevelEditorLayer, shouldBlend, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&LevelEditorLayer::sortBatchnodeChildren)), Default, LevelEditorLayer, sortBatchnodeChildren, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float, float, float, float, float, bool, bool>::func(&LevelEditorLayer::spawnGroupPreview)), Default, LevelEditorLayer, spawnGroupPreview, int, float, float, float, float, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::stopPlayback)), Default, LevelEditorLayer, stopPlayback, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&LevelEditorLayer::stopTriggersInGroup)), Default, LevelEditorLayer, stopTriggersInGroup, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::timeObjectChanged)), Default, LevelEditorLayer, timeObjectChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LevelEditorLayer::toggleBackground)), Default, LevelEditorLayer, toggleBackground, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LevelEditorLayer::toggleGrid)), Default, LevelEditorLayer, toggleGrid, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LevelEditorLayer::toggleGround)), Default, LevelEditorLayer, toggleGround, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&LevelEditorLayer::toggleGroupPreview)), Default, LevelEditorLayer, toggleGroupPreview, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::toggleLockActiveLayer)), Default, LevelEditorLayer, toggleLockActiveLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJEffectManager*, GJEffectManager*>::func(&LevelEditorLayer::transferDefaultColors)), Default, LevelEditorLayer, transferDefaultColors, GJEffectManager*, GJEffectManager*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&LevelEditorLayer::triggerFollowCommand)), Default, LevelEditorLayer, triggerFollowCommand, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&LevelEditorLayer::triggerPlayerFollowCommand)), Default, LevelEditorLayer, triggerPlayerFollowCommand, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&LevelEditorLayer::triggerRotateCommand)), Default, LevelEditorLayer, triggerRotateCommand, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, bool>::func(&LevelEditorLayer::tryUpdateSpeedObject)), Default, LevelEditorLayer, tryUpdateSpeedObject, EffectGameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::CCPoint, bool, bool, float>::func(&LevelEditorLayer::typeExistsAtPosition)), Default, LevelEditorLayer, typeExistsAtPosition, int, cocos2d::CCPoint, bool, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::undoLastAction)), Default, LevelEditorLayer, undoLastAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::unlockAllLayers)), Default, LevelEditorLayer, unlockAllLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LevelEditorLayer::updateAnimateOnTriggerObjects)), Default, LevelEditorLayer, updateAnimateOnTriggerObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&LevelEditorLayer::updateArt)), Default, LevelEditorLayer, updateArt, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateBlendValues)), Default, LevelEditorLayer, updateBlendValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&LevelEditorLayer::updateEditor)), Default, LevelEditorLayer, updateEditor, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateEditorMode)), Default, LevelEditorLayer, updateEditorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateGameObjects)), Default, LevelEditorLayer, updateGameObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateGridLayer)), Default, LevelEditorLayer, updateGridLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateGridLayerParent)), Default, LevelEditorLayer, updateGridLayerParent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateKeyframeObjects)), Default, LevelEditorLayer, updateKeyframeObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LevelEditorLayer::updateKeyframeVisibility)), Default, LevelEditorLayer, updateKeyframeVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LevelEditorLayer::updateLevelFont)), Default, LevelEditorLayer, updateLevelFont, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&LevelEditorLayer::updateObjectColors)), Default, LevelEditorLayer, updateObjectColors, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateOptions)), Default, LevelEditorLayer, updateOptions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updatePreviewAnim)), Default, LevelEditorLayer, updatePreviewAnim, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ParticleGameObject*>::func(&LevelEditorLayer::updatePreviewParticle)), Default, LevelEditorLayer, updatePreviewParticle, ParticleGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updatePreviewParticles)), Default, LevelEditorLayer, updatePreviewParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LevelEditorLayer::updateToggledGroups)), Default, LevelEditorLayer, updateToggledGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, bool>::func(&LevelEditorLayer::validGroup)), Default, LevelEditorLayer, validGroup, GameObject*, bool)
		}
	};
}
