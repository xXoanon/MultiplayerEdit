#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFinished
		#define GEODE_STATICS_loadCommentsFinished
		GEODE_AS_STATIC_FUNCTION(loadCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFailed
		#define GEODE_STATICS_loadCommentsFailed
		GEODE_AS_STATIC_FUNCTION(loadCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFinished
		#define GEODE_STATICS_commentUploadFinished
		GEODE_AS_STATIC_FUNCTION(commentUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFailed
		#define GEODE_STATICS_commentUploadFailed
		GEODE_AS_STATIC_FUNCTION(commentUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_confirmReport
		#define GEODE_STATICS_confirmReport
		GEODE_AS_STATIC_FUNCTION(confirmReport) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_onCopyLevelID
		#define GEODE_STATICS_onCopyLevelID
		GEODE_AS_STATIC_FUNCTION(onCopyLevelID) 
	#endif

	#ifndef GEODE_STATICS_onGetComments
		#define GEODE_STATICS_onGetComments
		GEODE_AS_STATIC_FUNCTION(onGetComments) 
	#endif

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onOriginal
		#define GEODE_STATICS_onOriginal
		GEODE_AS_STATIC_FUNCTION(onOriginal) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onRefreshComments
		#define GEODE_STATICS_onRefreshComments
		GEODE_AS_STATIC_FUNCTION(onRefreshComments) 
	#endif

	#ifndef GEODE_STATICS_reloadWindow
		#define GEODE_STATICS_reloadWindow
		GEODE_AS_STATIC_FUNCTION(reloadWindow) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_toggleCommentMode
		#define GEODE_STATICS_toggleCommentMode
		GEODE_AS_STATIC_FUNCTION(toggleCommentMode) 
	#endif

	#ifndef GEODE_STATICS_toggleExtendedMode
		#define GEODE_STATICS_toggleExtendedMode
		GEODE_AS_STATIC_FUNCTION(toggleExtendedMode) 
	#endif

	#ifndef GEODE_STATICS_toggleSmallCommentMode
		#define GEODE_STATICS_toggleSmallCommentMode
		GEODE_AS_STATIC_FUNCTION(toggleSmallCommentMode) 
	#endif

	#ifndef GEODE_STATICS_updateCommentModeButtons
		#define GEODE_STATICS_updateCommentModeButtons
		GEODE_AS_STATIC_FUNCTION(updateCommentModeButtons) 
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

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFinished
		#define GEODE_CONCEPT_CHECK_loadCommentsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFailed
		#define GEODE_CONCEPT_CHECK_loadCommentsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentUploadFinished
		#define GEODE_CONCEPT_CHECK_commentUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentUploadFailed
		#define GEODE_CONCEPT_CHECK_commentUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmReport
		#define GEODE_CONCEPT_CHECK_confirmReport
		GEODE_CONCEPT_FUNCTION_CHECK(confirmReport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountID
		#define GEODE_CONCEPT_CHECK_getAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getID
		#define GEODE_CONCEPT_CHECK_getID
		GEODE_CONCEPT_FUNCTION_CHECK(getID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealID
		#define GEODE_CONCEPT_CHECK_getRealID
		GEODE_CONCEPT_FUNCTION_CHECK(getRealID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteButton
		#define GEODE_CONCEPT_CHECK_getSpriteButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onComment
		#define GEODE_CONCEPT_CHECK_onComment
		GEODE_CONCEPT_FUNCTION_CHECK(onComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyLevelID
		#define GEODE_CONCEPT_CHECK_onCopyLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetComments
		#define GEODE_CONCEPT_CHECK_onGetComments
		GEODE_CONCEPT_FUNCTION_CHECK(onGetComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelInfo
		#define GEODE_CONCEPT_CHECK_onLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMore
		#define GEODE_CONCEPT_CHECK_onMore
		GEODE_CONCEPT_FUNCTION_CHECK(onMore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOriginal
		#define GEODE_CONCEPT_CHECK_onOriginal
		GEODE_CONCEPT_FUNCTION_CHECK(onOriginal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefreshComments
		#define GEODE_CONCEPT_CHECK_onRefreshComments
		GEODE_CONCEPT_FUNCTION_CHECK(onRefreshComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSimilar
		#define GEODE_CONCEPT_CHECK_onSimilar
		GEODE_CONCEPT_FUNCTION_CHECK(onSimilar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadWindow
		#define GEODE_CONCEPT_CHECK_reloadWindow
		GEODE_CONCEPT_FUNCTION_CHECK(reloadWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCommentsBrowser
		#define GEODE_CONCEPT_CHECK_setupCommentsBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelInfo
		#define GEODE_CONCEPT_CHECK_setupLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCommentMode
		#define GEODE_CONCEPT_CHECK_toggleCommentMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCommentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleExtendedMode
		#define GEODE_CONCEPT_CHECK_toggleExtendedMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleExtendedMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSmallCommentMode
		#define GEODE_CONCEPT_CHECK_toggleSmallCommentMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSmallCommentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCommentModeButtons
		#define GEODE_CONCEPT_CHECK_updateCommentModeButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateCommentModeButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsLabel
		#define GEODE_CONCEPT_CHECK_updateLevelsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, InfoLayer> : ModifyBase<ModifyDerive<Der, InfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InfoLayer>>;
		using ModifyBase<ModifyDerive<Der, InfoLayer>>::ModifyBase;
		using Base = InfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba8d0, Default, InfoLayer, create, GJGameLevel*, GJUserScore*, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, InfoLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be210, Thiscall, InfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf6a0, Thiscall, InfoLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2beb50, Thiscall, InfoLayer, loadCommentsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bebc0, Thiscall, InfoLayer, loadCommentsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bec10, Thiscall, InfoLayer, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bef50, Thiscall, InfoLayer, commentUploadFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf020, Thiscall, InfoLayer, commentUploadFailed, int, CommentError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bee00, Thiscall, InfoLayer, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd3b0, Thiscall, InfoLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bce50, Thiscall, InfoLayer, confirmReport, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, getAccountID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, getID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, getRealID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bc9b0, Thiscall, InfoLayer, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2baa70, Thiscall, InfoLayer, init, GJGameLevel*, GJUserScore*, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be220, Thiscall, InfoLayer, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be350, Thiscall, InfoLayer, loadPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be190, Thiscall, InfoLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd5f0, Thiscall, InfoLayer, onComment, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd270, Thiscall, InfoLayer, onCopyLevelID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bdba0, Thiscall, InfoLayer, onGetComments, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bdbb0, Thiscall, InfoLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd4d0, Thiscall, InfoLayer, onMore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bef30, Thiscall, InfoLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bd530, Thiscall, InfoLayer, onOriginal, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bef40, Thiscall, InfoLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bccf0, Thiscall, InfoLayer, onRefreshComments, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, onSimilar, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf2c0, Thiscall, InfoLayer, reloadWindow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2be8c0, Thiscall, InfoLayer, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bcaf0, Thiscall, InfoLayer, setupLevelInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf4e0, Thiscall, InfoLayer, toggleCommentMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf170, Thiscall, InfoLayer, toggleExtendedMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf1d0, Thiscall, InfoLayer, toggleSmallCommentMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf5a0, Thiscall, InfoLayer, updateCommentModeButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, updateLevelsLabel, )
		}
	};
}
