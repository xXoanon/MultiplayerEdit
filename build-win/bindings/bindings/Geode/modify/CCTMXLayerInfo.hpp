#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getProperties
		#define GEODE_STATICS_getProperties
		GEODE_AS_STATIC_FUNCTION(getProperties) 
	#endif

	#ifndef GEODE_STATICS_setProperties
		#define GEODE_STATICS_setProperties
		GEODE_AS_STATIC_FUNCTION(setProperties) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getProperties
		#define GEODE_CONCEPT_CHECK_getProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProperties
		#define GEODE_CONCEPT_CHECK_setProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setProperties) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTMXLayerInfo> : ModifyBase<ModifyDerive<Der, cocos2d::CCTMXLayerInfo>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTMXLayerInfo>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTMXLayerInfo>>::ModifyBase;
		using Base = cocos2d::CCTMXLayerInfo;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTMXLayerInfo@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTMXLayerInfo, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTMXLayerInfo@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTMXLayerInfo)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXLayerInfo::getProperties)), Thiscall, cocos2d::CCTMXLayerInfo, getProperties, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCTMXLayerInfo::setProperties)), Thiscall, cocos2d::CCTMXLayerInfo, setProperties, cocos2d::CCDictionary*)
		}
	};
}
