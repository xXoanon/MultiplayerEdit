#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSpawnPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_addRemap
		#define GEODE_STATICS_addRemap
		GEODE_AS_STATIC_FUNCTION(addRemap) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddRemap
		#define GEODE_STATICS_onAddRemap
		GEODE_AS_STATIC_FUNCTION(onAddRemap) 
	#endif

	#ifndef GEODE_STATICS_onDeleteRemap
		#define GEODE_STATICS_onDeleteRemap
		GEODE_AS_STATIC_FUNCTION(onDeleteRemap) 
	#endif

	#ifndef GEODE_STATICS_onPasteRemap
		#define GEODE_STATICS_onPasteRemap
		GEODE_AS_STATIC_FUNCTION(onPasteRemap) 
	#endif

	#ifndef GEODE_STATICS_onSelectRemap
		#define GEODE_STATICS_onSelectRemap
		GEODE_AS_STATIC_FUNCTION(onSelectRemap) 
	#endif

	#ifndef GEODE_STATICS_queueUpdateButtons
		#define GEODE_STATICS_queueUpdateButtons
		GEODE_AS_STATIC_FUNCTION(queueUpdateButtons) 
	#endif

	#ifndef GEODE_STATICS_updateRemapButtons
		#define GEODE_STATICS_updateRemapButtons
		GEODE_AS_STATIC_FUNCTION(updateRemapButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRemap
		#define GEODE_CONCEPT_CHECK_addRemap
		GEODE_CONCEPT_FUNCTION_CHECK(addRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddRemap
		#define GEODE_CONCEPT_CHECK_onAddRemap
		GEODE_CONCEPT_FUNCTION_CHECK(onAddRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteRemap
		#define GEODE_CONCEPT_CHECK_onDeleteRemap
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteRemap
		#define GEODE_CONCEPT_CHECK_onPasteRemap
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectRemap
		#define GEODE_CONCEPT_CHECK_onSelectRemap
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueUpdateButtons
		#define GEODE_CONCEPT_CHECK_queueUpdateButtons
		GEODE_CONCEPT_FUNCTION_CHECK(queueUpdateButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRemapButtons
		#define GEODE_CONCEPT_CHECK_updateRemapButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateRemapButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSpawnPopup> : ModifyBase<ModifyDerive<Der, SetupSpawnPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSpawnPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSpawnPopup>>::ModifyBase;
		using Base = SetupSpawnPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45df80, Default, SetupSpawnPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4244b0, Thiscall, SetupSpawnPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45eeb0, Thiscall, SetupSpawnPopup, addRemap, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45e0c0, Thiscall, SetupSpawnPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45ee50, Thiscall, SetupSpawnPopup, onAddRemap, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45eff0, Thiscall, SetupSpawnPopup, onDeleteRemap, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f190, Thiscall, SetupSpawnPopup, onPasteRemap, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45fa50, Thiscall, SetupSpawnPopup, onSelectRemap, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45fb20, Thiscall, SetupSpawnPopup, queueUpdateButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f230, Thiscall, SetupSpawnPopup, updateRemapButtons, float)
		}
	};
}
