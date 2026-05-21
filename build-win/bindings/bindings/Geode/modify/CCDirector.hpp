#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedDirector
		#define GEODE_STATICS_sharedDirector
		GEODE_AS_STATIC_FUNCTION(sharedDirector) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getScheduler
		#define GEODE_STATICS_getScheduler
		GEODE_AS_STATIC_FUNCTION(getScheduler) 
	#endif

	#ifndef GEODE_STATICS_setScheduler
		#define GEODE_STATICS_setScheduler
		GEODE_AS_STATIC_FUNCTION(setScheduler) 
	#endif

	#ifndef GEODE_STATICS_getActionManager
		#define GEODE_STATICS_getActionManager
		GEODE_AS_STATIC_FUNCTION(getActionManager) 
	#endif

	#ifndef GEODE_STATICS_setActionManager
		#define GEODE_STATICS_setActionManager
		GEODE_AS_STATIC_FUNCTION(setActionManager) 
	#endif

	#ifndef GEODE_STATICS_getTouchDispatcher
		#define GEODE_STATICS_getTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(getTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setTouchDispatcher
		#define GEODE_STATICS_setTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(setTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getKeypadDispatcher
		#define GEODE_STATICS_getKeypadDispatcher
		GEODE_AS_STATIC_FUNCTION(getKeypadDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setKeypadDispatcher
		#define GEODE_STATICS_setKeypadDispatcher
		GEODE_AS_STATIC_FUNCTION(setKeypadDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getKeyboardDispatcher
		#define GEODE_STATICS_getKeyboardDispatcher
		GEODE_AS_STATIC_FUNCTION(getKeyboardDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setKeyboardDispatcher
		#define GEODE_STATICS_setKeyboardDispatcher
		GEODE_AS_STATIC_FUNCTION(setKeyboardDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getMouseDispatcher
		#define GEODE_STATICS_getMouseDispatcher
		GEODE_AS_STATIC_FUNCTION(getMouseDispatcher) 
	#endif

	#ifndef GEODE_STATICS_setMouseDispatcher
		#define GEODE_STATICS_setMouseDispatcher
		GEODE_AS_STATIC_FUNCTION(setMouseDispatcher) 
	#endif

	#ifndef GEODE_STATICS_getAccelerometer
		#define GEODE_STATICS_getAccelerometer
		GEODE_AS_STATIC_FUNCTION(getAccelerometer) 
	#endif

	#ifndef GEODE_STATICS_setAccelerometer
		#define GEODE_STATICS_setAccelerometer
		GEODE_AS_STATIC_FUNCTION(setAccelerometer) 
	#endif

	#ifndef GEODE_STATICS_getDeltaTime
		#define GEODE_STATICS_getDeltaTime
		GEODE_AS_STATIC_FUNCTION(getDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_applySmoothFix
		#define GEODE_STATICS_applySmoothFix
		GEODE_AS_STATIC_FUNCTION(applySmoothFix) 
	#endif

	#ifndef GEODE_STATICS_calculateDeltaTime
		#define GEODE_STATICS_calculateDeltaTime
		GEODE_AS_STATIC_FUNCTION(calculateDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_calculateMPF
		#define GEODE_STATICS_calculateMPF
		GEODE_AS_STATIC_FUNCTION(calculateMPF) 
	#endif

	#ifndef GEODE_STATICS_checkSceneReference
		#define GEODE_STATICS_checkSceneReference
		GEODE_AS_STATIC_FUNCTION(checkSceneReference) 
	#endif

	#ifndef GEODE_STATICS_convertToGL
		#define GEODE_STATICS_convertToGL
		GEODE_AS_STATIC_FUNCTION(convertToGL) 
	#endif

	#ifndef GEODE_STATICS_convertToUI
		#define GEODE_STATICS_convertToUI
		GEODE_AS_STATIC_FUNCTION(convertToUI) 
	#endif

	#ifndef GEODE_STATICS_createStatsLabel
		#define GEODE_STATICS_createStatsLabel
		GEODE_AS_STATIC_FUNCTION(createStatsLabel) 
	#endif

	#ifndef GEODE_STATICS_drawScene
		#define GEODE_STATICS_drawScene
		GEODE_AS_STATIC_FUNCTION(drawScene) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_getDelegate
		#define GEODE_STATICS_getDelegate
		GEODE_AS_STATIC_FUNCTION(getDelegate) 
	#endif

	#ifndef GEODE_STATICS_getFPSImageData
		#define GEODE_STATICS_getFPSImageData
		GEODE_AS_STATIC_FUNCTION(getFPSImageData) 
	#endif

	#ifndef GEODE_STATICS_getNotificationNode
		#define GEODE_STATICS_getNotificationNode
		GEODE_AS_STATIC_FUNCTION(getNotificationNode) 
	#endif

	#ifndef GEODE_STATICS_getVisibleOrigin
		#define GEODE_STATICS_getVisibleOrigin
		GEODE_AS_STATIC_FUNCTION(getVisibleOrigin) 
	#endif

	#ifndef GEODE_STATICS_getVisibleSize
		#define GEODE_STATICS_getVisibleSize
		GEODE_AS_STATIC_FUNCTION(getVisibleSize) 
	#endif

	#ifndef GEODE_STATICS_getWinSize
		#define GEODE_STATICS_getWinSize
		GEODE_AS_STATIC_FUNCTION(getWinSize) 
	#endif

	#ifndef GEODE_STATICS_getWinSizeInPixels
		#define GEODE_STATICS_getWinSizeInPixels
		GEODE_AS_STATIC_FUNCTION(getWinSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_getZEye
		#define GEODE_STATICS_getZEye
		GEODE_AS_STATIC_FUNCTION(getZEye) 
	#endif

	#ifndef GEODE_STATICS_levelForSceneInStack
		#define GEODE_STATICS_levelForSceneInStack
		GEODE_AS_STATIC_FUNCTION(levelForSceneInStack) 
	#endif

	#ifndef GEODE_STATICS_pause
		#define GEODE_STATICS_pause
		GEODE_AS_STATIC_FUNCTION(pause) 
	#endif

	#ifndef GEODE_STATICS_popScene
		#define GEODE_STATICS_popScene
		GEODE_AS_STATIC_FUNCTION(popScene) 
	#endif

	#ifndef GEODE_STATICS_popSceneWithTransition
		#define GEODE_STATICS_popSceneWithTransition
		GEODE_AS_STATIC_FUNCTION(popSceneWithTransition) 
	#endif

	#ifndef GEODE_STATICS_popToRootScene
		#define GEODE_STATICS_popToRootScene
		GEODE_AS_STATIC_FUNCTION(popToRootScene) 
	#endif

	#ifndef GEODE_STATICS_popToSceneInStack
		#define GEODE_STATICS_popToSceneInStack
		GEODE_AS_STATIC_FUNCTION(popToSceneInStack) 
	#endif

	#ifndef GEODE_STATICS_popToSceneStackLevel
		#define GEODE_STATICS_popToSceneStackLevel
		GEODE_AS_STATIC_FUNCTION(popToSceneStackLevel) 
	#endif

	#ifndef GEODE_STATICS_purgeCachedData
		#define GEODE_STATICS_purgeCachedData
		GEODE_AS_STATIC_FUNCTION(purgeCachedData) 
	#endif

	#ifndef GEODE_STATICS_purgeDirector
		#define GEODE_STATICS_purgeDirector
		GEODE_AS_STATIC_FUNCTION(purgeDirector) 
	#endif

	#ifndef GEODE_STATICS_pushScene
		#define GEODE_STATICS_pushScene
		GEODE_AS_STATIC_FUNCTION(pushScene) 
	#endif

	#ifndef GEODE_STATICS_removeStatsLabel
		#define GEODE_STATICS_removeStatsLabel
		GEODE_AS_STATIC_FUNCTION(removeStatsLabel) 
	#endif

	#ifndef GEODE_STATICS_replaceScene
		#define GEODE_STATICS_replaceScene
		GEODE_AS_STATIC_FUNCTION(replaceScene) 
	#endif

	#ifndef GEODE_STATICS_resetSmoothFixCounter
		#define GEODE_STATICS_resetSmoothFixCounter
		GEODE_AS_STATIC_FUNCTION(resetSmoothFixCounter) 
	#endif

	#ifndef GEODE_STATICS_reshapeProjection
		#define GEODE_STATICS_reshapeProjection
		GEODE_AS_STATIC_FUNCTION(reshapeProjection) 
	#endif

	#ifndef GEODE_STATICS_resume
		#define GEODE_STATICS_resume
		GEODE_AS_STATIC_FUNCTION(resume) 
	#endif

	#ifndef GEODE_STATICS_runWithScene
		#define GEODE_STATICS_runWithScene
		GEODE_AS_STATIC_FUNCTION(runWithScene) 
	#endif

	#ifndef GEODE_STATICS_sceneCount
		#define GEODE_STATICS_sceneCount
		GEODE_AS_STATIC_FUNCTION(sceneCount) 
	#endif

	#ifndef GEODE_STATICS_setAlphaBlending
		#define GEODE_STATICS_setAlphaBlending
		GEODE_AS_STATIC_FUNCTION(setAlphaBlending) 
	#endif

	#ifndef GEODE_STATICS_setContentScaleFactor
		#define GEODE_STATICS_setContentScaleFactor
		GEODE_AS_STATIC_FUNCTION(setContentScaleFactor) 
	#endif

	#ifndef GEODE_STATICS_setDefaultValues
		#define GEODE_STATICS_setDefaultValues
		GEODE_AS_STATIC_FUNCTION(setDefaultValues) 
	#endif

	#ifndef GEODE_STATICS_setDelegate
		#define GEODE_STATICS_setDelegate
		GEODE_AS_STATIC_FUNCTION(setDelegate) 
	#endif

	#ifndef GEODE_STATICS_setDeltaTime
		#define GEODE_STATICS_setDeltaTime
		GEODE_AS_STATIC_FUNCTION(setDeltaTime) 
	#endif

	#ifndef GEODE_STATICS_setDepthTest
		#define GEODE_STATICS_setDepthTest
		GEODE_AS_STATIC_FUNCTION(setDepthTest) 
	#endif

	#ifndef GEODE_STATICS_setGLDefaultValues
		#define GEODE_STATICS_setGLDefaultValues
		GEODE_AS_STATIC_FUNCTION(setGLDefaultValues) 
	#endif

	#ifndef GEODE_STATICS_setNextDeltaTimeZero
		#define GEODE_STATICS_setNextDeltaTimeZero
		GEODE_AS_STATIC_FUNCTION(setNextDeltaTimeZero) 
	#endif

	#ifndef GEODE_STATICS_setNextScene
		#define GEODE_STATICS_setNextScene
		GEODE_AS_STATIC_FUNCTION(setNextScene) 
	#endif

	#ifndef GEODE_STATICS_setOpenGLView
		#define GEODE_STATICS_setOpenGLView
		GEODE_AS_STATIC_FUNCTION(setOpenGLView) 
	#endif

	#ifndef GEODE_STATICS_setProjection
		#define GEODE_STATICS_setProjection
		GEODE_AS_STATIC_FUNCTION(setProjection) 
	#endif

	#ifndef GEODE_STATICS_setupScreenScale
		#define GEODE_STATICS_setupScreenScale
		GEODE_AS_STATIC_FUNCTION(setupScreenScale) 
	#endif

	#ifndef GEODE_STATICS_setViewport
		#define GEODE_STATICS_setViewport
		GEODE_AS_STATIC_FUNCTION(setViewport) 
	#endif

	#ifndef GEODE_STATICS_showFPSLabel
		#define GEODE_STATICS_showFPSLabel
		GEODE_AS_STATIC_FUNCTION(showFPSLabel) 
	#endif

	#ifndef GEODE_STATICS_showStats
		#define GEODE_STATICS_showStats
		GEODE_AS_STATIC_FUNCTION(showStats) 
	#endif

	#ifndef GEODE_STATICS_toggleShowFPS
		#define GEODE_STATICS_toggleShowFPS
		GEODE_AS_STATIC_FUNCTION(toggleShowFPS) 
	#endif

	#ifndef GEODE_STATICS_updateContentScale
		#define GEODE_STATICS_updateContentScale
		GEODE_AS_STATIC_FUNCTION(updateContentScale) 
	#endif

	#ifndef GEODE_STATICS_updateScreenScale
		#define GEODE_STATICS_updateScreenScale
		GEODE_AS_STATIC_FUNCTION(updateScreenScale) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToScene
		#define GEODE_STATICS_willSwitchToScene
		GEODE_AS_STATIC_FUNCTION(willSwitchToScene) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedDirector
		#define GEODE_CONCEPT_CHECK_sharedDirector
		GEODE_CONCEPT_FUNCTION_CHECK(sharedDirector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScheduler
		#define GEODE_CONCEPT_CHECK_getScheduler
		GEODE_CONCEPT_FUNCTION_CHECK(getScheduler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScheduler
		#define GEODE_CONCEPT_CHECK_setScheduler
		GEODE_CONCEPT_FUNCTION_CHECK(setScheduler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionManager
		#define GEODE_CONCEPT_CHECK_getActionManager
		GEODE_CONCEPT_FUNCTION_CHECK(getActionManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActionManager
		#define GEODE_CONCEPT_CHECK_setActionManager
		GEODE_CONCEPT_FUNCTION_CHECK(setActionManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchDispatcher
		#define GEODE_CONCEPT_CHECK_getTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchDispatcher
		#define GEODE_CONCEPT_CHECK_setTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getKeypadDispatcher
		#define GEODE_CONCEPT_CHECK_getKeypadDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(getKeypadDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setKeypadDispatcher
		#define GEODE_CONCEPT_CHECK_setKeypadDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(setKeypadDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getKeyboardDispatcher
		#define GEODE_CONCEPT_CHECK_getKeyboardDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(getKeyboardDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setKeyboardDispatcher
		#define GEODE_CONCEPT_CHECK_setKeyboardDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(setKeyboardDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMouseDispatcher
		#define GEODE_CONCEPT_CHECK_getMouseDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(getMouseDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMouseDispatcher
		#define GEODE_CONCEPT_CHECK_setMouseDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(setMouseDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccelerometer
		#define GEODE_CONCEPT_CHECK_getAccelerometer
		GEODE_CONCEPT_FUNCTION_CHECK(getAccelerometer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccelerometer
		#define GEODE_CONCEPT_CHECK_setAccelerometer
		GEODE_CONCEPT_FUNCTION_CHECK(setAccelerometer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeltaTime
		#define GEODE_CONCEPT_CHECK_getDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applySmoothFix
		#define GEODE_CONCEPT_CHECK_applySmoothFix
		GEODE_CONCEPT_FUNCTION_CHECK(applySmoothFix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateDeltaTime
		#define GEODE_CONCEPT_CHECK_calculateDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(calculateDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateMPF
		#define GEODE_CONCEPT_CHECK_calculateMPF
		GEODE_CONCEPT_FUNCTION_CHECK(calculateMPF) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSceneReference
		#define GEODE_CONCEPT_CHECK_checkSceneReference
		GEODE_CONCEPT_FUNCTION_CHECK(checkSceneReference) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToGL
		#define GEODE_CONCEPT_CHECK_convertToGL
		GEODE_CONCEPT_FUNCTION_CHECK(convertToGL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToUI
		#define GEODE_CONCEPT_CHECK_convertToUI
		GEODE_CONCEPT_FUNCTION_CHECK(convertToUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStatsLabel
		#define GEODE_CONCEPT_CHECK_createStatsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(createStatsLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawScene
		#define GEODE_CONCEPT_CHECK_drawScene
		GEODE_CONCEPT_FUNCTION_CHECK(drawScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_end
		#define GEODE_CONCEPT_CHECK_end
		GEODE_CONCEPT_FUNCTION_CHECK(end) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelegate
		#define GEODE_CONCEPT_CHECK_getDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(getDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFPSImageData
		#define GEODE_CONCEPT_CHECK_getFPSImageData
		GEODE_CONCEPT_FUNCTION_CHECK(getFPSImageData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNotificationNode
		#define GEODE_CONCEPT_CHECK_getNotificationNode
		GEODE_CONCEPT_FUNCTION_CHECK(getNotificationNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVisibleOrigin
		#define GEODE_CONCEPT_CHECK_getVisibleOrigin
		GEODE_CONCEPT_FUNCTION_CHECK(getVisibleOrigin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVisibleSize
		#define GEODE_CONCEPT_CHECK_getVisibleSize
		GEODE_CONCEPT_FUNCTION_CHECK(getVisibleSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWinSize
		#define GEODE_CONCEPT_CHECK_getWinSize
		GEODE_CONCEPT_FUNCTION_CHECK(getWinSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWinSizeInPixels
		#define GEODE_CONCEPT_CHECK_getWinSizeInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(getWinSizeInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getZEye
		#define GEODE_CONCEPT_CHECK_getZEye
		GEODE_CONCEPT_FUNCTION_CHECK(getZEye) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelForSceneInStack
		#define GEODE_CONCEPT_CHECK_levelForSceneInStack
		GEODE_CONCEPT_FUNCTION_CHECK(levelForSceneInStack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pause
		#define GEODE_CONCEPT_CHECK_pause
		GEODE_CONCEPT_FUNCTION_CHECK(pause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_popScene
		#define GEODE_CONCEPT_CHECK_popScene
		GEODE_CONCEPT_FUNCTION_CHECK(popScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_popSceneWithTransition
		#define GEODE_CONCEPT_CHECK_popSceneWithTransition
		GEODE_CONCEPT_FUNCTION_CHECK(popSceneWithTransition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_popToRootScene
		#define GEODE_CONCEPT_CHECK_popToRootScene
		GEODE_CONCEPT_FUNCTION_CHECK(popToRootScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_popToSceneInStack
		#define GEODE_CONCEPT_CHECK_popToSceneInStack
		GEODE_CONCEPT_FUNCTION_CHECK(popToSceneInStack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_popToSceneStackLevel
		#define GEODE_CONCEPT_CHECK_popToSceneStackLevel
		GEODE_CONCEPT_FUNCTION_CHECK(popToSceneStackLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeCachedData
		#define GEODE_CONCEPT_CHECK_purgeCachedData
		GEODE_CONCEPT_FUNCTION_CHECK(purgeCachedData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeDirector
		#define GEODE_CONCEPT_CHECK_purgeDirector
		GEODE_CONCEPT_FUNCTION_CHECK(purgeDirector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pushScene
		#define GEODE_CONCEPT_CHECK_pushScene
		GEODE_CONCEPT_FUNCTION_CHECK(pushScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeStatsLabel
		#define GEODE_CONCEPT_CHECK_removeStatsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(removeStatsLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replaceScene
		#define GEODE_CONCEPT_CHECK_replaceScene
		GEODE_CONCEPT_FUNCTION_CHECK(replaceScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSmoothFixCounter
		#define GEODE_CONCEPT_CHECK_resetSmoothFixCounter
		GEODE_CONCEPT_FUNCTION_CHECK(resetSmoothFixCounter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reshapeProjection
		#define GEODE_CONCEPT_CHECK_reshapeProjection
		GEODE_CONCEPT_FUNCTION_CHECK(reshapeProjection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resume
		#define GEODE_CONCEPT_CHECK_resume
		GEODE_CONCEPT_FUNCTION_CHECK(resume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runWithScene
		#define GEODE_CONCEPT_CHECK_runWithScene
		GEODE_CONCEPT_FUNCTION_CHECK(runWithScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneCount
		#define GEODE_CONCEPT_CHECK_sceneCount
		GEODE_CONCEPT_FUNCTION_CHECK(sceneCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAlphaBlending
		#define GEODE_CONCEPT_CHECK_setAlphaBlending
		GEODE_CONCEPT_FUNCTION_CHECK(setAlphaBlending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentScaleFactor
		#define GEODE_CONCEPT_CHECK_setContentScaleFactor
		GEODE_CONCEPT_FUNCTION_CHECK(setContentScaleFactor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultValues
		#define GEODE_CONCEPT_CHECK_setDefaultValues
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDeltaTime
		#define GEODE_CONCEPT_CHECK_setDeltaTime
		GEODE_CONCEPT_FUNCTION_CHECK(setDeltaTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDepthTest
		#define GEODE_CONCEPT_CHECK_setDepthTest
		GEODE_CONCEPT_FUNCTION_CHECK(setDepthTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGLDefaultValues
		#define GEODE_CONCEPT_CHECK_setGLDefaultValues
		GEODE_CONCEPT_FUNCTION_CHECK(setGLDefaultValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNextDeltaTimeZero
		#define GEODE_CONCEPT_CHECK_setNextDeltaTimeZero
		GEODE_CONCEPT_FUNCTION_CHECK(setNextDeltaTimeZero) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNextScene
		#define GEODE_CONCEPT_CHECK_setNextScene
		GEODE_CONCEPT_FUNCTION_CHECK(setNextScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpenGLView
		#define GEODE_CONCEPT_CHECK_setOpenGLView
		GEODE_CONCEPT_FUNCTION_CHECK(setOpenGLView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProjection
		#define GEODE_CONCEPT_CHECK_setProjection
		GEODE_CONCEPT_FUNCTION_CHECK(setProjection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupScreenScale
		#define GEODE_CONCEPT_CHECK_setupScreenScale
		GEODE_CONCEPT_FUNCTION_CHECK(setupScreenScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setViewport
		#define GEODE_CONCEPT_CHECK_setViewport
		GEODE_CONCEPT_FUNCTION_CHECK(setViewport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFPSLabel
		#define GEODE_CONCEPT_CHECK_showFPSLabel
		GEODE_CONCEPT_FUNCTION_CHECK(showFPSLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showStats
		#define GEODE_CONCEPT_CHECK_showStats
		GEODE_CONCEPT_FUNCTION_CHECK(showStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleShowFPS
		#define GEODE_CONCEPT_CHECK_toggleShowFPS
		GEODE_CONCEPT_FUNCTION_CHECK(toggleShowFPS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateContentScale
		#define GEODE_CONCEPT_CHECK_updateContentScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateContentScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScreenScale
		#define GEODE_CONCEPT_CHECK_updateScreenScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateScreenScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willSwitchToScene
		#define GEODE_CONCEPT_CHECK_willSwitchToScene
		GEODE_CONCEPT_FUNCTION_CHECK(willSwitchToScene) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDirector> : ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDirector>>::ModifyBase;
		using Base = cocos2d::CCDirector;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCDirector@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCDirector, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCDirector@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCDirector)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::sharedDirector)), Default, cocos2d::CCDirector, sharedDirector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::init)), Thiscall, cocos2d::CCDirector, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getScheduler)), Thiscall, cocos2d::CCDirector, getScheduler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCScheduler*>::func(&cocos2d::CCDirector::setScheduler)), Thiscall, cocos2d::CCDirector, setScheduler, cocos2d::CCScheduler*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getActionManager)), Thiscall, cocos2d::CCDirector, getActionManager, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCActionManager*>::func(&cocos2d::CCDirector::setActionManager)), Thiscall, cocos2d::CCDirector, setActionManager, cocos2d::CCActionManager*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getTouchDispatcher)), Thiscall, cocos2d::CCDirector, getTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouchDispatcher*>::func(&cocos2d::CCDirector::setTouchDispatcher)), Thiscall, cocos2d::CCDirector, setTouchDispatcher, cocos2d::CCTouchDispatcher*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getKeypadDispatcher)), Thiscall, cocos2d::CCDirector, getKeypadDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCKeypadDispatcher*>::func(&cocos2d::CCDirector::setKeypadDispatcher)), Thiscall, cocos2d::CCDirector, setKeypadDispatcher, cocos2d::CCKeypadDispatcher*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getKeyboardDispatcher)), Thiscall, cocos2d::CCDirector, getKeyboardDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCKeyboardDispatcher*>::func(&cocos2d::CCDirector::setKeyboardDispatcher)), Thiscall, cocos2d::CCDirector, setKeyboardDispatcher, cocos2d::CCKeyboardDispatcher*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getMouseDispatcher)), Thiscall, cocos2d::CCDirector, getMouseDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCMouseDispatcher*>::func(&cocos2d::CCDirector::setMouseDispatcher)), Thiscall, cocos2d::CCDirector, setMouseDispatcher, cocos2d::CCMouseDispatcher*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getAccelerometer)), Thiscall, cocos2d::CCDirector, getAccelerometer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCAccelerometer*>::func(&cocos2d::CCDirector::setAccelerometer)), Thiscall, cocos2d::CCDirector, setAccelerometer, cocos2d::CCAccelerometer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDirector::getDeltaTime)), Thiscall, cocos2d::CCDirector, getDeltaTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::applySmoothFix)), Thiscall, cocos2d::CCDirector, applySmoothFix, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::calculateDeltaTime)), Thiscall, cocos2d::CCDirector, calculateDeltaTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::calculateMPF)), Thiscall, cocos2d::CCDirector, calculateMPF, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::checkSceneReference)), Thiscall, cocos2d::CCDirector, checkSceneReference, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCDirector::convertToGL)), Thiscall, cocos2d::CCDirector, convertToGL, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCDirector::convertToUI)), Thiscall, cocos2d::CCDirector, convertToUI, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::createStatsLabel)), Thiscall, cocos2d::CCDirector, createStatsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::drawScene)), Thiscall, cocos2d::CCDirector, drawScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::end)), Thiscall, cocos2d::CCDirector, end, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::getDelegate)), Thiscall, cocos2d::CCDirector, getDelegate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned char**, unsigned int*>::func(&cocos2d::CCDirector::getFPSImageData)), Thiscall, cocos2d::CCDirector, getFPSImageData, unsigned char**, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::getNotificationNode)), Thiscall, cocos2d::CCDirector, getNotificationNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::getVisibleOrigin)), Thiscall, cocos2d::CCDirector, getVisibleOrigin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::getVisibleSize)), Thiscall, cocos2d::CCDirector, getVisibleSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::getWinSize)), Thiscall, cocos2d::CCDirector, getWinSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::getWinSizeInPixels)), Thiscall, cocos2d::CCDirector, getWinSizeInPixels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::getZEye)), Thiscall, cocos2d::CCDirector, getZEye, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScene*>::func(&cocos2d::CCDirector::levelForSceneInStack)), Thiscall, cocos2d::CCDirector, levelForSceneInStack, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::pause)), Thiscall, cocos2d::CCDirector, pause, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::popScene)), Thiscall, cocos2d::CCDirector, popScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::PopTransition>::func(&cocos2d::CCDirector::popSceneWithTransition)), Thiscall, cocos2d::CCDirector, popSceneWithTransition, float, cocos2d::PopTransition)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::popToRootScene)), Thiscall, cocos2d::CCDirector, popToRootScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScene*>::func(&cocos2d::CCDirector::popToSceneInStack)), Thiscall, cocos2d::CCDirector, popToSceneInStack, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCDirector::popToSceneStackLevel)), Thiscall, cocos2d::CCDirector, popToSceneStackLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::purgeCachedData)), Thiscall, cocos2d::CCDirector, purgeCachedData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::purgeDirector)), Thiscall, cocos2d::CCDirector, purgeDirector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScene*>::func(&cocos2d::CCDirector::pushScene)), Thiscall, cocos2d::CCDirector, pushScene, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::removeStatsLabel)), Thiscall, cocos2d::CCDirector, removeStatsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScene*>::func(&cocos2d::CCDirector::replaceScene)), Thiscall, cocos2d::CCDirector, replaceScene, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::resetSmoothFixCounter)), Thiscall, cocos2d::CCDirector, resetSmoothFixCounter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCDirector::reshapeProjection)), Thiscall, cocos2d::CCDirector, reshapeProjection, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::resume)), Thiscall, cocos2d::CCDirector, resume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScene*>::func(&cocos2d::CCDirector::runWithScene)), Thiscall, cocos2d::CCDirector, runWithScene, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::sceneCount)), Thiscall, cocos2d::CCDirector, sceneCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCDirector::setAlphaBlending)), Thiscall, cocos2d::CCDirector, setAlphaBlending, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCDirector::setContentScaleFactor)), Thiscall, cocos2d::CCDirector, setContentScaleFactor, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::setDefaultValues)), Thiscall, cocos2d::CCDirector, setDefaultValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDirectorDelegate*>::func(&cocos2d::CCDirector::setDelegate)), Thiscall, cocos2d::CCDirector, setDelegate, cocos2d::CCDirectorDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCDirector::setDeltaTime)), Thiscall, cocos2d::CCDirector, setDeltaTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCDirector::setDepthTest)), Thiscall, cocos2d::CCDirector, setDepthTest, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::setGLDefaultValues)), Thiscall, cocos2d::CCDirector, setGLDefaultValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCDirector::setNextDeltaTimeZero)), Thiscall, cocos2d::CCDirector, setNextDeltaTimeZero, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::setNextScene)), Thiscall, cocos2d::CCDirector, setNextScene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCEGLView*>::func(&cocos2d::CCDirector::setOpenGLView)), Thiscall, cocos2d::CCDirector, setOpenGLView, cocos2d::CCEGLView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccDirectorProjection>::func(&cocos2d::CCDirector::setProjection)), Thiscall, cocos2d::CCDirector, setProjection, cocos2d::ccDirectorProjection)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize, cocos2d::CCSize, cocos2d::TextureQuality>::func(&cocos2d::CCDirector::setupScreenScale)), Thiscall, cocos2d::CCDirector, setupScreenScale, cocos2d::CCSize, cocos2d::CCSize, cocos2d::TextureQuality)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::setViewport)), Thiscall, cocos2d::CCDirector, setViewport, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::showFPSLabel)), Thiscall, cocos2d::CCDirector, showFPSLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDirector::showStats)), Thiscall, cocos2d::CCDirector, showStats, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, gd::string, cocos2d::CCPoint>::func(&cocos2d::CCDirector::toggleShowFPS)), Thiscall, cocos2d::CCDirector, toggleShowFPS, bool, gd::string, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::TextureQuality>::func(&cocos2d::CCDirector::updateContentScale)), Thiscall, cocos2d::CCDirector, updateContentScale, cocos2d::TextureQuality)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize>::func(&cocos2d::CCDirector::updateScreenScale)), Thiscall, cocos2d::CCDirector, updateScreenScale, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScene*>::func(&cocos2d::CCDirector::willSwitchToScene)), Thiscall, cocos2d::CCDirector, willSwitchToScene, cocos2d::CCScene*)
		}
	};
}
