#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCollisionTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onActivateOnExit
		#define GEODE_STATICS_onActivateOnExit
		GEODE_AS_STATIC_FUNCTION(onActivateOnExit) 
	#endif

	#ifndef GEODE_STATICS_onEnableGroup
		#define GEODE_STATICS_onEnableGroup
		GEODE_AS_STATIC_FUNCTION(onEnableGroup) 
	#endif

	#ifndef GEODE_STATICS_onItemID2Arrow
		#define GEODE_STATICS_onItemID2Arrow
		GEODE_AS_STATIC_FUNCTION(onItemID2Arrow) 
	#endif

	#ifndef GEODE_STATICS_onItemIDArrow
		#define GEODE_STATICS_onItemIDArrow
		GEODE_AS_STATIC_FUNCTION(onItemIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetP1
		#define GEODE_STATICS_onTargetP1
		GEODE_AS_STATIC_FUNCTION(onTargetP1) 
	#endif

	#ifndef GEODE_STATICS_onTargetP2
		#define GEODE_STATICS_onTargetP2
		GEODE_AS_STATIC_FUNCTION(onTargetP2) 
	#endif

	#ifndef GEODE_STATICS_onTargetPP
		#define GEODE_STATICS_onTargetPP
		GEODE_AS_STATIC_FUNCTION(onTargetPP) 
	#endif

	#ifndef GEODE_STATICS_updateItemID
		#define GEODE_STATICS_updateItemID
		GEODE_AS_STATIC_FUNCTION(updateItemID) 
	#endif

	#ifndef GEODE_STATICS_updateItemID2
		#define GEODE_STATICS_updateItemID2
		GEODE_AS_STATIC_FUNCTION(updateItemID2) 
	#endif

	#ifndef GEODE_STATICS_updateItemID2InputLabel
		#define GEODE_STATICS_updateItemID2InputLabel
		GEODE_AS_STATIC_FUNCTION(updateItemID2InputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateItemIDInputLabel
		#define GEODE_STATICS_updateItemIDInputLabel
		GEODE_AS_STATIC_FUNCTION(updateItemIDInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTargetIDInputLabel
		#define GEODE_STATICS_updateTargetIDInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTargetIDInputLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onActivateOnExit
		#define GEODE_CONCEPT_CHECK_onActivateOnExit
		GEODE_CONCEPT_FUNCTION_CHECK(onActivateOnExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnableGroup
		#define GEODE_CONCEPT_CHECK_onEnableGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onEnableGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onItemID2Arrow
		#define GEODE_CONCEPT_CHECK_onItemID2Arrow
		GEODE_CONCEPT_FUNCTION_CHECK(onItemID2Arrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onItemIDArrow
		#define GEODE_CONCEPT_CHECK_onItemIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onItemIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetP1
		#define GEODE_CONCEPT_CHECK_onTargetP1
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetP1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetP2
		#define GEODE_CONCEPT_CHECK_onTargetP2
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetP2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetPP
		#define GEODE_CONCEPT_CHECK_onTargetPP
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetPP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemID
		#define GEODE_CONCEPT_CHECK_updateItemID
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemID2
		#define GEODE_CONCEPT_CHECK_updateItemID2
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemID2InputLabel
		#define GEODE_CONCEPT_CHECK_updateItemID2InputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemID2InputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemIDInputLabel
		#define GEODE_CONCEPT_CHECK_updateItemIDInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemIDInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetIDInputLabel
		#define GEODE_CONCEPT_CHECK_updateTargetIDInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetIDInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupCollisionTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupCollisionTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCollisionTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCollisionTriggerPopup>>::ModifyBase;
		using Base = SetupCollisionTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*>::func(&SetupCollisionTriggerPopup::create)), Default, SetupCollisionTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupCollisionTriggerPopup::determineStartValues)), Default, SetupCollisionTriggerPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onClose)), Default, SetupCollisionTriggerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SetupCollisionTriggerPopup::textChanged)), Default, SetupCollisionTriggerPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*>::func(&SetupCollisionTriggerPopup::init)), Default, SetupCollisionTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onActivateOnExit)), Default, SetupCollisionTriggerPopup, onActivateOnExit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onEnableGroup)), Default, SetupCollisionTriggerPopup, onEnableGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onItemID2Arrow)), Default, SetupCollisionTriggerPopup, onItemID2Arrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onItemIDArrow)), Default, SetupCollisionTriggerPopup, onItemIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onTargetIDArrow)), Default, SetupCollisionTriggerPopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onTargetP1)), Default, SetupCollisionTriggerPopup, onTargetP1, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onTargetP2)), Default, SetupCollisionTriggerPopup, onTargetP2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onTargetPP)), Default, SetupCollisionTriggerPopup, onTargetPP, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupCollisionTriggerPopup::updateItemID)), Default, SetupCollisionTriggerPopup, updateItemID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupCollisionTriggerPopup::updateItemID2)), Default, SetupCollisionTriggerPopup, updateItemID2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupCollisionTriggerPopup::updateItemID2InputLabel)), Default, SetupCollisionTriggerPopup, updateItemID2InputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupCollisionTriggerPopup::updateItemIDInputLabel)), Default, SetupCollisionTriggerPopup, updateItemIDInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupCollisionTriggerPopup::updateTargetID)), Default, SetupCollisionTriggerPopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupCollisionTriggerPopup::updateTargetIDInputLabel)), Default, SetupCollisionTriggerPopup, updateTargetIDInputLabel, )
		}
	};
}
