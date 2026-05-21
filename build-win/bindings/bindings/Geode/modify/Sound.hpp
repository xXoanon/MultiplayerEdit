#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getNumTags
		#define GEODE_STATICS_getNumTags
		GEODE_AS_STATIC_FUNCTION(getNumTags) 
	#endif

	#ifndef GEODE_STATICS_getDefaults
		#define GEODE_STATICS_getDefaults
		GEODE_AS_STATIC_FUNCTION(getDefaults) 
	#endif

	#ifndef GEODE_STATICS_getSubSound
		#define GEODE_STATICS_getSubSound
		GEODE_AS_STATIC_FUNCTION(getSubSound) 
	#endif

	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_setDefaults
		#define GEODE_STATICS_setDefaults
		GEODE_AS_STATIC_FUNCTION(setDefaults) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_addSyncPoint
		#define GEODE_STATICS_addSyncPoint
		GEODE_AS_STATIC_FUNCTION(addSyncPoint) 
	#endif

	#ifndef GEODE_STATICS_getLoopCount
		#define GEODE_STATICS_getLoopCount
		GEODE_AS_STATIC_FUNCTION(getLoopCount) 
	#endif

	#ifndef GEODE_STATICS_getOpenState
		#define GEODE_STATICS_getOpenState
		GEODE_AS_STATIC_FUNCTION(getOpenState) 
	#endif

	#ifndef GEODE_STATICS_getSyncPoint
		#define GEODE_STATICS_getSyncPoint
		GEODE_AS_STATIC_FUNCTION(getSyncPoint) 
	#endif

	#ifndef GEODE_STATICS_setLoopCount
		#define GEODE_STATICS_setLoopCount
		GEODE_AS_STATIC_FUNCTION(setLoopCount) 
	#endif

	#ifndef GEODE_STATICS_getLoopPoints
		#define GEODE_STATICS_getLoopPoints
		GEODE_AS_STATIC_FUNCTION(getLoopPoints) 
	#endif

	#ifndef GEODE_STATICS_getMusicSpeed
		#define GEODE_STATICS_getMusicSpeed
		GEODE_AS_STATIC_FUNCTION(getMusicSpeed) 
	#endif

	#ifndef GEODE_STATICS_getSoundGroup
		#define GEODE_STATICS_getSoundGroup
		GEODE_AS_STATIC_FUNCTION(getSoundGroup) 
	#endif

	#ifndef GEODE_STATICS_setLoopPoints
		#define GEODE_STATICS_setLoopPoints
		GEODE_AS_STATIC_FUNCTION(setLoopPoints) 
	#endif

	#ifndef GEODE_STATICS_setMusicSpeed
		#define GEODE_STATICS_setMusicSpeed
		GEODE_AS_STATIC_FUNCTION(setMusicSpeed) 
	#endif

	#ifndef GEODE_STATICS_setSoundGroup
		#define GEODE_STATICS_setSoundGroup
		GEODE_AS_STATIC_FUNCTION(setSoundGroup) 
	#endif

	#ifndef GEODE_STATICS_deleteSyncPoint
		#define GEODE_STATICS_deleteSyncPoint
		GEODE_AS_STATIC_FUNCTION(deleteSyncPoint) 
	#endif

	#ifndef GEODE_STATICS_getNumSubSounds
		#define GEODE_STATICS_getNumSubSounds
		GEODE_AS_STATIC_FUNCTION(getNumSubSounds) 
	#endif

	#ifndef GEODE_STATICS_getSystemObject
		#define GEODE_STATICS_getSystemObject
		GEODE_AS_STATIC_FUNCTION(getSystemObject) 
	#endif

	#ifndef GEODE_STATICS_getNumSyncPoints
		#define GEODE_STATICS_getNumSyncPoints
		GEODE_AS_STATIC_FUNCTION(getNumSyncPoints) 
	#endif

	#ifndef GEODE_STATICS_getSyncPointInfo
		#define GEODE_STATICS_getSyncPointInfo
		GEODE_AS_STATIC_FUNCTION(getSyncPointInfo) 
	#endif

	#ifndef GEODE_STATICS_get3DConeSettings
		#define GEODE_STATICS_get3DConeSettings
		GEODE_AS_STATIC_FUNCTION(get3DConeSettings) 
	#endif

	#ifndef GEODE_STATICS_getSubSoundParent
		#define GEODE_STATICS_getSubSoundParent
		GEODE_AS_STATIC_FUNCTION(getSubSoundParent) 
	#endif

	#ifndef GEODE_STATICS_set3DConeSettings
		#define GEODE_STATICS_set3DConeSettings
		GEODE_AS_STATIC_FUNCTION(set3DConeSettings) 
	#endif

	#ifndef GEODE_STATICS_get3DCustomRolloff
		#define GEODE_STATICS_get3DCustomRolloff
		GEODE_AS_STATIC_FUNCTION(get3DCustomRolloff) 
	#endif

	#ifndef GEODE_STATICS_set3DCustomRolloff
		#define GEODE_STATICS_set3DCustomRolloff
		GEODE_AS_STATIC_FUNCTION(set3DCustomRolloff) 
	#endif

	#ifndef GEODE_STATICS_get3DMinMaxDistance
		#define GEODE_STATICS_get3DMinMaxDistance
		GEODE_AS_STATIC_FUNCTION(get3DMinMaxDistance) 
	#endif

	#ifndef GEODE_STATICS_getMusicNumChannels
		#define GEODE_STATICS_getMusicNumChannels
		GEODE_AS_STATIC_FUNCTION(getMusicNumChannels) 
	#endif

	#ifndef GEODE_STATICS_set3DMinMaxDistance
		#define GEODE_STATICS_set3DMinMaxDistance
		GEODE_AS_STATIC_FUNCTION(set3DMinMaxDistance) 
	#endif

	#ifndef GEODE_STATICS_getMusicChannelVolume
		#define GEODE_STATICS_getMusicChannelVolume
		GEODE_AS_STATIC_FUNCTION(getMusicChannelVolume) 
	#endif

	#ifndef GEODE_STATICS_setMusicChannelVolume
		#define GEODE_STATICS_setMusicChannelVolume
		GEODE_AS_STATIC_FUNCTION(setMusicChannelVolume) 
	#endif

	#ifndef GEODE_STATICS_lock
		#define GEODE_STATICS_lock
		GEODE_AS_STATIC_FUNCTION(lock) 
	#endif

	#ifndef GEODE_STATICS_getTag
		#define GEODE_STATICS_getTag
		GEODE_AS_STATIC_FUNCTION(getTag) 
	#endif

	#ifndef GEODE_STATICS_unlock
		#define GEODE_STATICS_unlock
		GEODE_AS_STATIC_FUNCTION(unlock) 
	#endif

	#ifndef GEODE_STATICS_getMode
		#define GEODE_STATICS_getMode
		GEODE_AS_STATIC_FUNCTION(getMode) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_setMode
		#define GEODE_STATICS_setMode
		GEODE_AS_STATIC_FUNCTION(setMode) 
	#endif

	#ifndef GEODE_STATICS_readData
		#define GEODE_STATICS_readData
		GEODE_AS_STATIC_FUNCTION(readData) 
	#endif

	#ifndef GEODE_STATICS_seekData
		#define GEODE_STATICS_seekData
		GEODE_AS_STATIC_FUNCTION(seekData) 
	#endif

	#ifndef GEODE_STATICS_getFormat
		#define GEODE_STATICS_getFormat
		GEODE_AS_STATIC_FUNCTION(getFormat) 
	#endif

	#ifndef GEODE_STATICS_getLength
		#define GEODE_STATICS_getLength
		GEODE_AS_STATIC_FUNCTION(getLength) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getNumTags
		#define GEODE_CONCEPT_CHECK_getNumTags
		GEODE_CONCEPT_FUNCTION_CHECK(getNumTags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDefaults
		#define GEODE_CONCEPT_CHECK_getDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(getDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSubSound
		#define GEODE_CONCEPT_CHECK_getSubSound
		GEODE_CONCEPT_FUNCTION_CHECK(getSubSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaults
		#define GEODE_CONCEPT_CHECK_setDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSyncPoint
		#define GEODE_CONCEPT_CHECK_addSyncPoint
		GEODE_CONCEPT_FUNCTION_CHECK(addSyncPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoopCount
		#define GEODE_CONCEPT_CHECK_getLoopCount
		GEODE_CONCEPT_FUNCTION_CHECK(getLoopCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpenState
		#define GEODE_CONCEPT_CHECK_getOpenState
		GEODE_CONCEPT_FUNCTION_CHECK(getOpenState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSyncPoint
		#define GEODE_CONCEPT_CHECK_getSyncPoint
		GEODE_CONCEPT_FUNCTION_CHECK(getSyncPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLoopCount
		#define GEODE_CONCEPT_CHECK_setLoopCount
		GEODE_CONCEPT_FUNCTION_CHECK(setLoopCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoopPoints
		#define GEODE_CONCEPT_CHECK_getLoopPoints
		GEODE_CONCEPT_FUNCTION_CHECK(getLoopPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicSpeed
		#define GEODE_CONCEPT_CHECK_getMusicSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSoundGroup
		#define GEODE_CONCEPT_CHECK_getSoundGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getSoundGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLoopPoints
		#define GEODE_CONCEPT_CHECK_setLoopPoints
		GEODE_CONCEPT_FUNCTION_CHECK(setLoopPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMusicSpeed
		#define GEODE_CONCEPT_CHECK_setMusicSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(setMusicSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSoundGroup
		#define GEODE_CONCEPT_CHECK_setSoundGroup
		GEODE_CONCEPT_FUNCTION_CHECK(setSoundGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSyncPoint
		#define GEODE_CONCEPT_CHECK_deleteSyncPoint
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSyncPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumSubSounds
		#define GEODE_CONCEPT_CHECK_getNumSubSounds
		GEODE_CONCEPT_FUNCTION_CHECK(getNumSubSounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSystemObject
		#define GEODE_CONCEPT_CHECK_getSystemObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSystemObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumSyncPoints
		#define GEODE_CONCEPT_CHECK_getNumSyncPoints
		GEODE_CONCEPT_FUNCTION_CHECK(getNumSyncPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSyncPointInfo
		#define GEODE_CONCEPT_CHECK_getSyncPointInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getSyncPointInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DConeSettings
		#define GEODE_CONCEPT_CHECK_get3DConeSettings
		GEODE_CONCEPT_FUNCTION_CHECK(get3DConeSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSubSoundParent
		#define GEODE_CONCEPT_CHECK_getSubSoundParent
		GEODE_CONCEPT_FUNCTION_CHECK(getSubSoundParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DConeSettings
		#define GEODE_CONCEPT_CHECK_set3DConeSettings
		GEODE_CONCEPT_FUNCTION_CHECK(set3DConeSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DCustomRolloff
		#define GEODE_CONCEPT_CHECK_get3DCustomRolloff
		GEODE_CONCEPT_FUNCTION_CHECK(get3DCustomRolloff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DCustomRolloff
		#define GEODE_CONCEPT_CHECK_set3DCustomRolloff
		GEODE_CONCEPT_FUNCTION_CHECK(set3DCustomRolloff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DMinMaxDistance
		#define GEODE_CONCEPT_CHECK_get3DMinMaxDistance
		GEODE_CONCEPT_FUNCTION_CHECK(get3DMinMaxDistance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicNumChannels
		#define GEODE_CONCEPT_CHECK_getMusicNumChannels
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicNumChannels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DMinMaxDistance
		#define GEODE_CONCEPT_CHECK_set3DMinMaxDistance
		GEODE_CONCEPT_FUNCTION_CHECK(set3DMinMaxDistance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicChannelVolume
		#define GEODE_CONCEPT_CHECK_getMusicChannelVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicChannelVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMusicChannelVolume
		#define GEODE_CONCEPT_CHECK_setMusicChannelVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setMusicChannelVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lock
		#define GEODE_CONCEPT_CHECK_lock
		GEODE_CONCEPT_FUNCTION_CHECK(lock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTag
		#define GEODE_CONCEPT_CHECK_getTag
		GEODE_CONCEPT_FUNCTION_CHECK(getTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlock
		#define GEODE_CONCEPT_CHECK_unlock
		GEODE_CONCEPT_FUNCTION_CHECK(unlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMode
		#define GEODE_CONCEPT_CHECK_getMode
		GEODE_CONCEPT_FUNCTION_CHECK(getMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getName
		#define GEODE_CONCEPT_CHECK_getName
		GEODE_CONCEPT_FUNCTION_CHECK(getName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_release
		#define GEODE_CONCEPT_CHECK_release
		GEODE_CONCEPT_FUNCTION_CHECK(release) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMode
		#define GEODE_CONCEPT_CHECK_setMode
		GEODE_CONCEPT_FUNCTION_CHECK(setMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_readData
		#define GEODE_CONCEPT_CHECK_readData
		GEODE_CONCEPT_FUNCTION_CHECK(readData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_seekData
		#define GEODE_CONCEPT_CHECK_seekData
		GEODE_CONCEPT_FUNCTION_CHECK(seekData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFormat
		#define GEODE_CONCEPT_CHECK_getFormat
		GEODE_CONCEPT_FUNCTION_CHECK(getFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLength
		#define GEODE_CONCEPT_CHECK_getLength
		GEODE_CONCEPT_FUNCTION_CHECK(getLength) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::Sound> : ModifyBase<ModifyDerive<Der, FMOD::Sound>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::Sound>>;
		using ModifyBase<ModifyDerive<Der, FMOD::Sound>>::ModifyBase;
		using Base = FMOD::Sound;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*, int*>::func(&FMOD::Sound::getNumTags)), Thiscall, FMOD::Sound, getNumTags, int*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, int*>::func(&FMOD::Sound::getDefaults)), Thiscall, FMOD::Sound, getDefaults, float*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::Sound**>::func(&FMOD::Sound::getSubSound)), Thiscall, FMOD::Sound, getSubSound, int, FMOD::Sound**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::Sound::getUserData)), Thiscall, FMOD::Sound, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int>::func(&FMOD::Sound::setDefaults)), Thiscall, FMOD::Sound, setDefaults, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::Sound::setUserData)), Thiscall, FMOD::Sound, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int, char const*, FMOD_SYNCPOINT**>::func(&FMOD::Sound::addSyncPoint)), Thiscall, FMOD::Sound, addSyncPoint, unsigned int, unsigned int, char const*, FMOD_SYNCPOINT**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Sound::getLoopCount)), Thiscall, FMOD::Sound, getLoopCount, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_OPENSTATE*, unsigned int*, bool*, bool*>::func(&FMOD::Sound::getOpenState)), Thiscall, FMOD::Sound, getOpenState, FMOD_OPENSTATE*, unsigned int*, bool*, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD_SYNCPOINT**>::func(&FMOD::Sound::getSyncPoint)), Thiscall, FMOD::Sound, getSyncPoint, int, FMOD_SYNCPOINT**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::Sound::setLoopCount)), Thiscall, FMOD::Sound, setLoopCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int, unsigned int*, unsigned int>::func(&FMOD::Sound::getLoopPoints)), Thiscall, FMOD::Sound, getLoopPoints, unsigned int*, unsigned int, unsigned int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::Sound::getMusicSpeed)), Thiscall, FMOD::Sound, getMusicSpeed, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::SoundGroup**>::func(&FMOD::Sound::getSoundGroup)), Thiscall, FMOD::Sound, getSoundGroup, FMOD::SoundGroup**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int, unsigned int, unsigned int>::func(&FMOD::Sound::setLoopPoints)), Thiscall, FMOD::Sound, setLoopPoints, unsigned int, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::Sound::setMusicSpeed)), Thiscall, FMOD::Sound, setMusicSpeed, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::SoundGroup*>::func(&FMOD::Sound::setSoundGroup)), Thiscall, FMOD::Sound, setSoundGroup, FMOD::SoundGroup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SYNCPOINT*>::func(&FMOD::Sound::deleteSyncPoint)), Thiscall, FMOD::Sound, deleteSyncPoint, FMOD_SYNCPOINT*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Sound::getNumSubSounds)), Thiscall, FMOD::Sound, getNumSubSounds, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::System**>::func(&FMOD::Sound::getSystemObject)), Thiscall, FMOD::Sound, getSystemObject, FMOD::System**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Sound::getNumSyncPoints)), Thiscall, FMOD::Sound, getNumSyncPoints, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SYNCPOINT*, char*, int, unsigned int*, unsigned int>::func(&FMOD::Sound::getSyncPointInfo)), Thiscall, FMOD::Sound, getSyncPointInfo, FMOD_SYNCPOINT*, char*, int, unsigned int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&FMOD::Sound::get3DConeSettings)), Thiscall, FMOD::Sound, get3DConeSettings, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::Sound**>::func(&FMOD::Sound::getSubSoundParent)), Thiscall, FMOD::Sound, getSubSoundParent, FMOD::Sound**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&FMOD::Sound::set3DConeSettings)), Thiscall, FMOD::Sound, set3DConeSettings, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR**, int*>::func(&FMOD::Sound::get3DCustomRolloff)), Thiscall, FMOD::Sound, get3DCustomRolloff, FMOD_VECTOR**, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*, int>::func(&FMOD::Sound::set3DCustomRolloff)), Thiscall, FMOD::Sound, set3DCustomRolloff, FMOD_VECTOR*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*>::func(&FMOD::Sound::get3DMinMaxDistance)), Thiscall, FMOD::Sound, get3DMinMaxDistance, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Sound::getMusicNumChannels)), Thiscall, FMOD::Sound, getMusicNumChannels, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&FMOD::Sound::set3DMinMaxDistance)), Thiscall, FMOD::Sound, set3DMinMaxDistance, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*>::func(&FMOD::Sound::getMusicChannelVolume)), Thiscall, FMOD::Sound, getMusicChannelVolume, int, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&FMOD::Sound::setMusicChannelVolume)), Thiscall, FMOD::Sound, setMusicChannelVolume, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int, void**, void**, unsigned int*, unsigned int*>::func(&FMOD::Sound::lock)), Thiscall, FMOD::Sound, lock, unsigned int, unsigned int, void**, void**, unsigned int*, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int, FMOD_TAG*>::func(&FMOD::Sound::getTag)), Thiscall, FMOD::Sound, getTag, char const*, int, FMOD_TAG*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, void*, unsigned int, unsigned int>::func(&FMOD::Sound::unlock)), Thiscall, FMOD::Sound, unlock, void*, void*, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*>::func(&FMOD::Sound::getMode)), Thiscall, FMOD::Sound, getMode, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char*, int>::func(&FMOD::Sound::getName)), Thiscall, FMOD::Sound, getName, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::Sound::release)), Thiscall, FMOD::Sound, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&FMOD::Sound::setMode)), Thiscall, FMOD::Sound, setMode, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, unsigned int, unsigned int*>::func(&FMOD::Sound::readData)), Thiscall, FMOD::Sound, readData, void*, unsigned int, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&FMOD::Sound::seekData)), Thiscall, FMOD::Sound, seekData, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SOUND_TYPE*, FMOD_SOUND_FORMAT*, int*, int*>::func(&FMOD::Sound::getFormat)), Thiscall, FMOD::Sound, getFormat, FMOD_SOUND_TYPE*, FMOD_SOUND_FORMAT*, int*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int>::func(&FMOD::Sound::getLength)), Thiscall, FMOD::Sound, getLength, unsigned int*, unsigned int)
		}
	};
}
