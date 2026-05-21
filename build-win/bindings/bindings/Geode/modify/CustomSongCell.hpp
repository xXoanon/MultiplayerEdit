#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
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

	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
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

	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldReload
		#define GEODE_CONCEPT_CHECK_shouldReload
		GEODE_CONCEPT_FUNCTION_CHECK(shouldReload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongCell> : ModifyBase<ModifyDerive<Der, CustomSongCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongCell>>;
		using ModifyBase<ModifyDerive<Der, CustomSongCell>>::ModifyBase;
		using Base = CustomSongCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0xb4550, Thiscall, CustomSongCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4680, Thiscall, CustomSongCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, CustomSongCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4850, Thiscall, CustomSongCell, songIDChanged, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4890, Thiscall, CustomSongCell, getActiveSongID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb48b0, Thiscall, CustomSongCell, getSongFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongCell, getLevelSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4690, Thiscall, CustomSongCell, loadFromObject, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb48e0, Thiscall, CustomSongCell, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongCell, shouldReload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongCell, updateBGColor, int)
		}
	};
}
