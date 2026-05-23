#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getDPI
		#define GEODE_STATICS_getDPI
		GEODE_AS_STATIC_FUNCTION(getDPI) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getDPI
		#define GEODE_CONCEPT_CHECK_getDPI
		GEODE_CONCEPT_FUNCTION_CHECK(getDPI) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDevice> : ModifyBase<ModifyDerive<Der, cocos2d::CCDevice>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDevice>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDevice>>::ModifyBase;
		using Base = cocos2d::CCDevice;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDevice::getDPI)), Default, cocos2d::CCDevice, getDPI, )
		}
	};
}
