#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_getProperties
		#define GEODE_STATICS_getProperties
		GEODE_AS_STATIC_FUNCTION(getProperties) 
	#endif

	#ifndef GEODE_STATICS_setProperties
		#define GEODE_STATICS_setProperties
		GEODE_AS_STATIC_FUNCTION(setProperties) 
	#endif

	#ifndef GEODE_STATICS_get3DAttributes
		#define GEODE_STATICS_get3DAttributes
		GEODE_AS_STATIC_FUNCTION(get3DAttributes) 
	#endif

	#ifndef GEODE_STATICS_set3DAttributes
		#define GEODE_STATICS_set3DAttributes
		GEODE_AS_STATIC_FUNCTION(set3DAttributes) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_getActive
		#define GEODE_STATICS_getActive
		GEODE_AS_STATIC_FUNCTION(getActive) 
	#endif

	#ifndef GEODE_STATICS_setActive
		#define GEODE_STATICS_setActive
		GEODE_AS_STATIC_FUNCTION(setActive) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getProperties
		#define GEODE_CONCEPT_CHECK_getProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProperties
		#define GEODE_CONCEPT_CHECK_setProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DAttributes
		#define GEODE_CONCEPT_CHECK_get3DAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(get3DAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DAttributes
		#define GEODE_CONCEPT_CHECK_set3DAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(set3DAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_release
		#define GEODE_CONCEPT_CHECK_release
		GEODE_CONCEPT_FUNCTION_CHECK(release) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActive
		#define GEODE_CONCEPT_CHECK_getActive
		GEODE_CONCEPT_FUNCTION_CHECK(getActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActive
		#define GEODE_CONCEPT_CHECK_setActive
		GEODE_CONCEPT_FUNCTION_CHECK(setActive) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::Reverb3D> : ModifyBase<ModifyDerive<Der, FMOD::Reverb3D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::Reverb3D>>;
		using ModifyBase<ModifyDerive<Der, FMOD::Reverb3D>>::ModifyBase;
		using Base = FMOD::Reverb3D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::Reverb3D::getUserData)), Thiscall, FMOD::Reverb3D, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::Reverb3D::setUserData)), Thiscall, FMOD::Reverb3D, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_REVERB_PROPERTIES*>::func(&FMOD::Reverb3D::getProperties)), Thiscall, FMOD::Reverb3D, getProperties, FMOD_REVERB_PROPERTIES*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_REVERB_PROPERTIES const*>::func(&FMOD::Reverb3D::setProperties)), Thiscall, FMOD::Reverb3D, setProperties, FMOD_REVERB_PROPERTIES const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*, float*, float*>::func(&FMOD::Reverb3D::get3DAttributes)), Thiscall, FMOD::Reverb3D, get3DAttributes, FMOD_VECTOR*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR const*, float, float>::func(&FMOD::Reverb3D::set3DAttributes)), Thiscall, FMOD::Reverb3D, set3DAttributes, FMOD_VECTOR const*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::Reverb3D::release)), Thiscall, FMOD::Reverb3D, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::Reverb3D::getActive)), Thiscall, FMOD::Reverb3D, getActive, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&FMOD::Reverb3D::setActive)), Thiscall, FMOD::Reverb3D, setActive, bool)
		}
	};
}
