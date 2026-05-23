#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCScrollLayerExtDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		#define GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		#define GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchBegin
		#define GEODE_CONCEPT_CHECK_scrollViewTouchBegin
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchEnd
		#define GEODE_CONCEPT_CHECK_scrollViewTouchEnd
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchEnd) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCScrollLayerExtDelegate> : ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>;
		using ModifyBase<ModifyDerive<Der, CCScrollLayerExtDelegate>>::ModifyBase;
		using Base = CCScrollLayerExtDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCScrollLayerExtDelegate, scrllViewWillBeginDecelerating, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCScrollLayerExtDelegate, scrollViewDidEndDecelerating, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCScrollLayerExtDelegate, scrollViewTouchMoving, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCScrollLayerExtDelegate, scrollViewDidEndMoving, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCScrollLayerExtDelegate, scrollViewTouchBegin, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCScrollLayerExtDelegate, scrollViewTouchEnd, CCScrollLayerExt*)
		}
	};
}
