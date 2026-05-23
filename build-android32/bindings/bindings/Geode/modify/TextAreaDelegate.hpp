#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextAreaDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_fadeInTextFinished
		#define GEODE_CONCEPT_CHECK_fadeInTextFinished
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInTextFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextAreaDelegate> : ModifyBase<ModifyDerive<Der, TextAreaDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextAreaDelegate>>;
		using ModifyBase<ModifyDerive<Der, TextAreaDelegate>>::ModifyBase;
		using Base = TextAreaDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextAreaDelegate, fadeInTextFinished, TextArea*)
		}
	};
}
