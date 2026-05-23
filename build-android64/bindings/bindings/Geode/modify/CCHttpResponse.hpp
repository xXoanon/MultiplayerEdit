#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCHttpResponse> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpResponse>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpResponse>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpResponse>>::ModifyBase;
		using Base = cocos2d::extension::CCHttpResponse;
        using Derived = Der;
		void apply() override {

		}
	};
}
