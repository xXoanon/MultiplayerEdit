#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelBrowserLayer.hpp>
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

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
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

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_shareCommentClosed
		#define GEODE_STATICS_shareCommentClosed
		GEODE_AS_STATIC_FUNCTION(shareCommentClosed) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_updateResultArray
		#define GEODE_STATICS_updateResultArray
		GEODE_AS_STATIC_FUNCTION(updateResultArray) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getItemsMatchingSearch
		#define GEODE_STATICS_getItemsMatchingSearch
		GEODE_AS_STATIC_FUNCTION(getItemsMatchingSearch) 
	#endif

	#ifndef GEODE_STATICS_getSearchTitle
		#define GEODE_STATICS_getSearchTitle
		GEODE_AS_STATIC_FUNCTION(getSearchTitle) 
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

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onDeleteAll
		#define GEODE_STATICS_onDeleteAll
		GEODE_AS_STATIC_FUNCTION(onDeleteAll) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onFavorites
		#define GEODE_STATICS_onFavorites
		GEODE_AS_STATIC_FUNCTION(onFavorites) 
	#endif

	#ifndef GEODE_STATICS_onGoToFolder
		#define GEODE_STATICS_onGoToFolder
		GEODE_AS_STATIC_FUNCTION(onGoToFolder) 
	#endif

	#ifndef GEODE_STATICS_onGoToLastPage
		#define GEODE_STATICS_onGoToLastPage
		GEODE_AS_STATIC_FUNCTION(onGoToLastPage) 
	#endif

	#ifndef GEODE_STATICS_onGoToPage
		#define GEODE_STATICS_onGoToPage
		GEODE_AS_STATIC_FUNCTION(onGoToPage) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onLocalMode
		#define GEODE_STATICS_onLocalMode
		GEODE_AS_STATIC_FUNCTION(onLocalMode) 
	#endif

	#ifndef GEODE_STATICS_onMyOnlineLevels
		#define GEODE_STATICS_onMyOnlineLevels
		GEODE_AS_STATIC_FUNCTION(onMyOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_onNew
		#define GEODE_STATICS_onNew
		GEODE_AS_STATIC_FUNCTION(onNew) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_onRemoveAllFavorites
		#define GEODE_STATICS_onRemoveAllFavorites
		GEODE_AS_STATIC_FUNCTION(onRemoveAllFavorites) 
	#endif

	#ifndef GEODE_STATICS_onSaved
		#define GEODE_STATICS_onSaved
		GEODE_AS_STATIC_FUNCTION(onSaved) 
	#endif

	#ifndef GEODE_STATICS_onSavedMode
		#define GEODE_STATICS_onSavedMode
		GEODE_AS_STATIC_FUNCTION(onSavedMode) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onToggleAllObjects
		#define GEODE_STATICS_onToggleAllObjects
		GEODE_AS_STATIC_FUNCTION(onToggleAllObjects) 
	#endif

	#ifndef GEODE_STATICS_setupLevelBrowser
		#define GEODE_STATICS_setupLevelBrowser
		GEODE_AS_STATIC_FUNCTION(setupLevelBrowser) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
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

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFinished
		#define GEODE_CONCEPT_CHECK_loadLevelsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFailed
		#define GEODE_CONCEPT_CHECK_loadLevelsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shareCommentClosed
		#define GEODE_CONCEPT_CHECK_shareCommentClosed
		GEODE_CONCEPT_FUNCTION_CHECK(shareCommentClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIDPopupClosed
		#define GEODE_CONCEPT_CHECK_setIDPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setIDPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateResultArray
		#define GEODE_CONCEPT_CHECK_updateResultArray
		GEODE_CONCEPT_FUNCTION_CHECK(updateResultArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewLevel
		#define GEODE_CONCEPT_CHECK_createNewLevel
		GEODE_CONCEPT_FUNCTION_CHECK(createNewLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewList
		#define GEODE_CONCEPT_CHECK_createNewList
		GEODE_CONCEPT_FUNCTION_CHECK(createNewList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewSmartTemplate
		#define GEODE_CONCEPT_CHECK_createNewSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(createNewSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSelected
		#define GEODE_CONCEPT_CHECK_deleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLayer
		#define GEODE_CONCEPT_CHECK_exitLayer
		GEODE_CONCEPT_FUNCTION_CHECK(exitLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemsMatchingSearch
		#define GEODE_CONCEPT_CHECK_getItemsMatchingSearch
		GEODE_CONCEPT_FUNCTION_CHECK(getItemsMatchingSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchTitle
		#define GEODE_CONCEPT_CHECK_getSearchTitle
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchTitle) 
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

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteAll
		#define GEODE_CONCEPT_CHECK_onDeleteAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFavorites
		#define GEODE_CONCEPT_CHECK_onFavorites
		GEODE_CONCEPT_FUNCTION_CHECK(onFavorites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoToFolder
		#define GEODE_CONCEPT_CHECK_onGoToFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onGoToFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoToLastPage
		#define GEODE_CONCEPT_CHECK_onGoToLastPage
		GEODE_CONCEPT_FUNCTION_CHECK(onGoToLastPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGoToPage
		#define GEODE_CONCEPT_CHECK_onGoToPage
		GEODE_CONCEPT_FUNCTION_CHECK(onGoToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLocalMode
		#define GEODE_CONCEPT_CHECK_onLocalMode
		GEODE_CONCEPT_FUNCTION_CHECK(onLocalMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMyOnlineLevels
		#define GEODE_CONCEPT_CHECK_onMyOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onMyOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNew
		#define GEODE_CONCEPT_CHECK_onNew
		GEODE_CONCEPT_FUNCTION_CHECK(onNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefresh
		#define GEODE_CONCEPT_CHECK_onRefresh
		GEODE_CONCEPT_FUNCTION_CHECK(onRefresh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveAllFavorites
		#define GEODE_CONCEPT_CHECK_onRemoveAllFavorites
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveAllFavorites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaved
		#define GEODE_CONCEPT_CHECK_onSaved
		GEODE_CONCEPT_FUNCTION_CHECK(onSaved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSavedMode
		#define GEODE_CONCEPT_CHECK_onSavedMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSavedMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleAllObjects
		#define GEODE_CONCEPT_CHECK_onToggleAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadAllObjects
		#define GEODE_CONCEPT_CHECK_reloadAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(reloadAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSearchObject
		#define GEODE_CONCEPT_CHECK_setSearchObject
		GEODE_CONCEPT_FUNCTION_CHECK(setSearchObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelBrowser
		#define GEODE_CONCEPT_CHECK_setupLevelBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsLabel
		#define GEODE_CONCEPT_CHECK_updateLevelsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelBrowserLayer> : ModifyBase<ModifyDerive<Der, LevelBrowserLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelBrowserLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelBrowserLayer>>::ModifyBase;
		using Base = LevelBrowserLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x2c87d0, Thiscall, LevelBrowserLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x2c89c0, Thiscall, LevelBrowserLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8bf0, Default, LevelBrowserLayer, create, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8ba0, Default, LevelBrowserLayer, scene, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cfc90, Thiscall, LevelBrowserLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2490b0, Thiscall, LevelBrowserLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cfdd0, Thiscall, LevelBrowserLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ccf10, Thiscall, LevelBrowserLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ccf30, Thiscall, LevelBrowserLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cc420, Thiscall, LevelBrowserLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cc550, Thiscall, LevelBrowserLayer, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cc5a0, Thiscall, LevelBrowserLayer, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cce80, Thiscall, LevelBrowserLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ce130, Thiscall, LevelBrowserLayer, shareCommentClosed, gd::string, ShareCommentLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ceea0, Thiscall, LevelBrowserLayer, setTextPopupClosed, SetTextPopup*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cf6d0, Thiscall, LevelBrowserLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cca50, Thiscall, LevelBrowserLayer, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8970, Thiscall, LevelBrowserLayer, updateResultArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cfd30, Thiscall, LevelBrowserLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, createNewLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, createNewList, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, createNewSmartTemplate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, deleteSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, exitLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cef60, Thiscall, LevelBrowserLayer, getItemsMatchingSearch, cocos2d::CCArray*, gd::string, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cbbc0, Thiscall, LevelBrowserLayer, getSearchTitle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c8c60, Thiscall, LevelBrowserLayer, init, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ca550, Thiscall, LevelBrowserLayer, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ca720, Thiscall, LevelBrowserLayer, loadPage, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ceb80, Thiscall, LevelBrowserLayer, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ce5d0, Thiscall, LevelBrowserLayer, onDeleteAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cf2f0, Thiscall, LevelBrowserLayer, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ce410, Thiscall, LevelBrowserLayer, onFavorites, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cc9a0, Thiscall, LevelBrowserLayer, onGoToFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cc820, Thiscall, LevelBrowserLayer, onGoToLastPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cc890, Thiscall, LevelBrowserLayer, onGoToPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ccfd0, Thiscall, LevelBrowserLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ce050, Thiscall, LevelBrowserLayer, onLocalMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ce240, Thiscall, LevelBrowserLayer, onMyOnlineLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cdba0, Thiscall, LevelBrowserLayer, onNew, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ccd80, Thiscall, LevelBrowserLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cce00, Thiscall, LevelBrowserLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cea40, Thiscall, LevelBrowserLayer, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ce770, Thiscall, LevelBrowserLayer, onRemoveAllFavorites, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ce4f0, Thiscall, LevelBrowserLayer, onSaved, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cdf70, Thiscall, LevelBrowserLayer, onSavedMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cec20, Thiscall, LevelBrowserLayer, onSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cf630, Thiscall, LevelBrowserLayer, onToggleAllObjects, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, reloadAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, setSearchObject, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cb8b0, Thiscall, LevelBrowserLayer, setupLevelBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cfe40, Thiscall, LevelBrowserLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelBrowserLayer, updateLevelsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ccc50, Thiscall, LevelBrowserLayer, updatePageLabel, )
		}
	};
}
