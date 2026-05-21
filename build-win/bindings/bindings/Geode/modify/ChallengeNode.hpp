#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChallengeNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaimReward
		#define GEODE_CONCEPT_CHECK_onClaimReward
		GEODE_CONCEPT_FUNCTION_CHECK(onClaimReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeLabel
		#define GEODE_CONCEPT_CHECK_updateTimeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ChallengeNode> : ModifyBase<ModifyDerive<Der, ChallengeNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChallengeNode>>;
		using ModifyBase<ModifyDerive<Der, ChallengeNode>>::ModifyBase;
		using Base = ChallengeNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ChallengeNode, create, GJChallengeItem*, ChallengesPage*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86d30, Thiscall, ChallengeNode, init, GJChallengeItem*, ChallengesPage*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x87d80, Thiscall, ChallengeNode, onClaimReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ChallengeNode, updateTimeLabel, gd::string)
		}
	};
}
