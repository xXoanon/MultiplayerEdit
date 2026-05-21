#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAudioLineGuidePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_selectSettingClosed
		#define GEODE_STATICS_selectSettingClosed
		GEODE_AS_STATIC_FUNCTION(selectSettingClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSpeed
		#define GEODE_STATICS_onSpeed
		GEODE_AS_STATIC_FUNCTION(onSpeed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectSettingClosed
		#define GEODE_CONCEPT_CHECK_selectSettingClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectSettingClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpeed
		#define GEODE_CONCEPT_CHECK_onSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(onSpeed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAudioLineGuidePopup> : ModifyBase<ModifyDerive<Der, SetupAudioLineGuidePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAudioLineGuidePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAudioLineGuidePopup>>::ModifyBase;
		using Base = SetupAudioLineGuidePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupAudioLineGuidePopup, create, AudioLineGuideGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x470710, Thiscall, SetupAudioLineGuidePopup, selectSettingClosed, SelectSettingLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ffb0, Thiscall, SetupAudioLineGuidePopup, init, AudioLineGuideGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4706c0, Thiscall, SetupAudioLineGuidePopup, onSpeed, cocos2d::CCObject*)
		}
	};
}
