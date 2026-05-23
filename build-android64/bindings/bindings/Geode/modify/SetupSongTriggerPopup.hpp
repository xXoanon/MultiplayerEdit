#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSongTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onResetSongTime
		#define GEODE_STATICS_onResetSongTime
		GEODE_AS_STATIC_FUNCTION(onResetSongTime) 
	#endif

	#ifndef GEODE_STATICS_onSavePlaybackPos
		#define GEODE_STATICS_onSavePlaybackPos
		GEODE_AS_STATIC_FUNCTION(onSavePlaybackPos) 
	#endif

	#ifndef GEODE_STATICS_updateApplyPrepare
		#define GEODE_STATICS_updateApplyPrepare
		GEODE_AS_STATIC_FUNCTION(updateApplyPrepare) 
	#endif

	#ifndef GEODE_STATICS_updateLength
		#define GEODE_STATICS_updateLength
		GEODE_AS_STATIC_FUNCTION(updateLength) 
	#endif

	#ifndef GEODE_STATICS_updateSongTimeSlider
		#define GEODE_STATICS_updateSongTimeSlider
		GEODE_AS_STATIC_FUNCTION(updateSongTimeSlider) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageChanged
		#define GEODE_CONCEPT_CHECK_pageChanged
		GEODE_CONCEPT_FUNCTION_CHECK(pageChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetSongTime
		#define GEODE_CONCEPT_CHECK_onResetSongTime
		GEODE_CONCEPT_FUNCTION_CHECK(onResetSongTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSavePlaybackPos
		#define GEODE_CONCEPT_CHECK_onSavePlaybackPos
		GEODE_CONCEPT_FUNCTION_CHECK(onSavePlaybackPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateApplyPrepare
		#define GEODE_CONCEPT_CHECK_updateApplyPrepare
		GEODE_CONCEPT_FUNCTION_CHECK(updateApplyPrepare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLength
		#define GEODE_CONCEPT_CHECK_updateLength
		GEODE_CONCEPT_FUNCTION_CHECK(updateLength) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongTimeSlider
		#define GEODE_CONCEPT_CHECK_updateSongTimeSlider
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongTimeSlider) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSongTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupSongTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSongTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSongTriggerPopup>>::ModifyBase;
		using Base = SetupSongTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*>::func(&SetupSongTriggerPopup::create)), Default, SetupSongTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupSongTriggerPopup::pageChanged)), Default, SetupSongTriggerPopup, pageChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupSongTriggerPopup::onClose)), Default, SetupSongTriggerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupSongTriggerPopup::valueDidChange)), Default, SetupSongTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SongInfoObject*>::func(&SetupSongTriggerPopup::onPlayback)), Default, SetupSongTriggerPopup, onPlayback, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*>::func(&SetupSongTriggerPopup::init)), Default, SetupSongTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupSongTriggerPopup::onResetSongTime)), Default, SetupSongTriggerPopup, onResetSongTime, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupSongTriggerPopup::onSavePlaybackPos)), Default, SetupSongTriggerPopup, onSavePlaybackPos, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&SetupSongTriggerPopup::updateApplyPrepare)), Default, SetupSongTriggerPopup, updateApplyPrepare, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupSongTriggerPopup::updateLength)), Default, SetupSongTriggerPopup, updateLength, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupSongTriggerPopup::updateSongTimeSlider)), Default, SetupSongTriggerPopup, updateSongTimeSlider, )
		}
	};
}
