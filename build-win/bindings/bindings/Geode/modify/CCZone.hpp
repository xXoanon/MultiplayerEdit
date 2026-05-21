#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCZone> : ModifyBase<ModifyDerive<Der, cocos2d::CCZone>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCZone>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCZone>>::ModifyBase;
		using Base = cocos2d::CCZone;
        using Derived = Der;
		void apply() override {

		}
	};
}
