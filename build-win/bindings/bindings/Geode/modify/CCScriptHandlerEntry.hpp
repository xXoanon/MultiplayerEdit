#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCScriptHandlerEntry> : ModifyBase<ModifyDerive<Der, cocos2d::CCScriptHandlerEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCScriptHandlerEntry>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCScriptHandlerEntry>>::ModifyBase;
		using Base = cocos2d::CCScriptHandlerEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCScriptHandlerEntry@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCScriptHandlerEntry)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCScriptHandlerEntry::create)), Default, cocos2d::CCScriptHandlerEntry, create, int)
		}
	};
}
