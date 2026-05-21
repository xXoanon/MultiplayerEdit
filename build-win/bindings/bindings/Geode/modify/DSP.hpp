#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getCPUUsage
		#define GEODE_STATICS_getCPUUsage
		GEODE_AS_STATIC_FUNCTION(getCPUUsage) 
	#endif

	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_setCallback
		#define GEODE_STATICS_setCallback
		GEODE_AS_STATIC_FUNCTION(setCallback) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_getNumInputs
		#define GEODE_STATICS_getNumInputs
		GEODE_AS_STATIC_FUNCTION(getNumInputs) 
	#endif

	#ifndef GEODE_STATICS_getWetDryMix
		#define GEODE_STATICS_getWetDryMix
		GEODE_AS_STATIC_FUNCTION(getWetDryMix) 
	#endif

	#ifndef GEODE_STATICS_setWetDryMix
		#define GEODE_STATICS_setWetDryMix
		GEODE_AS_STATIC_FUNCTION(setWetDryMix) 
	#endif

	#ifndef GEODE_STATICS_disconnectAll
		#define GEODE_STATICS_disconnectAll
		GEODE_AS_STATIC_FUNCTION(disconnectAll) 
	#endif

	#ifndef GEODE_STATICS_getNumOutputs
		#define GEODE_STATICS_getNumOutputs
		GEODE_AS_STATIC_FUNCTION(getNumOutputs) 
	#endif

	#ifndef GEODE_STATICS_disconnectFrom
		#define GEODE_STATICS_disconnectFrom
		GEODE_AS_STATIC_FUNCTION(disconnectFrom) 
	#endif

	#ifndef GEODE_STATICS_getMeteringInfo
		#define GEODE_STATICS_getMeteringInfo
		GEODE_AS_STATIC_FUNCTION(getMeteringInfo) 
	#endif

	#ifndef GEODE_STATICS_getParameterInt
		#define GEODE_STATICS_getParameterInt
		GEODE_AS_STATIC_FUNCTION(getParameterInt) 
	#endif

	#ifndef GEODE_STATICS_getSystemObject
		#define GEODE_STATICS_getSystemObject
		GEODE_AS_STATIC_FUNCTION(getSystemObject) 
	#endif

	#ifndef GEODE_STATICS_setParameterInt
		#define GEODE_STATICS_setParameterInt
		GEODE_AS_STATIC_FUNCTION(setParameterInt) 
	#endif

	#ifndef GEODE_STATICS_getChannelFormat
		#define GEODE_STATICS_getChannelFormat
		GEODE_AS_STATIC_FUNCTION(getChannelFormat) 
	#endif

	#ifndef GEODE_STATICS_getNumParameters
		#define GEODE_STATICS_getNumParameters
		GEODE_AS_STATIC_FUNCTION(getNumParameters) 
	#endif

	#ifndef GEODE_STATICS_getParameterBool
		#define GEODE_STATICS_getParameterBool
		GEODE_AS_STATIC_FUNCTION(getParameterBool) 
	#endif

	#ifndef GEODE_STATICS_getParameterData
		#define GEODE_STATICS_getParameterData
		GEODE_AS_STATIC_FUNCTION(getParameterData) 
	#endif

	#ifndef GEODE_STATICS_getParameterInfo
		#define GEODE_STATICS_getParameterInfo
		GEODE_AS_STATIC_FUNCTION(getParameterInfo) 
	#endif

	#ifndef GEODE_STATICS_setChannelFormat
		#define GEODE_STATICS_setChannelFormat
		GEODE_AS_STATIC_FUNCTION(setChannelFormat) 
	#endif

	#ifndef GEODE_STATICS_setParameterBool
		#define GEODE_STATICS_setParameterBool
		GEODE_AS_STATIC_FUNCTION(setParameterBool) 
	#endif

	#ifndef GEODE_STATICS_setParameterData
		#define GEODE_STATICS_setParameterData
		GEODE_AS_STATIC_FUNCTION(setParameterData) 
	#endif

	#ifndef GEODE_STATICS_showConfigDialog
		#define GEODE_STATICS_showConfigDialog
		GEODE_AS_STATIC_FUNCTION(showConfigDialog) 
	#endif

	#ifndef GEODE_STATICS_getParameterFloat
		#define GEODE_STATICS_getParameterFloat
		GEODE_AS_STATIC_FUNCTION(getParameterFloat) 
	#endif

	#ifndef GEODE_STATICS_setParameterFloat
		#define GEODE_STATICS_setParameterFloat
		GEODE_AS_STATIC_FUNCTION(setParameterFloat) 
	#endif

	#ifndef GEODE_STATICS_getMeteringEnabled
		#define GEODE_STATICS_getMeteringEnabled
		GEODE_AS_STATIC_FUNCTION(getMeteringEnabled) 
	#endif

	#ifndef GEODE_STATICS_setMeteringEnabled
		#define GEODE_STATICS_setMeteringEnabled
		GEODE_AS_STATIC_FUNCTION(setMeteringEnabled) 
	#endif

	#ifndef GEODE_STATICS_getDataParameterIndex
		#define GEODE_STATICS_getDataParameterIndex
		GEODE_AS_STATIC_FUNCTION(getDataParameterIndex) 
	#endif

	#ifndef GEODE_STATICS_getOutputChannelFormat
		#define GEODE_STATICS_getOutputChannelFormat
		GEODE_AS_STATIC_FUNCTION(getOutputChannelFormat) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_getIdle
		#define GEODE_STATICS_getIdle
		GEODE_AS_STATIC_FUNCTION(getIdle) 
	#endif

	#ifndef GEODE_STATICS_getInfo
		#define GEODE_STATICS_getInfo
		GEODE_AS_STATIC_FUNCTION(getInfo) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_addInput
		#define GEODE_STATICS_addInput
		GEODE_AS_STATIC_FUNCTION(addInput) 
	#endif

	#ifndef GEODE_STATICS_getInput
		#define GEODE_STATICS_getInput
		GEODE_AS_STATIC_FUNCTION(getInput) 
	#endif

	#ifndef GEODE_STATICS_getActive
		#define GEODE_STATICS_getActive
		GEODE_AS_STATIC_FUNCTION(getActive) 
	#endif

	#ifndef GEODE_STATICS_getBypass
		#define GEODE_STATICS_getBypass
		GEODE_AS_STATIC_FUNCTION(getBypass) 
	#endif

	#ifndef GEODE_STATICS_getOutput
		#define GEODE_STATICS_getOutput
		GEODE_AS_STATIC_FUNCTION(getOutput) 
	#endif

	#ifndef GEODE_STATICS_setActive
		#define GEODE_STATICS_setActive
		GEODE_AS_STATIC_FUNCTION(setActive) 
	#endif

	#ifndef GEODE_STATICS_setBypass
		#define GEODE_STATICS_setBypass
		GEODE_AS_STATIC_FUNCTION(setBypass) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getCPUUsage
		#define GEODE_CONCEPT_CHECK_getCPUUsage
		GEODE_CONCEPT_FUNCTION_CHECK(getCPUUsage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCallback
		#define GEODE_CONCEPT_CHECK_setCallback
		GEODE_CONCEPT_FUNCTION_CHECK(setCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumInputs
		#define GEODE_CONCEPT_CHECK_getNumInputs
		GEODE_CONCEPT_FUNCTION_CHECK(getNumInputs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWetDryMix
		#define GEODE_CONCEPT_CHECK_getWetDryMix
		GEODE_CONCEPT_FUNCTION_CHECK(getWetDryMix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWetDryMix
		#define GEODE_CONCEPT_CHECK_setWetDryMix
		GEODE_CONCEPT_FUNCTION_CHECK(setWetDryMix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disconnectAll
		#define GEODE_CONCEPT_CHECK_disconnectAll
		GEODE_CONCEPT_FUNCTION_CHECK(disconnectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumOutputs
		#define GEODE_CONCEPT_CHECK_getNumOutputs
		GEODE_CONCEPT_FUNCTION_CHECK(getNumOutputs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disconnectFrom
		#define GEODE_CONCEPT_CHECK_disconnectFrom
		GEODE_CONCEPT_FUNCTION_CHECK(disconnectFrom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMeteringInfo
		#define GEODE_CONCEPT_CHECK_getMeteringInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getMeteringInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParameterInt
		#define GEODE_CONCEPT_CHECK_getParameterInt
		GEODE_CONCEPT_FUNCTION_CHECK(getParameterInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSystemObject
		#define GEODE_CONCEPT_CHECK_getSystemObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSystemObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParameterInt
		#define GEODE_CONCEPT_CHECK_setParameterInt
		GEODE_CONCEPT_FUNCTION_CHECK(setParameterInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChannelFormat
		#define GEODE_CONCEPT_CHECK_getChannelFormat
		GEODE_CONCEPT_FUNCTION_CHECK(getChannelFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumParameters
		#define GEODE_CONCEPT_CHECK_getNumParameters
		GEODE_CONCEPT_FUNCTION_CHECK(getNumParameters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParameterBool
		#define GEODE_CONCEPT_CHECK_getParameterBool
		GEODE_CONCEPT_FUNCTION_CHECK(getParameterBool) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParameterData
		#define GEODE_CONCEPT_CHECK_getParameterData
		GEODE_CONCEPT_FUNCTION_CHECK(getParameterData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParameterInfo
		#define GEODE_CONCEPT_CHECK_getParameterInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getParameterInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChannelFormat
		#define GEODE_CONCEPT_CHECK_setChannelFormat
		GEODE_CONCEPT_FUNCTION_CHECK(setChannelFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParameterBool
		#define GEODE_CONCEPT_CHECK_setParameterBool
		GEODE_CONCEPT_FUNCTION_CHECK(setParameterBool) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParameterData
		#define GEODE_CONCEPT_CHECK_setParameterData
		GEODE_CONCEPT_FUNCTION_CHECK(setParameterData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showConfigDialog
		#define GEODE_CONCEPT_CHECK_showConfigDialog
		GEODE_CONCEPT_FUNCTION_CHECK(showConfigDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParameterFloat
		#define GEODE_CONCEPT_CHECK_getParameterFloat
		GEODE_CONCEPT_FUNCTION_CHECK(getParameterFloat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParameterFloat
		#define GEODE_CONCEPT_CHECK_setParameterFloat
		GEODE_CONCEPT_FUNCTION_CHECK(setParameterFloat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMeteringEnabled
		#define GEODE_CONCEPT_CHECK_getMeteringEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(getMeteringEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMeteringEnabled
		#define GEODE_CONCEPT_CHECK_setMeteringEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setMeteringEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDataParameterIndex
		#define GEODE_CONCEPT_CHECK_getDataParameterIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getDataParameterIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOutputChannelFormat
		#define GEODE_CONCEPT_CHECK_getOutputChannelFormat
		GEODE_CONCEPT_FUNCTION_CHECK(getOutputChannelFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIdle
		#define GEODE_CONCEPT_CHECK_getIdle
		GEODE_CONCEPT_FUNCTION_CHECK(getIdle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInfo
		#define GEODE_CONCEPT_CHECK_getInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_release
		#define GEODE_CONCEPT_CHECK_release
		GEODE_CONCEPT_FUNCTION_CHECK(release) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInput
		#define GEODE_CONCEPT_CHECK_addInput
		GEODE_CONCEPT_FUNCTION_CHECK(addInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInput
		#define GEODE_CONCEPT_CHECK_getInput
		GEODE_CONCEPT_FUNCTION_CHECK(getInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActive
		#define GEODE_CONCEPT_CHECK_getActive
		GEODE_CONCEPT_FUNCTION_CHECK(getActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBypass
		#define GEODE_CONCEPT_CHECK_getBypass
		GEODE_CONCEPT_FUNCTION_CHECK(getBypass) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOutput
		#define GEODE_CONCEPT_CHECK_getOutput
		GEODE_CONCEPT_FUNCTION_CHECK(getOutput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActive
		#define GEODE_CONCEPT_CHECK_setActive
		GEODE_CONCEPT_FUNCTION_CHECK(setActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBypass
		#define GEODE_CONCEPT_CHECK_setBypass
		GEODE_CONCEPT_FUNCTION_CHECK(setBypass) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::DSP> : ModifyBase<ModifyDerive<Der, FMOD::DSP>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::DSP>>;
		using ModifyBase<ModifyDerive<Der, FMOD::DSP>>::ModifyBase;
		using Base = FMOD::DSP;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int*>::func(&FMOD::DSP::getCPUUsage)), Thiscall, FMOD::DSP, getCPUUsage, unsigned int*, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::DSP::getUserData)), Thiscall, FMOD::DSP, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSP_CALLBACK>::func(&FMOD::DSP::setCallback)), Thiscall, FMOD::DSP, setCallback, FMOD_DSP_CALLBACK)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::DSP::setUserData)), Thiscall, FMOD::DSP, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::DSP::getNumInputs)), Thiscall, FMOD::DSP, getNumInputs, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&FMOD::DSP::getWetDryMix)), Thiscall, FMOD::DSP, getWetDryMix, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&FMOD::DSP::setWetDryMix)), Thiscall, FMOD::DSP, setWetDryMix, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool>::func(&FMOD::DSP::disconnectAll)), Thiscall, FMOD::DSP, disconnectAll, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::DSP::getNumOutputs)), Thiscall, FMOD::DSP, getNumOutputs, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP*, FMOD::DSPConnection*>::func(&FMOD::DSP::disconnectFrom)), Thiscall, FMOD::DSP, disconnectFrom, FMOD::DSP*, FMOD::DSPConnection*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSP_METERING_INFO*, FMOD_DSP_METERING_INFO*>::func(&FMOD::DSP::getMeteringInfo)), Thiscall, FMOD::DSP, getMeteringInfo, FMOD_DSP_METERING_INFO*, FMOD_DSP_METERING_INFO*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int*, char*, int>::func(&FMOD::DSP::getParameterInt)), Thiscall, FMOD::DSP, getParameterInt, int, int*, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::System**>::func(&FMOD::DSP::getSystemObject)), Thiscall, FMOD::DSP, getSystemObject, FMOD::System**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&FMOD::DSP::setParameterInt)), Thiscall, FMOD::DSP, setParameterInt, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, int*, FMOD_SPEAKERMODE*>::func(&FMOD::DSP::getChannelFormat)), Thiscall, FMOD::DSP, getChannelFormat, unsigned int*, int*, FMOD_SPEAKERMODE*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::DSP::getNumParameters)), Thiscall, FMOD::DSP, getNumParameters, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool*, char*, int>::func(&FMOD::DSP::getParameterBool)), Thiscall, FMOD::DSP, getParameterBool, int, bool*, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, void**, unsigned int*, char*, int>::func(&FMOD::DSP::getParameterData)), Thiscall, FMOD::DSP, getParameterData, int, void**, unsigned int*, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD_DSP_PARAMETER_DESC**>::func(&FMOD::DSP::getParameterInfo)), Thiscall, FMOD::DSP, getParameterInfo, int, FMOD_DSP_PARAMETER_DESC**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, int, FMOD_SPEAKERMODE>::func(&FMOD::DSP::setChannelFormat)), Thiscall, FMOD::DSP, setChannelFormat, unsigned int, int, FMOD_SPEAKERMODE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&FMOD::DSP::setParameterBool)), Thiscall, FMOD::DSP, setParameterBool, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, void*, unsigned int>::func(&FMOD::DSP::setParameterData)), Thiscall, FMOD::DSP, setParameterData, int, void*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, bool>::func(&FMOD::DSP::showConfigDialog)), Thiscall, FMOD::DSP, showConfigDialog, void*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*, char*, int>::func(&FMOD::DSP::getParameterFloat)), Thiscall, FMOD::DSP, getParameterFloat, int, float*, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&FMOD::DSP::setParameterFloat)), Thiscall, FMOD::DSP, setParameterFloat, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*, bool*>::func(&FMOD::DSP::getMeteringEnabled)), Thiscall, FMOD::DSP, getMeteringEnabled, bool*, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool>::func(&FMOD::DSP::setMeteringEnabled)), Thiscall, FMOD::DSP, setMeteringEnabled, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int*>::func(&FMOD::DSP::getDataParameterIndex)), Thiscall, FMOD::DSP, getDataParameterIndex, int, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, int, FMOD_SPEAKERMODE, unsigned int*, int*, FMOD_SPEAKERMODE*>::func(&FMOD::DSP::getOutputChannelFormat)), Thiscall, FMOD::DSP, getOutputChannelFormat, unsigned int, int, FMOD_SPEAKERMODE, unsigned int*, int*, FMOD_SPEAKERMODE*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::DSP::reset)), Thiscall, FMOD::DSP, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::DSP::getIdle)), Thiscall, FMOD::DSP, getIdle, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char*, unsigned int*, int*, int*, int*>::func(&FMOD::DSP::getInfo)), Thiscall, FMOD::DSP, getInfo, char*, unsigned int*, int*, int*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSP_TYPE*>::func(&FMOD::DSP::getType)), Thiscall, FMOD::DSP, getType, FMOD_DSP_TYPE*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::DSP::release)), Thiscall, FMOD::DSP, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP*, FMOD::DSPConnection**, FMOD_DSPCONNECTION_TYPE>::func(&FMOD::DSP::addInput)), Thiscall, FMOD::DSP, addInput, FMOD::DSP*, FMOD::DSPConnection**, FMOD_DSPCONNECTION_TYPE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::DSP**, FMOD::DSPConnection**>::func(&FMOD::DSP::getInput)), Thiscall, FMOD::DSP, getInput, int, FMOD::DSP**, FMOD::DSPConnection**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::DSP::getActive)), Thiscall, FMOD::DSP, getActive, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::DSP::getBypass)), Thiscall, FMOD::DSP, getBypass, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::DSP**, FMOD::DSPConnection**>::func(&FMOD::DSP::getOutput)), Thiscall, FMOD::DSP, getOutput, int, FMOD::DSP**, FMOD::DSPConnection**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&FMOD::DSP::setActive)), Thiscall, FMOD::DSP, setActive, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&FMOD::DSP::setBypass)), Thiscall, FMOD::DSP, setBypass, bool)
		}
	};
}
