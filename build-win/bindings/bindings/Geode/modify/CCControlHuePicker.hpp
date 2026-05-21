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

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_initWithTargetAndPos
		#define GEODE_STATICS_initWithTargetAndPos
		GEODE_AS_STATIC_FUNCTION(initWithTargetAndPos) 
	#endif

	#ifndef GEODE_STATICS_setHue
		#define GEODE_STATICS_setHue
		GEODE_AS_STATIC_FUNCTION(setHue) 
	#endif

	#ifndef GEODE_STATICS_setHuePercentage
		#define GEODE_STATICS_setHuePercentage
		GEODE_AS_STATIC_FUNCTION(setHuePercentage) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_checkSliderPosition
		#define GEODE_STATICS_checkSliderPosition
		GEODE_AS_STATIC_FUNCTION(checkSliderPosition) 
	#endif

	#ifndef GEODE_STATICS_updateSliderPosition
		#define GEODE_STATICS_updateSliderPosition
		GEODE_AS_STATIC_FUNCTION(updateSliderPosition) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTargetAndPos
		#define GEODE_CONCEPT_CHECK_initWithTargetAndPos
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTargetAndPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHue
		#define GEODE_CONCEPT_CHECK_setHue
		GEODE_CONCEPT_FUNCTION_CHECK(setHue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHuePercentage
		#define GEODE_CONCEPT_CHECK_setHuePercentage
		GEODE_CONCEPT_FUNCTION_CHECK(setHuePercentage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSliderPosition
		#define GEODE_CONCEPT_CHECK_checkSliderPosition
		GEODE_CONCEPT_FUNCTION_CHECK(checkSliderPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSliderPosition
		#define GEODE_CONCEPT_CHECK_updateSliderPosition
		GEODE_CONCEPT_FUNCTION_CHECK(updateSliderPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControlHuePicker> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlHuePicker>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlHuePicker>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlHuePicker>>::ModifyBase;
		using Base = cocos2d::extension::CCControlHuePicker;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCControlHuePicker@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCControlHuePicker, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCControlHuePicker@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCControlHuePicker)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlHuePicker::create)), Default, cocos2d::extension::CCControlHuePicker, create, cocos2d::CCNode*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlHuePicker::ccTouchBegan)), Thiscall, cocos2d::extension::CCControlHuePicker, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlHuePicker::ccTouchMoved)), Thiscall, cocos2d::extension::CCControlHuePicker, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlHuePicker::setEnabled)), Thiscall, cocos2d::extension::CCControlHuePicker, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlHuePicker::initWithTargetAndPos)), Thiscall, cocos2d::extension::CCControlHuePicker, initWithTargetAndPos, cocos2d::CCNode*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::extension::CCControlHuePicker::setHue)), Thiscall, cocos2d::extension::CCControlHuePicker, setHue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::extension::CCControlHuePicker::setHuePercentage)), Thiscall, cocos2d::extension::CCControlHuePicker, setHuePercentage, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlHuePicker::registerWithTouchDispatcher)), Thiscall, cocos2d::extension::CCControlHuePicker, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlHuePicker::checkSliderPosition)), Thiscall, cocos2d::extension::CCControlHuePicker, checkSliderPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlHuePicker::updateSliderPosition)), Thiscall, cocos2d::extension::CCControlHuePicker, updateSliderPosition, cocos2d::CCPoint)
		}
	};
}
