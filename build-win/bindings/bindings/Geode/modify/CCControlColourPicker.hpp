#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_colourPicker
		#define GEODE_STATICS_colourPicker
		GEODE_AS_STATIC_FUNCTION(colourPicker) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_setColorValue
		#define GEODE_STATICS_setColorValue
		GEODE_AS_STATIC_FUNCTION(setColorValue) 
	#endif

	#ifndef GEODE_STATICS_colourSliderValueChanged
		#define GEODE_STATICS_colourSliderValueChanged
		GEODE_AS_STATIC_FUNCTION(colourSliderValueChanged) 
	#endif

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_hueSliderValueChanged
		#define GEODE_STATICS_hueSliderValueChanged
		GEODE_AS_STATIC_FUNCTION(hueSliderValueChanged) 
	#endif

	#ifndef GEODE_STATICS_updateControlPicker
		#define GEODE_STATICS_updateControlPicker
		GEODE_AS_STATIC_FUNCTION(updateControlPicker) 
	#endif

	#ifndef GEODE_STATICS_updateHueAndControlPicker
		#define GEODE_STATICS_updateHueAndControlPicker
		GEODE_AS_STATIC_FUNCTION(updateHueAndControlPicker) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_colourPicker
		#define GEODE_CONCEPT_CHECK_colourPicker
		GEODE_CONCEPT_FUNCTION_CHECK(colourPicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColorValue
		#define GEODE_CONCEPT_CHECK_setColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(setColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colourSliderValueChanged
		#define GEODE_CONCEPT_CHECK_colourSliderValueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(colourSliderValueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorValue
		#define GEODE_CONCEPT_CHECK_getColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(getColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hueSliderValueChanged
		#define GEODE_CONCEPT_CHECK_hueSliderValueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(hueSliderValueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateControlPicker
		#define GEODE_CONCEPT_CHECK_updateControlPicker
		GEODE_CONCEPT_FUNCTION_CHECK(updateControlPicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHueAndControlPicker
		#define GEODE_CONCEPT_CHECK_updateHueAndControlPicker
		GEODE_CONCEPT_FUNCTION_CHECK(updateHueAndControlPicker) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControlColourPicker> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlColourPicker>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlColourPicker>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlColourPicker>>::ModifyBase;
		using Base = cocos2d::extension::CCControlColourPicker;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCControlColourPicker@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCControlColourPicker, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCControlColourPicker@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCControlColourPicker)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlColourPicker::colourPicker)), Default, cocos2d::extension::CCControlColourPicker, colourPicker, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlColourPicker::init)), Thiscall, cocos2d::extension::CCControlColourPicker, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlColourPicker::ccTouchBegan)), Thiscall, cocos2d::extension::CCControlColourPicker, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::extension::CCControlColourPicker::setColorValue)), Thiscall, cocos2d::extension::CCControlColourPicker, setColorValue, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, unsigned int>::func(&cocos2d::extension::CCControlColourPicker::colourSliderValueChanged)), Thiscall, cocos2d::extension::CCControlColourPicker, colourSliderValueChanged, cocos2d::CCObject*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlColourPicker::getColorValue)), Thiscall, cocos2d::extension::CCControlColourPicker, getColorValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, unsigned int>::func(&cocos2d::extension::CCControlColourPicker::hueSliderValueChanged)), Thiscall, cocos2d::extension::CCControlColourPicker, hueSliderValueChanged, cocos2d::CCObject*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlColourPicker::updateControlPicker)), Thiscall, cocos2d::extension::CCControlColourPicker, updateControlPicker, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlColourPicker::updateHueAndControlPicker)), Thiscall, cocos2d::extension::CCControlColourPicker, updateHueAndControlPicker, )
		}
	};
}
