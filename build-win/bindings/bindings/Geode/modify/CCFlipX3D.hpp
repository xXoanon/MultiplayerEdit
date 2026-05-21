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

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_initWithSize
		#define GEODE_STATICS_initWithSize
		GEODE_AS_STATIC_FUNCTION(initWithSize) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSize
		#define GEODE_CONCEPT_CHECK_initWithSize
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFlipX3D> : ModifyBase<ModifyDerive<Der, cocos2d::CCFlipX3D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFlipX3D>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFlipX3D>>::ModifyBase;
		using Base = cocos2d::CCFlipX3D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCFlipX3D::create)), Default, cocos2d::CCFlipX3D, create, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCFlipX3D::initWithDuration)), Thiscall, cocos2d::CCFlipX3D, initWithDuration, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&, float>::func(&cocos2d::CCFlipX3D::initWithSize)), Thiscall, cocos2d::CCFlipX3D, initWithSize, cocos2d::CCSize const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCFlipX3D::copyWithZone)), Thiscall, cocos2d::CCFlipX3D, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCFlipX3D::update)), Thiscall, cocos2d::CCFlipX3D, update, float)
		}
	};
}
