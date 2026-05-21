#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MoreOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_googlePlaySignedIn
		#define GEODE_STATICS_googlePlaySignedIn
		GEODE_AS_STATIC_FUNCTION(googlePlaySignedIn) 
	#endif

	#ifndef GEODE_STATICS_dropDownLayerWillClose
		#define GEODE_STATICS_dropDownLayerWillClose
		GEODE_AS_STATIC_FUNCTION(dropDownLayerWillClose) 
	#endif

	#ifndef GEODE_STATICS_addToggle
		#define GEODE_STATICS_addToggle
		GEODE_AS_STATIC_FUNCTION(addToggle) 
	#endif

	#ifndef GEODE_STATICS_countForPage
		#define GEODE_STATICS_countForPage
		GEODE_AS_STATIC_FUNCTION(countForPage) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_layerForPage
		#define GEODE_STATICS_layerForPage
		GEODE_AS_STATIC_FUNCTION(layerForPage) 
	#endif

	#ifndef GEODE_STATICS_objectsForPage
		#define GEODE_STATICS_objectsForPage
		GEODE_AS_STATIC_FUNCTION(objectsForPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFMODDebug
		#define GEODE_STATICS_onFMODDebug
		GEODE_AS_STATIC_FUNCTION(onFMODDebug) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onKeybindings
		#define GEODE_STATICS_onKeybindings
		GEODE_AS_STATIC_FUNCTION(onKeybindings) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onParental
		#define GEODE_STATICS_onParental
		GEODE_AS_STATIC_FUNCTION(onParental) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onSongBrowser
		#define GEODE_STATICS_onSongBrowser
		GEODE_AS_STATIC_FUNCTION(onSongBrowser) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_googlePlaySignedIn
		#define GEODE_CONCEPT_CHECK_googlePlaySignedIn
		GEODE_CONCEPT_FUNCTION_CHECK(googlePlaySignedIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		#define GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		GEODE_CONCEPT_FUNCTION_CHECK(dropDownLayerWillClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToggle
		#define GEODE_CONCEPT_CHECK_addToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForPage
		#define GEODE_CONCEPT_CHECK_countForPage
		GEODE_CONCEPT_FUNCTION_CHECK(countForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementCountForPage
		#define GEODE_CONCEPT_CHECK_incrementCountForPage
		GEODE_CONCEPT_FUNCTION_CHECK(incrementCountForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_infoKey
		#define GEODE_CONCEPT_CHECK_infoKey
		GEODE_CONCEPT_FUNCTION_CHECK(infoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerForPage
		#define GEODE_CONCEPT_CHECK_layerForPage
		GEODE_CONCEPT_FUNCTION_CHECK(layerForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerKey
		#define GEODE_CONCEPT_CHECK_layerKey
		GEODE_CONCEPT_FUNCTION_CHECK(layerKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nextPosition
		#define GEODE_CONCEPT_CHECK_nextPosition
		GEODE_CONCEPT_FUNCTION_CHECK(nextPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectKey
		#define GEODE_CONCEPT_CHECK_objectKey
		GEODE_CONCEPT_FUNCTION_CHECK(objectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsForPage
		#define GEODE_CONCEPT_CHECK_objectsForPage
		GEODE_CONCEPT_FUNCTION_CHECK(objectsForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetToNextPage
		#define GEODE_CONCEPT_CHECK_offsetToNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(offsetToNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFMODDebug
		#define GEODE_CONCEPT_CHECK_onFMODDebug
		GEODE_CONCEPT_FUNCTION_CHECK(onFMODDebug) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGPSignIn
		#define GEODE_CONCEPT_CHECK_onGPSignIn
		GEODE_CONCEPT_FUNCTION_CHECK(onGPSignIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGPSignOut
		#define GEODE_CONCEPT_CHECK_onGPSignOut
		GEODE_CONCEPT_FUNCTION_CHECK(onGPSignOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onKeybindings
		#define GEODE_CONCEPT_CHECK_onKeybindings
		GEODE_CONCEPT_FUNCTION_CHECK(onKeybindings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onParental
		#define GEODE_CONCEPT_CHECK_onParental
		GEODE_CONCEPT_FUNCTION_CHECK(onParental) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSongBrowser
		#define GEODE_CONCEPT_CHECK_onSongBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(onSongBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageKey
		#define GEODE_CONCEPT_CHECK_pageKey
		GEODE_CONCEPT_FUNCTION_CHECK(pageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGP
		#define GEODE_CONCEPT_CHECK_toggleGP
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGP) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MoreOptionsLayer> : ModifyBase<ModifyDerive<Der, MoreOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MoreOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, MoreOptionsLayer>>::ModifyBase;
		using Base = MoreOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x373740, Thiscall, MoreOptionsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376a00, Thiscall, MoreOptionsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b600, Thiscall, MoreOptionsLayer, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b660, Thiscall, MoreOptionsLayer, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376a10, Thiscall, MoreOptionsLayer, googlePlaySignedIn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376560, Thiscall, MoreOptionsLayer, dropDownLayerWillClose, GJDropDownLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x374b80, Thiscall, MoreOptionsLayer, addToggle, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3751e0, Thiscall, MoreOptionsLayer, countForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x375600, Thiscall, MoreOptionsLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, incrementCountForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, infoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x375440, Thiscall, MoreOptionsLayer, layerForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, layerKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, nextPosition, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, objectKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3752b0, Thiscall, MoreOptionsLayer, objectsForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, offsetToNextPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3768a0, Thiscall, MoreOptionsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x376410, Thiscall, MoreOptionsLayer, onFMODDebug, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, onGPSignIn, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, onGPSignOut, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3766c0, Thiscall, MoreOptionsLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdcf70, Thiscall, MoreOptionsLayer, onKeybindings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3755e0, Thiscall, MoreOptionsLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3765b0, Thiscall, MoreOptionsLayer, onParental, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3755f0, Thiscall, MoreOptionsLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3763a0, Thiscall, MoreOptionsLayer, onSongBrowser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x375ba0, Thiscall, MoreOptionsLayer, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, pageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreOptionsLayer, toggleGP, )
		}
	};
}
