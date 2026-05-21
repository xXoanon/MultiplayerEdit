#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_dropDownLayerWillClose
		#define GEODE_STATICS_dropDownLayerWillClose
		GEODE_AS_STATIC_FUNCTION(dropDownLayerWillClose) 
	#endif

	#ifndef GEODE_STATICS_musicBrowserClosed
		#define GEODE_STATICS_musicBrowserClosed
		GEODE_AS_STATIC_FUNCTION(musicBrowserClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCreateLines
		#define GEODE_STATICS_onCreateLines
		GEODE_AS_STATIC_FUNCTION(onCreateLines) 
	#endif

	#ifndef GEODE_STATICS_onMusicBrowser
		#define GEODE_STATICS_onMusicBrowser
		GEODE_AS_STATIC_FUNCTION(onMusicBrowser) 
	#endif

	#ifndef GEODE_STATICS_onNCSBrowser
		#define GEODE_STATICS_onNCSBrowser
		GEODE_AS_STATIC_FUNCTION(onNCSBrowser) 
	#endif

	#ifndef GEODE_STATICS_onNewgroundsBrowser
		#define GEODE_STATICS_onNewgroundsBrowser
		GEODE_AS_STATIC_FUNCTION(onNewgroundsBrowser) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onSongBrowser
		#define GEODE_STATICS_onSongBrowser
		GEODE_AS_STATIC_FUNCTION(onSongBrowser) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		#define GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		GEODE_CONCEPT_FUNCTION_CHECK(dropDownLayerWillClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicBrowserClosed
		#define GEODE_CONCEPT_CHECK_musicBrowserClosed
		GEODE_CONCEPT_FUNCTION_CHECK(musicBrowserClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateLines
		#define GEODE_CONCEPT_CHECK_onCreateLines
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateLines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMusicBrowser
		#define GEODE_CONCEPT_CHECK_onMusicBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(onMusicBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNCSBrowser
		#define GEODE_CONCEPT_CHECK_onNCSBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(onNCSBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewgroundsBrowser
		#define GEODE_CONCEPT_CHECK_onNewgroundsBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(onNewgroundsBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSongBrowser
		#define GEODE_CONCEPT_CHECK_onSongBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(onSongBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showNewgroundsMessage
		#define GEODE_CONCEPT_CHECK_showNewgroundsMessage
		GEODE_CONCEPT_FUNCTION_CHECK(showNewgroundsMessage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongLayer> : ModifyBase<ModifyDerive<Der, CustomSongLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongLayer>>;
		using ModifyBase<ModifyDerive<Der, CustomSongLayer>>::ModifyBase;
		using Base = CustomSongLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongLayer, create, CustomSongDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc4480, Thiscall, CustomSongLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc4490, Thiscall, CustomSongLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3e30, Thiscall, CustomSongLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3d80, Thiscall, CustomSongLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3d80, Thiscall, CustomSongLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b600, Thiscall, CustomSongLayer, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7b660, Thiscall, CustomSongLayer, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc4210, Thiscall, CustomSongLayer, dropDownLayerWillClose, GJDropDownLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc42e0, Thiscall, CustomSongLayer, musicBrowserClosed, MusicBrowser*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2c20, Thiscall, CustomSongLayer, init, CustomSongDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc43b0, Thiscall, CustomSongLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc4120, Thiscall, CustomSongLayer, onCreateLines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3ec0, Thiscall, CustomSongLayer, onMusicBrowser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3f20, Thiscall, CustomSongLayer, onNCSBrowser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc4020, Thiscall, CustomSongLayer, onNewgroundsBrowser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc38a0, Thiscall, CustomSongLayer, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc39a0, Thiscall, CustomSongLayer, onSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3e40, Thiscall, CustomSongLayer, onSongBrowser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongLayer, showNewgroundsMessage, )
		}
	};
}
