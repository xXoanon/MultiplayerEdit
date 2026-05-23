#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCHttpRequest> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpRequest>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpRequest>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpRequest>>::ModifyBase;
		using Base = cocos2d::extension::CCHttpRequest;
        using Derived = Der;
		void apply() override {

		}
	};
}
