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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionJumpZoom> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionJumpZoom>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionJumpZoom>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionJumpZoom>>::ModifyBase;
		using Base = cocos2d::CCTransitionJumpZoom;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTransitionJumpZoom@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTransitionJumpZoom, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTransitionJumpZoom@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTransitionJumpZoom)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCScene*>::func(&cocos2d::CCTransitionJumpZoom::create)), Default, cocos2d::CCTransitionJumpZoom, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTransitionJumpZoom::onEnter)), Thiscall, cocos2d::CCTransitionJumpZoom, onEnter, )
		}
	};
}
