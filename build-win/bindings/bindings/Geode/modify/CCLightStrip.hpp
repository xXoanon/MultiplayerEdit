#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCLightStrip.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCLightStrip> : ModifyBase<ModifyDerive<Der, CCLightStrip>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCLightStrip>>;
		using ModifyBase<ModifyDerive<Der, CCLightStrip>>::ModifyBase;
		using Base = CCLightStrip;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCLightStrip, create, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43d20, Thiscall, CCLightStrip, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43ee0, Thiscall, CCLightStrip, updateTweenAction, float, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCLightStrip, init, float, float, float, float, float)
		}
	};
}
