#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InfoAlertButton.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_activate
		#define GEODE_STATICS_activate
		GEODE_AS_STATIC_FUNCTION(activate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activate
		#define GEODE_CONCEPT_CHECK_activate
		GEODE_CONCEPT_FUNCTION_CHECK(activate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, InfoAlertButton> : ModifyBase<ModifyDerive<Der, InfoAlertButton>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InfoAlertButton>>;
		using ModifyBase<ModifyDerive<Der, InfoAlertButton>>::ModifyBase;
		using Base = InfoAlertButton;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba450, Default, InfoAlertButton, create, gd::string, gd::string, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ba650, Thiscall, InfoAlertButton, activate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoAlertButton, init, gd::string, gd::string, float)
		}
	};
}
