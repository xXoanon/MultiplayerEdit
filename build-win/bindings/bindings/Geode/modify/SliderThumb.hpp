#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SliderThumb.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxOffset
		#define GEODE_CONCEPT_CHECK_setMaxOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotated
		#define GEODE_CONCEPT_CHECK_setRotated
		GEODE_CONCEPT_FUNCTION_CHECK(setRotated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValue
		#define GEODE_CONCEPT_CHECK_setValue
		GEODE_CONCEPT_FUNCTION_CHECK(setValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SliderThumb> : ModifyBase<ModifyDerive<Der, SliderThumb>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SliderThumb>>;
		using ModifyBase<ModifyDerive<Der, SliderThumb>>::ModifyBase;
		using Base = SliderThumb;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderThumb, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x712e0, Thiscall, SliderThumb, getValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderThumb, init, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderThumb, setMaxOffset, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderThumb, setRotated, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71370, Thiscall, SliderThumb, setValue, float)
		}
	};
}
