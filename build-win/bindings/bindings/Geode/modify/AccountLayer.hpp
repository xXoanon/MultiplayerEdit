#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_backupAccountFinished
		#define GEODE_STATICS_backupAccountFinished
		GEODE_AS_STATIC_FUNCTION(backupAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_backupAccountFailed
		#define GEODE_STATICS_backupAccountFailed
		GEODE_AS_STATIC_FUNCTION(backupAccountFailed) 
	#endif

	#ifndef GEODE_STATICS_syncAccountFinished
		#define GEODE_STATICS_syncAccountFinished
		GEODE_AS_STATIC_FUNCTION(syncAccountFinished) 
	#endif

	#ifndef GEODE_STATICS_syncAccountFailed
		#define GEODE_STATICS_syncAccountFailed
		GEODE_AS_STATIC_FUNCTION(syncAccountFailed) 
	#endif

	#ifndef GEODE_STATICS_accountStatusChanged
		#define GEODE_STATICS_accountStatusChanged
		GEODE_AS_STATIC_FUNCTION(accountStatusChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onBackup
		#define GEODE_STATICS_onBackup
		GEODE_AS_STATIC_FUNCTION(onBackup) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onLogin
		#define GEODE_STATICS_onLogin
		GEODE_AS_STATIC_FUNCTION(onLogin) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onRegister
		#define GEODE_STATICS_onRegister
		GEODE_AS_STATIC_FUNCTION(onRegister) 
	#endif

	#ifndef GEODE_STATICS_onSync
		#define GEODE_STATICS_onSync
		GEODE_AS_STATIC_FUNCTION(onSync) 
	#endif

	#ifndef GEODE_STATICS_updatePage
		#define GEODE_STATICS_updatePage
		GEODE_AS_STATIC_FUNCTION(updatePage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerHidden
		#define GEODE_CONCEPT_CHECK_layerHidden
		GEODE_CONCEPT_FUNCTION_CHECK(layerHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_backupAccountFinished
		#define GEODE_CONCEPT_CHECK_backupAccountFinished
		GEODE_CONCEPT_FUNCTION_CHECK(backupAccountFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_backupAccountFailed
		#define GEODE_CONCEPT_CHECK_backupAccountFailed
		GEODE_CONCEPT_FUNCTION_CHECK(backupAccountFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncAccountFinished
		#define GEODE_CONCEPT_CHECK_syncAccountFinished
		GEODE_CONCEPT_FUNCTION_CHECK(syncAccountFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncAccountFailed
		#define GEODE_CONCEPT_CHECK_syncAccountFailed
		GEODE_CONCEPT_FUNCTION_CHECK(syncAccountFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountStatusChanged
		#define GEODE_CONCEPT_CHECK_accountStatusChanged
		GEODE_CONCEPT_FUNCTION_CHECK(accountStatusChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doBackup
		#define GEODE_CONCEPT_CHECK_doBackup
		GEODE_CONCEPT_FUNCTION_CHECK(doBackup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doSync
		#define GEODE_CONCEPT_CHECK_doSync
		GEODE_CONCEPT_FUNCTION_CHECK(doSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLayer
		#define GEODE_CONCEPT_CHECK_exitLayer
		GEODE_CONCEPT_FUNCTION_CHECK(exitLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideLoadingUI
		#define GEODE_CONCEPT_CHECK_hideLoadingUI
		GEODE_CONCEPT_FUNCTION_CHECK(hideLoadingUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBackup
		#define GEODE_CONCEPT_CHECK_onBackup
		GEODE_CONCEPT_FUNCTION_CHECK(onBackup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLogin
		#define GEODE_CONCEPT_CHECK_onLogin
		GEODE_CONCEPT_FUNCTION_CHECK(onLogin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMore
		#define GEODE_CONCEPT_CHECK_onMore
		GEODE_CONCEPT_FUNCTION_CHECK(onMore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRegister
		#define GEODE_CONCEPT_CHECK_onRegister
		GEODE_CONCEPT_FUNCTION_CHECK(onRegister) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSync
		#define GEODE_CONCEPT_CHECK_onSync
		GEODE_CONCEPT_FUNCTION_CHECK(onSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLoadingUI
		#define GEODE_CONCEPT_CHECK_showLoadingUI
		GEODE_CONCEPT_FUNCTION_CHECK(showLoadingUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleUI
		#define GEODE_CONCEPT_CHECK_toggleUI
		GEODE_CONCEPT_FUNCTION_CHECK(toggleUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePage
		#define GEODE_CONCEPT_CHECK_updatePage
		GEODE_CONCEPT_FUNCTION_CHECK(updatePage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountLayer> : ModifyBase<ModifyDerive<Der, AccountLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountLayer>>;
		using ModifyBase<ModifyDerive<Der, AccountLayer>>::ModifyBase;
		using Base = AccountLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d5b0, Default, AccountLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d710, Thiscall, AccountLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f4a0, Thiscall, AccountLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7eb80, Thiscall, AccountLayer, backupAccountFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ed30, Thiscall, AccountLayer, backupAccountFailed, BackupAccountError, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f040, Thiscall, AccountLayer, syncAccountFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f200, Thiscall, AccountLayer, syncAccountFailed, BackupAccountError, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e7a0, Thiscall, AccountLayer, accountStatusChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f390, Thiscall, AccountLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLayer, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLayer, doBackup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLayer, doSync, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLayer, exitLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLayer, hideLoadingUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e020, Thiscall, AccountLayer, onBackup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e630, Thiscall, AccountLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7de60, Thiscall, AccountLayer, onLogin, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e750, Thiscall, AccountLayer, onMore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7dea0, Thiscall, AccountLayer, onRegister, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e3b0, Thiscall, AccountLayer, onSync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLayer, showLoadingUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountLayer, toggleUI, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e7b0, Thiscall, AccountLayer, updatePage, bool)
		}
	};
}
