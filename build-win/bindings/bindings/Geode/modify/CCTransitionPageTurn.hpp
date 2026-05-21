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

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_sceneOrder
		#define GEODE_STATICS_sceneOrder
		GEODE_AS_STATIC_FUNCTION(sceneOrder) 
	#endif

	#ifndef GEODE_STATICS_actionWithSize
		#define GEODE_STATICS_actionWithSize
		GEODE_AS_STATIC_FUNCTION(actionWithSize) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneOrder
		#define GEODE_CONCEPT_CHECK_sceneOrder
		GEODE_CONCEPT_FUNCTION_CHECK(sceneOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionWithSize
		#define GEODE_CONCEPT_CHECK_actionWithSize
		GEODE_CONCEPT_FUNCTION_CHECK(actionWithSize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionPageTurn> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionPageTurn>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionPageTurn>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionPageTurn>>::ModifyBase;
		using Base = cocos2d::CCTransitionPageTurn;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionPageTurn@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionPageTurn, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionPageTurn@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionPageTurn)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*, bool>::func(&cocos2d::CCTransitionPageTurn::create)), Default, cocos2d::CCTransitionPageTurn, create, float, cocos2d::CCScene*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, cocos2d::CCScene*, bool>::func(&cocos2d::CCTransitionPageTurn::initWithDuration)), Thiscall, cocos2d::CCTransitionPageTurn, initWithDuration, float, cocos2d::CCScene*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionPageTurn::onEnter)), Thiscall, cocos2d::CCTransitionPageTurn, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionPageTurn::sceneOrder)), Thiscall, cocos2d::CCTransitionPageTurn, sceneOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCTransitionPageTurn::actionWithSize)), Thiscall, cocos2d::CCTransitionPageTurn, actionWithSize, cocos2d::CCSize const&)
		}
	};
}
