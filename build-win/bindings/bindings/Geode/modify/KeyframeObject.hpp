#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeyframeObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setupSpline
		#define GEODE_STATICS_setupSpline
		GEODE_AS_STATIC_FUNCTION(setupSpline) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_setupSpline
		#define GEODE_CONCEPT_CHECK_setupSpline
		GEODE_CONCEPT_FUNCTION_CHECK(setupSpline) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeyframeObject> : ModifyBase<ModifyDerive<Der, KeyframeObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeyframeObject>>;
		using ModifyBase<ModifyDerive<Der, KeyframeObject>>::ModifyBase;
		using Base = KeyframeObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0e00, Thiscall, KeyframeObject, setupSpline, gd::vector<KeyframeObject*>&)
		}
	};
}
