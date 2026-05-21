#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_commentUploadFinished
		#define GEODE_CONCEPT_CHECK_commentUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentUploadFailed
		#define GEODE_CONCEPT_CHECK_commentUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentDeleteFailed
		#define GEODE_CONCEPT_CHECK_commentDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(commentDeleteFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CommentUploadDelegate> : ModifyBase<ModifyDerive<Der, CommentUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CommentUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, CommentUploadDelegate>>::ModifyBase;
		using Base = CommentUploadDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentUploadDelegate, commentUploadFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentUploadDelegate, commentUploadFailed, int, CommentError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentUploadDelegate, commentDeleteFailed, int, int)
		}
	};
}
