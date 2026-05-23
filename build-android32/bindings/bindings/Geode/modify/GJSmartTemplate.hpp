#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartTemplate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_applyTransformationsForType
		#define GEODE_STATICS_applyTransformationsForType
		GEODE_AS_STATIC_FUNCTION(applyTransformationsForType) 
	#endif

	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_flipBlockType
		#define GEODE_STATICS_flipBlockType
		GEODE_AS_STATIC_FUNCTION(flipBlockType) 
	#endif

	#ifndef GEODE_STATICS_flipBlockTypeX
		#define GEODE_STATICS_flipBlockTypeX
		GEODE_AS_STATIC_FUNCTION(flipBlockTypeX) 
	#endif

	#ifndef GEODE_STATICS_flipBlockTypeY
		#define GEODE_STATICS_flipBlockTypeY
		GEODE_AS_STATIC_FUNCTION(flipBlockTypeY) 
	#endif

	#ifndef GEODE_STATICS_flipKey
		#define GEODE_STATICS_flipKey
		GEODE_AS_STATIC_FUNCTION(flipKey) 
	#endif

	#ifndef GEODE_STATICS_generateRemapDict
		#define GEODE_STATICS_generateRemapDict
		GEODE_AS_STATIC_FUNCTION(generateRemapDict) 
	#endif

	#ifndef GEODE_STATICS_getSimplifiedKey
		#define GEODE_STATICS_getSimplifiedKey
		GEODE_AS_STATIC_FUNCTION(getSimplifiedKey) 
	#endif

	#ifndef GEODE_STATICS_getSimplifiedType
		#define GEODE_STATICS_getSimplifiedType
		GEODE_AS_STATIC_FUNCTION(getSimplifiedType) 
	#endif

	#ifndef GEODE_STATICS_getVerySimplifiedKey
		#define GEODE_STATICS_getVerySimplifiedKey
		GEODE_AS_STATIC_FUNCTION(getVerySimplifiedKey) 
	#endif

	#ifndef GEODE_STATICS_keyFromNeighbors
		#define GEODE_STATICS_keyFromNeighbors
		GEODE_AS_STATIC_FUNCTION(keyFromNeighbors) 
	#endif

	#ifndef GEODE_STATICS_keyFromNeighborsOld
		#define GEODE_STATICS_keyFromNeighborsOld
		GEODE_AS_STATIC_FUNCTION(keyFromNeighborsOld) 
	#endif

	#ifndef GEODE_STATICS_offsetForDir
		#define GEODE_STATICS_offsetForDir
		GEODE_AS_STATIC_FUNCTION(offsetForDir) 
	#endif

	#ifndef GEODE_STATICS_offsetForObject
		#define GEODE_STATICS_offsetForObject
		GEODE_AS_STATIC_FUNCTION(offsetForObject) 
	#endif

	#ifndef GEODE_STATICS_offsetForType
		#define GEODE_STATICS_offsetForType
		GEODE_AS_STATIC_FUNCTION(offsetForType) 
	#endif

	#ifndef GEODE_STATICS_rotateBlockType
		#define GEODE_STATICS_rotateBlockType
		GEODE_AS_STATIC_FUNCTION(rotateBlockType) 
	#endif

	#ifndef GEODE_STATICS_rotateBlockType90
		#define GEODE_STATICS_rotateBlockType90
		GEODE_AS_STATIC_FUNCTION(rotateBlockType90) 
	#endif

	#ifndef GEODE_STATICS_rotateKey
		#define GEODE_STATICS_rotateKey
		GEODE_AS_STATIC_FUNCTION(rotateKey) 
	#endif

	#ifndef GEODE_STATICS_shouldDiscardObject
		#define GEODE_STATICS_shouldDiscardObject
		GEODE_AS_STATIC_FUNCTION(shouldDiscardObject) 
	#endif

	#ifndef GEODE_STATICS_smartObjectToType
		#define GEODE_STATICS_smartObjectToType
		GEODE_AS_STATIC_FUNCTION(smartObjectToType) 
	#endif

	#ifndef GEODE_STATICS_smartTypeToObjectKey
		#define GEODE_STATICS_smartTypeToObjectKey
		GEODE_AS_STATIC_FUNCTION(smartTypeToObjectKey) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_getNoCornerKey
		#define GEODE_STATICS_getNoCornerKey
		GEODE_AS_STATIC_FUNCTION(getNoCornerKey) 
	#endif

	#ifndef GEODE_STATICS_getPrefab
		#define GEODE_STATICS_getPrefab
		GEODE_AS_STATIC_FUNCTION(getPrefab) 
	#endif

	#ifndef GEODE_STATICS_getPrefabs
		#define GEODE_STATICS_getPrefabs
		GEODE_AS_STATIC_FUNCTION(getPrefabs) 
	#endif

	#ifndef GEODE_STATICS_getPrefabWithID
		#define GEODE_STATICS_getPrefabWithID
		GEODE_AS_STATIC_FUNCTION(getPrefabWithID) 
	#endif

	#ifndef GEODE_STATICS_getRandomPrefab
		#define GEODE_STATICS_getRandomPrefab
		GEODE_AS_STATIC_FUNCTION(getRandomPrefab) 
	#endif

	#ifndef GEODE_STATICS_getTemplateState
		#define GEODE_STATICS_getTemplateState
		GEODE_AS_STATIC_FUNCTION(getTemplateState) 
	#endif

	#ifndef GEODE_STATICS_getTotalChanceForPrefab
		#define GEODE_STATICS_getTotalChanceForPrefab
		GEODE_AS_STATIC_FUNCTION(getTotalChanceForPrefab) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isUnrequired
		#define GEODE_STATICS_isUnrequired
		GEODE_AS_STATIC_FUNCTION(isUnrequired) 
	#endif

	#ifndef GEODE_STATICS_logTemplateStatus
		#define GEODE_STATICS_logTemplateStatus
		GEODE_AS_STATIC_FUNCTION(logTemplateStatus) 
	#endif

	#ifndef GEODE_STATICS_removePrefab
		#define GEODE_STATICS_removePrefab
		GEODE_AS_STATIC_FUNCTION(removePrefab) 
	#endif

	#ifndef GEODE_STATICS_resetScannedPrefabs
		#define GEODE_STATICS_resetScannedPrefabs
		GEODE_AS_STATIC_FUNCTION(resetScannedPrefabs) 
	#endif

	#ifndef GEODE_STATICS_savePrefab
		#define GEODE_STATICS_savePrefab
		GEODE_AS_STATIC_FUNCTION(savePrefab) 
	#endif

	#ifndef GEODE_STATICS_saveRemap
		#define GEODE_STATICS_saveRemap
		GEODE_AS_STATIC_FUNCTION(saveRemap) 
	#endif

	#ifndef GEODE_STATICS_saveRemapToDict
		#define GEODE_STATICS_saveRemapToDict
		GEODE_AS_STATIC_FUNCTION(saveRemapToDict) 
	#endif

	#ifndef GEODE_STATICS_scanForPrefab
		#define GEODE_STATICS_scanForPrefab
		GEODE_AS_STATIC_FUNCTION(scanForPrefab) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_applyTransformationsForType
		#define GEODE_CONCEPT_CHECK_applyTransformationsForType
		GEODE_CONCEPT_FUNCTION_CHECK(applyTransformationsForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipBlockType
		#define GEODE_CONCEPT_CHECK_flipBlockType
		GEODE_CONCEPT_FUNCTION_CHECK(flipBlockType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipBlockTypeX
		#define GEODE_CONCEPT_CHECK_flipBlockTypeX
		GEODE_CONCEPT_FUNCTION_CHECK(flipBlockTypeX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipBlockTypeY
		#define GEODE_CONCEPT_CHECK_flipBlockTypeY
		GEODE_CONCEPT_FUNCTION_CHECK(flipBlockTypeY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipKey
		#define GEODE_CONCEPT_CHECK_flipKey
		GEODE_CONCEPT_FUNCTION_CHECK(flipKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateRemapDict
		#define GEODE_CONCEPT_CHECK_generateRemapDict
		GEODE_CONCEPT_FUNCTION_CHECK(generateRemapDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSimplifiedKey
		#define GEODE_CONCEPT_CHECK_getSimplifiedKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSimplifiedKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSimplifiedType
		#define GEODE_CONCEPT_CHECK_getSimplifiedType
		GEODE_CONCEPT_FUNCTION_CHECK(getSimplifiedType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVerySimplifiedKey
		#define GEODE_CONCEPT_CHECK_getVerySimplifiedKey
		GEODE_CONCEPT_FUNCTION_CHECK(getVerySimplifiedKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyFromNeighbors
		#define GEODE_CONCEPT_CHECK_keyFromNeighbors
		GEODE_CONCEPT_FUNCTION_CHECK(keyFromNeighbors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyFromNeighborsOld
		#define GEODE_CONCEPT_CHECK_keyFromNeighborsOld
		GEODE_CONCEPT_FUNCTION_CHECK(keyFromNeighborsOld) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForDir
		#define GEODE_CONCEPT_CHECK_offsetForDir
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForObject
		#define GEODE_CONCEPT_CHECK_offsetForObject
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForType
		#define GEODE_CONCEPT_CHECK_offsetForType
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateBlockType
		#define GEODE_CONCEPT_CHECK_rotateBlockType
		GEODE_CONCEPT_FUNCTION_CHECK(rotateBlockType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateBlockType90
		#define GEODE_CONCEPT_CHECK_rotateBlockType90
		GEODE_CONCEPT_FUNCTION_CHECK(rotateBlockType90) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateKey
		#define GEODE_CONCEPT_CHECK_rotateKey
		GEODE_CONCEPT_FUNCTION_CHECK(rotateKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDiscardObject
		#define GEODE_CONCEPT_CHECK_shouldDiscardObject
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDiscardObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_smartObjectToType
		#define GEODE_CONCEPT_CHECK_smartObjectToType
		GEODE_CONCEPT_FUNCTION_CHECK(smartObjectToType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_smartTypeToObjectKey
		#define GEODE_CONCEPT_CHECK_smartTypeToObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(smartTypeToObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNoCornerKey
		#define GEODE_CONCEPT_CHECK_getNoCornerKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNoCornerKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrefab
		#define GEODE_CONCEPT_CHECK_getPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(getPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrefabs
		#define GEODE_CONCEPT_CHECK_getPrefabs
		GEODE_CONCEPT_FUNCTION_CHECK(getPrefabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrefabWithID
		#define GEODE_CONCEPT_CHECK_getPrefabWithID
		GEODE_CONCEPT_FUNCTION_CHECK(getPrefabWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomPrefab
		#define GEODE_CONCEPT_CHECK_getRandomPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTemplateState
		#define GEODE_CONCEPT_CHECK_getTemplateState
		GEODE_CONCEPT_FUNCTION_CHECK(getTemplateState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalChanceForPrefab
		#define GEODE_CONCEPT_CHECK_getTotalChanceForPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalChanceForPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUnrequired
		#define GEODE_CONCEPT_CHECK_isUnrequired
		GEODE_CONCEPT_FUNCTION_CHECK(isUnrequired) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logTemplateStatus
		#define GEODE_CONCEPT_CHECK_logTemplateStatus
		GEODE_CONCEPT_FUNCTION_CHECK(logTemplateStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePrefab
		#define GEODE_CONCEPT_CHECK_removePrefab
		GEODE_CONCEPT_FUNCTION_CHECK(removePrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetScannedPrefabs
		#define GEODE_CONCEPT_CHECK_resetScannedPrefabs
		GEODE_CONCEPT_FUNCTION_CHECK(resetScannedPrefabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savePrefab
		#define GEODE_CONCEPT_CHECK_savePrefab
		GEODE_CONCEPT_FUNCTION_CHECK(savePrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRemap
		#define GEODE_CONCEPT_CHECK_saveRemap
		GEODE_CONCEPT_FUNCTION_CHECK(saveRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRemapToDict
		#define GEODE_CONCEPT_CHECK_saveRemapToDict
		GEODE_CONCEPT_FUNCTION_CHECK(saveRemapToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scanForPrefab
		#define GEODE_CONCEPT_CHECK_scanForPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(scanForPrefab) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartTemplate> : ModifyBase<ModifyDerive<Der, GJSmartTemplate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartTemplate>>;
		using ModifyBase<ModifyDerive<Der, GJSmartTemplate>>::ModifyBase;
		using Base = GJSmartTemplate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType, cocos2d::CCSprite*>::func(&GJSmartTemplate::applyTransformationsForType)), Default, GJSmartTemplate, applyTransformationsForType, SmartBlockType, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJSmartTemplate::create)), Default, GJSmartTemplate, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&GJSmartTemplate::createWithCoder)), Default, GJSmartTemplate, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType, bool, bool>::func(&GJSmartTemplate::flipBlockType)), Default, GJSmartTemplate, flipBlockType, SmartBlockType, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType>::func(&GJSmartTemplate::flipBlockTypeX)), Default, GJSmartTemplate, flipBlockTypeX, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType>::func(&GJSmartTemplate::flipBlockTypeY)), Default, GJSmartTemplate, flipBlockTypeY, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate7flipKeyESsbb")), Default, GJSmartTemplate, flipKey, gd::string, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJSmartTemplate::generateRemapDict)), Default, GJSmartTemplate, generateRemapDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate16getSimplifiedKeyESs")), Default, GJSmartTemplate, getSimplifiedKey, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType, bool&>::func(&GJSmartTemplate::getSimplifiedType)), Default, GJSmartTemplate, getSimplifiedType, SmartBlockType, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate20getVerySimplifiedKeyESs")), Default, GJSmartTemplate, getVerySimplifiedKey, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType>::func(&GJSmartTemplate::keyFromNeighbors)), Default, GJSmartTemplate, keyFromNeighbors, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*>::func(&GJSmartTemplate::keyFromNeighbors)), Default, GJSmartTemplate, keyFromNeighbors, cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool, bool, bool, bool, bool, bool>::func(&GJSmartTemplate::keyFromNeighborsOld)), Default, GJSmartTemplate, keyFromNeighborsOld, bool, bool, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSmartDirection, int>::func(&GJSmartTemplate::offsetForDir)), Default, GJSmartTemplate, offsetForDir, GJSmartDirection, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartGameObject*>::func(&GJSmartTemplate::offsetForObject)), Default, GJSmartTemplate, offsetForObject, SmartGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType>::func(&GJSmartTemplate::offsetForType)), Default, GJSmartTemplate, offsetForType, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType, int>::func(&GJSmartTemplate::rotateBlockType)), Default, GJSmartTemplate, rotateBlockType, SmartBlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType>::func(&GJSmartTemplate::rotateBlockType90)), Default, GJSmartTemplate, rotateBlockType90, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate9rotateKeyESsi")), Default, GJSmartTemplate, rotateKey, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType, GJSmartDirection>::func(&GJSmartTemplate::shouldDiscardObject)), Default, GJSmartTemplate, shouldDiscardObject, SmartBlockType, GJSmartDirection)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartGameObject*, cocos2d::CCPoint>::func(&GJSmartTemplate::smartObjectToType)), Default, GJSmartTemplate, smartObjectToType, SmartGameObject*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartBlockType>::func(&GJSmartTemplate::smartTypeToObjectKey)), Default, GJSmartTemplate, smartTypeToObjectKey, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<DS_Dictionary*>::func(&GJSmartTemplate::encodeWithCoder)), Default, GJSmartTemplate, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GJSmartTemplate::canEncode)), Default, GJSmartTemplate, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&GJSmartTemplate::dataLoaded)), Default, GJSmartTemplate, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate14getNoCornerKeyESs")), Default, GJSmartTemplate, getNoCornerKey, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate9getPrefabESsbb")), Default, GJSmartTemplate, getPrefab, gd::string, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*>::func(&GJSmartTemplate::getPrefab)), Default, GJSmartTemplate, getPrefab, cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate10getPrefabsESs")), Default, GJSmartTemplate, getPrefabs, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate15getPrefabWithIDESsi")), Default, GJSmartTemplate, getPrefabWithID, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate15getRandomPrefabESs")), Default, GJSmartTemplate, getRandomPrefab, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate16getTemplateStateERSt6vectorI17SmartPrefabResultSaIS1_EE")), Default, GJSmartTemplate, getTemplateState, gd::vector<SmartPrefabResult>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate23getTotalChanceForPrefabESs")), Default, GJSmartTemplate, getTotalChanceForPrefab, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJSmartTemplate::init)), Default, GJSmartTemplate, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate12isUnrequiredESs")), Default, GJSmartTemplate, isUnrequired, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GJSmartTemplate::logTemplateStatus)), Default, GJSmartTemplate, logTemplateStatus, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate12removePrefabESsi")), Default, GJSmartTemplate, removePrefab, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJSmartTemplate::resetScannedPrefabs)), Default, GJSmartTemplate, resetScannedPrefabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate10savePrefabESsSs")), Default, GJSmartTemplate, savePrefab, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate9saveRemapESs")), Default, GJSmartTemplate, saveRemap, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate15saveRemapToDictESsSsPN7cocos2d12CCDictionaryE")), Default, GJSmartTemplate, saveRemapToDict, gd::string, gd::string, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJSmartTemplate13scanForPrefabESs")), Default, GJSmartTemplate, scanForPrefab, gd::string)
		}
	};
}
