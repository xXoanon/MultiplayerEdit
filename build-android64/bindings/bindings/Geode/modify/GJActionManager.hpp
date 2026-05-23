#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJActionManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getInternalAction
		#define GEODE_STATICS_getInternalAction
		GEODE_AS_STATIC_FUNCTION(getInternalAction) 
	#endif

	#ifndef GEODE_STATICS_runInternalAction
		#define GEODE_STATICS_runInternalAction
		GEODE_AS_STATIC_FUNCTION(runInternalAction) 
	#endif

	#ifndef GEODE_STATICS_stopAllInternalActions
		#define GEODE_STATICS_stopAllInternalActions
		GEODE_AS_STATIC_FUNCTION(stopAllInternalActions) 
	#endif

	#ifndef GEODE_STATICS_stopInternalAction
		#define GEODE_STATICS_stopInternalAction
		GEODE_AS_STATIC_FUNCTION(stopInternalAction) 
	#endif

	#ifndef GEODE_STATICS_updateInternalActions
		#define GEODE_STATICS_updateInternalActions
		GEODE_AS_STATIC_FUNCTION(updateInternalActions) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInternalAction
		#define GEODE_CONCEPT_CHECK_getInternalAction
		GEODE_CONCEPT_FUNCTION_CHECK(getInternalAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runInternalAction
		#define GEODE_CONCEPT_CHECK_runInternalAction
		GEODE_CONCEPT_FUNCTION_CHECK(runInternalAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllInternalActions
		#define GEODE_CONCEPT_CHECK_stopAllInternalActions
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllInternalActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopInternalAction
		#define GEODE_CONCEPT_CHECK_stopInternalAction
		GEODE_CONCEPT_FUNCTION_CHECK(stopInternalAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalActions
		#define GEODE_CONCEPT_CHECK_updateInternalActions
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalActions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJActionManager> : ModifyBase<ModifyDerive<Der, GJActionManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJActionManager>>;
		using ModifyBase<ModifyDerive<Der, GJActionManager>>::ModifyBase;
		using Base = GJActionManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJActionManagerD2Ev")), Default, GJActionManager)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJActionManager::create)), Default, GJActionManager, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GJActionManager::init)), Default, GJActionManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJActionManager::getInternalAction)), Default, GJActionManager, getInternalAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCAction*, cocos2d::CCNode*>::func(&GJActionManager::runInternalAction)), Default, GJActionManager, runInternalAction, cocos2d::CCAction*, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJActionManager::stopAllInternalActions)), Default, GJActionManager, stopAllInternalActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJActionManager::stopInternalAction)), Default, GJActionManager, stopInternalAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, bool>::func(&GJActionManager::updateInternalActions)), Default, GJActionManager, updateInternalActions, float, bool)
		}
	};
}
