#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getPosition
		#define GEODE_STATICS_getPosition
		GEODE_AS_STATIC_FUNCTION(getPosition) 
	#endif

	#ifndef GEODE_STATICS_getPriority
		#define GEODE_STATICS_getPriority
		GEODE_AS_STATIC_FUNCTION(getPriority) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setPriority
		#define GEODE_STATICS_setPriority
		GEODE_AS_STATIC_FUNCTION(setPriority) 
	#endif

	#ifndef GEODE_STATICS_getFrequency
		#define GEODE_STATICS_getFrequency
		GEODE_AS_STATIC_FUNCTION(getFrequency) 
	#endif

	#ifndef GEODE_STATICS_getLoopCount
		#define GEODE_STATICS_getLoopCount
		GEODE_AS_STATIC_FUNCTION(getLoopCount) 
	#endif

	#ifndef GEODE_STATICS_setFrequency
		#define GEODE_STATICS_setFrequency
		GEODE_AS_STATIC_FUNCTION(setFrequency) 
	#endif

	#ifndef GEODE_STATICS_setLoopCount
		#define GEODE_STATICS_setLoopCount
		GEODE_AS_STATIC_FUNCTION(setLoopCount) 
	#endif

	#ifndef GEODE_STATICS_getLoopPoints
		#define GEODE_STATICS_getLoopPoints
		GEODE_AS_STATIC_FUNCTION(getLoopPoints) 
	#endif

	#ifndef GEODE_STATICS_setLoopPoints
		#define GEODE_STATICS_setLoopPoints
		GEODE_AS_STATIC_FUNCTION(setLoopPoints) 
	#endif

	#ifndef GEODE_STATICS_getChannelGroup
		#define GEODE_STATICS_getChannelGroup
		GEODE_AS_STATIC_FUNCTION(getChannelGroup) 
	#endif

	#ifndef GEODE_STATICS_getCurrentSound
		#define GEODE_STATICS_getCurrentSound
		GEODE_AS_STATIC_FUNCTION(getCurrentSound) 
	#endif

	#ifndef GEODE_STATICS_setChannelGroup
		#define GEODE_STATICS_setChannelGroup
		GEODE_AS_STATIC_FUNCTION(setChannelGroup) 
	#endif

	#ifndef GEODE_STATICS_getIndex
		#define GEODE_STATICS_getIndex
		GEODE_AS_STATIC_FUNCTION(getIndex) 
	#endif

	#ifndef GEODE_STATICS_isVirtual
		#define GEODE_STATICS_isVirtual
		GEODE_AS_STATIC_FUNCTION(isVirtual) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getPosition
		#define GEODE_CONCEPT_CHECK_getPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPriority
		#define GEODE_CONCEPT_CHECK_getPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPriority
		#define GEODE_CONCEPT_CHECK_setPriority
		GEODE_CONCEPT_FUNCTION_CHECK(setPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFrequency
		#define GEODE_CONCEPT_CHECK_getFrequency
		GEODE_CONCEPT_FUNCTION_CHECK(getFrequency) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoopCount
		#define GEODE_CONCEPT_CHECK_getLoopCount
		GEODE_CONCEPT_FUNCTION_CHECK(getLoopCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFrequency
		#define GEODE_CONCEPT_CHECK_setFrequency
		GEODE_CONCEPT_FUNCTION_CHECK(setFrequency) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLoopCount
		#define GEODE_CONCEPT_CHECK_setLoopCount
		GEODE_CONCEPT_FUNCTION_CHECK(setLoopCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoopPoints
		#define GEODE_CONCEPT_CHECK_getLoopPoints
		GEODE_CONCEPT_FUNCTION_CHECK(getLoopPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLoopPoints
		#define GEODE_CONCEPT_CHECK_setLoopPoints
		GEODE_CONCEPT_FUNCTION_CHECK(setLoopPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChannelGroup
		#define GEODE_CONCEPT_CHECK_getChannelGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getChannelGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentSound
		#define GEODE_CONCEPT_CHECK_getCurrentSound
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChannelGroup
		#define GEODE_CONCEPT_CHECK_setChannelGroup
		GEODE_CONCEPT_FUNCTION_CHECK(setChannelGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIndex
		#define GEODE_CONCEPT_CHECK_getIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isVirtual
		#define GEODE_CONCEPT_CHECK_isVirtual
		GEODE_CONCEPT_FUNCTION_CHECK(isVirtual) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::Channel> : ModifyBase<ModifyDerive<Der, FMOD::Channel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::Channel>>;
		using ModifyBase<ModifyDerive<Der, FMOD::Channel>>::ModifyBase;
		using Base = FMOD::Channel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int>::func(&FMOD::Channel::getPosition)), Thiscall, FMOD::Channel, getPosition, unsigned int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Channel::getPriority)), Thiscall, FMOD::Channel, getPriority, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int>::func(&FMOD::Channel::setPosition)), Thiscall, FMOD::Channel, setPosition, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::Channel::setPriority)), Thiscall, FMOD::Channel, setPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::Channel::getFrequency)), Thiscall, FMOD::Channel, getFrequency, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Channel::getLoopCount)), Thiscall, FMOD::Channel, getLoopCount, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::Channel::setFrequency)), Thiscall, FMOD::Channel, setFrequency, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::Channel::setLoopCount)), Thiscall, FMOD::Channel, setLoopCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int, unsigned int*, unsigned int>::func(&FMOD::Channel::getLoopPoints)), Thiscall, FMOD::Channel, getLoopPoints, unsigned int*, unsigned int, unsigned int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int, unsigned int, unsigned int>::func(&FMOD::Channel::setLoopPoints)), Thiscall, FMOD::Channel, setLoopPoints, unsigned int, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::ChannelGroup**>::func(&FMOD::Channel::getChannelGroup)), Thiscall, FMOD::Channel, getChannelGroup, FMOD::ChannelGroup**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::Sound**>::func(&FMOD::Channel::getCurrentSound)), Thiscall, FMOD::Channel, getCurrentSound, FMOD::Sound**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::ChannelGroup*>::func(&FMOD::Channel::setChannelGroup)), Thiscall, FMOD::Channel, setChannelGroup, FMOD::ChannelGroup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Channel::getIndex)), Thiscall, FMOD::Channel, getIndex, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::Channel::isVirtual)), Thiscall, FMOD::Channel, isVirtual, bool*)
		}
	};
}
