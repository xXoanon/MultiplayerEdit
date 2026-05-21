#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUserScore.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCurrentUser
		#define GEODE_STATICS_isCurrentUser
		GEODE_AS_STATIC_FUNCTION(isCurrentUser) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCurrentUser
		#define GEODE_CONCEPT_CHECK_isCurrentUser
		GEODE_CONCEPT_FUNCTION_CHECK(isCurrentUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mergeWithScore
		#define GEODE_CONCEPT_CHECK_mergeWithScore
		GEODE_CONCEPT_FUNCTION_CHECK(mergeWithScore) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJUserScore> : ModifyBase<ModifyDerive<Der, GJUserScore>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUserScore>>;
		using ModifyBase<ModifyDerive<Der, GJUserScore>>::ModifyBase;
		using Base = GJUserScore;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x142100, Thiscall, GJUserScore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUserScore, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1710b0, Default, GJUserScore, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172b50, Thiscall, GJUserScore, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172ba0, Thiscall, GJUserScore, isCurrentUser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUserScore, mergeWithScore, GJUserScore*)
		}
	};
}
