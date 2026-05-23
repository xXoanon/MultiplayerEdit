#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_resetGlobalOrderOfArrival
		#define GEODE_STATICS_resetGlobalOrderOfArrival
		GEODE_AS_STATIC_FUNCTION(resetGlobalOrderOfArrival) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setZOrder
		#define GEODE_STATICS_setZOrder
		GEODE_AS_STATIC_FUNCTION(setZOrder) 
	#endif

	#ifndef GEODE_STATICS__setZOrder
		#define GEODE_STATICS__setZOrder
		GEODE_AS_STATIC_FUNCTION(_setZOrder) 
	#endif

	#ifndef GEODE_STATICS_getZOrder
		#define GEODE_STATICS_getZOrder
		GEODE_AS_STATIC_FUNCTION(getZOrder) 
	#endif

	#ifndef GEODE_STATICS_setVertexZ
		#define GEODE_STATICS_setVertexZ
		GEODE_AS_STATIC_FUNCTION(setVertexZ) 
	#endif

	#ifndef GEODE_STATICS_getVertexZ
		#define GEODE_STATICS_getVertexZ
		GEODE_AS_STATIC_FUNCTION(getVertexZ) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_getScaleX
		#define GEODE_STATICS_getScaleX
		GEODE_AS_STATIC_FUNCTION(getScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_getScaleY
		#define GEODE_STATICS_getScaleY
		GEODE_AS_STATIC_FUNCTION(getScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_getScale
		#define GEODE_STATICS_getScale
		GEODE_AS_STATIC_FUNCTION(getScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_getPosition
		#define GEODE_STATICS_getPosition
		GEODE_AS_STATIC_FUNCTION(getPosition) 
	#endif

	#ifndef GEODE_STATICS_setPositionX
		#define GEODE_STATICS_setPositionX
		GEODE_AS_STATIC_FUNCTION(setPositionX) 
	#endif

	#ifndef GEODE_STATICS_getPositionX
		#define GEODE_STATICS_getPositionX
		GEODE_AS_STATIC_FUNCTION(getPositionX) 
	#endif

	#ifndef GEODE_STATICS_setPositionY
		#define GEODE_STATICS_setPositionY
		GEODE_AS_STATIC_FUNCTION(setPositionY) 
	#endif

	#ifndef GEODE_STATICS_getPositionY
		#define GEODE_STATICS_getPositionY
		GEODE_AS_STATIC_FUNCTION(getPositionY) 
	#endif

	#ifndef GEODE_STATICS_setSkewX
		#define GEODE_STATICS_setSkewX
		GEODE_AS_STATIC_FUNCTION(setSkewX) 
	#endif

	#ifndef GEODE_STATICS_getSkewX
		#define GEODE_STATICS_getSkewX
		GEODE_AS_STATIC_FUNCTION(getSkewX) 
	#endif

	#ifndef GEODE_STATICS_setSkewY
		#define GEODE_STATICS_setSkewY
		GEODE_AS_STATIC_FUNCTION(setSkewY) 
	#endif

	#ifndef GEODE_STATICS_getSkewY
		#define GEODE_STATICS_getSkewY
		GEODE_AS_STATIC_FUNCTION(getSkewY) 
	#endif

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_getAnchorPoint
		#define GEODE_STATICS_getAnchorPoint
		GEODE_AS_STATIC_FUNCTION(getAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_getAnchorPointInPoints
		#define GEODE_STATICS_getAnchorPointInPoints
		GEODE_AS_STATIC_FUNCTION(getAnchorPointInPoints) 
	#endif

	#ifndef GEODE_STATICS_setContentSize
		#define GEODE_STATICS_setContentSize
		GEODE_AS_STATIC_FUNCTION(setContentSize) 
	#endif

	#ifndef GEODE_STATICS_getContentSize
		#define GEODE_STATICS_getContentSize
		GEODE_AS_STATIC_FUNCTION(getContentSize) 
	#endif

	#ifndef GEODE_STATICS_getScaledContentSize
		#define GEODE_STATICS_getScaledContentSize
		GEODE_AS_STATIC_FUNCTION(getScaledContentSize) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_isVisible
		#define GEODE_STATICS_isVisible
		GEODE_AS_STATIC_FUNCTION(isVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_getRotation
		#define GEODE_STATICS_getRotation
		GEODE_AS_STATIC_FUNCTION(getRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_getRotationX
		#define GEODE_STATICS_getRotationX
		GEODE_AS_STATIC_FUNCTION(getRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_getRotationY
		#define GEODE_STATICS_getRotationY
		GEODE_AS_STATIC_FUNCTION(getRotationY) 
	#endif

	#ifndef GEODE_STATICS_setOrderOfArrival
		#define GEODE_STATICS_setOrderOfArrival
		GEODE_AS_STATIC_FUNCTION(setOrderOfArrival) 
	#endif

	#ifndef GEODE_STATICS_getOrderOfArrival
		#define GEODE_STATICS_getOrderOfArrival
		GEODE_AS_STATIC_FUNCTION(getOrderOfArrival) 
	#endif

	#ifndef GEODE_STATICS_setGLServerState
		#define GEODE_STATICS_setGLServerState
		GEODE_AS_STATIC_FUNCTION(setGLServerState) 
	#endif

	#ifndef GEODE_STATICS_getGLServerState
		#define GEODE_STATICS_getGLServerState
		GEODE_AS_STATIC_FUNCTION(getGLServerState) 
	#endif

	#ifndef GEODE_STATICS_ignoreAnchorPointForPosition
		#define GEODE_STATICS_ignoreAnchorPointForPosition
		GEODE_AS_STATIC_FUNCTION(ignoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_STATICS_isIgnoreAnchorPointForPosition
		#define GEODE_STATICS_isIgnoreAnchorPointForPosition
		GEODE_AS_STATIC_FUNCTION(isIgnoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_getChildByTag
		#define GEODE_STATICS_getChildByTag
		GEODE_AS_STATIC_FUNCTION(getChildByTag) 
	#endif

	#ifndef GEODE_STATICS_getChildren
		#define GEODE_STATICS_getChildren
		GEODE_AS_STATIC_FUNCTION(getChildren) 
	#endif

	#ifndef GEODE_STATICS_getChildrenCount
		#define GEODE_STATICS_getChildrenCount
		GEODE_AS_STATIC_FUNCTION(getChildrenCount) 
	#endif

	#ifndef GEODE_STATICS_setParent
		#define GEODE_STATICS_setParent
		GEODE_AS_STATIC_FUNCTION(setParent) 
	#endif

	#ifndef GEODE_STATICS_getParent
		#define GEODE_STATICS_getParent
		GEODE_AS_STATIC_FUNCTION(getParent) 
	#endif

	#ifndef GEODE_STATICS_removeFromParent
		#define GEODE_STATICS_removeFromParent
		GEODE_AS_STATIC_FUNCTION(removeFromParent) 
	#endif

	#ifndef GEODE_STATICS_removeFromParentAndCleanup
		#define GEODE_STATICS_removeFromParentAndCleanup
		GEODE_AS_STATIC_FUNCTION(removeFromParentAndCleanup) 
	#endif

	#ifndef GEODE_STATICS_removeMeAndCleanup
		#define GEODE_STATICS_removeMeAndCleanup
		GEODE_AS_STATIC_FUNCTION(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_removeChildByTag
		#define GEODE_STATICS_removeChildByTag
		GEODE_AS_STATIC_FUNCTION(removeChildByTag) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildren
		#define GEODE_STATICS_removeAllChildren
		GEODE_AS_STATIC_FUNCTION(removeAllChildren) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildrenWithCleanup
		#define GEODE_STATICS_removeAllChildrenWithCleanup
		GEODE_AS_STATIC_FUNCTION(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_STATICS_reorderChild
		#define GEODE_STATICS_reorderChild
		GEODE_AS_STATIC_FUNCTION(reorderChild) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildren
		#define GEODE_STATICS_sortAllChildren
		GEODE_AS_STATIC_FUNCTION(sortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_getGrid
		#define GEODE_STATICS_getGrid
		GEODE_AS_STATIC_FUNCTION(getGrid) 
	#endif

	#ifndef GEODE_STATICS_setGrid
		#define GEODE_STATICS_setGrid
		GEODE_AS_STATIC_FUNCTION(setGrid) 
	#endif

	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_getUserObject
		#define GEODE_STATICS_getUserObject
		GEODE_AS_STATIC_FUNCTION(getUserObject) 
	#endif

	#ifndef GEODE_STATICS_setUserObject
		#define GEODE_STATICS_setUserObject
		GEODE_AS_STATIC_FUNCTION(setUserObject) 
	#endif

	#ifndef GEODE_STATICS_getShaderProgram
		#define GEODE_STATICS_getShaderProgram
		GEODE_AS_STATIC_FUNCTION(getShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_setShaderProgram
		#define GEODE_STATICS_setShaderProgram
		GEODE_AS_STATIC_FUNCTION(setShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_getCamera
		#define GEODE_STATICS_getCamera
		GEODE_AS_STATIC_FUNCTION(getCamera) 
	#endif

	#ifndef GEODE_STATICS_isRunning
		#define GEODE_STATICS_isRunning
		GEODE_AS_STATIC_FUNCTION(isRunning) 
	#endif

	#ifndef GEODE_STATICS_registerScriptHandler
		#define GEODE_STATICS_registerScriptHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptHandler
		#define GEODE_STATICS_unregisterScriptHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_onExitTransitionDidStart
		#define GEODE_STATICS_onExitTransitionDidStart
		GEODE_AS_STATIC_FUNCTION(onExitTransitionDidStart) 
	#endif

	#ifndef GEODE_STATICS_cleanup
		#define GEODE_STATICS_cleanup
		GEODE_AS_STATIC_FUNCTION(cleanup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_setActionManager
		#define GEODE_STATICS_setActionManager
		GEODE_AS_STATIC_FUNCTION(setActionManager) 
	#endif

	#ifndef GEODE_STATICS_getActionManager
		#define GEODE_STATICS_getActionManager
		GEODE_AS_STATIC_FUNCTION(getActionManager) 
	#endif

	#ifndef GEODE_STATICS_setScheduler
		#define GEODE_STATICS_setScheduler
		GEODE_AS_STATIC_FUNCTION(setScheduler) 
	#endif

	#ifndef GEODE_STATICS_getScheduler
		#define GEODE_STATICS_getScheduler
		GEODE_AS_STATIC_FUNCTION(getScheduler) 
	#endif

	#ifndef GEODE_STATICS_updateTransform
		#define GEODE_STATICS_updateTransform
		GEODE_AS_STATIC_FUNCTION(updateTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToParentTransform
		#define GEODE_STATICS_nodeToParentTransform
		GEODE_AS_STATIC_FUNCTION(nodeToParentTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToParentTransformFast
		#define GEODE_STATICS_nodeToParentTransformFast
		GEODE_AS_STATIC_FUNCTION(nodeToParentTransformFast) 
	#endif

	#ifndef GEODE_STATICS_parentToNodeTransform
		#define GEODE_STATICS_parentToNodeTransform
		GEODE_AS_STATIC_FUNCTION(parentToNodeTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToWorldTransform
		#define GEODE_STATICS_nodeToWorldTransform
		GEODE_AS_STATIC_FUNCTION(nodeToWorldTransform) 
	#endif

	#ifndef GEODE_STATICS_nodeToWorldTransformFast
		#define GEODE_STATICS_nodeToWorldTransformFast
		GEODE_AS_STATIC_FUNCTION(nodeToWorldTransformFast) 
	#endif

	#ifndef GEODE_STATICS_worldToNodeTransform
		#define GEODE_STATICS_worldToNodeTransform
		GEODE_AS_STATIC_FUNCTION(worldToNodeTransform) 
	#endif

	#ifndef GEODE_STATICS_addComponent
		#define GEODE_STATICS_addComponent
		GEODE_AS_STATIC_FUNCTION(addComponent) 
	#endif

	#ifndef GEODE_STATICS_removeComponent
		#define GEODE_STATICS_removeComponent
		GEODE_AS_STATIC_FUNCTION(removeComponent) 
	#endif

	#ifndef GEODE_STATICS_removeAllComponents
		#define GEODE_STATICS_removeAllComponents
		GEODE_AS_STATIC_FUNCTION(removeAllComponents) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

	#ifndef GEODE_STATICS_updateTweenActionInt
		#define GEODE_STATICS_updateTweenActionInt
		GEODE_AS_STATIC_FUNCTION(updateTweenActionInt) 
	#endif

	#ifndef GEODE_STATICS_boundingBox
		#define GEODE_STATICS_boundingBox
		GEODE_AS_STATIC_FUNCTION(boundingBox) 
	#endif

	#ifndef GEODE_STATICS_childrenAlloc
		#define GEODE_STATICS_childrenAlloc
		GEODE_AS_STATIC_FUNCTION(childrenAlloc) 
	#endif

	#ifndef GEODE_STATICS_convertToNodeSpace
		#define GEODE_STATICS_convertToNodeSpace
		GEODE_AS_STATIC_FUNCTION(convertToNodeSpace) 
	#endif

	#ifndef GEODE_STATICS_convertToNodeSpaceAR
		#define GEODE_STATICS_convertToNodeSpaceAR
		GEODE_AS_STATIC_FUNCTION(convertToNodeSpaceAR) 
	#endif

	#ifndef GEODE_STATICS_convertTouchToNodeSpace
		#define GEODE_STATICS_convertTouchToNodeSpace
		GEODE_AS_STATIC_FUNCTION(convertTouchToNodeSpace) 
	#endif

	#ifndef GEODE_STATICS_convertTouchToNodeSpaceAR
		#define GEODE_STATICS_convertTouchToNodeSpaceAR
		GEODE_AS_STATIC_FUNCTION(convertTouchToNodeSpaceAR) 
	#endif

	#ifndef GEODE_STATICS_convertToWindowSpace
		#define GEODE_STATICS_convertToWindowSpace
		GEODE_AS_STATIC_FUNCTION(convertToWindowSpace) 
	#endif

	#ifndef GEODE_STATICS_convertToWorldSpace
		#define GEODE_STATICS_convertToWorldSpace
		GEODE_AS_STATIC_FUNCTION(convertToWorldSpace) 
	#endif

	#ifndef GEODE_STATICS_convertToWorldSpaceAR
		#define GEODE_STATICS_convertToWorldSpaceAR
		GEODE_AS_STATIC_FUNCTION(convertToWorldSpaceAR) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_detachChild
		#define GEODE_STATICS_detachChild
		GEODE_AS_STATIC_FUNCTION(detachChild) 
	#endif

	#ifndef GEODE_STATICS_getActionByTag
		#define GEODE_STATICS_getActionByTag
		GEODE_AS_STATIC_FUNCTION(getActionByTag) 
	#endif

	#ifndef GEODE_STATICS_getComponent
		#define GEODE_STATICS_getComponent
		GEODE_AS_STATIC_FUNCTION(getComponent) 
	#endif

	#ifndef GEODE_STATICS_insertChild
		#define GEODE_STATICS_insertChild
		GEODE_AS_STATIC_FUNCTION(insertChild) 
	#endif

	#ifndef GEODE_STATICS_numberOfRunningActions
		#define GEODE_STATICS_numberOfRunningActions
		GEODE_AS_STATIC_FUNCTION(numberOfRunningActions) 
	#endif

	#ifndef GEODE_STATICS_pauseSchedulerAndActions
		#define GEODE_STATICS_pauseSchedulerAndActions
		GEODE_AS_STATIC_FUNCTION(pauseSchedulerAndActions) 
	#endif

	#ifndef GEODE_STATICS_qsortAllChildrenWithIndex
		#define GEODE_STATICS_qsortAllChildrenWithIndex
		GEODE_AS_STATIC_FUNCTION(qsortAllChildrenWithIndex) 
	#endif

	#ifndef GEODE_STATICS_resumeSchedulerAndActions
		#define GEODE_STATICS_resumeSchedulerAndActions
		GEODE_AS_STATIC_FUNCTION(resumeSchedulerAndActions) 
	#endif

	#ifndef GEODE_STATICS_runAction
		#define GEODE_STATICS_runAction
		GEODE_AS_STATIC_FUNCTION(runAction) 
	#endif

	#ifndef GEODE_STATICS_schedule
		#define GEODE_STATICS_schedule
		GEODE_AS_STATIC_FUNCTION(schedule) 
	#endif

	#ifndef GEODE_STATICS_scheduleOnce
		#define GEODE_STATICS_scheduleOnce
		GEODE_AS_STATIC_FUNCTION(scheduleOnce) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdate
		#define GEODE_STATICS_scheduleUpdate
		GEODE_AS_STATIC_FUNCTION(scheduleUpdate) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdateWithPriority
		#define GEODE_STATICS_scheduleUpdateWithPriority
		GEODE_AS_STATIC_FUNCTION(scheduleUpdateWithPriority) 
	#endif

	#ifndef GEODE_STATICS_scheduleUpdateWithPriorityLua
		#define GEODE_STATICS_scheduleUpdateWithPriorityLua
		GEODE_AS_STATIC_FUNCTION(scheduleUpdateWithPriorityLua) 
	#endif

	#ifndef GEODE_STATICS_setAdditionalTransform
		#define GEODE_STATICS_setAdditionalTransform
		GEODE_AS_STATIC_FUNCTION(setAdditionalTransform) 
	#endif

	#ifndef GEODE_STATICS_setUseChildIndex
		#define GEODE_STATICS_setUseChildIndex
		GEODE_AS_STATIC_FUNCTION(setUseChildIndex) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildrenNoIndex
		#define GEODE_STATICS_sortAllChildrenNoIndex
		GEODE_AS_STATIC_FUNCTION(sortAllChildrenNoIndex) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildrenWithIndex
		#define GEODE_STATICS_sortAllChildrenWithIndex
		GEODE_AS_STATIC_FUNCTION(sortAllChildrenWithIndex) 
	#endif

	#ifndef GEODE_STATICS_stopAction
		#define GEODE_STATICS_stopAction
		GEODE_AS_STATIC_FUNCTION(stopAction) 
	#endif

	#ifndef GEODE_STATICS_stopActionByTag
		#define GEODE_STATICS_stopActionByTag
		GEODE_AS_STATIC_FUNCTION(stopActionByTag) 
	#endif

	#ifndef GEODE_STATICS_stopAllActions
		#define GEODE_STATICS_stopAllActions
		GEODE_AS_STATIC_FUNCTION(stopAllActions) 
	#endif

	#ifndef GEODE_STATICS_transform
		#define GEODE_STATICS_transform
		GEODE_AS_STATIC_FUNCTION(transform) 
	#endif

	#ifndef GEODE_STATICS_transformAncestors
		#define GEODE_STATICS_transformAncestors
		GEODE_AS_STATIC_FUNCTION(transformAncestors) 
	#endif

	#ifndef GEODE_STATICS_unschedule
		#define GEODE_STATICS_unschedule
		GEODE_AS_STATIC_FUNCTION(unschedule) 
	#endif

	#ifndef GEODE_STATICS_unscheduleAllSelectors
		#define GEODE_STATICS_unscheduleAllSelectors
		GEODE_AS_STATIC_FUNCTION(unscheduleAllSelectors) 
	#endif

	#ifndef GEODE_STATICS_unscheduleUpdate
		#define GEODE_STATICS_unscheduleUpdate
		GEODE_AS_STATIC_FUNCTION(unscheduleUpdate) 
	#endif

	#ifndef GEODE_STATICS_updateChildIndexes
		#define GEODE_STATICS_updateChildIndexes
		GEODE_AS_STATIC_FUNCTION(updateChildIndexes) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGlobalOrderOfArrival
		#define GEODE_CONCEPT_CHECK_resetGlobalOrderOfArrival
		GEODE_CONCEPT_FUNCTION_CHECK(resetGlobalOrderOfArrival) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setZOrder
		#define GEODE_CONCEPT_CHECK_setZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(setZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__setZOrder
		#define GEODE_CONCEPT_CHECK__setZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(_setZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getZOrder
		#define GEODE_CONCEPT_CHECK_getZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVertexZ
		#define GEODE_CONCEPT_CHECK_setVertexZ
		GEODE_CONCEPT_FUNCTION_CHECK(setVertexZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVertexZ
		#define GEODE_CONCEPT_CHECK_getVertexZ
		GEODE_CONCEPT_FUNCTION_CHECK(getVertexZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleX
		#define GEODE_CONCEPT_CHECK_setScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleX
		#define GEODE_CONCEPT_CHECK_getScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleY
		#define GEODE_CONCEPT_CHECK_setScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleY
		#define GEODE_CONCEPT_CHECK_getScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScale
		#define GEODE_CONCEPT_CHECK_getScale
		GEODE_CONCEPT_FUNCTION_CHECK(getScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPosition
		#define GEODE_CONCEPT_CHECK_getPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPositionX
		#define GEODE_CONCEPT_CHECK_setPositionX
		GEODE_CONCEPT_FUNCTION_CHECK(setPositionX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPositionX
		#define GEODE_CONCEPT_CHECK_getPositionX
		GEODE_CONCEPT_FUNCTION_CHECK(getPositionX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPositionY
		#define GEODE_CONCEPT_CHECK_setPositionY
		GEODE_CONCEPT_FUNCTION_CHECK(setPositionY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPositionY
		#define GEODE_CONCEPT_CHECK_getPositionY
		GEODE_CONCEPT_FUNCTION_CHECK(getPositionY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSkewX
		#define GEODE_CONCEPT_CHECK_setSkewX
		GEODE_CONCEPT_FUNCTION_CHECK(setSkewX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSkewX
		#define GEODE_CONCEPT_CHECK_getSkewX
		GEODE_CONCEPT_FUNCTION_CHECK(getSkewX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSkewY
		#define GEODE_CONCEPT_CHECK_setSkewY
		GEODE_CONCEPT_FUNCTION_CHECK(setSkewY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSkewY
		#define GEODE_CONCEPT_CHECK_getSkewY
		GEODE_CONCEPT_FUNCTION_CHECK(getSkewY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAnchorPoint
		#define GEODE_CONCEPT_CHECK_setAnchorPoint
		GEODE_CONCEPT_FUNCTION_CHECK(setAnchorPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAnchorPoint
		#define GEODE_CONCEPT_CHECK_getAnchorPoint
		GEODE_CONCEPT_FUNCTION_CHECK(getAnchorPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAnchorPointInPoints
		#define GEODE_CONCEPT_CHECK_getAnchorPointInPoints
		GEODE_CONCEPT_FUNCTION_CHECK(getAnchorPointInPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentSize
		#define GEODE_CONCEPT_CHECK_setContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(setContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentSize
		#define GEODE_CONCEPT_CHECK_getContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(getContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaledContentSize
		#define GEODE_CONCEPT_CHECK_getScaledContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(getScaledContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isVisible
		#define GEODE_CONCEPT_CHECK_isVisible
		GEODE_CONCEPT_FUNCTION_CHECK(isVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotation
		#define GEODE_CONCEPT_CHECK_getRotation
		GEODE_CONCEPT_FUNCTION_CHECK(getRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationX
		#define GEODE_CONCEPT_CHECK_setRotationX
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotationX
		#define GEODE_CONCEPT_CHECK_getRotationX
		GEODE_CONCEPT_FUNCTION_CHECK(getRotationX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationY
		#define GEODE_CONCEPT_CHECK_setRotationY
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotationY
		#define GEODE_CONCEPT_CHECK_getRotationY
		GEODE_CONCEPT_FUNCTION_CHECK(getRotationY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOrderOfArrival
		#define GEODE_CONCEPT_CHECK_setOrderOfArrival
		GEODE_CONCEPT_FUNCTION_CHECK(setOrderOfArrival) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrderOfArrival
		#define GEODE_CONCEPT_CHECK_getOrderOfArrival
		GEODE_CONCEPT_FUNCTION_CHECK(getOrderOfArrival) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGLServerState
		#define GEODE_CONCEPT_CHECK_setGLServerState
		GEODE_CONCEPT_FUNCTION_CHECK(setGLServerState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGLServerState
		#define GEODE_CONCEPT_CHECK_getGLServerState
		GEODE_CONCEPT_FUNCTION_CHECK(getGLServerState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreAnchorPointForPosition
		#define GEODE_CONCEPT_CHECK_ignoreAnchorPointForPosition
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isIgnoreAnchorPointForPosition
		#define GEODE_CONCEPT_CHECK_isIgnoreAnchorPointForPosition
		GEODE_CONCEPT_FUNCTION_CHECK(isIgnoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChild
		#define GEODE_CONCEPT_CHECK_addChild
		GEODE_CONCEPT_FUNCTION_CHECK(addChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChildByTag
		#define GEODE_CONCEPT_CHECK_getChildByTag
		GEODE_CONCEPT_FUNCTION_CHECK(getChildByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChildren
		#define GEODE_CONCEPT_CHECK_getChildren
		GEODE_CONCEPT_FUNCTION_CHECK(getChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChildrenCount
		#define GEODE_CONCEPT_CHECK_getChildrenCount
		GEODE_CONCEPT_FUNCTION_CHECK(getChildrenCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParent
		#define GEODE_CONCEPT_CHECK_setParent
		GEODE_CONCEPT_FUNCTION_CHECK(setParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParent
		#define GEODE_CONCEPT_CHECK_getParent
		GEODE_CONCEPT_FUNCTION_CHECK(getParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromParent
		#define GEODE_CONCEPT_CHECK_removeFromParent
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromParentAndCleanup
		#define GEODE_CONCEPT_CHECK_removeFromParentAndCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromParentAndCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMeAndCleanup
		#define GEODE_CONCEPT_CHECK_removeMeAndCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChild
		#define GEODE_CONCEPT_CHECK_removeChild
		GEODE_CONCEPT_FUNCTION_CHECK(removeChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChildByTag
		#define GEODE_CONCEPT_CHECK_removeChildByTag
		GEODE_CONCEPT_FUNCTION_CHECK(removeChildByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllChildren
		#define GEODE_CONCEPT_CHECK_removeAllChildren
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		#define GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderChild
		#define GEODE_CONCEPT_CHECK_reorderChild
		GEODE_CONCEPT_FUNCTION_CHECK(reorderChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortAllChildren
		#define GEODE_CONCEPT_CHECK_sortAllChildren
		GEODE_CONCEPT_FUNCTION_CHECK(sortAllChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGrid
		#define GEODE_CONCEPT_CHECK_getGrid
		GEODE_CONCEPT_FUNCTION_CHECK(getGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGrid
		#define GEODE_CONCEPT_CHECK_setGrid
		GEODE_CONCEPT_FUNCTION_CHECK(setGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserObject
		#define GEODE_CONCEPT_CHECK_getUserObject
		GEODE_CONCEPT_FUNCTION_CHECK(getUserObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserObject
		#define GEODE_CONCEPT_CHECK_setUserObject
		GEODE_CONCEPT_FUNCTION_CHECK(setUserObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShaderProgram
		#define GEODE_CONCEPT_CHECK_getShaderProgram
		GEODE_CONCEPT_FUNCTION_CHECK(getShaderProgram) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShaderProgram
		#define GEODE_CONCEPT_CHECK_setShaderProgram
		GEODE_CONCEPT_FUNCTION_CHECK(setShaderProgram) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCamera
		#define GEODE_CONCEPT_CHECK_getCamera
		GEODE_CONCEPT_FUNCTION_CHECK(getCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRunning
		#define GEODE_CONCEPT_CHECK_isRunning
		GEODE_CONCEPT_FUNCTION_CHECK(isRunning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerScriptHandler
		#define GEODE_CONCEPT_CHECK_registerScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(registerScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterScriptHandler
		#define GEODE_CONCEPT_CHECK_unregisterScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitTransitionDidStart
		#define GEODE_CONCEPT_CHECK_onExitTransitionDidStart
		GEODE_CONCEPT_FUNCTION_CHECK(onExitTransitionDidStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cleanup
		#define GEODE_CONCEPT_CHECK_cleanup
		GEODE_CONCEPT_FUNCTION_CHECK(cleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActionManager
		#define GEODE_CONCEPT_CHECK_setActionManager
		GEODE_CONCEPT_FUNCTION_CHECK(setActionManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionManager
		#define GEODE_CONCEPT_CHECK_getActionManager
		GEODE_CONCEPT_FUNCTION_CHECK(getActionManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScheduler
		#define GEODE_CONCEPT_CHECK_setScheduler
		GEODE_CONCEPT_FUNCTION_CHECK(setScheduler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScheduler
		#define GEODE_CONCEPT_CHECK_getScheduler
		GEODE_CONCEPT_FUNCTION_CHECK(getScheduler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTransform
		#define GEODE_CONCEPT_CHECK_updateTransform
		GEODE_CONCEPT_FUNCTION_CHECK(updateTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nodeToParentTransform
		#define GEODE_CONCEPT_CHECK_nodeToParentTransform
		GEODE_CONCEPT_FUNCTION_CHECK(nodeToParentTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nodeToParentTransformFast
		#define GEODE_CONCEPT_CHECK_nodeToParentTransformFast
		GEODE_CONCEPT_FUNCTION_CHECK(nodeToParentTransformFast) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentToNodeTransform
		#define GEODE_CONCEPT_CHECK_parentToNodeTransform
		GEODE_CONCEPT_FUNCTION_CHECK(parentToNodeTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nodeToWorldTransform
		#define GEODE_CONCEPT_CHECK_nodeToWorldTransform
		GEODE_CONCEPT_FUNCTION_CHECK(nodeToWorldTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nodeToWorldTransformFast
		#define GEODE_CONCEPT_CHECK_nodeToWorldTransformFast
		GEODE_CONCEPT_FUNCTION_CHECK(nodeToWorldTransformFast) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_worldToNodeTransform
		#define GEODE_CONCEPT_CHECK_worldToNodeTransform
		GEODE_CONCEPT_FUNCTION_CHECK(worldToNodeTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addComponent
		#define GEODE_CONCEPT_CHECK_addComponent
		GEODE_CONCEPT_FUNCTION_CHECK(addComponent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeComponent
		#define GEODE_CONCEPT_CHECK_removeComponent
		GEODE_CONCEPT_FUNCTION_CHECK(removeComponent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllComponents
		#define GEODE_CONCEPT_CHECK_removeAllComponents
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllComponents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenActionInt
		#define GEODE_CONCEPT_CHECK_updateTweenActionInt
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenActionInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_boundingBox
		#define GEODE_CONCEPT_CHECK_boundingBox
		GEODE_CONCEPT_FUNCTION_CHECK(boundingBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_childrenAlloc
		#define GEODE_CONCEPT_CHECK_childrenAlloc
		GEODE_CONCEPT_FUNCTION_CHECK(childrenAlloc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToNodeSpace
		#define GEODE_CONCEPT_CHECK_convertToNodeSpace
		GEODE_CONCEPT_FUNCTION_CHECK(convertToNodeSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToNodeSpaceAR
		#define GEODE_CONCEPT_CHECK_convertToNodeSpaceAR
		GEODE_CONCEPT_FUNCTION_CHECK(convertToNodeSpaceAR) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertTouchToNodeSpace
		#define GEODE_CONCEPT_CHECK_convertTouchToNodeSpace
		GEODE_CONCEPT_FUNCTION_CHECK(convertTouchToNodeSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertTouchToNodeSpaceAR
		#define GEODE_CONCEPT_CHECK_convertTouchToNodeSpaceAR
		GEODE_CONCEPT_FUNCTION_CHECK(convertTouchToNodeSpaceAR) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToWindowSpace
		#define GEODE_CONCEPT_CHECK_convertToWindowSpace
		GEODE_CONCEPT_FUNCTION_CHECK(convertToWindowSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToWorldSpace
		#define GEODE_CONCEPT_CHECK_convertToWorldSpace
		GEODE_CONCEPT_FUNCTION_CHECK(convertToWorldSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_convertToWorldSpaceAR
		#define GEODE_CONCEPT_CHECK_convertToWorldSpaceAR
		GEODE_CONCEPT_FUNCTION_CHECK(convertToWorldSpaceAR) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_detachChild
		#define GEODE_CONCEPT_CHECK_detachChild
		GEODE_CONCEPT_FUNCTION_CHECK(detachChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionByTag
		#define GEODE_CONCEPT_CHECK_getActionByTag
		GEODE_CONCEPT_FUNCTION_CHECK(getActionByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getComponent
		#define GEODE_CONCEPT_CHECK_getComponent
		GEODE_CONCEPT_FUNCTION_CHECK(getComponent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertChild
		#define GEODE_CONCEPT_CHECK_insertChild
		GEODE_CONCEPT_FUNCTION_CHECK(insertChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_numberOfRunningActions
		#define GEODE_CONCEPT_CHECK_numberOfRunningActions
		GEODE_CONCEPT_FUNCTION_CHECK(numberOfRunningActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseSchedulerAndActions
		#define GEODE_CONCEPT_CHECK_pauseSchedulerAndActions
		GEODE_CONCEPT_FUNCTION_CHECK(pauseSchedulerAndActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_qsortAllChildrenWithIndex
		#define GEODE_CONCEPT_CHECK_qsortAllChildrenWithIndex
		GEODE_CONCEPT_FUNCTION_CHECK(qsortAllChildrenWithIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeSchedulerAndActions
		#define GEODE_CONCEPT_CHECK_resumeSchedulerAndActions
		GEODE_CONCEPT_FUNCTION_CHECK(resumeSchedulerAndActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runAction
		#define GEODE_CONCEPT_CHECK_runAction
		GEODE_CONCEPT_FUNCTION_CHECK(runAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_schedule
		#define GEODE_CONCEPT_CHECK_schedule
		GEODE_CONCEPT_FUNCTION_CHECK(schedule) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleOnce
		#define GEODE_CONCEPT_CHECK_scheduleOnce
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleOnce) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleUpdate
		#define GEODE_CONCEPT_CHECK_scheduleUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleUpdateWithPriority
		#define GEODE_CONCEPT_CHECK_scheduleUpdateWithPriority
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleUpdateWithPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleUpdateWithPriorityLua
		#define GEODE_CONCEPT_CHECK_scheduleUpdateWithPriorityLua
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleUpdateWithPriorityLua) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAdditionalTransform
		#define GEODE_CONCEPT_CHECK_setAdditionalTransform
		GEODE_CONCEPT_FUNCTION_CHECK(setAdditionalTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUseChildIndex
		#define GEODE_CONCEPT_CHECK_setUseChildIndex
		GEODE_CONCEPT_FUNCTION_CHECK(setUseChildIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortAllChildrenNoIndex
		#define GEODE_CONCEPT_CHECK_sortAllChildrenNoIndex
		GEODE_CONCEPT_FUNCTION_CHECK(sortAllChildrenNoIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortAllChildrenWithIndex
		#define GEODE_CONCEPT_CHECK_sortAllChildrenWithIndex
		GEODE_CONCEPT_FUNCTION_CHECK(sortAllChildrenWithIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAction
		#define GEODE_CONCEPT_CHECK_stopAction
		GEODE_CONCEPT_FUNCTION_CHECK(stopAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopActionByTag
		#define GEODE_CONCEPT_CHECK_stopActionByTag
		GEODE_CONCEPT_FUNCTION_CHECK(stopActionByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllActions
		#define GEODE_CONCEPT_CHECK_stopAllActions
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transform
		#define GEODE_CONCEPT_CHECK_transform
		GEODE_CONCEPT_FUNCTION_CHECK(transform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformAncestors
		#define GEODE_CONCEPT_CHECK_transformAncestors
		GEODE_CONCEPT_FUNCTION_CHECK(transformAncestors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unschedule
		#define GEODE_CONCEPT_CHECK_unschedule
		GEODE_CONCEPT_FUNCTION_CHECK(unschedule) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleAllSelectors
		#define GEODE_CONCEPT_CHECK_unscheduleAllSelectors
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleAllSelectors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unscheduleUpdate
		#define GEODE_CONCEPT_CHECK_unscheduleUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(unscheduleUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChildIndexes
		#define GEODE_CONCEPT_CHECK_updateChildIndexes
		GEODE_CONCEPT_FUNCTION_CHECK(updateChildIndexes) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCNode>>::ModifyBase;
		using Base = cocos2d::CCNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d6CCNodeC2Ev")), Default, cocos2d::CCNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d6CCNodeD2Ev")), Default, cocos2d::CCNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::create)), Default, cocos2d::CCNode, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::resetGlobalOrderOfArrival)), Default, cocos2d::CCNode, resetGlobalOrderOfArrival, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::update)), Default, cocos2d::CCNode, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::init)), Default, cocos2d::CCNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCNode::setZOrder)), Default, cocos2d::CCNode, setZOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCNode::_setZOrder)), Default, cocos2d::CCNode, _setZOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getZOrder)), Default, cocos2d::CCNode, getZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setVertexZ)), Default, cocos2d::CCNode, setVertexZ, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getVertexZ)), Default, cocos2d::CCNode, getVertexZ, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setScaleX)), Default, cocos2d::CCNode, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getScaleX)), Default, cocos2d::CCNode, getScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setScaleY)), Default, cocos2d::CCNode, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getScaleY)), Default, cocos2d::CCNode, getScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setScale)), Default, cocos2d::CCNode, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getScale)), Default, cocos2d::CCNode, getScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float>::func(&cocos2d::CCNode::setScale)), Default, cocos2d::CCNode, setScale, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::setPosition)), Default, cocos2d::CCNode, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getPosition)), Default, cocos2d::CCNode, getPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float>::func(&cocos2d::CCNode::setPosition)), Default, cocos2d::CCNode, setPosition, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float*, float*>::func(&cocos2d::CCNode::getPosition)), Default, cocos2d::CCNode, getPosition, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setPositionX)), Default, cocos2d::CCNode, setPositionX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getPositionX)), Default, cocos2d::CCNode, getPositionX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setPositionY)), Default, cocos2d::CCNode, setPositionY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getPositionY)), Default, cocos2d::CCNode, getPositionY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setSkewX)), Default, cocos2d::CCNode, setSkewX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getSkewX)), Default, cocos2d::CCNode, getSkewX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setSkewY)), Default, cocos2d::CCNode, setSkewY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getSkewY)), Default, cocos2d::CCNode, getSkewY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::setAnchorPoint)), Default, cocos2d::CCNode, setAnchorPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getAnchorPoint)), Default, cocos2d::CCNode, getAnchorPoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getAnchorPointInPoints)), Default, cocos2d::CCNode, getAnchorPointInPoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCNode::setContentSize)), Default, cocos2d::CCNode, setContentSize, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getContentSize)), Default, cocos2d::CCNode, getContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getScaledContentSize)), Default, cocos2d::CCNode, getScaledContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCNode::setVisible)), Default, cocos2d::CCNode, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::isVisible)), Default, cocos2d::CCNode, isVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setRotation)), Default, cocos2d::CCNode, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getRotation)), Default, cocos2d::CCNode, getRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setRotationX)), Default, cocos2d::CCNode, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getRotationX)), Default, cocos2d::CCNode, getRotationX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCNode::setRotationY)), Default, cocos2d::CCNode, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getRotationY)), Default, cocos2d::CCNode, getRotationY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCNode::setOrderOfArrival)), Default, cocos2d::CCNode, setOrderOfArrival, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getOrderOfArrival)), Default, cocos2d::CCNode, getOrderOfArrival, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccGLServerState>::func(&cocos2d::CCNode::setGLServerState)), Default, cocos2d::CCNode, setGLServerState, cocos2d::ccGLServerState)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getGLServerState)), Default, cocos2d::CCNode, getGLServerState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCNode::ignoreAnchorPointForPosition)), Default, cocos2d::CCNode, ignoreAnchorPointForPosition, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::isIgnoreAnchorPointForPosition)), Default, cocos2d::CCNode, isIgnoreAnchorPointForPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCNode::addChild)), Default, cocos2d::CCNode, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCNode::addChild)), Default, cocos2d::CCNode, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCNode::addChild)), Default, cocos2d::CCNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCNode::getChildByTag)), Default, cocos2d::CCNode, getChildByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getChildren)), Default, cocos2d::CCNode, getChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getChildrenCount)), Default, cocos2d::CCNode, getChildrenCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCNode::setParent)), Default, cocos2d::CCNode, setParent, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getParent)), Default, cocos2d::CCNode, getParent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::removeFromParent)), Default, cocos2d::CCNode, removeFromParent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCNode::removeFromParentAndCleanup)), Default, cocos2d::CCNode, removeFromParentAndCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::removeMeAndCleanup)), Default, cocos2d::CCNode, removeMeAndCleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCNode::removeChild)), Default, cocos2d::CCNode, removeChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCNode::removeChild)), Default, cocos2d::CCNode, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCNode::removeChildByTag)), Default, cocos2d::CCNode, removeChildByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, bool>::func(&cocos2d::CCNode::removeChildByTag)), Default, cocos2d::CCNode, removeChildByTag, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::removeAllChildren)), Default, cocos2d::CCNode, removeAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCNode::removeAllChildrenWithCleanup)), Default, cocos2d::CCNode, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCNode::reorderChild)), Default, cocos2d::CCNode, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::sortAllChildren)), Default, cocos2d::CCNode, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getGrid)), Default, cocos2d::CCNode, getGrid, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCGridBase*>::func(&cocos2d::CCNode::setGrid)), Default, cocos2d::CCNode, setGrid, cocos2d::CCGridBase*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getUserData)), Default, cocos2d::CCNode, getUserData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<void*>::func(&cocos2d::CCNode::setUserData)), Default, cocos2d::CCNode, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getUserObject)), Default, cocos2d::CCNode, getUserObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCNode::setUserObject)), Default, cocos2d::CCNode, setUserObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getShaderProgram)), Default, cocos2d::CCNode, getShaderProgram, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCGLProgram*>::func(&cocos2d::CCNode::setShaderProgram)), Default, cocos2d::CCNode, setShaderProgram, cocos2d::CCGLProgram*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getCamera)), Default, cocos2d::CCNode, getCamera, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::isRunning)), Default, cocos2d::CCNode, isRunning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCNode::registerScriptHandler)), Default, cocos2d::CCNode, registerScriptHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::unregisterScriptHandler)), Default, cocos2d::CCNode, unregisterScriptHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::onEnter)), Default, cocos2d::CCNode, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::onEnterTransitionDidFinish)), Default, cocos2d::CCNode, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::onExit)), Default, cocos2d::CCNode, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::onExitTransitionDidStart)), Default, cocos2d::CCNode, onExitTransitionDidStart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::cleanup)), Default, cocos2d::CCNode, cleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::draw)), Default, cocos2d::CCNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::visit)), Default, cocos2d::CCNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCActionManager*>::func(&cocos2d::CCNode::setActionManager)), Default, cocos2d::CCNode, setActionManager, cocos2d::CCActionManager*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getActionManager)), Default, cocos2d::CCNode, getActionManager, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCScheduler*>::func(&cocos2d::CCNode::setScheduler)), Default, cocos2d::CCNode, setScheduler, cocos2d::CCScheduler*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::getScheduler)), Default, cocos2d::CCNode, getScheduler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::updateTransform)), Default, cocos2d::CCNode, updateTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::nodeToParentTransform)), Default, cocos2d::CCNode, nodeToParentTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::nodeToParentTransformFast)), Default, cocos2d::CCNode, nodeToParentTransformFast, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::parentToNodeTransform)), Default, cocos2d::CCNode, parentToNodeTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::nodeToWorldTransform)), Default, cocos2d::CCNode, nodeToWorldTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::nodeToWorldTransformFast)), Default, cocos2d::CCNode, nodeToWorldTransformFast, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::worldToNodeTransform)), Default, cocos2d::CCNode, worldToNodeTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCComponent*>::func(&cocos2d::CCNode::addComponent)), Default, cocos2d::CCNode, addComponent, cocos2d::CCComponent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCNode::removeComponent)), Default, cocos2d::CCNode, removeComponent, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCComponent*>::func(&cocos2d::CCNode::removeComponent)), Default, cocos2d::CCNode, removeComponent, cocos2d::CCComponent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCNode::removeAllComponents)), Default, cocos2d::CCNode, removeAllComponents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, char const*>::func(&cocos2d::CCNode::updateTweenAction)), Default, cocos2d::CCNode, updateTweenAction, float, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, int>::func(&cocos2d::CCNode::updateTweenActionInt)), Default, cocos2d::CCNode, updateTweenActionInt, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::boundingBox)), Default, cocos2d::CCNode, boundingBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::childrenAlloc)), Default, cocos2d::CCNode, childrenAlloc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::convertToNodeSpace)), Default, cocos2d::CCNode, convertToNodeSpace, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::convertToNodeSpaceAR)), Default, cocos2d::CCNode, convertToNodeSpaceAR, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouch*>::func(&cocos2d::CCNode::convertTouchToNodeSpace)), Default, cocos2d::CCNode, convertTouchToNodeSpace, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouch*>::func(&cocos2d::CCNode::convertTouchToNodeSpaceAR)), Default, cocos2d::CCNode, convertTouchToNodeSpaceAR, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::convertToWindowSpace)), Default, cocos2d::CCNode, convertToWindowSpace, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::convertToWorldSpace)), Default, cocos2d::CCNode, convertToWorldSpace, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::convertToWorldSpaceAR)), Default, cocos2d::CCNode, convertToWorldSpaceAR, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::description)), Default, cocos2d::CCNode, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCNode::detachChild)), Default, cocos2d::CCNode, detachChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCNode::getActionByTag)), Default, cocos2d::CCNode, getActionByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCNode::getComponent)), Default, cocos2d::CCNode, getComponent, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCNode::insertChild)), Default, cocos2d::CCNode, insertChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::numberOfRunningActions)), Default, cocos2d::CCNode, numberOfRunningActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::pauseSchedulerAndActions)), Default, cocos2d::CCNode, pauseSchedulerAndActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::qsortAllChildrenWithIndex)), Default, cocos2d::CCNode, qsortAllChildrenWithIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::resumeSchedulerAndActions)), Default, cocos2d::CCNode, resumeSchedulerAndActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAction*>::func(&cocos2d::CCNode::runAction)), Default, cocos2d::CCNode, runAction, cocos2d::CCAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE>::func(&cocos2d::CCNode::schedule)), Default, cocos2d::CCNode, schedule, cocos2d::SEL_SCHEDULE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE, float>::func(&cocos2d::CCNode::schedule)), Default, cocos2d::CCNode, schedule, cocos2d::SEL_SCHEDULE, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE, float, unsigned int, float>::func(&cocos2d::CCNode::schedule)), Default, cocos2d::CCNode, schedule, cocos2d::SEL_SCHEDULE, float, unsigned int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE, float>::func(&cocos2d::CCNode::scheduleOnce)), Default, cocos2d::CCNode, scheduleOnce, cocos2d::SEL_SCHEDULE, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::scheduleUpdate)), Default, cocos2d::CCNode, scheduleUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCNode::scheduleUpdateWithPriority)), Default, cocos2d::CCNode, scheduleUpdateWithPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&cocos2d::CCNode::scheduleUpdateWithPriorityLua)), Default, cocos2d::CCNode, scheduleUpdateWithPriorityLua, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAffineTransform const&>::func(&cocos2d::CCNode::setAdditionalTransform)), Default, cocos2d::CCNode, setAdditionalTransform, cocos2d::CCAffineTransform const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCNode::setUseChildIndex)), Default, cocos2d::CCNode, setUseChildIndex, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::sortAllChildrenNoIndex)), Default, cocos2d::CCNode, sortAllChildrenNoIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::sortAllChildrenWithIndex)), Default, cocos2d::CCNode, sortAllChildrenWithIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAction*>::func(&cocos2d::CCNode::stopAction)), Default, cocos2d::CCNode, stopAction, cocos2d::CCAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCNode::stopActionByTag)), Default, cocos2d::CCNode, stopActionByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::stopAllActions)), Default, cocos2d::CCNode, stopAllActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::transform)), Default, cocos2d::CCNode, transform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::transformAncestors)), Default, cocos2d::CCNode, transformAncestors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::SEL_SCHEDULE>::func(&cocos2d::CCNode::unschedule)), Default, cocos2d::CCNode, unschedule, cocos2d::SEL_SCHEDULE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::unscheduleAllSelectors)), Default, cocos2d::CCNode, unscheduleAllSelectors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::unscheduleUpdate)), Default, cocos2d::CCNode, unscheduleUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCNode::updateChildIndexes)), Default, cocos2d::CCNode, updateChildIndexes, )
		}
	};
}
