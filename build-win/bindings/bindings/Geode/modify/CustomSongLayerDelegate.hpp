#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongLayerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_customSongLayerClosed
		#define GEODE_CONCEPT_CHECK_customSongLayerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(customSongLayerClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongLayerDelegate> : ModifyBase<ModifyDerive<Der, CustomSongLayerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongLayerDelegate>>;
		using ModifyBase<ModifyDerive<Der, CustomSongLayerDelegate>>::ModifyBase;
		using Base = CustomSongLayerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongLayerDelegate, customSongLayerClosed, )
		}
	};
}
