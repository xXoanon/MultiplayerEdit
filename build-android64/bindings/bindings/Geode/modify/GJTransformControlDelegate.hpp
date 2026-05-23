#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJTransformControlDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_transformScaleXChanged
		#define GEODE_CONCEPT_CHECK_transformScaleXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformScaleXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformScaleYChanged
		#define GEODE_CONCEPT_CHECK_transformScaleYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformScaleYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformScaleXYChanged
		#define GEODE_CONCEPT_CHECK_transformScaleXYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformScaleXYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRotationXChanged
		#define GEODE_CONCEPT_CHECK_transformRotationXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformRotationXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRotationYChanged
		#define GEODE_CONCEPT_CHECK_transformRotationYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformRotationYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRotationChanged
		#define GEODE_CONCEPT_CHECK_transformRotationChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformRotationChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformResetRotation
		#define GEODE_CONCEPT_CHECK_transformResetRotation
		GEODE_CONCEPT_FUNCTION_CHECK(transformResetRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformRestoreRotation
		#define GEODE_CONCEPT_CHECK_transformRestoreRotation
		GEODE_CONCEPT_FUNCTION_CHECK(transformRestoreRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformSkewXChanged
		#define GEODE_CONCEPT_CHECK_transformSkewXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformSkewXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformSkewYChanged
		#define GEODE_CONCEPT_CHECK_transformSkewYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(transformSkewYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformChangeBegin
		#define GEODE_CONCEPT_CHECK_transformChangeBegin
		GEODE_CONCEPT_FUNCTION_CHECK(transformChangeBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformChangeEnded
		#define GEODE_CONCEPT_CHECK_transformChangeEnded
		GEODE_CONCEPT_FUNCTION_CHECK(transformChangeEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTransformControl
		#define GEODE_CONCEPT_CHECK_updateTransformControl
		GEODE_CONCEPT_FUNCTION_CHECK(updateTransformControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_anchorPointMoved
		#define GEODE_CONCEPT_CHECK_anchorPointMoved
		GEODE_CONCEPT_FUNCTION_CHECK(anchorPointMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTransformNode
		#define GEODE_CONCEPT_CHECK_getTransformNode
		GEODE_CONCEPT_FUNCTION_CHECK(getTransformNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUI
		#define GEODE_CONCEPT_CHECK_getUI
		GEODE_CONCEPT_FUNCTION_CHECK(getUI) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJTransformControlDelegate> : ModifyBase<ModifyDerive<Der, GJTransformControlDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJTransformControlDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJTransformControlDelegate>>::ModifyBase;
		using Base = GJTransformControlDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformScaleXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformScaleYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformScaleXYChanged, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformRotationXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformRotationYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformRotationChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformResetRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformRestoreRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformSkewXChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformSkewYChanged, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformChangeBegin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, transformChangeEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, updateTransformControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, anchorPointMoved, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, getTransformNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControlDelegate, getUI, )
		}
	};
}
