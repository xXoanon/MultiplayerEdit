#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendRequestDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_loadFRequestsFinished
		#define GEODE_CONCEPT_CHECK_loadFRequestsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadFRequestsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFRequestsFailed
		#define GEODE_CONCEPT_CHECK_loadFRequestsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadFRequestsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceReloadRequests
		#define GEODE_CONCEPT_CHECK_forceReloadRequests
		GEODE_CONCEPT_FUNCTION_CHECK(forceReloadRequests) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendRequestDelegate> : ModifyBase<ModifyDerive<Der, FriendRequestDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendRequestDelegate>>;
		using ModifyBase<ModifyDerive<Der, FriendRequestDelegate>>::ModifyBase;
		using Base = FriendRequestDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendRequestDelegate, loadFRequestsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendRequestDelegate, loadFRequestsFailed, char const*, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendRequestDelegate, setupPageInfo, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendRequestDelegate, forceReloadRequests, bool)
		}
	};
}
