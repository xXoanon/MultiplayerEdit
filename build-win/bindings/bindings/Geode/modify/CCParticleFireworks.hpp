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

	#ifndef GEODE_STATICS_createWithTotalParticles
		#define GEODE_STATICS_createWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(createWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_initWithTotalParticles
		#define GEODE_STATICS_initWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(initWithTotalParticles) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTotalParticles
		#define GEODE_CONCEPT_CHECK_createWithTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTotalParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTotalParticles
		#define GEODE_CONCEPT_CHECK_initWithTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTotalParticles) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCParticleFireworks> : ModifyBase<ModifyDerive<Der, cocos2d::CCParticleFireworks>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCParticleFireworks>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCParticleFireworks>>::ModifyBase;
		using Base = cocos2d::CCParticleFireworks;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleFireworks::create)), Default, cocos2d::CCParticleFireworks, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleFireworks::createWithTotalParticles)), Default, cocos2d::CCParticleFireworks, createWithTotalParticles, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleFireworks::initWithTotalParticles)), Thiscall, cocos2d::CCParticleFireworks, initWithTotalParticles, unsigned int)
		}
	};
}
