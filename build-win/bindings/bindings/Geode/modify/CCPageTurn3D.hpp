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

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCPageTurn3D> : ModifyBase<ModifyDerive<Der, cocos2d::CCPageTurn3D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCPageTurn3D>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCPageTurn3D>>::ModifyBase;
		using Base = cocos2d::CCPageTurn3D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCSize const&>::func(&cocos2d::CCPageTurn3D::create)), Default, cocos2d::CCPageTurn3D, create, float, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCPageTurn3D::update)), Thiscall, cocos2d::CCPageTurn3D, update, float)
		}
	};
}
