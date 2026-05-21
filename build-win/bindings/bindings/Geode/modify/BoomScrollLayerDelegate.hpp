#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_scrollLayerScrollingStarted
		#define GEODE_CONCEPT_CHECK_scrollLayerScrollingStarted
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerScrollingStarted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerMoved
		#define GEODE_CONCEPT_CHECK_scrollLayerMoved
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerWillScrollToPage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BoomScrollLayerDelegate> : ModifyBase<ModifyDerive<Der, BoomScrollLayerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomScrollLayerDelegate>>;
		using ModifyBase<ModifyDerive<Der, BoomScrollLayerDelegate>>::ModifyBase;
		using Base = BoomScrollLayerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayerDelegate, scrollLayerScrollingStarted, BoomScrollLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayerDelegate, scrollLayerScrolledToPage, BoomScrollLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayerDelegate, scrollLayerMoved, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayerDelegate, scrollLayerWillScrollToPage, BoomScrollLayer*, int)
		}
	};
}
