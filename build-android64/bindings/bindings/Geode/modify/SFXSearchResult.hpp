#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXSearchResult.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateObjects
		#define GEODE_STATICS_updateObjects
		GEODE_AS_STATIC_FUNCTION(updateObjects) 
	#endif

	#ifndef GEODE_STATICS_getActiveFolder
		#define GEODE_STATICS_getActiveFolder
		GEODE_AS_STATIC_FUNCTION(getActiveFolder) 
	#endif

	#ifndef GEODE_STATICS_getSelectedPage
		#define GEODE_STATICS_getSelectedPage
		GEODE_AS_STATIC_FUNCTION(getSelectedPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setActiveFolder
		#define GEODE_STATICS_setActiveFolder
		GEODE_AS_STATIC_FUNCTION(setActiveFolder) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjects
		#define GEODE_CONCEPT_CHECK_updateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveFolder
		#define GEODE_CONCEPT_CHECK_getActiveFolder
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedPage
		#define GEODE_CONCEPT_CHECK_getSelectedPage
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveFolder
		#define GEODE_CONCEPT_CHECK_setActiveFolder
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveFolder) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXSearchResult> : ModifyBase<ModifyDerive<Der, SFXSearchResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXSearchResult>>;
		using ModifyBase<ModifyDerive<Der, SFXSearchResult>>::ModifyBase;
		using Base = SFXSearchResult;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SFXSearchResult::create)), Default, SFXSearchResult, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<AudioSortType>::func(&SFXSearchResult::updateObjects)), Default, SFXSearchResult, updateObjects, AudioSortType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXSearchResult::getActiveFolder)), Default, SFXSearchResult, getActiveFolder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&SFXSearchResult::getSelectedPage)), Default, SFXSearchResult, getSelectedPage, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SFXSearchResult::init)), Default, SFXSearchResult, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXFolderObject*>::func(&SFXSearchResult::setActiveFolder)), Default, SFXSearchResult, setActiveFolder, SFXFolderObject*)
		}
	};
}
