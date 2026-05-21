#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreateGuidelinesLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_playMusic
		#define GEODE_STATICS_playMusic
		GEODE_AS_STATIC_FUNCTION(playMusic) 
	#endif

	#ifndef GEODE_STATICS_registerTouch
		#define GEODE_STATICS_registerTouch
		GEODE_AS_STATIC_FUNCTION(registerTouch) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onRecord
		#define GEODE_STATICS_onRecord
		GEODE_AS_STATIC_FUNCTION(onRecord) 
	#endif

	#ifndef GEODE_STATICS_recordingDidStop
		#define GEODE_STATICS_recordingDidStop
		GEODE_AS_STATIC_FUNCTION(recordingDidStop) 
	#endif

	#ifndef GEODE_STATICS_getMergedRecordString
		#define GEODE_STATICS_getMergedRecordString
		GEODE_AS_STATIC_FUNCTION(getMergedRecordString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearGuidelines
		#define GEODE_STATICS_onClearGuidelines
		GEODE_AS_STATIC_FUNCTION(onClearGuidelines) 
	#endif

	#ifndef GEODE_STATICS_onStop
		#define GEODE_STATICS_onStop
		GEODE_AS_STATIC_FUNCTION(onStop) 
	#endif

	#ifndef GEODE_STATICS_toggleItems
		#define GEODE_STATICS_toggleItems
		GEODE_AS_STATIC_FUNCTION(toggleItems) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playMusic
		#define GEODE_CONCEPT_CHECK_playMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerTouch
		#define GEODE_CONCEPT_CHECK_registerTouch
		GEODE_CONCEPT_FUNCTION_CHECK(registerTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRecord
		#define GEODE_CONCEPT_CHECK_onRecord
		GEODE_CONCEPT_FUNCTION_CHECK(onRecord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordingDidStop
		#define GEODE_CONCEPT_CHECK_recordingDidStop
		GEODE_CONCEPT_FUNCTION_CHECK(recordingDidStop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doClearGuidelines
		#define GEODE_CONCEPT_CHECK_doClearGuidelines
		GEODE_CONCEPT_FUNCTION_CHECK(doClearGuidelines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMergedRecordString
		#define GEODE_CONCEPT_CHECK_getMergedRecordString
		GEODE_CONCEPT_FUNCTION_CHECK(getMergedRecordString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearGuidelines
		#define GEODE_CONCEPT_CHECK_onClearGuidelines
		GEODE_CONCEPT_FUNCTION_CHECK(onClearGuidelines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStop
		#define GEODE_CONCEPT_CHECK_onStop
		GEODE_CONCEPT_FUNCTION_CHECK(onStop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleItems
		#define GEODE_CONCEPT_CHECK_toggleItems
		GEODE_CONCEPT_FUNCTION_CHECK(toggleItems) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreateGuidelinesLayer> : ModifyBase<ModifyDerive<Der, CreateGuidelinesLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreateGuidelinesLayer>>;
		using ModifyBase<ModifyDerive<Der, CreateGuidelinesLayer>>::ModifyBase;
		using Base = CreateGuidelinesLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x99600, Thiscall, CreateGuidelinesLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x99750, Thiscall, CreateGuidelinesLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CreateGuidelinesLayer, create, CustomSongDelegate*, AudioGuidelinesType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b420, Thiscall, CreateGuidelinesLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b6f0, Thiscall, CreateGuidelinesLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CreateGuidelinesLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b770, Thiscall, CreateGuidelinesLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71240, Thiscall, CreateGuidelinesLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b7d0, Thiscall, CreateGuidelinesLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b670, Thiscall, CreateGuidelinesLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b820, Thiscall, CreateGuidelinesLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b590, Thiscall, CreateGuidelinesLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, CreateGuidelinesLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CreateGuidelinesLayer, keyUp, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9acd0, Thiscall, CreateGuidelinesLayer, playMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b690, Thiscall, CreateGuidelinesLayer, registerTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b440, Thiscall, CreateGuidelinesLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ab40, Thiscall, CreateGuidelinesLayer, onRecord, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ae30, Thiscall, CreateGuidelinesLayer, recordingDidStop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CreateGuidelinesLayer, doClearGuidelines, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b0c0, Thiscall, CreateGuidelinesLayer, getMergedRecordString, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99810, Thiscall, CreateGuidelinesLayer, init, CustomSongDelegate*, AudioGuidelinesType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9aa10, Thiscall, CreateGuidelinesLayer, onClearGuidelines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ad60, Thiscall, CreateGuidelinesLayer, onStop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b340, Thiscall, CreateGuidelinesLayer, toggleItems, bool)
		}
	};
}
