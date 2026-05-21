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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchScriptHandlerEntry> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchScriptHandlerEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchScriptHandlerEntry>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchScriptHandlerEntry>>::ModifyBase;
		using Base = cocos2d::CCTouchScriptHandlerEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTouchScriptHandlerEntry@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTouchScriptHandlerEntry)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool, int, bool>::func(&cocos2d::CCTouchScriptHandlerEntry::create)), Default, cocos2d::CCTouchScriptHandlerEntry, create, int, bool, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, int, bool>::func(&cocos2d::CCTouchScriptHandlerEntry::init)), Thiscall, cocos2d::CCTouchScriptHandlerEntry, init, bool, int, bool)
		}
	};
}
