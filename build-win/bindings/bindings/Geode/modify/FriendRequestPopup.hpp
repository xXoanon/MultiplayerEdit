#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendRequestPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadFromGJFriendRequest
		#define GEODE_STATICS_loadFromGJFriendRequest
		GEODE_AS_STATIC_FUNCTION(loadFromGJFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_onAccept
		#define GEODE_STATICS_onAccept
		GEODE_AS_STATIC_FUNCTION(onAccept) 
	#endif

	#ifndef GEODE_STATICS_onBlock
		#define GEODE_STATICS_onBlock
		GEODE_AS_STATIC_FUNCTION(onBlock) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onRemove
		#define GEODE_STATICS_onRemove
		GEODE_AS_STATIC_FUNCTION(onRemove) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blockUser
		#define GEODE_CONCEPT_CHECK_blockUser
		GEODE_CONCEPT_FUNCTION_CHECK(blockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromGJFriendRequest
		#define GEODE_CONCEPT_CHECK_loadFromGJFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromGJFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAccept
		#define GEODE_CONCEPT_CHECK_onAccept
		GEODE_CONCEPT_FUNCTION_CHECK(onAccept) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlock
		#define GEODE_CONCEPT_CHECK_onBlock
		GEODE_CONCEPT_FUNCTION_CHECK(onBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemove
		#define GEODE_CONCEPT_CHECK_onRemove
		GEODE_CONCEPT_FUNCTION_CHECK(onRemove) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendRequestPopup> : ModifyBase<ModifyDerive<Der, FriendRequestPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendRequestPopup>>;
		using ModifyBase<ModifyDerive<Der, FriendRequestPopup>>::ModifyBase;
		using Base = FriendRequestPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2959d0, Default, FriendRequestPopup, create, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x296fb0, Thiscall, FriendRequestPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x296fc0, Thiscall, FriendRequestPopup, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x297170, Thiscall, FriendRequestPopup, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x297230, Thiscall, FriendRequestPopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x297290, Thiscall, FriendRequestPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendRequestPopup, blockUser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x295b10, Thiscall, FriendRequestPopup, init, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x296180, Thiscall, FriendRequestPopup, loadFromGJFriendRequest, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x296b40, Thiscall, FriendRequestPopup, onAccept, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x296d50, Thiscall, FriendRequestPopup, onBlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x296aa0, Thiscall, FriendRequestPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x296c50, Thiscall, FriendRequestPopup, onRemove, cocos2d::CCObject*)
		}
	};
}
