#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJScoreCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromScore
		#define GEODE_CONCEPT_CHECK_loadFromScore
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBan
		#define GEODE_CONCEPT_CHECK_onBan
		GEODE_CONCEPT_FUNCTION_CHECK(onBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCheck
		#define GEODE_CONCEPT_CHECK_onCheck
		GEODE_CONCEPT_FUNCTION_CHECK(onCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMoreLevels
		#define GEODE_CONCEPT_CHECK_onMoreLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onMoreLevels) 
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
	struct ModifyDerive<Der, GJScoreCell> : ModifyBase<ModifyDerive<Der, GJScoreCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJScoreCell>>;
		using ModifyBase<ModifyDerive<Der, GJScoreCell>>::ModifyBase;
		using Base = GJScoreCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4680, Thiscall, GJScoreCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, GJScoreCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb9bb0, Thiscall, GJScoreCell, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8490, Thiscall, GJScoreCell, loadFromScore, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScoreCell, onBan, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScoreCell, onCheck, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScoreCell, onMoreLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb9a30, Thiscall, GJScoreCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScoreCell, updateBGColor, int)
		}
	};
}
