#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/tk_spline.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, tk_spline> : ModifyBase<ModifyDerive<Der, tk_spline>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, tk_spline>>;
		using ModifyBase<ModifyDerive<Der, tk_spline>>::ModifyBase;
		using Base = tk_spline;
        using Derived = Der;
		void apply() override {

		}
	};
}
