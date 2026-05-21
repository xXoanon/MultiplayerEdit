#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AudioAssetsBrowser.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCellDelegateType
		#define GEODE_CONCEPT_CHECK_getCellDelegateType
		GEODE_CONCEPT_FUNCTION_CHECK(getCellDelegateType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySetupAudioBrowser
		#define GEODE_CONCEPT_CHECK_trySetupAudioBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(trySetupAudioBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AudioAssetsBrowser> : ModifyBase<ModifyDerive<Der, AudioAssetsBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AudioAssetsBrowser>>;
		using ModifyBase<ModifyDerive<Der, AudioAssetsBrowser>>::ModifyBase;
		using Base = AudioAssetsBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AudioAssetsBrowser, create, gd::vector<int>&, gd::vector<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, AudioAssetsBrowser, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, AudioAssetsBrowser, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83d20, Thiscall, AudioAssetsBrowser, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83da0, Thiscall, AudioAssetsBrowser, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AudioAssetsBrowser, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AudioAssetsBrowser, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AudioAssetsBrowser, getCellDelegateType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x837b0, Thiscall, AudioAssetsBrowser, init, gd::vector<int>&, gd::vector<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, AudioAssetsBrowser, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83fc0, Thiscall, AudioAssetsBrowser, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AudioAssetsBrowser, onPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83de0, Thiscall, AudioAssetsBrowser, setupList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AudioAssetsBrowser, trySetupAudioBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AudioAssetsBrowser, updatePageLabel, )
		}
	};
}
