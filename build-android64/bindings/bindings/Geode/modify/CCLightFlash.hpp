#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCLightFlash.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_cleanupFlash
		#define GEODE_STATICS_cleanupFlash
		GEODE_AS_STATIC_FUNCTION(cleanupFlash) 
	#endif

	#ifndef GEODE_STATICS_fadeAndRemove
		#define GEODE_STATICS_fadeAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeAndRemove) 
	#endif

	#ifndef GEODE_STATICS_playEffect
		#define GEODE_STATICS_playEffect
		GEODE_AS_STATIC_FUNCTION(playEffect) 
	#endif

	#ifndef GEODE_STATICS_removeLights
		#define GEODE_STATICS_removeLights
		GEODE_AS_STATIC_FUNCTION(removeLights) 
	#endif

	#ifndef GEODE_STATICS_showFlash
		#define GEODE_STATICS_showFlash
		GEODE_AS_STATIC_FUNCTION(showFlash) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cleanupFlash
		#define GEODE_CONCEPT_CHECK_cleanupFlash
		GEODE_CONCEPT_FUNCTION_CHECK(cleanupFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeAndRemove
		#define GEODE_CONCEPT_CHECK_fadeAndRemove
		GEODE_CONCEPT_FUNCTION_CHECK(fadeAndRemove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEffect
		#define GEODE_CONCEPT_CHECK_playEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLights
		#define GEODE_CONCEPT_CHECK_removeLights
		GEODE_CONCEPT_FUNCTION_CHECK(removeLights) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFlash
		#define GEODE_CONCEPT_CHECK_showFlash
		GEODE_CONCEPT_FUNCTION_CHECK(showFlash) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCLightFlash> : ModifyBase<ModifyDerive<Der, CCLightFlash>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCLightFlash>>;
		using ModifyBase<ModifyDerive<Der, CCLightFlash>>::ModifyBase;
		using Base = CCLightFlash;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12CCLightFlashD2Ev")), Default, CCLightFlash)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCLightFlash::create)), Default, CCLightFlash, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCLightFlash::init)), Default, CCLightFlash, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCLightFlash::cleanupFlash)), Default, CCLightFlash, cleanupFlash, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCLightFlash::fadeAndRemove)), Default, CCLightFlash, fadeAndRemove, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float>::func(&CCLightFlash::playEffect)), Default, CCLightFlash, playEffect, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCLightFlash::removeLights)), Default, CCLightFlash, removeLights, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCLightFlash::showFlash)), Default, CCLightFlash, showFlash, )
		}
	};
}
