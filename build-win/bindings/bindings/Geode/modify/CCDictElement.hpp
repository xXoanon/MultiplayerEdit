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

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCDictElement@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCDictElement)
		}
	};
}
