#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCBlockLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_decrementForcePrio
		#define GEODE_CONCEPT_CHECK_decrementForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(decrementForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementForcePrio
		#define GEODE_CONCEPT_CHECK_incrementForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(incrementForcePrio) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCBlockLayer> : ModifyBase<ModifyDerive<Der, CCBlockLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCBlockLayer>>;
		using ModifyBase<ModifyDerive<Der, CCBlockLayer>>::ModifyBase;
		using Base = CCBlockLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x423d0, Thiscall, CCBlockLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x424a0, Thiscall, CCBlockLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42550, Thiscall, CCBlockLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42760, Thiscall, CCBlockLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, CCBlockLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42690, Thiscall, CCBlockLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42610, Thiscall, CCBlockLayer, enterLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x426b0, Thiscall, CCBlockLayer, exitLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x426f0, Thiscall, CCBlockLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42700, Thiscall, CCBlockLayer, hideLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42710, Thiscall, CCBlockLayer, layerVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42720, Thiscall, CCBlockLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, enterAnimFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, disableUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, enableUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, decrementForcePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCBlockLayer, incrementForcePrio, )
		}
	};
}
