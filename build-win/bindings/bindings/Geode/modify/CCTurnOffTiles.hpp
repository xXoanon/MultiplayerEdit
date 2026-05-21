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

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_startWithTarget
		#define GEODE_STATICS_startWithTarget
		GEODE_AS_STATIC_FUNCTION(startWithTarget) 
	#endif

	#ifndef GEODE_STATICS_initWithDuration
		#define GEODE_STATICS_initWithDuration
		GEODE_AS_STATIC_FUNCTION(initWithDuration) 
	#endif

	#ifndef GEODE_STATICS_shuffle
		#define GEODE_STATICS_shuffle
		GEODE_AS_STATIC_FUNCTION(shuffle) 
	#endif

	#ifndef GEODE_STATICS_turnOffTile
		#define GEODE_STATICS_turnOffTile
		GEODE_AS_STATIC_FUNCTION(turnOffTile) 
	#endif

	#ifndef GEODE_STATICS_turnOnTile
		#define GEODE_STATICS_turnOnTile
		GEODE_AS_STATIC_FUNCTION(turnOnTile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithTarget
		#define GEODE_CONCEPT_CHECK_startWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(startWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDuration
		#define GEODE_CONCEPT_CHECK_initWithDuration
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shuffle
		#define GEODE_CONCEPT_CHECK_shuffle
		GEODE_CONCEPT_FUNCTION_CHECK(shuffle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_turnOffTile
		#define GEODE_CONCEPT_CHECK_turnOffTile
		GEODE_CONCEPT_FUNCTION_CHECK(turnOffTile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_turnOnTile
		#define GEODE_CONCEPT_CHECK_turnOnTile
		GEODE_CONCEPT_FUNCTION_CHECK(turnOnTile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTurnOffTiles> : ModifyBase<ModifyDerive<Der, cocos2d::CCTurnOffTiles>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTurnOffTiles>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTurnOffTiles>>::ModifyBase;
		using Base = cocos2d::CCTurnOffTiles;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTurnOffTiles@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTurnOffTiles)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCSize const&>::func(&cocos2d::CCTurnOffTiles::create)), Default, cocos2d::CCTurnOffTiles, create, float, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCSize const&, unsigned int>::func(&cocos2d::CCTurnOffTiles::create)), Default, cocos2d::CCTurnOffTiles, create, float, cocos2d::CCSize const&, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCTurnOffTiles::copyWithZone)), Thiscall, cocos2d::CCTurnOffTiles, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCTurnOffTiles::update)), Thiscall, cocos2d::CCTurnOffTiles, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCTurnOffTiles::startWithTarget)), Thiscall, cocos2d::CCTurnOffTiles, startWithTarget, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, cocos2d::CCSize const&, unsigned int>::func(&cocos2d::CCTurnOffTiles::initWithDuration)), Thiscall, cocos2d::CCTurnOffTiles, initWithDuration, float, cocos2d::CCSize const&, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int>::func(&cocos2d::CCTurnOffTiles::shuffle)), Thiscall, cocos2d::CCTurnOffTiles, shuffle, unsigned int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTurnOffTiles::turnOffTile)), Thiscall, cocos2d::CCTurnOffTiles, turnOffTile, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTurnOffTiles::turnOnTile)), Thiscall, cocos2d::CCTurnOffTiles, turnOnTile, cocos2d::CCPoint const&)
		}
	};
}
