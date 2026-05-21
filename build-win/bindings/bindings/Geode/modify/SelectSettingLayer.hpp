#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectSettingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_frameForItem
		#define GEODE_STATICS_frameForItem
		GEODE_AS_STATIC_FUNCTION(frameForItem) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_frameForItem
		#define GEODE_CONCEPT_CHECK_frameForItem
		GEODE_CONCEPT_FUNCTION_CHECK(frameForItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_frameForValue
		#define GEODE_CONCEPT_CHECK_frameForValue
		GEODE_CONCEPT_FUNCTION_CHECK(frameForValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_idxToValue
		#define GEODE_CONCEPT_CHECK_idxToValue
		GEODE_CONCEPT_FUNCTION_CHECK(idxToValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueToIdx
		#define GEODE_CONCEPT_CHECK_valueToIdx
		GEODE_CONCEPT_FUNCTION_CHECK(valueToIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedFrame
		#define GEODE_CONCEPT_CHECK_getSelectedFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedValue
		#define GEODE_CONCEPT_CHECK_getSelectedValue
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectSettingLayer> : ModifyBase<ModifyDerive<Der, SelectSettingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectSettingLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectSettingLayer>>::ModifyBase;
		using Base = SelectSettingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323110, Default, SelectSettingLayer, create, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323970, Default, SelectSettingLayer, frameForItem, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectSettingLayer, frameForValue, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectSettingLayer, idxToValue, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectSettingLayer, valueToIdx, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323f10, Thiscall, SelectSettingLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectSettingLayer, getSelectedFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectSettingLayer, getSelectedValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323220, Thiscall, SelectSettingLayer, init, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323ec0, Thiscall, SelectSettingLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323e10, Thiscall, SelectSettingLayer, onSelect, cocos2d::CCObject*)
		}
	};
}
