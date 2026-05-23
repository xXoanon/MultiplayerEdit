#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SliderDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_sliderBegan
		#define GEODE_CONCEPT_CHECK_sliderBegan
		GEODE_CONCEPT_FUNCTION_CHECK(sliderBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderEnded
		#define GEODE_CONCEPT_CHECK_sliderEnded
		GEODE_CONCEPT_FUNCTION_CHECK(sliderEnded) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SliderDelegate> : ModifyBase<ModifyDerive<Der, SliderDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SliderDelegate>>;
		using ModifyBase<ModifyDerive<Der, SliderDelegate>>::ModifyBase;
		using Base = SliderDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderDelegate, sliderBegan, Slider*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderDelegate, sliderEnded, Slider*)
		}
	};
}
