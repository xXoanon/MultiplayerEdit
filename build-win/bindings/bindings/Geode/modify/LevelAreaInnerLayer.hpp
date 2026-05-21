#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelAreaInnerLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onDoor
		#define GEODE_STATICS_onDoor
		GEODE_AS_STATIC_FUNCTION(onDoor) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNextFloor
		#define GEODE_STATICS_onNextFloor
		GEODE_AS_STATIC_FUNCTION(onNextFloor) 
	#endif

	#ifndef GEODE_STATICS_onOnlineVault
		#define GEODE_STATICS_onOnlineVault
		GEODE_AS_STATIC_FUNCTION(onOnlineVault) 
	#endif

	#ifndef GEODE_STATICS_playStep1
		#define GEODE_STATICS_playStep1
		GEODE_AS_STATIC_FUNCTION(playStep1) 
	#endif

	#ifndef GEODE_STATICS_showFloor1CompleteDialog
		#define GEODE_STATICS_showFloor1CompleteDialog
		GEODE_AS_STATIC_FUNCTION(showFloor1CompleteDialog) 
	#endif

	#ifndef GEODE_STATICS_tryResumeTowerMusic
		#define GEODE_STATICS_tryResumeTowerMusic
		GEODE_AS_STATIC_FUNCTION(tryResumeTowerMusic) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDoor
		#define GEODE_CONCEPT_CHECK_onDoor
		GEODE_CONCEPT_FUNCTION_CHECK(onDoor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFloor
		#define GEODE_CONCEPT_CHECK_onNextFloor
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFloor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOnlineVault
		#define GEODE_CONCEPT_CHECK_onOnlineVault
		GEODE_CONCEPT_FUNCTION_CHECK(onOnlineVault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep1
		#define GEODE_CONCEPT_CHECK_playStep1
		GEODE_CONCEPT_FUNCTION_CHECK(playStep1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFloor1CompleteDialog
		#define GEODE_CONCEPT_CHECK_showFloor1CompleteDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showFloor1CompleteDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryResumeTowerMusic
		#define GEODE_CONCEPT_CHECK_tryResumeTowerMusic
		GEODE_CONCEPT_FUNCTION_CHECK(tryResumeTowerMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowAd
		#define GEODE_CONCEPT_CHECK_tryShowAd
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowAd) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelAreaInnerLayer> : ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelAreaInnerLayer>>::ModifyBase;
		using Base = LevelAreaInnerLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelAreaInnerLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c63d0, Default, LevelAreaInnerLayer, scene, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8750, Thiscall, LevelAreaInnerLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c7ba0, Thiscall, LevelAreaInnerLayer, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8700, Thiscall, LevelAreaInnerLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c64e0, Thiscall, LevelAreaInnerLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c86a0, Thiscall, LevelAreaInnerLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c81d0, Thiscall, LevelAreaInnerLayer, onDoor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c7c30, Thiscall, LevelAreaInnerLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c74c0, Thiscall, LevelAreaInnerLayer, onNextFloor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c84c0, Thiscall, LevelAreaInnerLayer, onOnlineVault, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8390, Thiscall, LevelAreaInnerLayer, playStep1, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c75c0, Thiscall, LevelAreaInnerLayer, showFloor1CompleteDialog, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8130, Thiscall, LevelAreaInnerLayer, tryResumeTowerMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelAreaInnerLayer, tryShowAd, )
		}
	};
}
