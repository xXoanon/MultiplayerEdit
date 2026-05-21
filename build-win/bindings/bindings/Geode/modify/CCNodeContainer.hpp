#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCNodeContainer.hpp>
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

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCNodeContainer> : ModifyBase<ModifyDerive<Der, CCNodeContainer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCNodeContainer>>;
		using ModifyBase<ModifyDerive<Der, CCNodeContainer>>::ModifyBase;
		using Base = CCNodeContainer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x248ca0, Default, CCNodeContainer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77de0, Thiscall, CCNodeContainer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x248d70, Thiscall, CCNodeContainer, visit, )
		}
	};
}
