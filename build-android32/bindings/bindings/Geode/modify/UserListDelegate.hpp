#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UserListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
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


	template<class Der>
	struct ModifyDerive<Der, UserListDelegate> : ModifyBase<ModifyDerive<Der, UserListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UserListDelegate>>;
		using ModifyBase<ModifyDerive<Der, UserListDelegate>>::ModifyBase;
		using Base = UserListDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UserListDelegate, getUserListFinished, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UserListDelegate, getUserListFailed, UserListType, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UserListDelegate, userListChanged, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UserListDelegate, forceReloadList, UserListType)
		}
	};
}
