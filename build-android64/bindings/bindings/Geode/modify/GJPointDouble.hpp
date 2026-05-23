#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPointDouble.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GJPointDouble> : ModifyBase<ModifyDerive<Der, GJPointDouble>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPointDouble>>;
		using ModifyBase<ModifyDerive<Der, GJPointDouble>>::ModifyBase;
		using Base = GJPointDouble;
        using Derived = Der;
		void apply() override {

		}
	};
}
