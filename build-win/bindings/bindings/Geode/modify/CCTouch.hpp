#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getDelta
		#define GEODE_STATICS_getDelta
		GEODE_AS_STATIC_FUNCTION(getDelta) 
	#endif

	#ifndef GEODE_STATICS_getLocation
		#define GEODE_STATICS_getLocation
		GEODE_AS_STATIC_FUNCTION(getLocation) 
	#endif

	#ifndef GEODE_STATICS_getLocationInView
		#define GEODE_STATICS_getLocationInView
		GEODE_AS_STATIC_FUNCTION(getLocationInView) 
	#endif

	#ifndef GEODE_STATICS_getPreviousLocation
		#define GEODE_STATICS_getPreviousLocation
		GEODE_AS_STATIC_FUNCTION(getPreviousLocation) 
	#endif

	#ifndef GEODE_STATICS_getPreviousLocationInView
		#define GEODE_STATICS_getPreviousLocationInView
		GEODE_AS_STATIC_FUNCTION(getPreviousLocationInView) 
	#endif

	#ifndef GEODE_STATICS_getStartLocation
		#define GEODE_STATICS_getStartLocation
		GEODE_AS_STATIC_FUNCTION(getStartLocation) 
	#endif

	#ifndef GEODE_STATICS_getStartLocationInView
		#define GEODE_STATICS_getStartLocationInView
		GEODE_AS_STATIC_FUNCTION(getStartLocationInView) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getDelta
		#define GEODE_CONCEPT_CHECK_getDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocation
		#define GEODE_CONCEPT_CHECK_getLocation
		GEODE_CONCEPT_FUNCTION_CHECK(getLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocationInView
		#define GEODE_CONCEPT_CHECK_getLocationInView
		GEODE_CONCEPT_FUNCTION_CHECK(getLocationInView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPreviousLocation
		#define GEODE_CONCEPT_CHECK_getPreviousLocation
		GEODE_CONCEPT_FUNCTION_CHECK(getPreviousLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPreviousLocationInView
		#define GEODE_CONCEPT_CHECK_getPreviousLocationInView
		GEODE_CONCEPT_FUNCTION_CHECK(getPreviousLocationInView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartLocation
		#define GEODE_CONCEPT_CHECK_getStartLocation
		GEODE_CONCEPT_FUNCTION_CHECK(getStartLocation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartLocationInView
		#define GEODE_CONCEPT_CHECK_getStartLocationInView
		GEODE_CONCEPT_FUNCTION_CHECK(getStartLocationInView) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouch> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouch>>::ModifyBase;
		using Base = cocos2d::CCTouch;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouch::getDelta)), Thiscall, cocos2d::CCTouch, getDelta, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouch::getLocation)), Thiscall, cocos2d::CCTouch, getLocation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouch::getLocationInView)), Thiscall, cocos2d::CCTouch, getLocationInView, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouch::getPreviousLocation)), Thiscall, cocos2d::CCTouch, getPreviousLocation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouch::getPreviousLocationInView)), Thiscall, cocos2d::CCTouch, getPreviousLocationInView, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouch::getStartLocation)), Thiscall, cocos2d::CCTouch, getStartLocation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTouch::getStartLocationInView)), Thiscall, cocos2d::CCTouch, getStartLocationInView, )
		}
	};
}
