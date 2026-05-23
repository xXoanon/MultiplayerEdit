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

	#ifndef GEODE_STATICS_createObjects
		#define GEODE_STATICS_createObjects
		GEODE_AS_STATIC_FUNCTION(createObjects) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFull
		#define GEODE_STATICS_createObjectsFull
		GEODE_AS_STATIC_FUNCTION(createObjectsFull) 
	#endif

	#ifndef GEODE_STATICS_createUnlockObject
		#define GEODE_STATICS_createUnlockObject
		GEODE_AS_STATIC_FUNCTION(createUnlockObject) 
	#endif

	#ifndef GEODE_STATICS_incrementCount
		#define GEODE_STATICS_incrementCount
		GEODE_AS_STATIC_FUNCTION(incrementCount) 
	#endif

	#ifndef GEODE_STATICS_incrementDiamondsCount
		#define GEODE_STATICS_incrementDiamondsCount
		GEODE_AS_STATIC_FUNCTION(incrementDiamondsCount) 
	#endif

	#ifndef GEODE_STATICS_incrementMoonsCount
		#define GEODE_STATICS_incrementMoonsCount
		GEODE_AS_STATIC_FUNCTION(incrementMoonsCount) 
	#endif

	#ifndef GEODE_STATICS_incrementSpecialCount1
		#define GEODE_STATICS_incrementSpecialCount1
		GEODE_AS_STATIC_FUNCTION(incrementSpecialCount1) 
	#endif

	#ifndef GEODE_STATICS_incrementSpecialCount2
		#define GEODE_STATICS_incrementSpecialCount2
		GEODE_AS_STATIC_FUNCTION(incrementSpecialCount2) 
	#endif

	#ifndef GEODE_STATICS_incrementStarsCount
		#define GEODE_STATICS_incrementStarsCount
		GEODE_AS_STATIC_FUNCTION(incrementStarsCount) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float>::func(&CurrencyRewardLayer::create)), Default, CurrencyRewardLayer, create, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&CurrencyRewardLayer::update)), Default, CurrencyRewardLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<CurrencySpriteType, int, cocos2d::CCPoint, float>::func(&CurrencyRewardLayer::createObjects)), Default, CurrencyRewardLayer, createObjects, CurrencySpriteType, int, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<CurrencySpriteType, int, cocos2d::CCSprite*, cocos2d::CCPoint, float>::func(&CurrencyRewardLayer::createObjectsFull)), Default, CurrencyRewardLayer, createObjectsFull, CurrencySpriteType, int, cocos2d::CCSprite*, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, cocos2d::CCPoint, float>::func(&CurrencyRewardLayer::createUnlockObject)), Default, CurrencyRewardLayer, createUnlockObject, cocos2d::CCSprite*, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CurrencyRewardLayer::incrementCount)), Default, CurrencyRewardLayer, incrementCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CurrencyRewardLayer::incrementDiamondsCount)), Default, CurrencyRewardLayer, incrementDiamondsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CurrencyRewardLayer::incrementMoonsCount)), Default, CurrencyRewardLayer, incrementMoonsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CurrencyRewardLayer::incrementSpecialCount1)), Default, CurrencyRewardLayer, incrementSpecialCount1, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CurrencyRewardLayer::incrementSpecialCount2)), Default, CurrencyRewardLayer, incrementSpecialCount2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CurrencyRewardLayer::incrementStarsCount)), Default, CurrencyRewardLayer, incrementStarsCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float>::func(&CurrencyRewardLayer::init)), Default, CurrencyRewardLayer, init, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&CurrencyRewardLayer::pulseSprite)), Default, CurrencyRewardLayer, pulseSprite, cocos2d::CCSprite*)
		}
	};
}
