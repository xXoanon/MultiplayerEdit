#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onLevel
		#define GEODE_STATICS_onLevel
		GEODE_AS_STATIC_FUNCTION(onLevel) 
	#endif

	#ifndef GEODE_STATICS_setupGauntlet
		#define GEODE_STATICS_setupGauntlet
		GEODE_AS_STATIC_FUNCTION(setupGauntlet) 
	#endif

	#ifndef GEODE_STATICS_unlockActiveItem
		#define GEODE_STATICS_unlockActiveItem
		GEODE_AS_STATIC_FUNCTION(unlockActiveItem) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFinished
		#define GEODE_CONCEPT_CHECK_loadLevelsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFailed
		#define GEODE_CONCEPT_CHECK_loadLevelsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevel
		#define GEODE_CONCEPT_CHECK_onLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGauntlet
		#define GEODE_CONCEPT_CHECK_setupGauntlet
		GEODE_CONCEPT_FUNCTION_CHECK(setupGauntlet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockActiveItem
		#define GEODE_CONCEPT_CHECK_unlockActiveItem
		GEODE_CONCEPT_FUNCTION_CHECK(unlockActiveItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletLayer> : ModifyBase<ModifyDerive<Der, GauntletLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletLayer>>;
		using ModifyBase<ModifyDerive<Der, GauntletLayer>>::ModifyBase;
		using Base = GauntletLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GauntletLayer, create, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5df0, Default, GauntletLayer, scene, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f8460, Thiscall, GauntletLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6930, Thiscall, GauntletLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6b40, Thiscall, GauntletLayer, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6140, Thiscall, GauntletLayer, init, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f8410, Thiscall, GauntletLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7d90, Thiscall, GauntletLayer, onLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f6d40, Thiscall, GauntletLayer, setupGauntlet, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7e00, Thiscall, GauntletLayer, unlockActiveItem, )
		}
	};
}
