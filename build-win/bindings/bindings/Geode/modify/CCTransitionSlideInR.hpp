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

	#ifndef GEODE_STATICS_sceneOrder
		#define GEODE_STATICS_sceneOrder
		GEODE_AS_STATIC_FUNCTION(sceneOrder) 
	#endif

	#ifndef GEODE_STATICS_initScenes
		#define GEODE_STATICS_initScenes
		GEODE_AS_STATIC_FUNCTION(initScenes) 
	#endif

	#ifndef GEODE_STATICS_action
		#define GEODE_STATICS_action
		GEODE_AS_STATIC_FUNCTION(action) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneOrder
		#define GEODE_CONCEPT_CHECK_sceneOrder
		GEODE_CONCEPT_FUNCTION_CHECK(sceneOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initScenes
		#define GEODE_CONCEPT_CHECK_initScenes
		GEODE_CONCEPT_FUNCTION_CHECK(initScenes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_action
		#define GEODE_CONCEPT_CHECK_action
		GEODE_CONCEPT_FUNCTION_CHECK(action) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionSlideInR> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSlideInR>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSlideInR>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionSlideInR>>::ModifyBase;
		using Base = cocos2d::CCTransitionSlideInR;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionSlideInR@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionSlideInR, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionSlideInR@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionSlideInR)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionSlideInR::create)), Default, cocos2d::CCTransitionSlideInR, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionSlideInR::sceneOrder)), Thiscall, cocos2d::CCTransitionSlideInR, sceneOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionSlideInR::initScenes)), Thiscall, cocos2d::CCTransitionSlideInR, initScenes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionSlideInR::action)), Thiscall, cocos2d::CCTransitionSlideInR, action, )
		}
	};
}
