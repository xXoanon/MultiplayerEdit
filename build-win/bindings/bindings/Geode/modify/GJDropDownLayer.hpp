#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDropDownLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_enterLayer
		#define GEODE_STATICS_enterLayer
		GEODE_AS_STATIC_FUNCTION(enterLayer) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_hideLayer
		#define GEODE_STATICS_hideLayer
		GEODE_AS_STATIC_FUNCTION(hideLayer) 
	#endif

	#ifndef GEODE_STATICS_layerVisible
		#define GEODE_STATICS_layerVisible
		GEODE_AS_STATIC_FUNCTION(layerVisible) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_disableUI
		#define GEODE_STATICS_disableUI
		GEODE_AS_STATIC_FUNCTION(disableUI) 
	#endif

	#ifndef GEODE_STATICS_enableUI
		#define GEODE_STATICS_enableUI
		GEODE_AS_STATIC_FUNCTION(enableUI) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterLayer
		#define GEODE_CONCEPT_CHECK_enterLayer
		GEODE_CONCEPT_FUNCTION_CHECK(enterLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLayer
		#define GEODE_CONCEPT_CHECK_exitLayer
		GEODE_CONCEPT_FUNCTION_CHECK(exitLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLayer
		#define GEODE_CONCEPT_CHECK_showLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideLayer
		#define GEODE_CONCEPT_CHECK_hideLayer
		GEODE_CONCEPT_FUNCTION_CHECK(hideLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerVisible
		#define GEODE_CONCEPT_CHECK_layerVisible
		GEODE_CONCEPT_FUNCTION_CHECK(layerVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerHidden
		#define GEODE_CONCEPT_CHECK_layerHidden
		GEODE_CONCEPT_FUNCTION_CHECK(layerHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterAnimFinished
		#define GEODE_CONCEPT_CHECK_enterAnimFinished
		GEODE_CONCEPT_FUNCTION_CHECK(enterAnimFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableUI
		#define GEODE_CONCEPT_CHECK_disableUI
		GEODE_CONCEPT_FUNCTION_CHECK(disableUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableUI
		#define GEODE_CONCEPT_CHECK_enableUI
		GEODE_CONCEPT_FUNCTION_CHECK(enableUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJDropDownLayer> : ModifyBase<ModifyDerive<Der, GJDropDownLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDropDownLayer>>;
		using ModifyBase<ModifyDerive<Der, GJDropDownLayer>>::ModifyBase;
		using Base = GJDropDownLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x7d230, Thiscall, GJDropDownLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x256dd0, Thiscall, GJDropDownLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, create, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, create, const char*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42760, Thiscall, GJDropDownLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, GJDropDownLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257300, Thiscall, GJDropDownLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42610, Thiscall, GJDropDownLayer, enterLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257320, Thiscall, GJDropDownLayer, exitLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257360, Thiscall, GJDropDownLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2574b0, Thiscall, GJDropDownLayer, hideLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42710, Thiscall, GJDropDownLayer, layerVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257600, Thiscall, GJDropDownLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, enterAnimFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2572c0, Thiscall, GJDropDownLayer, disableUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2572e0, Thiscall, GJDropDownLayer, enableUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDropDownLayer, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256e80, Thiscall, GJDropDownLayer, init, char const*, float, bool)
		}
	};
}
