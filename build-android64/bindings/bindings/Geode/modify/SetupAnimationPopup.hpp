#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAnimationPopup.hpp>
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

	#ifndef GEODE_STATICS_onAnimationIDArrow
		#define GEODE_STATICS_onAnimationIDArrow
		GEODE_AS_STATIC_FUNCTION(onAnimationIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_updateAnimationID
		#define GEODE_STATICS_updateAnimationID
		GEODE_AS_STATIC_FUNCTION(updateAnimationID) 
	#endif

	#ifndef GEODE_STATICS_updateAnimationTextInputLabel
		#define GEODE_STATICS_updateAnimationTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateAnimationTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_onAnimationIDArrow
		#define GEODE_CONCEPT_CHECK_onAnimationIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onAnimationIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimationID
		#define GEODE_CONCEPT_CHECK_updateAnimationID
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimationID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimationTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateAnimationTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimationTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAnimationPopup> : ModifyBase<ModifyDerive<Der, SetupAnimationPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAnimationPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAnimationPopup>>::ModifyBase;
		using Base = SetupAnimationPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*>::func(&SetupAnimationPopup::create)), Default, SetupAnimationPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupAnimationPopup::determineStartValues)), Default, SetupAnimationPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupAnimationPopup::onClose)), Default, SetupAnimationPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SetupAnimationPopup::textChanged)), Default, SetupAnimationPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*>::func(&SetupAnimationPopup::init)), Default, SetupAnimationPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupAnimationPopup::onAnimationIDArrow)), Default, SetupAnimationPopup, onAnimationIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupAnimationPopup::onTargetIDArrow)), Default, SetupAnimationPopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupAnimationPopup::updateAnimationID)), Default, SetupAnimationPopup, updateAnimationID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupAnimationPopup::updateAnimationTextInputLabel)), Default, SetupAnimationPopup, updateAnimationTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupAnimationPopup::updateTargetID)), Default, SetupAnimationPopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupAnimationPopup::updateTextInputLabel)), Default, SetupAnimationPopup, updateTextInputLabel, )
		}
	};
}
