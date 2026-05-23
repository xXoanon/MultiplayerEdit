#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAnimatedSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithType
		#define GEODE_STATICS_createWithType
		GEODE_AS_STATIC_FUNCTION(createWithType) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_animationFinishedO
		#define GEODE_STATICS_animationFinishedO
		GEODE_AS_STATIC_FUNCTION(animationFinishedO) 
	#endif

	#ifndef GEODE_STATICS_cleanupSprite
		#define GEODE_STATICS_cleanupSprite
		GEODE_AS_STATIC_FUNCTION(cleanupSprite) 
	#endif

	#ifndef GEODE_STATICS_initWithType
		#define GEODE_STATICS_initWithType
		GEODE_AS_STATIC_FUNCTION(initWithType) 
	#endif

	#ifndef GEODE_STATICS_loadType
		#define GEODE_STATICS_loadType
		GEODE_AS_STATIC_FUNCTION(loadType) 
	#endif

	#ifndef GEODE_STATICS_runAnimation
		#define GEODE_STATICS_runAnimation
		GEODE_AS_STATIC_FUNCTION(runAnimation) 
	#endif

	#ifndef GEODE_STATICS_runAnimationForced
		#define GEODE_STATICS_runAnimationForced
		GEODE_AS_STATIC_FUNCTION(runAnimationForced) 
	#endif

	#ifndef GEODE_STATICS_stopTween
		#define GEODE_STATICS_stopTween
		GEODE_AS_STATIC_FUNCTION(stopTween) 
	#endif

	#ifndef GEODE_STATICS_switchToMode
		#define GEODE_STATICS_switchToMode
		GEODE_AS_STATIC_FUNCTION(switchToMode) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimation
		#define GEODE_STATICS_tweenToAnimation
		GEODE_AS_STATIC_FUNCTION(tweenToAnimation) 
	#endif

	#ifndef GEODE_STATICS_tweenToAnimationFinished
		#define GEODE_STATICS_tweenToAnimationFinished
		GEODE_AS_STATIC_FUNCTION(tweenToAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_willPlayAnimation
		#define GEODE_STATICS_willPlayAnimation
		GEODE_AS_STATIC_FUNCTION(willPlayAnimation) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithType
		#define GEODE_CONCEPT_CHECK_createWithType
		GEODE_CONCEPT_FUNCTION_CHECK(createWithType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinishedO
		#define GEODE_CONCEPT_CHECK_animationFinishedO
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinishedO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cleanupSprite
		#define GEODE_CONCEPT_CHECK_cleanupSprite
		GEODE_CONCEPT_FUNCTION_CHECK(cleanupSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithType
		#define GEODE_CONCEPT_CHECK_initWithType
		GEODE_CONCEPT_FUNCTION_CHECK(initWithType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadType
		#define GEODE_CONCEPT_CHECK_loadType
		GEODE_CONCEPT_FUNCTION_CHECK(loadType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runAnimation
		#define GEODE_CONCEPT_CHECK_runAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(runAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runAnimationForced
		#define GEODE_CONCEPT_CHECK_runAnimationForced
		GEODE_CONCEPT_FUNCTION_CHECK(runAnimationForced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopTween
		#define GEODE_CONCEPT_CHECK_stopTween
		GEODE_CONCEPT_FUNCTION_CHECK(stopTween) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToMode
		#define GEODE_CONCEPT_CHECK_switchToMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenToAnimation
		#define GEODE_CONCEPT_CHECK_tweenToAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(tweenToAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenToAnimationFinished
		#define GEODE_CONCEPT_CHECK_tweenToAnimationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(tweenToAnimationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willPlayAnimation
		#define GEODE_CONCEPT_CHECK_willPlayAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(willPlayAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCAnimatedSprite> : ModifyBase<ModifyDerive<Der, CCAnimatedSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>;
		using ModifyBase<ModifyDerive<Der, CCAnimatedSprite>>::ModifyBase;
		using Base = CCAnimatedSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CCAnimatedSpriteD2Ev")), Default, CCAnimatedSprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCTexture2D*, bool>::func(&CCAnimatedSprite::createWithType)), Default, CCAnimatedSprite, createWithType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&CCAnimatedSprite::setOpacity)), Default, CCAnimatedSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&CCAnimatedSprite::setColor)), Default, CCAnimatedSprite, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&CCAnimatedSprite::animationFinished)), Default, CCAnimatedSprite, animationFinished, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&CCAnimatedSprite::animationFinishedO)), Default, CCAnimatedSprite, animationFinishedO, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCAnimatedSprite::cleanupSprite)), Default, CCAnimatedSprite, cleanupSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCTexture2D*, bool>::func(&CCAnimatedSprite::initWithType)), Default, CCAnimatedSprite, initWithType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCTexture2D*, bool>::func(&CCAnimatedSprite::loadType)), Default, CCAnimatedSprite, loadType, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CCAnimatedSprite12runAnimationESs")), Default, CCAnimatedSprite, runAnimation, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CCAnimatedSprite18runAnimationForcedESs")), Default, CCAnimatedSprite, runAnimationForced, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCAnimatedSprite::stopTween)), Default, CCAnimatedSprite, stopTween, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<spriteMode>::func(&CCAnimatedSprite::switchToMode)), Default, CCAnimatedSprite, switchToMode, spriteMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CCAnimatedSprite16tweenToAnimationESsf")), Default, CCAnimatedSprite, tweenToAnimation, gd::string, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCAnimatedSprite::tweenToAnimationFinished)), Default, CCAnimatedSprite, tweenToAnimationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCAnimatedSprite::willPlayAnimation)), Default, CCAnimatedSprite, willPlayAnimation, )
		}
	};
}
