#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewCell> : ModifyBase<ModifyDerive<Der, TableViewCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewCell>>;
		using ModifyBase<ModifyDerive<Der, TableViewCell>>::ModifyBase;
		using Base = TableViewCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x76b00, Thiscall, TableViewCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x76d60, Thiscall, TableViewCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewCell, updateVisibility, )
		}
	};
}
