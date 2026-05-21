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

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCAnimationFrame> : ModifyBase<ModifyDerive<Der, cocos2d::CCAnimationFrame>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCAnimationFrame>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCAnimationFrame>>::ModifyBase;
		using Base = cocos2d::CCAnimationFrame;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCAnimationFrame@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCAnimationFrame, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCAnimationFrame@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCAnimationFrame)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCAnimationFrame::copyWithZone)), Thiscall, cocos2d::CCAnimationFrame, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*, float, cocos2d::CCDictionary*>::func(&cocos2d::CCAnimationFrame::initWithSpriteFrame)), Thiscall, cocos2d::CCAnimationFrame, initWithSpriteFrame, cocos2d::CCSpriteFrame*, float, cocos2d::CCDictionary*)
		}
	};
}
