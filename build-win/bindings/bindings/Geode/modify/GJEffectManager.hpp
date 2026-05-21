#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJEffectManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_calculateBaseActiveColors
		#define GEODE_STATICS_calculateBaseActiveColors
		GEODE_AS_STATIC_FUNCTION(calculateBaseActiveColors) 
	#endif

	#ifndef GEODE_STATICS_calculateInheritedColor
		#define GEODE_STATICS_calculateInheritedColor
		GEODE_AS_STATIC_FUNCTION(calculateInheritedColor) 
	#endif

	#ifndef GEODE_STATICS_calculateLightBGColor
		#define GEODE_STATICS_calculateLightBGColor
		GEODE_AS_STATIC_FUNCTION(calculateLightBGColor) 
	#endif

	#ifndef GEODE_STATICS_colorForGroupID
		#define GEODE_STATICS_colorForGroupID
		GEODE_AS_STATIC_FUNCTION(colorForGroupID) 
	#endif

	#ifndef GEODE_STATICS_colorForPulseEffect
		#define GEODE_STATICS_colorForPulseEffect
		GEODE_AS_STATIC_FUNCTION(colorForPulseEffect) 
	#endif

	#ifndef GEODE_STATICS_controlActionsForControlID
		#define GEODE_STATICS_controlActionsForControlID
		GEODE_AS_STATIC_FUNCTION(controlActionsForControlID) 
	#endif

	#ifndef GEODE_STATICS_controlActionsForTrigger
		#define GEODE_STATICS_controlActionsForTrigger
		GEODE_AS_STATIC_FUNCTION(controlActionsForTrigger) 
	#endif

	#ifndef GEODE_STATICS_countForItem
		#define GEODE_STATICS_countForItem
		GEODE_AS_STATIC_FUNCTION(countForItem) 
	#endif

	#ifndef GEODE_STATICS_createFollowCommand
		#define GEODE_STATICS_createFollowCommand
		GEODE_AS_STATIC_FUNCTION(createFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_createKeyframeCommand
		#define GEODE_STATICS_createKeyframeCommand
		GEODE_AS_STATIC_FUNCTION(createKeyframeCommand) 
	#endif

	#ifndef GEODE_STATICS_createMoveCommand
		#define GEODE_STATICS_createMoveCommand
		GEODE_AS_STATIC_FUNCTION(createMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_createPlayerFollowCommand
		#define GEODE_STATICS_createPlayerFollowCommand
		GEODE_AS_STATIC_FUNCTION(createPlayerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_createRotateCommand
		#define GEODE_STATICS_createRotateCommand
		GEODE_AS_STATIC_FUNCTION(createRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_getAllColorActions
		#define GEODE_STATICS_getAllColorActions
		GEODE_AS_STATIC_FUNCTION(getAllColorActions) 
	#endif

	#ifndef GEODE_STATICS_getColorAction
		#define GEODE_STATICS_getColorAction
		GEODE_AS_STATIC_FUNCTION(getColorAction) 
	#endif

	#ifndef GEODE_STATICS_getColorSprite
		#define GEODE_STATICS_getColorSprite
		GEODE_AS_STATIC_FUNCTION(getColorSprite) 
	#endif

	#ifndef GEODE_STATICS_getLoadedMoveOffset
		#define GEODE_STATICS_getLoadedMoveOffset
		GEODE_AS_STATIC_FUNCTION(getLoadedMoveOffset) 
	#endif

	#ifndef GEODE_STATICS_getMoveCommandNode
		#define GEODE_STATICS_getMoveCommandNode
		GEODE_AS_STATIC_FUNCTION(getMoveCommandNode) 
	#endif

	#ifndef GEODE_STATICS_getMoveCommandObject
		#define GEODE_STATICS_getMoveCommandObject
		GEODE_AS_STATIC_FUNCTION(getMoveCommandObject) 
	#endif

	#ifndef GEODE_STATICS_getPersistentState
		#define GEODE_STATICS_getPersistentState
		GEODE_AS_STATIC_FUNCTION(getPersistentState) 
	#endif

	#ifndef GEODE_STATICS_getPersistentStateString
		#define GEODE_STATICS_getPersistentStateString
		GEODE_AS_STATIC_FUNCTION(getPersistentStateString) 
	#endif

	#ifndef GEODE_STATICS_getTempGroupCommand
		#define GEODE_STATICS_getTempGroupCommand
		GEODE_AS_STATIC_FUNCTION(getTempGroupCommand) 
	#endif

	#ifndef GEODE_STATICS_handleObjectCollision
		#define GEODE_STATICS_handleObjectCollision
		GEODE_AS_STATIC_FUNCTION(handleObjectCollision) 
	#endif

	#ifndef GEODE_STATICS_loadFromState
		#define GEODE_STATICS_loadFromState
		GEODE_AS_STATIC_FUNCTION(loadFromState) 
	#endif

	#ifndef GEODE_STATICS_loadPersistentStateString
		#define GEODE_STATICS_loadPersistentStateString
		GEODE_AS_STATIC_FUNCTION(loadPersistentStateString) 
	#endif

	#ifndef GEODE_STATICS_opacityModForGroup
		#define GEODE_STATICS_opacityModForGroup
		GEODE_AS_STATIC_FUNCTION(opacityModForGroup) 
	#endif

	#ifndef GEODE_STATICS_playerButton
		#define GEODE_STATICS_playerButton
		GEODE_AS_STATIC_FUNCTION(playerButton) 
	#endif

	#ifndef GEODE_STATICS_postCollisionCheck
		#define GEODE_STATICS_postCollisionCheck
		GEODE_AS_STATIC_FUNCTION(postCollisionCheck) 
	#endif

	#ifndef GEODE_STATICS_postMoveActions
		#define GEODE_STATICS_postMoveActions
		GEODE_AS_STATIC_FUNCTION(postMoveActions) 
	#endif

	#ifndef GEODE_STATICS_prepareMoveActions
		#define GEODE_STATICS_prepareMoveActions
		GEODE_AS_STATIC_FUNCTION(prepareMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processColors
		#define GEODE_STATICS_processColors
		GEODE_AS_STATIC_FUNCTION(processColors) 
	#endif

	#ifndef GEODE_STATICS_processCopyColorPulseActions
		#define GEODE_STATICS_processCopyColorPulseActions
		GEODE_AS_STATIC_FUNCTION(processCopyColorPulseActions) 
	#endif

	#ifndef GEODE_STATICS_processInheritedColors
		#define GEODE_STATICS_processInheritedColors
		GEODE_AS_STATIC_FUNCTION(processInheritedColors) 
	#endif

	#ifndef GEODE_STATICS_registerCollisionTrigger
		#define GEODE_STATICS_registerCollisionTrigger
		GEODE_AS_STATIC_FUNCTION(registerCollisionTrigger) 
	#endif

	#ifndef GEODE_STATICS_registerRotationCommand
		#define GEODE_STATICS_registerRotationCommand
		GEODE_AS_STATIC_FUNCTION(registerRotationCommand) 
	#endif

	#ifndef GEODE_STATICS_removeTriggeredID
		#define GEODE_STATICS_removeTriggeredID
		GEODE_AS_STATIC_FUNCTION(removeTriggeredID) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resetEffects
		#define GEODE_STATICS_resetEffects
		GEODE_AS_STATIC_FUNCTION(resetEffects) 
	#endif

	#ifndef GEODE_STATICS_resetTempGroupCommands
		#define GEODE_STATICS_resetTempGroupCommands
		GEODE_AS_STATIC_FUNCTION(resetTempGroupCommands) 
	#endif

	#ifndef GEODE_STATICS_runOpacityActionOnGroup
		#define GEODE_STATICS_runOpacityActionOnGroup
		GEODE_AS_STATIC_FUNCTION(runOpacityActionOnGroup) 
	#endif

	#ifndef GEODE_STATICS_runPulseEffect
		#define GEODE_STATICS_runPulseEffect
		GEODE_AS_STATIC_FUNCTION(runPulseEffect) 
	#endif

	#ifndef GEODE_STATICS_saveToState
		#define GEODE_STATICS_saveToState
		GEODE_AS_STATIC_FUNCTION(saveToState) 
	#endif

	#ifndef GEODE_STATICS_setColorAction
		#define GEODE_STATICS_setColorAction
		GEODE_AS_STATIC_FUNCTION(setColorAction) 
	#endif

	#ifndef GEODE_STATICS_setupFromString
		#define GEODE_STATICS_setupFromString
		GEODE_AS_STATIC_FUNCTION(setupFromString) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_startTimer
		#define GEODE_STATICS_startTimer
		GEODE_AS_STATIC_FUNCTION(startTimer) 
	#endif

	#ifndef GEODE_STATICS_storeTriggeredID
		#define GEODE_STATICS_storeTriggeredID
		GEODE_AS_STATIC_FUNCTION(storeTriggeredID) 
	#endif

	#ifndef GEODE_STATICS_timeForItem
		#define GEODE_STATICS_timeForItem
		GEODE_AS_STATIC_FUNCTION(timeForItem) 
	#endif

	#ifndef GEODE_STATICS_timerExists
		#define GEODE_STATICS_timerExists
		GEODE_AS_STATIC_FUNCTION(timerExists) 
	#endif

	#ifndef GEODE_STATICS_transferPersistentItems
		#define GEODE_STATICS_transferPersistentItems
		GEODE_AS_STATIC_FUNCTION(transferPersistentItems) 
	#endif

	#ifndef GEODE_STATICS_updateCountForItem
		#define GEODE_STATICS_updateCountForItem
		GEODE_AS_STATIC_FUNCTION(updateCountForItem) 
	#endif

	#ifndef GEODE_STATICS_updateEffects
		#define GEODE_STATICS_updateEffects
		GEODE_AS_STATIC_FUNCTION(updateEffects) 
	#endif

	#ifndef GEODE_STATICS_updatePulseEffects
		#define GEODE_STATICS_updatePulseEffects
		GEODE_AS_STATIC_FUNCTION(updatePulseEffects) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnTriggers
		#define GEODE_STATICS_updateSpawnTriggers
		GEODE_AS_STATIC_FUNCTION(updateSpawnTriggers) 
	#endif

	#ifndef GEODE_STATICS_updateTimer
		#define GEODE_STATICS_updateTimer
		GEODE_AS_STATIC_FUNCTION(updateTimer) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
	#endif

	#ifndef GEODE_STATICS_wouldCreateLoop
		#define GEODE_STATICS_wouldCreateLoop
		GEODE_AS_STATIC_FUNCTION(wouldCreateLoop) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMixedColor
		#define GEODE_CONCEPT_CHECK_getMixedColor
		GEODE_CONCEPT_FUNCTION_CHECK(getMixedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeColorForIndex
		#define GEODE_CONCEPT_CHECK_activeColorForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(activeColorForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeOpacityForIndex
		#define GEODE_CONCEPT_CHECK_activeOpacityForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(activeOpacityForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAllInheritedColorActions
		#define GEODE_CONCEPT_CHECK_addAllInheritedColorActions
		GEODE_CONCEPT_FUNCTION_CHECK(addAllInheritedColorActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCountToItem
		#define GEODE_CONCEPT_CHECK_addCountToItem
		GEODE_CONCEPT_FUNCTION_CHECK(addCountToItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMoveCalculation
		#define GEODE_CONCEPT_CHECK_addMoveCalculation
		GEODE_CONCEPT_FUNCTION_CHECK(addMoveCalculation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateBaseActiveColors
		#define GEODE_CONCEPT_CHECK_calculateBaseActiveColors
		GEODE_CONCEPT_FUNCTION_CHECK(calculateBaseActiveColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateInheritedColor
		#define GEODE_CONCEPT_CHECK_calculateInheritedColor
		GEODE_CONCEPT_FUNCTION_CHECK(calculateInheritedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateLightBGColor
		#define GEODE_CONCEPT_CHECK_calculateLightBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(calculateLightBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollision
		#define GEODE_CONCEPT_CHECK_checkCollision
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorActionChanged
		#define GEODE_CONCEPT_CHECK_colorActionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(colorActionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorExists
		#define GEODE_CONCEPT_CHECK_colorExists
		GEODE_CONCEPT_FUNCTION_CHECK(colorExists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForEffect
		#define GEODE_CONCEPT_CHECK_colorForEffect
		GEODE_CONCEPT_FUNCTION_CHECK(colorForEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForGroupID
		#define GEODE_CONCEPT_CHECK_colorForGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(colorForGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForIndex
		#define GEODE_CONCEPT_CHECK_colorForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(colorForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForPulseEffect
		#define GEODE_CONCEPT_CHECK_colorForPulseEffect
		GEODE_CONCEPT_FUNCTION_CHECK(colorForPulseEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlActionsForControlID
		#define GEODE_CONCEPT_CHECK_controlActionsForControlID
		GEODE_CONCEPT_FUNCTION_CHECK(controlActionsForControlID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlActionsForTrigger
		#define GEODE_CONCEPT_CHECK_controlActionsForTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(controlActionsForTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForItem
		#define GEODE_CONCEPT_CHECK_countForItem
		GEODE_CONCEPT_FUNCTION_CHECK(countForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFollowCommand
		#define GEODE_CONCEPT_CHECK_createFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(createFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createKeyframeCommand
		#define GEODE_CONCEPT_CHECK_createKeyframeCommand
		GEODE_CONCEPT_FUNCTION_CHECK(createKeyframeCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMoveCommand
		#define GEODE_CONCEPT_CHECK_createMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(createMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPlayerFollowCommand
		#define GEODE_CONCEPT_CHECK_createPlayerFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(createPlayerFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRotateCommand
		#define GEODE_CONCEPT_CHECK_createRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(createRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTransformCommand
		#define GEODE_CONCEPT_CHECK_createTransformCommand
		GEODE_CONCEPT_FUNCTION_CHECK(createTransformCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllColorActions
		#define GEODE_CONCEPT_CHECK_getAllColorActions
		GEODE_CONCEPT_FUNCTION_CHECK(getAllColorActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllColorSprites
		#define GEODE_CONCEPT_CHECK_getAllColorSprites
		GEODE_CONCEPT_FUNCTION_CHECK(getAllColorSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorAction
		#define GEODE_CONCEPT_CHECK_getColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(getColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorSprite
		#define GEODE_CONCEPT_CHECK_getColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoadedMoveOffset
		#define GEODE_CONCEPT_CHECK_getLoadedMoveOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getLoadedMoveOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveCommandNode
		#define GEODE_CONCEPT_CHECK_getMoveCommandNode
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveCommandNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveCommandObject
		#define GEODE_CONCEPT_CHECK_getMoveCommandObject
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveCommandObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacityActionForGroup
		#define GEODE_CONCEPT_CHECK_getOpacityActionForGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacityActionForGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPersistentState
		#define GEODE_CONCEPT_CHECK_getPersistentState
		GEODE_CONCEPT_FUNCTION_CHECK(getPersistentState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPersistentStateString
		#define GEODE_CONCEPT_CHECK_getPersistentStateString
		GEODE_CONCEPT_FUNCTION_CHECK(getPersistentStateString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTempGroupCommand
		#define GEODE_CONCEPT_CHECK_getTempGroupCommand
		GEODE_CONCEPT_FUNCTION_CHECK(getTempGroupCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleObjectCollision
		#define GEODE_CONCEPT_CHECK_handleObjectCollision
		GEODE_CONCEPT_FUNCTION_CHECK(handleObjectCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasActiveDualTouch
		#define GEODE_CONCEPT_CHECK_hasActiveDualTouch
		GEODE_CONCEPT_FUNCTION_CHECK(hasActiveDualTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenTriggered
		#define GEODE_CONCEPT_CHECK_hasBeenTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasPulseEffectForGroupID
		#define GEODE_CONCEPT_CHECK_hasPulseEffectForGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(hasPulseEffectForGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGroupEnabled
		#define GEODE_CONCEPT_CHECK_isGroupEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isGroupEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemWasUsed
		#define GEODE_CONCEPT_CHECK_itemWasUsed
		GEODE_CONCEPT_FUNCTION_CHECK(itemWasUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyForGroupIDColor
		#define GEODE_CONCEPT_CHECK_keyForGroupIDColor
		GEODE_CONCEPT_FUNCTION_CHECK(keyForGroupIDColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromState
		#define GEODE_CONCEPT_CHECK_loadFromState
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPersistentStateString
		#define GEODE_CONCEPT_CHECK_loadPersistentStateString
		GEODE_CONCEPT_FUNCTION_CHECK(loadPersistentStateString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsCollided
		#define GEODE_CONCEPT_CHECK_objectsCollided
		GEODE_CONCEPT_FUNCTION_CHECK(objectsCollided) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityForIndex
		#define GEODE_CONCEPT_CHECK_opacityForIndex
		GEODE_CONCEPT_FUNCTION_CHECK(opacityForIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityModForGroup
		#define GEODE_CONCEPT_CHECK_opacityModForGroup
		GEODE_CONCEPT_FUNCTION_CHECK(opacityModForGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseTimer
		#define GEODE_CONCEPT_CHECK_pauseTimer
		GEODE_CONCEPT_FUNCTION_CHECK(pauseTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerButton
		#define GEODE_CONCEPT_CHECK_playerButton
		GEODE_CONCEPT_FUNCTION_CHECK(playerButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerDied
		#define GEODE_CONCEPT_CHECK_playerDied
		GEODE_CONCEPT_FUNCTION_CHECK(playerDied) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postCollisionCheck
		#define GEODE_CONCEPT_CHECK_postCollisionCheck
		GEODE_CONCEPT_FUNCTION_CHECK(postCollisionCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postMoveActions
		#define GEODE_CONCEPT_CHECK_postMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(postMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preCollisionCheck
		#define GEODE_CONCEPT_CHECK_preCollisionCheck
		GEODE_CONCEPT_FUNCTION_CHECK(preCollisionCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareMoveActions
		#define GEODE_CONCEPT_CHECK_prepareMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(prepareMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processColors
		#define GEODE_CONCEPT_CHECK_processColors
		GEODE_CONCEPT_FUNCTION_CHECK(processColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCopyColorPulseActions
		#define GEODE_CONCEPT_CHECK_processCopyColorPulseActions
		GEODE_CONCEPT_FUNCTION_CHECK(processCopyColorPulseActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processInheritedColors
		#define GEODE_CONCEPT_CHECK_processInheritedColors
		GEODE_CONCEPT_FUNCTION_CHECK(processInheritedColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processMoveCalculations
		#define GEODE_CONCEPT_CHECK_processMoveCalculations
		GEODE_CONCEPT_FUNCTION_CHECK(processMoveCalculations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processPulseActions
		#define GEODE_CONCEPT_CHECK_processPulseActions
		GEODE_CONCEPT_FUNCTION_CHECK(processPulseActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerCollisionTrigger
		#define GEODE_CONCEPT_CHECK_registerCollisionTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(registerCollisionTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerRotationCommand
		#define GEODE_CONCEPT_CHECK_registerRotationCommand
		GEODE_CONCEPT_FUNCTION_CHECK(registerRotationCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllPulseActions
		#define GEODE_CONCEPT_CHECK_removeAllPulseActions
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllPulseActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeColorAction
		#define GEODE_CONCEPT_CHECK_removeColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(removeColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePersistentFromAllItems
		#define GEODE_CONCEPT_CHECK_removePersistentFromAllItems
		GEODE_CONCEPT_FUNCTION_CHECK(removePersistentFromAllItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePersistentFromAllTimers
		#define GEODE_CONCEPT_CHECK_removePersistentFromAllTimers
		GEODE_CONCEPT_FUNCTION_CHECK(removePersistentFromAllTimers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTriggeredID
		#define GEODE_CONCEPT_CHECK_removeTriggeredID
		GEODE_CONCEPT_FUNCTION_CHECK(removeTriggeredID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetEffects
		#define GEODE_CONCEPT_CHECK_resetEffects
		GEODE_CONCEPT_FUNCTION_CHECK(resetEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMoveActions
		#define GEODE_CONCEPT_CHECK_resetMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(resetMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTempGroupCommands
		#define GEODE_CONCEPT_CHECK_resetTempGroupCommands
		GEODE_CONCEPT_FUNCTION_CHECK(resetTempGroupCommands) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetToggledGroups
		#define GEODE_CONCEPT_CHECK_resetToggledGroups
		GEODE_CONCEPT_FUNCTION_CHECK(resetToggledGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTriggeredIDs
		#define GEODE_CONCEPT_CHECK_resetTriggeredIDs
		GEODE_CONCEPT_FUNCTION_CHECK(resetTriggeredIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetUsedItemState
		#define GEODE_CONCEPT_CHECK_resetUsedItemState
		GEODE_CONCEPT_FUNCTION_CHECK(resetUsedItemState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeTimer
		#define GEODE_CONCEPT_CHECK_resumeTimer
		GEODE_CONCEPT_FUNCTION_CHECK(resumeTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runCountTrigger
		#define GEODE_CONCEPT_CHECK_runCountTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(runCountTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runDeathTrigger
		#define GEODE_CONCEPT_CHECK_runDeathTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(runDeathTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runOpacityActionOnGroup
		#define GEODE_CONCEPT_CHECK_runOpacityActionOnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(runOpacityActionOnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runPulseEffect
		#define GEODE_CONCEPT_CHECK_runPulseEffect
		GEODE_CONCEPT_FUNCTION_CHECK(runPulseEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runTimerTrigger
		#define GEODE_CONCEPT_CHECK_runTimerTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(runTimerTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runTouchTriggerCommand
		#define GEODE_CONCEPT_CHECK_runTouchTriggerCommand
		GEODE_CONCEPT_FUNCTION_CHECK(runTouchTriggerCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveCompletedMove
		#define GEODE_CONCEPT_CHECK_saveCompletedMove
		GEODE_CONCEPT_FUNCTION_CHECK(saveCompletedMove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToState
		#define GEODE_CONCEPT_CHECK_saveToState
		GEODE_CONCEPT_FUNCTION_CHECK(saveToState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorAction
		#define GEODE_CONCEPT_CHECK_setColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(setColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFollowing
		#define GEODE_CONCEPT_CHECK_setFollowing
		GEODE_CONCEPT_FUNCTION_CHECK(setFollowing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromString
		#define GEODE_CONCEPT_CHECK_setupFromString
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlend
		#define GEODE_CONCEPT_CHECK_shouldBlend
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnObject
		#define GEODE_CONCEPT_CHECK_spawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(spawnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startTimer
		#define GEODE_CONCEPT_CHECK_startTimer
		GEODE_CONCEPT_FUNCTION_CHECK(startTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeTriggeredID
		#define GEODE_CONCEPT_CHECK_storeTriggeredID
		GEODE_CONCEPT_FUNCTION_CHECK(storeTriggeredID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForItem
		#define GEODE_CONCEPT_CHECK_timeForItem
		GEODE_CONCEPT_FUNCTION_CHECK(timeForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timerExists
		#define GEODE_CONCEPT_CHECK_timerExists
		GEODE_CONCEPT_FUNCTION_CHECK(timerExists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timerWasUsed
		#define GEODE_CONCEPT_CHECK_timerWasUsed
		GEODE_CONCEPT_FUNCTION_CHECK(timerWasUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroup
		#define GEODE_CONCEPT_CHECK_toggleGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleItemPersistent
		#define GEODE_CONCEPT_CHECK_toggleItemPersistent
		GEODE_CONCEPT_FUNCTION_CHECK(toggleItemPersistent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleTimerPersistent
		#define GEODE_CONCEPT_CHECK_toggleTimerPersistent
		GEODE_CONCEPT_FUNCTION_CHECK(toggleTimerPersistent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transferPersistentItems
		#define GEODE_CONCEPT_CHECK_transferPersistentItems
		GEODE_CONCEPT_FUNCTION_CHECK(transferPersistentItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_traverseInheritanceChain
		#define GEODE_CONCEPT_CHECK_traverseInheritanceChain
		GEODE_CONCEPT_FUNCTION_CHECK(traverseInheritanceChain) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetMoveCommandNode
		#define GEODE_CONCEPT_CHECK_tryGetMoveCommandNode
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetMoveCommandNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActiveOpacityEffects
		#define GEODE_CONCEPT_CHECK_updateActiveOpacityEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateActiveOpacityEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorAction
		#define GEODE_CONCEPT_CHECK_updateColorAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorEffects
		#define GEODE_CONCEPT_CHECK_updateColorEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCountForItem
		#define GEODE_CONCEPT_CHECK_updateCountForItem
		GEODE_CONCEPT_FUNCTION_CHECK(updateCountForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffects
		#define GEODE_CONCEPT_CHECK_updateEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacityAction
		#define GEODE_CONCEPT_CHECK_updateOpacityAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacityAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacityEffects
		#define GEODE_CONCEPT_CHECK_updateOpacityEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacityEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePulseEffects
		#define GEODE_CONCEPT_CHECK_updatePulseEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updatePulseEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpawnTriggers
		#define GEODE_CONCEPT_CHECK_updateSpawnTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpawnTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimer
		#define GEODE_CONCEPT_CHECK_updateTimer
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimers
		#define GEODE_CONCEPT_CHECK_updateTimers
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_wasFollowing
		#define GEODE_CONCEPT_CHECK_wasFollowing
		GEODE_CONCEPT_FUNCTION_CHECK(wasFollowing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_wouldCreateLoop
		#define GEODE_CONCEPT_CHECK_wouldCreateLoop
		GEODE_CONCEPT_FUNCTION_CHECK(wouldCreateLoop) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJEffectManager> : ModifyBase<ModifyDerive<Der, GJEffectManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJEffectManager>>;
		using ModifyBase<ModifyDerive<Der, GJEffectManager>>::ModifyBase;
		using Base = GJEffectManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25ac80, Default, GJEffectManager, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, getMixedColor, cocos2d::ccColor3B, cocos2d::ccColor3B, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25ace0, Thiscall, GJEffectManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, activeColorForIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, activeOpacityForIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, addAllInheritedColorActions, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, addCountToItem, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, addMoveCalculation, CCMoveCNode*, cocos2d::CCPoint, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b460, Thiscall, GJEffectManager, calculateBaseActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b840, Thiscall, GJEffectManager, calculateInheritedColor, int, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2639f0, Thiscall, GJEffectManager, calculateLightBGColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, checkCollision, int const&, int const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, colorActionChanged, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, colorExists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, colorForEffect, cocos2d::ccColor3B, cocos2d::ccHSVValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261b10, Thiscall, GJEffectManager, colorForGroupID, int, cocos2d::ccColor3B const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, colorForIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261760, Thiscall, GJEffectManager, colorForPulseEffect, cocos2d::ccColor3B const&, PulseEffectAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25da50, Thiscall, GJEffectManager, controlActionsForControlID, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25e3b0, Thiscall, GJEffectManager, controlActionsForTrigger, EffectGameObject*, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2623f0, Thiscall, GJEffectManager, countForItem, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25cae0, Thiscall, GJEffectManager, createFollowCommand, float, float, float, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25cd10, Thiscall, GJEffectManager, createKeyframeCommand, int, cocos2d::CCArray*, GameObject*, int, int, bool, float, float, float, float, float, float, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25c700, Thiscall, GJEffectManager, createMoveCommand, cocos2d::CCPoint, int, float, int, float, bool, bool, bool, bool, float, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25cbf0, Thiscall, GJEffectManager, createPlayerFollowCommand, float, float, int, float, float, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25c9b0, Thiscall, GJEffectManager, createRotateCommand, float, float, int, int, int, float, bool, bool, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, createTransformCommand, double, double, double, double, bool, float, int, int, int, float, bool, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b2d0, Thiscall, GJEffectManager, getAllColorActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, getAllColorSprites, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25bc00, Thiscall, GJEffectManager, getColorAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25bcc0, Thiscall, GJEffectManager, getColorSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260950, Thiscall, GJEffectManager, getLoadedMoveOffset, gd::unordered_map<int, std::pair<double, double>>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25efd0, Thiscall, GJEffectManager, getMoveCommandNode, GroupCommandObject2*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25eed0, Thiscall, GJEffectManager, getMoveCommandObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, getOpacityActionForGroup, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, getPersistentState, gd::unordered_map<int, int>&, gd::unordered_map<int, TimerItem>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x262900, Thiscall, GJEffectManager, getPersistentStateString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, getSaveString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25f270, Thiscall, GJEffectManager, getTempGroupCommand, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25c540, Thiscall, GJEffectManager, handleObjectCollision, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, hasActiveDualTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, hasBeenTriggered, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, hasPulseEffectForGroupID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, isGroupEnabled, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, itemWasUsed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, keyForGroupIDColor, int, cocos2d::ccColor3B const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2644a0, Thiscall, GJEffectManager, loadFromState, EffectManagerState&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEffectManager, loadPersistentStateString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, objectsCollided, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, opacityForIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260b80, Thiscall, GJEffectManager, opacityModForGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, pauseTimer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x262190, Thiscall, GJEffectManager, playerButton, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, playerDied, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25c2e0, Thiscall, GJEffectManager, postCollisionCheck, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260800, Thiscall, GJEffectManager, postMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, preCollisionCheck, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25f3f0, Thiscall, GJEffectManager, prepareMoveActions, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b340, Thiscall, GJEffectManager, processColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261510, Thiscall, GJEffectManager, processCopyColorPulseActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b520, Thiscall, GJEffectManager, processInheritedColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, processMoveCalculations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, processPulseActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25c430, Thiscall, GJEffectManager, registerCollisionTrigger, int, int, int, bool, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25f170, Thiscall, GJEffectManager, registerRotationCommand, GroupCommandObject2*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, removeAllPulseActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, removeColorAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, removePersistentFromAllItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, removePersistentFromAllTimers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2620e0, Thiscall, GJEffectManager, removeTriggeredID, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b0a0, Thiscall, GJEffectManager, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25c020, Thiscall, GJEffectManager, resetEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, resetMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25f300, Thiscall, GJEffectManager, resetTempGroupCommands, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, resetToggledGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, resetTriggeredIDs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, resetUsedItemState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, resumeTimer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, runCountTrigger, int, int, bool, int, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, runDeathTrigger, int, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260a70, Thiscall, GJEffectManager, runOpacityActionOnGroup, int, float, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260c40, Thiscall, GJEffectManager, runPulseEffect, int, bool, float, float, float, PulseEffectType, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool, bool, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, runTimerTrigger, int, double, bool, int, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, runTouchTriggerCommand, int, bool, TouchTriggerType, TouchTriggerControl, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, saveCompletedMove, int, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263e80, Thiscall, GJEffectManager, saveToState, EffectManagerState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25be20, Thiscall, GJEffectManager, setColorAction, ColorAction*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, setFollowing, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263bf0, Thiscall, GJEffectManager, setupFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, shouldBlend, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261cb0, Thiscall, GJEffectManager, spawnGroup, int, float, bool, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, spawnObject, GameObject*, float, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x262f50, Thiscall, GJEffectManager, startTimer, int, double, double, bool, bool, bool, float, bool, int, gd::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261ff0, Thiscall, GJEffectManager, storeTriggeredID, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263930, Thiscall, GJEffectManager, timeForItem, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263110, Thiscall, GJEffectManager, timerExists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, timerWasUsed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, toggleGroup, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, toggleItemPersistent, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, toggleTimerPersistent, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x262ed0, Thiscall, GJEffectManager, transferPersistentItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, traverseInheritanceChain, InheritanceNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, tryGetMoveCommandNode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, updateActiveOpacityEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, updateColorAction, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, updateColorEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, updateColors, cocos2d::ccColor3B, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2624b0, Thiscall, GJEffectManager, updateCountForItem, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25bea0, Thiscall, GJEffectManager, updateEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, updateOpacityAction, OpacityEffectAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, updateOpacityEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2611c0, Thiscall, GJEffectManager, updatePulseEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261da0, Thiscall, GJEffectManager, updateSpawnTriggers, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2631b0, Thiscall, GJEffectManager, updateTimer, int, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263340, Thiscall, GJEffectManager, updateTimers, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJEffectManager, wasFollowing, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25bbe0, Thiscall, GJEffectManager, wouldCreateLoop, InheritanceNode*, int)
		}
	};
}
