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

	#ifndef GEODE_STATICS_action
		#define GEODE_STATICS_action
		GEODE_AS_STATIC_FUNCTION(action) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_action
		#define GEODE_CONCEPT_CHECK_action
		GEODE_CONCEPT_FUNCTION_CHECK(action) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionSplitRows> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSplitRows>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSplitRows>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSplitRows>>::ModifyBase;
		using Base = cocos2d::CCTransitionSplitRows;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionSplitRows@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionSplitRows, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionSplitRows@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionSplitRows)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionSplitRows::create)), Default, cocos2d::CCTransitionSplitRows, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionSplitRows::action)), Thiscall, cocos2d::CCTransitionSplitRows, action, )
		}
	};
}
