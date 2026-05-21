#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_convertToClosestDirection
		#define GEODE_STATICS_convertToClosestDirection
		GEODE_AS_STATIC_FUNCTION(convertToClosestDirection) 
	#endif

	#ifndef GEODE_STATICS_gameEventToString
		#define GEODE_STATICS_gameEventToString
		GEODE_AS_STATIC_FUNCTION(gameEventToString) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_opacityForObject
		#define GEODE_STATICS_opacityForObject
		GEODE_AS_STATIC_FUNCTION(opacityForObject) 
	#endif

	#ifndef GEODE_STATICS_objectsCollided
		#define GEODE_STATICS_objectsCollided
		GEODE_AS_STATIC_FUNCTION(objectsCollided) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_toggleGroupTriggered
		#define GEODE_STATICS_toggleGroupTriggered
		GEODE_AS_STATIC_FUNCTION(toggleGroupTriggered) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_spawnObject
		#define GEODE_STATICS_spawnObject
		GEODE_AS_STATIC_FUNCTION(spawnObject) 
	#endif

	#ifndef GEODE_STATICS_updateDebugDraw
		#define GEODE_STATICS_updateDebugDraw
		GEODE_AS_STATIC_FUNCTION(updateDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_addToSection
		#define GEODE_STATICS_addToSection
		GEODE_AS_STATIC_FUNCTION(addToSection) 
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

	#ifndef GEODE_STATICS_updateScreenRotation
		#define GEODE_STATICS_updateScreenRotation
		GEODE_AS_STATIC_FUNCTION(updateScreenRotation) 
	#endif

	#ifndef GEODE_STATICS_reverseDirection
		#define GEODE_STATICS_reverseDirection
		GEODE_AS_STATIC_FUNCTION(reverseDirection) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplay
		#define GEODE_STATICS_rotateGameplay
		GEODE_AS_STATIC_FUNCTION(rotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_updateTimeWarp
		#define GEODE_STATICS_updateTimeWarp
		GEODE_AS_STATIC_FUNCTION(updateTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_applyTimeWarp
		#define GEODE_STATICS_applyTimeWarp
		GEODE_AS_STATIC_FUNCTION(applyTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_createCustomParticle
		#define GEODE_STATICS_createCustomParticle
		GEODE_AS_STATIC_FUNCTION(createCustomParticle) 
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

	#ifndef GEODE_STATICS_activateEventTrigger
		#define GEODE_STATICS_activateEventTrigger
		GEODE_AS_STATIC_FUNCTION(activateEventTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateItemCompareTrigger
		#define GEODE_STATICS_activateItemCompareTrigger
		GEODE_AS_STATIC_FUNCTION(activateItemCompareTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateItemEditTrigger
		#define GEODE_STATICS_activateItemEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateItemEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePersistentItemTrigger
		#define GEODE_STATICS_activatePersistentItemTrigger
		GEODE_AS_STATIC_FUNCTION(activatePersistentItemTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePlayerControlTrigger
		#define GEODE_STATICS_activatePlayerControlTrigger
		GEODE_AS_STATIC_FUNCTION(activatePlayerControlTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSFXEditTrigger
		#define GEODE_STATICS_activateSFXEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateSFXEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSFXTrigger
		#define GEODE_STATICS_activateSFXTrigger
		GEODE_AS_STATIC_FUNCTION(activateSFXTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSongEditTrigger
		#define GEODE_STATICS_activateSongEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateSongEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSongTrigger
		#define GEODE_STATICS_activateSongTrigger
		GEODE_AS_STATIC_FUNCTION(activateSongTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateTimerTrigger
		#define GEODE_STATICS_activateTimerTrigger
		GEODE_AS_STATIC_FUNCTION(activateTimerTrigger) 
	#endif

	#ifndef GEODE_STATICS_addAreaEffect
		#define GEODE_STATICS_addAreaEffect
		GEODE_AS_STATIC_FUNCTION(addAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_addCustomEnterEffect
		#define GEODE_STATICS_addCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(addCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_addGuideArt
		#define GEODE_STATICS_addGuideArt
		GEODE_AS_STATIC_FUNCTION(addGuideArt) 
	#endif

	#ifndef GEODE_STATICS_addProximityVolumeEffect
		#define GEODE_STATICS_addProximityVolumeEffect
		GEODE_AS_STATIC_FUNCTION(addProximityVolumeEffect) 
	#endif

	#ifndef GEODE_STATICS_addRemapTargets
		#define GEODE_STATICS_addRemapTargets
		GEODE_AS_STATIC_FUNCTION(addRemapTargets) 
	#endif

	#ifndef GEODE_STATICS_addToGroups
		#define GEODE_STATICS_addToGroups
		GEODE_AS_STATIC_FUNCTION(addToGroups) 
	#endif

	#ifndef GEODE_STATICS_addUIObject
		#define GEODE_STATICS_addUIObject
		GEODE_AS_STATIC_FUNCTION(addUIObject) 
	#endif

	#ifndef GEODE_STATICS_animateInDualGroundNew
		#define GEODE_STATICS_animateInDualGroundNew
		GEODE_AS_STATIC_FUNCTION(animateInDualGroundNew) 
	#endif

	#ifndef GEODE_STATICS_applyRemap
		#define GEODE_STATICS_applyRemap
		GEODE_AS_STATIC_FUNCTION(applyRemap) 
	#endif

	#ifndef GEODE_STATICS_applySFXEditTrigger
		#define GEODE_STATICS_applySFXEditTrigger
		GEODE_AS_STATIC_FUNCTION(applySFXEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_assignNewStickyGroups
		#define GEODE_STATICS_assignNewStickyGroups
		GEODE_AS_STATIC_FUNCTION(assignNewStickyGroups) 
	#endif

	#ifndef GEODE_STATICS_bumpPlayer
		#define GEODE_STATICS_bumpPlayer
		GEODE_AS_STATIC_FUNCTION(bumpPlayer) 
	#endif

	#ifndef GEODE_STATICS_buttonIsRelevant
		#define GEODE_STATICS_buttonIsRelevant
		GEODE_AS_STATIC_FUNCTION(buttonIsRelevant) 
	#endif

	#ifndef GEODE_STATICS_calculateColorGroups
		#define GEODE_STATICS_calculateColorGroups
		GEODE_AS_STATIC_FUNCTION(calculateColorGroups) 
	#endif

	#ifndef GEODE_STATICS_canBeActivatedByPlayer
		#define GEODE_STATICS_canBeActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(canBeActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_canProcessSFX
		#define GEODE_STATICS_canProcessSFX
		GEODE_AS_STATIC_FUNCTION(canProcessSFX) 
	#endif

	#ifndef GEODE_STATICS_checkCameraLimitAfterTeleport
		#define GEODE_STATICS_checkCameraLimitAfterTeleport
		GEODE_AS_STATIC_FUNCTION(checkCameraLimitAfterTeleport) 
	#endif

	#ifndef GEODE_STATICS_checkCollision
		#define GEODE_STATICS_checkCollision
		GEODE_AS_STATIC_FUNCTION(checkCollision) 
	#endif

	#ifndef GEODE_STATICS_checkCollisionBlocks
		#define GEODE_STATICS_checkCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(checkCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_checkCollisions
		#define GEODE_STATICS_checkCollisions
		GEODE_AS_STATIC_FUNCTION(checkCollisions) 
	#endif

	#ifndef GEODE_STATICS_checkRepellPlayer
		#define GEODE_STATICS_checkRepellPlayer
		GEODE_AS_STATIC_FUNCTION(checkRepellPlayer) 
	#endif

	#ifndef GEODE_STATICS_checkSpawnObjects
		#define GEODE_STATICS_checkSpawnObjects
		GEODE_AS_STATIC_FUNCTION(checkSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_claimMoveAction
		#define GEODE_STATICS_claimMoveAction
		GEODE_AS_STATIC_FUNCTION(claimMoveAction) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_claimRotationAction
		#define GEODE_STATICS_claimRotationAction
		GEODE_AS_STATIC_FUNCTION(claimRotationAction) 
	#endif

	#ifndef GEODE_STATICS_collisionCheckObjects
		#define GEODE_STATICS_collisionCheckObjects
		GEODE_AS_STATIC_FUNCTION(collisionCheckObjects) 
	#endif

	#ifndef GEODE_STATICS_controlAreaEffect
		#define GEODE_STATICS_controlAreaEffect
		GEODE_AS_STATIC_FUNCTION(controlAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_controlAreaEffectWithID
		#define GEODE_STATICS_controlAreaEffectWithID
		GEODE_AS_STATIC_FUNCTION(controlAreaEffectWithID) 
	#endif

	#ifndef GEODE_STATICS_controlEventLink
		#define GEODE_STATICS_controlEventLink
		GEODE_AS_STATIC_FUNCTION(controlEventLink) 
	#endif

	#ifndef GEODE_STATICS_controlTriggersInGroup
		#define GEODE_STATICS_controlTriggersInGroup
		GEODE_AS_STATIC_FUNCTION(controlTriggersInGroup) 
	#endif

	#ifndef GEODE_STATICS_controlTriggersWithControlID
		#define GEODE_STATICS_controlTriggersWithControlID
		GEODE_AS_STATIC_FUNCTION(controlTriggersWithControlID) 
	#endif

	#ifndef GEODE_STATICS_createBackground
		#define GEODE_STATICS_createBackground
		GEODE_AS_STATIC_FUNCTION(createBackground) 
	#endif

	#ifndef GEODE_STATICS_createGroundLayer
		#define GEODE_STATICS_createGroundLayer
		GEODE_AS_STATIC_FUNCTION(createGroundLayer) 
	#endif

	#ifndef GEODE_STATICS_createMiddleground
		#define GEODE_STATICS_createMiddleground
		GEODE_AS_STATIC_FUNCTION(createMiddleground) 
	#endif

	#ifndef GEODE_STATICS_createParticle
		#define GEODE_STATICS_createParticle
		GEODE_AS_STATIC_FUNCTION(createParticle) 
	#endif

	#ifndef GEODE_STATICS_createPlayer
		#define GEODE_STATICS_createPlayer
		GEODE_AS_STATIC_FUNCTION(createPlayer) 
	#endif

	#ifndef GEODE_STATICS_createPlayerCollisionBlock
		#define GEODE_STATICS_createPlayerCollisionBlock
		GEODE_AS_STATIC_FUNCTION(createPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_STATICS_createTextLayers
		#define GEODE_STATICS_createTextLayers
		GEODE_AS_STATIC_FUNCTION(createTextLayers) 
	#endif

	#ifndef GEODE_STATICS_damagingObjectsInRect
		#define GEODE_STATICS_damagingObjectsInRect
		GEODE_AS_STATIC_FUNCTION(damagingObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_destroyObject
		#define GEODE_STATICS_destroyObject
		GEODE_AS_STATIC_FUNCTION(destroyObject) 
	#endif

	#ifndef GEODE_STATICS_exitStaticCamera
		#define GEODE_STATICS_exitStaticCamera
		GEODE_AS_STATIC_FUNCTION(exitStaticCamera) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_flipObjects
		#define GEODE_STATICS_flipObjects
		GEODE_AS_STATIC_FUNCTION(flipObjects) 
	#endif

	#ifndef GEODE_STATICS_gameEventTriggered
		#define GEODE_STATICS_gameEventTriggered
		GEODE_AS_STATIC_FUNCTION(gameEventTriggered) 
	#endif

	#ifndef GEODE_STATICS_generateEnterEasingBuffer
		#define GEODE_STATICS_generateEnterEasingBuffer
		GEODE_AS_STATIC_FUNCTION(generateEnterEasingBuffer) 
	#endif

	#ifndef GEODE_STATICS_generateSpawnRemap
		#define GEODE_STATICS_generateSpawnRemap
		GEODE_AS_STATIC_FUNCTION(generateSpawnRemap) 
	#endif

	#ifndef GEODE_STATICS_generateTargetGroups
		#define GEODE_STATICS_generateTargetGroups
		GEODE_AS_STATIC_FUNCTION(generateTargetGroups) 
	#endif

	#ifndef GEODE_STATICS_generateVisibilityGroups
		#define GEODE_STATICS_generateVisibilityGroups
		GEODE_AS_STATIC_FUNCTION(generateVisibilityGroups) 
	#endif

	#ifndef GEODE_STATICS_getAreaObjectValue
		#define GEODE_STATICS_getAreaObjectValue
		GEODE_AS_STATIC_FUNCTION(getAreaObjectValue) 
	#endif

	#ifndef GEODE_STATICS_getEasedAreaValue
		#define GEODE_STATICS_getEasedAreaValue
		GEODE_AS_STATIC_FUNCTION(getEasedAreaValue) 
	#endif

	#ifndef GEODE_STATICS_getFollowSpeedVal
		#define GEODE_STATICS_getFollowSpeedVal
		GEODE_AS_STATIC_FUNCTION(getFollowSpeedVal) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeightForMode
		#define GEODE_STATICS_getGroundHeightForMode
		GEODE_AS_STATIC_FUNCTION(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_STATICS_getGroup
		#define GEODE_STATICS_getGroup
		GEODE_AS_STATIC_FUNCTION(getGroup) 
	#endif

	#ifndef GEODE_STATICS_getItemValue
		#define GEODE_STATICS_getItemValue
		GEODE_AS_STATIC_FUNCTION(getItemValue) 
	#endif

	#ifndef GEODE_STATICS_getMaxPortalY
		#define GEODE_STATICS_getMaxPortalY
		GEODE_AS_STATIC_FUNCTION(getMaxPortalY) 
	#endif

	#ifndef GEODE_STATICS_getMinDistance
		#define GEODE_STATICS_getMinDistance
		GEODE_AS_STATIC_FUNCTION(getMinDistance) 
	#endif

	#ifndef GEODE_STATICS_getMinPortalY
		#define GEODE_STATICS_getMinPortalY
		GEODE_AS_STATIC_FUNCTION(getMinPortalY) 
	#endif

	#ifndef GEODE_STATICS_getModifiedDelta
		#define GEODE_STATICS_getModifiedDelta
		GEODE_AS_STATIC_FUNCTION(getModifiedDelta) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey
		#define GEODE_STATICS_getParticleKey
		GEODE_AS_STATIC_FUNCTION(getParticleKey) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey2
		#define GEODE_STATICS_getParticleKey2
		GEODE_AS_STATIC_FUNCTION(getParticleKey2) 
	#endif

	#ifndef GEODE_STATICS_getRecordString
		#define GEODE_STATICS_getRecordString
		GEODE_AS_STATIC_FUNCTION(getRecordString) 
	#endif

	#ifndef GEODE_STATICS_getSavedPosition
		#define GEODE_STATICS_getSavedPosition
		GEODE_AS_STATIC_FUNCTION(getSavedPosition) 
	#endif

	#ifndef GEODE_STATICS_groupStickyObjects
		#define GEODE_STATICS_groupStickyObjects
		GEODE_AS_STATIC_FUNCTION(groupStickyObjects) 
	#endif

	#ifndef GEODE_STATICS_handleButton
		#define GEODE_STATICS_handleButton
		GEODE_AS_STATIC_FUNCTION(handleButton) 
	#endif

	#ifndef GEODE_STATICS_hasUniqueCoin
		#define GEODE_STATICS_hasUniqueCoin
		GEODE_AS_STATIC_FUNCTION(hasUniqueCoin) 
	#endif

	#ifndef GEODE_STATICS_increaseBatchNodeCapacity
		#define GEODE_STATICS_increaseBatchNodeCapacity
		GEODE_AS_STATIC_FUNCTION(increaseBatchNodeCapacity) 
	#endif

	#ifndef GEODE_STATICS_lightningFlash
		#define GEODE_STATICS_lightningFlash
		GEODE_AS_STATIC_FUNCTION(lightningFlash) 
	#endif

	#ifndef GEODE_STATICS_loadGroupParentsFromString
		#define GEODE_STATICS_loadGroupParentsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupParentsFromString) 
	#endif

	#ifndef GEODE_STATICS_loadLevelSettings
		#define GEODE_STATICS_loadLevelSettings
		GEODE_AS_STATIC_FUNCTION(loadLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_loadStartPosObject
		#define GEODE_STATICS_loadStartPosObject
		GEODE_AS_STATIC_FUNCTION(loadStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_loadUpToPosition
		#define GEODE_STATICS_loadUpToPosition
		GEODE_AS_STATIC_FUNCTION(loadUpToPosition) 
	#endif

	#ifndef GEODE_STATICS_maxZOrderForShaderZ
		#define GEODE_STATICS_maxZOrderForShaderZ
		GEODE_AS_STATIC_FUNCTION(maxZOrderForShaderZ) 
	#endif

	#ifndef GEODE_STATICS_minZOrderForShaderZ
		#define GEODE_STATICS_minZOrderForShaderZ
		GEODE_AS_STATIC_FUNCTION(minZOrderForShaderZ) 
	#endif

	#ifndef GEODE_STATICS_modifyGroupPhysics
		#define GEODE_STATICS_modifyGroupPhysics
		GEODE_AS_STATIC_FUNCTION(modifyGroupPhysics) 
	#endif

	#ifndef GEODE_STATICS_moveAreaObject
		#define GEODE_STATICS_moveAreaObject
		GEODE_AS_STATIC_FUNCTION(moveAreaObject) 
	#endif

	#ifndef GEODE_STATICS_moveObjects
		#define GEODE_STATICS_moveObjects
		GEODE_AS_STATIC_FUNCTION(moveObjects) 
	#endif

	#ifndef GEODE_STATICS_moveObjectToStaticGroup
		#define GEODE_STATICS_moveObjectToStaticGroup
		GEODE_AS_STATIC_FUNCTION(moveObjectToStaticGroup) 
	#endif

	#ifndef GEODE_STATICS_objectTypeToGameEvent
		#define GEODE_STATICS_objectTypeToGameEvent
		GEODE_AS_STATIC_FUNCTION(objectTypeToGameEvent) 
	#endif

	#ifndef GEODE_STATICS_optimizeMoveGroups
		#define GEODE_STATICS_optimizeMoveGroups
		GEODE_AS_STATIC_FUNCTION(optimizeMoveGroups) 
	#endif

	#ifndef GEODE_STATICS_orderSpawnObjects
		#define GEODE_STATICS_orderSpawnObjects
		GEODE_AS_STATIC_FUNCTION(orderSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_pauseAudio
		#define GEODE_STATICS_pauseAudio
		GEODE_AS_STATIC_FUNCTION(pauseAudio) 
	#endif

	#ifndef GEODE_STATICS_pickupItem
		#define GEODE_STATICS_pickupItem
		GEODE_AS_STATIC_FUNCTION(pickupItem) 
	#endif

	#ifndef GEODE_STATICS_playerCircleCollision
		#define GEODE_STATICS_playerCircleCollision
		GEODE_AS_STATIC_FUNCTION(playerCircleCollision) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedRing
		#define GEODE_STATICS_playerTouchedRing
		GEODE_AS_STATIC_FUNCTION(playerTouchedRing) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedTrigger
		#define GEODE_STATICS_playerTouchedTrigger
		GEODE_AS_STATIC_FUNCTION(playerTouchedTrigger) 
	#endif

	#ifndef GEODE_STATICS_playerWillSwitchMode
		#define GEODE_STATICS_playerWillSwitchMode
		GEODE_AS_STATIC_FUNCTION(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_STATICS_playExitDualEffect
		#define GEODE_STATICS_playExitDualEffect
		GEODE_AS_STATIC_FUNCTION(playExitDualEffect) 
	#endif

	#ifndef GEODE_STATICS_playKeyframeAnimation
		#define GEODE_STATICS_playKeyframeAnimation
		GEODE_AS_STATIC_FUNCTION(playKeyframeAnimation) 
	#endif

	#ifndef GEODE_STATICS_positionForShaderTarget
		#define GEODE_STATICS_positionForShaderTarget
		GEODE_AS_STATIC_FUNCTION(positionForShaderTarget) 
	#endif

	#ifndef GEODE_STATICS_positionUIObjects
		#define GEODE_STATICS_positionUIObjects
		GEODE_AS_STATIC_FUNCTION(positionUIObjects) 
	#endif

	#ifndef GEODE_STATICS_prepareSavePositionObjects
		#define GEODE_STATICS_prepareSavePositionObjects
		GEODE_AS_STATIC_FUNCTION(prepareSavePositionObjects) 
	#endif

	#ifndef GEODE_STATICS_preUpdateVisibility
		#define GEODE_STATICS_preUpdateVisibility
		GEODE_AS_STATIC_FUNCTION(preUpdateVisibility) 
	#endif

	#ifndef GEODE_STATICS_processActivatedAudioTriggers
		#define GEODE_STATICS_processActivatedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(processActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_processAdvancedFollowAction
		#define GEODE_STATICS_processAdvancedFollowAction
		GEODE_AS_STATIC_FUNCTION(processAdvancedFollowAction) 
	#endif

	#ifndef GEODE_STATICS_processAdvancedFollowActions
		#define GEODE_STATICS_processAdvancedFollowActions
		GEODE_AS_STATIC_FUNCTION(processAdvancedFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processAreaActions
		#define GEODE_STATICS_processAreaActions
		GEODE_AS_STATIC_FUNCTION(processAreaActions) 
	#endif

	#ifndef GEODE_STATICS_processAreaEffects
		#define GEODE_STATICS_processAreaEffects
		GEODE_AS_STATIC_FUNCTION(processAreaEffects) 
	#endif

	#ifndef GEODE_STATICS_processAreaMoveGroupAction
		#define GEODE_STATICS_processAreaMoveGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaMoveGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaRotateGroupAction
		#define GEODE_STATICS_processAreaRotateGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaRotateGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaTintGroupAction
		#define GEODE_STATICS_processAreaTintGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaTintGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaTransformGroupAction
		#define GEODE_STATICS_processAreaTransformGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaTransformGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processCommands
		#define GEODE_STATICS_processCommands
		GEODE_AS_STATIC_FUNCTION(processCommands) 
	#endif

	#ifndef GEODE_STATICS_processDynamicObjectActions
		#define GEODE_STATICS_processDynamicObjectActions
		GEODE_AS_STATIC_FUNCTION(processDynamicObjectActions) 
	#endif

	#ifndef GEODE_STATICS_processFollowActions
		#define GEODE_STATICS_processFollowActions
		GEODE_AS_STATIC_FUNCTION(processFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processItems
		#define GEODE_STATICS_processItems
		GEODE_AS_STATIC_FUNCTION(processItems) 
	#endif

	#ifndef GEODE_STATICS_processMoveActions
		#define GEODE_STATICS_processMoveActions
		GEODE_AS_STATIC_FUNCTION(processMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processMoveActionsStep
		#define GEODE_STATICS_processMoveActionsStep
		GEODE_AS_STATIC_FUNCTION(processMoveActionsStep) 
	#endif

	#ifndef GEODE_STATICS_processOptionsTrigger
		#define GEODE_STATICS_processOptionsTrigger
		GEODE_AS_STATIC_FUNCTION(processOptionsTrigger) 
	#endif

	#ifndef GEODE_STATICS_processPlayerFollowActions
		#define GEODE_STATICS_processPlayerFollowActions
		GEODE_AS_STATIC_FUNCTION(processPlayerFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processQueuedAudioTriggers
		#define GEODE_STATICS_processQueuedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(processQueuedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_processQueuedButtons
		#define GEODE_STATICS_processQueuedButtons
		GEODE_AS_STATIC_FUNCTION(processQueuedButtons) 
	#endif

	#ifndef GEODE_STATICS_processRotationActions
		#define GEODE_STATICS_processRotationActions
		GEODE_AS_STATIC_FUNCTION(processRotationActions) 
	#endif

	#ifndef GEODE_STATICS_processSFXObjects
		#define GEODE_STATICS_processSFXObjects
		GEODE_AS_STATIC_FUNCTION(processSFXObjects) 
	#endif

	#ifndef GEODE_STATICS_processSFXState
		#define GEODE_STATICS_processSFXState
		GEODE_AS_STATIC_FUNCTION(processSFXState) 
	#endif

	#ifndef GEODE_STATICS_processSongState
		#define GEODE_STATICS_processSongState
		GEODE_AS_STATIC_FUNCTION(processSongState) 
	#endif

	#ifndef GEODE_STATICS_processTransformActions
		#define GEODE_STATICS_processTransformActions
		GEODE_AS_STATIC_FUNCTION(processTransformActions) 
	#endif

	#ifndef GEODE_STATICS_refreshCounterLabels
		#define GEODE_STATICS_refreshCounterLabels
		GEODE_AS_STATIC_FUNCTION(refreshCounterLabels) 
	#endif

	#ifndef GEODE_STATICS_refreshKeyframeAnims
		#define GEODE_STATICS_refreshKeyframeAnims
		GEODE_AS_STATIC_FUNCTION(refreshKeyframeAnims) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroups
		#define GEODE_STATICS_removeFromGroups
		GEODE_AS_STATIC_FUNCTION(removeFromGroups) 
	#endif

	#ifndef GEODE_STATICS_removeGroupParent
		#define GEODE_STATICS_removeGroupParent
		GEODE_AS_STATIC_FUNCTION(removeGroupParent) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromSection
		#define GEODE_STATICS_removeObjectFromSection
		GEODE_AS_STATIC_FUNCTION(removeObjectFromSection) 
	#endif

	#ifndef GEODE_STATICS_removeReleasedButtons
		#define GEODE_STATICS_removeReleasedButtons
		GEODE_AS_STATIC_FUNCTION(removeReleasedButtons) 
	#endif

	#ifndef GEODE_STATICS_resetActiveEnterEffects
		#define GEODE_STATICS_resetActiveEnterEffects
		GEODE_AS_STATIC_FUNCTION(resetActiveEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_resetAreaObjectValues
		#define GEODE_STATICS_resetAreaObjectValues
		GEODE_AS_STATIC_FUNCTION(resetAreaObjectValues) 
	#endif

	#ifndef GEODE_STATICS_resetAudio
		#define GEODE_STATICS_resetAudio
		GEODE_AS_STATIC_FUNCTION(resetAudio) 
	#endif

	#ifndef GEODE_STATICS_resetCamera
		#define GEODE_STATICS_resetCamera
		GEODE_AS_STATIC_FUNCTION(resetCamera) 
	#endif

	#ifndef GEODE_STATICS_resetGradientLayers
		#define GEODE_STATICS_resetGradientLayers
		GEODE_AS_STATIC_FUNCTION(resetGradientLayers) 
	#endif

	#ifndef GEODE_STATICS_resetLevelVariables
		#define GEODE_STATICS_resetLevelVariables
		GEODE_AS_STATIC_FUNCTION(resetLevelVariables) 
	#endif

	#ifndef GEODE_STATICS_resetPlayer
		#define GEODE_STATICS_resetPlayer
		GEODE_AS_STATIC_FUNCTION(resetPlayer) 
	#endif

	#ifndef GEODE_STATICS_resetRecord
		#define GEODE_STATICS_resetRecord
		GEODE_AS_STATIC_FUNCTION(resetRecord) 
	#endif

	#ifndef GEODE_STATICS_resetSpawnChannelIndex
		#define GEODE_STATICS_resetSpawnChannelIndex
		GEODE_AS_STATIC_FUNCTION(resetSpawnChannelIndex) 
	#endif

	#ifndef GEODE_STATICS_resetStaticCamera
		#define GEODE_STATICS_resetStaticCamera
		GEODE_AS_STATIC_FUNCTION(resetStaticCamera) 
	#endif

	#ifndef GEODE_STATICS_restoreRemap
		#define GEODE_STATICS_restoreRemap
		GEODE_AS_STATIC_FUNCTION(restoreRemap) 
	#endif

	#ifndef GEODE_STATICS_resumeAudio
		#define GEODE_STATICS_resumeAudio
		GEODE_AS_STATIC_FUNCTION(resumeAudio) 
	#endif

	#ifndef GEODE_STATICS_rotateAreaObjects
		#define GEODE_STATICS_rotateAreaObjects
		GEODE_AS_STATIC_FUNCTION(rotateAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_rotateObject
		#define GEODE_STATICS_rotateObject
		GEODE_AS_STATIC_FUNCTION(rotateObject) 
	#endif

	#ifndef GEODE_STATICS_rotateObjects
		#define GEODE_STATICS_rotateObjects
		GEODE_AS_STATIC_FUNCTION(rotateObjects) 
	#endif

	#ifndef GEODE_STATICS_setGroupParent
		#define GEODE_STATICS_setGroupParent
		GEODE_AS_STATIC_FUNCTION(setGroupParent) 
	#endif

	#ifndef GEODE_STATICS_setupLayers
		#define GEODE_STATICS_setupLayers
		GEODE_AS_STATIC_FUNCTION(setupLayers) 
	#endif

	#ifndef GEODE_STATICS_setupLevelStart
		#define GEODE_STATICS_setupLevelStart
		GEODE_AS_STATIC_FUNCTION(setupLevelStart) 
	#endif

	#ifndef GEODE_STATICS_shakeCamera
		#define GEODE_STATICS_shakeCamera
		GEODE_AS_STATIC_FUNCTION(shakeCamera) 
	#endif

	#ifndef GEODE_STATICS_shouldExitHackedLevel
		#define GEODE_STATICS_shouldExitHackedLevel
		GEODE_AS_STATIC_FUNCTION(shouldExitHackedLevel) 
	#endif

	#ifndef GEODE_STATICS_sortGroups
		#define GEODE_STATICS_sortGroups
		GEODE_AS_STATIC_FUNCTION(sortGroups) 
	#endif

	#ifndef GEODE_STATICS_sortSectionVector
		#define GEODE_STATICS_sortSectionVector
		GEODE_AS_STATIC_FUNCTION(sortSectionVector) 
	#endif

	#ifndef GEODE_STATICS_sortStickyGroups
		#define GEODE_STATICS_sortStickyGroups
		GEODE_AS_STATIC_FUNCTION(sortStickyGroups) 
	#endif

	#ifndef GEODE_STATICS_spawnObjectsInOrder
		#define GEODE_STATICS_spawnObjectsInOrder
		GEODE_AS_STATIC_FUNCTION(spawnObjectsInOrder) 
	#endif

	#ifndef GEODE_STATICS_spawnParticle
		#define GEODE_STATICS_spawnParticle
		GEODE_AS_STATIC_FUNCTION(spawnParticle) 
	#endif

	#ifndef GEODE_STATICS_spawnParticleTrigger
		#define GEODE_STATICS_spawnParticleTrigger
		GEODE_AS_STATIC_FUNCTION(spawnParticleTrigger) 
	#endif

	#ifndef GEODE_STATICS_speedForShaderTarget
		#define GEODE_STATICS_speedForShaderTarget
		GEODE_AS_STATIC_FUNCTION(speedForShaderTarget) 
	#endif

	#ifndef GEODE_STATICS_staticObjectsInRect
		#define GEODE_STATICS_staticObjectsInRect
		GEODE_AS_STATIC_FUNCTION(staticObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_stopCustomEnterEffect
		#define GEODE_STATICS_stopCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(stopCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_switchToRobotMode
		#define GEODE_STATICS_switchToRobotMode
		GEODE_AS_STATIC_FUNCTION(switchToRobotMode) 
	#endif

	#ifndef GEODE_STATICS_switchToRollMode
		#define GEODE_STATICS_switchToRollMode
		GEODE_AS_STATIC_FUNCTION(switchToRollMode) 
	#endif

	#ifndef GEODE_STATICS_switchToSpiderMode
		#define GEODE_STATICS_switchToSpiderMode
		GEODE_AS_STATIC_FUNCTION(switchToSpiderMode) 
	#endif

	#ifndef GEODE_STATICS_syncBGTextures
		#define GEODE_STATICS_syncBGTextures
		GEODE_AS_STATIC_FUNCTION(syncBGTextures) 
	#endif

	#ifndef GEODE_STATICS_teleportPlayer
		#define GEODE_STATICS_teleportPlayer
		GEODE_AS_STATIC_FUNCTION(teleportPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleAudioVisualizer
		#define GEODE_STATICS_toggleAudioVisualizer
		GEODE_AS_STATIC_FUNCTION(toggleAudioVisualizer) 
	#endif

	#ifndef GEODE_STATICS_toggleDualMode
		#define GEODE_STATICS_toggleDualMode
		GEODE_AS_STATIC_FUNCTION(toggleDualMode) 
	#endif

	#ifndef GEODE_STATICS_toggleFlipped
		#define GEODE_STATICS_toggleFlipped
		GEODE_AS_STATIC_FUNCTION(toggleFlipped) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_transformAreaObjects
		#define GEODE_STATICS_transformAreaObjects
		GEODE_AS_STATIC_FUNCTION(transformAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_triggerAdvancedFollowEditCommand
		#define GEODE_STATICS_triggerAdvancedFollowEditCommand
		GEODE_AS_STATIC_FUNCTION(triggerAdvancedFollowEditCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerAreaEffect
		#define GEODE_STATICS_triggerAreaEffect
		GEODE_AS_STATIC_FUNCTION(triggerAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_triggerDynamicRotateCommand
		#define GEODE_STATICS_triggerDynamicRotateCommand
		GEODE_AS_STATIC_FUNCTION(triggerDynamicRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerGradientCommand
		#define GEODE_STATICS_triggerGradientCommand
		GEODE_AS_STATIC_FUNCTION(triggerGradientCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerMoveCommand
		#define GEODE_STATICS_triggerMoveCommand
		GEODE_AS_STATIC_FUNCTION(triggerMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerShaderCommand
		#define GEODE_STATICS_triggerShaderCommand
		GEODE_AS_STATIC_FUNCTION(triggerShaderCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerTransformCommand
		#define GEODE_STATICS_triggerTransformCommand
		GEODE_AS_STATIC_FUNCTION(triggerTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_tryGetMainObject
		#define GEODE_STATICS_tryGetMainObject
		GEODE_AS_STATIC_FUNCTION(tryGetMainObject) 
	#endif

	#ifndef GEODE_STATICS_tryGetObject
		#define GEODE_STATICS_tryGetObject
		GEODE_AS_STATIC_FUNCTION(tryGetObject) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_ungroupStickyObjects
		#define GEODE_STATICS_ungroupStickyObjects
		GEODE_AS_STATIC_FUNCTION(ungroupStickyObjects) 
	#endif

	#ifndef GEODE_STATICS_updateAreaObjectLastValues
		#define GEODE_STATICS_updateAreaObjectLastValues
		GEODE_AS_STATIC_FUNCTION(updateAreaObjectLastValues) 
	#endif

	#ifndef GEODE_STATICS_updateAudioVisualizer
		#define GEODE_STATICS_updateAudioVisualizer
		GEODE_AS_STATIC_FUNCTION(updateAudioVisualizer) 
	#endif

	#ifndef GEODE_STATICS_updateCamera
		#define GEODE_STATICS_updateCamera
		GEODE_AS_STATIC_FUNCTION(updateCamera) 
	#endif

	#ifndef GEODE_STATICS_updateCameraBGArt
		#define GEODE_STATICS_updateCameraBGArt
		GEODE_AS_STATIC_FUNCTION(updateCameraBGArt) 
	#endif

	#ifndef GEODE_STATICS_updateCameraOffsetX
		#define GEODE_STATICS_updateCameraOffsetX
		GEODE_AS_STATIC_FUNCTION(updateCameraOffsetX) 
	#endif

	#ifndef GEODE_STATICS_updateCameraOffsetY
		#define GEODE_STATICS_updateCameraOffsetY
		GEODE_AS_STATIC_FUNCTION(updateCameraOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateCollisionBlocks
		#define GEODE_STATICS_updateCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(updateCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_updateCounters
		#define GEODE_STATICS_updateCounters
		GEODE_AS_STATIC_FUNCTION(updateCounters) 
	#endif

	#ifndef GEODE_STATICS_updateDualGround
		#define GEODE_STATICS_updateDualGround
		GEODE_AS_STATIC_FUNCTION(updateDualGround) 
	#endif

	#ifndef GEODE_STATICS_updateEnterEffects
		#define GEODE_STATICS_updateEnterEffects
		GEODE_AS_STATIC_FUNCTION(updateEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_updateExtraGameLayers
		#define GEODE_STATICS_updateExtraGameLayers
		GEODE_AS_STATIC_FUNCTION(updateExtraGameLayers) 
	#endif

	#ifndef GEODE_STATICS_updateGradientLayers
		#define GEODE_STATICS_updateGradientLayers
		GEODE_AS_STATIC_FUNCTION(updateGradientLayers) 
	#endif

	#ifndef GEODE_STATICS_updateGroundShadows
		#define GEODE_STATICS_updateGroundShadows
		GEODE_AS_STATIC_FUNCTION(updateGroundShadows) 
	#endif

	#ifndef GEODE_STATICS_updateGuideArt
		#define GEODE_STATICS_updateGuideArt
		GEODE_AS_STATIC_FUNCTION(updateGuideArt) 
	#endif

	#ifndef GEODE_STATICS_updateKeyframeOrder
		#define GEODE_STATICS_updateKeyframeOrder
		GEODE_AS_STATIC_FUNCTION(updateKeyframeOrder) 
	#endif

	#ifndef GEODE_STATICS_updateLayerCapacity
		#define GEODE_STATICS_updateLayerCapacity
		GEODE_AS_STATIC_FUNCTION(updateLayerCapacity) 
	#endif

	#ifndef GEODE_STATICS_updateLevelColors
		#define GEODE_STATICS_updateLevelColors
		GEODE_AS_STATIC_FUNCTION(updateLevelColors) 
	#endif

	#ifndef GEODE_STATICS_updateMaxGameplayY
		#define GEODE_STATICS_updateMaxGameplayY
		GEODE_AS_STATIC_FUNCTION(updateMaxGameplayY) 
	#endif

	#ifndef GEODE_STATICS_updateMGOffsetY
		#define GEODE_STATICS_updateMGOffsetY
		GEODE_AS_STATIC_FUNCTION(updateMGOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateParticles
		#define GEODE_STATICS_updateParticles
		GEODE_AS_STATIC_FUNCTION(updateParticles) 
	#endif

	#ifndef GEODE_STATICS_updatePlatformerTime
		#define GEODE_STATICS_updatePlatformerTime
		GEODE_AS_STATIC_FUNCTION(updatePlatformerTime) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerCollisionBlocks
		#define GEODE_STATICS_updatePlayerCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(updatePlayerCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_updateProximityVolumeEffects
		#define GEODE_STATICS_updateProximityVolumeEffects
		GEODE_AS_STATIC_FUNCTION(updateProximityVolumeEffects) 
	#endif

	#ifndef GEODE_STATICS_updateShaderLayer
		#define GEODE_STATICS_updateShaderLayer
		GEODE_AS_STATIC_FUNCTION(updateShaderLayer) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialGroupData
		#define GEODE_STATICS_updateSpecialGroupData
		GEODE_AS_STATIC_FUNCTION(updateSpecialGroupData) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialLabels
		#define GEODE_STATICS_updateSpecialLabels
		GEODE_AS_STATIC_FUNCTION(updateSpecialLabels) 
	#endif

	#ifndef GEODE_STATICS_updateStaticCameraPos
		#define GEODE_STATICS_updateStaticCameraPos
		GEODE_AS_STATIC_FUNCTION(updateStaticCameraPos) 
	#endif

	#ifndef GEODE_STATICS_updateStaticCameraPosToGroup
		#define GEODE_STATICS_updateStaticCameraPosToGroup
		GEODE_AS_STATIC_FUNCTION(updateStaticCameraPosToGroup) 
	#endif

	#ifndef GEODE_STATICS_updateTimerLabels
		#define GEODE_STATICS_updateTimerLabels
		GEODE_AS_STATIC_FUNCTION(updateTimerLabels) 
	#endif

	#ifndef GEODE_STATICS_updateZoom
		#define GEODE_STATICS_updateZoom
		GEODE_AS_STATIC_FUNCTION(updateZoom) 
	#endif

	#ifndef GEODE_STATICS_visitWithColorFlash
		#define GEODE_STATICS_visitWithColorFlash
		GEODE_AS_STATIC_FUNCTION(visitWithColorFlash) 
	#endif

	#ifndef GEODE_STATICS_volumeForProximityEffect
		#define GEODE_STATICS_volumeForProximityEffect
		GEODE_AS_STATIC_FUNCTION(volumeForProximityEffect) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_convertToClosestDirection
		#define GEODE_CONCEPT_CHECK_convertToClosestDirection
		GEODE_CONCEPT_FUNCTION_CHECK(convertToClosestDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameEventToString
		#define GEODE_CONCEPT_CHECK_gameEventToString
		GEODE_CONCEPT_FUNCTION_CHECK(gameEventToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postUpdate
		#define GEODE_CONCEPT_CHECK_postUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(postUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkForEnd
		#define GEODE_CONCEPT_CHECK_checkForEnd
		GEODE_CONCEPT_FUNCTION_CHECK(checkForEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testTime
		#define GEODE_CONCEPT_CHECK_testTime
		GEODE_CONCEPT_FUNCTION_CHECK(testTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVerifyDamage
		#define GEODE_CONCEPT_CHECK_updateVerifyDamage
		GEODE_CONCEPT_FUNCTION_CHECK(updateVerifyDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAttemptTime
		#define GEODE_CONCEPT_CHECK_updateAttemptTime
		GEODE_CONCEPT_FUNCTION_CHECK(updateAttemptTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTookDamage
		#define GEODE_CONCEPT_CHECK_playerTookDamage
		GEODE_CONCEPT_FUNCTION_CHECK(playerTookDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityForObject
		#define GEODE_CONCEPT_CHECK_opacityForObject
		GEODE_CONCEPT_FUNCTION_CHECK(opacityForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSpeedObjects
		#define GEODE_CONCEPT_CHECK_addToSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(addToSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsCollided
		#define GEODE_CONCEPT_CHECK_objectsCollided
		GEODE_CONCEPT_FUNCTION_CHECK(objectsCollided) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroupTriggered
		#define GEODE_CONCEPT_CHECK_toggleGroupTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroupTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSpawnAbuse
		#define GEODE_CONCEPT_CHECK_checkSpawnAbuse
		GEODE_CONCEPT_FUNCTION_CHECK(checkSpawnAbuse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnObject
		#define GEODE_CONCEPT_CHECK_spawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(spawnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateEndTrigger
		#define GEODE_CONCEPT_CHECK_activateEndTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateEndTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatePlatformerEndTrigger
		#define GEODE_CONCEPT_CHECK_activatePlatformerEndTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatePlatformerEndTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGlitter
		#define GEODE_CONCEPT_CHECK_toggleGlitter
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGlitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyPlayer
		#define GEODE_CONCEPT_CHECK_destroyPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(destroyPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDebugDraw
		#define GEODE_CONCEPT_CHECK_updateDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(updateDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSection
		#define GEODE_CONCEPT_CHECK_addToSection
		GEODE_CONCEPT_FUNCTION_CHECK(addToSection) 
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

	#ifndef GEODE_CONCEPT_CHECK_toggleGroundVisibility
		#define GEODE_CONCEPT_CHECK_toggleGroundVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroundVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMGVisibility
		#define GEODE_CONCEPT_CHECK_toggleMGVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMGVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleHideAttempts
		#define GEODE_CONCEPT_CHECK_toggleHideAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(toggleHideAttempts) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateScreenRotation
		#define GEODE_CONCEPT_CHECK_updateScreenRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateScreenRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverseDirection
		#define GEODE_CONCEPT_CHECK_reverseDirection
		GEODE_CONCEPT_FUNCTION_CHECK(reverseDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateGameplay
		#define GEODE_CONCEPT_CHECK_rotateGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(rotateGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didRotateGameplay
		#define GEODE_CONCEPT_CHECK_didRotateGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(didRotateGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeWarp
		#define GEODE_CONCEPT_CHECK_updateTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyTimeWarp
		#define GEODE_CONCEPT_CHECK_applyTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(applyTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playGravityEffect
		#define GEODE_CONCEPT_CHECK_playGravityEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playGravityEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		#define GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		GEODE_CONCEPT_FUNCTION_CHECK(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomParticle
		#define GEODE_CONCEPT_CHECK_createCustomParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomParticle) 
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

	#ifndef GEODE_CONCEPT_CHECK_flipArt
		#define GEODE_CONCEPT_CHECK_flipArt
		GEODE_CONCEPT_FUNCTION_CHECK(flipArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addKeyframe
		#define GEODE_CONCEPT_CHECK_addKeyframe
		GEODE_CONCEPT_FUNCTION_CHECK(addKeyframe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeLabel
		#define GEODE_CONCEPT_CHECK_updateTimeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSnapshot
		#define GEODE_CONCEPT_CHECK_checkSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(checkSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleProgressbar
		#define GEODE_CONCEPT_CHECK_toggleProgressbar
		GEODE_CONCEPT_FUNCTION_CHECK(toggleProgressbar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleInfoLabel
		#define GEODE_CONCEPT_CHECK_toggleInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(toggleInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllCheckpoints
		#define GEODE_CONCEPT_CHECK_removeAllCheckpoints
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllCheckpoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMusicInPractice
		#define GEODE_CONCEPT_CHECK_toggleMusicInPractice
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMusicInPractice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCheckpoints
		#define GEODE_CONCEPT_CHECK_processCheckpoints
		GEODE_CONCEPT_FUNCTION_CHECK(processCheckpoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLevel
		#define GEODE_CONCEPT_CHECK_resetLevel
		GEODE_CONCEPT_FUNCTION_CHECK(resetLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateCustomRing
		#define GEODE_CONCEPT_CHECK_activateCustomRing
		GEODE_CONCEPT_FUNCTION_CHECK(activateCustomRing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateEventTrigger
		#define GEODE_CONCEPT_CHECK_activateEventTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateEventTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateItemCompareTrigger
		#define GEODE_CONCEPT_CHECK_activateItemCompareTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateItemCompareTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateItemEditTrigger
		#define GEODE_CONCEPT_CHECK_activateItemEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateItemEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateObjectControlTrigger
		#define GEODE_CONCEPT_CHECK_activateObjectControlTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateObjectControlTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatePersistentItemTrigger
		#define GEODE_CONCEPT_CHECK_activatePersistentItemTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatePersistentItemTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatePlayerControlTrigger
		#define GEODE_CONCEPT_CHECK_activatePlayerControlTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatePlayerControlTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateResetTrigger
		#define GEODE_CONCEPT_CHECK_activateResetTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateResetTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSFXEditTrigger
		#define GEODE_CONCEPT_CHECK_activateSFXEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSFXEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSFXTrigger
		#define GEODE_CONCEPT_CHECK_activateSFXTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSFXTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSongEditTrigger
		#define GEODE_CONCEPT_CHECK_activateSongEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSongEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSongTrigger
		#define GEODE_CONCEPT_CHECK_activateSongTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSongTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateTimerTrigger
		#define GEODE_CONCEPT_CHECK_activateTimerTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateTimerTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAreaEffect
		#define GEODE_CONCEPT_CHECK_addAreaEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addAreaEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomEnterEffect
		#define GEODE_CONCEPT_CHECK_addCustomEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGuideArt
		#define GEODE_CONCEPT_CHECK_addGuideArt
		GEODE_CONCEPT_FUNCTION_CHECK(addGuideArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectCounter
		#define GEODE_CONCEPT_CHECK_addObjectCounter
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectCounter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPickupTrigger
		#define GEODE_CONCEPT_CHECK_addPickupTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(addPickupTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPoints
		#define GEODE_CONCEPT_CHECK_addPoints
		GEODE_CONCEPT_FUNCTION_CHECK(addPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addProximityVolumeEffect
		#define GEODE_CONCEPT_CHECK_addProximityVolumeEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addProximityVolumeEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRemapTargets
		#define GEODE_CONCEPT_CHECK_addRemapTargets
		GEODE_CONCEPT_FUNCTION_CHECK(addRemapTargets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroupParents
		#define GEODE_CONCEPT_CHECK_addToGroupParents
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroupParents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroups
		#define GEODE_CONCEPT_CHECK_addToGroups
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToObjectsToShow
		#define GEODE_CONCEPT_CHECK_addToObjectsToShow
		GEODE_CONCEPT_FUNCTION_CHECK(addToObjectsToShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addUIObject
		#define GEODE_CONCEPT_CHECK_addUIObject
		GEODE_CONCEPT_FUNCTION_CHECK(addUIObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInDualGroundNew
		#define GEODE_CONCEPT_CHECK_animateInDualGroundNew
		GEODE_CONCEPT_FUNCTION_CHECK(animateInDualGroundNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInGroundNew
		#define GEODE_CONCEPT_CHECK_animateInGroundNew
		GEODE_CONCEPT_FUNCTION_CHECK(animateInGroundNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateOutGroundNew
		#define GEODE_CONCEPT_CHECK_animateOutGroundNew
		GEODE_CONCEPT_FUNCTION_CHECK(animateOutGroundNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animatePortalY
		#define GEODE_CONCEPT_CHECK_animatePortalY
		GEODE_CONCEPT_FUNCTION_CHECK(animatePortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyLevelSettings
		#define GEODE_CONCEPT_CHECK_applyLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(applyLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyRemap
		#define GEODE_CONCEPT_CHECK_applyRemap
		GEODE_CONCEPT_FUNCTION_CHECK(applyRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applySFXEditTrigger
		#define GEODE_CONCEPT_CHECK_applySFXEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(applySFXEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyShake
		#define GEODE_CONCEPT_CHECK_applyShake
		GEODE_CONCEPT_FUNCTION_CHECK(applyShake) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_assignNewStickyGroups
		#define GEODE_CONCEPT_CHECK_assignNewStickyGroups
		GEODE_CONCEPT_FUNCTION_CHECK(assignNewStickyGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_asyncBGLoaded
		#define GEODE_CONCEPT_CHECK_asyncBGLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(asyncBGLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_asyncGLoaded
		#define GEODE_CONCEPT_CHECK_asyncGLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(asyncGLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_asyncMGLoaded
		#define GEODE_CONCEPT_CHECK_asyncMGLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(asyncMGLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_atlasValue
		#define GEODE_CONCEPT_CHECK_atlasValue
		GEODE_CONCEPT_FUNCTION_CHECK(atlasValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bumpPlayer
		#define GEODE_CONCEPT_CHECK_bumpPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(bumpPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buttonIDToButton
		#define GEODE_CONCEPT_CHECK_buttonIDToButton
		GEODE_CONCEPT_FUNCTION_CHECK(buttonIDToButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buttonIsRelevant
		#define GEODE_CONCEPT_CHECK_buttonIsRelevant
		GEODE_CONCEPT_FUNCTION_CHECK(buttonIsRelevant) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateColorGroups
		#define GEODE_CONCEPT_CHECK_calculateColorGroups
		GEODE_CONCEPT_FUNCTION_CHECK(calculateColorGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cameraMoveX
		#define GEODE_CONCEPT_CHECK_cameraMoveX
		GEODE_CONCEPT_FUNCTION_CHECK(cameraMoveX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cameraMoveY
		#define GEODE_CONCEPT_CHECK_cameraMoveY
		GEODE_CONCEPT_FUNCTION_CHECK(cameraMoveY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canBeActivatedByPlayer
		#define GEODE_CONCEPT_CHECK_canBeActivatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(canBeActivatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canProcessSFX
		#define GEODE_CONCEPT_CHECK_canProcessSFX
		GEODE_CONCEPT_FUNCTION_CHECK(canProcessSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canTouchObject
		#define GEODE_CONCEPT_CHECK_canTouchObject
		GEODE_CONCEPT_FUNCTION_CHECK(canTouchObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCameraLimitAfterTeleport
		#define GEODE_CONCEPT_CHECK_checkCameraLimitAfterTeleport
		GEODE_CONCEPT_FUNCTION_CHECK(checkCameraLimitAfterTeleport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollision
		#define GEODE_CONCEPT_CHECK_checkCollision
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollisionBlocks
		#define GEODE_CONCEPT_CHECK_checkCollisionBlocks
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollisionBlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollisions
		#define GEODE_CONCEPT_CHECK_checkCollisions
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollisions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkRepellPlayer
		#define GEODE_CONCEPT_CHECK_checkRepellPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(checkRepellPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSpawnObjects
		#define GEODE_CONCEPT_CHECK_checkSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(checkSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimMoveAction
		#define GEODE_CONCEPT_CHECK_claimMoveAction
		GEODE_CONCEPT_FUNCTION_CHECK(claimMoveAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimParticle
		#define GEODE_CONCEPT_CHECK_claimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimRotationAction
		#define GEODE_CONCEPT_CHECK_claimRotationAction
		GEODE_CONCEPT_FUNCTION_CHECK(claimRotationAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearActivatedAudioTriggers
		#define GEODE_CONCEPT_CHECK_clearActivatedAudioTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(clearActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPickedUpItems
		#define GEODE_CONCEPT_CHECK_clearPickedUpItems
		GEODE_CONCEPT_FUNCTION_CHECK(clearPickedUpItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectedObject
		#define GEODE_CONCEPT_CHECK_collectedObject
		GEODE_CONCEPT_FUNCTION_CHECK(collectedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collisionCheckObjects
		#define GEODE_CONCEPT_CHECK_collisionCheckObjects
		GEODE_CONCEPT_FUNCTION_CHECK(collisionCheckObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlAdvancedFollowCommand
		#define GEODE_CONCEPT_CHECK_controlAdvancedFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlAreaEffect
		#define GEODE_CONCEPT_CHECK_controlAreaEffect
		GEODE_CONCEPT_FUNCTION_CHECK(controlAreaEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlAreaEffectWithID
		#define GEODE_CONCEPT_CHECK_controlAreaEffectWithID
		GEODE_CONCEPT_FUNCTION_CHECK(controlAreaEffectWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlDynamicCommand
		#define GEODE_CONCEPT_CHECK_controlDynamicCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlDynamicCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlDynamicMoveCommand
		#define GEODE_CONCEPT_CHECK_controlDynamicMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlDynamicMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlDynamicRotateCommand
		#define GEODE_CONCEPT_CHECK_controlDynamicRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlDynamicRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlEventLink
		#define GEODE_CONCEPT_CHECK_controlEventLink
		GEODE_CONCEPT_FUNCTION_CHECK(controlEventLink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlGradientTrigger
		#define GEODE_CONCEPT_CHECK_controlGradientTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(controlGradientTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlTriggersInGroup
		#define GEODE_CONCEPT_CHECK_controlTriggersInGroup
		GEODE_CONCEPT_FUNCTION_CHECK(controlTriggersInGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlTriggersWithControlID
		#define GEODE_CONCEPT_CHECK_controlTriggersWithControlID
		GEODE_CONCEPT_FUNCTION_CHECK(controlTriggersWithControlID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countCollectedUserCoins
		#define GEODE_CONCEPT_CHECK_countCollectedUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(countCollectedUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createBackground
		#define GEODE_CONCEPT_CHECK_createBackground
		GEODE_CONCEPT_FUNCTION_CHECK(createBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGroundLayer
		#define GEODE_CONCEPT_CHECK_createGroundLayer
		GEODE_CONCEPT_FUNCTION_CHECK(createGroundLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMiddleground
		#define GEODE_CONCEPT_CHECK_createMiddleground
		GEODE_CONCEPT_FUNCTION_CHECK(createMiddleground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewKeyframeAnim
		#define GEODE_CONCEPT_CHECK_createNewKeyframeAnim
		GEODE_CONCEPT_FUNCTION_CHECK(createNewKeyframeAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createParticle
		#define GEODE_CONCEPT_CHECK_createParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPlayer
		#define GEODE_CONCEPT_CHECK_createPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(createPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPlayerCollisionBlock
		#define GEODE_CONCEPT_CHECK_createPlayerCollisionBlock
		GEODE_CONCEPT_FUNCTION_CHECK(createPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextLayers
		#define GEODE_CONCEPT_CHECK_createTextLayers
		GEODE_CONCEPT_FUNCTION_CHECK(createTextLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_damagingObjectsInRect
		#define GEODE_CONCEPT_CHECK_damagingObjectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(damagingObjectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyObject
		#define GEODE_CONCEPT_CHECK_destroyObject
		GEODE_CONCEPT_FUNCTION_CHECK(destroyObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterDualMode
		#define GEODE_CONCEPT_CHECK_enterDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(enterDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitStaticCamera
		#define GEODE_CONCEPT_CHECK_exitStaticCamera
		GEODE_CONCEPT_FUNCTION_CHECK(exitStaticCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipFinished
		#define GEODE_CONCEPT_CHECK_flipFinished
		GEODE_CONCEPT_FUNCTION_CHECK(flipFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipGravity
		#define GEODE_CONCEPT_CHECK_flipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(flipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipObjects
		#define GEODE_CONCEPT_CHECK_flipObjects
		GEODE_CONCEPT_FUNCTION_CHECK(flipObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameEventTriggered
		#define GEODE_CONCEPT_CHECK_gameEventTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(gameEventTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateEnterEasingBuffer
		#define GEODE_CONCEPT_CHECK_generateEnterEasingBuffer
		GEODE_CONCEPT_FUNCTION_CHECK(generateEnterEasingBuffer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateEnterEasingBuffers
		#define GEODE_CONCEPT_CHECK_generateEnterEasingBuffers
		GEODE_CONCEPT_FUNCTION_CHECK(generateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generatePickupAnimRandVal
		#define GEODE_CONCEPT_CHECK_generatePickupAnimRandVal
		GEODE_CONCEPT_FUNCTION_CHECK(generatePickupAnimRandVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateSpawnRemap
		#define GEODE_CONCEPT_CHECK_generateSpawnRemap
		GEODE_CONCEPT_FUNCTION_CHECK(generateSpawnRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateTargetGroups
		#define GEODE_CONCEPT_CHECK_generateTargetGroups
		GEODE_CONCEPT_FUNCTION_CHECK(generateTargetGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateVisibilityGroups
		#define GEODE_CONCEPT_CHECK_generateVisibilityGroups
		GEODE_CONCEPT_FUNCTION_CHECK(generateVisibilityGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveOrderSpawnObjects
		#define GEODE_CONCEPT_CHECK_getActiveOrderSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveOrderSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAreaObjectValue
		#define GEODE_CONCEPT_CHECK_getAreaObjectValue
		GEODE_CONCEPT_FUNCTION_CHECK(getAreaObjectValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBumpMod
		#define GEODE_CONCEPT_CHECK_getBumpMod
		GEODE_CONCEPT_FUNCTION_CHECK(getBumpMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCameraEdgeValue
		#define GEODE_CONCEPT_CHECK_getCameraEdgeValue
		GEODE_CONCEPT_FUNCTION_CHECK(getCameraEdgeValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCapacityString
		#define GEODE_CONCEPT_CHECK_getCapacityString
		GEODE_CONCEPT_FUNCTION_CHECK(getCapacityString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCenterGroupObject
		#define GEODE_CONCEPT_CHECK_getCenterGroupObject
		GEODE_CONCEPT_FUNCTION_CHECK(getCenterGroupObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomEnterEffects
		#define GEODE_CONCEPT_CHECK_getCustomEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEasedAreaValue
		#define GEODE_CONCEPT_CHECK_getEasedAreaValue
		GEODE_CONCEPT_FUNCTION_CHECK(getEasedAreaValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnterEasingKey
		#define GEODE_CONCEPT_CHECK_getEnterEasingKey
		GEODE_CONCEPT_FUNCTION_CHECK(getEnterEasingKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnterEasingValue
		#define GEODE_CONCEPT_CHECK_getEnterEasingValue
		GEODE_CONCEPT_FUNCTION_CHECK(getEnterEasingValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFollowSpeedVal
		#define GEODE_CONCEPT_CHECK_getFollowSpeedVal
		GEODE_CONCEPT_FUNCTION_CHECK(getFollowSpeedVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundHeight
		#define GEODE_CONCEPT_CHECK_getGroundHeight
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundHeightForMode
		#define GEODE_CONCEPT_CHECK_getGroundHeightForMode
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroup
		#define GEODE_CONCEPT_CHECK_getGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupParent
		#define GEODE_CONCEPT_CHECK_getGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupParentsString
		#define GEODE_CONCEPT_CHECK_getGroupParentsString
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupParentsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemValue
		#define GEODE_CONCEPT_CHECK_getItemValue
		GEODE_CONCEPT_FUNCTION_CHECK(getItemValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxPortalY
		#define GEODE_CONCEPT_CHECK_getMaxPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinDistance
		#define GEODE_CONCEPT_CHECK_getMinDistance
		GEODE_CONCEPT_FUNCTION_CHECK(getMinDistance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinPortalY
		#define GEODE_CONCEPT_CHECK_getMinPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMinPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getModifiedDelta
		#define GEODE_CONCEPT_CHECK_getModifiedDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getModifiedDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveTargetDelta
		#define GEODE_CONCEPT_CHECK_getMoveTargetDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveTargetDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOptimizedGroup
		#define GEODE_CONCEPT_CHECK_getOptimizedGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getOptimizedGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOtherPlayer
		#define GEODE_CONCEPT_CHECK_getOtherPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getOtherPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleKey
		#define GEODE_CONCEPT_CHECK_getParticleKey
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleKey2
		#define GEODE_CONCEPT_CHECK_getParticleKey2
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleKey2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerButtonID
		#define GEODE_CONCEPT_CHECK_getPlayerButtonID
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerButtonID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayTimerFullSeconds
		#define GEODE_CONCEPT_CHECK_getPlayTimerFullSeconds
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayTimerFullSeconds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayTimerMilli
		#define GEODE_CONCEPT_CHECK_getPlayTimerMilli
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayTimerMilli) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalTarget
		#define GEODE_CONCEPT_CHECK_getPortalTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalTargetPos
		#define GEODE_CONCEPT_CHECK_getPortalTargetPos
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalTargetPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordExtra
		#define GEODE_CONCEPT_CHECK_getRecordExtra
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordExtra) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordString
		#define GEODE_CONCEPT_CHECK_getRecordString
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotateCommandTargets
		#define GEODE_CONCEPT_CHECK_getRotateCommandTargets
		GEODE_CONCEPT_FUNCTION_CHECK(getRotateCommandTargets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedPosition
		#define GEODE_CONCEPT_CHECK_getSavedPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaledGroundHeight
		#define GEODE_CONCEPT_CHECK_getScaledGroundHeight
		GEODE_CONCEPT_FUNCTION_CHECK(getScaledGroundHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSingleGroupObject
		#define GEODE_CONCEPT_CHECK_getSingleGroupObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSingleGroupObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialKey
		#define GEODE_CONCEPT_CHECK_getSpecialKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStaticGroup
		#define GEODE_CONCEPT_CHECK_getStaticGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getStaticGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStickyGroup
		#define GEODE_CONCEPT_CHECK_getStickyGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getStickyGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetFlyCameraY
		#define GEODE_CONCEPT_CHECK_getTargetFlyCameraY
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetFlyCameraY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetGroup
		#define GEODE_CONCEPT_CHECK_getTargetGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetGroupOrigin
		#define GEODE_CONCEPT_CHECK_getTargetGroupOrigin
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetGroupOrigin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravBumpPlayer
		#define GEODE_CONCEPT_CHECK_gravBumpPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(gravBumpPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupStickyObjects
		#define GEODE_CONCEPT_CHECK_groupStickyObjects
		GEODE_CONCEPT_FUNCTION_CHECK(groupStickyObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleButton
		#define GEODE_CONCEPT_CHECK_handleButton
		GEODE_CONCEPT_FUNCTION_CHECK(handleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasItem
		#define GEODE_CONCEPT_CHECK_hasItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUniqueCoin
		#define GEODE_CONCEPT_CHECK_hasUniqueCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasUniqueCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_increaseBatchNodeCapacity
		#define GEODE_CONCEPT_CHECK_increaseBatchNodeCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(increaseBatchNodeCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isButtonAllowed
		#define GEODE_CONCEPT_CHECK_isButtonAllowed
		GEODE_CONCEPT_FUNCTION_CHECK(isButtonAllowed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipping
		#define GEODE_CONCEPT_CHECK_isFlipping
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPlayer2Button
		#define GEODE_CONCEPT_CHECK_isPlayer2Button
		GEODE_CONCEPT_FUNCTION_CHECK(isPlayer2Button) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lightningFlash
		#define GEODE_CONCEPT_CHECK_lightningFlash
		GEODE_CONCEPT_FUNCTION_CHECK(lightningFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGroupParentsFromString
		#define GEODE_CONCEPT_CHECK_loadGroupParentsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadGroupParentsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelSettings
		#define GEODE_CONCEPT_CHECK_loadLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadStartPosObject
		#define GEODE_CONCEPT_CHECK_loadStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadUpToPosition
		#define GEODE_CONCEPT_CHECK_loadUpToPosition
		GEODE_CONCEPT_FUNCTION_CHECK(loadUpToPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_maxZOrderForShaderZ
		#define GEODE_CONCEPT_CHECK_maxZOrderForShaderZ
		GEODE_CONCEPT_FUNCTION_CHECK(maxZOrderForShaderZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_minZOrderForShaderZ
		#define GEODE_CONCEPT_CHECK_minZOrderForShaderZ
		GEODE_CONCEPT_FUNCTION_CHECK(minZOrderForShaderZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_modifyGroupPhysics
		#define GEODE_CONCEPT_CHECK_modifyGroupPhysics
		GEODE_CONCEPT_FUNCTION_CHECK(modifyGroupPhysics) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_modifyObjectPhysics
		#define GEODE_CONCEPT_CHECK_modifyObjectPhysics
		GEODE_CONCEPT_FUNCTION_CHECK(modifyObjectPhysics) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveAreaObject
		#define GEODE_CONCEPT_CHECK_moveAreaObject
		GEODE_CONCEPT_FUNCTION_CHECK(moveAreaObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveCameraToPos
		#define GEODE_CONCEPT_CHECK_moveCameraToPos
		GEODE_CONCEPT_FUNCTION_CHECK(moveCameraToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObject
		#define GEODE_CONCEPT_CHECK_moveObject
		GEODE_CONCEPT_FUNCTION_CHECK(moveObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjects
		#define GEODE_CONCEPT_CHECK_moveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjectsSilent
		#define GEODE_CONCEPT_CHECK_moveObjectsSilent
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjectsSilent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjectToStaticGroup
		#define GEODE_CONCEPT_CHECK_moveObjectToStaticGroup
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjectToStaticGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectIntersectsCircle
		#define GEODE_CONCEPT_CHECK_objectIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectTypeToGameEvent
		#define GEODE_CONCEPT_CHECK_objectTypeToGameEvent
		GEODE_CONCEPT_FUNCTION_CHECK(objectTypeToGameEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_optimizeMoveGroups
		#define GEODE_CONCEPT_CHECK_optimizeMoveGroups
		GEODE_CONCEPT_FUNCTION_CHECK(optimizeMoveGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderSpawnObjects
		#define GEODE_CONCEPT_CHECK_orderSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(orderSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentForZLayer
		#define GEODE_CONCEPT_CHECK_parentForZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(parentForZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAudio
		#define GEODE_CONCEPT_CHECK_pauseAudio
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performMathOperation
		#define GEODE_CONCEPT_CHECK_performMathOperation
		GEODE_CONCEPT_FUNCTION_CHECK(performMathOperation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performMathRounding
		#define GEODE_CONCEPT_CHECK_performMathRounding
		GEODE_CONCEPT_FUNCTION_CHECK(performMathRounding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickupItem
		#define GEODE_CONCEPT_CHECK_pickupItem
		GEODE_CONCEPT_FUNCTION_CHECK(pickupItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playAnimationCommand
		#define GEODE_CONCEPT_CHECK_playAnimationCommand
		GEODE_CONCEPT_FUNCTION_CHECK(playAnimationCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerCircleCollision
		#define GEODE_CONCEPT_CHECK_playerCircleCollision
		GEODE_CONCEPT_FUNCTION_CHECK(playerCircleCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerIntersectsCircle
		#define GEODE_CONCEPT_CHECK_playerIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(playerIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchedObject
		#define GEODE_CONCEPT_CHECK_playerTouchedObject
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchedRing
		#define GEODE_CONCEPT_CHECK_playerTouchedRing
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchedRing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchedTrigger
		#define GEODE_CONCEPT_CHECK_playerTouchedTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchedTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerWasTouchingObject
		#define GEODE_CONCEPT_CHECK_playerWasTouchingObject
		GEODE_CONCEPT_FUNCTION_CHECK(playerWasTouchingObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerWillSwitchMode
		#define GEODE_CONCEPT_CHECK_playerWillSwitchMode
		GEODE_CONCEPT_FUNCTION_CHECK(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playExitDualEffect
		#define GEODE_CONCEPT_CHECK_playExitDualEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playExitDualEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playFlashEffect
		#define GEODE_CONCEPT_CHECK_playFlashEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playFlashEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playKeyframeAnimation
		#define GEODE_CONCEPT_CHECK_playKeyframeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playKeyframeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSpeedParticle
		#define GEODE_CONCEPT_CHECK_playSpeedParticle
		GEODE_CONCEPT_FUNCTION_CHECK(playSpeedParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForShaderTarget
		#define GEODE_CONCEPT_CHECK_positionForShaderTarget
		GEODE_CONCEPT_FUNCTION_CHECK(positionForShaderTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionUIObjects
		#define GEODE_CONCEPT_CHECK_positionUIObjects
		GEODE_CONCEPT_FUNCTION_CHECK(positionUIObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareSavePositionObjects
		#define GEODE_CONCEPT_CHECK_prepareSavePositionObjects
		GEODE_CONCEPT_FUNCTION_CHECK(prepareSavePositionObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareTransformParent
		#define GEODE_CONCEPT_CHECK_prepareTransformParent
		GEODE_CONCEPT_FUNCTION_CHECK(prepareTransformParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preResumeGame
		#define GEODE_CONCEPT_CHECK_preResumeGame
		GEODE_CONCEPT_FUNCTION_CHECK(preResumeGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preUpdateVisibility
		#define GEODE_CONCEPT_CHECK_preUpdateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(preUpdateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processActivatedAudioTriggers
		#define GEODE_CONCEPT_CHECK_processActivatedAudioTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(processActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAdvancedFollowAction
		#define GEODE_CONCEPT_CHECK_processAdvancedFollowAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAdvancedFollowAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAdvancedFollowActions
		#define GEODE_CONCEPT_CHECK_processAdvancedFollowActions
		GEODE_CONCEPT_FUNCTION_CHECK(processAdvancedFollowActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaActions
		#define GEODE_CONCEPT_CHECK_processAreaActions
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaEffects
		#define GEODE_CONCEPT_CHECK_processAreaEffects
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaFadeGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaFadeGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaFadeGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaMoveGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaMoveGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaMoveGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaRotateGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaRotateGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaRotateGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaTintGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaTintGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaTintGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaTransformGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaTransformGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaTransformGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaVisualActions
		#define GEODE_CONCEPT_CHECK_processAreaVisualActions
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaVisualActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCameraObject
		#define GEODE_CONCEPT_CHECK_processCameraObject
		GEODE_CONCEPT_FUNCTION_CHECK(processCameraObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCommands
		#define GEODE_CONCEPT_CHECK_processCommands
		GEODE_CONCEPT_FUNCTION_CHECK(processCommands) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processDynamicObjectActions
		#define GEODE_CONCEPT_CHECK_processDynamicObjectActions
		GEODE_CONCEPT_FUNCTION_CHECK(processDynamicObjectActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processFollowActions
		#define GEODE_CONCEPT_CHECK_processFollowActions
		GEODE_CONCEPT_FUNCTION_CHECK(processFollowActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processItems
		#define GEODE_CONCEPT_CHECK_processItems
		GEODE_CONCEPT_FUNCTION_CHECK(processItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processMoveActions
		#define GEODE_CONCEPT_CHECK_processMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(processMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processMoveActionsStep
		#define GEODE_CONCEPT_CHECK_processMoveActionsStep
		GEODE_CONCEPT_FUNCTION_CHECK(processMoveActionsStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processOptionsTrigger
		#define GEODE_CONCEPT_CHECK_processOptionsTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(processOptionsTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processPlayerFollowActions
		#define GEODE_CONCEPT_CHECK_processPlayerFollowActions
		GEODE_CONCEPT_FUNCTION_CHECK(processPlayerFollowActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processQueuedAudioTriggers
		#define GEODE_CONCEPT_CHECK_processQueuedAudioTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(processQueuedAudioTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processQueuedButtons
		#define GEODE_CONCEPT_CHECK_processQueuedButtons
		GEODE_CONCEPT_FUNCTION_CHECK(processQueuedButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processReplayCheckpoint
		#define GEODE_CONCEPT_CHECK_processReplayCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(processReplayCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processRotationActions
		#define GEODE_CONCEPT_CHECK_processRotationActions
		GEODE_CONCEPT_FUNCTION_CHECK(processRotationActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSFXObjects
		#define GEODE_CONCEPT_CHECK_processSFXObjects
		GEODE_CONCEPT_FUNCTION_CHECK(processSFXObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSFXState
		#define GEODE_CONCEPT_CHECK_processSFXState
		GEODE_CONCEPT_FUNCTION_CHECK(processSFXState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSongState
		#define GEODE_CONCEPT_CHECK_processSongState
		GEODE_CONCEPT_FUNCTION_CHECK(processSongState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processStateObjects
		#define GEODE_CONCEPT_CHECK_processStateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(processStateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processTransformActions
		#define GEODE_CONCEPT_CHECK_processTransformActions
		GEODE_CONCEPT_FUNCTION_CHECK(processTransformActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueButton
		#define GEODE_CONCEPT_CHECK_queueButton
		GEODE_CONCEPT_FUNCTION_CHECK(queueButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueTimeWarp
		#define GEODE_CONCEPT_CHECK_queueTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(queueTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reAddToStickyGroup
		#define GEODE_CONCEPT_CHECK_reAddToStickyGroup
		GEODE_CONCEPT_FUNCTION_CHECK(reAddToStickyGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordAction
		#define GEODE_CONCEPT_CHECK_recordAction
		GEODE_CONCEPT_FUNCTION_CHECK(recordAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rectIntersectsCircle
		#define GEODE_CONCEPT_CHECK_rectIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(rectIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshCounterLabels
		#define GEODE_CONCEPT_CHECK_refreshCounterLabels
		GEODE_CONCEPT_FUNCTION_CHECK(refreshCounterLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshKeyframeAnims
		#define GEODE_CONCEPT_CHECK_refreshKeyframeAnims
		GEODE_CONCEPT_FUNCTION_CHECK(refreshKeyframeAnims) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_regenerateEnterEasingBuffers
		#define GEODE_CONCEPT_CHECK_regenerateEnterEasingBuffers
		GEODE_CONCEPT_FUNCTION_CHECK(regenerateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerSpawnRemap
		#define GEODE_CONCEPT_CHECK_registerSpawnRemap
		GEODE_CONCEPT_FUNCTION_CHECK(registerSpawnRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerStateObject
		#define GEODE_CONCEPT_CHECK_registerStateObject
		GEODE_CONCEPT_FUNCTION_CHECK(registerStateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeBackground
		#define GEODE_CONCEPT_CHECK_removeBackground
		GEODE_CONCEPT_FUNCTION_CHECK(removeBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeCustomEnterEffects
		#define GEODE_CONCEPT_CHECK_removeCustomEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(removeCustomEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroupParents
		#define GEODE_CONCEPT_CHECK_removeFromGroupParents
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroupParents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroups
		#define GEODE_CONCEPT_CHECK_removeFromGroups
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromStickyGroup
		#define GEODE_CONCEPT_CHECK_removeFromStickyGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromStickyGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroundLayer
		#define GEODE_CONCEPT_CHECK_removeGroundLayer
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroundLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroupParent
		#define GEODE_CONCEPT_CHECK_removeGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeKeyframe
		#define GEODE_CONCEPT_CHECK_removeKeyframe
		GEODE_CONCEPT_FUNCTION_CHECK(removeKeyframe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMiddleground
		#define GEODE_CONCEPT_CHECK_removeMiddleground
		GEODE_CONCEPT_FUNCTION_CHECK(removeMiddleground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectFromSection
		#define GEODE_CONCEPT_CHECK_removeObjectFromSection
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectFromSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePlayer2
		#define GEODE_CONCEPT_CHECK_removePlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(removePlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeReleasedButtons
		#define GEODE_CONCEPT_CHECK_removeReleasedButtons
		GEODE_CONCEPT_FUNCTION_CHECK(removeReleasedButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTemporaryParticles
		#define GEODE_CONCEPT_CHECK_removeTemporaryParticles
		GEODE_CONCEPT_FUNCTION_CHECK(removeTemporaryParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderObjectSection
		#define GEODE_CONCEPT_CHECK_reorderObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(reorderObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reparentObject
		#define GEODE_CONCEPT_CHECK_reparentObject
		GEODE_CONCEPT_FUNCTION_CHECK(reparentObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetActiveEnterEffects
		#define GEODE_CONCEPT_CHECK_resetActiveEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(resetActiveEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAreaObjectValues
		#define GEODE_CONCEPT_CHECK_resetAreaObjectValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetAreaObjectValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAudio
		#define GEODE_CONCEPT_CHECK_resetAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resetAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCamera
		#define GEODE_CONCEPT_CHECK_resetCamera
		GEODE_CONCEPT_FUNCTION_CHECK(resetCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGradientLayers
		#define GEODE_CONCEPT_CHECK_resetGradientLayers
		GEODE_CONCEPT_FUNCTION_CHECK(resetGradientLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGroupCounters
		#define GEODE_CONCEPT_CHECK_resetGroupCounters
		GEODE_CONCEPT_FUNCTION_CHECK(resetGroupCounters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLevelVariables
		#define GEODE_CONCEPT_CHECK_resetLevelVariables
		GEODE_CONCEPT_FUNCTION_CHECK(resetLevelVariables) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMoveOptimizedValue
		#define GEODE_CONCEPT_CHECK_resetMoveOptimizedValue
		GEODE_CONCEPT_FUNCTION_CHECK(resetMoveOptimizedValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPlayer
		#define GEODE_CONCEPT_CHECK_resetPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(resetPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetRecord
		#define GEODE_CONCEPT_CHECK_resetRecord
		GEODE_CONCEPT_FUNCTION_CHECK(resetRecord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetRecordFull
		#define GEODE_CONCEPT_CHECK_resetRecordFull
		GEODE_CONCEPT_FUNCTION_CHECK(resetRecordFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSongTriggerValues
		#define GEODE_CONCEPT_CHECK_resetSongTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetSongTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSpawnChannelIndex
		#define GEODE_CONCEPT_CHECK_resetSpawnChannelIndex
		GEODE_CONCEPT_FUNCTION_CHECK(resetSpawnChannelIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStaticCamera
		#define GEODE_CONCEPT_CHECK_resetStaticCamera
		GEODE_CONCEPT_FUNCTION_CHECK(resetStaticCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoppedAreaObjects
		#define GEODE_CONCEPT_CHECK_resetStoppedAreaObjects
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoppedAreaObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreAllUIObjects
		#define GEODE_CONCEPT_CHECK_restoreAllUIObjects
		GEODE_CONCEPT_FUNCTION_CHECK(restoreAllUIObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetX
		#define GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(restoreDefaultGameplayOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetY
		#define GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(restoreDefaultGameplayOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreRemap
		#define GEODE_CONCEPT_CHECK_restoreRemap
		GEODE_CONCEPT_FUNCTION_CHECK(restoreRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAudio
		#define GEODE_CONCEPT_CHECK_resumeAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateAreaObjects
		#define GEODE_CONCEPT_CHECK_rotateAreaObjects
		GEODE_CONCEPT_FUNCTION_CHECK(rotateAreaObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateObject
		#define GEODE_CONCEPT_CHECK_rotateObject
		GEODE_CONCEPT_FUNCTION_CHECK(rotateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateObjects
		#define GEODE_CONCEPT_CHECK_rotateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(rotateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGroupParent
		#define GEODE_CONCEPT_CHECK_setGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(setGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPosObject
		#define GEODE_CONCEPT_CHECK_setStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLayers
		#define GEODE_CONCEPT_CHECK_setupLayers
		GEODE_CONCEPT_FUNCTION_CHECK(setupLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelStart
		#define GEODE_CONCEPT_CHECK_setupLevelStart
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupReplay
		#define GEODE_CONCEPT_CHECK_setupReplay
		GEODE_CONCEPT_FUNCTION_CHECK(setupReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shakeCamera
		#define GEODE_CONCEPT_CHECK_shakeCamera
		GEODE_CONCEPT_FUNCTION_CHECK(shakeCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldExitHackedLevel
		#define GEODE_CONCEPT_CHECK_shouldExitHackedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(shouldExitHackedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldUseSubstepForButton
		#define GEODE_CONCEPT_CHECK_shouldUseSubstepForButton
		GEODE_CONCEPT_FUNCTION_CHECK(shouldUseSubstepForButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortAllGroupsX
		#define GEODE_CONCEPT_CHECK_sortAllGroupsX
		GEODE_CONCEPT_FUNCTION_CHECK(sortAllGroupsX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortGroups
		#define GEODE_CONCEPT_CHECK_sortGroups
		GEODE_CONCEPT_FUNCTION_CHECK(sortGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSectionVector
		#define GEODE_CONCEPT_CHECK_sortSectionVector
		GEODE_CONCEPT_FUNCTION_CHECK(sortSectionVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortStickyGroups
		#define GEODE_CONCEPT_CHECK_sortStickyGroups
		GEODE_CONCEPT_FUNCTION_CHECK(sortStickyGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroupTriggered
		#define GEODE_CONCEPT_CHECK_spawnGroupTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroupTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnObjectsInOrder
		#define GEODE_CONCEPT_CHECK_spawnObjectsInOrder
		GEODE_CONCEPT_FUNCTION_CHECK(spawnObjectsInOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnParticle
		#define GEODE_CONCEPT_CHECK_spawnParticle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnParticleTrigger
		#define GEODE_CONCEPT_CHECK_spawnParticleTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(spawnParticleTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnPlayer2
		#define GEODE_CONCEPT_CHECK_spawnPlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(spawnPlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_speedForShaderTarget
		#define GEODE_CONCEPT_CHECK_speedForShaderTarget
		GEODE_CONCEPT_FUNCTION_CHECK(speedForShaderTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_staticObjectsInRect
		#define GEODE_CONCEPT_CHECK_staticObjectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(staticObjectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllGroundActions
		#define GEODE_CONCEPT_CHECK_stopAllGroundActions
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllGroundActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopCameraShake
		#define GEODE_CONCEPT_CHECK_stopCameraShake
		GEODE_CONCEPT_FUNCTION_CHECK(stopCameraShake) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopCustomEnterEffect
		#define GEODE_CONCEPT_CHECK_stopCustomEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(stopCustomEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopSFXTrigger
		#define GEODE_CONCEPT_CHECK_stopSFXTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(stopSFXTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapBackground
		#define GEODE_CONCEPT_CHECK_swapBackground
		GEODE_CONCEPT_FUNCTION_CHECK(swapBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapGround
		#define GEODE_CONCEPT_CHECK_swapGround
		GEODE_CONCEPT_FUNCTION_CHECK(swapGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapMiddleground
		#define GEODE_CONCEPT_CHECK_swapMiddleground
		GEODE_CONCEPT_FUNCTION_CHECK(swapMiddleground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToFlyMode
		#define GEODE_CONCEPT_CHECK_switchToFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToRobotMode
		#define GEODE_CONCEPT_CHECK_switchToRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToRollMode
		#define GEODE_CONCEPT_CHECK_switchToRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToSpiderMode
		#define GEODE_CONCEPT_CHECK_switchToSpiderMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToSpiderMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncBGTextures
		#define GEODE_CONCEPT_CHECK_syncBGTextures
		GEODE_CONCEPT_FUNCTION_CHECK(syncBGTextures) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_teleportPlayer
		#define GEODE_CONCEPT_CHECK_teleportPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(teleportPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testInstantCountTrigger
		#define GEODE_CONCEPT_CHECK_testInstantCountTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(testInstantCountTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleAudioVisualizer
		#define GEODE_CONCEPT_CHECK_toggleAudioVisualizer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleAudioVisualizer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDualMode
		#define GEODE_CONCEPT_CHECK_toggleDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFlipped
		#define GEODE_CONCEPT_CHECK_toggleFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroup
		#define GEODE_CONCEPT_CHECK_toggleGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLockPlayer
		#define GEODE_CONCEPT_CHECK_toggleLockPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLockPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlayerStreakBlend
		#define GEODE_CONCEPT_CHECK_togglePlayerStreakBlend
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlayerStreakBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlayerVisibility
		#define GEODE_CONCEPT_CHECK_togglePlayerVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlayerVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformAreaObjects
		#define GEODE_CONCEPT_CHECK_transformAreaObjects
		GEODE_CONCEPT_FUNCTION_CHECK(transformAreaObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAdvancedFollowCommand
		#define GEODE_CONCEPT_CHECK_triggerAdvancedFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAdvancedFollowEditCommand
		#define GEODE_CONCEPT_CHECK_triggerAdvancedFollowEditCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAdvancedFollowEditCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAreaEffect
		#define GEODE_CONCEPT_CHECK_triggerAreaEffect
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAreaEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAreaEffectAnimation
		#define GEODE_CONCEPT_CHECK_triggerAreaEffectAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAreaEffectAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerDynamicMoveCommand
		#define GEODE_CONCEPT_CHECK_triggerDynamicMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerDynamicMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerDynamicRotateCommand
		#define GEODE_CONCEPT_CHECK_triggerDynamicRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerDynamicRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerGradientCommand
		#define GEODE_CONCEPT_CHECK_triggerGradientCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerGradientCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerGravityChange
		#define GEODE_CONCEPT_CHECK_triggerGravityChange
		GEODE_CONCEPT_FUNCTION_CHECK(triggerGravityChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerMoveCommand
		#define GEODE_CONCEPT_CHECK_triggerMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerRotateCommand
		#define GEODE_CONCEPT_CHECK_triggerRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerShaderCommand
		#define GEODE_CONCEPT_CHECK_triggerShaderCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerShaderCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerTransformCommand
		#define GEODE_CONCEPT_CHECK_triggerTransformCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerTransformCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetGroupParent
		#define GEODE_CONCEPT_CHECK_tryGetGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetMainObject
		#define GEODE_CONCEPT_CHECK_tryGetMainObject
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetMainObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetObject
		#define GEODE_CONCEPT_CHECK_tryGetObject
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryResumeAudio
		#define GEODE_CONCEPT_CHECK_tryResumeAudio
		GEODE_CONCEPT_FUNCTION_CHECK(tryResumeAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimParticle
		#define GEODE_CONCEPT_CHECK_unclaimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ungroupStickyObjects
		#define GEODE_CONCEPT_CHECK_ungroupStickyObjects
		GEODE_CONCEPT_FUNCTION_CHECK(ungroupStickyObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlinkAllEvents
		#define GEODE_CONCEPT_CHECK_unlinkAllEvents
		GEODE_CONCEPT_FUNCTION_CHECK(unlinkAllEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActiveEnterEffect
		#define GEODE_CONCEPT_CHECK_updateActiveEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(updateActiveEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAllObjectSection
		#define GEODE_CONCEPT_CHECK_updateAllObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(updateAllObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAreaObjectLastValues
		#define GEODE_CONCEPT_CHECK_updateAreaObjectLastValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateAreaObjectLastValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAudioVisualizer
		#define GEODE_CONCEPT_CHECK_updateAudioVisualizer
		GEODE_CONCEPT_FUNCTION_CHECK(updateAudioVisualizer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGArtSpeed
		#define GEODE_CONCEPT_CHECK_updateBGArtSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGArtSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCamera
		#define GEODE_CONCEPT_CHECK_updateCamera
		GEODE_CONCEPT_FUNCTION_CHECK(updateCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraBGArt
		#define GEODE_CONCEPT_CHECK_updateCameraBGArt
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraBGArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraEdge
		#define GEODE_CONCEPT_CHECK_updateCameraEdge
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraEdge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraMode
		#define GEODE_CONCEPT_CHECK_updateCameraMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraOffsetX
		#define GEODE_CONCEPT_CHECK_updateCameraOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraOffsetY
		#define GEODE_CONCEPT_CHECK_updateCameraOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollisionBlocks
		#define GEODE_CONCEPT_CHECK_updateCollisionBlocks
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollisionBlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCounters
		#define GEODE_CONCEPT_CHECK_updateCounters
		GEODE_CONCEPT_FUNCTION_CHECK(updateCounters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDualGround
		#define GEODE_CONCEPT_CHECK_updateDualGround
		GEODE_CONCEPT_FUNCTION_CHECK(updateDualGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEnterEffects
		#define GEODE_CONCEPT_CHECK_updateEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateExtendedCollision
		#define GEODE_CONCEPT_CHECK_updateExtendedCollision
		GEODE_CONCEPT_FUNCTION_CHECK(updateExtendedCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateExtraGameLayers
		#define GEODE_CONCEPT_CHECK_updateExtraGameLayers
		GEODE_CONCEPT_FUNCTION_CHECK(updateExtraGameLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameplayOffsetX
		#define GEODE_CONCEPT_CHECK_updateGameplayOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameplayOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameplayOffsetY
		#define GEODE_CONCEPT_CHECK_updateGameplayOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameplayOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGradientLayers
		#define GEODE_CONCEPT_CHECK_updateGradientLayers
		GEODE_CONCEPT_FUNCTION_CHECK(updateGradientLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroundShadows
		#define GEODE_CONCEPT_CHECK_updateGroundShadows
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroundShadows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGuideArt
		#define GEODE_CONCEPT_CHECK_updateGuideArt
		GEODE_CONCEPT_FUNCTION_CHECK(updateGuideArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalCamOffsetX
		#define GEODE_CONCEPT_CHECK_updateInternalCamOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalCamOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalCamOffsetY
		#define GEODE_CONCEPT_CHECK_updateInternalCamOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalCamOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateKeyframeOrder
		#define GEODE_CONCEPT_CHECK_updateKeyframeOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateKeyframeOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLayerCapacity
		#define GEODE_CONCEPT_CHECK_updateLayerCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateLayerCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLegacyLayerCapacity
		#define GEODE_CONCEPT_CHECK_updateLegacyLayerCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateLegacyLayerCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelColors
		#define GEODE_CONCEPT_CHECK_updateLevelColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMaxGameplayY
		#define GEODE_CONCEPT_CHECK_updateMaxGameplayY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMaxGameplayY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMGArtSpeed
		#define GEODE_CONCEPT_CHECK_updateMGArtSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateMGArtSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMGOffsetY
		#define GEODE_CONCEPT_CHECK_updateMGOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMGOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOBB2
		#define GEODE_CONCEPT_CHECK_updateOBB2
		GEODE_CONCEPT_FUNCTION_CHECK(updateOBB2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticles
		#define GEODE_CONCEPT_CHECK_updateParticles
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlatformerTime
		#define GEODE_CONCEPT_CHECK_updatePlatformerTime
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlatformerTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerCollisionBlocks
		#define GEODE_CONCEPT_CHECK_updatePlayerCollisionBlocks
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerCollisionBlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProximityVolumeEffects
		#define GEODE_CONCEPT_CHECK_updateProximityVolumeEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateProximityVolumeEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateQueuedLabels
		#define GEODE_CONCEPT_CHECK_updateQueuedLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateQueuedLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateReplay
		#define GEODE_CONCEPT_CHECK_updateReplay
		GEODE_CONCEPT_FUNCTION_CHECK(updateReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSavePositionObjects
		#define GEODE_CONCEPT_CHECK_updateSavePositionObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateSavePositionObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShaderLayer
		#define GEODE_CONCEPT_CHECK_updateShaderLayer
		GEODE_CONCEPT_FUNCTION_CHECK(updateShaderLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialGroupData
		#define GEODE_CONCEPT_CHECK_updateSpecialGroupData
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialGroupData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialLabels
		#define GEODE_CONCEPT_CHECK_updateSpecialLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStaticCameraPos
		#define GEODE_CONCEPT_CHECK_updateStaticCameraPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateStaticCameraPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStaticCameraPosToGroup
		#define GEODE_CONCEPT_CHECK_updateStaticCameraPosToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(updateStaticCameraPosToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMod
		#define GEODE_CONCEPT_CHECK_updateTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimerLabels
		#define GEODE_CONCEPT_CHECK_updateTimerLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimerLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZoom
		#define GEODE_CONCEPT_CHECK_updateZoom
		GEODE_CONCEPT_FUNCTION_CHECK(updateZoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visitWithColorFlash
		#define GEODE_CONCEPT_CHECK_visitWithColorFlash
		GEODE_CONCEPT_FUNCTION_CHECK(visitWithColorFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_volumeForProximityEffect
		#define GEODE_CONCEPT_CHECK_volumeForProximityEffect
		GEODE_CONCEPT_FUNCTION_CHECK(volumeForProximityEffect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJBaseGameLayer> : ModifyBase<ModifyDerive<Der, GJBaseGameLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>;
		using ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>::ModifyBase;
		using Base = GJBaseGameLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x2cfef0, Thiscall, GJBaseGameLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x2057a0, Thiscall, GJBaseGameLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22e8b0, Default, GJBaseGameLayer, convertToClosestDirection, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232720, Default, GJBaseGameLayer, gameEventToString, GJGameEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x237850, Thiscall, GJBaseGameLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x206f30, Thiscall, GJBaseGameLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x246ee0, Thiscall, GJBaseGameLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, postUpdate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, checkForEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, testTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateVerifyDamage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateAttemptTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playerTookDamage, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x237430, Thiscall, GJBaseGameLayer, opacityForObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addToSpeedObjects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x219170, Thiscall, GJBaseGameLayer, objectsCollided, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223970, Thiscall, GJBaseGameLayer, updateColor, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223b50, Thiscall, GJBaseGameLayer, toggleGroupTriggered, int, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21ab80, Thiscall, GJBaseGameLayer, spawnGroup, int, bool, double, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21b030, Thiscall, GJBaseGameLayer, spawnObject, GameObject*, double, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, activateEndTrigger, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, activatePlatformerEndTrigger, EndTriggerGameObject*, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleGlitter, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, destroyPlayer, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x210800, Thiscall, GJBaseGameLayer, updateDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x226500, Thiscall, GJBaseGameLayer, addToSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223fd0, Thiscall, GJBaseGameLayer, addToGroup, GameObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224150, Thiscall, GJBaseGameLayer, removeFromGroup, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x227f50, Thiscall, GJBaseGameLayer, updateObjectSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateDisabledObjectsLastPos, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleGroundVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleMGVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleHideAttempts, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, timeForPos, cocos2d::CCPoint, int, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, posForTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetSPTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235e80, Thiscall, GJBaseGameLayer, updateScreenRotation, float, bool, bool, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x218160, Thiscall, GJBaseGameLayer, reverseDirection, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2181c0, Thiscall, GJBaseGameLayer, rotateGameplay, RotateGameplayGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, didRotateGameplay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x236150, Thiscall, GJBaseGameLayer, updateTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2361a0, Thiscall, GJBaseGameLayer, applyTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playGravityEffect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, manualUpdateObjectColors, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x240d80, Thiscall, GJBaseGameLayer, createCustomParticle, gd::string const&, cocos2d::ParticleStruct const&, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241080, Thiscall, GJBaseGameLayer, claimCustomParticle, gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241280, Thiscall, GJBaseGameLayer, unclaimCustomParticle, gd::string const&, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x242e30, Thiscall, GJBaseGameLayer, activatedAudioTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x246ac0, Thiscall, GJBaseGameLayer, checkpointActivated, CheckpointGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, flipArt, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233b80, Thiscall, GJBaseGameLayer, addKeyframe, KeyframeGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateTimeLabel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, checkSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleProgressbar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeAllCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleMusicInPractice, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, processCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, activateCustomRing, RingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x242e50, Thiscall, GJBaseGameLayer, activatedAudioTrigger, SFXTriggerGameObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232110, Thiscall, GJBaseGameLayer, activateEventTrigger, EventLinkTrigger*, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x234630, Thiscall, GJBaseGameLayer, activateItemCompareTrigger, ItemTriggerGameObject*, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x234250, Thiscall, GJBaseGameLayer, activateItemEditTrigger, ItemTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, activateObjectControlTrigger, ObjectControlGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x234a40, Thiscall, GJBaseGameLayer, activatePersistentItemTrigger, ItemTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2174e0, Thiscall, GJBaseGameLayer, activatePlayerControlTrigger, PlayerControlGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, activateResetTrigger, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241e50, Thiscall, GJBaseGameLayer, activateSFXEditTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241c50, Thiscall, GJBaseGameLayer, activateSFXTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241940, Thiscall, GJBaseGameLayer, activateSongEditTrigger, SongTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2415c0, Thiscall, GJBaseGameLayer, activateSongTrigger, SongTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x234e60, Thiscall, GJBaseGameLayer, activateTimerTrigger, TimerTriggerGameObject*, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x227480, Thiscall, GJBaseGameLayer, addAreaEffect, EnterEffectObject*, gd::vector<EnterEffectInstance>*, GJAreaActionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e400, Thiscall, GJBaseGameLayer, addCustomEnterEffect, EnterEffectObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x245ed0, Thiscall, GJBaseGameLayer, addGuideArt, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addObjectCounter, LabelGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addPickupTrigger, CountTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addPoints, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x242430, Thiscall, GJBaseGameLayer, addProximityVolumeEffect, int, int, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20dbd0, Thiscall, GJBaseGameLayer, addRemapTargets, gd::set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addToGroupParents, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223f40, Thiscall, GJBaseGameLayer, addToGroups, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addToObjectsToShow, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x225f50, Thiscall, GJBaseGameLayer, addUIObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213370, Thiscall, GJBaseGameLayer, animateInDualGroundNew, GameObject*, float, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, animateInGroundNew, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, animateOutGroundNew, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, animatePortalY, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, applyLevelSettings, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21b1c0, Thiscall, GJBaseGameLayer, applyRemap, EffectGameObject*, gd::vector<int> const&, gd::unordered_map<int, int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x242130, Thiscall, GJBaseGameLayer, applySFXEditTrigger, int, int, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, applyShake, cocos2d::CCPoint&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224d40, Thiscall, GJBaseGameLayer, assignNewStickyGroups, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, asyncBGLoaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, asyncGLoaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, asyncMGLoaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, atlasValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2179d0, Thiscall, GJBaseGameLayer, bumpPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, buttonIDToButton, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231e80, Thiscall, GJBaseGameLayer, buttonIsRelevant, PlayerButtonCommand const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e0b0, Thiscall, GJBaseGameLayer, calculateColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, cameraMoveX, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, cameraMoveY, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2178c0, Thiscall, GJBaseGameLayer, canBeActivatedByPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2431a0, Thiscall, GJBaseGameLayer, canProcessSFX, SFXTriggerState&, gd::unordered_map<int, int>&, gd::unordered_map<int, float>&, gd::vector<SFXTriggerState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, canTouchObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239ba0, Thiscall, GJBaseGameLayer, checkCameraLimitAfterTeleport, PlayerObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x219090, Thiscall, GJBaseGameLayer, checkCollision, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x218ec0, Thiscall, GJBaseGameLayer, checkCollisionBlocks, EffectGameObject*, gd::vector<EffectGameObject*>*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2137f0, Thiscall, GJBaseGameLayer, checkCollisions, PlayerObject*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2398d0, Thiscall, GJBaseGameLayer, checkRepellPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21a8f0, Thiscall, GJBaseGameLayer, checkSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22dbe0, Thiscall, GJBaseGameLayer, claimMoveAction, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2409d0, Thiscall, GJBaseGameLayer, claimParticle, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22d9a0, Thiscall, GJBaseGameLayer, claimRotationAction, int, int, float&, float&, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, clearActivatedAudioTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, clearPickedUpItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, collectedObject, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214960, Thiscall, GJBaseGameLayer, collisionCheckObjects, PlayerObject*, gd::vector<GameObject*>*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, controlAdvancedFollowCommand, AdvancedFollowTriggerObject*, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2279f0, Thiscall, GJBaseGameLayer, controlAreaEffect, EnterEffectObject*, gd::vector<EnterEffectInstance>*, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2277f0, Thiscall, GJBaseGameLayer, controlAreaEffectWithID, int, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, controlDynamicCommand, EffectGameObject*, int, gd::vector<DynamicObjectAction>&, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, controlDynamicMoveCommand, EffectGameObject*, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, controlDynamicRotateCommand, EffectGameObject*, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232380, Thiscall, GJBaseGameLayer, controlEventLink, int, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, controlGradientTrigger, GradientTriggerObject*, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21e190, Thiscall, GJBaseGameLayer, controlTriggersInGroup, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21e720, Thiscall, GJBaseGameLayer, controlTriggersWithControlID, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, countCollectedUserCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20b820, Thiscall, GJBaseGameLayer, createBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20bc60, Thiscall, GJBaseGameLayer, createGroundLayer, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20bae0, Thiscall, GJBaseGameLayer, createMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, createNewKeyframeAnim, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2405f0, Thiscall, GJBaseGameLayer, createParticle, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20b310, Thiscall, GJBaseGameLayer, createPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x218370, Thiscall, GJBaseGameLayer, createPlayerCollisionBlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ec90, Thiscall, GJBaseGameLayer, createTextLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211620, Thiscall, GJBaseGameLayer, damagingObjectsInRect, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216090, Thiscall, GJBaseGameLayer, destroyObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, enterDualMode, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23f670, Thiscall, GJBaseGameLayer, exitStaticCamera, bool, bool, float, int, float, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, flipFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212b00, Thiscall, GJBaseGameLayer, flipGravity, PlayerObject*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x246a00, Thiscall, GJBaseGameLayer, flipObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231ff0, Thiscall, GJBaseGameLayer, gameEventTriggered, GJGameEvent, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20ea40, Thiscall, GJBaseGameLayer, generateEnterEasingBuffer, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, generateEnterEasingBuffers, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, generatePickupAnimRandVal, GameObject*, float&, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21dfb0, Thiscall, GJBaseGameLayer, generateSpawnRemap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224e60, Thiscall, GJBaseGameLayer, generateTargetGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231590, Thiscall, GJBaseGameLayer, generateVisibilityGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getActiveOrderSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x228070, Thiscall, GJBaseGameLayer, getAreaObjectValue, EnterEffectInstance*, GameObject*, cocos2d::CCPoint&, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getBumpMod, PlayerObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getCameraEdgeValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getCapacityString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getCenterGroupObject, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getCustomEnterEffects, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x228260, Thiscall, GJBaseGameLayer, getEasedAreaValue, GameObject*, EnterEffectInstance*, float, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getEnterEasingKey, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getEnterEasingValue, float, int, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22e950, Thiscall, GJBaseGameLayer, getFollowSpeedVal, GameObject*, int, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getGroundHeight, PlayerObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211d50, Thiscall, GJBaseGameLayer, getGroundHeightForMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224280, Thiscall, GJBaseGameLayer, getGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getGroupParent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getGroupParentsString, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2341c0, Thiscall, GJBaseGameLayer, getItemValue, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213770, Thiscall, GJBaseGameLayer, getMaxPortalY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2429c0, Thiscall, GJBaseGameLayer, getMinDistance, cocos2d::CCPoint, cocos2d::CCArray*, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213690, Thiscall, GJBaseGameLayer, getMinPortalY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2377b0, Thiscall, GJBaseGameLayer, getModifiedDelta, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getMoveTargetDelta, EffectGameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getOptimizedGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getOtherPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2403c0, Thiscall, GJBaseGameLayer, getParticleKey, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x240540, Thiscall, GJBaseGameLayer, getParticleKey2, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getPlayerButtonID, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getPlayTimerFullSeconds, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getPlayTimerMilli, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getPortalTarget, TeleportPortalObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getPortalTargetPos, TeleportPortalObject*, GameObject*, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getRecordExtra, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23a2f0, Thiscall, GJBaseGameLayer, getRecordString, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getRotateCommandTargets, EnhancedTriggerObject*, GameObject*&, GameObject*&, GameObject*&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2192a0, Thiscall, GJBaseGameLayer, getSavedPosition, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getScaledGroundHeight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getSingleGroupObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getSpecialKey, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getStaticGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getStickyGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getTargetFlyCameraY, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getTargetGroup, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getTargetGroupOrigin, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, gravBumpPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224b60, Thiscall, GJBaseGameLayer, groupStickyObjects, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2338e0, Thiscall, GJBaseGameLayer, handleButton, bool, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, hasItem, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216700, Thiscall, GJBaseGameLayer, hasUniqueCoin, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20cc20, Thiscall, GJBaseGameLayer, increaseBatchNodeCapacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, isFlipping, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, isPlayer2Button, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, lightningFlash, cocos2d::CCPoint, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x246d00, Thiscall, GJBaseGameLayer, lightningFlash, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, int, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224860, Thiscall, GJBaseGameLayer, loadGroupParentsFromString, GameObject*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23ad00, Thiscall, GJBaseGameLayer, loadLevelSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235760, Thiscall, GJBaseGameLayer, loadStartPosObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235900, Thiscall, GJBaseGameLayer, loadUpToPosition, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2237b0, Thiscall, GJBaseGameLayer, maxZOrderForShaderZ, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223700, Thiscall, GJBaseGameLayer, minZOrderForShaderZ, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ee00, Thiscall, GJBaseGameLayer, modifyGroupPhysics, AdvancedFollowEditObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, modifyObjectPhysics, AdvancedFollowEditObject*, GameObjectPhysics&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22aab0, Thiscall, GJBaseGameLayer, moveAreaObject, GameObject*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, moveCameraToPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, moveObject, GameObject*, double, double, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22dd50, Thiscall, GJBaseGameLayer, moveObjects, cocos2d::CCArray*, double, double, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, moveObjectsSilent, int, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231410, Thiscall, GJBaseGameLayer, moveObjectToStaticGroup, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, objectIntersectsCircle, GameObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232560, Thiscall, GJBaseGameLayer, objectTypeToGameEvent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230a20, Thiscall, GJBaseGameLayer, optimizeMoveGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x245d70, Thiscall, GJBaseGameLayer, orderSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f160, Thiscall, GJBaseGameLayer, parentForZLayer, int, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2374b0, Thiscall, GJBaseGameLayer, pauseAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, performMathOperation, double, double, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, performMathRounding, double, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2161b0, Thiscall, GJBaseGameLayer, pickupItem, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playAnimationCommand, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211df0, Thiscall, GJBaseGameLayer, playerCircleCollision, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playerIntersectsCircle, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playerTouchedObject, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217e40, Thiscall, GJBaseGameLayer, playerTouchedRing, PlayerObject*, RingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217f50, Thiscall, GJBaseGameLayer, playerTouchedTrigger, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playerWasTouchingObject, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212ef0, Thiscall, GJBaseGameLayer, playerWillSwitchMode, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216e80, Thiscall, GJBaseGameLayer, playExitDualEffect, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playFlashEffect, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217bc0, Thiscall, GJBaseGameLayer, playKeyframeAnimation, KeyframeAnimTriggerObject*, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playSpeedParticle, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223550, Thiscall, GJBaseGameLayer, positionForShaderTarget, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x226070, Thiscall, GJBaseGameLayer, positionUIObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2197b0, Thiscall, GJBaseGameLayer, prepareSavePositionObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, prepareTransformParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, preResumeGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x236200, Thiscall, GJBaseGameLayer, preUpdateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x243970, Thiscall, GJBaseGameLayer, processActivatedAudioTriggers, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f300, Thiscall, GJBaseGameLayer, processAdvancedFollowAction, AdvancedFollowInstance&, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f0e0, Thiscall, GJBaseGameLayer, processAdvancedFollowActions, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x228fc0, Thiscall, GJBaseGameLayer, processAreaActions, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2283e0, Thiscall, GJBaseGameLayer, processAreaEffects, gd::vector<EnterEffectInstance>*, GJAreaActionType, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, processAreaFadeGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a4d0, Thiscall, GJBaseGameLayer, processAreaMoveGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x229d90, Thiscall, GJBaseGameLayer, processAreaRotateGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22aba0, Thiscall, GJBaseGameLayer, processAreaTintGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x229220, Thiscall, GJBaseGameLayer, processAreaTransformGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, processAreaVisualActions, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, processCameraObject, GameObject*, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239c60, Thiscall, GJBaseGameLayer, processCommands, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22e280, Thiscall, GJBaseGameLayer, processDynamicObjectActions, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230580, Thiscall, GJBaseGameLayer, processFollowActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216290, Thiscall, GJBaseGameLayer, processItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22d5b0, Thiscall, GJBaseGameLayer, processMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22b5d0, Thiscall, GJBaseGameLayer, processMoveActionsStep, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223d50, Thiscall, GJBaseGameLayer, processOptionsTrigger, GameOptionsTrigger*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ded0, Thiscall, GJBaseGameLayer, processPlayerFollowActions, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23bae0, Thiscall, GJBaseGameLayer, processQueuedAudioTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231d10, Thiscall, GJBaseGameLayer, processQueuedButtons, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, processReplayCheckpoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22b7f0, Thiscall, GJBaseGameLayer, processRotationActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241a10, Thiscall, GJBaseGameLayer, processSFXObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x244e10, Thiscall, GJBaseGameLayer, processSFXState, SFXTriggerState*, SFXTriggerState*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x245350, Thiscall, GJBaseGameLayer, processSongState, int, float, float, int, float, float, gd::vector<SongTriggerState>*, SongTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, processStateObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c680, Thiscall, GJBaseGameLayer, processTransformActions, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, queueButton, int, bool, bool, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, queueTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, reAddToStickyGroup, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, recordAction, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, rectIntersectsCircle, cocos2d::CCRect, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2355b0, Thiscall, GJBaseGameLayer, refreshCounterLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233ce0, Thiscall, GJBaseGameLayer, refreshKeyframeAnims, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, regenerateEnterEasingBuffers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, registerSpawnRemap, gd::vector<ChanceObject>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, registerStateObject, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeCustomEnterEffects, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeFromGroupParents, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2240c0, Thiscall, GJBaseGameLayer, removeFromGroups, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeFromStickyGroup, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeGroundLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224790, Thiscall, GJBaseGameLayer, removeGroupParent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeKeyframe, KeyframeGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeMiddleground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x226d60, Thiscall, GJBaseGameLayer, removeObjectFromSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removePlayer2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231ba0, Thiscall, GJBaseGameLayer, removeReleasedButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeTemporaryParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, reorderObjectSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, reparentObject, cocos2d::CCNode*, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e390, Thiscall, GJBaseGameLayer, resetActiveEnterEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x227c30, Thiscall, GJBaseGameLayer, resetAreaObjectValues, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x237710, Thiscall, GJBaseGameLayer, resetAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23fb00, Thiscall, GJBaseGameLayer, resetCamera, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x220fa0, Thiscall, GJBaseGameLayer, resetGradientLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetGroupCounters, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b040, Thiscall, GJBaseGameLayer, resetLevelVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetMoveOptimizedValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2120b0, Thiscall, GJBaseGameLayer, resetPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239e20, Thiscall, GJBaseGameLayer, resetRecord, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetRecordFull, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetSongTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x245e20, Thiscall, GJBaseGameLayer, resetSpawnChannelIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23fde0, Thiscall, GJBaseGameLayer, resetStaticCamera, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetStoppedAreaObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, restoreAllUIObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, restoreDefaultGameplayOffsetX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, restoreDefaultGameplayOffsetY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21cfa0, Thiscall, GJBaseGameLayer, restoreRemap, EffectGameObject*, gd::unordered_map<int, int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x237600, Thiscall, GJBaseGameLayer, resumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a100, Thiscall, GJBaseGameLayer, rotateAreaObjects, GameObject*, cocos2d::CCArray*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c100, Thiscall, GJBaseGameLayer, rotateObject, GameObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c1a0, Thiscall, GJBaseGameLayer, rotateObjects, cocos2d::CCArray*, float, cocos2d::CCPoint, cocos2d::CCPoint, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224680, Thiscall, GJBaseGameLayer, setGroupParent, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, setStartPosObject, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x208aa0, Thiscall, GJBaseGameLayer, setupLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212220, Thiscall, GJBaseGameLayer, setupLevelStart, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, setupReplay, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23bc50, Thiscall, GJBaseGameLayer, shakeCamera, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20b050, Thiscall, GJBaseGameLayer, shouldExitHackedLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, shouldUseSubstepForButton, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, sortAllGroupsX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2242f0, Thiscall, GJBaseGameLayer, sortGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x226fa0, Thiscall, GJBaseGameLayer, sortSectionVector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224a00, Thiscall, GJBaseGameLayer, sortStickyGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, spawnGroupTriggered, int, float, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21ae00, Thiscall, GJBaseGameLayer, spawnObjectsInOrder, cocos2d::CCArray*, double, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2402e0, Thiscall, GJBaseGameLayer, spawnParticle, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, spawnParticleTrigger, SpawnParticleGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23feb0, Thiscall, GJBaseGameLayer, spawnParticleTrigger, int, cocos2d::CCPoint, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, spawnPlayer2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223600, Thiscall, GJBaseGameLayer, speedForShaderTarget, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211260, Thiscall, GJBaseGameLayer, staticObjectsInRect, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, stopAllGroundActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, stopCameraShake, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, stopCustomEnterEffect, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e760, Thiscall, GJBaseGameLayer, stopCustomEnterEffect, EnterEffectObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, stopSFXTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, swapBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, swapGround, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, swapMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, switchToFlyMode, PlayerObject*, GameObject*, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212c20, Thiscall, GJBaseGameLayer, switchToRobotMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212e00, Thiscall, GJBaseGameLayer, switchToRollMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212d10, Thiscall, GJBaseGameLayer, switchToSpiderMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23afa0, Thiscall, GJBaseGameLayer, syncBGTextures, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20fdb0, Thiscall, GJBaseGameLayer, teleportPlayer, TeleportPortalObject*, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, testInstantCountTrigger, int, int, int, bool, int, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x248ae0, Thiscall, GJBaseGameLayer, toggleAudioVisualizer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2168d0, Thiscall, GJBaseGameLayer, toggleDualMode, GameObject*, bool, PlayerObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2467d0, Thiscall, GJBaseGameLayer, toggleFlipped, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223bc0, Thiscall, GJBaseGameLayer, toggleGroup, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleLockPlayer, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, togglePlayerStreakBlend, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, togglePlayerVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, togglePlayerVisibility, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x229720, Thiscall, GJBaseGameLayer, transformAreaObjects, GameObject*, cocos2d::CCArray*, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, triggerAdvancedFollowCommand, AdvancedFollowTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22eac0, Thiscall, GJBaseGameLayer, triggerAdvancedFollowEditCommand, AdvancedFollowEditObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2271c0, Thiscall, GJBaseGameLayer, triggerAreaEffect, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, triggerAreaEffectAnimation, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, triggerDynamicMoveCommand, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f2a0, Thiscall, GJBaseGameLayer, triggerDynamicRotateCommand, EnhancedTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f750, Thiscall, GJBaseGameLayer, triggerGradientCommand, GradientTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, triggerGravityChange, EffectGameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21ea40, Thiscall, GJBaseGameLayer, triggerMoveCommand, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, triggerRotateCommand, EnhancedTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221030, Thiscall, GJBaseGameLayer, triggerShaderCommand, ShaderGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f4c0, Thiscall, GJBaseGameLayer, triggerTransformCommand, TransformTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, tryGetGroupParent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224520, Thiscall, GJBaseGameLayer, tryGetMainObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224590, Thiscall, GJBaseGameLayer, tryGetObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, tryResumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x240be0, Thiscall, GJBaseGameLayer, unclaimParticle, char const*, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224c80, Thiscall, GJBaseGameLayer, ungroupStickyObjects, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, unlinkAllEvents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateActiveEnterEffect, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateAllObjectSection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x227eb0, Thiscall, GJBaseGameLayer, updateAreaObjectLastValues, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x248880, Thiscall, GJBaseGameLayer, updateAudioVisualizer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateBGArtSpeed, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23bcf0, Thiscall, GJBaseGameLayer, updateCamera, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23e450, Thiscall, GJBaseGameLayer, updateCameraBGArt, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateCameraEdge, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateCameraMode, EffectGameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235f70, Thiscall, GJBaseGameLayer, updateCameraOffsetX, float, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x236010, Thiscall, GJBaseGameLayer, updateCameraOffsetY, float, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2187d0, Thiscall, GJBaseGameLayer, updateCollisionBlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233ec0, Thiscall, GJBaseGameLayer, updateCounters, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213180, Thiscall, GJBaseGameLayer, updateDualGround, PlayerObject*, int, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20e960, Thiscall, GJBaseGameLayer, updateEnterEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateExtendedCollision, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223850, Thiscall, GJBaseGameLayer, updateExtraGameLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateGameplayOffsetX, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateGameplayOffsetY, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21fbe0, Thiscall, GJBaseGameLayer, updateGradientLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20bd60, Thiscall, GJBaseGameLayer, updateGroundShadows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2466c0, Thiscall, GJBaseGameLayer, updateGuideArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateInternalCamOffsetX, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateInternalCamOffsetY, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233c10, Thiscall, GJBaseGameLayer, updateKeyframeOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20cd00, Thiscall, GJBaseGameLayer, updateLayerCapacity, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateLegacyLayerCapacity, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20c490, Thiscall, GJBaseGameLayer, updateLevelColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23aec0, Thiscall, GJBaseGameLayer, updateMaxGameplayY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateMGArtSpeed, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2360b0, Thiscall, GJBaseGameLayer, updateMGOffsetY, float, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateOBB2, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241340, Thiscall, GJBaseGameLayer, updateParticles, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2396c0, Thiscall, GJBaseGameLayer, updatePlatformerTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2185a0, Thiscall, GJBaseGameLayer, updatePlayerCollisionBlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x242320, Thiscall, GJBaseGameLayer, updateProximityVolumeEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateQueuedLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateReplay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateSavePositionObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2222b0, Thiscall, GJBaseGameLayer, updateShaderLayer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20df30, Thiscall, GJBaseGameLayer, updateSpecialGroupData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2393e0, Thiscall, GJBaseGameLayer, updateSpecialLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23f230, Thiscall, GJBaseGameLayer, updateStaticCameraPos, cocos2d::CCPoint, bool, bool, bool, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23ee40, Thiscall, GJBaseGameLayer, updateStaticCameraPosToGroup, int, bool, bool, bool, float, float, int, float, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateTimeMod, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235240, Thiscall, GJBaseGameLayer, updateTimerLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235cf0, Thiscall, GJBaseGameLayer, updateZoom, float, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2482c0, Thiscall, GJBaseGameLayer, visitWithColorFlash, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2425f0, Thiscall, GJBaseGameLayer, volumeForProximityEffect, SFXTriggerInstance&)
		}
	};
}
