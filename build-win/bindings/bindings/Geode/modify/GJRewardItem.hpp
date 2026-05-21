#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRewardItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createSpecial
		#define GEODE_STATICS_createSpecial
		GEODE_AS_STATIC_FUNCTION(createSpecial) 
	#endif

	#ifndef GEODE_STATICS_createWithObject
		#define GEODE_STATICS_createWithObject
		GEODE_AS_STATIC_FUNCTION(createWithObject) 
	#endif

	#ifndef GEODE_STATICS_createWithObjects
		#define GEODE_STATICS_createWithObjects
		GEODE_AS_STATIC_FUNCTION(createWithObjects) 
	#endif

	#ifndef GEODE_STATICS_rewardItemToStat
		#define GEODE_STATICS_rewardItemToStat
		GEODE_AS_STATIC_FUNCTION(rewardItemToStat) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpecial
		#define GEODE_CONCEPT_CHECK_createSpecial
		GEODE_CONCEPT_FUNCTION_CHECK(createSpecial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithObject
		#define GEODE_CONCEPT_CHECK_createWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(createWithObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithObjects
		#define GEODE_CONCEPT_CHECK_createWithObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createWithObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextShardType
		#define GEODE_CONCEPT_CHECK_getNextShardType
		GEODE_CONCEPT_FUNCTION_CHECK(getNextShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomNonMaxShardType
		#define GEODE_CONCEPT_CHECK_getRandomNonMaxShardType
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomNonMaxShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomShardType
		#define GEODE_CONCEPT_CHECK_getRandomShardType
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isShardType
		#define GEODE_CONCEPT_CHECK_isShardType
		GEODE_CONCEPT_FUNCTION_CHECK(isShardType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardItemToStat
		#define GEODE_CONCEPT_CHECK_rewardItemToStat
		GEODE_CONCEPT_FUNCTION_CHECK(rewardItemToStat) 
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

	#ifndef GEODE_CONCEPT_CHECK_getRewardCount
		#define GEODE_CONCEPT_CHECK_getRewardCount
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardObjectForType
		#define GEODE_CONCEPT_CHECK_getRewardObjectForType
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardObjectForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRewardItem> : ModifyBase<ModifyDerive<Der, GJRewardItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRewardItem>>;
		using ModifyBase<ModifyDerive<Der, GJRewardItem>>::ModifyBase;
		using Base = GJRewardItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3e50, Default, GJRewardItem, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4190, Default, GJRewardItem, create, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3fa0, Default, GJRewardItem, createSpecial, GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3e90, Default, GJRewardItem, createWithObject, GJRewardType, GJRewardObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3f20, Default, GJRewardItem, createWithObjects, GJRewardType, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, getNextShardType, SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, getRandomNonMaxShardType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, getRandomShardType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, isShardType, SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f44c0, Default, GJRewardItem, rewardItemToStat, SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4720, Thiscall, GJRewardItem, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, getRewardCount, SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRewardItem, getRewardObjectForType, SpecialRewardItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4260, Thiscall, GJRewardItem, init, int, int, gd::string)
		}
	};
}
