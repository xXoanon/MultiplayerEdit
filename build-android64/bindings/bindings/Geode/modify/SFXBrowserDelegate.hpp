#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXBrowserDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_sfxBrowserClosed
		#define GEODE_CONCEPT_CHECK_sfxBrowserClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sfxBrowserClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXBrowserDelegate> : ModifyBase<ModifyDerive<Der, SFXBrowserDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXBrowserDelegate>>;
		using ModifyBase<ModifyDerive<Der, SFXBrowserDelegate>>::ModifyBase;
		using Base = SFXBrowserDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXBrowserDelegate, sfxBrowserClosed, SFXBrowser*)
		}
	};
}
