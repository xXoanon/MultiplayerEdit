#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupKeyframePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCustomButton
		#define GEODE_STATICS_onCustomButton
		GEODE_AS_STATIC_FUNCTION(onCustomButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onTimeMode
		#define GEODE_STATICS_onTimeMode
		GEODE_AS_STATIC_FUNCTION(onTimeMode) 
	#endif

	#ifndef GEODE_STATICS_refreshPreviewArt
		#define GEODE_STATICS_refreshPreviewArt
		GEODE_AS_STATIC_FUNCTION(refreshPreviewArt) 
	#endif

	#ifndef GEODE_STATICS_updateTimeModeButtons
		#define GEODE_STATICS_updateTimeModeButtons
		GEODE_AS_STATIC_FUNCTION(updateTimeModeButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomButton
		#define GEODE_CONCEPT_CHECK_onCustomButton
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTimeMode
		#define GEODE_CONCEPT_CHECK_onTimeMode
		GEODE_CONCEPT_FUNCTION_CHECK(onTimeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshPreviewArt
		#define GEODE_CONCEPT_CHECK_refreshPreviewArt
		GEODE_CONCEPT_FUNCTION_CHECK(refreshPreviewArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeModeButtons
		#define GEODE_CONCEPT_CHECK_updateTimeModeButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeModeButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupKeyframePopup> : ModifyBase<ModifyDerive<Der, SetupKeyframePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupKeyframePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupKeyframePopup>>::ModifyBase;
		using Base = SetupKeyframePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*>::func(&SetupKeyframePopup::create)), Default, SetupKeyframePopup, create, KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupKeyframePopup::onClose)), Default, SetupKeyframePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupKeyframePopup::onCustomButton)), Default, SetupKeyframePopup, onCustomButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupKeyframePopup::valueDidChange)), Default, SetupKeyframePopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupKeyframePopup::onCustomToggleTriggerValue)), Default, SetupKeyframePopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*>::func(&SetupKeyframePopup::init)), Default, SetupKeyframePopup, init, KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupKeyframePopup::onTimeMode)), Default, SetupKeyframePopup, onTimeMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupKeyframePopup::refreshPreviewArt)), Default, SetupKeyframePopup, refreshPreviewArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupKeyframePopup::updateTimeModeButtons)), Default, SetupKeyframePopup, updateTimeModeButtons, )
		}
	};
}
