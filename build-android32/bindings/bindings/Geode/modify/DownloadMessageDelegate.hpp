#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DownloadMessageDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_downloadMessageFinished
		#define GEODE_CONCEPT_CHECK_downloadMessageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMessageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadMessageFailed
		#define GEODE_CONCEPT_CHECK_downloadMessageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMessageFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DownloadMessageDelegate> : ModifyBase<ModifyDerive<Der, DownloadMessageDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DownloadMessageDelegate>>;
		using ModifyBase<ModifyDerive<Der, DownloadMessageDelegate>>::ModifyBase;
		using Base = DownloadMessageDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DownloadMessageDelegate, downloadMessageFinished, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DownloadMessageDelegate, downloadMessageFailed, int)
		}
	};
}
