#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedManager
		#define GEODE_STATICS_sharedManager
		GEODE_AS_STATIC_FUNCTION(sharedManager) 
	#endif

	#ifndef GEODE_STATICS_addDict
		#define GEODE_STATICS_addDict
		GEODE_AS_STATIC_FUNCTION(addDict) 
	#endif

	#ifndef GEODE_STATICS_addDictDS
		#define GEODE_STATICS_addDictDS
		GEODE_AS_STATIC_FUNCTION(addDictDS) 
	#endif

	#ifndef GEODE_STATICS_clearCache
		#define GEODE_STATICS_clearCache
		GEODE_AS_STATIC_FUNCTION(clearCache) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedManager
		#define GEODE_CONCEPT_CHECK_sharedManager
		GEODE_CONCEPT_FUNCTION_CHECK(sharedManager) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDict
		#define GEODE_CONCEPT_CHECK_addDict
		GEODE_CONCEPT_FUNCTION_CHECK(addDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDictDS
		#define GEODE_CONCEPT_CHECK_addDictDS
		GEODE_CONCEPT_FUNCTION_CHECK(addDictDS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearCache
		#define GEODE_CONCEPT_CHECK_clearCache
		GEODE_CONCEPT_FUNCTION_CHECK(clearCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCContentManager> : ModifyBase<ModifyDerive<Der, CCContentManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCContentManager>>;
		using ModifyBase<ModifyDerive<Der, CCContentManager>>::ModifyBase;
		using Base = CCContentManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCContentManager::sharedManager)), Default, CCContentManager, sharedManager, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&CCContentManager::addDict)), Thiscall, CCContentManager, addDict, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&CCContentManager::addDictDS)), Thiscall, CCContentManager, addDictDS, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCContentManager::clearCache)), Thiscall, CCContentManager, clearCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCContentManager::init)), Thiscall, CCContentManager, init, )
		}
	};
}
