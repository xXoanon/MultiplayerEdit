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

	#ifndef GEODE_STATICS_getGrid
		#define GEODE_STATICS_getGrid
		GEODE_AS_STATIC_FUNCTION(getGrid) 
	#endif

	#ifndef GEODE_STATICS_originalTile
		#define GEODE_STATICS_originalTile
		GEODE_AS_STATIC_FUNCTION(originalTile) 
	#endif

	#ifndef GEODE_STATICS_setTile
		#define GEODE_STATICS_setTile
		GEODE_AS_STATIC_FUNCTION(setTile) 
	#endif

	#ifndef GEODE_STATICS_tile
		#define GEODE_STATICS_tile
		GEODE_AS_STATIC_FUNCTION(tile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGrid
		#define GEODE_CONCEPT_CHECK_getGrid
		GEODE_CONCEPT_FUNCTION_CHECK(getGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_originalTile
		#define GEODE_CONCEPT_CHECK_originalTile
		GEODE_CONCEPT_FUNCTION_CHECK(originalTile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTile
		#define GEODE_CONCEPT_CHECK_setTile
		GEODE_CONCEPT_FUNCTION_CHECK(setTile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tile
		#define GEODE_CONCEPT_CHECK_tile
		GEODE_CONCEPT_FUNCTION_CHECK(tile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTiledGrid3DAction> : ModifyBase<ModifyDerive<Der, cocos2d::CCTiledGrid3DAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTiledGrid3DAction>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTiledGrid3DAction>>::ModifyBase;
		using Base = cocos2d::CCTiledGrid3DAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCSize const&>::func(&cocos2d::CCTiledGrid3DAction::create)), Default, cocos2d::CCTiledGrid3DAction, create, float, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTiledGrid3DAction::getGrid)), Thiscall, cocos2d::CCTiledGrid3DAction, getGrid, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTiledGrid3DAction::originalTile)), Thiscall, cocos2d::CCTiledGrid3DAction, originalTile, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::ccQuad3 const&>::func(&cocos2d::CCTiledGrid3DAction::setTile)), Thiscall, cocos2d::CCTiledGrid3DAction, setTile, cocos2d::CCPoint const&, cocos2d::ccQuad3 const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTiledGrid3DAction::tile)), Thiscall, cocos2d::CCTiledGrid3DAction, tile, cocos2d::CCPoint const&)
		}
	};
}
