#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getChannel
		#define GEODE_STATICS_getChannel
		GEODE_AS_STATIC_FUNCTION(getChannel) 
	#endif

	#ifndef GEODE_STATICS_getNumGroups
		#define GEODE_STATICS_getNumGroups
		GEODE_AS_STATIC_FUNCTION(getNumGroups) 
	#endif

	#ifndef GEODE_STATICS_getNumChannels
		#define GEODE_STATICS_getNumChannels
		GEODE_AS_STATIC_FUNCTION(getNumChannels) 
	#endif

	#ifndef GEODE_STATICS_getParentGroup
		#define GEODE_STATICS_getParentGroup
		GEODE_AS_STATIC_FUNCTION(getParentGroup) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_addGroup
		#define GEODE_STATICS_addGroup
		GEODE_AS_STATIC_FUNCTION(addGroup) 
	#endif

	#ifndef GEODE_STATICS_getGroup
		#define GEODE_STATICS_getGroup
		GEODE_AS_STATIC_FUNCTION(getGroup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getChannel
		#define GEODE_CONCEPT_CHECK_getChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumGroups
		#define GEODE_CONCEPT_CHECK_getNumGroups
		GEODE_CONCEPT_FUNCTION_CHECK(getNumGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumChannels
		#define GEODE_CONCEPT_CHECK_getNumChannels
		GEODE_CONCEPT_FUNCTION_CHECK(getNumChannels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParentGroup
		#define GEODE_CONCEPT_CHECK_getParentGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getParentGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getName
		#define GEODE_CONCEPT_CHECK_getName
		GEODE_CONCEPT_FUNCTION_CHECK(getName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_release
		#define GEODE_CONCEPT_CHECK_release
		GEODE_CONCEPT_FUNCTION_CHECK(release) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGroup
		#define GEODE_CONCEPT_CHECK_addGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroup
		#define GEODE_CONCEPT_CHECK_getGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getGroup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::ChannelGroup> : ModifyBase<ModifyDerive<Der, FMOD::ChannelGroup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::ChannelGroup>>;
		using ModifyBase<ModifyDerive<Der, FMOD::ChannelGroup>>::ModifyBase;
		using Base = FMOD::ChannelGroup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::Channel**>::func(&FMOD::ChannelGroup::getChannel)), Thiscall, FMOD::ChannelGroup, getChannel, int, FMOD::Channel**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::ChannelGroup::getNumGroups)), Thiscall, FMOD::ChannelGroup, getNumGroups, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::ChannelGroup::getNumChannels)), Thiscall, FMOD::ChannelGroup, getNumChannels, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::ChannelGroup**>::func(&FMOD::ChannelGroup::getParentGroup)), Thiscall, FMOD::ChannelGroup, getParentGroup, FMOD::ChannelGroup**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char*, int>::func(&FMOD::ChannelGroup::getName)), Thiscall, FMOD::ChannelGroup, getName, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::ChannelGroup::release)), Thiscall, FMOD::ChannelGroup, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::ChannelGroup*, bool, FMOD::DSPConnection**>::func(&FMOD::ChannelGroup::addGroup)), Thiscall, FMOD::ChannelGroup, addGroup, FMOD::ChannelGroup*, bool, FMOD::DSPConnection**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::ChannelGroup**>::func(&FMOD::ChannelGroup::getGroup)), Thiscall, FMOD::ChannelGroup, getGroup, int, FMOD::ChannelGroup**)
		}
	};
}
