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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_registerScriptTouchHandler
		#define GEODE_STATICS_registerScriptTouchHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptTouchHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptTouchHandler
		#define GEODE_STATICS_unregisterScriptTouchHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptTouchHandler) 
	#endif

	#ifndef GEODE_STATICS_isTouchEnabled
		#define GEODE_STATICS_isTouchEnabled
		GEODE_AS_STATIC_FUNCTION(isTouchEnabled) 
	#endif

	#ifndef GEODE_STATICS_setTouchEnabled
		#define GEODE_STATICS_setTouchEnabled
		GEODE_AS_STATIC_FUNCTION(setTouchEnabled) 
	#endif

	#ifndef GEODE_STATICS_setTouchMode
		#define GEODE_STATICS_setTouchMode
		GEODE_AS_STATIC_FUNCTION(setTouchMode) 
	#endif

	#ifndef GEODE_STATICS_getTouchMode
		#define GEODE_STATICS_getTouchMode
		GEODE_AS_STATIC_FUNCTION(getTouchMode) 
	#endif

	#ifndef GEODE_STATICS_setTouchPriority
		#define GEODE_STATICS_setTouchPriority
		GEODE_AS_STATIC_FUNCTION(setTouchPriority) 
	#endif

	#ifndef GEODE_STATICS_getTouchPriority
		#define GEODE_STATICS_getTouchPriority
		GEODE_AS_STATIC_FUNCTION(getTouchPriority) 
	#endif

	#ifndef GEODE_STATICS_isAccelerometerEnabled
		#define GEODE_STATICS_isAccelerometerEnabled
		GEODE_AS_STATIC_FUNCTION(isAccelerometerEnabled) 
	#endif

	#ifndef GEODE_STATICS_setAccelerometerEnabled
		#define GEODE_STATICS_setAccelerometerEnabled
		GEODE_AS_STATIC_FUNCTION(setAccelerometerEnabled) 
	#endif

	#ifndef GEODE_STATICS_setAccelerometerInterval
		#define GEODE_STATICS_setAccelerometerInterval
		GEODE_AS_STATIC_FUNCTION(setAccelerometerInterval) 
	#endif

	#ifndef GEODE_STATICS_isKeypadEnabled
		#define GEODE_STATICS_isKeypadEnabled
		GEODE_AS_STATIC_FUNCTION(isKeypadEnabled) 
	#endif

	#ifndef GEODE_STATICS_setKeypadEnabled
		#define GEODE_STATICS_setKeypadEnabled
		GEODE_AS_STATIC_FUNCTION(setKeypadEnabled) 
	#endif

	#ifndef GEODE_STATICS_isKeyboardEnabled
		#define GEODE_STATICS_isKeyboardEnabled
		GEODE_AS_STATIC_FUNCTION(isKeyboardEnabled) 
	#endif

	#ifndef GEODE_STATICS_setKeyboardEnabled
		#define GEODE_STATICS_setKeyboardEnabled
		GEODE_AS_STATIC_FUNCTION(setKeyboardEnabled) 
	#endif

	#ifndef GEODE_STATICS_isMouseEnabled
		#define GEODE_STATICS_isMouseEnabled
		GEODE_AS_STATIC_FUNCTION(isMouseEnabled) 
	#endif

	#ifndef GEODE_STATICS_setMouseEnabled
		#define GEODE_STATICS_setMouseEnabled
		GEODE_AS_STATIC_FUNCTION(setMouseEnabled) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesBegan
		#define GEODE_STATICS_ccTouchesBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchesBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesMoved
		#define GEODE_STATICS_ccTouchesMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchesMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesEnded
		#define GEODE_STATICS_ccTouchesEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchesEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesCancelled
		#define GEODE_STATICS_ccTouchesCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchesCancelled) 
	#endif

	#ifndef GEODE_STATICS_setPreviousPriority
		#define GEODE_STATICS_setPreviousPriority
		GEODE_AS_STATIC_FUNCTION(setPreviousPriority) 
	#endif

	#ifndef GEODE_STATICS_getPreviousPriority
		#define GEODE_STATICS_getPreviousPriority
		GEODE_AS_STATIC_FUNCTION(getPreviousPriority) 
	#endif

	#ifndef GEODE_STATICS_didAccelerate
		#define GEODE_STATICS_didAccelerate
		GEODE_AS_STATIC_FUNCTION(didAccelerate) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyMenuClicked
		#define GEODE_STATICS_keyMenuClicked
		GEODE_AS_STATIC_FUNCTION(keyMenuClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_excuteScriptTouchHandler
		#define GEODE_STATICS_excuteScriptTouchHandler
		GEODE_AS_STATIC_FUNCTION(excuteScriptTouchHandler) 
	#endif

	#ifndef GEODE_STATICS_registerScriptAccelerateHandler
		#define GEODE_STATICS_registerScriptAccelerateHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptAccelerateHandler) 
	#endif

	#ifndef GEODE_STATICS_registerScriptKeypadHandler
		#define GEODE_STATICS_registerScriptKeypadHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptKeypadHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptAccelerateHandler
		#define GEODE_STATICS_unregisterScriptAccelerateHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptAccelerateHandler) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptKeypadHandler
		#define GEODE_STATICS_unregisterScriptKeypadHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptKeypadHandler) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerScriptTouchHandler
		#define GEODE_CONCEPT_CHECK_registerScriptTouchHandler
		GEODE_CONCEPT_FUNCTION_CHECK(registerScriptTouchHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterScriptTouchHandler
		#define GEODE_CONCEPT_CHECK_unregisterScriptTouchHandler
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterScriptTouchHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTouchEnabled
		#define GEODE_CONCEPT_CHECK_isTouchEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isTouchEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchEnabled
		#define GEODE_CONCEPT_CHECK_setTouchEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchMode
		#define GEODE_CONCEPT_CHECK_setTouchMode
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchMode
		#define GEODE_CONCEPT_CHECK_getTouchMode
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchPriority
		#define GEODE_CONCEPT_CHECK_setTouchPriority
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTouchPriority
		#define GEODE_CONCEPT_CHECK_getTouchPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getTouchPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAccelerometerEnabled
		#define GEODE_CONCEPT_CHECK_isAccelerometerEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isAccelerometerEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccelerometerEnabled
		#define GEODE_CONCEPT_CHECK_setAccelerometerEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setAccelerometerEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccelerometerInterval
		#define GEODE_CONCEPT_CHECK_setAccelerometerInterval
		GEODE_CONCEPT_FUNCTION_CHECK(setAccelerometerInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isKeypadEnabled
		#define GEODE_CONCEPT_CHECK_isKeypadEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isKeypadEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setKeypadEnabled
		#define GEODE_CONCEPT_CHECK_setKeypadEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setKeypadEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isKeyboardEnabled
		#define GEODE_CONCEPT_CHECK_isKeyboardEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isKeyboardEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setKeyboardEnabled
		#define GEODE_CONCEPT_CHECK_setKeyboardEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setKeyboardEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isMouseEnabled
		#define GEODE_CONCEPT_CHECK_isMouseEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isMouseEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMouseEnabled
		#define GEODE_CONCEPT_CHECK_setMouseEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setMouseEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesBegan
		#define GEODE_CONCEPT_CHECK_ccTouchesBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesMoved
		#define GEODE_CONCEPT_CHECK_ccTouchesMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesEnded
		#define GEODE_CONCEPT_CHECK_ccTouchesEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchesCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPreviousPriority
		#define GEODE_CONCEPT_CHECK_setPreviousPriority
		GEODE_CONCEPT_FUNCTION_CHECK(setPreviousPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPreviousPriority
		#define GEODE_CONCEPT_CHECK_getPreviousPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getPreviousPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didAccelerate
		#define GEODE_CONCEPT_CHECK_didAccelerate
		GEODE_CONCEPT_FUNCTION_CHECK(didAccelerate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyMenuClicked
		#define GEODE_CONCEPT_CHECK_keyMenuClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyMenuClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_excuteScriptTouchHandler
		#define GEODE_CONCEPT_CHECK_excuteScriptTouchHandler
		GEODE_CONCEPT_FUNCTION_CHECK(excuteScriptTouchHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerScriptAccelerateHandler
		#define GEODE_CONCEPT_CHECK_registerScriptAccelerateHandler
		GEODE_CONCEPT_FUNCTION_CHECK(registerScriptAccelerateHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerScriptKeypadHandler
		#define GEODE_CONCEPT_CHECK_registerScriptKeypadHandler
		GEODE_CONCEPT_FUNCTION_CHECK(registerScriptKeypadHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterScriptAccelerateHandler
		#define GEODE_CONCEPT_CHECK_unregisterScriptAccelerateHandler
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterScriptAccelerateHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterScriptKeypadHandler
		#define GEODE_CONCEPT_CHECK_unregisterScriptKeypadHandler
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterScriptKeypadHandler) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayer> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayer>>::ModifyBase;
		using Base = cocos2d::CCLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCLayer@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCLayer@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLayer::create)), Default, cocos2d::CCLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::init)), Thiscall, cocos2d::CCLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::onEnter)), Thiscall, cocos2d::CCLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::onEnterTransitionDidFinish)), Thiscall, cocos2d::CCLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::onExit)), Thiscall, cocos2d::CCLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::registerWithTouchDispatcher)), Thiscall, cocos2d::CCLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, bool, int, bool>::func(&cocos2d::CCLayer::registerScriptTouchHandler)), Thiscall, cocos2d::CCLayer, registerScriptTouchHandler, int, bool, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::unregisterScriptTouchHandler)), Thiscall, cocos2d::CCLayer, unregisterScriptTouchHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::isTouchEnabled)), Thiscall, cocos2d::CCLayer, isTouchEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayer::setTouchEnabled)), Thiscall, cocos2d::CCLayer, setTouchEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccTouchesMode>::func(&cocos2d::CCLayer::setTouchMode)), Thiscall, cocos2d::CCLayer, setTouchMode, cocos2d::ccTouchesMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::getTouchMode)), Thiscall, cocos2d::CCLayer, getTouchMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCLayer::setTouchPriority)), Thiscall, cocos2d::CCLayer, setTouchPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::getTouchPriority)), Thiscall, cocos2d::CCLayer, getTouchPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::isAccelerometerEnabled)), Thiscall, cocos2d::CCLayer, isAccelerometerEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayer::setAccelerometerEnabled)), Thiscall, cocos2d::CCLayer, setAccelerometerEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<double>::func(&cocos2d::CCLayer::setAccelerometerInterval)), Thiscall, cocos2d::CCLayer, setAccelerometerInterval, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::isKeypadEnabled)), Thiscall, cocos2d::CCLayer, isKeypadEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayer::setKeypadEnabled)), Thiscall, cocos2d::CCLayer, setKeypadEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::isKeyboardEnabled)), Thiscall, cocos2d::CCLayer, isKeyboardEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayer::setKeyboardEnabled)), Thiscall, cocos2d::CCLayer, setKeyboardEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::isMouseEnabled)), Thiscall, cocos2d::CCLayer, isMouseEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayer::setMouseEnabled)), Thiscall, cocos2d::CCLayer, setMouseEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchBegan)), Thiscall, cocos2d::CCLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchMoved)), Thiscall, cocos2d::CCLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchEnded)), Thiscall, cocos2d::CCLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchCancelled)), Thiscall, cocos2d::CCLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchesBegan)), Thiscall, cocos2d::CCLayer, ccTouchesBegan, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchesMoved)), Thiscall, cocos2d::CCLayer, ccTouchesMoved, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchesEnded)), Thiscall, cocos2d::CCLayer, ccTouchesEnded, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet*, cocos2d::CCEvent*>::func(&cocos2d::CCLayer::ccTouchesCancelled)), Thiscall, cocos2d::CCLayer, ccTouchesCancelled, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCLayer::setPreviousPriority)), Thiscall, cocos2d::CCLayer, setPreviousPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::getPreviousPriority)), Thiscall, cocos2d::CCLayer, getPreviousPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCAcceleration*>::func(&cocos2d::CCLayer::didAccelerate)), Thiscall, cocos2d::CCLayer, didAccelerate, cocos2d::CCAcceleration*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::keyBackClicked)), Thiscall, cocos2d::CCLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayer::keyMenuClicked)), Thiscall, cocos2d::CCLayer, keyMenuClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::enumKeyCodes, double>::func(&cocos2d::CCLayer::keyDown)), Thiscall, cocos2d::CCLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::CCSet*>::func(&cocos2d::CCLayer::excuteScriptTouchHandler)), Thiscall, cocos2d::CCLayer, excuteScriptTouchHandler, int, cocos2d::CCSet*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, cocos2d::CCTouch*>::func(&cocos2d::CCLayer::excuteScriptTouchHandler)), Thiscall, cocos2d::CCLayer, excuteScriptTouchHandler, int, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCLayer::registerScriptAccelerateHandler)), Thiscall, cocos2d::CCLayer, registerScriptAccelerateHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCLayer::registerScriptKeypadHandler)), Thiscall, cocos2d::CCLayer, registerScriptKeypadHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLayer::unregisterScriptAccelerateHandler)), Thiscall, cocos2d::CCLayer, unregisterScriptAccelerateHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLayer::unregisterScriptKeypadHandler)), Thiscall, cocos2d::CCLayer, unregisterScriptKeypadHandler, )
		}
	};
}
