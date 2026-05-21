#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindingsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_commandForKey
		#define GEODE_STATICS_commandForKey
		GEODE_AS_STATIC_FUNCTION(commandForKey) 
	#endif

	#ifndef GEODE_STATICS_commandForKeyMods
		#define GEODE_STATICS_commandForKeyMods
		GEODE_AS_STATIC_FUNCTION(commandForKeyMods) 
	#endif

	#ifndef GEODE_STATICS_commandForKeyNoMods
		#define GEODE_STATICS_commandForKeyNoMods
		GEODE_AS_STATIC_FUNCTION(commandForKeyNoMods) 
	#endif

	#ifndef GEODE_STATICS_commandToKeyForGroup
		#define GEODE_STATICS_commandToKeyForGroup
		GEODE_AS_STATIC_FUNCTION(commandToKeyForGroup) 
	#endif

	#ifndef GEODE_STATICS_groupForCommand
		#define GEODE_STATICS_groupForCommand
		GEODE_AS_STATIC_FUNCTION(groupForCommand) 
	#endif

	#ifndef GEODE_STATICS_keyForCommand
		#define GEODE_STATICS_keyForCommand
		GEODE_AS_STATIC_FUNCTION(keyForCommand) 
	#endif

	#ifndef GEODE_STATICS_keyToCommandForGroup
		#define GEODE_STATICS_keyToCommandForGroup
		GEODE_AS_STATIC_FUNCTION(keyToCommandForGroup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commandForKey
		#define GEODE_CONCEPT_CHECK_commandForKey
		GEODE_CONCEPT_FUNCTION_CHECK(commandForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commandForKeyMods
		#define GEODE_CONCEPT_CHECK_commandForKeyMods
		GEODE_CONCEPT_FUNCTION_CHECK(commandForKeyMods) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commandForKeyNoMods
		#define GEODE_CONCEPT_CHECK_commandForKeyNoMods
		GEODE_CONCEPT_FUNCTION_CHECK(commandForKeyNoMods) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commandToKeyForGroup
		#define GEODE_CONCEPT_CHECK_commandToKeyForGroup
		GEODE_CONCEPT_FUNCTION_CHECK(commandToKeyForGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupForCommand
		#define GEODE_CONCEPT_CHECK_groupForCommand
		GEODE_CONCEPT_FUNCTION_CHECK(groupForCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyForCommand
		#define GEODE_CONCEPT_CHECK_keyForCommand
		GEODE_CONCEPT_FUNCTION_CHECK(keyForCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyToCommandForGroup
		#define GEODE_CONCEPT_CHECK_keyToCommandForGroup
		GEODE_CONCEPT_FUNCTION_CHECK(keyToCommandForGroup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindingsManager> : ModifyBase<ModifyDerive<Der, KeybindingsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsManager>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsManager>>::ModifyBase;
		using Base = KeybindingsManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0d80, Default, KeybindingsManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsManager, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsManager, commandForKey, cocos2d::enumKeyCodes, GJKeyGroup, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsManager, commandForKeyMods, cocos2d::enumKeyCodes, GJKeyGroup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsManager, commandForKeyNoMods, cocos2d::enumKeyCodes, GJKeyGroup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsManager, commandToKeyForGroup, GJKeyGroup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsManager, groupForCommand, GJKeyCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsManager, keyForCommand, GJKeyCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindingsManager, keyToCommandForGroup, GJKeyGroup)
		}
	};
}
