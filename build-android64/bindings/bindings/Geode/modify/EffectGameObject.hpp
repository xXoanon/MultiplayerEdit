#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EffectGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_canReverse
		#define GEODE_STATICS_canReverse
		GEODE_AS_STATIC_FUNCTION(canReverse) 
	#endif

	#ifndef GEODE_STATICS_isSpecialSpawnObject
		#define GEODE_STATICS_isSpecialSpawnObject
		GEODE_AS_STATIC_FUNCTION(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_STATICS_canBeOrdered
		#define GEODE_STATICS_canBeOrdered
		GEODE_AS_STATIC_FUNCTION(canBeOrdered) 
	#endif

	#ifndef GEODE_STATICS_getObjectLabel
		#define GEODE_STATICS_getObjectLabel
		GEODE_AS_STATIC_FUNCTION(getObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_setObjectLabel
		#define GEODE_STATICS_setObjectLabel
		GEODE_AS_STATIC_FUNCTION(setObjectLabel) 
	#endif

	#ifndef GEODE_STATICS_stateSensitiveOff
		#define GEODE_STATICS_stateSensitiveOff
		GEODE_AS_STATIC_FUNCTION(stateSensitiveOff) 
	#endif

	#ifndef GEODE_STATICS_canSpawnTriggers
		#define GEODE_STATICS_canSpawnTriggers
		GEODE_AS_STATIC_FUNCTION(canSpawnTriggers) 
	#endif

	#ifndef GEODE_STATICS_getTargetColorIndex
		#define GEODE_STATICS_getTargetColorIndex
		GEODE_AS_STATIC_FUNCTION(getTargetColorIndex) 
	#endif

	#ifndef GEODE_STATICS_hasSpawnTargetID
		#define GEODE_STATICS_hasSpawnTargetID
		GEODE_AS_STATIC_FUNCTION(hasSpawnTargetID) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_playTriggerEffect
		#define GEODE_STATICS_playTriggerEffect
		GEODE_AS_STATIC_FUNCTION(playTriggerEffect) 
	#endif

	#ifndef GEODE_STATICS_resetSpawnTrigger
		#define GEODE_STATICS_resetSpawnTrigger
		GEODE_AS_STATIC_FUNCTION(resetSpawnTrigger) 
	#endif

	#ifndef GEODE_STATICS_setTargetID
		#define GEODE_STATICS_setTargetID
		GEODE_AS_STATIC_FUNCTION(setTargetID) 
	#endif

	#ifndef GEODE_STATICS_setTargetID2
		#define GEODE_STATICS_setTargetID2
		GEODE_AS_STATIC_FUNCTION(setTargetID2) 
	#endif

	#ifndef GEODE_STATICS_triggerEffectFinished
		#define GEODE_STATICS_triggerEffectFinished
		GEODE_AS_STATIC_FUNCTION(triggerEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_updateInteractiveHover
		#define GEODE_STATICS_updateInteractiveHover
		GEODE_AS_STATIC_FUNCTION(updateInteractiveHover) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialColor
		#define GEODE_STATICS_updateSpecialColor
		GEODE_AS_STATIC_FUNCTION(updateSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_updateSpeedModType
		#define GEODE_STATICS_updateSpeedModType
		GEODE_AS_STATIC_FUNCTION(updateSpeedModType) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleX
		#define GEODE_CONCEPT_CHECK_setRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleY
		#define GEODE_CONCEPT_CHECK_setRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreObject
		#define GEODE_CONCEPT_CHECK_restoreObject
		GEODE_CONCEPT_FUNCTION_CHECK(restoreObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnXPosition
		#define GEODE_CONCEPT_CHECK_spawnXPosition
		GEODE_CONCEPT_FUNCTION_CHECK(spawnXPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canReverse
		#define GEODE_CONCEPT_CHECK_canReverse
		GEODE_CONCEPT_FUNCTION_CHECK(canReverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		#define GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canBeOrdered
		#define GEODE_CONCEPT_CHECK_canBeOrdered
		GEODE_CONCEPT_FUNCTION_CHECK(canBeOrdered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectLabel
		#define GEODE_CONCEPT_CHECK_getObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectLabel
		#define GEODE_CONCEPT_CHECK_setObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stateSensitiveOff
		#define GEODE_CONCEPT_CHECK_stateSensitiveOff
		GEODE_CONCEPT_FUNCTION_CHECK(stateSensitiveOff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canSpawnTriggers
		#define GEODE_CONCEPT_CHECK_canSpawnTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(canSpawnTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetColorIndex
		#define GEODE_CONCEPT_CHECK_getTargetColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasSpawnTargetID
		#define GEODE_CONCEPT_CHECK_hasSpawnTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(hasSpawnTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playTriggerEffect
		#define GEODE_CONCEPT_CHECK_playTriggerEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playTriggerEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSpawnTrigger
		#define GEODE_CONCEPT_CHECK_resetSpawnTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(resetSpawnTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetID
		#define GEODE_CONCEPT_CHECK_setTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetID2
		#define GEODE_CONCEPT_CHECK_setTargetID2
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerEffectFinished
		#define GEODE_CONCEPT_CHECK_triggerEffectFinished
		GEODE_CONCEPT_FUNCTION_CHECK(triggerEffectFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInteractiveHover
		#define GEODE_CONCEPT_CHECK_updateInteractiveHover
		GEODE_CONCEPT_FUNCTION_CHECK(updateInteractiveHover) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialColor
		#define GEODE_CONCEPT_CHECK_updateSpecialColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpeedModType
		#define GEODE_CONCEPT_CHECK_updateSpeedModType
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpeedModType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EffectGameObject> : ModifyBase<ModifyDerive<Der, EffectGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EffectGameObject>>;
		using ModifyBase<ModifyDerive<Der, EffectGameObject>>::ModifyBase;
		using Base = EffectGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16EffectGameObjectC2Ev")), Default, EffectGameObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&EffectGameObject::create)), Default, EffectGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&EffectGameObject::setOpacity)), Default, EffectGameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::firstSetup)), Default, EffectGameObject, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::customSetup)), Default, EffectGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16EffectGameObject13triggerObjectEP15GJBaseGameLayeriPKSt6vectorIiSaIiEE")), Default, EffectGameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16EffectGameObject17customObjectSetupERSt6vectorISsSaISsEERS0_IPvSaIS4_EE")), Default, EffectGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJBaseGameLayer*>::func(&EffectGameObject::getSaveString)), Default, EffectGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&EffectGameObject::setRScaleX)), Default, EffectGameObject, setRScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&EffectGameObject::setRScaleY)), Default, EffectGameObject, setRScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&EffectGameObject::triggerActivated)), Default, EffectGameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::restoreObject)), Default, EffectGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::spawnXPosition)), Default, EffectGameObject, spawnXPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::canReverse)), Default, EffectGameObject, canReverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::isSpecialSpawnObject)), Default, EffectGameObject, isSpecialSpawnObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::canBeOrdered)), Default, EffectGameObject, canBeOrdered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EffectGameObject::getObjectLabel)), Default, EffectGameObject, getObjectLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCLabelBMFont*>::func(&EffectGameObject::setObjectLabel)), Default, EffectGameObject, setObjectLabel, cocos2d::CCLabelBMFont*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJBaseGameLayer*>::func(&EffectGameObject::stateSensitiveOff)), Default, EffectGameObject, stateSensitiveOff, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EffectGameObject::canSpawnTriggers)), Default, EffectGameObject, canSpawnTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EffectGameObject::getTargetColorIndex)), Default, EffectGameObject, getTargetColorIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&EffectGameObject::hasSpawnTargetID)), Default, EffectGameObject, hasSpawnTargetID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&EffectGameObject::init)), Default, EffectGameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EffectGameObject::playTriggerEffect)), Default, EffectGameObject, playTriggerEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EffectGameObject::resetSpawnTrigger)), Default, EffectGameObject, resetSpawnTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&EffectGameObject::setTargetID)), Default, EffectGameObject, setTargetID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&EffectGameObject::setTargetID2)), Default, EffectGameObject, setTargetID2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EffectGameObject::triggerEffectFinished)), Default, EffectGameObject, triggerEffectFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&EffectGameObject::updateInteractiveHover)), Default, EffectGameObject, updateInteractiveHover, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EffectGameObject::updateSpecialColor)), Default, EffectGameObject, updateSpecialColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EffectGameObject::updateSpeedModType)), Default, EffectGameObject, updateSpeedModType, )
		}
	};
}
