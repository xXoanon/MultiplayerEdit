#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DialogObject.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, DialogObject> : ModifyBase<ModifyDerive<Der, DialogObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DialogObject>>;
		using ModifyBase<ModifyDerive<Der, DialogObject>>::ModifyBase;
		using Base = DialogObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd32d0, Default, DialogObject, create, gd::string, gd::string, int, float, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogObject, init, gd::string, gd::string, int, float, bool, cocos2d::ccColor3B)
		}
	};
}
