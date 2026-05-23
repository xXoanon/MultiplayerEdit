#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BrowseSmartTemplateLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_addObjectToPage
		#define GEODE_STATICS_addObjectToPage
		GEODE_AS_STATIC_FUNCTION(addObjectToPage) 
	#endif

	#ifndef GEODE_STATICS_addPrefabMenuItem
		#define GEODE_STATICS_addPrefabMenuItem
		GEODE_AS_STATIC_FUNCTION(addPrefabMenuItem) 
	#endif

	#ifndef GEODE_STATICS_baseSetup
		#define GEODE_STATICS_baseSetup
		GEODE_AS_STATIC_FUNCTION(baseSetup) 
	#endif

	#ifndef GEODE_STATICS_createDots
		#define GEODE_STATICS_createDots
		GEODE_AS_STATIC_FUNCTION(createDots) 
	#endif

	#ifndef GEODE_STATICS_createPrefab
		#define GEODE_STATICS_createPrefab
		GEODE_AS_STATIC_FUNCTION(createPrefab) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onTemplateObject
		#define GEODE_STATICS_onTemplateObject
		GEODE_AS_STATIC_FUNCTION(onTemplateObject) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectToPage
		#define GEODE_CONCEPT_CHECK_addObjectToPage
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPrefabMenuItem
		#define GEODE_CONCEPT_CHECK_addPrefabMenuItem
		GEODE_CONCEPT_FUNCTION_CHECK(addPrefabMenuItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_baseSetup
		#define GEODE_CONCEPT_CHECK_baseSetup
		GEODE_CONCEPT_FUNCTION_CHECK(baseSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDots
		#define GEODE_CONCEPT_CHECK_createDots
		GEODE_CONCEPT_FUNCTION_CHECK(createDots) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPrefab
		#define GEODE_CONCEPT_CHECK_createPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(createPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClick
		#define GEODE_CONCEPT_CHECK_onClick
		GEODE_CONCEPT_FUNCTION_CHECK(onClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTemplateObject
		#define GEODE_CONCEPT_CHECK_onTemplateObject
		GEODE_CONCEPT_FUNCTION_CHECK(onTemplateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDots
		#define GEODE_CONCEPT_CHECK_updateDots
		GEODE_CONCEPT_FUNCTION_CHECK(updateDots) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BrowseSmartTemplateLayer> : ModifyBase<ModifyDerive<Der, BrowseSmartTemplateLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BrowseSmartTemplateLayer>>;
		using ModifyBase<ModifyDerive<Der, BrowseSmartTemplateLayer>>::ModifyBase;
		using Base = BrowseSmartTemplateLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN24BrowseSmartTemplateLayerD2Ev")), Default, BrowseSmartTemplateLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSmartTemplate*, SmartBrowseFilter>::func(&BrowseSmartTemplateLayer::create)), Default, BrowseSmartTemplateLayer, create, GJSmartTemplate*, SmartBrowseFilter)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&BrowseSmartTemplateLayer::keyBackClicked)), Default, BrowseSmartTemplateLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&BrowseSmartTemplateLayer::onBack)), Default, BrowseSmartTemplateLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int>::func(&BrowseSmartTemplateLayer::addObjectToPage)), Default, BrowseSmartTemplateLayer, addObjectToPage, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SmartPrefabResult, int>::func(&BrowseSmartTemplateLayer::addPrefabMenuItem)), Default, BrowseSmartTemplateLayer, addPrefabMenuItem, SmartPrefabResult, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BrowseSmartTemplateLayer::baseSetup)), Default, BrowseSmartTemplateLayer, baseSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BrowseSmartTemplateLayer::createDots)), Default, BrowseSmartTemplateLayer, createDots, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN24BrowseSmartTemplateLayer12createPrefabESsi")), Default, BrowseSmartTemplateLayer, createPrefab, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BrowseSmartTemplateLayer::goToPage)), Default, BrowseSmartTemplateLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSmartTemplate*, SmartBrowseFilter>::func(&BrowseSmartTemplateLayer::init)), Default, BrowseSmartTemplateLayer, init, GJSmartTemplate*, SmartBrowseFilter)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&BrowseSmartTemplateLayer::onClick)), Default, BrowseSmartTemplateLayer, onClick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&BrowseSmartTemplateLayer::onClose)), Default, BrowseSmartTemplateLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&BrowseSmartTemplateLayer::onTemplateObject)), Default, BrowseSmartTemplateLayer, onTemplateObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BrowseSmartTemplateLayer::updateDots)), Default, BrowseSmartTemplateLayer, updateDots, )
		}
	};
}
