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

	#ifndef GEODE_STATICS_updateWithHSV
		#define GEODE_STATICS_updateWithHSV
		GEODE_AS_STATIC_FUNCTION(updateWithHSV) 
	#endif

	#ifndef GEODE_STATICS_updateDraggerWithHSV
		#define GEODE_STATICS_updateDraggerWithHSV
		GEODE_AS_STATIC_FUNCTION(updateDraggerWithHSV) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateWithHSV
		#define GEODE_CONCEPT_CHECK_updateWithHSV
		GEODE_CONCEPT_FUNCTION_CHECK(updateWithHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDraggerWithHSV
		#define GEODE_CONCEPT_CHECK_updateDraggerWithHSV
		GEODE_CONCEPT_FUNCTION_CHECK(updateDraggerWithHSV) 
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
	struct ModifyDerive<Der, cocos2d::extension::CCControlSaturationBrightnessPicker> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlSaturationBrightnessPicker>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlSaturationBrightnessPicker>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlSaturationBrightnessPicker>>::ModifyBase;
		using Base = cocos2d::extension::CCControlSaturationBrightnessPicker;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCControlSaturationBrightnessPicker@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCControlSaturationBrightnessPicker@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::create)), Default, cocos2d::extension::CCControlSaturationBrightnessPicker, create, cocos2d::CCNode*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchBegan)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchMoved)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::setEnabled)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::initWithTargetAndPos)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, initWithTargetAndPos, cocos2d::CCNode*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::extension::HSV>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::updateWithHSV)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, updateWithHSV, cocos2d::extension::HSV)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::extension::HSV>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::updateDraggerWithHSV)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, updateDraggerWithHSV, cocos2d::extension::HSV)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::registerWithTouchDispatcher)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::checkSliderPosition)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, checkSliderPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::updateSliderPosition)), Thiscall, cocos2d::extension::CCControlSaturationBrightnessPicker, updateSliderPosition, cocos2d::CCPoint)
		}
	};
}
