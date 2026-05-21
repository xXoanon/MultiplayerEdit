#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_isDone
		#define GEODE_STATICS_isDone
		GEODE_AS_STATIC_FUNCTION(isDone) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_reverse
		#define GEODE_STATICS_reverse
		GEODE_AS_STATIC_FUNCTION(reverse) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDone
		#define GEODE_CONCEPT_CHECK_isDone
		GEODE_CONCEPT_FUNCTION_CHECK(isDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverse
		#define GEODE_CONCEPT_CHECK_reverse
		GEODE_CONCEPT_FUNCTION_CHECK(reverse) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCActionInstant> : ModifyBase<ModifyDerive<Der, cocos2d::CCActionInstant>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCActionInstant>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCActionInstant>>::ModifyBase;
		using Base = cocos2d::CCActionInstant;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCActionInstant@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCActionInstant, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCActionInstant::copyWithZone)), Thiscall, cocos2d::CCActionInstant, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCActionInstant::update)), Thiscall, cocos2d::CCActionInstant, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCActionInstant::isDone)), Thiscall, cocos2d::CCActionInstant, isDone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCActionInstant::step)), Thiscall, cocos2d::CCActionInstant, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCActionInstant::reverse)), Thiscall, cocos2d::CCActionInstant, reverse, )
		}
	};
}
