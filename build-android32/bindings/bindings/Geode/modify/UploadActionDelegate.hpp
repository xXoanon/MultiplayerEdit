#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadActionDelegate> : ModifyBase<ModifyDerive<Der, UploadActionDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadActionDelegate>>;
		using ModifyBase<ModifyDerive<Der, UploadActionDelegate>>::ModifyBase;
		using Base = UploadActionDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UploadActionDelegate, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UploadActionDelegate, uploadActionFailed, int, int)
		}
	};
}
