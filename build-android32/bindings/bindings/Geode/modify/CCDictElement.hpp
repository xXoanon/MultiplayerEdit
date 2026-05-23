#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDictElement> : ModifyBase<ModifyDerive<Der, cocos2d::CCDictElement>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDictElement>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDictElement>>::ModifyBase;
		using Base = cocos2d::CCDictElement;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d13CCDictElementC2EPKcPNS_8CCObjectE")), Default, cocos2d::CCDictElement, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d13CCDictElementC2E8intptr_tPNS_8CCObjectE")), Default, cocos2d::CCDictElement, intptr_t, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d13CCDictElementD2Ev")), Default, cocos2d::CCDictElement)
		}
	};
}
