#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OnlineListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_loadListFinished
		#define GEODE_CONCEPT_CHECK_loadListFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadListFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadListFailed
		#define GEODE_CONCEPT_CHECK_loadListFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadListFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OnlineListDelegate> : ModifyBase<ModifyDerive<Der, OnlineListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OnlineListDelegate>>;
		using ModifyBase<ModifyDerive<Der, OnlineListDelegate>>::ModifyBase;
		using Base = OnlineListDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OnlineListDelegate, loadListFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OnlineListDelegate, loadListFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OnlineListDelegate, setupPageInfo, gd::string, char const*)
		}
	};
}
