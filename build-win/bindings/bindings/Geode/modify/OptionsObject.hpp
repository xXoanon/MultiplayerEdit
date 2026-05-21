#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleState
		#define GEODE_CONCEPT_CHECK_toggleState
		GEODE_CONCEPT_FUNCTION_CHECK(toggleState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsObject> : ModifyBase<ModifyDerive<Der, OptionsObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsObject>>;
		using ModifyBase<ModifyDerive<Der, OptionsObject>>::ModifyBase;
		using Base = OptionsObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29e6a0, Default, OptionsObject, create, int, bool, gd::string, OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsObject, init, int, bool, gd::string, OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsObject, toggleState, )
		}
	};
}
