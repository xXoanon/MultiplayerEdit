#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingCircleSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_fadeInCircle
		#define GEODE_STATICS_fadeInCircle
		GEODE_AS_STATIC_FUNCTION(fadeInCircle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInCircle
		#define GEODE_CONCEPT_CHECK_fadeInCircle
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideCircle
		#define GEODE_CONCEPT_CHECK_hideCircle
		GEODE_CONCEPT_FUNCTION_CHECK(hideCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LoadingCircleSprite> : ModifyBase<ModifyDerive<Der, LoadingCircleSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingCircleSprite>>;
		using ModifyBase<ModifyDerive<Der, LoadingCircleSprite>>::ModifyBase;
		using Base = LoadingCircleSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bc60, Default, LoadingCircleSprite, create, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bd60, Thiscall, LoadingCircleSprite, fadeInCircle, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircleSprite, hideCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircleSprite, init, float)
		}
	};
}
