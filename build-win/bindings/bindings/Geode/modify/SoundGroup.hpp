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

	#ifndef GEODE_STATICS_getNumSounds
		#define GEODE_STATICS_getNumSounds
		GEODE_AS_STATIC_FUNCTION(getNumSounds) 
	#endif

	#ifndef GEODE_STATICS_getMaxAudible
		#define GEODE_STATICS_getMaxAudible
		GEODE_AS_STATIC_FUNCTION(getMaxAudible) 
	#endif

	#ifndef GEODE_STATICS_getNumPlaying
		#define GEODE_STATICS_getNumPlaying
		GEODE_AS_STATIC_FUNCTION(getNumPlaying) 
	#endif

	#ifndef GEODE_STATICS_setMaxAudible
		#define GEODE_STATICS_setMaxAudible
		GEODE_AS_STATIC_FUNCTION(setMaxAudible) 
	#endif

	#ifndef GEODE_STATICS_getSystemObject
		#define GEODE_STATICS_getSystemObject
		GEODE_AS_STATIC_FUNCTION(getSystemObject) 
	#endif

	#ifndef GEODE_STATICS_getMuteFadeSpeed
		#define GEODE_STATICS_getMuteFadeSpeed
		GEODE_AS_STATIC_FUNCTION(getMuteFadeSpeed) 
	#endif

	#ifndef GEODE_STATICS_setMuteFadeSpeed
		#define GEODE_STATICS_setMuteFadeSpeed
		GEODE_AS_STATIC_FUNCTION(setMuteFadeSpeed) 
	#endif

	#ifndef GEODE_STATICS_getMaxAudibleBehavior
		#define GEODE_STATICS_getMaxAudibleBehavior
		GEODE_AS_STATIC_FUNCTION(getMaxAudibleBehavior) 
	#endif

	#ifndef GEODE_STATICS_setMaxAudibleBehavior
		#define GEODE_STATICS_setMaxAudibleBehavior
		GEODE_AS_STATIC_FUNCTION(setMaxAudibleBehavior) 
	#endif

	#ifndef GEODE_STATICS_stop
		#define GEODE_STATICS_stop
		GEODE_AS_STATIC_FUNCTION(stop) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_getSound
		#define GEODE_STATICS_getSound
		GEODE_AS_STATIC_FUNCTION(getSound) 
	#endif

	#ifndef GEODE_STATICS_getVolume
		#define GEODE_STATICS_getVolume
		GEODE_AS_STATIC_FUNCTION(getVolume) 
	#endif

	#ifndef GEODE_STATICS_setVolume
		#define GEODE_STATICS_setVolume
		GEODE_AS_STATIC_FUNCTION(setVolume) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumSounds
		#define GEODE_CONCEPT_CHECK_getNumSounds
		GEODE_CONCEPT_FUNCTION_CHECK(getNumSounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxAudible
		#define GEODE_CONCEPT_CHECK_getMaxAudible
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxAudible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumPlaying
		#define GEODE_CONCEPT_CHECK_getNumPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(getNumPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxAudible
		#define GEODE_CONCEPT_CHECK_setMaxAudible
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxAudible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSystemObject
		#define GEODE_CONCEPT_CHECK_getSystemObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSystemObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMuteFadeSpeed
		#define GEODE_CONCEPT_CHECK_getMuteFadeSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(getMuteFadeSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMuteFadeSpeed
		#define GEODE_CONCEPT_CHECK_setMuteFadeSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(setMuteFadeSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxAudibleBehavior
		#define GEODE_CONCEPT_CHECK_getMaxAudibleBehavior
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxAudibleBehavior) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxAudibleBehavior
		#define GEODE_CONCEPT_CHECK_setMaxAudibleBehavior
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxAudibleBehavior) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stop
		#define GEODE_CONCEPT_CHECK_stop
		GEODE_CONCEPT_FUNCTION_CHECK(stop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getName
		#define GEODE_CONCEPT_CHECK_getName
		GEODE_CONCEPT_FUNCTION_CHECK(getName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_release
		#define GEODE_CONCEPT_CHECK_release
		GEODE_CONCEPT_FUNCTION_CHECK(release) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSound
		#define GEODE_CONCEPT_CHECK_getSound
		GEODE_CONCEPT_FUNCTION_CHECK(getSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVolume
		#define GEODE_CONCEPT_CHECK_getVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVolume
		#define GEODE_CONCEPT_CHECK_setVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setVolume) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::SoundGroup> : ModifyBase<ModifyDerive<Der, FMOD::SoundGroup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::SoundGroup>>;
		using ModifyBase<ModifyDerive<Der, FMOD::SoundGroup>>::ModifyBase;
		using Base = FMOD::SoundGroup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::SoundGroup::getUserData)), Thiscall, FMOD::SoundGroup, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::SoundGroup::setUserData)), Thiscall, FMOD::SoundGroup, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::SoundGroup::getNumSounds)), Thiscall, FMOD::SoundGroup, getNumSounds, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::SoundGroup::getMaxAudible)), Thiscall, FMOD::SoundGroup, getMaxAudible, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::SoundGroup::getNumPlaying)), Thiscall, FMOD::SoundGroup, getNumPlaying, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::SoundGroup::setMaxAudible)), Thiscall, FMOD::SoundGroup, setMaxAudible, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::System**>::func(&FMOD::SoundGroup::getSystemObject)), Thiscall, FMOD::SoundGroup, getSystemObject, FMOD::System**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::SoundGroup::getMuteFadeSpeed)), Thiscall, FMOD::SoundGroup, getMuteFadeSpeed, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::SoundGroup::setMuteFadeSpeed)), Thiscall, FMOD::SoundGroup, setMuteFadeSpeed, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SOUNDGROUP_BEHAVIOR*>::func(&FMOD::SoundGroup::getMaxAudibleBehavior)), Thiscall, FMOD::SoundGroup, getMaxAudibleBehavior, FMOD_SOUNDGROUP_BEHAVIOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SOUNDGROUP_BEHAVIOR>::func(&FMOD::SoundGroup::setMaxAudibleBehavior)), Thiscall, FMOD::SoundGroup, setMaxAudibleBehavior, FMOD_SOUNDGROUP_BEHAVIOR)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::SoundGroup::stop)), Thiscall, FMOD::SoundGroup, stop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char*, int>::func(&FMOD::SoundGroup::getName)), Thiscall, FMOD::SoundGroup, getName, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::SoundGroup::release)), Thiscall, FMOD::SoundGroup, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::Sound**>::func(&FMOD::SoundGroup::getSound)), Thiscall, FMOD::SoundGroup, getSound, int, FMOD::Sound**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::SoundGroup::getVolume)), Thiscall, FMOD::SoundGroup, getVolume, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::SoundGroup::setVolume)), Thiscall, FMOD::SoundGroup, setVolume, float)
		}
	};
}
