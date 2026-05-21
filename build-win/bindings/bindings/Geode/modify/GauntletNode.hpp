#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_frameForType
		#define GEODE_STATICS_frameForType
		GEODE_AS_STATIC_FUNCTION(frameForType) 
	#endif

	#ifndef GEODE_STATICS_nameForType
		#define GEODE_STATICS_nameForType
		GEODE_AS_STATIC_FUNCTION(nameForType) 
	#endif

	#ifndef GEODE_STATICS_generateNode
		#define GEODE_STATICS_generateNode
		GEODE_AS_STATIC_FUNCTION(generateNode) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_frameForType
		#define GEODE_CONCEPT_CHECK_frameForType
		GEODE_CONCEPT_FUNCTION_CHECK(frameForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForType
		#define GEODE_CONCEPT_CHECK_nameForType
		GEODE_CONCEPT_FUNCTION_CHECK(nameForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateNode
		#define GEODE_CONCEPT_CHECK_generateNode
		GEODE_CONCEPT_FUNCTION_CHECK(generateNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaimReward
		#define GEODE_CONCEPT_CHECK_onClaimReward
		GEODE_CONCEPT_FUNCTION_CHECK(onClaimReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlock
		#define GEODE_CONCEPT_CHECK_onUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUnlockAnimation
		#define GEODE_CONCEPT_CHECK_showUnlockAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(showUnlockAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletNode> : ModifyBase<ModifyDerive<Der, GauntletNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletNode>>;
		using ModifyBase<ModifyDerive<Der, GauntletNode>>::ModifyBase;
		using Base = GauntletNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GauntletNode, create, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fde00, Default, GauntletNode, frameForType, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ff190, Default, GauntletNode, nameForType, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fc240, Thiscall, GauntletNode, generateNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GauntletNode, init, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fddc0, Thiscall, GauntletNode, onClaimReward, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GauntletNode, onUnlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GauntletNode, showUnlockAnimation, )
		}
	};
}
