#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFinished
		#define GEODE_STATICS_downloadSFXFinished
		GEODE_AS_STATIC_FUNCTION(downloadSFXFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_hideLoadingArt
		#define GEODE_STATICS_hideLoadingArt
		GEODE_AS_STATIC_FUNCTION(hideLoadingArt) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancelDownload
		#define GEODE_STATICS_onCancelDownload
		GEODE_AS_STATIC_FUNCTION(onCancelDownload) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_showLoadingArt
		#define GEODE_STATICS_showLoadingArt
		GEODE_AS_STATIC_FUNCTION(showLoadingArt) 
	#endif

	#ifndef GEODE_STATICS_startMonitorDownload
		#define GEODE_STATICS_startMonitorDownload
		GEODE_AS_STATIC_FUNCTION(startMonitorDownload) 
	#endif

	#ifndef GEODE_STATICS_updateDownloadProgress
		#define GEODE_STATICS_updateDownloadProgress
		GEODE_AS_STATIC_FUNCTION(updateDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_updateProgressBar
		#define GEODE_STATICS_updateProgressBar
		GEODE_AS_STATIC_FUNCTION(updateProgressBar) 
	#endif

	#ifndef GEODE_STATICS_updateSFXInfo
		#define GEODE_STATICS_updateSFXInfo
		GEODE_AS_STATIC_FUNCTION(updateSFXInfo) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFinished
		#define GEODE_CONCEPT_CHECK_downloadSFXFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFailed
		#define GEODE_CONCEPT_CHECK_downloadSFXFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSFX
		#define GEODE_CONCEPT_CHECK_deleteSFX
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadFailed
		#define GEODE_CONCEPT_CHECK_downloadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideLoadingArt
		#define GEODE_CONCEPT_CHECK_hideLoadingArt
		GEODE_CONCEPT_FUNCTION_CHECK(hideLoadingArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancelDownload
		#define GEODE_CONCEPT_CHECK_onCancelDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onCancelDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownload
		#define GEODE_CONCEPT_CHECK_onDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLoadingArt
		#define GEODE_CONCEPT_CHECK_showLoadingArt
		GEODE_CONCEPT_FUNCTION_CHECK(showLoadingArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startDownload
		#define GEODE_CONCEPT_CHECK_startDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMonitorDownload
		#define GEODE_CONCEPT_CHECK_startMonitorDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startMonitorDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDownloadProgress
		#define GEODE_CONCEPT_CHECK_updateDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(updateDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateError
		#define GEODE_CONCEPT_CHECK_updateError
		GEODE_CONCEPT_FUNCTION_CHECK(updateError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLengthMod
		#define GEODE_CONCEPT_CHECK_updateLengthMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateLengthMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlaybackBtn
		#define GEODE_CONCEPT_CHECK_updatePlaybackBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgressBar
		#define GEODE_CONCEPT_CHECK_updateProgressBar
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgressBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSFXInfo
		#define GEODE_CONCEPT_CHECK_updateSFXInfo
		GEODE_CONCEPT_FUNCTION_CHECK(updateSFXInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSFXObject
		#define GEODE_CONCEPT_CHECK_updateSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(updateSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifySFXID
		#define GEODE_CONCEPT_CHECK_verifySFXID
		GEODE_CONCEPT_FUNCTION_CHECK(verifySFXID) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXWidget> : ModifyBase<ModifyDerive<Der, CustomSFXWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXWidget>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXWidget>>::ModifyBase;
		using Base = CustomSFXWidget;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc0640, Default, CustomSFXWidget, create, SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2600, Thiscall, CustomSFXWidget, downloadSFXFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2680, Thiscall, CustomSFXWidget, downloadSFXFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1f50, Thiscall, CustomSFXWidget, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc2780, Thiscall, CustomSFXWidget, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, deleteSFX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, downloadFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1910, Thiscall, CustomSFXWidget, hideLoadingArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc0780, Thiscall, CustomSFXWidget, init, SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc19a0, Thiscall, CustomSFXWidget, onCancelDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1670, Thiscall, CustomSFXWidget, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1a30, Thiscall, CustomSFXWidget, onDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1c00, Thiscall, CustomSFXWidget, onPlayback, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1be0, Thiscall, CustomSFXWidget, onSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc17b0, Thiscall, CustomSFXWidget, showLoadingArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, startDownload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1b30, Thiscall, CustomSFXWidget, startMonitorDownload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1e20, Thiscall, CustomSFXWidget, updateDownloadProgress, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, updateError, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, updateLengthMod, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, updatePlaybackBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1ed0, Thiscall, CustomSFXWidget, updateProgressBar, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1f60, Thiscall, CustomSFXWidget, updateSFXInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, updateSFXObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXWidget, verifySFXID, int)
		}
	};
}
