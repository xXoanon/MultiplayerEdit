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

	#ifndef GEODE_STATICS_initScenes
		#define GEODE_STATICS_initScenes
		GEODE_AS_STATIC_FUNCTION(initScenes) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initScenes
		#define GEODE_CONCEPT_CHECK_initScenes
		GEODE_CONCEPT_FUNCTION_CHECK(initScenes) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionMoveInT> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionMoveInT>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionMoveInT>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionMoveInT>>::ModifyBase;
		using Base = cocos2d::CCTransitionMoveInT;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionMoveInT@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionMoveInT, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionMoveInT@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionMoveInT)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionMoveInT::create)), Default, cocos2d::CCTransitionMoveInT, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionMoveInT::initScenes)), Thiscall, cocos2d::CCTransitionMoveInT, initScenes, )
		}
	};
}
