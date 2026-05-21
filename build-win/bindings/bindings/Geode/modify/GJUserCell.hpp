#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUserCell.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
	#endif

	#ifndef GEODE_STATICS_onCancelFriendRequest
		#define GEODE_STATICS_onCancelFriendRequest
		GEODE_AS_STATIC_FUNCTION(onCancelFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFriend
		#define GEODE_STATICS_onRemoveFriend
		GEODE_AS_STATIC_FUNCTION(onRemoveFriend) 
	#endif

	#ifndef GEODE_STATICS_onSendMessage
		#define GEODE_STATICS_onSendMessage
		GEODE_AS_STATIC_FUNCTION(onSendMessage) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUser
		#define GEODE_STATICS_onUnblockUser
		GEODE_AS_STATIC_FUNCTION(onUnblockUser) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromScore
		#define GEODE_CONCEPT_CHECK_loadFromScore
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancelFriendRequest
		#define GEODE_CONCEPT_CHECK_onCancelFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(onCancelFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveFriend
		#define GEODE_CONCEPT_CHECK_onRemoveFriend
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveFriend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSendMessage
		#define GEODE_CONCEPT_CHECK_onSendMessage
		GEODE_CONCEPT_FUNCTION_CHECK(onSendMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnblockUser
		#define GEODE_CONCEPT_CHECK_onUnblockUser
		GEODE_CONCEPT_FUNCTION_CHECK(onUnblockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewFriendRequest
		#define GEODE_CONCEPT_CHECK_onViewFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(onViewFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJUserCell> : ModifyBase<ModifyDerive<Der, GJUserCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUserCell>>;
		using ModifyBase<ModifyDerive<Der, GJUserCell>>::ModifyBase;
		using Base = GJUserCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbac40, Thiscall, GJUserCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, GJUserCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbb70, Thiscall, GJUserCell, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbf30, Thiscall, GJUserCell, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc0e0, Thiscall, GJUserCell, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc1b0, Thiscall, GJUserCell, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbac60, Thiscall, GJUserCell, loadFromScore, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb750, Thiscall, GJUserCell, onCancelFriendRequest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb8f0, Thiscall, GJUserCell, onRemoveFriend, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbb30, Thiscall, GJUserCell, onSendMessage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb540, Thiscall, GJUserCell, onUnblockUser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUserCell, onViewFriendRequest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb500, Thiscall, GJUserCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUserCell, updateBGColor, int)
		}
	};
}
