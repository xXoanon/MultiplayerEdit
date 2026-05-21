#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupArtSwitchPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onArt
		#define GEODE_STATICS_onArt
		GEODE_AS_STATIC_FUNCTION(onArt) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectArtClosed
		#define GEODE_CONCEPT_CHECK_selectArtClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectArtClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArt
		#define GEODE_CONCEPT_CHECK_onArt
		GEODE_CONCEPT_FUNCTION_CHECK(onArt) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupArtSwitchPopup> : ModifyBase<ModifyDerive<Der, SetupArtSwitchPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupArtSwitchPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupArtSwitchPopup>>::ModifyBase;
		using Base = SetupArtSwitchPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x471780, Default, SetupArtSwitchPopup, create, ArtTriggerGameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x472440, Thiscall, SetupArtSwitchPopup, selectArtClosed, SelectArtLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x471a40, Thiscall, SetupArtSwitchPopup, init, ArtTriggerGameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4723f0, Thiscall, SetupArtSwitchPopup, onArt, cocos2d::CCObject*)
		}
	};
}
