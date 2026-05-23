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

	#ifndef GEODE_STATICS_frameForValue
		#define GEODE_STATICS_frameForValue
		GEODE_AS_STATIC_FUNCTION(frameForValue) 
	#endif

	#ifndef GEODE_STATICS_idxToValue
		#define GEODE_STATICS_idxToValue
		GEODE_AS_STATIC_FUNCTION(idxToValue) 
	#endif

	#ifndef GEODE_STATICS_valueToIdx
		#define GEODE_STATICS_valueToIdx
		GEODE_AS_STATIC_FUNCTION(valueToIdx) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_getSelectedFrame
		#define GEODE_STATICS_getSelectedFrame
		GEODE_AS_STATIC_FUNCTION(getSelectedFrame) 
	#endif

	#ifndef GEODE_STATICS_getSelectedValue
		#define GEODE_STATICS_getSelectedValue
		GEODE_AS_STATIC_FUNCTION(getSelectedValue) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SelectSettingType, int>::func(&SelectSettingLayer::create)), Default, SelectSettingLayer, create, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SelectSettingType, int>::func(&SelectSettingLayer::frameForItem)), Default, SelectSettingLayer, frameForItem, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SelectSettingType, int>::func(&SelectSettingLayer::frameForValue)), Default, SelectSettingLayer, frameForValue, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SelectSettingType, int>::func(&SelectSettingLayer::idxToValue)), Default, SelectSettingLayer, idxToValue, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SelectSettingType, int>::func(&SelectSettingLayer::valueToIdx)), Default, SelectSettingLayer, valueToIdx, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SelectSettingLayer::keyBackClicked)), Default, SelectSettingLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SelectSettingLayer::getSelectedFrame)), Default, SelectSettingLayer, getSelectedFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SelectSettingLayer::getSelectedValue)), Default, SelectSettingLayer, getSelectedValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SelectSettingType, int>::func(&SelectSettingLayer::init)), Default, SelectSettingLayer, init, SelectSettingType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SelectSettingLayer::onClose)), Default, SelectSettingLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SelectSettingLayer::onSelect)), Default, SelectSettingLayer, onSelect, cocos2d::CCObject*)
		}
	};
}
