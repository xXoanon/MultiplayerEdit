#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareCommentDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_shareCommentClosed
		#define GEODE_CONCEPT_CHECK_shareCommentClosed
		GEODE_CONCEPT_FUNCTION_CHECK(shareCommentClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareCommentDelegate> : ModifyBase<ModifyDerive<Der, ShareCommentDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareCommentDelegate>>;
		using ModifyBase<ModifyDerive<Der, ShareCommentDelegate>>::ModifyBase;
		using Base = ShareCommentDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShareCommentDelegate, shareCommentClosed, gd::string, ShareCommentLayer*)
		}
	};
}
