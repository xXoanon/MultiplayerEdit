#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AnimatedGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_animationForID
		#define GEODE_STATICS_animationForID
		GEODE_AS_STATIC_FUNCTION(animationForID) 
	#endif

	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getTweenTime
		#define GEODE_STATICS_getTweenTime
		GEODE_AS_STATIC_FUNCTION(getTweenTime) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_activateObject
		#define GEODE_STATICS_activateObject
		GEODE_AS_STATIC_FUNCTION(activateObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_displayFrameChanged
		#define GEODE_STATICS_displayFrameChanged
		GEODE_AS_STATIC_FUNCTION(displayFrameChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_playAnimation
		#define GEODE_STATICS_playAnimation
		GEODE_AS_STATIC_FUNCTION(playAnimation) 
	#endif

	#ifndef GEODE_STATICS_setupAnimatedSize
		#define GEODE_STATICS_setupAnimatedSize
		GEODE_AS_STATIC_FUNCTION(setupAnimatedSize) 
	#endif

	#ifndef GEODE_STATICS_setupChildSprites
		#define GEODE_STATICS_setupChildSprites
		GEODE_AS_STATIC_FUNCTION(setupChildSprites) 
	#endif

	#ifndef GEODE_STATICS_updateChildSpriteColor
		#define GEODE_STATICS_updateChildSpriteColor
		GEODE_AS_STATIC_FUNCTION(updateChildSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_updateObjectAnimation
		#define GEODE_STATICS_updateObjectAnimation
		GEODE_AS_STATIC_FUNCTION(updateObjectAnimation) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_animationForID
		#define GEODE_CONCEPT_CHECK_animationForID
		GEODE_CONCEPT_FUNCTION_CHECK(animationForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTweenTime
		#define GEODE_CONCEPT_CHECK_getTweenTime
		GEODE_CONCEPT_FUNCTION_CHECK(getTweenTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChildColor
		#define GEODE_CONCEPT_CHECK_setChildColor
		GEODE_CONCEPT_FUNCTION_CHECK(setChildColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateObject
		#define GEODE_CONCEPT_CHECK_activateObject
		GEODE_CONCEPT_FUNCTION_CHECK(activateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateObject
		#define GEODE_CONCEPT_CHECK_deactivateObject
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectColor
		#define GEODE_CONCEPT_CHECK_setObjectColor
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayFrameChanged
		#define GEODE_CONCEPT_CHECK_displayFrameChanged
		GEODE_CONCEPT_FUNCTION_CHECK(displayFrameChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playAnimation
		#define GEODE_CONCEPT_CHECK_playAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupAnimatedSize
		#define GEODE_CONCEPT_CHECK_setupAnimatedSize
		GEODE_CONCEPT_FUNCTION_CHECK(setupAnimatedSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupChildSprites
		#define GEODE_CONCEPT_CHECK_setupChildSprites
		GEODE_CONCEPT_FUNCTION_CHECK(setupChildSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChildSpriteColor
		#define GEODE_CONCEPT_CHECK_updateChildSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateChildSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectAnimation
		#define GEODE_CONCEPT_CHECK_updateObjectAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AnimatedGameObject> : ModifyBase<ModifyDerive<Der, AnimatedGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AnimatedGameObject>>;
		using ModifyBase<ModifyDerive<Der, AnimatedGameObject>>::ModifyBase;
		using Base = AnimatedGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AnimatedGameObjectD2Ev")), Default, AnimatedGameObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&AnimatedGameObject::animationForID)), Default, AnimatedGameObject, animationForID, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&AnimatedGameObject::create)), Default, AnimatedGameObject, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&AnimatedGameObject::getTweenTime)), Default, AnimatedGameObject, getTweenTime, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&AnimatedGameObject::setOpacity)), Default, AnimatedGameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&AnimatedGameObject::setChildColor)), Default, AnimatedGameObject, setChildColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AnimatedGameObject::resetObject)), Default, AnimatedGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AnimatedGameObject::activateObject)), Default, AnimatedGameObject, activateObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&AnimatedGameObject::deactivateObject)), Default, AnimatedGameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&AnimatedGameObject::setObjectColor)), Default, AnimatedGameObject, setObjectColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&AnimatedGameObject::animationFinished)), Default, AnimatedGameObject, animationFinished, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AnimatedGameObject19displayFrameChangedEPN7cocos2d8CCObjectESs")), Default, AnimatedGameObject, displayFrameChanged, cocos2d::CCObject*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&AnimatedGameObject::init)), Default, AnimatedGameObject, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&AnimatedGameObject::playAnimation)), Default, AnimatedGameObject, playAnimation, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&AnimatedGameObject::setupAnimatedSize)), Default, AnimatedGameObject, setupAnimatedSize, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AnimatedGameObject::setupChildSprites)), Default, AnimatedGameObject, setupChildSprites, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&AnimatedGameObject::updateChildSpriteColor)), Default, AnimatedGameObject, updateChildSpriteColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AnimatedGameObject::updateObjectAnimation)), Default, AnimatedGameObject, updateObjectAnimation, )
		}
	};
}
