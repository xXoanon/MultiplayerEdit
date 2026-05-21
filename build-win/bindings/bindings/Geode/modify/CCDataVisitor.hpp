#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDataVisitor> : ModifyBase<ModifyDerive<Der, cocos2d::CCDataVisitor>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDataVisitor>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDataVisitor>>::ModifyBase;
		using Base = cocos2d::CCDataVisitor;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCBool const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCBool const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCInteger const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCInteger const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCFloat const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCFloat const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDouble const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCDouble const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCString const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCString const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCArray const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCDictionary const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet const*>::func(&cocos2d::CCDataVisitor::visit)), Thiscall, cocos2d::CCDataVisitor, visit, cocos2d::CCSet const*)
		}
	};
}
