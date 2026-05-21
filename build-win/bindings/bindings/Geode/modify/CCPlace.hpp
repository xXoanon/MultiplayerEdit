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

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_initWithPosition
		#define GEODE_STATICS_initWithPosition
		GEODE_AS_STATIC_FUNCTION(initWithPosition) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithPosition
		#define GEODE_CONCEPT_CHECK_initWithPosition
		GEODE_CONCEPT_FUNCTION_CHECK(initWithPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCPlace> : ModifyBase<ModifyDerive<Der, cocos2d::CCPlace>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCPlace>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCPlace>>::ModifyBase;
		using Base = cocos2d::CCPlace;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCPlace::create)), Default, cocos2d::CCPlace, create, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCPlace::update)), Thiscall, cocos2d::CCPlace, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCPlace::copyWithZone)), Thiscall, cocos2d::CCPlace, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCPlace::initWithPosition)), Thiscall, cocos2d::CCPlace, initWithPosition, cocos2d::CCPoint const&)
		}
	};
}
