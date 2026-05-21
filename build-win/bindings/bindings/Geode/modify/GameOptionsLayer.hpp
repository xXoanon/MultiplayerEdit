#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif

	#ifndef GEODE_STATICS_didToggle
		#define GEODE_STATICS_didToggle
		GEODE_AS_STATIC_FUNCTION(didToggle) 
	#endif

	#ifndef GEODE_STATICS_onPracticeMusicSync
		#define GEODE_STATICS_onPracticeMusicSync
		GEODE_AS_STATIC_FUNCTION(onPracticeMusicSync) 
	#endif

	#ifndef GEODE_STATICS_onUIOptions
		#define GEODE_STATICS_onUIOptions
		GEODE_AS_STATIC_FUNCTION(onUIOptions) 
	#endif

	#ifndef GEODE_STATICS_onUIPOptions
		#define GEODE_STATICS_onUIPOptions
		GEODE_AS_STATIC_FUNCTION(onUIPOptions) 
	#endif

	#ifndef GEODE_STATICS_showPracticeMusicSyncUnlockInfo
		#define GEODE_STATICS_showPracticeMusicSyncUnlockInfo
		GEODE_AS_STATIC_FUNCTION(showPracticeMusicSyncUnlockInfo) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupOptions
		#define GEODE_CONCEPT_CHECK_setupOptions
		GEODE_CONCEPT_FUNCTION_CHECK(setupOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didToggle
		#define GEODE_CONCEPT_CHECK_didToggle
		GEODE_CONCEPT_FUNCTION_CHECK(didToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPracticeMusicSync
		#define GEODE_CONCEPT_CHECK_onPracticeMusicSync
		GEODE_CONCEPT_FUNCTION_CHECK(onPracticeMusicSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUIOptions
		#define GEODE_CONCEPT_CHECK_onUIOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onUIOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUIPOptions
		#define GEODE_CONCEPT_CHECK_onUIPOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onUIPOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPracticeMusicSyncUnlockInfo
		#define GEODE_CONCEPT_CHECK_showPracticeMusicSyncUnlockInfo
		GEODE_CONCEPT_FUNCTION_CHECK(showPracticeMusicSyncUnlockInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameOptionsLayer> : ModifyBase<ModifyDerive<Der, GameOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, GameOptionsLayer>>::ModifyBase;
		using Base = GameOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameOptionsLayer, create, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29ef40, Thiscall, GameOptionsLayer, setupOptions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0560, Thiscall, GameOptionsLayer, didToggle, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameOptionsLayer, init, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0270, Thiscall, GameOptionsLayer, onPracticeMusicSync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a03f0, Thiscall, GameOptionsLayer, onUIOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0410, Thiscall, GameOptionsLayer, onUIPOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29fa10, Thiscall, GameOptionsLayer, showPracticeMusicSyncUnlockInfo, )
		}
	};
}
