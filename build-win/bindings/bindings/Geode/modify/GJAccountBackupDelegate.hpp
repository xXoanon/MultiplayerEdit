#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountBackupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_backupAccountFinished
		#define GEODE_CONCEPT_CHECK_backupAccountFinished
		GEODE_CONCEPT_FUNCTION_CHECK(backupAccountFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_backupAccountFailed
		#define GEODE_CONCEPT_CHECK_backupAccountFailed
		GEODE_CONCEPT_FUNCTION_CHECK(backupAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountBackupDelegate> : ModifyBase<ModifyDerive<Der, GJAccountBackupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountBackupDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountBackupDelegate>>::ModifyBase;
		using Base = GJAccountBackupDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountBackupDelegate, backupAccountFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountBackupDelegate, backupAccountFailed, BackupAccountError, int)
		}
	};
}
