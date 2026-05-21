#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_isTouchInside
		#define GEODE_STATICS_isTouchInside
		GEODE_AS_STATIC_FUNCTION(isTouchInside) 
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

	#ifndef GEODE_STATICS_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint
		#define GEODE_STATICS_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint
		GEODE_AS_STATIC_FUNCTION(angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint) 
	#endif

	#ifndef GEODE_STATICS_distanceBetweenPointAndPoint
		#define GEODE_STATICS_distanceBetweenPointAndPoint
		GEODE_AS_STATIC_FUNCTION(distanceBetweenPointAndPoint) 
	#endif

	#ifndef GEODE_STATICS_getMaximumValue
		#define GEODE_STATICS_getMaximumValue
		GEODE_AS_STATIC_FUNCTION(getMaximumValue) 
	#endif

	#ifndef GEODE_STATICS_getMinimumValue
		#define GEODE_STATICS_getMinimumValue
		GEODE_AS_STATIC_FUNCTION(getMinimumValue) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_initWithTrackSprite_ProgressTimer_ThumbSprite
		#define GEODE_STATICS_initWithTrackSprite_ProgressTimer_ThumbSprite
		GEODE_AS_STATIC_FUNCTION(initWithTrackSprite_ProgressTimer_ThumbSprite) 
	#endif

	#ifndef GEODE_STATICS_potentiometerBegan
		#define GEODE_STATICS_potentiometerBegan
		GEODE_AS_STATIC_FUNCTION(potentiometerBegan) 
	#endif

	#ifndef GEODE_STATICS_potentiometerEnded
		#define GEODE_STATICS_potentiometerEnded
		GEODE_AS_STATIC_FUNCTION(potentiometerEnded) 
	#endif

	#ifndef GEODE_STATICS_potentiometerMoved
		#define GEODE_STATICS_potentiometerMoved
		GEODE_AS_STATIC_FUNCTION(potentiometerMoved) 
	#endif

	#ifndef GEODE_STATICS_setMaximumValue
		#define GEODE_STATICS_setMaximumValue
		GEODE_AS_STATIC_FUNCTION(setMaximumValue) 
	#endif

	#ifndef GEODE_STATICS_setMinimumValue
		#define GEODE_STATICS_setMinimumValue
		GEODE_AS_STATIC_FUNCTION(setMinimumValue) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTouchInside
		#define GEODE_CONCEPT_CHECK_isTouchInside
		GEODE_CONCEPT_FUNCTION_CHECK(isTouchInside) 
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

	#ifndef GEODE_CONCEPT_CHECK_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint
		#define GEODE_CONCEPT_CHECK_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint
		GEODE_CONCEPT_FUNCTION_CHECK(angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_distanceBetweenPointAndPoint
		#define GEODE_CONCEPT_CHECK_distanceBetweenPointAndPoint
		GEODE_CONCEPT_FUNCTION_CHECK(distanceBetweenPointAndPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaximumValue
		#define GEODE_CONCEPT_CHECK_getMaximumValue
		GEODE_CONCEPT_FUNCTION_CHECK(getMaximumValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinimumValue
		#define GEODE_CONCEPT_CHECK_getMinimumValue
		GEODE_CONCEPT_FUNCTION_CHECK(getMinimumValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTrackSprite_ProgressTimer_ThumbSprite
		#define GEODE_CONCEPT_CHECK_initWithTrackSprite_ProgressTimer_ThumbSprite
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTrackSprite_ProgressTimer_ThumbSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_potentiometerBegan
		#define GEODE_CONCEPT_CHECK_potentiometerBegan
		GEODE_CONCEPT_FUNCTION_CHECK(potentiometerBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_potentiometerEnded
		#define GEODE_CONCEPT_CHECK_potentiometerEnded
		GEODE_CONCEPT_FUNCTION_CHECK(potentiometerEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_potentiometerMoved
		#define GEODE_CONCEPT_CHECK_potentiometerMoved
		GEODE_CONCEPT_FUNCTION_CHECK(potentiometerMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaximumValue
		#define GEODE_CONCEPT_CHECK_setMaximumValue
		GEODE_CONCEPT_FUNCTION_CHECK(setMaximumValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMinimumValue
		#define GEODE_CONCEPT_CHECK_setMinimumValue
		GEODE_CONCEPT_FUNCTION_CHECK(setMinimumValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValue
		#define GEODE_CONCEPT_CHECK_setValue
		GEODE_CONCEPT_FUNCTION_CHECK(setValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControlPotentiometer> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlPotentiometer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlPotentiometer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlPotentiometer>>::ModifyBase;
		using Base = cocos2d::extension::CCControlPotentiometer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCControlPotentiometer@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCControlPotentiometer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCControlPotentiometer@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCControlPotentiometer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, char const*>::func(&cocos2d::extension::CCControlPotentiometer::create)), Default, cocos2d::extension::CCControlPotentiometer, create, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlPotentiometer::setEnabled)), Thiscall, cocos2d::extension::CCControlPotentiometer, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*>::func(&cocos2d::extension::CCControlPotentiometer::isTouchInside)), Thiscall, cocos2d::extension::CCControlPotentiometer, isTouchInside, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlPotentiometer::ccTouchBegan)), Thiscall, cocos2d::extension::CCControlPotentiometer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlPotentiometer::ccTouchMoved)), Thiscall, cocos2d::extension::CCControlPotentiometer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlPotentiometer::ccTouchEnded)), Thiscall, cocos2d::extension::CCControlPotentiometer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlPotentiometer::angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint)), Thiscall, cocos2d::extension::CCControlPotentiometer, angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlPotentiometer::distanceBetweenPointAndPoint)), Thiscall, cocos2d::extension::CCControlPotentiometer, distanceBetweenPointAndPoint, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlPotentiometer::getMaximumValue)), Thiscall, cocos2d::extension::CCControlPotentiometer, getMaximumValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlPotentiometer::getMinimumValue)), Thiscall, cocos2d::extension::CCControlPotentiometer, getMinimumValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlPotentiometer::getValue)), Thiscall, cocos2d::extension::CCControlPotentiometer, getValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, cocos2d::CCProgressTimer*, cocos2d::CCSprite*>::func(&cocos2d::extension::CCControlPotentiometer::initWithTrackSprite_ProgressTimer_ThumbSprite)), Thiscall, cocos2d::extension::CCControlPotentiometer, initWithTrackSprite_ProgressTimer_ThumbSprite, cocos2d::CCSprite*, cocos2d::CCProgressTimer*, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlPotentiometer::potentiometerBegan)), Thiscall, cocos2d::extension::CCControlPotentiometer, potentiometerBegan, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlPotentiometer::potentiometerEnded)), Thiscall, cocos2d::extension::CCControlPotentiometer, potentiometerEnded, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlPotentiometer::potentiometerMoved)), Thiscall, cocos2d::extension::CCControlPotentiometer, potentiometerMoved, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::extension::CCControlPotentiometer::setMaximumValue)), Thiscall, cocos2d::extension::CCControlPotentiometer, setMaximumValue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::extension::CCControlPotentiometer::setMinimumValue)), Thiscall, cocos2d::extension::CCControlPotentiometer, setMinimumValue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::extension::CCControlPotentiometer::setValue)), Thiscall, cocos2d::extension::CCControlPotentiometer, setValue, float)
		}
	};
}
