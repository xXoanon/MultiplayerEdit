#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BonusDropdown.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BonusDropdown> : ModifyBase<ModifyDerive<Der, BonusDropdown>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BonusDropdown>>;
		using ModifyBase<ModifyDerive<Der, BonusDropdown>>::ModifyBase;
		using Base = BonusDropdown;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BonusDropdown, create, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BonusDropdown, init, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(BonusDropdown, show, )
		}
	};
}
