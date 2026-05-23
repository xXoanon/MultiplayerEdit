#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongPlaybackDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongPlaybackDelegate> : ModifyBase<ModifyDerive<Der, SongPlaybackDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongPlaybackDelegate>>;
		using ModifyBase<ModifyDerive<Der, SongPlaybackDelegate>>::ModifyBase;
		using Base = SongPlaybackDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongPlaybackDelegate, onPlayback, SongInfoObject*)
		}
	};
}
