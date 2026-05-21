#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendsProfilePage.hpp>
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

	#ifndef GEODE_STATICS_getUserListFinished
		#define GEODE_STATICS_getUserListFinished
		GEODE_AS_STATIC_FUNCTION(getUserListFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserListFailed
		#define GEODE_STATICS_getUserListFailed
		GEODE_AS_STATIC_FUNCTION(getUserListFailed) 
	#endif

	#ifndef GEODE_STATICS_userListChanged
		#define GEODE_STATICS_userListChanged
		GEODE_AS_STATIC_FUNCTION(userListChanged) 
	#endif

	#ifndef GEODE_STATICS_forceReloadList
		#define GEODE_STATICS_forceReloadList
		GEODE_AS_STATIC_FUNCTION(forceReloadList) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBlocked
		#define GEODE_STATICS_onBlocked
		GEODE_AS_STATIC_FUNCTION(onBlocked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_setupUsersBrowser
		#define GEODE_STATICS_setupUsersBrowser
		GEODE_AS_STATIC_FUNCTION(setupUsersBrowser) 
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

	#ifndef GEODE_CONCEPT_CHECK_getUserListFinished
		#define GEODE_CONCEPT_CHECK_getUserListFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserListFailed
		#define GEODE_CONCEPT_CHECK_getUserListFailed
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userListChanged
		#define GEODE_CONCEPT_CHECK_userListChanged
		GEODE_CONCEPT_FUNCTION_CHECK(userListChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceReloadList
		#define GEODE_CONCEPT_CHECK_forceReloadList
		GEODE_CONCEPT_FUNCTION_CHECK(forceReloadList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlocked
		#define GEODE_CONCEPT_CHECK_onBlocked
		GEODE_CONCEPT_FUNCTION_CHECK(onBlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupUsersBrowser
		#define GEODE_CONCEPT_CHECK_setupUsersBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupUsersBrowser) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendsProfilePage> : ModifyBase<ModifyDerive<Der, FriendsProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendsProfilePage>>;
		using ModifyBase<ModifyDerive<Der, FriendsProfilePage>>::ModifyBase;
		using Base = FriendsProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13fc50, Default, FriendsProfilePage, create, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, FriendsProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x140ce0, Thiscall, FriendsProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x140810, Thiscall, FriendsProfilePage, getUserListFinished, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x140960, Thiscall, FriendsProfilePage, getUserListFailed, UserListType, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b850, Thiscall, FriendsProfilePage, userListChanged, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1409d0, Thiscall, FriendsProfilePage, forceReloadList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13fda0, Thiscall, FriendsProfilePage, init, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x140b90, Thiscall, FriendsProfilePage, onBlocked, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x140c20, Thiscall, FriendsProfilePage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x140a70, Thiscall, FriendsProfilePage, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1404b0, Thiscall, FriendsProfilePage, setupUsersBrowser, cocos2d::CCArray*, UserListType)
		}
	};
}
