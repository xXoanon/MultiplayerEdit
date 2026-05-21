#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ArtistCell.hpp>
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

	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_onNewgrounds
		#define GEODE_STATICS_onNewgrounds
		GEODE_AS_STATIC_FUNCTION(onNewgrounds) 
	#endif

	#ifndef GEODE_STATICS_onYouTube
		#define GEODE_STATICS_onYouTube
		GEODE_AS_STATIC_FUNCTION(onYouTube) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewgrounds
		#define GEODE_CONCEPT_CHECK_onNewgrounds
		GEODE_CONCEPT_FUNCTION_CHECK(onNewgrounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onYouTube
		#define GEODE_CONCEPT_CHECK_onYouTube
		GEODE_CONCEPT_FUNCTION_CHECK(onYouTube) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ArtistCell> : ModifyBase<ModifyDerive<Der, ArtistCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ArtistCell>>;
		using ModifyBase<ModifyDerive<Der, ArtistCell>>::ModifyBase;
		using Base = ArtistCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c830, Thiscall, ArtistCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, ArtistCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5610, Thiscall, ArtistCell, loadFromObject, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5940, Thiscall, ArtistCell, onNewgrounds, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb59e0, Thiscall, ArtistCell, onYouTube, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ArtistCell, updateBGColor, int)
		}
	};
}
