#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_checkForEnd
		#define GEODE_STATICS_checkForEnd
		GEODE_AS_STATIC_FUNCTION(checkForEnd) 
	#endif

	#ifndef GEODE_STATICS_updateVerifyDamage
		#define GEODE_STATICS_updateVerifyDamage
		GEODE_AS_STATIC_FUNCTION(updateVerifyDamage) 
	#endif

	#ifndef GEODE_STATICS_updateAttemptTime
		#define GEODE_STATICS_updateAttemptTime
		GEODE_AS_STATIC_FUNCTION(updateAttemptTime) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_opacityForObject
		#define GEODE_STATICS_opacityForObject
		GEODE_AS_STATIC_FUNCTION(opacityForObject) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_activatePlatformerEndTrigger
		#define GEODE_STATICS_activatePlatformerEndTrigger
		GEODE_AS_STATIC_FUNCTION(activatePlatformerEndTrigger) 
	#endif

	#ifndef GEODE_STATICS_toggleGlitter
		#define GEODE_STATICS_toggleGlitter
		GEODE_AS_STATIC_FUNCTION(toggleGlitter) 
	#endif

	#ifndef GEODE_STATICS_destroyPlayer
		#define GEODE_STATICS_destroyPlayer
		GEODE_AS_STATIC_FUNCTION(destroyPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleGroundVisibility
		#define GEODE_STATICS_toggleGroundVisibility
		GEODE_AS_STATIC_FUNCTION(toggleGroundVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleMGVisibility
		#define GEODE_STATICS_toggleMGVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMGVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleHideAttempts
		#define GEODE_STATICS_toggleHideAttempts
		GEODE_AS_STATIC_FUNCTION(toggleHideAttempts) 
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

	#ifndef GEODE_STATICS_updateTimeWarp
		#define GEODE_STATICS_updateTimeWarp
		GEODE_AS_STATIC_FUNCTION(updateTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_playGravityEffect
		#define GEODE_STATICS_playGravityEffect
		GEODE_AS_STATIC_FUNCTION(playGravityEffect) 
	#endif

	#ifndef GEODE_STATICS_manualUpdateObjectColors
		#define GEODE_STATICS_manualUpdateObjectColors
		GEODE_AS_STATIC_FUNCTION(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_checkpointActivated
		#define GEODE_STATICS_checkpointActivated
		GEODE_AS_STATIC_FUNCTION(checkpointActivated) 
	#endif

	#ifndef GEODE_STATICS_flipArt
		#define GEODE_STATICS_flipArt
		GEODE_AS_STATIC_FUNCTION(flipArt) 
	#endif

	#ifndef GEODE_STATICS_updateTimeLabel
		#define GEODE_STATICS_updateTimeLabel
		GEODE_AS_STATIC_FUNCTION(updateTimeLabel) 
	#endif

	#ifndef GEODE_STATICS_toggleProgressbar
		#define GEODE_STATICS_toggleProgressbar
		GEODE_AS_STATIC_FUNCTION(toggleProgressbar) 
	#endif

	#ifndef GEODE_STATICS_toggleInfoLabel
		#define GEODE_STATICS_toggleInfoLabel
		GEODE_AS_STATIC_FUNCTION(toggleInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_removeAllCheckpoints
		#define GEODE_STATICS_removeAllCheckpoints
		GEODE_AS_STATIC_FUNCTION(removeAllCheckpoints) 
	#endif

	#ifndef GEODE_STATICS_toggleMusicInPractice
		#define GEODE_STATICS_toggleMusicInPractice
		GEODE_AS_STATIC_FUNCTION(toggleMusicInPractice) 
	#endif

	#ifndef GEODE_STATICS_processCheckpoints
		#define GEODE_STATICS_processCheckpoints
		GEODE_AS_STATIC_FUNCTION(processCheckpoints) 
	#endif

	#ifndef GEODE_STATICS_resetLevel
		#define GEODE_STATICS_resetLevel
		GEODE_AS_STATIC_FUNCTION(resetLevel) 
	#endif

	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif

	#ifndef GEODE_STATICS_circleWaveWillBeRemoved
		#define GEODE_STATICS_circleWaveWillBeRemoved
		GEODE_AS_STATIC_FUNCTION(circleWaveWillBeRemoved) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_addObject
		#define GEODE_STATICS_addObject
		GEODE_AS_STATIC_FUNCTION(addObject) 
	#endif

	#ifndef GEODE_STATICS_applyCustomEnterEffect
		#define GEODE_STATICS_applyCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(applyCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_applyEnterEffect
		#define GEODE_STATICS_applyEnterEffect
		GEODE_AS_STATIC_FUNCTION(applyEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_commitJumps
		#define GEODE_STATICS_commitJumps
		GEODE_AS_STATIC_FUNCTION(commitJumps) 
	#endif

	#ifndef GEODE_STATICS_createCheckpoint
		#define GEODE_STATICS_createCheckpoint
		GEODE_AS_STATIC_FUNCTION(createCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromSetupFinished
		#define GEODE_STATICS_createObjectsFromSetupFinished
		GEODE_AS_STATIC_FUNCTION(createObjectsFromSetupFinished) 
	#endif

	#ifndef GEODE_STATICS_delayedResetLevel
		#define GEODE_STATICS_delayedResetLevel
		GEODE_AS_STATIC_FUNCTION(delayedResetLevel) 
	#endif

	#ifndef GEODE_STATICS_fullReset
		#define GEODE_STATICS_fullReset
		GEODE_AS_STATIC_FUNCTION(fullReset) 
	#endif

	#ifndef GEODE_STATICS_getCurrentPercent
		#define GEODE_STATICS_getCurrentPercent
		GEODE_AS_STATIC_FUNCTION(getCurrentPercent) 
	#endif

	#ifndef GEODE_STATICS_gravityEffectFinished
		#define GEODE_STATICS_gravityEffectFinished
		GEODE_AS_STATIC_FUNCTION(gravityEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_levelComplete
		#define GEODE_STATICS_levelComplete
		GEODE_AS_STATIC_FUNCTION(levelComplete) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultColors
		#define GEODE_STATICS_loadDefaultColors
		GEODE_AS_STATIC_FUNCTION(loadDefaultColors) 
	#endif

	#ifndef GEODE_STATICS_loadFromCheckpoint
		#define GEODE_STATICS_loadFromCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_markCheckpoint
		#define GEODE_STATICS_markCheckpoint
		GEODE_AS_STATIC_FUNCTION(markCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_optimizeColorGroups
		#define GEODE_STATICS_optimizeColorGroups
		GEODE_AS_STATIC_FUNCTION(optimizeColorGroups) 
	#endif

	#ifndef GEODE_STATICS_optimizeOpacityGroups
		#define GEODE_STATICS_optimizeOpacityGroups
		GEODE_AS_STATIC_FUNCTION(optimizeOpacityGroups) 
	#endif

	#ifndef GEODE_STATICS_pauseGame
		#define GEODE_STATICS_pauseGame
		GEODE_AS_STATIC_FUNCTION(pauseGame) 
	#endif

	#ifndef GEODE_STATICS_playEndAnimationToPos
		#define GEODE_STATICS_playEndAnimationToPos
		GEODE_AS_STATIC_FUNCTION(playEndAnimationToPos) 
	#endif

	#ifndef GEODE_STATICS_playPlatformerEndAnimationToPos
		#define GEODE_STATICS_playPlatformerEndAnimationToPos
		GEODE_AS_STATIC_FUNCTION(playPlatformerEndAnimationToPos) 
	#endif

	#ifndef GEODE_STATICS_prepareCreateObjectsFromSetup
		#define GEODE_STATICS_prepareCreateObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(prepareCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_prepareMusic
		#define GEODE_STATICS_prepareMusic
		GEODE_AS_STATIC_FUNCTION(prepareMusic) 
	#endif

	#ifndef GEODE_STATICS_processCreateObjectsFromSetup
		#define GEODE_STATICS_processCreateObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(processCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_processLoadedMoveActions
		#define GEODE_STATICS_processLoadedMoveActions
		GEODE_AS_STATIC_FUNCTION(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeCheckpoint
		#define GEODE_STATICS_removeCheckpoint
		GEODE_AS_STATIC_FUNCTION(removeCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_resetLevelFromStart
		#define GEODE_STATICS_resetLevelFromStart
		GEODE_AS_STATIC_FUNCTION(resetLevelFromStart) 
	#endif

	#ifndef GEODE_STATICS_resume
		#define GEODE_STATICS_resume
		GEODE_AS_STATIC_FUNCTION(resume) 
	#endif

	#ifndef GEODE_STATICS_resumeAndRestart
		#define GEODE_STATICS_resumeAndRestart
		GEODE_AS_STATIC_FUNCTION(resumeAndRestart) 
	#endif

	#ifndef GEODE_STATICS_saveActiveSaveObjects
		#define GEODE_STATICS_saveActiveSaveObjects
		GEODE_AS_STATIC_FUNCTION(saveActiveSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_saveDynamicSaveObjects
		#define GEODE_STATICS_saveDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(saveDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_scanDynamicSaveObjects
		#define GEODE_STATICS_scanDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(scanDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_screenFlipObject
		#define GEODE_STATICS_screenFlipObject
		GEODE_AS_STATIC_FUNCTION(screenFlipObject) 
	#endif

	#ifndef GEODE_STATICS_setupHasCompleted
		#define GEODE_STATICS_setupHasCompleted
		GEODE_AS_STATIC_FUNCTION(setupHasCompleted) 
	#endif

	#ifndef GEODE_STATICS_showCompleteEffect
		#define GEODE_STATICS_showCompleteEffect
		GEODE_AS_STATIC_FUNCTION(showCompleteEffect) 
	#endif

	#ifndef GEODE_STATICS_showCompleteText
		#define GEODE_STATICS_showCompleteText
		GEODE_AS_STATIC_FUNCTION(showCompleteText) 
	#endif

	#ifndef GEODE_STATICS_showEndLayer
		#define GEODE_STATICS_showEndLayer
		GEODE_AS_STATIC_FUNCTION(showEndLayer) 
	#endif

	#ifndef GEODE_STATICS_showHint
		#define GEODE_STATICS_showHint
		GEODE_AS_STATIC_FUNCTION(showHint) 
	#endif

	#ifndef GEODE_STATICS_showNewBest
		#define GEODE_STATICS_showNewBest
		GEODE_AS_STATIC_FUNCTION(showNewBest) 
	#endif

	#ifndef GEODE_STATICS_showRetryLayer
		#define GEODE_STATICS_showRetryLayer
		GEODE_AS_STATIC_FUNCTION(showRetryLayer) 
	#endif

	#ifndef GEODE_STATICS_showTwoPlayerGuide
		#define GEODE_STATICS_showTwoPlayerGuide
		GEODE_AS_STATIC_FUNCTION(showTwoPlayerGuide) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnFirework
		#define GEODE_STATICS_spawnFirework
		GEODE_AS_STATIC_FUNCTION(spawnFirework) 
	#endif

	#ifndef GEODE_STATICS_startGame
		#define GEODE_STATICS_startGame
		GEODE_AS_STATIC_FUNCTION(startGame) 
	#endif

	#ifndef GEODE_STATICS_startGameDelayed
		#define GEODE_STATICS_startGameDelayed
		GEODE_AS_STATIC_FUNCTION(startGameDelayed) 
	#endif

	#ifndef GEODE_STATICS_startMusic
		#define GEODE_STATICS_startMusic
		GEODE_AS_STATIC_FUNCTION(startMusic) 
	#endif

	#ifndef GEODE_STATICS_storeCheckpoint
		#define GEODE_STATICS_storeCheckpoint
		GEODE_AS_STATIC_FUNCTION(storeCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugDraw
		#define GEODE_STATICS_toggleDebugDraw
		GEODE_AS_STATIC_FUNCTION(toggleDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_togglePracticeMode
		#define GEODE_STATICS_togglePracticeMode
		GEODE_AS_STATIC_FUNCTION(togglePracticeMode) 
	#endif

	#ifndef GEODE_STATICS_updateAttempts
		#define GEODE_STATICS_updateAttempts
		GEODE_AS_STATIC_FUNCTION(updateAttempts) 
	#endif

	#ifndef GEODE_STATICS_updateDebugDrawSettings
		#define GEODE_STATICS_updateDebugDrawSettings
		GEODE_AS_STATIC_FUNCTION(updateDebugDrawSettings) 
	#endif

	#ifndef GEODE_STATICS_updateInfoLabel
		#define GEODE_STATICS_updateInfoLabel
		GEODE_AS_STATIC_FUNCTION(updateInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_updateInvisibleBlock
		#define GEODE_STATICS_updateInvisibleBlock
		GEODE_AS_STATIC_FUNCTION(updateInvisibleBlock) 
	#endif

	#ifndef GEODE_STATICS_updateProgressbar
		#define GEODE_STATICS_updateProgressbar
		GEODE_AS_STATIC_FUNCTION(updateProgressbar) 
	#endif

	#ifndef GEODE_STATICS_updateTestModeLabel
		#define GEODE_STATICS_updateTestModeLabel
		GEODE_AS_STATIC_FUNCTION(updateTestModeLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
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

	#ifndef GEODE_CONCEPT_CHECK_opacityForObject
		#define GEODE_CONCEPT_CHECK_opacityForObject
		GEODE_CONCEPT_FUNCTION_CHECK(opacityForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateTimeWarp
		#define GEODE_CONCEPT_CHECK_updateTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playGravityEffect
		#define GEODE_CONCEPT_CHECK_playGravityEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playGravityEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		#define GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		GEODE_CONCEPT_FUNCTION_CHECK(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkpointActivated
		#define GEODE_CONCEPT_CHECK_checkpointActivated
		GEODE_CONCEPT_FUNCTION_CHECK(checkpointActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipArt
		#define GEODE_CONCEPT_CHECK_flipArt
		GEODE_CONCEPT_FUNCTION_CHECK(flipArt) 
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

	#ifndef GEODE_CONCEPT_CHECK_currencyWillExit
		#define GEODE_CONCEPT_CHECK_currencyWillExit
		GEODE_CONCEPT_FUNCTION_CHECK(currencyWillExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		#define GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(circleWaveWillBeRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCircle
		#define GEODE_CONCEPT_CHECK_addCircle
		GEODE_CONCEPT_FUNCTION_CHECK(addCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObject
		#define GEODE_CONCEPT_CHECK_addObject
		GEODE_CONCEPT_FUNCTION_CHECK(addObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroupOld
		#define GEODE_CONCEPT_CHECK_addToGroupOld
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroupOld) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyCustomEnterEffect
		#define GEODE_CONCEPT_CHECK_applyCustomEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(applyCustomEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyEnterEffect
		#define GEODE_CONCEPT_CHECK_applyEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(applyEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canPauseGame
		#define GEODE_CONCEPT_CHECK_canPauseGame
		GEODE_CONCEPT_FUNCTION_CHECK(canPauseGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkpointWithID
		#define GEODE_CONCEPT_CHECK_checkpointWithID
		GEODE_CONCEPT_FUNCTION_CHECK(checkpointWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorObject
		#define GEODE_CONCEPT_CHECK_colorObject
		GEODE_CONCEPT_FUNCTION_CHECK(colorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commitJumps
		#define GEODE_CONCEPT_CHECK_commitJumps
		GEODE_CONCEPT_FUNCTION_CHECK(commitJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_compareStateSnapshot
		#define GEODE_CONCEPT_CHECK_compareStateSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(compareStateSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCheckpoint
		#define GEODE_CONCEPT_CHECK_createCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(createCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFromSetupFinished
		#define GEODE_CONCEPT_CHECK_createObjectsFromSetupFinished
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFromSetupFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_delayedFullReset
		#define GEODE_CONCEPT_CHECK_delayedFullReset
		GEODE_CONCEPT_FUNCTION_CHECK(delayedFullReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_delayedResetLevel
		#define GEODE_CONCEPT_CHECK_delayedResetLevel
		GEODE_CONCEPT_FUNCTION_CHECK(delayedResetLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullReset
		#define GEODE_CONCEPT_CHECK_fullReset
		GEODE_CONCEPT_FUNCTION_CHECK(fullReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentPercent
		#define GEODE_CONCEPT_CHECK_getCurrentPercent
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentPercentInt
		#define GEODE_CONCEPT_CHECK_getCurrentPercentInt
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentPercentInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndPosition
		#define GEODE_CONCEPT_CHECK_getEndPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getEndPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastCheckpoint
		#define GEODE_CONCEPT_CHECK_getLastCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(getLastCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeMod
		#define GEODE_CONCEPT_CHECK_getRelativeMod
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeModNew
		#define GEODE_CONCEPT_CHECK_getRelativeModNew
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeModNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTempMilliTime
		#define GEODE_CONCEPT_CHECK_getTempMilliTime
		GEODE_CONCEPT_FUNCTION_CHECK(getTempMilliTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravityEffectFinished
		#define GEODE_CONCEPT_CHECK_gravityEffectFinished
		GEODE_CONCEPT_FUNCTION_CHECK(gravityEffectFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementJumps
		#define GEODE_CONCEPT_CHECK_incrementJumps
		GEODE_CONCEPT_FUNCTION_CHECK(incrementJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGameplayActive
		#define GEODE_CONCEPT_CHECK_isGameplayActive
		GEODE_CONCEPT_FUNCTION_CHECK(isGameplayActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelComplete
		#define GEODE_CONCEPT_CHECK_levelComplete
		GEODE_CONCEPT_FUNCTION_CHECK(levelComplete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadActiveSaveObjects
		#define GEODE_CONCEPT_CHECK_loadActiveSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(loadActiveSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDefaultColors
		#define GEODE_CONCEPT_CHECK_loadDefaultColors
		GEODE_CONCEPT_FUNCTION_CHECK(loadDefaultColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDynamicSaveObjects
		#define GEODE_CONCEPT_CHECK_loadDynamicSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(loadDynamicSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromCheckpoint
		#define GEODE_CONCEPT_CHECK_loadFromCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLastCheckpoint
		#define GEODE_CONCEPT_CHECK_loadLastCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadLastCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markCheckpoint
		#define GEODE_CONCEPT_CHECK_markCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(markCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQuit
		#define GEODE_CONCEPT_CHECK_onQuit
		GEODE_CONCEPT_FUNCTION_CHECK(onQuit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_optimizeColorGroups
		#define GEODE_CONCEPT_CHECK_optimizeColorGroups
		GEODE_CONCEPT_FUNCTION_CHECK(optimizeColorGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_optimizeOpacityGroups
		#define GEODE_CONCEPT_CHECK_optimizeOpacityGroups
		GEODE_CONCEPT_FUNCTION_CHECK(optimizeOpacityGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseGame
		#define GEODE_CONCEPT_CHECK_pauseGame
		GEODE_CONCEPT_FUNCTION_CHECK(pauseGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEndAnimationToPos
		#define GEODE_CONCEPT_CHECK_playEndAnimationToPos
		GEODE_CONCEPT_FUNCTION_CHECK(playEndAnimationToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playPlatformerEndAnimationToPos
		#define GEODE_CONCEPT_CHECK_playPlatformerEndAnimationToPos
		GEODE_CONCEPT_FUNCTION_CHECK(playPlatformerEndAnimationToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playReplay
		#define GEODE_CONCEPT_CHECK_playReplay
		GEODE_CONCEPT_FUNCTION_CHECK(playReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareCreateObjectsFromSetup
		#define GEODE_CONCEPT_CHECK_prepareCreateObjectsFromSetup
		GEODE_CONCEPT_FUNCTION_CHECK(prepareCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareMusic
		#define GEODE_CONCEPT_CHECK_prepareMusic
		GEODE_CONCEPT_FUNCTION_CHECK(prepareMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCreateObjectsFromSetup
		#define GEODE_CONCEPT_CHECK_processCreateObjectsFromSetup
		GEODE_CONCEPT_FUNCTION_CHECK(processCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processLoadedMoveActions
		#define GEODE_CONCEPT_CHECK_processLoadedMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueCheckpoint
		#define GEODE_CONCEPT_CHECK_queueCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(queueCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjects
		#define GEODE_CONCEPT_CHECK_removeAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeCheckpoint
		#define GEODE_CONCEPT_CHECK_removeCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(removeCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroupOld
		#define GEODE_CONCEPT_CHECK_removeFromGroupOld
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroupOld) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLevelFromStart
		#define GEODE_CONCEPT_CHECK_resetLevelFromStart
		GEODE_CONCEPT_FUNCTION_CHECK(resetLevelFromStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resume
		#define GEODE_CONCEPT_CHECK_resume
		GEODE_CONCEPT_FUNCTION_CHECK(resume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAndRestart
		#define GEODE_CONCEPT_CHECK_resumeAndRestart
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAndRestart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveActiveSaveObjects
		#define GEODE_CONCEPT_CHECK_saveActiveSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(saveActiveSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveDynamicSaveObjects
		#define GEODE_CONCEPT_CHECK_saveDynamicSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(saveDynamicSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scanActiveSaveObjects
		#define GEODE_CONCEPT_CHECK_scanActiveSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(scanActiveSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scanDynamicSaveObjects
		#define GEODE_CONCEPT_CHECK_scanDynamicSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(scanDynamicSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_screenFlipObject
		#define GEODE_CONCEPT_CHECK_screenFlipObject
		GEODE_CONCEPT_FUNCTION_CHECK(screenFlipObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupHasCompleted
		#define GEODE_CONCEPT_CHECK_setupHasCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(setupHasCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlend
		#define GEODE_CONCEPT_CHECK_shouldBlend
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDebugDraw
		#define GEODE_CONCEPT_CHECK_shouldDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompleteEffect
		#define GEODE_CONCEPT_CHECK_showCompleteEffect
		GEODE_CONCEPT_FUNCTION_CHECK(showCompleteEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompleteText
		#define GEODE_CONCEPT_CHECK_showCompleteText
		GEODE_CONCEPT_FUNCTION_CHECK(showCompleteText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showEndLayer
		#define GEODE_CONCEPT_CHECK_showEndLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showEndLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showHint
		#define GEODE_CONCEPT_CHECK_showHint
		GEODE_CONCEPT_FUNCTION_CHECK(showHint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showNewBest
		#define GEODE_CONCEPT_CHECK_showNewBest
		GEODE_CONCEPT_FUNCTION_CHECK(showNewBest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showRetryLayer
		#define GEODE_CONCEPT_CHECK_showRetryLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showRetryLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTwoPlayerGuide
		#define GEODE_CONCEPT_CHECK_showTwoPlayerGuide
		GEODE_CONCEPT_FUNCTION_CHECK(showTwoPlayerGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnCircle
		#define GEODE_CONCEPT_CHECK_spawnCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnFirework
		#define GEODE_CONCEPT_CHECK_spawnFirework
		GEODE_CONCEPT_FUNCTION_CHECK(spawnFirework) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startGame
		#define GEODE_CONCEPT_CHECK_startGame
		GEODE_CONCEPT_FUNCTION_CHECK(startGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startGameDelayed
		#define GEODE_CONCEPT_CHECK_startGameDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(startGameDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMusic
		#define GEODE_CONCEPT_CHECK_startMusic
		GEODE_CONCEPT_FUNCTION_CHECK(startMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startRecording
		#define GEODE_CONCEPT_CHECK_startRecording
		GEODE_CONCEPT_FUNCTION_CHECK(startRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startRecordingDelayed
		#define GEODE_CONCEPT_CHECK_startRecordingDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(startRecordingDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRecording
		#define GEODE_CONCEPT_CHECK_stopRecording
		GEODE_CONCEPT_FUNCTION_CHECK(stopRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCheckpoint
		#define GEODE_CONCEPT_CHECK_storeCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(storeCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_takeStateSnapshot
		#define GEODE_CONCEPT_CHECK_takeStateSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(takeStateSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleBGEffectVisibility
		#define GEODE_CONCEPT_CHECK_toggleBGEffectVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleBGEffectVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDebugDraw
		#define GEODE_CONCEPT_CHECK_toggleDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGhostEffect
		#define GEODE_CONCEPT_CHECK_toggleGhostEffect
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGhostEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		#define GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		GEODE_CONCEPT_FUNCTION_CHECK(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePracticeMode
		#define GEODE_CONCEPT_CHECK_togglePracticeMode
		GEODE_CONCEPT_FUNCTION_CHECK(togglePracticeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryStartRecord
		#define GEODE_CONCEPT_CHECK_tryStartRecord
		GEODE_CONCEPT_FUNCTION_CHECK(tryStartRecord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAttempts
		#define GEODE_CONCEPT_CHECK_updateAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(updateAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDebugDrawSettings
		#define GEODE_CONCEPT_CHECK_updateDebugDrawSettings
		GEODE_CONCEPT_FUNCTION_CHECK(updateDebugDrawSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffectPositions
		#define GEODE_CONCEPT_CHECK_updateEffectPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffectPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInfoLabel
		#define GEODE_CONCEPT_CHECK_updateInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInvisibleBlock
		#define GEODE_CONCEPT_CHECK_updateInvisibleBlock
		GEODE_CONCEPT_FUNCTION_CHECK(updateInvisibleBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgressbar
		#define GEODE_CONCEPT_CHECK_updateProgressbar
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgressbar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScreenRotation
		#define GEODE_CONCEPT_CHECK_updateScreenRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateScreenRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTestModeLabel
		#define GEODE_CONCEPT_CHECK_updateTestModeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTestModeLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayLayer> : ModifyBase<ModifyDerive<Der, PlayLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayLayer>>;
		using ModifyBase<ModifyDerive<Der, PlayLayer>>::ModifyBase;
		using Base = PlayLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x3a4da0, Thiscall, PlayLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3a57b0, Thiscall, PlayLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, create, GJGameLevel*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a5a50, Default, PlayLayer, scene, GJGameLevel*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3baf90, Thiscall, PlayLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bafc0, Thiscall, PlayLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4ba0, Thiscall, PlayLayer, postUpdate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4cf0, Thiscall, PlayLayer, checkForEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, testTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4eb0, Thiscall, PlayLayer, updateVerifyDamage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4f60, Thiscall, PlayLayer, updateAttemptTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3af3a0, Thiscall, PlayLayer, updateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b02e0, Thiscall, PlayLayer, opacityForObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b1f90, Thiscall, PlayLayer, updateColor, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, activateEndTrigger, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ac2d0, Thiscall, PlayLayer, activatePlatformerEndTrigger, EndTriggerGameObject*, gd::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b38b0, Thiscall, PlayLayer, toggleGlitter, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b39d0, Thiscall, PlayLayer, destroyPlayer, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3700, Thiscall, PlayLayer, toggleGroundVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3780, Thiscall, PlayLayer, toggleMGVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b37c0, Thiscall, PlayLayer, toggleHideAttempts, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b35d0, Thiscall, PlayLayer, timeForPos, cocos2d::CCPoint, int, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3660, Thiscall, PlayLayer, posForTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b36c0, Thiscall, PlayLayer, resetSPTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ab9a0, Thiscall, PlayLayer, updateTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2050, Thiscall, PlayLayer, playGravityEffect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b02f0, Thiscall, PlayLayer, manualUpdateObjectColors, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4fa0, Thiscall, PlayLayer, checkpointActivated, CheckpointGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2a30, Thiscall, PlayLayer, flipArt, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2560, Thiscall, PlayLayer, updateTimeLabel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, checkSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2760, Thiscall, PlayLayer, toggleProgressbar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3550, Thiscall, PlayLayer, toggleInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8040, Thiscall, PlayLayer, removeAllCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2900, Thiscall, PlayLayer, toggleMusicInPractice, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4910, Thiscall, PlayLayer, processCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8eb0, Thiscall, PlayLayer, resetLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4730, Thiscall, PlayLayer, currencyWillExit, CurrencyRewardLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b48f0, Thiscall, PlayLayer, circleWaveWillBeRemoved, CCCircleWave*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4750, Thiscall, PlayLayer, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, addCircle, CCCircleWave*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3add70, Thiscall, PlayLayer, addObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, addToGroupOld, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b0970, Thiscall, PlayLayer, applyCustomEnterEffect, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b1660, Thiscall, PlayLayer, applyEnterEffect, GameObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, canPauseGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, checkpointWithID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, colorObject, int, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9de0, Thiscall, PlayLayer, commitJumps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, compareStateSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4fc0, Thiscall, PlayLayer, createCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ad8d0, Thiscall, PlayLayer, createObjectsFromSetupFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, delayedFullReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8cf0, Thiscall, PlayLayer, delayedResetLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8bf0, Thiscall, PlayLayer, fullReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3950, Thiscall, PlayLayer, getCurrentPercent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, getCurrentPercentInt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, getEndPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, getLastCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, getRelativeMod, cocos2d::CCPoint, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, getRelativeModNew, cocos2d::CCPoint, float, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, getTempMilliTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b23a0, Thiscall, PlayLayer, gravityEffectFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, incrementJumps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a5b00, Thiscall, PlayLayer, init, GJGameLevel*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, isGameplayActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7a80, Thiscall, PlayLayer, levelComplete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, loadActiveSaveObjects, gd::vector<SavedActiveObjectState>&, gd::vector<SavedSpecialObjectState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b1c50, Thiscall, PlayLayer, loadDefaultColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, loadDynamicSaveObjects, gd::vector<SavedObjectStateRef>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7640, Thiscall, PlayLayer, loadFromCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, loadLastCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7570, Thiscall, PlayLayer, markCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3babb0, Thiscall, PlayLayer, onQuit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aebd0, Thiscall, PlayLayer, optimizeColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aee60, Thiscall, PlayLayer, optimizeOpacityGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba0e0, Thiscall, PlayLayer, pauseGame, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aba00, Thiscall, PlayLayer, playEndAnimationToPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ac3e0, Thiscall, PlayLayer, playPlatformerEndAnimationToPos, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, playReplay, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ace40, Thiscall, PlayLayer, prepareCreateObjectsFromSetup, gd::string&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba8e0, Thiscall, PlayLayer, prepareMusic, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ad0f0, Thiscall, PlayLayer, processCreateObjectsFromSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3af1d0, Thiscall, PlayLayer, processLoadedMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, queueCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3badb0, Thiscall, PlayLayer, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7f00, Thiscall, PlayLayer, removeCheckpoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, removeFromGroupOld, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8d10, Thiscall, PlayLayer, resetLevelFromStart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba640, Thiscall, PlayLayer, resume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba3c0, Thiscall, PlayLayer, resumeAndRestart, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b89f0, Thiscall, PlayLayer, saveActiveSaveObjects, gd::vector<SavedActiveObjectState>&, gd::vector<SavedSpecialObjectState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b86e0, Thiscall, PlayLayer, saveDynamicSaveObjects, gd::vector<SavedObjectStateRef>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, scanActiveSaveObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8090, Thiscall, PlayLayer, scanDynamicSaveObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b0750, Thiscall, PlayLayer, screenFlipObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a66d0, Thiscall, PlayLayer, setupHasCompleted, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, shouldBlend, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, shouldDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a8f30, Thiscall, PlayLayer, showCompleteEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a8900, Thiscall, PlayLayer, showCompleteText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ac700, Thiscall, PlayLayer, showEndLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b4770, Thiscall, PlayLayer, showHint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a9550, Thiscall, PlayLayer, showNewBest, bool, int, int, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ac900, Thiscall, PlayLayer, showRetryLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3acaa0, Thiscall, PlayLayer, showTwoPlayerGuide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3abf00, Thiscall, PlayLayer, spawnCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3abff0, Thiscall, PlayLayer, spawnFirework, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7a20, Thiscall, PlayLayer, startGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7a70, Thiscall, PlayLayer, startGameDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3baa60, Thiscall, PlayLayer, startMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, startRecording, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, startRecordingDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, stopRecording, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b74a0, Thiscall, PlayLayer, storeCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, takeStateSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, toggleBGEffectVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7900, Thiscall, PlayLayer, toggleDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, toggleGhostEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, toggleIgnoreDamage, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9e50, Thiscall, PlayLayer, togglePracticeMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, tryStartRecord, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9ba0, Thiscall, PlayLayer, updateAttempts, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7800, Thiscall, PlayLayer, updateDebugDrawSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, updateEffectPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b2a60, Thiscall, PlayLayer, updateInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b03b0, Thiscall, PlayLayer, updateInvisibleBlock, GameObject*, float, float, float, float, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b23c0, Thiscall, PlayLayer, updateProgressbar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, updateScreenRotation, int, bool, bool, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7990, Thiscall, PlayLayer, updateTestModeLabel, )
		}
	};
}
