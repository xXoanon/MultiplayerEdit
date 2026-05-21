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

	#ifndef GEODE_STATICS_createWithArray
		#define GEODE_STATICS_createWithArray
		GEODE_AS_STATIC_FUNCTION(createWithArray) 
	#endif

	#ifndef GEODE_STATICS_createWithLayer
		#define GEODE_STATICS_createWithLayer
		GEODE_AS_STATIC_FUNCTION(createWithLayer) 
	#endif

	#ifndef GEODE_STATICS_addLayer
		#define GEODE_STATICS_addLayer
		GEODE_AS_STATIC_FUNCTION(addLayer) 
	#endif

	#ifndef GEODE_STATICS_initWithArray
		#define GEODE_STATICS_initWithArray
		GEODE_AS_STATIC_FUNCTION(initWithArray) 
	#endif

	#ifndef GEODE_STATICS_initWithLayers
		#define GEODE_STATICS_initWithLayers
		GEODE_AS_STATIC_FUNCTION(initWithLayers) 
	#endif

	#ifndef GEODE_STATICS_switchTo
		#define GEODE_STATICS_switchTo
		GEODE_AS_STATIC_FUNCTION(switchTo) 
	#endif

	#ifndef GEODE_STATICS_switchToAndReleaseMe
		#define GEODE_STATICS_switchToAndReleaseMe
		GEODE_AS_STATIC_FUNCTION(switchToAndReleaseMe) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithArray
		#define GEODE_CONCEPT_CHECK_createWithArray
		GEODE_CONCEPT_FUNCTION_CHECK(createWithArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithLayer
		#define GEODE_CONCEPT_CHECK_createWithLayer
		GEODE_CONCEPT_FUNCTION_CHECK(createWithLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addLayer
		#define GEODE_CONCEPT_CHECK_addLayer
		GEODE_CONCEPT_FUNCTION_CHECK(addLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithArray
		#define GEODE_CONCEPT_CHECK_initWithArray
		GEODE_CONCEPT_FUNCTION_CHECK(initWithArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithLayers
		#define GEODE_CONCEPT_CHECK_initWithLayers
		GEODE_CONCEPT_FUNCTION_CHECK(initWithLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchTo
		#define GEODE_CONCEPT_CHECK_switchTo
		GEODE_CONCEPT_FUNCTION_CHECK(switchTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToAndReleaseMe
		#define GEODE_CONCEPT_CHECK_switchToAndReleaseMe
		GEODE_CONCEPT_FUNCTION_CHECK(switchToAndReleaseMe) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayerMultiplex> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayerMultiplex>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayerMultiplex>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayerMultiplex>>::ModifyBase;
		using Base = cocos2d::CCLayerMultiplex;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCLayerMultiplex@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCLayerMultiplex, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCLayerMultiplex@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCLayerMultiplex)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLayerMultiplex::create)), Default, cocos2d::CCLayerMultiplex, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCLayerMultiplex::createWithArray)), Default, cocos2d::CCLayerMultiplex, createWithArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCLayer*>::func(&cocos2d::CCLayerMultiplex::createWithLayer)), Default, cocos2d::CCLayerMultiplex, createWithLayer, cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCLayer*>::func(&cocos2d::CCLayerMultiplex::addLayer)), Thiscall, cocos2d::CCLayerMultiplex, addLayer, cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCLayerMultiplex::initWithArray)), Thiscall, cocos2d::CCLayerMultiplex, initWithArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCLayer*, va_list>::func(&cocos2d::CCLayerMultiplex::initWithLayers)), Thiscall, cocos2d::CCLayerMultiplex, initWithLayers, cocos2d::CCLayer*, va_list)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCLayerMultiplex::switchTo)), Thiscall, cocos2d::CCLayerMultiplex, switchTo, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCLayerMultiplex::switchToAndReleaseMe)), Thiscall, cocos2d::CCLayerMultiplex, switchToAndReleaseMe, unsigned int)
		}
	};
}
