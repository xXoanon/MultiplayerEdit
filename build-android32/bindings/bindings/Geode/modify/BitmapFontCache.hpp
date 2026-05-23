#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BitmapFontCache.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeSharedFontCache
		#define GEODE_STATICS_purgeSharedFontCache
		GEODE_AS_STATIC_FUNCTION(purgeSharedFontCache) 
	#endif

	#ifndef GEODE_STATICS_sharedFontCache
		#define GEODE_STATICS_sharedFontCache
		GEODE_AS_STATIC_FUNCTION(sharedFontCache) 
	#endif

	#ifndef GEODE_STATICS_fontWithConfigFile
		#define GEODE_STATICS_fontWithConfigFile
		GEODE_AS_STATIC_FUNCTION(fontWithConfigFile) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_purgeSharedFontCache
		#define GEODE_CONCEPT_CHECK_purgeSharedFontCache
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedFontCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedFontCache
		#define GEODE_CONCEPT_CHECK_sharedFontCache
		GEODE_CONCEPT_FUNCTION_CHECK(sharedFontCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fontWithConfigFile
		#define GEODE_CONCEPT_CHECK_fontWithConfigFile
		GEODE_CONCEPT_FUNCTION_CHECK(fontWithConfigFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BitmapFontCache> : ModifyBase<ModifyDerive<Der, BitmapFontCache>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BitmapFontCache>>;
		using ModifyBase<ModifyDerive<Der, BitmapFontCache>>::ModifyBase;
		using Base = BitmapFontCache;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15BitmapFontCacheD2Ev")), Default, BitmapFontCache)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BitmapFontCache::purgeSharedFontCache)), Default, BitmapFontCache, purgeSharedFontCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BitmapFontCache::sharedFontCache)), Default, BitmapFontCache, sharedFontCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&BitmapFontCache::fontWithConfigFile)), Default, BitmapFontCache, fontWithConfigFile, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BitmapFontCache::init)), Default, BitmapFontCache, init, )
		}
	};
}
