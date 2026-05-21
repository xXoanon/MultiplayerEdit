#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMultiplayerManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addComment
		#define GEODE_STATICS_addComment
		GEODE_AS_STATIC_FUNCTION(addComment) 
	#endif

	#ifndef GEODE_STATICS_createAndAddComment
		#define GEODE_STATICS_createAndAddComment
		GEODE_AS_STATIC_FUNCTION(createAndAddComment) 
	#endif

	#ifndef GEODE_STATICS_exitLobby
		#define GEODE_STATICS_exitLobby
		GEODE_AS_STATIC_FUNCTION(exitLobby) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_joinLobby
		#define GEODE_STATICS_joinLobby
		GEODE_AS_STATIC_FUNCTION(joinLobby) 
	#endif

	#ifndef GEODE_STATICS_onJoinLobbyCompleted
		#define GEODE_STATICS_onJoinLobbyCompleted
		GEODE_AS_STATIC_FUNCTION(onJoinLobbyCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_uploadComment
		#define GEODE_STATICS_uploadComment
		GEODE_AS_STATIC_FUNCTION(uploadComment) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addComment
		#define GEODE_CONCEPT_CHECK_addComment
		GEODE_CONCEPT_FUNCTION_CHECK(addComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndAddComment
		#define GEODE_CONCEPT_CHECK_createAndAddComment
		GEODE_CONCEPT_FUNCTION_CHECK(createAndAddComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLobby
		#define GEODE_CONCEPT_CHECK_exitLobby
		GEODE_CONCEPT_FUNCTION_CHECK(exitLobby) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBasePostString
		#define GEODE_CONCEPT_CHECK_getBasePostString
		GEODE_CONCEPT_FUNCTION_CHECK(getBasePostString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLObject
		#define GEODE_CONCEPT_CHECK_getDLObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastCommentIDForGame
		#define GEODE_CONCEPT_CHECK_getLastCommentIDForGame
		GEODE_CONCEPT_FUNCTION_CHECK(getLastCommentIDForGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_joinLobby
		#define GEODE_CONCEPT_CHECK_joinLobby
		GEODE_CONCEPT_FUNCTION_CHECK(joinLobby) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitLobbyCompleted
		#define GEODE_CONCEPT_CHECK_onExitLobbyCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onExitLobbyCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJoinLobbyCompleted
		#define GEODE_CONCEPT_CHECK_onJoinLobbyCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onJoinLobbyCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		#define GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadComment
		#define GEODE_CONCEPT_CHECK_uploadComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadComment) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMultiplayerManager> : ModifyBase<ModifyDerive<Der, GJMultiplayerManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMultiplayerManager>>;
		using ModifyBase<ModifyDerive<Der, GJMultiplayerManager>>::ModifyBase;
		using Base = GJMultiplayerManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2825f0, Default, GJMultiplayerManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282d40, Thiscall, GJMultiplayerManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x283d10, Thiscall, GJMultiplayerManager, addComment, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, addDLToActive, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x283b30, Thiscall, GJMultiplayerManager, createAndAddComment, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMultiplayerManager, exitLobby, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x283ed0, Thiscall, GJMultiplayerManager, getBasePostString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, getDLObject, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, getLastCommentIDForGame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282ab0, Thiscall, GJMultiplayerManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, handleItDelayed, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, handleItND, cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, isDLActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMultiplayerManager, joinLobby, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, onExitLobbyCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282e70, Thiscall, GJMultiplayerManager, onJoinLobbyCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2829b0, Thiscall, GJMultiplayerManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMultiplayerManager, onUploadCommentCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2826a0, Thiscall, GJMultiplayerManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x282dc0, Thiscall, GJMultiplayerManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2835d0, Thiscall, GJMultiplayerManager, uploadComment, gd::string, int)
		}
	};
}
