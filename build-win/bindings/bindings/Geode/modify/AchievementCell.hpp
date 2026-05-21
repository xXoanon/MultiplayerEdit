#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_loadFromDict
		#define GEODE_STATICS_loadFromDict
		GEODE_AS_STATIC_FUNCTION(loadFromDict) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromDict
		#define GEODE_CONCEPT_CHECK_loadFromDict
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementCell> : ModifyBase<ModifyDerive<Der, AchievementCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementCell>>;
		using ModifyBase<ModifyDerive<Der, AchievementCell>>::ModifyBase;
		using Base = AchievementCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, AchievementCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xac860, Thiscall, AchievementCell, loadFromDict, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementCell, updateBGColor, int)
		}
	};
}
