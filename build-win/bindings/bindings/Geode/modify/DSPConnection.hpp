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

	#ifndef GEODE_STATICS_getMixMatrix
		#define GEODE_STATICS_getMixMatrix
		GEODE_AS_STATIC_FUNCTION(getMixMatrix) 
	#endif

	#ifndef GEODE_STATICS_setMixMatrix
		#define GEODE_STATICS_setMixMatrix
		GEODE_AS_STATIC_FUNCTION(setMixMatrix) 
	#endif

	#ifndef GEODE_STATICS_getMix
		#define GEODE_STATICS_getMix
		GEODE_AS_STATIC_FUNCTION(getMix) 
	#endif

	#ifndef GEODE_STATICS_setMix
		#define GEODE_STATICS_setMix
		GEODE_AS_STATIC_FUNCTION(setMix) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_getInput
		#define GEODE_STATICS_getInput
		GEODE_AS_STATIC_FUNCTION(getInput) 
	#endif

	#ifndef GEODE_STATICS_getOutput
		#define GEODE_STATICS_getOutput
		GEODE_AS_STATIC_FUNCTION(getOutput) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMixMatrix
		#define GEODE_CONCEPT_CHECK_getMixMatrix
		GEODE_CONCEPT_FUNCTION_CHECK(getMixMatrix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMixMatrix
		#define GEODE_CONCEPT_CHECK_setMixMatrix
		GEODE_CONCEPT_FUNCTION_CHECK(setMixMatrix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMix
		#define GEODE_CONCEPT_CHECK_getMix
		GEODE_CONCEPT_FUNCTION_CHECK(getMix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMix
		#define GEODE_CONCEPT_CHECK_setMix
		GEODE_CONCEPT_FUNCTION_CHECK(setMix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInput
		#define GEODE_CONCEPT_CHECK_getInput
		GEODE_CONCEPT_FUNCTION_CHECK(getInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOutput
		#define GEODE_CONCEPT_CHECK_getOutput
		GEODE_CONCEPT_FUNCTION_CHECK(getOutput) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::DSPConnection> : ModifyBase<ModifyDerive<Der, FMOD::DSPConnection>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::DSPConnection>>;
		using ModifyBase<ModifyDerive<Der, FMOD::DSPConnection>>::ModifyBase;
		using Base = FMOD::DSPConnection;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::DSPConnection::getUserData)), Thiscall, FMOD::DSPConnection, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::DSPConnection::setUserData)), Thiscall, FMOD::DSPConnection, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, int*, int*, int>::func(&FMOD::DSPConnection::getMixMatrix)), Thiscall, FMOD::DSPConnection, getMixMatrix, float*, int*, int*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, int, int, int>::func(&FMOD::DSPConnection::setMixMatrix)), Thiscall, FMOD::DSPConnection, setMixMatrix, float*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::DSPConnection::getMix)), Thiscall, FMOD::DSPConnection, getMix, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::DSPConnection::setMix)), Thiscall, FMOD::DSPConnection, setMix, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSPCONNECTION_TYPE*>::func(&FMOD::DSPConnection::getType)), Thiscall, FMOD::DSPConnection, getType, FMOD_DSPCONNECTION_TYPE*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP**>::func(&FMOD::DSPConnection::getInput)), Thiscall, FMOD::DSPConnection, getInput, FMOD::DSP**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP**>::func(&FMOD::DSPConnection::getOutput)), Thiscall, FMOD::DSPConnection, getOutput, FMOD::DSP**)
		}
	};
}
