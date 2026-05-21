#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicBrowserDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_musicBrowserClosed
		#define GEODE_CONCEPT_CHECK_musicBrowserClosed
		GEODE_CONCEPT_FUNCTION_CHECK(musicBrowserClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicBrowserDelegate> : ModifyBase<ModifyDerive<Der, MusicBrowserDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicBrowserDelegate>>;
		using ModifyBase<ModifyDerive<Der, MusicBrowserDelegate>>::ModifyBase;
		using Base = MusicBrowserDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicBrowserDelegate, musicBrowserClosed, MusicBrowser*)
		}
	};
}
