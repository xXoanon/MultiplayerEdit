#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NewgroundsInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onArtists
		#define GEODE_STATICS_onArtists
		GEODE_AS_STATIC_FUNCTION(onArtists) 
	#endif

	#ifndef GEODE_STATICS_onChanges
		#define GEODE_STATICS_onChanges
		GEODE_AS_STATIC_FUNCTION(onChanges) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onGuidelines
		#define GEODE_STATICS_onGuidelines
		GEODE_AS_STATIC_FUNCTION(onGuidelines) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNewgrounds
		#define GEODE_STATICS_onNewgrounds
		GEODE_AS_STATIC_FUNCTION(onNewgrounds) 
	#endif

	#ifndef GEODE_STATICS_onSupporter
		#define GEODE_STATICS_onSupporter
		GEODE_AS_STATIC_FUNCTION(onSupporter) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArtists
		#define GEODE_CONCEPT_CHECK_onArtists
		GEODE_CONCEPT_FUNCTION_CHECK(onArtists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChanges
		#define GEODE_CONCEPT_CHECK_onChanges
		GEODE_CONCEPT_FUNCTION_CHECK(onChanges) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGuidelines
		#define GEODE_CONCEPT_CHECK_onGuidelines
		GEODE_CONCEPT_FUNCTION_CHECK(onGuidelines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewgrounds
		#define GEODE_CONCEPT_CHECK_onNewgrounds
		GEODE_CONCEPT_FUNCTION_CHECK(onNewgrounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSupporter
		#define GEODE_CONCEPT_CHECK_onSupporter
		GEODE_CONCEPT_FUNCTION_CHECK(onSupporter) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NewgroundsInfoLayer> : ModifyBase<ModifyDerive<Der, NewgroundsInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NewgroundsInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, NewgroundsInfoLayer>>::ModifyBase;
		using Base = NewgroundsInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NewgroundsInfoLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5650, Thiscall, NewgroundsInfoLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, NewgroundsInfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc63b0, Thiscall, NewgroundsInfoLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5f90, Thiscall, NewgroundsInfoLayer, onArtists, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6250, Thiscall, NewgroundsInfoLayer, onChanges, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, NewgroundsInfoLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc60e0, Thiscall, NewgroundsInfoLayer, onGuidelines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6100, Thiscall, NewgroundsInfoLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5f7a, Thiscall, NewgroundsInfoLayer, onNewgrounds, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc60c0, Thiscall, NewgroundsInfoLayer, onSupporter, cocos2d::CCObject*)
		}
	};
}
