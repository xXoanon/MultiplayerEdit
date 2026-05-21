#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_clear
		#define GEODE_STATICS_clear
		GEODE_AS_STATIC_FUNCTION(clear) 
	#endif

	#ifndef GEODE_STATICS_getResult
		#define GEODE_STATICS_getResult
		GEODE_AS_STATIC_FUNCTION(getResult) 
	#endif

	#ifndef GEODE_STATICS_visitObject
		#define GEODE_STATICS_visitObject
		GEODE_AS_STATIC_FUNCTION(visitObject) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_setIndentLevel
		#define GEODE_STATICS_setIndentLevel
		GEODE_AS_STATIC_FUNCTION(setIndentLevel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_clear
		#define GEODE_CONCEPT_CHECK_clear
		GEODE_CONCEPT_FUNCTION_CHECK(clear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResult
		#define GEODE_CONCEPT_CHECK_getResult
		GEODE_CONCEPT_FUNCTION_CHECK(getResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visitObject
		#define GEODE_CONCEPT_CHECK_visitObject
		GEODE_CONCEPT_FUNCTION_CHECK(visitObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIndentLevel
		#define GEODE_CONCEPT_CHECK_setIndentLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setIndentLevel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCPrettyPrinter> : ModifyBase<ModifyDerive<Der, cocos2d::CCPrettyPrinter>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCPrettyPrinter>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCPrettyPrinter>>::ModifyBase;
		using Base = cocos2d::CCPrettyPrinter;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCPrettyPrinter::clear)), Thiscall, cocos2d::CCPrettyPrinter, clear, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCPrettyPrinter::getResult)), Thiscall, cocos2d::CCPrettyPrinter, getResult, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject const*>::func(&cocos2d::CCPrettyPrinter::visitObject)), Thiscall, cocos2d::CCPrettyPrinter, visitObject, cocos2d::CCObject const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCBool const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCBool const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCInteger const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCInteger const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCFloat const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCFloat const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDouble const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCDouble const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCString const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCString const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCArray const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCDictionary const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSet const*>::func(&cocos2d::CCPrettyPrinter::visit)), Thiscall, cocos2d::CCPrettyPrinter, visit, cocos2d::CCSet const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCPrettyPrinter::setIndentLevel)), Thiscall, cocos2d::CCPrettyPrinter, setIndentLevel, int)
		}
	};
}
