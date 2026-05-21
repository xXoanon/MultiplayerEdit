#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupReverbPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onReverb
		#define GEODE_STATICS_onReverb
		GEODE_AS_STATIC_FUNCTION(onReverb) 
	#endif

	#ifndef GEODE_STATICS_updateReverbLabel
		#define GEODE_STATICS_updateReverbLabel
		GEODE_AS_STATIC_FUNCTION(updateReverbLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlay
		#define GEODE_CONCEPT_CHECK_onPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReverb
		#define GEODE_CONCEPT_CHECK_onReverb
		GEODE_CONCEPT_FUNCTION_CHECK(onReverb) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateReverbLabel
		#define GEODE_CONCEPT_CHECK_updateReverbLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateReverbLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupReverbPopup> : ModifyBase<ModifyDerive<Der, SetupReverbPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupReverbPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupReverbPopup>>::ModifyBase;
		using Base = SetupReverbPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupReverbPopup, create, SFXTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4470b0, Thiscall, SetupReverbPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x446820, Thiscall, SetupReverbPopup, init, SFXTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x446de0, Thiscall, SetupReverbPopup, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x446ed0, Thiscall, SetupReverbPopup, onReverb, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x446f60, Thiscall, SetupReverbPopup, updateReverbLabel, )
		}
	};
}
