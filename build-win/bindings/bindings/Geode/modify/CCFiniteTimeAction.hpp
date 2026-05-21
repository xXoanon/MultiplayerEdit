#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFiniteTimeAction> : ModifyBase<ModifyDerive<Der, cocos2d::CCFiniteTimeAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFiniteTimeAction>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFiniteTimeAction>>::ModifyBase;
		using Base = cocos2d::CCFiniteTimeAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFiniteTimeAction::reverse)), Thiscall, cocos2d::CCFiniteTimeAction, reverse, )
		}
	};
}
