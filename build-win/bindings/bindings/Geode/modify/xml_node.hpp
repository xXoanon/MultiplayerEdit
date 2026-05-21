#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, pugi::xml_node> : ModifyBase<ModifyDerive<Der, pugi::xml_node>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, pugi::xml_node>>;
		using ModifyBase<ModifyDerive<Der, pugi::xml_node>>::ModifyBase;
		using Base = pugi::xml_node;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::getCocos() + 0x724f0, Thiscall, pugi::xml_node, )
		}
	};
}
