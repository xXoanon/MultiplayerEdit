#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BitmapFontCache.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_fontWithConfigFile
		#define GEODE_STATICS_fontWithConfigFile
		GEODE_AS_STATIC_FUNCTION(fontWithConfigFile) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BitmapFontCache, purgeSharedFontCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BitmapFontCache, sharedFontCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b3c0, Thiscall, BitmapFontCache, fontWithConfigFile, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BitmapFontCache, init, )
		}
	};
}
