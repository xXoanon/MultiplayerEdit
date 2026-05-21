#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_getDelta
		#define GEODE_STATICS_getDelta
		GEODE_AS_STATIC_FUNCTION(getDelta) 
	#endif

	#ifndef GEODE_STATICS_placeTile
		#define GEODE_STATICS_placeTile
		GEODE_AS_STATIC_FUNCTION(placeTile) 
	#endif

	#ifndef GEODE_STATICS_shuffle
		#define GEODE_STATICS_shuffle
		GEODE_AS_STATIC_FUNCTION(shuffle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelta
		#define GEODE_CONCEPT_CHECK_getDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_placeTile
		#define GEODE_CONCEPT_CHECK_placeTile
		GEODE_CONCEPT_FUNCTION_CHECK(placeTile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shuffle
		#define GEODE_CONCEPT_CHECK_shuffle
		GEODE_CONCEPT_FUNCTION_CHECK(shuffle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCShuffleTiles> : ModifyBase<ModifyDerive<Der, cocos2d::CCShuffleTiles>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCShuffleTiles>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCShuffleTiles>>::ModifyBase;
		using Base = cocos2d::CCShuffleTiles;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCShuffleTiles@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCShuffleTiles)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCSize const&, unsigned int>::func(&cocos2d::CCShuffleTiles::create)), Default, cocos2d::CCShuffleTiles, create, float, cocos2d::CCSize const&, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, cocos2d::CCSize const&, unsigned int>::func(&cocos2d::CCShuffleTiles::initWithDuration)), Thiscall, cocos2d::CCShuffleTiles, initWithDuration, float, cocos2d::CCSize const&, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCShuffleTiles::startWithTarget)), Thiscall, cocos2d::CCShuffleTiles, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCShuffleTiles::update)), Thiscall, cocos2d::CCShuffleTiles, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCShuffleTiles::copyWithZone)), Thiscall, cocos2d::CCShuffleTiles, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCShuffleTiles::getDelta)), Thiscall, cocos2d::CCShuffleTiles, getDelta, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::Tile*>::func(&cocos2d::CCShuffleTiles::placeTile)), Thiscall, cocos2d::CCShuffleTiles, placeTile, cocos2d::CCPoint const&, cocos2d::Tile*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int>::func(&cocos2d::CCShuffleTiles::shuffle)), Thiscall, cocos2d::CCShuffleTiles, shuffle, unsigned int*, unsigned int)
		}
	};
}
