#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/WorldSelectLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerWillScrollToPage
		#define GEODE_STATICS_scrollLayerWillScrollToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerWillScrollToPage) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerScrolledToPage
		#define GEODE_STATICS_scrollLayerScrolledToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerMoved
		#define GEODE_STATICS_scrollLayerMoved
		GEODE_AS_STATIC_FUNCTION(scrollLayerMoved) 
	#endif

	#ifndef GEODE_STATICS_animateInActiveIsland
		#define GEODE_STATICS_animateInActiveIsland
		GEODE_AS_STATIC_FUNCTION(animateInActiveIsland) 
	#endif

	#ifndef GEODE_STATICS_colorForPage
		#define GEODE_STATICS_colorForPage
		GEODE_AS_STATIC_FUNCTION(colorForPage) 
	#endif

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onFreeLevels
		#define GEODE_STATICS_onFreeLevels
		GEODE_AS_STATIC_FUNCTION(onFreeLevels) 
	#endif

	#ifndef GEODE_STATICS_onGarage
		#define GEODE_STATICS_onGarage
		GEODE_AS_STATIC_FUNCTION(onGarage) 
	#endif

	#ifndef GEODE_STATICS_onNext
		#define GEODE_STATICS_onNext
		GEODE_AS_STATIC_FUNCTION(onNext) 
	#endif

	#ifndef GEODE_STATICS_onPrev
		#define GEODE_STATICS_onPrev
		GEODE_AS_STATIC_FUNCTION(onPrev) 
	#endif

	#ifndef GEODE_STATICS_setupWorlds
		#define GEODE_STATICS_setupWorlds
		GEODE_AS_STATIC_FUNCTION(setupWorlds) 
	#endif

	#ifndef GEODE_STATICS_showCompleteDialog
		#define GEODE_STATICS_showCompleteDialog
		GEODE_AS_STATIC_FUNCTION(showCompleteDialog) 
	#endif

	#ifndef GEODE_STATICS_tryShowAd
		#define GEODE_STATICS_tryShowAd
		GEODE_AS_STATIC_FUNCTION(tryShowAd) 
	#endif

	#ifndef GEODE_STATICS_unblockButtons
		#define GEODE_STATICS_unblockButtons
		GEODE_AS_STATIC_FUNCTION(unblockButtons) 
	#endif

	#ifndef GEODE_STATICS_updateArrows
		#define GEODE_STATICS_updateArrows
		GEODE_AS_STATIC_FUNCTION(updateArrows) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerWillScrollToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerMoved
		#define GEODE_CONCEPT_CHECK_scrollLayerMoved
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInActiveIsland
		#define GEODE_CONCEPT_CHECK_animateInActiveIsland
		GEODE_CONCEPT_FUNCTION_CHECK(animateInActiveIsland) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForPage
		#define GEODE_CONCEPT_CHECK_colorForPage
		GEODE_CONCEPT_FUNCTION_CHECK(colorForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorValue
		#define GEODE_CONCEPT_CHECK_getColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(getColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFreeLevels
		#define GEODE_CONCEPT_CHECK_onFreeLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onFreeLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGarage
		#define GEODE_CONCEPT_CHECK_onGarage
		GEODE_CONCEPT_FUNCTION_CHECK(onGarage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNext
		#define GEODE_CONCEPT_CHECK_onNext
		GEODE_CONCEPT_FUNCTION_CHECK(onNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrev
		#define GEODE_CONCEPT_CHECK_onPrev
		GEODE_CONCEPT_FUNCTION_CHECK(onPrev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupWorlds
		#define GEODE_CONCEPT_CHECK_setupWorlds
		GEODE_CONCEPT_FUNCTION_CHECK(setupWorlds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompleteDialog
		#define GEODE_CONCEPT_CHECK_showCompleteDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showCompleteDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowAd
		#define GEODE_CONCEPT_CHECK_tryShowAd
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unblockButtons
		#define GEODE_CONCEPT_CHECK_unblockButtons
		GEODE_CONCEPT_FUNCTION_CHECK(unblockButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateArrows
		#define GEODE_CONCEPT_CHECK_updateArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updateArrows) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, WorldSelectLayer> : ModifyBase<ModifyDerive<Der, WorldSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, WorldSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, WorldSelectLayer>>::ModifyBase;
		using Base = WorldSelectLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, create, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, scene, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, onExit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, scrollLayerWillScrollToPage, BoomScrollLayer*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, scrollLayerScrolledToPage, BoomScrollLayer*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, scrollLayerMoved, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, animateInActiveIsland, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, colorForPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, getColorValue, int, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, goToPage, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, init, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, onBack, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, onFreeLevels, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, onGarage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, onNext, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, onPrev, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, setupWorlds, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, showCompleteDialog, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, tryShowAd, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, unblockButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(WorldSelectLayer, updateArrows, )
		}
	};
}
