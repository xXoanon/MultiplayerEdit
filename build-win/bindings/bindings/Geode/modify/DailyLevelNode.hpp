#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DailyLevelNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_onSkipLevel
		#define GEODE_STATICS_onSkipLevel
		GEODE_AS_STATIC_FUNCTION(onSkipLevel) 
	#endif

	#ifndef GEODE_STATICS_showSkipButton
		#define GEODE_STATICS_showSkipButton
		GEODE_AS_STATIC_FUNCTION(showSkipButton) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaimReward
		#define GEODE_CONCEPT_CHECK_onClaimReward
		GEODE_CONCEPT_FUNCTION_CHECK(onClaimReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSkipLevel
		#define GEODE_CONCEPT_CHECK_onSkipLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onSkipLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showSkipButton
		#define GEODE_CONCEPT_CHECK_showSkipButton
		GEODE_CONCEPT_FUNCTION_CHECK(showSkipButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeLabel
		#define GEODE_CONCEPT_CHECK_updateTimeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DailyLevelNode> : ModifyBase<ModifyDerive<Der, DailyLevelNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DailyLevelNode>>;
		using ModifyBase<ModifyDerive<Der, DailyLevelNode>>::ModifyBase;
		using Base = DailyLevelNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DailyLevelNode, create, GJGameLevel*, DailyLevelPage*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd3160, Thiscall, DailyLevelNode, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd20c0, Thiscall, DailyLevelNode, init, GJGameLevel*, DailyLevelPage*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd2e20, Thiscall, DailyLevelNode, onClaimReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd2f40, Thiscall, DailyLevelNode, onSkipLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd2dc0, Thiscall, DailyLevelNode, showSkipButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DailyLevelNode, updateTimeLabel, gd::string)
		}
	};
}
