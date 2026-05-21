#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJChallengeItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromString
		#define GEODE_STATICS_createFromString
		GEODE_AS_STATIC_FUNCTION(createFromString) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromString
		#define GEODE_CONCEPT_CHECK_createFromString
		GEODE_CONCEPT_FUNCTION_CHECK(createFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementCount
		#define GEODE_CONCEPT_CHECK_incrementCount
		GEODE_CONCEPT_FUNCTION_CHECK(incrementCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCount
		#define GEODE_CONCEPT_CHECK_setCount
		GEODE_CONCEPT_FUNCTION_CHECK(setCount) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJChallengeItem> : ModifyBase<ModifyDerive<Der, GJChallengeItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJChallengeItem>>;
		using ModifyBase<ModifyDerive<Der, GJChallengeItem>>::ModifyBase;
		using Base = GJChallengeItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChallengeItem, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f49f0, Default, GJChallengeItem, create, GJChallengeType, int, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4790, Default, GJChallengeItem, createFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChallengeItem, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4b70, Thiscall, GJChallengeItem, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChallengeItem, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChallengeItem, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChallengeItem, incrementCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChallengeItem, init, GJChallengeType, int, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJChallengeItem, setCount, int)
		}
	};
}
