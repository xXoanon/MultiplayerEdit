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

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif

	#ifndef GEODE_STATICS_bounceTime
		#define GEODE_STATICS_bounceTime
		GEODE_AS_STATIC_FUNCTION(bounceTime) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bounceTime
		#define GEODE_CONCEPT_CHECK_bounceTime
		GEODE_CONCEPT_FUNCTION_CHECK(bounceTime) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEaseBounce> : ModifyBase<ModifyDerive<Der, cocos2d::CCEaseBounce>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEaseBounce>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEaseBounce>>::ModifyBase;
		using Base = cocos2d::CCEaseBounce;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCEaseBounce::create)), Default, cocos2d::CCEaseBounce, create, cocos2d::CCActionInterval*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCEaseBounce::copyWithZone)), Thiscall, cocos2d::CCEaseBounce, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEaseBounce::reverse)), Thiscall, cocos2d::CCEaseBounce, reverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCEaseBounce::bounceTime)), Thiscall, cocos2d::CCEaseBounce, bounceTime, float)
		}
	};
}
