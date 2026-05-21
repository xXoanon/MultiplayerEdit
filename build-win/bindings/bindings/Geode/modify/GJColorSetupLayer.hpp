#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJColorSetupLayer.hpp>
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

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onColor
		#define GEODE_STATICS_onColor
		GEODE_AS_STATIC_FUNCTION(onColor) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_showPage
		#define GEODE_STATICS_showPage
		GEODE_AS_STATIC_FUNCTION(showPage) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteColor
		#define GEODE_STATICS_updateSpriteColor
		GEODE_AS_STATIC_FUNCTION(updateSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteColors
		#define GEODE_STATICS_updateSpriteColors
		GEODE_AS_STATIC_FUNCTION(updateSpriteColors) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onColor
		#define GEODE_CONCEPT_CHECK_onColor
		GEODE_CONCEPT_FUNCTION_CHECK(onColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPage
		#define GEODE_CONCEPT_CHECK_showPage
		GEODE_CONCEPT_FUNCTION_CHECK(showPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteColor
		#define GEODE_CONCEPT_CHECK_updateSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteColors
		#define GEODE_CONCEPT_CHECK_updateSpriteColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteColors) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJColorSetupLayer> : ModifyBase<ModifyDerive<Der, GJColorSetupLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJColorSetupLayer>>;
		using ModifyBase<ModifyDerive<Der, GJColorSetupLayer>>::ModifyBase;
		using Base = GJColorSetupLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x255f50, Default, GJColorSetupLayer, create, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256d70, Thiscall, GJColorSetupLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256ca0, Thiscall, GJColorSetupLayer, colorSelectClosed, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256090, Thiscall, GJColorSetupLayer, init, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256d20, Thiscall, GJColorSetupLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256bd0, Thiscall, GJColorSetupLayer, onColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256b80, Thiscall, GJColorSetupLayer, onPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256cb0, Thiscall, GJColorSetupLayer, showPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256a10, Thiscall, GJColorSetupLayer, updateSpriteColor, ColorChannelSprite*, cocos2d::CCLabelBMFont*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2568f0, Thiscall, GJColorSetupLayer, updateSpriteColors, )
		}
	};
}
