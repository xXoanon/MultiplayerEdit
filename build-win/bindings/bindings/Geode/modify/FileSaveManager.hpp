#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FileSaveManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

	#ifndef GEODE_STATICS_getStoreData
		#define GEODE_STATICS_getStoreData
		GEODE_AS_STATIC_FUNCTION(getStoreData) 
	#endif

	#ifndef GEODE_STATICS_loadDataFromFile
		#define GEODE_STATICS_loadDataFromFile
		GEODE_AS_STATIC_FUNCTION(loadDataFromFile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoreData
		#define GEODE_CONCEPT_CHECK_getStoreData
		GEODE_CONCEPT_FUNCTION_CHECK(getStoreData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDataFromFile
		#define GEODE_CONCEPT_CHECK_loadDataFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(loadDataFromFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FileSaveManager> : ModifyBase<ModifyDerive<Der, FileSaveManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FileSaveManager>>;
		using ModifyBase<ModifyDerive<Der, FileSaveManager>>::ModifyBase;
		using Base = FileSaveManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FileSaveManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FileSaveManager, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FileSaveManager, firstLoad, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FileSaveManager, getStoreData, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FileSaveManager, loadDataFromFile, char const*)
		}
	};
}
