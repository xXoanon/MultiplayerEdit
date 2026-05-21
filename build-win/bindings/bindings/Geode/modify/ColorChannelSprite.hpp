#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorChannelSprite.hpp>
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

	#ifndef GEODE_STATICS_updateBlending
		#define GEODE_STATICS_updateBlending
		GEODE_AS_STATIC_FUNCTION(updateBlending) 
	#endif

	#ifndef GEODE_STATICS_updateCopyLabel
		#define GEODE_STATICS_updateCopyLabel
		GEODE_AS_STATIC_FUNCTION(updateCopyLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOpacity
		#define GEODE_STATICS_updateOpacity
		GEODE_AS_STATIC_FUNCTION(updateOpacity) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlending
		#define GEODE_CONCEPT_CHECK_updateBlending
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCopyLabel
		#define GEODE_CONCEPT_CHECK_updateCopyLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCopyLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacity
		#define GEODE_CONCEPT_CHECK_updateOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValues
		#define GEODE_CONCEPT_CHECK_updateValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateValues) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorChannelSprite> : ModifyBase<ModifyDerive<Der, ColorChannelSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorChannelSprite>>;
		using ModifyBase<ModifyDerive<Der, ColorChannelSprite>>::ModifyBase;
		using Base = ColorChannelSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258930, Default, ColorChannelSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2589f0, Thiscall, ColorChannelSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258d20, Thiscall, ColorChannelSprite, updateBlending, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258a10, Thiscall, ColorChannelSprite, updateCopyLabel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258bd0, Thiscall, ColorChannelSprite, updateOpacity, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorChannelSprite, updateValues, ColorAction*)
		}
	};
}
