#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelListLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_shareCommentClosed
		#define GEODE_STATICS_shareCommentClosed
		GEODE_AS_STATIC_FUNCTION(shareCommentClosed) 
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

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_iconSelectClosed
		#define GEODE_STATICS_iconSelectClosed
		GEODE_AS_STATIC_FUNCTION(iconSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_levelListDeleteFinished
		#define GEODE_STATICS_levelListDeleteFinished
		GEODE_AS_STATIC_FUNCTION(levelListDeleteFinished) 
	#endif

	#ifndef GEODE_STATICS_levelListDeleteFailed
		#define GEODE_STATICS_levelListDeleteFailed
		GEODE_AS_STATIC_FUNCTION(levelListDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_cloneList
		#define GEODE_STATICS_cloneList
		GEODE_AS_STATIC_FUNCTION(cloneList) 
	#endif

	#ifndef GEODE_STATICS_confirmClone
		#define GEODE_STATICS_confirmClone
		GEODE_AS_STATIC_FUNCTION(confirmClone) 
	#endif

	#ifndef GEODE_STATICS_confirmDelete
		#define GEODE_STATICS_confirmDelete
		GEODE_AS_STATIC_FUNCTION(confirmDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmOwnerDelete
		#define GEODE_STATICS_confirmOwnerDelete
		GEODE_AS_STATIC_FUNCTION(confirmOwnerDelete) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_onDescription
		#define GEODE_STATICS_onDescription
		GEODE_AS_STATIC_FUNCTION(onDescription) 
	#endif

	#ifndef GEODE_STATICS_onFavorite
		#define GEODE_STATICS_onFavorite
		GEODE_AS_STATIC_FUNCTION(onFavorite) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onListInfo
		#define GEODE_STATICS_onListInfo
		GEODE_AS_STATIC_FUNCTION(onListInfo) 
	#endif

	#ifndef GEODE_STATICS_onRefreshLevelList
		#define GEODE_STATICS_onRefreshLevelList
		GEODE_AS_STATIC_FUNCTION(onRefreshLevelList) 
	#endif

	#ifndef GEODE_STATICS_onSelectIcon
		#define GEODE_STATICS_onSelectIcon
		GEODE_AS_STATIC_FUNCTION(onSelectIcon) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_onToggleEditMode
		#define GEODE_STATICS_onToggleEditMode
		GEODE_AS_STATIC_FUNCTION(onToggleEditMode) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateSideButtons
		#define GEODE_STATICS_updateSideButtons
		GEODE_AS_STATIC_FUNCTION(updateSideButtons) 
	#endif

	#ifndef GEODE_STATICS_updateStatsArt
		#define GEODE_STATICS_updateStatsArt
		GEODE_AS_STATIC_FUNCTION(updateStatsArt) 
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

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFinished
		#define GEODE_CONCEPT_CHECK_loadLevelsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFailed
		#define GEODE_CONCEPT_CHECK_loadLevelsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shareCommentClosed
		#define GEODE_CONCEPT_CHECK_shareCommentClosed
		GEODE_CONCEPT_FUNCTION_CHECK(shareCommentClosed) 
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

	#ifndef GEODE_CONCEPT_CHECK_likedItem
		#define GEODE_CONCEPT_CHECK_likedItem
		GEODE_CONCEPT_FUNCTION_CHECK(likedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_iconSelectClosed
		#define GEODE_CONCEPT_CHECK_iconSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(iconSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelListDeleteFinished
		#define GEODE_CONCEPT_CHECK_levelListDeleteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelListDeleteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelListDeleteFailed
		#define GEODE_CONCEPT_CHECK_levelListDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelListDeleteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cloneList
		#define GEODE_CONCEPT_CHECK_cloneList
		GEODE_CONCEPT_FUNCTION_CHECK(cloneList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmClone
		#define GEODE_CONCEPT_CHECK_confirmClone
		GEODE_CONCEPT_FUNCTION_CHECK(confirmClone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmDelete
		#define GEODE_CONCEPT_CHECK_confirmDelete
		GEODE_CONCEPT_FUNCTION_CHECK(confirmDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmOwnerDelete
		#define GEODE_CONCEPT_CHECK_confirmOwnerDelete
		GEODE_CONCEPT_FUNCTION_CHECK(confirmOwnerDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaimReward
		#define GEODE_CONCEPT_CHECK_onClaimReward
		GEODE_CONCEPT_FUNCTION_CHECK(onClaimReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDescription
		#define GEODE_CONCEPT_CHECK_onDescription
		GEODE_CONCEPT_FUNCTION_CHECK(onDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFavorite
		#define GEODE_CONCEPT_CHECK_onFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(onFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLike
		#define GEODE_CONCEPT_CHECK_onLike
		GEODE_CONCEPT_FUNCTION_CHECK(onLike) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onListInfo
		#define GEODE_CONCEPT_CHECK_onListInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onListInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefreshLevelList
		#define GEODE_CONCEPT_CHECK_onRefreshLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(onRefreshLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectIcon
		#define GEODE_CONCEPT_CHECK_onSelectIcon
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShare
		#define GEODE_CONCEPT_CHECK_onShare
		GEODE_CONCEPT_FUNCTION_CHECK(onShare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleEditMode
		#define GEODE_CONCEPT_CHECK_onToggleEditMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleEditMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownerDelete
		#define GEODE_CONCEPT_CHECK_ownerDelete
		GEODE_CONCEPT_FUNCTION_CHECK(ownerDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditMode
		#define GEODE_CONCEPT_CHECK_updateEditMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSideButtons
		#define GEODE_CONCEPT_CHECK_updateSideButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateSideButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStatsArt
		#define GEODE_CONCEPT_CHECK_updateStatsArt
		GEODE_CONCEPT_FUNCTION_CHECK(updateStatsArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyListName
		#define GEODE_CONCEPT_CHECK_verifyListName
		GEODE_CONCEPT_FUNCTION_CHECK(verifyListName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelListLayer> : ModifyBase<ModifyDerive<Der, LevelListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelListLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelListLayer>>::ModifyBase;
		using Base = LevelListLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListLayer, create, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x303410, Default, LevelListLayer, scene, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3050d0, Thiscall, LevelListLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305100, Thiscall, LevelListLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3068d0, Thiscall, LevelListLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2cc550, Thiscall, LevelListLayer, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307130, Thiscall, LevelListLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307930, Thiscall, LevelListLayer, shareCommentClosed, gd::string, ShareCommentLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307550, Thiscall, LevelListLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307080, Thiscall, LevelListLayer, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307120, Thiscall, LevelListLayer, updateResultArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306c30, Thiscall, LevelListLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307b50, Thiscall, LevelListLayer, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307e00, Thiscall, LevelListLayer, iconSelectClosed, SelectListIconLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308720, Thiscall, LevelListLayer, levelListDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308850, Thiscall, LevelListLayer, levelListDeleteFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308c10, Thiscall, LevelListLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308980, Thiscall, LevelListLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308d70, Thiscall, LevelListLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3081e0, Thiscall, LevelListLayer, cloneList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3080f0, Thiscall, LevelListLayer, confirmClone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308470, Thiscall, LevelListLayer, confirmDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3085a0, Thiscall, LevelListLayer, confirmOwnerDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x303640, Thiscall, LevelListLayer, init, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3060a0, Thiscall, LevelListLayer, onClaimReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListLayer, onDelete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307860, Thiscall, LevelListLayer, onDescription, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307730, Thiscall, LevelListLayer, onFavorite, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307a30, Thiscall, LevelListLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307a70, Thiscall, LevelListLayer, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3050c0, Thiscall, LevelListLayer, onListInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306710, Thiscall, LevelListLayer, onRefreshLevelList, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307cb0, Thiscall, LevelListLayer, onSelectIcon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307e20, Thiscall, LevelListLayer, onShare, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3080b0, Thiscall, LevelListLayer, onToggleEditMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3076f0, Thiscall, LevelListLayer, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListLayer, ownerDelete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListLayer, updateEditMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307bb0, Thiscall, LevelListLayer, updateSideButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305120, Thiscall, LevelListLayer, updateStatsArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListLayer, verifyListName, )
		}
	};
}
