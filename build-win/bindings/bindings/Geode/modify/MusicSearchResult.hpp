#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicSearchResult.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_updateObjects
		#define GEODE_STATICS_updateObjects
		GEODE_AS_STATIC_FUNCTION(updateObjects) 
	#endif

	#ifndef GEODE_STATICS_stateChanged
		#define GEODE_STATICS_stateChanged
		GEODE_AS_STATIC_FUNCTION(stateChanged) 
	#endif

	#ifndef GEODE_STATICS_applyTagFilters
		#define GEODE_STATICS_applyTagFilters
		GEODE_AS_STATIC_FUNCTION(applyTagFilters) 
	#endif

	#ifndef GEODE_STATICS_getFilesMatchingSearch
		#define GEODE_STATICS_getFilesMatchingSearch
		GEODE_AS_STATIC_FUNCTION(getFilesMatchingSearch) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjects
		#define GEODE_CONCEPT_CHECK_updateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stateChanged
		#define GEODE_CONCEPT_CHECK_stateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(stateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyArtistFilters
		#define GEODE_CONCEPT_CHECK_applyArtistFilters
		GEODE_CONCEPT_FUNCTION_CHECK(applyArtistFilters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyTagFilters
		#define GEODE_CONCEPT_CHECK_applyTagFilters
		GEODE_CONCEPT_FUNCTION_CHECK(applyTagFilters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createArtistFilterObjects
		#define GEODE_CONCEPT_CHECK_createArtistFilterObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createArtistFilterObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTagFilterObjects
		#define GEODE_CONCEPT_CHECK_createTagFilterObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createTagFilterObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFilesMatchingSearch
		#define GEODE_CONCEPT_CHECK_getFilesMatchingSearch
		GEODE_CONCEPT_FUNCTION_CHECK(getFilesMatchingSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFutureCount
		#define GEODE_CONCEPT_CHECK_updateFutureCount
		GEODE_CONCEPT_FUNCTION_CHECK(updateFutureCount) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicSearchResult> : ModifyBase<ModifyDerive<Der, MusicSearchResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicSearchResult>>;
		using ModifyBase<ModifyDerive<Der, MusicSearchResult>>::ModifyBase;
		using Base = MusicSearchResult;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x33b880, Thiscall, MusicSearchResult, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicSearchResult, create, GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x347330, Thiscall, MusicSearchResult, updateObjects, AudioSortType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x347320, Thiscall, MusicSearchResult, stateChanged, OptionsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicSearchResult, applyArtistFilters, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x347250, Thiscall, MusicSearchResult, applyTagFilters, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicSearchResult, createArtistFilterObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicSearchResult, createTagFilterObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x347880, Thiscall, MusicSearchResult, getFilesMatchingSearch, cocos2d::CCArray*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicSearchResult, init, GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicSearchResult, updateFutureCount, cocos2d::CCArray*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicSearchResult, updateObjects, )
		}
	};
}
