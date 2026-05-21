#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SearchSFXPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSearchFolders
		#define GEODE_STATICS_onSearchFolders
		GEODE_AS_STATIC_FUNCTION(onSearchFolders) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearchFolders
		#define GEODE_CONCEPT_CHECK_onSearchFolders
		GEODE_CONCEPT_FUNCTION_CHECK(onSearchFolders) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SearchSFXPopup> : ModifyBase<ModifyDerive<Der, SearchSFXPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SearchSFXPopup>>;
		using ModifyBase<ModifyDerive<Der, SearchSFXPopup>>::ModifyBase;
		using Base = SearchSFXPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SearchSFXPopup, create, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x480d20, Thiscall, SearchSFXPopup, init, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x480fe0, Thiscall, SearchSFXPopup, onSearchFolders, cocos2d::CCObject*)
		}
	};
}
