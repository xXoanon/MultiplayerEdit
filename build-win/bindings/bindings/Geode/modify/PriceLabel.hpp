#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PriceLabel.hpp>
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

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setPrice
		#define GEODE_STATICS_setPrice
		GEODE_AS_STATIC_FUNCTION(setPrice) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPrice
		#define GEODE_CONCEPT_CHECK_setPrice
		GEODE_CONCEPT_FUNCTION_CHECK(setPrice) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PriceLabel> : ModifyBase<ModifyDerive<Der, PriceLabel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PriceLabel>>;
		using ModifyBase<ModifyDerive<Der, PriceLabel>>::ModifyBase;
		using Base = PriceLabel;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PriceLabel, create, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PriceLabel, init, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PriceLabel, setColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PriceLabel, setOpacity, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PriceLabel, setPrice, int)
		}
	};
}
