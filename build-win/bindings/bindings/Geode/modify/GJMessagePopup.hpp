#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMessagePopup.hpp>
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

	#ifndef GEODE_STATICS_downloadMessageFinished
		#define GEODE_STATICS_downloadMessageFinished
		GEODE_AS_STATIC_FUNCTION(downloadMessageFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadMessageFailed
		#define GEODE_STATICS_downloadMessageFailed
		GEODE_AS_STATIC_FUNCTION(downloadMessageFailed) 
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

	#ifndef GEODE_STATICS_loadFromGJMessage
		#define GEODE_STATICS_loadFromGJMessage
		GEODE_AS_STATIC_FUNCTION(loadFromGJMessage) 
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

	#ifndef GEODE_STATICS_onReply
		#define GEODE_STATICS_onReply
		GEODE_AS_STATIC_FUNCTION(onReply) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadMessageFinished
		#define GEODE_CONCEPT_CHECK_downloadMessageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMessageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadMessageFailed
		#define GEODE_CONCEPT_CHECK_downloadMessageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMessageFailed) 
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

	#ifndef GEODE_CONCEPT_CHECK_loadFromGJMessage
		#define GEODE_CONCEPT_CHECK_loadFromGJMessage
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromGJMessage) 
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

	#ifndef GEODE_CONCEPT_CHECK_onReply
		#define GEODE_CONCEPT_CHECK_onReply
		GEODE_CONCEPT_FUNCTION_CHECK(onReply) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMessagePopup> : ModifyBase<ModifyDerive<Der, GJMessagePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMessagePopup>>;
		using ModifyBase<ModifyDerive<Der, GJMessagePopup>>::ModifyBase;
		using Base = GJMessagePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x297370, Default, GJMessagePopup, create, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, GJMessagePopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298b10, Thiscall, GJMessagePopup, downloadMessageFinished, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298b60, Thiscall, GJMessagePopup, downloadMessageFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298ba0, Thiscall, GJMessagePopup, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298d30, Thiscall, GJMessagePopup, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298e00, Thiscall, GJMessagePopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298e80, Thiscall, GJMessagePopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJMessagePopup, blockUser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2974b0, Thiscall, GJMessagePopup, init, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x297dc0, Thiscall, GJMessagePopup, loadFromGJMessage, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2988e0, Thiscall, GJMessagePopup, onBlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, GJMessagePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298750, Thiscall, GJMessagePopup, onRemove, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x298410, Thiscall, GJMessagePopup, onReply, cocos2d::CCObject*)
		}
	};
}
