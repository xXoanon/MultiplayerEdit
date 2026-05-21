#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_get3DLevel
		#define GEODE_STATICS_get3DLevel
		GEODE_AS_STATIC_FUNCTION(get3DLevel) 
	#endif

	#ifndef GEODE_STATICS_getNumDSPs
		#define GEODE_STATICS_getNumDSPs
		GEODE_AS_STATIC_FUNCTION(getNumDSPs) 
	#endif

	#ifndef GEODE_STATICS_set3DLevel
		#define GEODE_STATICS_set3DLevel
		GEODE_AS_STATIC_FUNCTION(set3DLevel) 
	#endif

	#ifndef GEODE_STATICS_get3DSpread
		#define GEODE_STATICS_get3DSpread
		GEODE_AS_STATIC_FUNCTION(get3DSpread) 
	#endif

	#ifndef GEODE_STATICS_getDSPClock
		#define GEODE_STATICS_getDSPClock
		GEODE_AS_STATIC_FUNCTION(getDSPClock) 
	#endif

	#ifndef GEODE_STATICS_getDSPIndex
		#define GEODE_STATICS_getDSPIndex
		GEODE_AS_STATIC_FUNCTION(getDSPIndex) 
	#endif

	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_set3DSpread
		#define GEODE_STATICS_set3DSpread
		GEODE_AS_STATIC_FUNCTION(set3DSpread) 
	#endif

	#ifndef GEODE_STATICS_setCallback
		#define GEODE_STATICS_setCallback
		GEODE_AS_STATIC_FUNCTION(setCallback) 
	#endif

	#ifndef GEODE_STATICS_setDSPIndex
		#define GEODE_STATICS_setDSPIndex
		GEODE_AS_STATIC_FUNCTION(setDSPIndex) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_addFadePoint
		#define GEODE_STATICS_addFadePoint
		GEODE_AS_STATIC_FUNCTION(addFadePoint) 
	#endif

	#ifndef GEODE_STATICS_getMixMatrix
		#define GEODE_STATICS_getMixMatrix
		GEODE_AS_STATIC_FUNCTION(getMixMatrix) 
	#endif

	#ifndef GEODE_STATICS_setMixMatrix
		#define GEODE_STATICS_setMixMatrix
		GEODE_AS_STATIC_FUNCTION(setMixMatrix) 
	#endif

	#ifndef GEODE_STATICS_getAudibility
		#define GEODE_STATICS_getAudibility
		GEODE_AS_STATIC_FUNCTION(getAudibility) 
	#endif

	#ifndef GEODE_STATICS_getFadePoints
		#define GEODE_STATICS_getFadePoints
		GEODE_AS_STATIC_FUNCTION(getFadePoints) 
	#endif

	#ifndef GEODE_STATICS_getVolumeRamp
		#define GEODE_STATICS_getVolumeRamp
		GEODE_AS_STATIC_FUNCTION(getVolumeRamp) 
	#endif

	#ifndef GEODE_STATICS_setVolumeRamp
		#define GEODE_STATICS_setVolumeRamp
		GEODE_AS_STATIC_FUNCTION(setVolumeRamp) 
	#endif

	#ifndef GEODE_STATICS_get3DOcclusion
		#define GEODE_STATICS_get3DOcclusion
		GEODE_AS_STATIC_FUNCTION(get3DOcclusion) 
	#endif

	#ifndef GEODE_STATICS_getLowPassGain
		#define GEODE_STATICS_getLowPassGain
		GEODE_AS_STATIC_FUNCTION(getLowPassGain) 
	#endif

	#ifndef GEODE_STATICS_set3DOcclusion
		#define GEODE_STATICS_set3DOcclusion
		GEODE_AS_STATIC_FUNCTION(set3DOcclusion) 
	#endif

	#ifndef GEODE_STATICS_setLowPassGain
		#define GEODE_STATICS_setLowPassGain
		GEODE_AS_STATIC_FUNCTION(setLowPassGain) 
	#endif

	#ifndef GEODE_STATICS_get3DAttributes
		#define GEODE_STATICS_get3DAttributes
		GEODE_AS_STATIC_FUNCTION(get3DAttributes) 
	#endif

	#ifndef GEODE_STATICS_getSystemObject
		#define GEODE_STATICS_getSystemObject
		GEODE_AS_STATIC_FUNCTION(getSystemObject) 
	#endif

	#ifndef GEODE_STATICS_set3DAttributes
		#define GEODE_STATICS_set3DAttributes
		GEODE_AS_STATIC_FUNCTION(set3DAttributes) 
	#endif

	#ifndef GEODE_STATICS_removeFadePoints
		#define GEODE_STATICS_removeFadePoints
		GEODE_AS_STATIC_FUNCTION(removeFadePoints) 
	#endif

	#ifndef GEODE_STATICS_setFadePointRamp
		#define GEODE_STATICS_setFadePointRamp
		GEODE_AS_STATIC_FUNCTION(setFadePointRamp) 
	#endif

	#ifndef GEODE_STATICS_get3DConeSettings
		#define GEODE_STATICS_get3DConeSettings
		GEODE_AS_STATIC_FUNCTION(get3DConeSettings) 
	#endif

	#ifndef GEODE_STATICS_get3DDopplerLevel
		#define GEODE_STATICS_get3DDopplerLevel
		GEODE_AS_STATIC_FUNCTION(get3DDopplerLevel) 
	#endif

	#ifndef GEODE_STATICS_set3DConeSettings
		#define GEODE_STATICS_set3DConeSettings
		GEODE_AS_STATIC_FUNCTION(set3DConeSettings) 
	#endif

	#ifndef GEODE_STATICS_set3DDopplerLevel
		#define GEODE_STATICS_set3DDopplerLevel
		GEODE_AS_STATIC_FUNCTION(set3DDopplerLevel) 
	#endif

	#ifndef GEODE_STATICS_setMixLevelsInput
		#define GEODE_STATICS_setMixLevelsInput
		GEODE_AS_STATIC_FUNCTION(setMixLevelsInput) 
	#endif

	#ifndef GEODE_STATICS_get3DCustomRolloff
		#define GEODE_STATICS_get3DCustomRolloff
		GEODE_AS_STATIC_FUNCTION(get3DCustomRolloff) 
	#endif

	#ifndef GEODE_STATICS_set3DCustomRolloff
		#define GEODE_STATICS_set3DCustomRolloff
		GEODE_AS_STATIC_FUNCTION(set3DCustomRolloff) 
	#endif

	#ifndef GEODE_STATICS_setMixLevelsOutput
		#define GEODE_STATICS_setMixLevelsOutput
		GEODE_AS_STATIC_FUNCTION(setMixLevelsOutput) 
	#endif

	#ifndef GEODE_STATICS_get3DDistanceFilter
		#define GEODE_STATICS_get3DDistanceFilter
		GEODE_AS_STATIC_FUNCTION(get3DDistanceFilter) 
	#endif

	#ifndef GEODE_STATICS_get3DMinMaxDistance
		#define GEODE_STATICS_get3DMinMaxDistance
		GEODE_AS_STATIC_FUNCTION(get3DMinMaxDistance) 
	#endif

	#ifndef GEODE_STATICS_getReverbProperties
		#define GEODE_STATICS_getReverbProperties
		GEODE_AS_STATIC_FUNCTION(getReverbProperties) 
	#endif

	#ifndef GEODE_STATICS_set3DDistanceFilter
		#define GEODE_STATICS_set3DDistanceFilter
		GEODE_AS_STATIC_FUNCTION(set3DDistanceFilter) 
	#endif

	#ifndef GEODE_STATICS_set3DMinMaxDistance
		#define GEODE_STATICS_set3DMinMaxDistance
		GEODE_AS_STATIC_FUNCTION(set3DMinMaxDistance) 
	#endif

	#ifndef GEODE_STATICS_setReverbProperties
		#define GEODE_STATICS_setReverbProperties
		GEODE_AS_STATIC_FUNCTION(setReverbProperties) 
	#endif

	#ifndef GEODE_STATICS_get3DConeOrientation
		#define GEODE_STATICS_get3DConeOrientation
		GEODE_AS_STATIC_FUNCTION(get3DConeOrientation) 
	#endif

	#ifndef GEODE_STATICS_set3DConeOrientation
		#define GEODE_STATICS_set3DConeOrientation
		GEODE_AS_STATIC_FUNCTION(set3DConeOrientation) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_addDSP
		#define GEODE_STATICS_addDSP
		GEODE_AS_STATIC_FUNCTION(addDSP) 
	#endif

	#ifndef GEODE_STATICS_getDSP
		#define GEODE_STATICS_getDSP
		GEODE_AS_STATIC_FUNCTION(getDSP) 
	#endif

	#ifndef GEODE_STATICS_setPan
		#define GEODE_STATICS_setPan
		GEODE_AS_STATIC_FUNCTION(setPan) 
	#endif

	#ifndef GEODE_STATICS_getMode
		#define GEODE_STATICS_getMode
		GEODE_AS_STATIC_FUNCTION(getMode) 
	#endif

	#ifndef GEODE_STATICS_getMute
		#define GEODE_STATICS_getMute
		GEODE_AS_STATIC_FUNCTION(getMute) 
	#endif

	#ifndef GEODE_STATICS_setMode
		#define GEODE_STATICS_setMode
		GEODE_AS_STATIC_FUNCTION(setMode) 
	#endif

	#ifndef GEODE_STATICS_setMute
		#define GEODE_STATICS_setMute
		GEODE_AS_STATIC_FUNCTION(setMute) 
	#endif

	#ifndef GEODE_STATICS_getDelay
		#define GEODE_STATICS_getDelay
		GEODE_AS_STATIC_FUNCTION(getDelay) 
	#endif

	#ifndef GEODE_STATICS_getPitch
		#define GEODE_STATICS_getPitch
		GEODE_AS_STATIC_FUNCTION(getPitch) 
	#endif

	#ifndef GEODE_STATICS_setDelay
		#define GEODE_STATICS_setDelay
		GEODE_AS_STATIC_FUNCTION(setDelay) 
	#endif

	#ifndef GEODE_STATICS_setPitch
		#define GEODE_STATICS_setPitch
		GEODE_AS_STATIC_FUNCTION(setPitch) 
	#endif

	#ifndef GEODE_STATICS_getPaused
		#define GEODE_STATICS_getPaused
		GEODE_AS_STATIC_FUNCTION(getPaused) 
	#endif

	#ifndef GEODE_STATICS_getVolume
		#define GEODE_STATICS_getVolume
		GEODE_AS_STATIC_FUNCTION(getVolume) 
	#endif

	#ifndef GEODE_STATICS_isPlaying
		#define GEODE_STATICS_isPlaying
		GEODE_AS_STATIC_FUNCTION(isPlaying) 
	#endif

	#ifndef GEODE_STATICS_removeDSP
		#define GEODE_STATICS_removeDSP
		GEODE_AS_STATIC_FUNCTION(removeDSP) 
	#endif

	#ifndef GEODE_STATICS_setPaused
		#define GEODE_STATICS_setPaused
		GEODE_AS_STATIC_FUNCTION(setPaused) 
	#endif

	#ifndef GEODE_STATICS_setVolume
		#define GEODE_STATICS_setVolume
		GEODE_AS_STATIC_FUNCTION(setVolume) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get3DLevel
		#define GEODE_CONCEPT_CHECK_get3DLevel
		GEODE_CONCEPT_FUNCTION_CHECK(get3DLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumDSPs
		#define GEODE_CONCEPT_CHECK_getNumDSPs
		GEODE_CONCEPT_FUNCTION_CHECK(getNumDSPs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DLevel
		#define GEODE_CONCEPT_CHECK_set3DLevel
		GEODE_CONCEPT_FUNCTION_CHECK(set3DLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DSpread
		#define GEODE_CONCEPT_CHECK_get3DSpread
		GEODE_CONCEPT_FUNCTION_CHECK(get3DSpread) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDSPClock
		#define GEODE_CONCEPT_CHECK_getDSPClock
		GEODE_CONCEPT_FUNCTION_CHECK(getDSPClock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDSPIndex
		#define GEODE_CONCEPT_CHECK_getDSPIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getDSPIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DSpread
		#define GEODE_CONCEPT_CHECK_set3DSpread
		GEODE_CONCEPT_FUNCTION_CHECK(set3DSpread) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCallback
		#define GEODE_CONCEPT_CHECK_setCallback
		GEODE_CONCEPT_FUNCTION_CHECK(setCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDSPIndex
		#define GEODE_CONCEPT_CHECK_setDSPIndex
		GEODE_CONCEPT_FUNCTION_CHECK(setDSPIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addFadePoint
		#define GEODE_CONCEPT_CHECK_addFadePoint
		GEODE_CONCEPT_FUNCTION_CHECK(addFadePoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMixMatrix
		#define GEODE_CONCEPT_CHECK_getMixMatrix
		GEODE_CONCEPT_FUNCTION_CHECK(getMixMatrix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMixMatrix
		#define GEODE_CONCEPT_CHECK_setMixMatrix
		GEODE_CONCEPT_FUNCTION_CHECK(setMixMatrix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudibility
		#define GEODE_CONCEPT_CHECK_getAudibility
		GEODE_CONCEPT_FUNCTION_CHECK(getAudibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFadePoints
		#define GEODE_CONCEPT_CHECK_getFadePoints
		GEODE_CONCEPT_FUNCTION_CHECK(getFadePoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVolumeRamp
		#define GEODE_CONCEPT_CHECK_getVolumeRamp
		GEODE_CONCEPT_FUNCTION_CHECK(getVolumeRamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVolumeRamp
		#define GEODE_CONCEPT_CHECK_setVolumeRamp
		GEODE_CONCEPT_FUNCTION_CHECK(setVolumeRamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DOcclusion
		#define GEODE_CONCEPT_CHECK_get3DOcclusion
		GEODE_CONCEPT_FUNCTION_CHECK(get3DOcclusion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLowPassGain
		#define GEODE_CONCEPT_CHECK_getLowPassGain
		GEODE_CONCEPT_FUNCTION_CHECK(getLowPassGain) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DOcclusion
		#define GEODE_CONCEPT_CHECK_set3DOcclusion
		GEODE_CONCEPT_FUNCTION_CHECK(set3DOcclusion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLowPassGain
		#define GEODE_CONCEPT_CHECK_setLowPassGain
		GEODE_CONCEPT_FUNCTION_CHECK(setLowPassGain) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DAttributes
		#define GEODE_CONCEPT_CHECK_get3DAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(get3DAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSystemObject
		#define GEODE_CONCEPT_CHECK_getSystemObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSystemObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DAttributes
		#define GEODE_CONCEPT_CHECK_set3DAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(set3DAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFadePoints
		#define GEODE_CONCEPT_CHECK_removeFadePoints
		GEODE_CONCEPT_FUNCTION_CHECK(removeFadePoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFadePointRamp
		#define GEODE_CONCEPT_CHECK_setFadePointRamp
		GEODE_CONCEPT_FUNCTION_CHECK(setFadePointRamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DConeSettings
		#define GEODE_CONCEPT_CHECK_get3DConeSettings
		GEODE_CONCEPT_FUNCTION_CHECK(get3DConeSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DDopplerLevel
		#define GEODE_CONCEPT_CHECK_get3DDopplerLevel
		GEODE_CONCEPT_FUNCTION_CHECK(get3DDopplerLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DConeSettings
		#define GEODE_CONCEPT_CHECK_set3DConeSettings
		GEODE_CONCEPT_FUNCTION_CHECK(set3DConeSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DDopplerLevel
		#define GEODE_CONCEPT_CHECK_set3DDopplerLevel
		GEODE_CONCEPT_FUNCTION_CHECK(set3DDopplerLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMixLevelsInput
		#define GEODE_CONCEPT_CHECK_setMixLevelsInput
		GEODE_CONCEPT_FUNCTION_CHECK(setMixLevelsInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DCustomRolloff
		#define GEODE_CONCEPT_CHECK_get3DCustomRolloff
		GEODE_CONCEPT_FUNCTION_CHECK(get3DCustomRolloff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DCustomRolloff
		#define GEODE_CONCEPT_CHECK_set3DCustomRolloff
		GEODE_CONCEPT_FUNCTION_CHECK(set3DCustomRolloff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMixLevelsOutput
		#define GEODE_CONCEPT_CHECK_setMixLevelsOutput
		GEODE_CONCEPT_FUNCTION_CHECK(setMixLevelsOutput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DDistanceFilter
		#define GEODE_CONCEPT_CHECK_get3DDistanceFilter
		GEODE_CONCEPT_FUNCTION_CHECK(get3DDistanceFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DMinMaxDistance
		#define GEODE_CONCEPT_CHECK_get3DMinMaxDistance
		GEODE_CONCEPT_FUNCTION_CHECK(get3DMinMaxDistance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReverbProperties
		#define GEODE_CONCEPT_CHECK_getReverbProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getReverbProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DDistanceFilter
		#define GEODE_CONCEPT_CHECK_set3DDistanceFilter
		GEODE_CONCEPT_FUNCTION_CHECK(set3DDistanceFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DMinMaxDistance
		#define GEODE_CONCEPT_CHECK_set3DMinMaxDistance
		GEODE_CONCEPT_FUNCTION_CHECK(set3DMinMaxDistance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReverbProperties
		#define GEODE_CONCEPT_CHECK_setReverbProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setReverbProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DConeOrientation
		#define GEODE_CONCEPT_CHECK_get3DConeOrientation
		GEODE_CONCEPT_FUNCTION_CHECK(get3DConeOrientation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DConeOrientation
		#define GEODE_CONCEPT_CHECK_set3DConeOrientation
		GEODE_CONCEPT_FUNCTION_CHECK(set3DConeOrientation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stop
		#define GEODE_CONCEPT_CHECK_stop
		GEODE_CONCEPT_FUNCTION_CHECK(stop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDSP
		#define GEODE_CONCEPT_CHECK_addDSP
		GEODE_CONCEPT_FUNCTION_CHECK(addDSP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDSP
		#define GEODE_CONCEPT_CHECK_getDSP
		GEODE_CONCEPT_FUNCTION_CHECK(getDSP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPan
		#define GEODE_CONCEPT_CHECK_setPan
		GEODE_CONCEPT_FUNCTION_CHECK(setPan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMode
		#define GEODE_CONCEPT_CHECK_getMode
		GEODE_CONCEPT_FUNCTION_CHECK(getMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMute
		#define GEODE_CONCEPT_CHECK_getMute
		GEODE_CONCEPT_FUNCTION_CHECK(getMute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMode
		#define GEODE_CONCEPT_CHECK_setMode
		GEODE_CONCEPT_FUNCTION_CHECK(setMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMute
		#define GEODE_CONCEPT_CHECK_setMute
		GEODE_CONCEPT_FUNCTION_CHECK(setMute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDelay
		#define GEODE_CONCEPT_CHECK_getDelay
		GEODE_CONCEPT_FUNCTION_CHECK(getDelay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPitch
		#define GEODE_CONCEPT_CHECK_getPitch
		GEODE_CONCEPT_FUNCTION_CHECK(getPitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelay
		#define GEODE_CONCEPT_CHECK_setDelay
		GEODE_CONCEPT_FUNCTION_CHECK(setDelay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPitch
		#define GEODE_CONCEPT_CHECK_setPitch
		GEODE_CONCEPT_FUNCTION_CHECK(setPitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPaused
		#define GEODE_CONCEPT_CHECK_getPaused
		GEODE_CONCEPT_FUNCTION_CHECK(getPaused) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVolume
		#define GEODE_CONCEPT_CHECK_getVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPlaying
		#define GEODE_CONCEPT_CHECK_isPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(isPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDSP
		#define GEODE_CONCEPT_CHECK_removeDSP
		GEODE_CONCEPT_FUNCTION_CHECK(removeDSP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPaused
		#define GEODE_CONCEPT_CHECK_setPaused
		GEODE_CONCEPT_FUNCTION_CHECK(setPaused) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVolume
		#define GEODE_CONCEPT_CHECK_setVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setVolume) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::ChannelControl> : ModifyBase<ModifyDerive<Der, FMOD::ChannelControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::ChannelControl>>;
		using ModifyBase<ModifyDerive<Der, FMOD::ChannelControl>>::ModifyBase;
		using Base = FMOD::ChannelControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::ChannelControl::get3DLevel)), Thiscall, FMOD::ChannelControl, get3DLevel, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::ChannelControl::getNumDSPs)), Thiscall, FMOD::ChannelControl, getNumDSPs, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::set3DLevel)), Thiscall, FMOD::ChannelControl, set3DLevel, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::ChannelControl::get3DSpread)), Thiscall, FMOD::ChannelControl, get3DSpread, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned long long*, unsigned long long*>::func(&FMOD::ChannelControl::getDSPClock)), Thiscall, FMOD::ChannelControl, getDSPClock, unsigned long long*, unsigned long long*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP*, int*>::func(&FMOD::ChannelControl::getDSPIndex)), Thiscall, FMOD::ChannelControl, getDSPIndex, FMOD::DSP*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::ChannelControl::getUserData)), Thiscall, FMOD::ChannelControl, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::set3DSpread)), Thiscall, FMOD::ChannelControl, set3DSpread, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_CHANNELCONTROL_CALLBACK>::func(&FMOD::ChannelControl::setCallback)), Thiscall, FMOD::ChannelControl, setCallback, FMOD_CHANNELCONTROL_CALLBACK)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP*, int>::func(&FMOD::ChannelControl::setDSPIndex)), Thiscall, FMOD::ChannelControl, setDSPIndex, FMOD::DSP*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::ChannelControl::setUserData)), Thiscall, FMOD::ChannelControl, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned long long, float>::func(&FMOD::ChannelControl::addFadePoint)), Thiscall, FMOD::ChannelControl, addFadePoint, unsigned long long, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, int*, int*, int>::func(&FMOD::ChannelControl::getMixMatrix)), Thiscall, FMOD::ChannelControl, getMixMatrix, float*, int*, int*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, int, int, int>::func(&FMOD::ChannelControl::setMixMatrix)), Thiscall, FMOD::ChannelControl, setMixMatrix, float*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::ChannelControl::getAudibility)), Thiscall, FMOD::ChannelControl, getAudibility, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned long long*, float*>::func(&FMOD::ChannelControl::getFadePoints)), Thiscall, FMOD::ChannelControl, getFadePoints, unsigned int*, unsigned long long*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::ChannelControl::getVolumeRamp)), Thiscall, FMOD::ChannelControl, getVolumeRamp, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&FMOD::ChannelControl::setVolumeRamp)), Thiscall, FMOD::ChannelControl, setVolumeRamp, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*>::func(&FMOD::ChannelControl::get3DOcclusion)), Thiscall, FMOD::ChannelControl, get3DOcclusion, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::ChannelControl::getLowPassGain)), Thiscall, FMOD::ChannelControl, getLowPassGain, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&FMOD::ChannelControl::set3DOcclusion)), Thiscall, FMOD::ChannelControl, set3DOcclusion, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::setLowPassGain)), Thiscall, FMOD::ChannelControl, setLowPassGain, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*, FMOD_VECTOR*>::func(&FMOD::ChannelControl::get3DAttributes)), Thiscall, FMOD::ChannelControl, get3DAttributes, FMOD_VECTOR*, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::System**>::func(&FMOD::ChannelControl::getSystemObject)), Thiscall, FMOD::ChannelControl, getSystemObject, FMOD::System**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR const*, FMOD_VECTOR const*>::func(&FMOD::ChannelControl::set3DAttributes)), Thiscall, FMOD::ChannelControl, set3DAttributes, FMOD_VECTOR const*, FMOD_VECTOR const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned long long, unsigned long long>::func(&FMOD::ChannelControl::removeFadePoints)), Thiscall, FMOD::ChannelControl, removeFadePoints, unsigned long long, unsigned long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned long long, float>::func(&FMOD::ChannelControl::setFadePointRamp)), Thiscall, FMOD::ChannelControl, setFadePointRamp, unsigned long long, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&FMOD::ChannelControl::get3DConeSettings)), Thiscall, FMOD::ChannelControl, get3DConeSettings, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::ChannelControl::get3DDopplerLevel)), Thiscall, FMOD::ChannelControl, get3DDopplerLevel, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&FMOD::ChannelControl::set3DConeSettings)), Thiscall, FMOD::ChannelControl, set3DConeSettings, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::set3DDopplerLevel)), Thiscall, FMOD::ChannelControl, set3DDopplerLevel, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, int>::func(&FMOD::ChannelControl::setMixLevelsInput)), Thiscall, FMOD::ChannelControl, setMixLevelsInput, float*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR**, int*>::func(&FMOD::ChannelControl::get3DCustomRolloff)), Thiscall, FMOD::ChannelControl, get3DCustomRolloff, FMOD_VECTOR**, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*, int>::func(&FMOD::ChannelControl::set3DCustomRolloff)), Thiscall, FMOD::ChannelControl, set3DCustomRolloff, FMOD_VECTOR*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float, float, float, float, float>::func(&FMOD::ChannelControl::setMixLevelsOutput)), Thiscall, FMOD::ChannelControl, setMixLevelsOutput, float, float, float, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*, float*, float*>::func(&FMOD::ChannelControl::get3DDistanceFilter)), Thiscall, FMOD::ChannelControl, get3DDistanceFilter, bool*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*>::func(&FMOD::ChannelControl::get3DMinMaxDistance)), Thiscall, FMOD::ChannelControl, get3DMinMaxDistance, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*>::func(&FMOD::ChannelControl::getReverbProperties)), Thiscall, FMOD::ChannelControl, getReverbProperties, int, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, float, float>::func(&FMOD::ChannelControl::set3DDistanceFilter)), Thiscall, FMOD::ChannelControl, set3DDistanceFilter, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&FMOD::ChannelControl::set3DMinMaxDistance)), Thiscall, FMOD::ChannelControl, set3DMinMaxDistance, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&FMOD::ChannelControl::setReverbProperties)), Thiscall, FMOD::ChannelControl, setReverbProperties, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*>::func(&FMOD::ChannelControl::get3DConeOrientation)), Thiscall, FMOD::ChannelControl, get3DConeOrientation, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*>::func(&FMOD::ChannelControl::set3DConeOrientation)), Thiscall, FMOD::ChannelControl, set3DConeOrientation, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::ChannelControl::stop)), Thiscall, FMOD::ChannelControl, stop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::DSP*>::func(&FMOD::ChannelControl::addDSP)), Thiscall, FMOD::ChannelControl, addDSP, int, FMOD::DSP*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::DSP**>::func(&FMOD::ChannelControl::getDSP)), Thiscall, FMOD::ChannelControl, getDSP, int, FMOD::DSP**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::setPan)), Thiscall, FMOD::ChannelControl, setPan, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*>::func(&FMOD::ChannelControl::getMode)), Thiscall, FMOD::ChannelControl, getMode, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::ChannelControl::getMute)), Thiscall, FMOD::ChannelControl, getMute, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&FMOD::ChannelControl::setMode)), Thiscall, FMOD::ChannelControl, setMode, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&FMOD::ChannelControl::setMute)), Thiscall, FMOD::ChannelControl, setMute, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned long long*, unsigned long long*, bool*>::func(&FMOD::ChannelControl::getDelay)), Thiscall, FMOD::ChannelControl, getDelay, unsigned long long*, unsigned long long*, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::ChannelControl::getPitch)), Thiscall, FMOD::ChannelControl, getPitch, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned long long, unsigned long long, bool>::func(&FMOD::ChannelControl::setDelay)), Thiscall, FMOD::ChannelControl, setDelay, unsigned long long, unsigned long long, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::setPitch)), Thiscall, FMOD::ChannelControl, setPitch, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::ChannelControl::getPaused)), Thiscall, FMOD::ChannelControl, getPaused, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::ChannelControl::getVolume)), Thiscall, FMOD::ChannelControl, getVolume, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::ChannelControl::isPlaying)), Thiscall, FMOD::ChannelControl, isPlaying, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP*>::func(&FMOD::ChannelControl::removeDSP)), Thiscall, FMOD::ChannelControl, removeDSP, FMOD::DSP*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&FMOD::ChannelControl::setPaused)), Thiscall, FMOD::ChannelControl, setPaused, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::ChannelControl::setVolume)), Thiscall, FMOD::ChannelControl, setVolume, float)
		}
	};
}
