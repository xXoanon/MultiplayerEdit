#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OBB2D.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_calculateWithCenter
		#define GEODE_STATICS_calculateWithCenter
		GEODE_AS_STATIC_FUNCTION(calculateWithCenter) 
	#endif

	#ifndef GEODE_STATICS_getBoundingRect
		#define GEODE_STATICS_getBoundingRect
		GEODE_AS_STATIC_FUNCTION(getBoundingRect) 
	#endif

	#ifndef GEODE_STATICS_orderCorners
		#define GEODE_STATICS_orderCorners
		GEODE_AS_STATIC_FUNCTION(orderCorners) 
	#endif

	#ifndef GEODE_STATICS_overlaps1Way
		#define GEODE_STATICS_overlaps1Way
		GEODE_AS_STATIC_FUNCTION(overlaps1Way) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateWithCenter
		#define GEODE_CONCEPT_CHECK_calculateWithCenter
		GEODE_CONCEPT_FUNCTION_CHECK(calculateWithCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_computeAxes
		#define GEODE_CONCEPT_CHECK_computeAxes
		GEODE_CONCEPT_FUNCTION_CHECK(computeAxes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoundingRect
		#define GEODE_CONCEPT_CHECK_getBoundingRect
		GEODE_CONCEPT_FUNCTION_CHECK(getBoundingRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderCorners
		#define GEODE_CONCEPT_CHECK_orderCorners
		GEODE_CONCEPT_FUNCTION_CHECK(orderCorners) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_overlaps
		#define GEODE_CONCEPT_CHECK_overlaps
		GEODE_CONCEPT_FUNCTION_CHECK(overlaps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_overlaps1Way
		#define GEODE_CONCEPT_CHECK_overlaps1Way
		GEODE_CONCEPT_FUNCTION_CHECK(overlaps1Way) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OBB2D> : ModifyBase<ModifyDerive<Der, OBB2D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OBB2D>>;
		using ModifyBase<ModifyDerive<Der, OBB2D>>::ModifyBase;
		using Base = OBB2D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d8b0, Default, OBB2D, create, cocos2d::CCPoint, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6da80, Thiscall, OBB2D, calculateWithCenter, cocos2d::CCPoint, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OBB2D, computeAxes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e270, Thiscall, OBB2D, getBoundingRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OBB2D, init, cocos2d::CCPoint, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6dda0, Thiscall, OBB2D, orderCorners, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OBB2D, overlaps, OBB2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6e130, Thiscall, OBB2D, overlaps1Way, OBB2D*)
		}
	};
}
