#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomMusicCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomMusicCell> : ModifyBase<ModifyDerive<Der, CustomMusicCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomMusicCell>>;
		using ModifyBase<ModifyDerive<Der, CustomMusicCell>>::ModifyBase;
		using Base = CustomMusicCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4e70, Thiscall, CustomMusicCell, loadFromObject, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomMusicCell, updateBGColor, int)
		}
	};
}
