#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ObjectManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_instance
		#define GEODE_STATICS_instance
		GEODE_AS_STATIC_FUNCTION(instance) 
	#endif

	#ifndef GEODE_STATICS_replaceAllOccurencesOfString
		#define GEODE_STATICS_replaceAllOccurencesOfString
		GEODE_AS_STATIC_FUNCTION(replaceAllOccurencesOfString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_animLoaded
		#define GEODE_STATICS_animLoaded
		GEODE_AS_STATIC_FUNCTION(animLoaded) 
	#endif

	#ifndef GEODE_STATICS_getDefinition
		#define GEODE_STATICS_getDefinition
		GEODE_AS_STATIC_FUNCTION(getDefinition) 
	#endif

	#ifndef GEODE_STATICS_getGlobalAnimCopy
		#define GEODE_STATICS_getGlobalAnimCopy
		GEODE_AS_STATIC_FUNCTION(getGlobalAnimCopy) 
	#endif

	#ifndef GEODE_STATICS_loadCopiedAnimations
		#define GEODE_STATICS_loadCopiedAnimations
		GEODE_AS_STATIC_FUNCTION(loadCopiedAnimations) 
	#endif

	#ifndef GEODE_STATICS_loadCopiedSets
		#define GEODE_STATICS_loadCopiedSets
		GEODE_AS_STATIC_FUNCTION(loadCopiedSets) 
	#endif

	#ifndef GEODE_STATICS_purgeObjectManager
		#define GEODE_STATICS_purgeObjectManager
		GEODE_AS_STATIC_FUNCTION(purgeObjectManager) 
	#endif

	#ifndef GEODE_STATICS_setLoaded
		#define GEODE_STATICS_setLoaded
		GEODE_AS_STATIC_FUNCTION(setLoaded) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_instance
		#define GEODE_CONCEPT_CHECK_instance
		GEODE_CONCEPT_FUNCTION_CHECK(instance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replaceAllOccurencesOfString
		#define GEODE_CONCEPT_CHECK_replaceAllOccurencesOfString
		GEODE_CONCEPT_FUNCTION_CHECK(replaceAllOccurencesOfString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animLoaded
		#define GEODE_CONCEPT_CHECK_animLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(animLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDefinition
		#define GEODE_CONCEPT_CHECK_getDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(getDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlobalAnimCopy
		#define GEODE_CONCEPT_CHECK_getGlobalAnimCopy
		GEODE_CONCEPT_FUNCTION_CHECK(getGlobalAnimCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCopiedAnimations
		#define GEODE_CONCEPT_CHECK_loadCopiedAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(loadCopiedAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCopiedSets
		#define GEODE_CONCEPT_CHECK_loadCopiedSets
		GEODE_CONCEPT_FUNCTION_CHECK(loadCopiedSets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeObjectManager
		#define GEODE_CONCEPT_CHECK_purgeObjectManager
		GEODE_CONCEPT_FUNCTION_CHECK(purgeObjectManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLoaded
		#define GEODE_CONCEPT_CHECK_setLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(setLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setup
		#define GEODE_CONCEPT_CHECK_setup
		GEODE_CONCEPT_FUNCTION_CHECK(setup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectManager> : ModifyBase<ModifyDerive<Der, ObjectManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectManager>>;
		using ModifyBase<ModifyDerive<Der, ObjectManager>>::ModifyBase;
		using Base = ObjectManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ObjectManager::instance)), Default, ObjectManager, instance, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*>::func(&ObjectManager::replaceAllOccurencesOfString)), Default, ObjectManager, replaceAllOccurencesOfString, cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ObjectManager::init)), Default, ObjectManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&ObjectManager::animLoaded)), Default, ObjectManager, animLoaded, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&ObjectManager::getDefinition)), Default, ObjectManager, getDefinition, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&ObjectManager::getGlobalAnimCopy)), Default, ObjectManager, getGlobalAnimCopy, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ObjectManager::loadCopiedAnimations)), Default, ObjectManager, loadCopiedAnimations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ObjectManager::loadCopiedSets)), Default, ObjectManager, loadCopiedSets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ObjectManager::purgeObjectManager)), Default, ObjectManager, purgeObjectManager, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&ObjectManager::setLoaded)), Default, ObjectManager, setLoaded, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ObjectManager::setup)), Default, ObjectManager, setup, )
		}
	};
}
