#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CurrencyRewardLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFull
		#define GEODE_STATICS_createObjectsFull
		GEODE_AS_STATIC_FUNCTION(createObjectsFull) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_pulseSprite
		#define GEODE_STATICS_pulseSprite
		GEODE_AS_STATIC_FUNCTION(pulseSprite) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjects
		#define GEODE_CONCEPT_CHECK_createObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFull
		#define GEODE_CONCEPT_CHECK_createObjectsFull
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createUnlockObject
		#define GEODE_CONCEPT_CHECK_createUnlockObject
		GEODE_CONCEPT_FUNCTION_CHECK(createUnlockObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementCount
		#define GEODE_CONCEPT_CHECK_incrementCount
		GEODE_CONCEPT_FUNCTION_CHECK(incrementCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementDiamondsCount
		#define GEODE_CONCEPT_CHECK_incrementDiamondsCount
		GEODE_CONCEPT_FUNCTION_CHECK(incrementDiamondsCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementMoonsCount
		#define GEODE_CONCEPT_CHECK_incrementMoonsCount
		GEODE_CONCEPT_FUNCTION_CHECK(incrementMoonsCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementSpecialCount1
		#define GEODE_CONCEPT_CHECK_incrementSpecialCount1
		GEODE_CONCEPT_FUNCTION_CHECK(incrementSpecialCount1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementSpecialCount2
		#define GEODE_CONCEPT_CHECK_incrementSpecialCount2
		GEODE_CONCEPT_FUNCTION_CHECK(incrementSpecialCount2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementStarsCount
		#define GEODE_CONCEPT_CHECK_incrementStarsCount
		GEODE_CONCEPT_FUNCTION_CHECK(incrementStarsCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pulseSprite
		#define GEODE_CONCEPT_CHECK_pulseSprite
		GEODE_CONCEPT_FUNCTION_CHECK(pulseSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CurrencyRewardLayer> : ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>>;
		using ModifyBase<ModifyDerive<Der, CurrencyRewardLayer>>::ModifyBase;
		using Base = CurrencyRewardLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9fc10, Default, CurrencyRewardLayer, create, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa2940, Thiscall, CurrencyRewardLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, createObjects, CurrencySpriteType, int, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa1c30, Thiscall, CurrencyRewardLayer, createObjectsFull, CurrencySpriteType, int, cocos2d::CCSprite*, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, createUnlockObject, cocos2d::CCSprite*, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, incrementCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, incrementDiamondsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, incrementMoonsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, incrementSpecialCount1, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, incrementSpecialCount2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CurrencyRewardLayer, incrementStarsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9fe60, Thiscall, CurrencyRewardLayer, init, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa3310, Thiscall, CurrencyRewardLayer, pulseSprite, cocos2d::CCSprite*)
		}
	};
}
