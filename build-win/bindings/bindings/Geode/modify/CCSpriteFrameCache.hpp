#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeSharedSpriteFrameCache
		#define GEODE_STATICS_purgeSharedSpriteFrameCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_STATICS_sharedSpriteFrameCache
		#define GEODE_STATICS_sharedSpriteFrameCache
		GEODE_AS_STATIC_FUNCTION(sharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFrame
		#define GEODE_STATICS_addSpriteFrame
		GEODE_AS_STATIC_FUNCTION(addSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFramesWithDictionary
		#define GEODE_STATICS_addSpriteFramesWithDictionary
		GEODE_AS_STATIC_FUNCTION(addSpriteFramesWithDictionary) 
	#endif

	#ifndef GEODE_STATICS_addSpriteFramesWithFile
		#define GEODE_STATICS_addSpriteFramesWithFile
		GEODE_AS_STATIC_FUNCTION(addSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFrameByName
		#define GEODE_STATICS_removeSpriteFrameByName
		GEODE_AS_STATIC_FUNCTION(removeSpriteFrameByName) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFrames
		#define GEODE_STATICS_removeSpriteFrames
		GEODE_AS_STATIC_FUNCTION(removeSpriteFrames) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFramesFromDictionary
		#define GEODE_STATICS_removeSpriteFramesFromDictionary
		GEODE_AS_STATIC_FUNCTION(removeSpriteFramesFromDictionary) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFramesFromFile
		#define GEODE_STATICS_removeSpriteFramesFromFile
		GEODE_AS_STATIC_FUNCTION(removeSpriteFramesFromFile) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFramesFromTexture
		#define GEODE_STATICS_removeSpriteFramesFromTexture
		GEODE_AS_STATIC_FUNCTION(removeSpriteFramesFromTexture) 
	#endif

	#ifndef GEODE_STATICS_removeUnusedSpriteFrames
		#define GEODE_STATICS_removeUnusedSpriteFrames
		GEODE_AS_STATIC_FUNCTION(removeUnusedSpriteFrames) 
	#endif

	#ifndef GEODE_STATICS_spriteFrameByName
		#define GEODE_STATICS_spriteFrameByName
		GEODE_AS_STATIC_FUNCTION(spriteFrameByName) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_purgeSharedSpriteFrameCache
		#define GEODE_CONCEPT_CHECK_purgeSharedSpriteFrameCache
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedSpriteFrameCache
		#define GEODE_CONCEPT_CHECK_sharedSpriteFrameCache
		GEODE_CONCEPT_FUNCTION_CHECK(sharedSpriteFrameCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpriteFrame
		#define GEODE_CONCEPT_CHECK_addSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(addSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpriteFramesWithDictionary
		#define GEODE_CONCEPT_CHECK_addSpriteFramesWithDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(addSpriteFramesWithDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpriteFramesWithFile
		#define GEODE_CONCEPT_CHECK_addSpriteFramesWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(addSpriteFramesWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpriteFrameByName
		#define GEODE_CONCEPT_CHECK_removeSpriteFrameByName
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpriteFrameByName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpriteFrames
		#define GEODE_CONCEPT_CHECK_removeSpriteFrames
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpriteFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpriteFramesFromDictionary
		#define GEODE_CONCEPT_CHECK_removeSpriteFramesFromDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpriteFramesFromDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpriteFramesFromFile
		#define GEODE_CONCEPT_CHECK_removeSpriteFramesFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpriteFramesFromFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpriteFramesFromTexture
		#define GEODE_CONCEPT_CHECK_removeSpriteFramesFromTexture
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpriteFramesFromTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeUnusedSpriteFrames
		#define GEODE_CONCEPT_CHECK_removeUnusedSpriteFrames
		GEODE_CONCEPT_FUNCTION_CHECK(removeUnusedSpriteFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spriteFrameByName
		#define GEODE_CONCEPT_CHECK_spriteFrameByName
		GEODE_CONCEPT_FUNCTION_CHECK(spriteFrameByName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteFrameCache> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrameCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrameCache>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteFrameCache>>::ModifyBase;
		using Base = cocos2d::CCSpriteFrameCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSpriteFrameCache@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCSpriteFrameCache)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrameCache::purgeSharedSpriteFrameCache)), Default, cocos2d::CCSpriteFrameCache, purgeSharedSpriteFrameCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache)), Default, cocos2d::CCSpriteFrameCache, sharedSpriteFrameCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*, char const*>::func(&cocos2d::CCSpriteFrameCache::addSpriteFrame)), Thiscall, cocos2d::CCSpriteFrameCache, addSpriteFrame, cocos2d::CCSpriteFrame*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*, cocos2d::CCTexture2D*>::func(&cocos2d::CCSpriteFrameCache::addSpriteFramesWithDictionary)), Thiscall, cocos2d::CCSpriteFrameCache, addSpriteFramesWithDictionary, cocos2d::CCDictionary*, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile)), Thiscall, cocos2d::CCSpriteFrameCache, addSpriteFramesWithFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile)), Thiscall, cocos2d::CCSpriteFrameCache, addSpriteFramesWithFile, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCTexture2D*>::func(&cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile)), Thiscall, cocos2d::CCSpriteFrameCache, addSpriteFramesWithFile, char const*, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrameCache::init)), Thiscall, cocos2d::CCSpriteFrameCache, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSpriteFrameCache::removeSpriteFrameByName)), Thiscall, cocos2d::CCSpriteFrameCache, removeSpriteFrameByName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrameCache::removeSpriteFrames)), Thiscall, cocos2d::CCSpriteFrameCache, removeSpriteFrames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCSpriteFrameCache::removeSpriteFramesFromDictionary)), Thiscall, cocos2d::CCSpriteFrameCache, removeSpriteFramesFromDictionary, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile)), Thiscall, cocos2d::CCSpriteFrameCache, removeSpriteFramesFromFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSpriteFrameCache::removeSpriteFramesFromTexture)), Thiscall, cocos2d::CCSpriteFrameCache, removeSpriteFramesFromTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteFrameCache::removeUnusedSpriteFrames)), Thiscall, cocos2d::CCSpriteFrameCache, removeUnusedSpriteFrames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSpriteFrameCache::spriteFrameByName)), Thiscall, cocos2d::CCSpriteFrameCache, spriteFrameByName, char const*)
		}
	};
}
