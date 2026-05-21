#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelListCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_loadFromList
		#define GEODE_STATICS_loadFromList
		GEODE_AS_STATIC_FUNCTION(loadFromList) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onListInfo
		#define GEODE_STATICS_onListInfo
		GEODE_AS_STATIC_FUNCTION(onListInfo) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromList
		#define GEODE_CONCEPT_CHECK_loadFromList
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClick
		#define GEODE_CONCEPT_CHECK_onClick
		GEODE_CONCEPT_FUNCTION_CHECK(onClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onListInfo
		#define GEODE_CONCEPT_CHECK_onListInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onListInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelListCell> : ModifyBase<ModifyDerive<Der, LevelListCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelListCell>>;
		using ModifyBase<ModifyDerive<Der, LevelListCell>>::ModifyBase;
		using Base = LevelListCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0xbec30, Thiscall, LevelListCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListCell, create, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, LevelListCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbecb0, Thiscall, LevelListCell, loadFromList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc00e0, Thiscall, LevelListCell, onClick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc01f0, Thiscall, LevelListCell, onListInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc0210, Thiscall, LevelListCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListCell, updateBGColor, int)
		}
	};
}
