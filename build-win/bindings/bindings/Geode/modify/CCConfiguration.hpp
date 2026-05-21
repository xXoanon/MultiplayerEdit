#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeConfiguration
		#define GEODE_STATICS_purgeConfiguration
		GEODE_AS_STATIC_FUNCTION(purgeConfiguration) 
	#endif

	#ifndef GEODE_STATICS_sharedConfiguration
		#define GEODE_STATICS_sharedConfiguration
		GEODE_AS_STATIC_FUNCTION(sharedConfiguration) 
	#endif

	#ifndef GEODE_STATICS_checkForGLExtension
		#define GEODE_STATICS_checkForGLExtension
		GEODE_AS_STATIC_FUNCTION(checkForGLExtension) 
	#endif

	#ifndef GEODE_STATICS_dumpInfo
		#define GEODE_STATICS_dumpInfo
		GEODE_AS_STATIC_FUNCTION(dumpInfo) 
	#endif

	#ifndef GEODE_STATICS_gatherGPUInfo
		#define GEODE_STATICS_gatherGPUInfo
		GEODE_AS_STATIC_FUNCTION(gatherGPUInfo) 
	#endif

	#ifndef GEODE_STATICS_getBool
		#define GEODE_STATICS_getBool
		GEODE_AS_STATIC_FUNCTION(getBool) 
	#endif

	#ifndef GEODE_STATICS_getCString
		#define GEODE_STATICS_getCString
		GEODE_AS_STATIC_FUNCTION(getCString) 
	#endif

	#ifndef GEODE_STATICS_getMaxModelviewStackDepth
		#define GEODE_STATICS_getMaxModelviewStackDepth
		GEODE_AS_STATIC_FUNCTION(getMaxModelviewStackDepth) 
	#endif

	#ifndef GEODE_STATICS_getMaxTextureSize
		#define GEODE_STATICS_getMaxTextureSize
		GEODE_AS_STATIC_FUNCTION(getMaxTextureSize) 
	#endif

	#ifndef GEODE_STATICS_getMaxTextureUnits
		#define GEODE_STATICS_getMaxTextureUnits
		GEODE_AS_STATIC_FUNCTION(getMaxTextureUnits) 
	#endif

	#ifndef GEODE_STATICS_getNumber
		#define GEODE_STATICS_getNumber
		GEODE_AS_STATIC_FUNCTION(getNumber) 
	#endif

	#ifndef GEODE_STATICS_getObject
		#define GEODE_STATICS_getObject
		GEODE_AS_STATIC_FUNCTION(getObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadConfigFile
		#define GEODE_STATICS_loadConfigFile
		GEODE_AS_STATIC_FUNCTION(loadConfigFile) 
	#endif

	#ifndef GEODE_STATICS_setObject
		#define GEODE_STATICS_setObject
		GEODE_AS_STATIC_FUNCTION(setObject) 
	#endif

	#ifndef GEODE_STATICS_supportsBGRA8888
		#define GEODE_STATICS_supportsBGRA8888
		GEODE_AS_STATIC_FUNCTION(supportsBGRA8888) 
	#endif

	#ifndef GEODE_STATICS_supportsDiscardFramebuffer
		#define GEODE_STATICS_supportsDiscardFramebuffer
		GEODE_AS_STATIC_FUNCTION(supportsDiscardFramebuffer) 
	#endif

	#ifndef GEODE_STATICS_supportsNPOT
		#define GEODE_STATICS_supportsNPOT
		GEODE_AS_STATIC_FUNCTION(supportsNPOT) 
	#endif

	#ifndef GEODE_STATICS_supportsPVRTC
		#define GEODE_STATICS_supportsPVRTC
		GEODE_AS_STATIC_FUNCTION(supportsPVRTC) 
	#endif

	#ifndef GEODE_STATICS_supportsShareableVAO
		#define GEODE_STATICS_supportsShareableVAO
		GEODE_AS_STATIC_FUNCTION(supportsShareableVAO) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_purgeConfiguration
		#define GEODE_CONCEPT_CHECK_purgeConfiguration
		GEODE_CONCEPT_FUNCTION_CHECK(purgeConfiguration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedConfiguration
		#define GEODE_CONCEPT_CHECK_sharedConfiguration
		GEODE_CONCEPT_FUNCTION_CHECK(sharedConfiguration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkForGLExtension
		#define GEODE_CONCEPT_CHECK_checkForGLExtension
		GEODE_CONCEPT_FUNCTION_CHECK(checkForGLExtension) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dumpInfo
		#define GEODE_CONCEPT_CHECK_dumpInfo
		GEODE_CONCEPT_FUNCTION_CHECK(dumpInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gatherGPUInfo
		#define GEODE_CONCEPT_CHECK_gatherGPUInfo
		GEODE_CONCEPT_FUNCTION_CHECK(gatherGPUInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBool
		#define GEODE_CONCEPT_CHECK_getBool
		GEODE_CONCEPT_FUNCTION_CHECK(getBool) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCString
		#define GEODE_CONCEPT_CHECK_getCString
		GEODE_CONCEPT_FUNCTION_CHECK(getCString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxModelviewStackDepth
		#define GEODE_CONCEPT_CHECK_getMaxModelviewStackDepth
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxModelviewStackDepth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxTextureSize
		#define GEODE_CONCEPT_CHECK_getMaxTextureSize
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxTextureSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxTextureUnits
		#define GEODE_CONCEPT_CHECK_getMaxTextureUnits
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxTextureUnits) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumber
		#define GEODE_CONCEPT_CHECK_getNumber
		GEODE_CONCEPT_FUNCTION_CHECK(getNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObject
		#define GEODE_CONCEPT_CHECK_getObject
		GEODE_CONCEPT_FUNCTION_CHECK(getObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadConfigFile
		#define GEODE_CONCEPT_CHECK_loadConfigFile
		GEODE_CONCEPT_FUNCTION_CHECK(loadConfigFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObject
		#define GEODE_CONCEPT_CHECK_setObject
		GEODE_CONCEPT_FUNCTION_CHECK(setObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_supportsBGRA8888
		#define GEODE_CONCEPT_CHECK_supportsBGRA8888
		GEODE_CONCEPT_FUNCTION_CHECK(supportsBGRA8888) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_supportsDiscardFramebuffer
		#define GEODE_CONCEPT_CHECK_supportsDiscardFramebuffer
		GEODE_CONCEPT_FUNCTION_CHECK(supportsDiscardFramebuffer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_supportsNPOT
		#define GEODE_CONCEPT_CHECK_supportsNPOT
		GEODE_CONCEPT_FUNCTION_CHECK(supportsNPOT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_supportsPVRTC
		#define GEODE_CONCEPT_CHECK_supportsPVRTC
		GEODE_CONCEPT_FUNCTION_CHECK(supportsPVRTC) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_supportsShareableVAO
		#define GEODE_CONCEPT_CHECK_supportsShareableVAO
		GEODE_CONCEPT_FUNCTION_CHECK(supportsShareableVAO) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCConfiguration> : ModifyBase<ModifyDerive<Der, cocos2d::CCConfiguration>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCConfiguration>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCConfiguration>>::ModifyBase;
		using Base = cocos2d::CCConfiguration;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCConfiguration@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCConfiguration, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCConfiguration@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCConfiguration)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::purgeConfiguration)), Default, cocos2d::CCConfiguration, purgeConfiguration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::sharedConfiguration)), Default, cocos2d::CCConfiguration, sharedConfiguration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string const&>::func(&cocos2d::CCConfiguration::checkForGLExtension)), Thiscall, cocos2d::CCConfiguration, checkForGLExtension, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::dumpInfo)), Thiscall, cocos2d::CCConfiguration, dumpInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::gatherGPUInfo)), Thiscall, cocos2d::CCConfiguration, gatherGPUInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCConfiguration::getBool)), Thiscall, cocos2d::CCConfiguration, getBool, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCConfiguration::getCString)), Thiscall, cocos2d::CCConfiguration, getCString, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::getMaxModelviewStackDepth)), Thiscall, cocos2d::CCConfiguration, getMaxModelviewStackDepth, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::getMaxTextureSize)), Thiscall, cocos2d::CCConfiguration, getMaxTextureSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::getMaxTextureUnits)), Thiscall, cocos2d::CCConfiguration, getMaxTextureUnits, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, double>::func(&cocos2d::CCConfiguration::getNumber)), Thiscall, cocos2d::CCConfiguration, getNumber, char const*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCConfiguration::getObject)), Thiscall, cocos2d::CCConfiguration, getObject, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::init)), Thiscall, cocos2d::CCConfiguration, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCConfiguration::loadConfigFile)), Thiscall, cocos2d::CCConfiguration, loadConfigFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCObject*>::func(&cocos2d::CCConfiguration::setObject)), Thiscall, cocos2d::CCConfiguration, setObject, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::supportsBGRA8888)), Thiscall, cocos2d::CCConfiguration, supportsBGRA8888, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::supportsDiscardFramebuffer)), Thiscall, cocos2d::CCConfiguration, supportsDiscardFramebuffer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::supportsNPOT)), Thiscall, cocos2d::CCConfiguration, supportsNPOT, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::supportsPVRTC)), Thiscall, cocos2d::CCConfiguration, supportsPVRTC, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCConfiguration::supportsShareableVAO)), Thiscall, cocos2d::CCConfiguration, supportsShareableVAO, )
		}
	};
}
