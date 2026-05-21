#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

	#ifndef GEODE_STATICS_onFadeIn
		#define GEODE_STATICS_onFadeIn
		GEODE_AS_STATIC_FUNCTION(onFadeIn) 
	#endif

	#ifndef GEODE_STATICS_onFadeOut
		#define GEODE_STATICS_onFadeOut
		GEODE_AS_STATIC_FUNCTION(onFadeOut) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onSongPersistent
		#define GEODE_STATICS_onSongPersistent
		GEODE_AS_STATIC_FUNCTION(onSongPersistent) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFadeIn
		#define GEODE_CONCEPT_CHECK_onFadeIn
		GEODE_CONCEPT_FUNCTION_CHECK(onFadeIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFadeOut
		#define GEODE_CONCEPT_CHECK_onFadeOut
		GEODE_CONCEPT_FUNCTION_CHECK(onFadeOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSongPersistent
		#define GEODE_CONCEPT_CHECK_onSongPersistent
		GEODE_CONCEPT_FUNCTION_CHECK(onSongPersistent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlaybackBtn
		#define GEODE_CONCEPT_CHECK_updatePlaybackBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlaybackBtn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongOptionsLayer> : ModifyBase<ModifyDerive<Der, SongOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, SongOptionsLayer>>::ModifyBase;
		using Base = SongOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongOptionsLayer, create, CustomSongDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5640, Thiscall, SongOptionsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc45a0, Thiscall, SongOptionsLayer, init, CustomSongDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc54d0, Thiscall, SongOptionsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc4fc0, Thiscall, SongOptionsLayer, onFadeIn, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5010, Thiscall, SongOptionsLayer, onFadeOut, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5370, Thiscall, SongOptionsLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc50b0, Thiscall, SongOptionsLayer, onPlayback, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5060, Thiscall, SongOptionsLayer, onSongPersistent, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongOptionsLayer, updatePlaybackBtn, )
		}
	};
}
