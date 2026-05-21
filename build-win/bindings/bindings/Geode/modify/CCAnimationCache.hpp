#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeSharedAnimationCache
		#define GEODE_STATICS_purgeSharedAnimationCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedAnimationCache) 
	#endif

	#ifndef GEODE_STATICS_sharedAnimationCache
		#define GEODE_STATICS_sharedAnimationCache
		GEODE_AS_STATIC_FUNCTION(sharedAnimationCache) 
	#endif

	#ifndef GEODE_STATICS_addAnimation
		#define GEODE_STATICS_addAnimation
		GEODE_AS_STATIC_FUNCTION(addAnimation) 
	#endif

	#ifndef GEODE_STATICS_addAnimationsWithDictionary
		#define GEODE_STATICS_addAnimationsWithDictionary
		GEODE_AS_STATIC_FUNCTION(addAnimationsWithDictionary) 
	#endif

	#ifndef GEODE_STATICS_addAnimationsWithFile
		#define GEODE_STATICS_addAnimationsWithFile
		GEODE_AS_STATIC_FUNCTION(addAnimationsWithFile) 
	#endif

	#ifndef GEODE_STATICS_animationByName
		#define GEODE_STATICS_animationByName
		GEODE_AS_STATIC_FUNCTION(animationByName) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_parseVersion1
		#define GEODE_STATICS_parseVersion1
		GEODE_AS_STATIC_FUNCTION(parseVersion1) 
	#endif

	#ifndef GEODE_STATICS_parseVersion2
		#define GEODE_STATICS_parseVersion2
		GEODE_AS_STATIC_FUNCTION(parseVersion2) 
	#endif

	#ifndef GEODE_STATICS_removeAnimationByName
		#define GEODE_STATICS_removeAnimationByName
		GEODE_AS_STATIC_FUNCTION(removeAnimationByName) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_purgeSharedAnimationCache
		#define GEODE_CONCEPT_CHECK_purgeSharedAnimationCache
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedAnimationCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedAnimationCache
		#define GEODE_CONCEPT_CHECK_sharedAnimationCache
		GEODE_CONCEPT_FUNCTION_CHECK(sharedAnimationCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAnimation
		#define GEODE_CONCEPT_CHECK_addAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(addAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAnimationsWithDictionary
		#define GEODE_CONCEPT_CHECK_addAnimationsWithDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(addAnimationsWithDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAnimationsWithFile
		#define GEODE_CONCEPT_CHECK_addAnimationsWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(addAnimationsWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationByName
		#define GEODE_CONCEPT_CHECK_animationByName
		GEODE_CONCEPT_FUNCTION_CHECK(animationByName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseVersion1
		#define GEODE_CONCEPT_CHECK_parseVersion1
		GEODE_CONCEPT_FUNCTION_CHECK(parseVersion1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseVersion2
		#define GEODE_CONCEPT_CHECK_parseVersion2
		GEODE_CONCEPT_FUNCTION_CHECK(parseVersion2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAnimationByName
		#define GEODE_CONCEPT_CHECK_removeAnimationByName
		GEODE_CONCEPT_FUNCTION_CHECK(removeAnimationByName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCAnimationCache> : ModifyBase<ModifyDerive<Der, cocos2d::CCAnimationCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCAnimationCache>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCAnimationCache>>::ModifyBase;
		using Base = cocos2d::CCAnimationCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCAnimationCache@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCAnimationCache, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCAnimationCache@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCAnimationCache)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAnimationCache::purgeSharedAnimationCache)), Default, cocos2d::CCAnimationCache, purgeSharedAnimationCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAnimationCache::sharedAnimationCache)), Default, cocos2d::CCAnimationCache, sharedAnimationCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAnimation*, const char*>::func(&cocos2d::CCAnimationCache::addAnimation)), Thiscall, cocos2d::CCAnimationCache, addAnimation, cocos2d::CCAnimation*, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*, const char*>::func(&cocos2d::CCAnimationCache::addAnimationsWithDictionary)), Thiscall, cocos2d::CCAnimationCache, addAnimationsWithDictionary, cocos2d::CCDictionary*, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&cocos2d::CCAnimationCache::addAnimationsWithFile)), Thiscall, cocos2d::CCAnimationCache, addAnimationsWithFile, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&cocos2d::CCAnimationCache::animationByName)), Thiscall, cocos2d::CCAnimationCache, animationByName, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAnimationCache::init)), Thiscall, cocos2d::CCAnimationCache, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCAnimationCache::parseVersion1)), Thiscall, cocos2d::CCAnimationCache, parseVersion1, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCAnimationCache::parseVersion2)), Thiscall, cocos2d::CCAnimationCache, parseVersion2, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<const char*>::func(&cocos2d::CCAnimationCache::removeAnimationByName)), Thiscall, cocos2d::CCAnimationCache, removeAnimationByName, const char*)
		}
	};
}
