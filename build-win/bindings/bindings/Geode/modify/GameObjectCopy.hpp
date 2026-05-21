#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObjectCopy.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameObjectCopy> : ModifyBase<ModifyDerive<Der, GameObjectCopy>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObjectCopy>>;
		using ModifyBase<ModifyDerive<Der, GameObjectCopy>>::ModifyBase;
		using Base = GameObjectCopy;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e8940, Default, GameObjectCopy, create, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObjectCopy, init, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e8a40, Thiscall, GameObjectCopy, resetObject, )
		}
	};
}
