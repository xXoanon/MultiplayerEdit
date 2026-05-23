#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_listUploadFinished
		#define GEODE_CONCEPT_CHECK_listUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(listUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listUploadFailed
		#define GEODE_CONCEPT_CHECK_listUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(listUploadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ListUploadDelegate> : ModifyBase<ModifyDerive<Der, ListUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, ListUploadDelegate>>::ModifyBase;
		using Base = ListUploadDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ListUploadDelegate, listUploadFinished, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ListUploadDelegate, listUploadFailed, GJLevelList*, int)
		}
	};
}
