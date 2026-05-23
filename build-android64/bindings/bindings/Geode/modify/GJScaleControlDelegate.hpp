#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJScaleControlDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_scaleXChanged
		#define GEODE_CONCEPT_CHECK_scaleXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleYChanged
		#define GEODE_CONCEPT_CHECK_scaleYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleXYChanged
		#define GEODE_CONCEPT_CHECK_scaleXYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(scaleXYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeBegin
		#define GEODE_CONCEPT_CHECK_scaleChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleChangeEnded
		#define GEODE_CONCEPT_CHECK_scaleChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(scaleChangeEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScaleControl
		#define GEODE_CONCEPT_CHECK_updateScaleControl
		GEODE_CONCEPT_FUNCTION_CHECK(updateScaleControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_anchorPointMoved
		#define GEODE_CONCEPT_CHECK_anchorPointMoved
		GEODE_CONCEPT_FUNCTION_CHECK(anchorPointMoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJScaleControlDelegate> : ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJScaleControlDelegate>>::ModifyBase;
		using Base = GJScaleControlDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControlDelegate, scaleXChanged, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControlDelegate, scaleYChanged, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControlDelegate, scaleXYChanged, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControlDelegate, scaleChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControlDelegate, scaleChangeEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControlDelegate, updateScaleControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControlDelegate, anchorPointMoved, cocos2d::CCPoint)
		}
	};
}
