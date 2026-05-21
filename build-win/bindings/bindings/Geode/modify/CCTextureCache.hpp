#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeSharedTextureCache
		#define GEODE_STATICS_purgeSharedTextureCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedTextureCache) 
	#endif

	#ifndef GEODE_STATICS_reloadAllTextures
		#define GEODE_STATICS_reloadAllTextures
		GEODE_AS_STATIC_FUNCTION(reloadAllTextures) 
	#endif

	#ifndef GEODE_STATICS_sharedTextureCache
		#define GEODE_STATICS_sharedTextureCache
		GEODE_AS_STATIC_FUNCTION(sharedTextureCache) 
	#endif

	#ifndef GEODE_STATICS_addETCImage
		#define GEODE_STATICS_addETCImage
		GEODE_AS_STATIC_FUNCTION(addETCImage) 
	#endif

	#ifndef GEODE_STATICS_addImage
		#define GEODE_STATICS_addImage
		GEODE_AS_STATIC_FUNCTION(addImage) 
	#endif

	#ifndef GEODE_STATICS_addImageAsync
		#define GEODE_STATICS_addImageAsync
		GEODE_AS_STATIC_FUNCTION(addImageAsync) 
	#endif

	#ifndef GEODE_STATICS_addImageAsyncCallBack
		#define GEODE_STATICS_addImageAsyncCallBack
		GEODE_AS_STATIC_FUNCTION(addImageAsyncCallBack) 
	#endif

	#ifndef GEODE_STATICS_addPVRImage
		#define GEODE_STATICS_addPVRImage
		GEODE_AS_STATIC_FUNCTION(addPVRImage) 
	#endif

	#ifndef GEODE_STATICS_addUIImage
		#define GEODE_STATICS_addUIImage
		GEODE_AS_STATIC_FUNCTION(addUIImage) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_dumpCachedTextureInfo
		#define GEODE_STATICS_dumpCachedTextureInfo
		GEODE_AS_STATIC_FUNCTION(dumpCachedTextureInfo) 
	#endif

	#ifndef GEODE_STATICS_prepareAsyncLoading
		#define GEODE_STATICS_prepareAsyncLoading
		GEODE_AS_STATIC_FUNCTION(prepareAsyncLoading) 
	#endif

	#ifndef GEODE_STATICS_reloadTexture
		#define GEODE_STATICS_reloadTexture
		GEODE_AS_STATIC_FUNCTION(reloadTexture) 
	#endif

	#ifndef GEODE_STATICS_removeAllTextures
		#define GEODE_STATICS_removeAllTextures
		GEODE_AS_STATIC_FUNCTION(removeAllTextures) 
	#endif

	#ifndef GEODE_STATICS_removeTexture
		#define GEODE_STATICS_removeTexture
		GEODE_AS_STATIC_FUNCTION(removeTexture) 
	#endif

	#ifndef GEODE_STATICS_removeTextureForKey
		#define GEODE_STATICS_removeTextureForKey
		GEODE_AS_STATIC_FUNCTION(removeTextureForKey) 
	#endif

	#ifndef GEODE_STATICS_removeUnusedTextures
		#define GEODE_STATICS_removeUnusedTextures
		GEODE_AS_STATIC_FUNCTION(removeUnusedTextures) 
	#endif

	#ifndef GEODE_STATICS_snapshotTextures
		#define GEODE_STATICS_snapshotTextures
		GEODE_AS_STATIC_FUNCTION(snapshotTextures) 
	#endif

	#ifndef GEODE_STATICS_textureForKey
		#define GEODE_STATICS_textureForKey
		GEODE_AS_STATIC_FUNCTION(textureForKey) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_purgeSharedTextureCache
		#define GEODE_CONCEPT_CHECK_purgeSharedTextureCache
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedTextureCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllTextures
		#define GEODE_CONCEPT_CHECK_reloadAllTextures
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllTextures) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedTextureCache
		#define GEODE_CONCEPT_CHECK_sharedTextureCache
		GEODE_CONCEPT_FUNCTION_CHECK(sharedTextureCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addETCImage
		#define GEODE_CONCEPT_CHECK_addETCImage
		GEODE_CONCEPT_FUNCTION_CHECK(addETCImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addImage
		#define GEODE_CONCEPT_CHECK_addImage
		GEODE_CONCEPT_FUNCTION_CHECK(addImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addImageAsync
		#define GEODE_CONCEPT_CHECK_addImageAsync
		GEODE_CONCEPT_FUNCTION_CHECK(addImageAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addImageAsyncCallBack
		#define GEODE_CONCEPT_CHECK_addImageAsyncCallBack
		GEODE_CONCEPT_FUNCTION_CHECK(addImageAsyncCallBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPVRImage
		#define GEODE_CONCEPT_CHECK_addPVRImage
		GEODE_CONCEPT_FUNCTION_CHECK(addPVRImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addUIImage
		#define GEODE_CONCEPT_CHECK_addUIImage
		GEODE_CONCEPT_FUNCTION_CHECK(addUIImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dumpCachedTextureInfo
		#define GEODE_CONCEPT_CHECK_dumpCachedTextureInfo
		GEODE_CONCEPT_FUNCTION_CHECK(dumpCachedTextureInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareAsyncLoading
		#define GEODE_CONCEPT_CHECK_prepareAsyncLoading
		GEODE_CONCEPT_FUNCTION_CHECK(prepareAsyncLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadTexture
		#define GEODE_CONCEPT_CHECK_reloadTexture
		GEODE_CONCEPT_FUNCTION_CHECK(reloadTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllTextures
		#define GEODE_CONCEPT_CHECK_removeAllTextures
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllTextures) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTexture
		#define GEODE_CONCEPT_CHECK_removeTexture
		GEODE_CONCEPT_FUNCTION_CHECK(removeTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTextureForKey
		#define GEODE_CONCEPT_CHECK_removeTextureForKey
		GEODE_CONCEPT_FUNCTION_CHECK(removeTextureForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeUnusedTextures
		#define GEODE_CONCEPT_CHECK_removeUnusedTextures
		GEODE_CONCEPT_FUNCTION_CHECK(removeUnusedTextures) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_snapshotTextures
		#define GEODE_CONCEPT_CHECK_snapshotTextures
		GEODE_CONCEPT_FUNCTION_CHECK(snapshotTextures) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textureForKey
		#define GEODE_CONCEPT_CHECK_textureForKey
		GEODE_CONCEPT_FUNCTION_CHECK(textureForKey) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTextureCache> : ModifyBase<ModifyDerive<Der, cocos2d::CCTextureCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTextureCache>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTextureCache>>::ModifyBase;
		using Base = cocos2d::CCTextureCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTextureCache@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTextureCache, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTextureCache@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTextureCache)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::purgeSharedTextureCache)), Default, cocos2d::CCTextureCache, purgeSharedTextureCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::reloadAllTextures)), Default, cocos2d::CCTextureCache, reloadAllTextures, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::sharedTextureCache)), Default, cocos2d::CCTextureCache, sharedTextureCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTextureCache::addETCImage)), Thiscall, cocos2d::CCTextureCache, addETCImage, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCTextureCache::addImage)), Thiscall, cocos2d::CCTextureCache, addImage, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, int, cocos2d::CCTexture2DPixelFormat>::func(&cocos2d::CCTextureCache::addImageAsync)), Thiscall, cocos2d::CCTextureCache, addImageAsync, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, int, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCTextureCache::addImageAsyncCallBack)), Thiscall, cocos2d::CCTextureCache, addImageAsyncCallBack, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTextureCache::addPVRImage)), Thiscall, cocos2d::CCTextureCache, addPVRImage, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCImage*, char const*>::func(&cocos2d::CCTextureCache::addUIImage)), Thiscall, cocos2d::CCTextureCache, addUIImage, cocos2d::CCImage*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::description)), Thiscall, cocos2d::CCTextureCache, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::dumpCachedTextureInfo)), Thiscall, cocos2d::CCTextureCache, dumpCachedTextureInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::prepareAsyncLoading)), Thiscall, cocos2d::CCTextureCache, prepareAsyncLoading, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTextureCache::reloadTexture)), Thiscall, cocos2d::CCTextureCache, reloadTexture, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::removeAllTextures)), Thiscall, cocos2d::CCTextureCache, removeAllTextures, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCTextureCache::removeTexture)), Thiscall, cocos2d::CCTextureCache, removeTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTextureCache::removeTextureForKey)), Thiscall, cocos2d::CCTextureCache, removeTextureForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::removeUnusedTextures)), Thiscall, cocos2d::CCTextureCache, removeUnusedTextures, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTextureCache::snapshotTextures)), Thiscall, cocos2d::CCTextureCache, snapshotTextures, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTextureCache::textureForKey)), Thiscall, cocos2d::CCTextureCache, textureForKey, char const*)
		}
	};
}
