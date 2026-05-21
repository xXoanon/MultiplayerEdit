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

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_action
		#define GEODE_STATICS_action
		GEODE_AS_STATIC_FUNCTION(action) 
	#endif

	#ifndef GEODE_STATICS_easeActionWithAction
		#define GEODE_STATICS_easeActionWithAction
		GEODE_AS_STATIC_FUNCTION(easeActionWithAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_action
		#define GEODE_CONCEPT_CHECK_action
		GEODE_CONCEPT_FUNCTION_CHECK(action) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_easeActionWithAction
		#define GEODE_CONCEPT_CHECK_easeActionWithAction
		GEODE_CONCEPT_FUNCTION_CHECK(easeActionWithAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionSplitCols> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSplitCols>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSplitCols>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSplitCols>>::ModifyBase;
		using Base = cocos2d::CCTransitionSplitCols;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionSplitCols@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionSplitCols, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionSplitCols@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionSplitCols)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionSplitCols::create)), Default, cocos2d::CCTransitionSplitCols, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionSplitCols::onEnter)), Thiscall, cocos2d::CCTransitionSplitCols, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionSplitCols::action)), Thiscall, cocos2d::CCTransitionSplitCols, action, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCTransitionSplitCols::easeActionWithAction)), Thiscall, cocos2d::CCTransitionSplitCols, easeActionWithAction, cocos2d::CCActionInterval*)
		}
	};
}
