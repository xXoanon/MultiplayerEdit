#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongSelectNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_customSongLayerClosed
		#define GEODE_STATICS_customSongLayerClosed
		GEODE_AS_STATIC_FUNCTION(customSongLayerClosed) 
	#endif

	#ifndef GEODE_STATICS_songIDChanged
		#define GEODE_STATICS_songIDChanged
		GEODE_AS_STATIC_FUNCTION(songIDChanged) 
	#endif

	#ifndef GEODE_STATICS_getActiveSongID
		#define GEODE_STATICS_getActiveSongID
		GEODE_AS_STATIC_FUNCTION(getActiveSongID) 
	#endif

	#ifndef GEODE_STATICS_getSongFileName
		#define GEODE_STATICS_getSongFileName
		GEODE_AS_STATIC_FUNCTION(getSongFileName) 
	#endif

	#ifndef GEODE_STATICS_getLevelSettings
		#define GEODE_STATICS_getLevelSettings
		GEODE_AS_STATIC_FUNCTION(getLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_audioNext
		#define GEODE_STATICS_audioNext
		GEODE_AS_STATIC_FUNCTION(audioNext) 
	#endif

	#ifndef GEODE_STATICS_audioPrevious
		#define GEODE_STATICS_audioPrevious
		GEODE_AS_STATIC_FUNCTION(audioPrevious) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onOpenCustomSong
		#define GEODE_STATICS_onOpenCustomSong
		GEODE_AS_STATIC_FUNCTION(onOpenCustomSong) 
	#endif

	#ifndef GEODE_STATICS_onSongMode
		#define GEODE_STATICS_onSongMode
		GEODE_AS_STATIC_FUNCTION(onSongMode) 
	#endif

	#ifndef GEODE_STATICS_showCustomSongSelect
		#define GEODE_STATICS_showCustomSongSelect
		GEODE_AS_STATIC_FUNCTION(showCustomSongSelect) 
	#endif

	#ifndef GEODE_STATICS_updateAudioLabel
		#define GEODE_STATICS_updateAudioLabel
		GEODE_AS_STATIC_FUNCTION(updateAudioLabel) 
	#endif

	#ifndef GEODE_STATICS_updateWidgetVisibility
		#define GEODE_STATICS_updateWidgetVisibility
		GEODE_AS_STATIC_FUNCTION(updateWidgetVisibility) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSongLayerClosed
		#define GEODE_CONCEPT_CHECK_customSongLayerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(customSongLayerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songIDChanged
		#define GEODE_CONCEPT_CHECK_songIDChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songIDChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSongID
		#define GEODE_CONCEPT_CHECK_getActiveSongID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongFileName
		#define GEODE_CONCEPT_CHECK_getSongFileName
		GEODE_CONCEPT_FUNCTION_CHECK(getSongFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSettings
		#define GEODE_CONCEPT_CHECK_getLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_audioNext
		#define GEODE_CONCEPT_CHECK_audioNext
		GEODE_CONCEPT_FUNCTION_CHECK(audioNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_audioPrevious
		#define GEODE_CONCEPT_CHECK_audioPrevious
		GEODE_CONCEPT_FUNCTION_CHECK(audioPrevious) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenCustomSong
		#define GEODE_CONCEPT_CHECK_onOpenCustomSong
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenCustomSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSongMode
		#define GEODE_CONCEPT_CHECK_onSongMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSongMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectSong
		#define GEODE_CONCEPT_CHECK_selectSong
		GEODE_CONCEPT_FUNCTION_CHECK(selectSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCustomSongSelect
		#define GEODE_CONCEPT_CHECK_showCustomSongSelect
		GEODE_CONCEPT_FUNCTION_CHECK(showCustomSongSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAudioLabel
		#define GEODE_CONCEPT_CHECK_updateAudioLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateAudioLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateWidgetVisibility
		#define GEODE_CONCEPT_CHECK_updateWidgetVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateWidgetVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongSelectNode> : ModifyBase<ModifyDerive<Der, SongSelectNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongSelectNode>>;
		using ModifyBase<ModifyDerive<Der, SongSelectNode>>::ModifyBase;
		using Base = SongSelectNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6ca0, Default, SongSelectNode, create, int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7d00, Thiscall, SongSelectNode, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7d90, Thiscall, SongSelectNode, customSongLayerClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7dc0, Thiscall, SongSelectNode, songIDChanged, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7dd0, Thiscall, SongSelectNode, getActiveSongID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7de0, Thiscall, SongSelectNode, getSongFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7ea0, Thiscall, SongSelectNode, getLevelSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc77d0, Thiscall, SongSelectNode, audioNext, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7810, Thiscall, SongSelectNode, audioPrevious, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6dd0, Thiscall, SongSelectNode, init, int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7b20, Thiscall, SongSelectNode, onOpenCustomSong, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7840, Thiscall, SongSelectNode, onSongMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7870, Thiscall, SongSelectNode, onSongMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongSelectNode, selectSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7ba0, Thiscall, SongSelectNode, showCustomSongSelect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc76e0, Thiscall, SongSelectNode, updateAudioLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7a90, Thiscall, SongSelectNode, updateWidgetVisibility, )
		}
	};
}
