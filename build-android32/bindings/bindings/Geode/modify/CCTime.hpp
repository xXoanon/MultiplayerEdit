#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_gettimeofdayCocos2d
		#define GEODE_STATICS_gettimeofdayCocos2d
		GEODE_AS_STATIC_FUNCTION(gettimeofdayCocos2d) 
	#endif

	#ifndef GEODE_STATICS_timersubCocos2d
		#define GEODE_STATICS_timersubCocos2d
		GEODE_AS_STATIC_FUNCTION(timersubCocos2d) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_gettimeofdayCocos2d
		#define GEODE_CONCEPT_CHECK_gettimeofdayCocos2d
		GEODE_CONCEPT_FUNCTION_CHECK(gettimeofdayCocos2d) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timersubCocos2d
		#define GEODE_CONCEPT_CHECK_timersubCocos2d
		GEODE_CONCEPT_FUNCTION_CHECK(timersubCocos2d) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTime> : ModifyBase<ModifyDerive<Der, cocos2d::CCTime>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTime>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTime>>::ModifyBase;
		using Base = cocos2d::CCTime;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::cc_timeval*, void*>::func(&cocos2d::CCTime::gettimeofdayCocos2d)), Default, cocos2d::CCTime, gettimeofdayCocos2d, cocos2d::cc_timeval*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::cc_timeval*, cocos2d::cc_timeval*>::func(&cocos2d::CCTime::timersubCocos2d)), Default, cocos2d::CCTime, timersubCocos2d, cocos2d::cc_timeval*, cocos2d::cc_timeval*)
		}
	};
}
