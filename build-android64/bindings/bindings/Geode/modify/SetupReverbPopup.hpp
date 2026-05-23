#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupReverbPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXTriggerGameObject*, cocos2d::CCArray*>::func(&SetupReverbPopup::create)), Default, SetupReverbPopup, create, SFXTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupReverbPopup::onClose)), Default, SetupReverbPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXTriggerGameObject*, cocos2d::CCArray*>::func(&SetupReverbPopup::init)), Default, SetupReverbPopup, init, SFXTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupReverbPopup::onPlay)), Default, SetupReverbPopup, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupReverbPopup::onReverb)), Default, SetupReverbPopup, onReverb, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupReverbPopup::updateReverbLabel)), Default, SetupReverbPopup, updateReverbLabel, )
		}
	};
}
