#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectArtLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelectCustom
		#define GEODE_STATICS_onSelectCustom
		GEODE_AS_STATIC_FUNCTION(onSelectCustom) 
	#endif

	#ifndef GEODE_STATICS_selectArt
		#define GEODE_STATICS_selectArt
		GEODE_AS_STATIC_FUNCTION(selectArt) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectCustom
		#define GEODE_CONCEPT_CHECK_onSelectCustom
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectArt
		#define GEODE_CONCEPT_CHECK_selectArt
		GEODE_CONCEPT_FUNCTION_CHECK(selectArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectedCustom
		#define GEODE_CONCEPT_CHECK_updateSelectedCustom
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectedCustom) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectArtLayer> : ModifyBase<ModifyDerive<Der, SelectArtLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectArtLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectArtLayer>>::ModifyBase;
		using Base = SelectArtLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322190, Default, SelectArtLayer, create, SelectArtType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3230c0, Thiscall, SelectArtLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3222a0, Thiscall, SelectArtLayer, init, SelectArtType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323070, Thiscall, SelectArtLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322fb0, Thiscall, SelectArtLayer, onSelectCustom, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x322ef0, Thiscall, SelectArtLayer, selectArt, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectArtLayer, updateSelectedCustom, int)
		}
	};
}
