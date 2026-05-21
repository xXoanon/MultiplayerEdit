#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_onToggleOption
		#define GEODE_STATICS_onToggleOption
		GEODE_AS_STATIC_FUNCTION(onToggleOption) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleOption
		#define GEODE_CONCEPT_CHECK_onToggleOption
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleOption) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsCell> : ModifyBase<ModifyDerive<Der, OptionsCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsCell>>;
		using ModifyBase<ModifyDerive<Der, OptionsCell>>::ModifyBase;
		using Base = OptionsCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5170, Thiscall, OptionsCell, loadFromObject, OptionsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5510, Thiscall, OptionsCell, onToggleOption, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsCell, updateBGColor, int)
		}
	};
}
