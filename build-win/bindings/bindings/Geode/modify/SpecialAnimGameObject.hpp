#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpecialAnimGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_updateMainColor
		#define GEODE_STATICS_updateMainColor
		GEODE_AS_STATIC_FUNCTION(updateMainColor) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColor
		#define GEODE_STATICS_updateSecondaryColor
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainColor
		#define GEODE_CONCEPT_CHECK_updateMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryColor
		#define GEODE_CONCEPT_CHECK_updateSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSyncedAnimation
		#define GEODE_CONCEPT_CHECK_updateSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpecialAnimGameObject> : ModifyBase<ModifyDerive<Der, SpecialAnimGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpecialAnimGameObject>>;
		using ModifyBase<ModifyDerive<Der, SpecialAnimGameObject>>::ModifyBase;
		using Base = SpecialAnimGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpecialAnimGameObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1a60, Thiscall, SpecialAnimGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1a70, Thiscall, SpecialAnimGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1ae0, Thiscall, SpecialAnimGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1a20, Thiscall, SpecialAnimGameObject, updateMainColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a1a40, Thiscall, SpecialAnimGameObject, updateSecondaryColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9940, Thiscall, SpecialAnimGameObject, updateSyncedAnimation, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpecialAnimGameObject, init, char const*)
		}
	};
}
