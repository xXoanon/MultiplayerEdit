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

	#ifndef GEODE_STATICS_getVersion
		#define GEODE_STATICS_getVersion
		GEODE_AS_STATIC_FUNCTION(getVersion) 
	#endif

	#ifndef GEODE_STATICS_loadPlugin
		#define GEODE_STATICS_loadPlugin
		GEODE_AS_STATIC_FUNCTION(loadPlugin) 
	#endif

	#ifndef GEODE_STATICS_recordStop
		#define GEODE_STATICS_recordStop
		GEODE_AS_STATIC_FUNCTION(recordStop) 
	#endif

	#ifndef GEODE_STATICS_createSound
		#define GEODE_STATICS_createSound
		GEODE_AS_STATIC_FUNCTION(createSound) 
	#endif

	#ifndef GEODE_STATICS_getCPUUsage
		#define GEODE_STATICS_getCPUUsage
		GEODE_AS_STATIC_FUNCTION(getCPUUsage) 
	#endif

	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_isRecording
		#define GEODE_STATICS_isRecording
		GEODE_AS_STATIC_FUNCTION(isRecording) 
	#endif

	#ifndef GEODE_STATICS_mixerResume
		#define GEODE_STATICS_mixerResume
		GEODE_AS_STATIC_FUNCTION(mixerResume) 
	#endif

	#ifndef GEODE_STATICS_recordStart
		#define GEODE_STATICS_recordStart
		GEODE_AS_STATIC_FUNCTION(recordStart) 
	#endif

	#ifndef GEODE_STATICS_registerDSP
		#define GEODE_STATICS_registerDSP
		GEODE_AS_STATIC_FUNCTION(registerDSP) 
	#endif

	#ifndef GEODE_STATICS_setCallback
		#define GEODE_STATICS_setCallback
		GEODE_AS_STATIC_FUNCTION(setCallback) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_createStream
		#define GEODE_STATICS_createStream
		GEODE_AS_STATIC_FUNCTION(createStream) 
	#endif

	#ifndef GEODE_STATICS_getFileUsage
		#define GEODE_STATICS_getFileUsage
		GEODE_AS_STATIC_FUNCTION(getFileUsage) 
	#endif

	#ifndef GEODE_STATICS_loadGeometry
		#define GEODE_STATICS_loadGeometry
		GEODE_AS_STATIC_FUNCTION(loadGeometry) 
	#endif

	#ifndef GEODE_STATICS_mixerSuspend
		#define GEODE_STATICS_mixerSuspend
		GEODE_AS_STATIC_FUNCTION(mixerSuspend) 
	#endif

	#ifndef GEODE_STATICS_unloadPlugin
		#define GEODE_STATICS_unloadPlugin
		GEODE_AS_STATIC_FUNCTION(unloadPlugin) 
	#endif

	#ifndef GEODE_STATICS_get3DSettings
		#define GEODE_STATICS_get3DSettings
		GEODE_AS_STATIC_FUNCTION(get3DSettings) 
	#endif

	#ifndef GEODE_STATICS_getDriverInfo
		#define GEODE_STATICS_getDriverInfo
		GEODE_AS_STATIC_FUNCTION(getDriverInfo) 
	#endif

	#ifndef GEODE_STATICS_getNumDrivers
		#define GEODE_STATICS_getNumDrivers
		GEODE_AS_STATIC_FUNCTION(getNumDrivers) 
	#endif

	#ifndef GEODE_STATICS_getNumPlugins
		#define GEODE_STATICS_getNumPlugins
		GEODE_AS_STATIC_FUNCTION(getNumPlugins) 
	#endif

	#ifndef GEODE_STATICS_getPluginInfo
		#define GEODE_STATICS_getPluginInfo
		GEODE_AS_STATIC_FUNCTION(getPluginInfo) 
	#endif

	#ifndef GEODE_STATICS_registerCodec
		#define GEODE_STATICS_registerCodec
		GEODE_AS_STATIC_FUNCTION(registerCodec) 
	#endif

	#ifndef GEODE_STATICS_set3DSettings
		#define GEODE_STATICS_set3DSettings
		GEODE_AS_STATIC_FUNCTION(set3DSettings) 
	#endif

	#ifndef GEODE_STATICS_setFileSystem
		#define GEODE_STATICS_setFileSystem
		GEODE_AS_STATIC_FUNCTION(setFileSystem) 
	#endif

	#ifndef GEODE_STATICS_setPluginPath
		#define GEODE_STATICS_setPluginPath
		GEODE_AS_STATIC_FUNCTION(setPluginPath) 
	#endif

	#ifndef GEODE_STATICS_createGeometry
		#define GEODE_STATICS_createGeometry
		GEODE_AS_STATIC_FUNCTION(createGeometry) 
	#endif

	#ifndef GEODE_STATICS_createReverb3D
		#define GEODE_STATICS_createReverb3D
		GEODE_AS_STATIC_FUNCTION(createReverb3D) 
	#endif

	#ifndef GEODE_STATICS_registerOutput
		#define GEODE_STATICS_registerOutput
		GEODE_AS_STATIC_FUNCTION(registerOutput) 
	#endif

	#ifndef GEODE_STATICS_createDSPByType
		#define GEODE_STATICS_createDSPByType
		GEODE_AS_STATIC_FUNCTION(createDSPByType) 
	#endif

	#ifndef GEODE_STATICS_getNestedPlugin
		#define GEODE_STATICS_getNestedPlugin
		GEODE_AS_STATIC_FUNCTION(getNestedPlugin) 
	#endif

	#ifndef GEODE_STATICS_getNetworkProxy
		#define GEODE_STATICS_getNetworkProxy
		GEODE_AS_STATIC_FUNCTION(getNetworkProxy) 
	#endif

	#ifndef GEODE_STATICS_getOutputHandle
		#define GEODE_STATICS_getOutputHandle
		GEODE_AS_STATIC_FUNCTION(getOutputHandle) 
	#endif

	#ifndef GEODE_STATICS_getPluginHandle
		#define GEODE_STATICS_getPluginHandle
		GEODE_AS_STATIC_FUNCTION(getPluginHandle) 
	#endif

	#ifndef GEODE_STATICS_setNetworkProxy
		#define GEODE_STATICS_setNetworkProxy
		GEODE_AS_STATIC_FUNCTION(setNetworkProxy) 
	#endif

	#ifndef GEODE_STATICS_attachFileSystem
		#define GEODE_STATICS_attachFileSystem
		GEODE_AS_STATIC_FUNCTION(attachFileSystem) 
	#endif

	#ifndef GEODE_STATICS_createSoundGroup
		#define GEODE_STATICS_createSoundGroup
		GEODE_AS_STATIC_FUNCTION(createSoundGroup) 
	#endif

	#ifndef GEODE_STATICS_getDSPBufferSize
		#define GEODE_STATICS_getDSPBufferSize
		GEODE_AS_STATIC_FUNCTION(getDSPBufferSize) 
	#endif

	#ifndef GEODE_STATICS_getDSPInfoByType
		#define GEODE_STATICS_getDSPInfoByType
		GEODE_AS_STATIC_FUNCTION(getDSPInfoByType) 
	#endif

	#ifndef GEODE_STATICS_setDSPBufferSize
		#define GEODE_STATICS_setDSPBufferSize
		GEODE_AS_STATIC_FUNCTION(setDSPBufferSize) 
	#endif

	#ifndef GEODE_STATICS_createDSPByPlugin
		#define GEODE_STATICS_createDSPByPlugin
		GEODE_AS_STATIC_FUNCTION(createDSPByPlugin) 
	#endif

	#ifndef GEODE_STATICS_get3DNumListeners
		#define GEODE_STATICS_get3DNumListeners
		GEODE_AS_STATIC_FUNCTION(get3DNumListeners) 
	#endif

	#ifndef GEODE_STATICS_getNetworkTimeout
		#define GEODE_STATICS_getNetworkTimeout
		GEODE_AS_STATIC_FUNCTION(getNetworkTimeout) 
	#endif

	#ifndef GEODE_STATICS_getOutputByPlugin
		#define GEODE_STATICS_getOutputByPlugin
		GEODE_AS_STATIC_FUNCTION(getOutputByPlugin) 
	#endif

	#ifndef GEODE_STATICS_getRecordPosition
		#define GEODE_STATICS_getRecordPosition
		GEODE_AS_STATIC_FUNCTION(getRecordPosition) 
	#endif

	#ifndef GEODE_STATICS_getSoftwareFormat
		#define GEODE_STATICS_getSoftwareFormat
		GEODE_AS_STATIC_FUNCTION(getSoftwareFormat) 
	#endif

	#ifndef GEODE_STATICS_set3DNumListeners
		#define GEODE_STATICS_set3DNumListeners
		GEODE_AS_STATIC_FUNCTION(set3DNumListeners) 
	#endif

	#ifndef GEODE_STATICS_setNetworkTimeout
		#define GEODE_STATICS_setNetworkTimeout
		GEODE_AS_STATIC_FUNCTION(setNetworkTimeout) 
	#endif

	#ifndef GEODE_STATICS_setOutputByPlugin
		#define GEODE_STATICS_setOutputByPlugin
		GEODE_AS_STATIC_FUNCTION(setOutputByPlugin) 
	#endif

	#ifndef GEODE_STATICS_setSoftwareFormat
		#define GEODE_STATICS_setSoftwareFormat
		GEODE_AS_STATIC_FUNCTION(setSoftwareFormat) 
	#endif

	#ifndef GEODE_STATICS_createChannelGroup
		#define GEODE_STATICS_createChannelGroup
		GEODE_AS_STATIC_FUNCTION(createChannelGroup) 
	#endif

	#ifndef GEODE_STATICS_getChannelsPlaying
		#define GEODE_STATICS_getChannelsPlaying
		GEODE_AS_STATIC_FUNCTION(getChannelsPlaying) 
	#endif

	#ifndef GEODE_STATICS_getDSPInfoByPlugin
		#define GEODE_STATICS_getDSPInfoByPlugin
		GEODE_AS_STATIC_FUNCTION(getDSPInfoByPlugin) 
	#endif

	#ifndef GEODE_STATICS_getSpeakerPosition
		#define GEODE_STATICS_getSpeakerPosition
		GEODE_AS_STATIC_FUNCTION(getSpeakerPosition) 
	#endif

	#ifndef GEODE_STATICS_setSpeakerPosition
		#define GEODE_STATICS_setSpeakerPosition
		GEODE_AS_STATIC_FUNCTION(setSpeakerPosition) 
	#endif

	#ifndef GEODE_STATICS_getAdvancedSettings
		#define GEODE_STATICS_getAdvancedSettings
		GEODE_AS_STATIC_FUNCTION(getAdvancedSettings) 
	#endif

	#ifndef GEODE_STATICS_getDefaultMixMatrix
		#define GEODE_STATICS_getDefaultMixMatrix
		GEODE_AS_STATIC_FUNCTION(getDefaultMixMatrix) 
	#endif

	#ifndef GEODE_STATICS_getGeometrySettings
		#define GEODE_STATICS_getGeometrySettings
		GEODE_AS_STATIC_FUNCTION(getGeometrySettings) 
	#endif

	#ifndef GEODE_STATICS_getMasterSoundGroup
		#define GEODE_STATICS_getMasterSoundGroup
		GEODE_AS_STATIC_FUNCTION(getMasterSoundGroup) 
	#endif

	#ifndef GEODE_STATICS_getNumNestedPlugins
		#define GEODE_STATICS_getNumNestedPlugins
		GEODE_AS_STATIC_FUNCTION(getNumNestedPlugins) 
	#endif

	#ifndef GEODE_STATICS_getRecordDriverInfo
		#define GEODE_STATICS_getRecordDriverInfo
		GEODE_AS_STATIC_FUNCTION(getRecordDriverInfo) 
	#endif

	#ifndef GEODE_STATICS_getRecordNumDrivers
		#define GEODE_STATICS_getRecordNumDrivers
		GEODE_AS_STATIC_FUNCTION(getRecordNumDrivers) 
	#endif

	#ifndef GEODE_STATICS_getReverbProperties
		#define GEODE_STATICS_getReverbProperties
		GEODE_AS_STATIC_FUNCTION(getReverbProperties) 
	#endif

	#ifndef GEODE_STATICS_getSoftwareChannels
		#define GEODE_STATICS_getSoftwareChannels
		GEODE_AS_STATIC_FUNCTION(getSoftwareChannels) 
	#endif

	#ifndef GEODE_STATICS_getStreamBufferSize
		#define GEODE_STATICS_getStreamBufferSize
		GEODE_AS_STATIC_FUNCTION(getStreamBufferSize) 
	#endif

	#ifndef GEODE_STATICS_setAdvancedSettings
		#define GEODE_STATICS_setAdvancedSettings
		GEODE_AS_STATIC_FUNCTION(setAdvancedSettings) 
	#endif

	#ifndef GEODE_STATICS_setGeometrySettings
		#define GEODE_STATICS_setGeometrySettings
		GEODE_AS_STATIC_FUNCTION(setGeometrySettings) 
	#endif

	#ifndef GEODE_STATICS_setReverbProperties
		#define GEODE_STATICS_setReverbProperties
		GEODE_AS_STATIC_FUNCTION(setReverbProperties) 
	#endif

	#ifndef GEODE_STATICS_setSoftwareChannels
		#define GEODE_STATICS_setSoftwareChannels
		GEODE_AS_STATIC_FUNCTION(setSoftwareChannels) 
	#endif

	#ifndef GEODE_STATICS_setStreamBufferSize
		#define GEODE_STATICS_setStreamBufferSize
		GEODE_AS_STATIC_FUNCTION(setStreamBufferSize) 
	#endif

	#ifndef GEODE_STATICS_getGeometryOcclusion
		#define GEODE_STATICS_getGeometryOcclusion
		GEODE_AS_STATIC_FUNCTION(getGeometryOcclusion) 
	#endif

	#ifndef GEODE_STATICS_set3DRolloffCallback
		#define GEODE_STATICS_set3DRolloffCallback
		GEODE_AS_STATIC_FUNCTION(set3DRolloffCallback) 
	#endif

	#ifndef GEODE_STATICS_getMasterChannelGroup
		#define GEODE_STATICS_getMasterChannelGroup
		GEODE_AS_STATIC_FUNCTION(getMasterChannelGroup) 
	#endif

	#ifndef GEODE_STATICS_getSpeakerModeChannels
		#define GEODE_STATICS_getSpeakerModeChannels
		GEODE_AS_STATIC_FUNCTION(getSpeakerModeChannels) 
	#endif

	#ifndef GEODE_STATICS_get3DListenerAttributes
		#define GEODE_STATICS_get3DListenerAttributes
		GEODE_AS_STATIC_FUNCTION(get3DListenerAttributes) 
	#endif

	#ifndef GEODE_STATICS_set3DListenerAttributes
		#define GEODE_STATICS_set3DListenerAttributes
		GEODE_AS_STATIC_FUNCTION(set3DListenerAttributes) 
	#endif

	#ifndef GEODE_STATICS_attachChannelGroupToPort
		#define GEODE_STATICS_attachChannelGroupToPort
		GEODE_AS_STATIC_FUNCTION(attachChannelGroupToPort) 
	#endif

	#ifndef GEODE_STATICS_detachChannelGroupFromPort
		#define GEODE_STATICS_detachChannelGroupFromPort
		GEODE_AS_STATIC_FUNCTION(detachChannelGroupFromPort) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_close
		#define GEODE_STATICS_close
		GEODE_AS_STATIC_FUNCTION(close) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_lockDSP
		#define GEODE_STATICS_lockDSP
		GEODE_AS_STATIC_FUNCTION(lockDSP) 
	#endif

	#ifndef GEODE_STATICS_playDSP
		#define GEODE_STATICS_playDSP
		GEODE_AS_STATIC_FUNCTION(playDSP) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_createDSP
		#define GEODE_STATICS_createDSP
		GEODE_AS_STATIC_FUNCTION(createDSP) 
	#endif

	#ifndef GEODE_STATICS_getDriver
		#define GEODE_STATICS_getDriver
		GEODE_AS_STATIC_FUNCTION(getDriver) 
	#endif

	#ifndef GEODE_STATICS_getOutput
		#define GEODE_STATICS_getOutput
		GEODE_AS_STATIC_FUNCTION(getOutput) 
	#endif

	#ifndef GEODE_STATICS_playSound
		#define GEODE_STATICS_playSound
		GEODE_AS_STATIC_FUNCTION(playSound) 
	#endif

	#ifndef GEODE_STATICS_setDriver
		#define GEODE_STATICS_setDriver
		GEODE_AS_STATIC_FUNCTION(setDriver) 
	#endif

	#ifndef GEODE_STATICS_setOutput
		#define GEODE_STATICS_setOutput
		GEODE_AS_STATIC_FUNCTION(setOutput) 
	#endif

	#ifndef GEODE_STATICS_unlockDSP
		#define GEODE_STATICS_unlockDSP
		GEODE_AS_STATIC_FUNCTION(unlockDSP) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getChannel
		#define GEODE_CONCEPT_CHECK_getChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVersion
		#define GEODE_CONCEPT_CHECK_getVersion
		GEODE_CONCEPT_FUNCTION_CHECK(getVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPlugin
		#define GEODE_CONCEPT_CHECK_loadPlugin
		GEODE_CONCEPT_FUNCTION_CHECK(loadPlugin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordStop
		#define GEODE_CONCEPT_CHECK_recordStop
		GEODE_CONCEPT_FUNCTION_CHECK(recordStop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSound
		#define GEODE_CONCEPT_CHECK_createSound
		GEODE_CONCEPT_FUNCTION_CHECK(createSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCPUUsage
		#define GEODE_CONCEPT_CHECK_getCPUUsage
		GEODE_CONCEPT_FUNCTION_CHECK(getCPUUsage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRecording
		#define GEODE_CONCEPT_CHECK_isRecording
		GEODE_CONCEPT_FUNCTION_CHECK(isRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mixerResume
		#define GEODE_CONCEPT_CHECK_mixerResume
		GEODE_CONCEPT_FUNCTION_CHECK(mixerResume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordStart
		#define GEODE_CONCEPT_CHECK_recordStart
		GEODE_CONCEPT_FUNCTION_CHECK(recordStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerDSP
		#define GEODE_CONCEPT_CHECK_registerDSP
		GEODE_CONCEPT_FUNCTION_CHECK(registerDSP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCallback
		#define GEODE_CONCEPT_CHECK_setCallback
		GEODE_CONCEPT_FUNCTION_CHECK(setCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStream
		#define GEODE_CONCEPT_CHECK_createStream
		GEODE_CONCEPT_FUNCTION_CHECK(createStream) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFileUsage
		#define GEODE_CONCEPT_CHECK_getFileUsage
		GEODE_CONCEPT_FUNCTION_CHECK(getFileUsage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGeometry
		#define GEODE_CONCEPT_CHECK_loadGeometry
		GEODE_CONCEPT_FUNCTION_CHECK(loadGeometry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mixerSuspend
		#define GEODE_CONCEPT_CHECK_mixerSuspend
		GEODE_CONCEPT_FUNCTION_CHECK(mixerSuspend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadPlugin
		#define GEODE_CONCEPT_CHECK_unloadPlugin
		GEODE_CONCEPT_FUNCTION_CHECK(unloadPlugin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DSettings
		#define GEODE_CONCEPT_CHECK_get3DSettings
		GEODE_CONCEPT_FUNCTION_CHECK(get3DSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDriverInfo
		#define GEODE_CONCEPT_CHECK_getDriverInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getDriverInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumDrivers
		#define GEODE_CONCEPT_CHECK_getNumDrivers
		GEODE_CONCEPT_FUNCTION_CHECK(getNumDrivers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumPlugins
		#define GEODE_CONCEPT_CHECK_getNumPlugins
		GEODE_CONCEPT_FUNCTION_CHECK(getNumPlugins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPluginInfo
		#define GEODE_CONCEPT_CHECK_getPluginInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getPluginInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerCodec
		#define GEODE_CONCEPT_CHECK_registerCodec
		GEODE_CONCEPT_FUNCTION_CHECK(registerCodec) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DSettings
		#define GEODE_CONCEPT_CHECK_set3DSettings
		GEODE_CONCEPT_FUNCTION_CHECK(set3DSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFileSystem
		#define GEODE_CONCEPT_CHECK_setFileSystem
		GEODE_CONCEPT_FUNCTION_CHECK(setFileSystem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPluginPath
		#define GEODE_CONCEPT_CHECK_setPluginPath
		GEODE_CONCEPT_FUNCTION_CHECK(setPluginPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGeometry
		#define GEODE_CONCEPT_CHECK_createGeometry
		GEODE_CONCEPT_FUNCTION_CHECK(createGeometry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createReverb3D
		#define GEODE_CONCEPT_CHECK_createReverb3D
		GEODE_CONCEPT_FUNCTION_CHECK(createReverb3D) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerOutput
		#define GEODE_CONCEPT_CHECK_registerOutput
		GEODE_CONCEPT_FUNCTION_CHECK(registerOutput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDSPByType
		#define GEODE_CONCEPT_CHECK_createDSPByType
		GEODE_CONCEPT_FUNCTION_CHECK(createDSPByType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNestedPlugin
		#define GEODE_CONCEPT_CHECK_getNestedPlugin
		GEODE_CONCEPT_FUNCTION_CHECK(getNestedPlugin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNetworkProxy
		#define GEODE_CONCEPT_CHECK_getNetworkProxy
		GEODE_CONCEPT_FUNCTION_CHECK(getNetworkProxy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOutputHandle
		#define GEODE_CONCEPT_CHECK_getOutputHandle
		GEODE_CONCEPT_FUNCTION_CHECK(getOutputHandle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPluginHandle
		#define GEODE_CONCEPT_CHECK_getPluginHandle
		GEODE_CONCEPT_FUNCTION_CHECK(getPluginHandle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNetworkProxy
		#define GEODE_CONCEPT_CHECK_setNetworkProxy
		GEODE_CONCEPT_FUNCTION_CHECK(setNetworkProxy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_attachFileSystem
		#define GEODE_CONCEPT_CHECK_attachFileSystem
		GEODE_CONCEPT_FUNCTION_CHECK(attachFileSystem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSoundGroup
		#define GEODE_CONCEPT_CHECK_createSoundGroup
		GEODE_CONCEPT_FUNCTION_CHECK(createSoundGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDSPBufferSize
		#define GEODE_CONCEPT_CHECK_getDSPBufferSize
		GEODE_CONCEPT_FUNCTION_CHECK(getDSPBufferSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDSPInfoByType
		#define GEODE_CONCEPT_CHECK_getDSPInfoByType
		GEODE_CONCEPT_FUNCTION_CHECK(getDSPInfoByType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDSPBufferSize
		#define GEODE_CONCEPT_CHECK_setDSPBufferSize
		GEODE_CONCEPT_FUNCTION_CHECK(setDSPBufferSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDSPByPlugin
		#define GEODE_CONCEPT_CHECK_createDSPByPlugin
		GEODE_CONCEPT_FUNCTION_CHECK(createDSPByPlugin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DNumListeners
		#define GEODE_CONCEPT_CHECK_get3DNumListeners
		GEODE_CONCEPT_FUNCTION_CHECK(get3DNumListeners) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNetworkTimeout
		#define GEODE_CONCEPT_CHECK_getNetworkTimeout
		GEODE_CONCEPT_FUNCTION_CHECK(getNetworkTimeout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOutputByPlugin
		#define GEODE_CONCEPT_CHECK_getOutputByPlugin
		GEODE_CONCEPT_FUNCTION_CHECK(getOutputByPlugin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordPosition
		#define GEODE_CONCEPT_CHECK_getRecordPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSoftwareFormat
		#define GEODE_CONCEPT_CHECK_getSoftwareFormat
		GEODE_CONCEPT_FUNCTION_CHECK(getSoftwareFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DNumListeners
		#define GEODE_CONCEPT_CHECK_set3DNumListeners
		GEODE_CONCEPT_FUNCTION_CHECK(set3DNumListeners) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNetworkTimeout
		#define GEODE_CONCEPT_CHECK_setNetworkTimeout
		GEODE_CONCEPT_FUNCTION_CHECK(setNetworkTimeout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOutputByPlugin
		#define GEODE_CONCEPT_CHECK_setOutputByPlugin
		GEODE_CONCEPT_FUNCTION_CHECK(setOutputByPlugin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSoftwareFormat
		#define GEODE_CONCEPT_CHECK_setSoftwareFormat
		GEODE_CONCEPT_FUNCTION_CHECK(setSoftwareFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createChannelGroup
		#define GEODE_CONCEPT_CHECK_createChannelGroup
		GEODE_CONCEPT_FUNCTION_CHECK(createChannelGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChannelsPlaying
		#define GEODE_CONCEPT_CHECK_getChannelsPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(getChannelsPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDSPInfoByPlugin
		#define GEODE_CONCEPT_CHECK_getDSPInfoByPlugin
		GEODE_CONCEPT_FUNCTION_CHECK(getDSPInfoByPlugin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpeakerPosition
		#define GEODE_CONCEPT_CHECK_getSpeakerPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getSpeakerPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpeakerPosition
		#define GEODE_CONCEPT_CHECK_setSpeakerPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setSpeakerPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAdvancedSettings
		#define GEODE_CONCEPT_CHECK_getAdvancedSettings
		GEODE_CONCEPT_FUNCTION_CHECK(getAdvancedSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDefaultMixMatrix
		#define GEODE_CONCEPT_CHECK_getDefaultMixMatrix
		GEODE_CONCEPT_FUNCTION_CHECK(getDefaultMixMatrix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGeometrySettings
		#define GEODE_CONCEPT_CHECK_getGeometrySettings
		GEODE_CONCEPT_FUNCTION_CHECK(getGeometrySettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMasterSoundGroup
		#define GEODE_CONCEPT_CHECK_getMasterSoundGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getMasterSoundGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumNestedPlugins
		#define GEODE_CONCEPT_CHECK_getNumNestedPlugins
		GEODE_CONCEPT_FUNCTION_CHECK(getNumNestedPlugins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordDriverInfo
		#define GEODE_CONCEPT_CHECK_getRecordDriverInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordDriverInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordNumDrivers
		#define GEODE_CONCEPT_CHECK_getRecordNumDrivers
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordNumDrivers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReverbProperties
		#define GEODE_CONCEPT_CHECK_getReverbProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getReverbProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSoftwareChannels
		#define GEODE_CONCEPT_CHECK_getSoftwareChannels
		GEODE_CONCEPT_FUNCTION_CHECK(getSoftwareChannels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStreamBufferSize
		#define GEODE_CONCEPT_CHECK_getStreamBufferSize
		GEODE_CONCEPT_FUNCTION_CHECK(getStreamBufferSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAdvancedSettings
		#define GEODE_CONCEPT_CHECK_setAdvancedSettings
		GEODE_CONCEPT_FUNCTION_CHECK(setAdvancedSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGeometrySettings
		#define GEODE_CONCEPT_CHECK_setGeometrySettings
		GEODE_CONCEPT_FUNCTION_CHECK(setGeometrySettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReverbProperties
		#define GEODE_CONCEPT_CHECK_setReverbProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setReverbProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSoftwareChannels
		#define GEODE_CONCEPT_CHECK_setSoftwareChannels
		GEODE_CONCEPT_FUNCTION_CHECK(setSoftwareChannels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStreamBufferSize
		#define GEODE_CONCEPT_CHECK_setStreamBufferSize
		GEODE_CONCEPT_FUNCTION_CHECK(setStreamBufferSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGeometryOcclusion
		#define GEODE_CONCEPT_CHECK_getGeometryOcclusion
		GEODE_CONCEPT_FUNCTION_CHECK(getGeometryOcclusion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DRolloffCallback
		#define GEODE_CONCEPT_CHECK_set3DRolloffCallback
		GEODE_CONCEPT_FUNCTION_CHECK(set3DRolloffCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMasterChannelGroup
		#define GEODE_CONCEPT_CHECK_getMasterChannelGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getMasterChannelGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpeakerModeChannels
		#define GEODE_CONCEPT_CHECK_getSpeakerModeChannels
		GEODE_CONCEPT_FUNCTION_CHECK(getSpeakerModeChannels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get3DListenerAttributes
		#define GEODE_CONCEPT_CHECK_get3DListenerAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(get3DListenerAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set3DListenerAttributes
		#define GEODE_CONCEPT_CHECK_set3DListenerAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(set3DListenerAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_attachChannelGroupToPort
		#define GEODE_CONCEPT_CHECK_attachChannelGroupToPort
		GEODE_CONCEPT_FUNCTION_CHECK(attachChannelGroupToPort) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_detachChannelGroupFromPort
		#define GEODE_CONCEPT_CHECK_detachChannelGroupFromPort
		GEODE_CONCEPT_FUNCTION_CHECK(detachChannelGroupFromPort) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_close
		#define GEODE_CONCEPT_CHECK_close
		GEODE_CONCEPT_FUNCTION_CHECK(close) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockDSP
		#define GEODE_CONCEPT_CHECK_lockDSP
		GEODE_CONCEPT_FUNCTION_CHECK(lockDSP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playDSP
		#define GEODE_CONCEPT_CHECK_playDSP
		GEODE_CONCEPT_FUNCTION_CHECK(playDSP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_release
		#define GEODE_CONCEPT_CHECK_release
		GEODE_CONCEPT_FUNCTION_CHECK(release) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDSP
		#define GEODE_CONCEPT_CHECK_createDSP
		GEODE_CONCEPT_FUNCTION_CHECK(createDSP) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDriver
		#define GEODE_CONCEPT_CHECK_getDriver
		GEODE_CONCEPT_FUNCTION_CHECK(getDriver) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOutput
		#define GEODE_CONCEPT_CHECK_getOutput
		GEODE_CONCEPT_FUNCTION_CHECK(getOutput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSound
		#define GEODE_CONCEPT_CHECK_playSound
		GEODE_CONCEPT_FUNCTION_CHECK(playSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDriver
		#define GEODE_CONCEPT_CHECK_setDriver
		GEODE_CONCEPT_FUNCTION_CHECK(setDriver) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOutput
		#define GEODE_CONCEPT_CHECK_setOutput
		GEODE_CONCEPT_FUNCTION_CHECK(setOutput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockDSP
		#define GEODE_CONCEPT_CHECK_unlockDSP
		GEODE_CONCEPT_FUNCTION_CHECK(unlockDSP) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::System> : ModifyBase<ModifyDerive<Der, FMOD::System>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::System>>;
		using ModifyBase<ModifyDerive<Der, FMOD::System>>::ModifyBase;
		using Base = FMOD::System;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::Channel**>::func(&FMOD::System::getChannel)), Thiscall, FMOD::System, getChannel, int, FMOD::Channel**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*>::func(&FMOD::System::getVersion)), Thiscall, FMOD::System, getVersion, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int*, unsigned int>::func(&FMOD::System::loadPlugin)), Thiscall, FMOD::System, loadPlugin, char const*, unsigned int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::System::recordStop)), Thiscall, FMOD::System, recordStop, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int, FMOD_CREATESOUNDEXINFO*, FMOD::Sound**>::func(&FMOD::System::createSound)), Thiscall, FMOD::System, createSound, char const*, unsigned int, FMOD_CREATESOUNDEXINFO*, FMOD::Sound**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_CPU_USAGE*>::func(&FMOD::System::getCPUUsage)), Thiscall, FMOD::System, getCPUUsage, FMOD_CPU_USAGE*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::System::getUserData)), Thiscall, FMOD::System, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool*>::func(&FMOD::System::isRecording)), Thiscall, FMOD::System, isRecording, int, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::System::mixerResume)), Thiscall, FMOD::System, mixerResume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD::Sound*, bool>::func(&FMOD::System::recordStart)), Thiscall, FMOD::System, recordStart, int, FMOD::Sound*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSP_DESCRIPTION const*, unsigned int*>::func(&FMOD::System::registerDSP)), Thiscall, FMOD::System, registerDSP, FMOD_DSP_DESCRIPTION const*, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SYSTEM_CALLBACK, unsigned int>::func(&FMOD::System::setCallback)), Thiscall, FMOD::System, setCallback, FMOD_SYSTEM_CALLBACK, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::System::setUserData)), Thiscall, FMOD::System, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int, FMOD_CREATESOUNDEXINFO*, FMOD::Sound**>::func(&FMOD::System::createStream)), Thiscall, FMOD::System, createStream, char const*, unsigned int, FMOD_CREATESOUNDEXINFO*, FMOD::Sound**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<long long*, long long*, long long*>::func(&FMOD::System::getFileUsage)), Thiscall, FMOD::System, getFileUsage, long long*, long long*, long long*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void const*, int, FMOD::Geometry**>::func(&FMOD::System::loadGeometry)), Thiscall, FMOD::System, loadGeometry, void const*, int, FMOD::Geometry**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::System::mixerSuspend)), Thiscall, FMOD::System, mixerSuspend, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&FMOD::System::unloadPlugin)), Thiscall, FMOD::System, unloadPlugin, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&FMOD::System::get3DSettings)), Thiscall, FMOD::System, get3DSettings, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, char*, int, FMOD_GUID*, int*, FMOD_SPEAKERMODE*, int*>::func(&FMOD::System::getDriverInfo)), Thiscall, FMOD::System, getDriverInfo, int, char*, int, FMOD_GUID*, int*, FMOD_SPEAKERMODE*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::System::getNumDrivers)), Thiscall, FMOD::System, getNumDrivers, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_PLUGINTYPE, int*>::func(&FMOD::System::getNumPlugins)), Thiscall, FMOD::System, getNumPlugins, FMOD_PLUGINTYPE, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, FMOD_PLUGINTYPE*, char*, int, unsigned int*>::func(&FMOD::System::getPluginInfo)), Thiscall, FMOD::System, getPluginInfo, unsigned int, FMOD_PLUGINTYPE*, char*, int, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_CODEC_DESCRIPTION*, unsigned int*, unsigned int>::func(&FMOD::System::registerCodec)), Thiscall, FMOD::System, registerCodec, FMOD_CODEC_DESCRIPTION*, unsigned int*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&FMOD::System::set3DSettings)), Thiscall, FMOD::System, set3DSettings, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_FILE_OPEN_CALLBACK, FMOD_FILE_CLOSE_CALLBACK, FMOD_FILE_READ_CALLBACK, FMOD_FILE_SEEK_CALLBACK, FMOD_FILE_ASYNCREAD_CALLBACK, FMOD_FILE_ASYNCCANCEL_CALLBACK, int>::func(&FMOD::System::setFileSystem)), Thiscall, FMOD::System, setFileSystem, FMOD_FILE_OPEN_CALLBACK, FMOD_FILE_CLOSE_CALLBACK, FMOD_FILE_READ_CALLBACK, FMOD_FILE_SEEK_CALLBACK, FMOD_FILE_ASYNCREAD_CALLBACK, FMOD_FILE_ASYNCCANCEL_CALLBACK, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&FMOD::System::setPluginPath)), Thiscall, FMOD::System, setPluginPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, FMOD::Geometry**>::func(&FMOD::System::createGeometry)), Thiscall, FMOD::System, createGeometry, int, int, FMOD::Geometry**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::Reverb3D**>::func(&FMOD::System::createReverb3D)), Thiscall, FMOD::System, createReverb3D, FMOD::Reverb3D**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_OUTPUT_DESCRIPTION const*, unsigned int*>::func(&FMOD::System::registerOutput)), Thiscall, FMOD::System, registerOutput, FMOD_OUTPUT_DESCRIPTION const*, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSP_TYPE, FMOD::DSP**>::func(&FMOD::System::createDSPByType)), Thiscall, FMOD::System, createDSPByType, FMOD_DSP_TYPE, FMOD::DSP**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, int, unsigned int*>::func(&FMOD::System::getNestedPlugin)), Thiscall, FMOD::System, getNestedPlugin, unsigned int, int, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char*, int>::func(&FMOD::System::getNetworkProxy)), Thiscall, FMOD::System, getNetworkProxy, char*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::System::getOutputHandle)), Thiscall, FMOD::System, getOutputHandle, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_PLUGINTYPE, int, unsigned int*>::func(&FMOD::System::getPluginHandle)), Thiscall, FMOD::System, getPluginHandle, FMOD_PLUGINTYPE, int, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&FMOD::System::setNetworkProxy)), Thiscall, FMOD::System, setNetworkProxy, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_FILE_OPEN_CALLBACK, FMOD_FILE_CLOSE_CALLBACK, FMOD_FILE_READ_CALLBACK, FMOD_FILE_SEEK_CALLBACK>::func(&FMOD::System::attachFileSystem)), Thiscall, FMOD::System, attachFileSystem, FMOD_FILE_OPEN_CALLBACK, FMOD_FILE_CLOSE_CALLBACK, FMOD_FILE_READ_CALLBACK, FMOD_FILE_SEEK_CALLBACK)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, FMOD::SoundGroup**>::func(&FMOD::System::createSoundGroup)), Thiscall, FMOD::System, createSoundGroup, char const*, FMOD::SoundGroup**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, int*>::func(&FMOD::System::getDSPBufferSize)), Thiscall, FMOD::System, getDSPBufferSize, unsigned int*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSP_TYPE, FMOD_DSP_DESCRIPTION const**>::func(&FMOD::System::getDSPInfoByType)), Thiscall, FMOD::System, getDSPInfoByType, FMOD_DSP_TYPE, FMOD_DSP_DESCRIPTION const**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, int>::func(&FMOD::System::setDSPBufferSize)), Thiscall, FMOD::System, setDSPBufferSize, unsigned int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, FMOD::DSP**>::func(&FMOD::System::createDSPByPlugin)), Thiscall, FMOD::System, createDSPByPlugin, unsigned int, FMOD::DSP**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::System::get3DNumListeners)), Thiscall, FMOD::System, get3DNumListeners, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::System::getNetworkTimeout)), Thiscall, FMOD::System, getNetworkTimeout, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*>::func(&FMOD::System::getOutputByPlugin)), Thiscall, FMOD::System, getOutputByPlugin, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, unsigned int*>::func(&FMOD::System::getRecordPosition)), Thiscall, FMOD::System, getRecordPosition, int, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*, FMOD_SPEAKERMODE*, int*>::func(&FMOD::System::getSoftwareFormat)), Thiscall, FMOD::System, getSoftwareFormat, int*, FMOD_SPEAKERMODE*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::System::set3DNumListeners)), Thiscall, FMOD::System, set3DNumListeners, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::System::setNetworkTimeout)), Thiscall, FMOD::System, setNetworkTimeout, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&FMOD::System::setOutputByPlugin)), Thiscall, FMOD::System, setOutputByPlugin, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD_SPEAKERMODE, int>::func(&FMOD::System::setSoftwareFormat)), Thiscall, FMOD::System, setSoftwareFormat, int, FMOD_SPEAKERMODE, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, FMOD::ChannelGroup**>::func(&FMOD::System::createChannelGroup)), Thiscall, FMOD::System, createChannelGroup, char const*, FMOD::ChannelGroup**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*, int*>::func(&FMOD::System::getChannelsPlaying)), Thiscall, FMOD::System, getChannelsPlaying, int*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, FMOD_DSP_DESCRIPTION const**>::func(&FMOD::System::getDSPInfoByPlugin)), Thiscall, FMOD::System, getDSPInfoByPlugin, unsigned int, FMOD_DSP_DESCRIPTION const**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SPEAKER, float*, float*, bool*>::func(&FMOD::System::getSpeakerPosition)), Thiscall, FMOD::System, getSpeakerPosition, FMOD_SPEAKER, float*, float*, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SPEAKER, float, float, bool>::func(&FMOD::System::setSpeakerPosition)), Thiscall, FMOD::System, setSpeakerPosition, FMOD_SPEAKER, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_ADVANCEDSETTINGS*>::func(&FMOD::System::getAdvancedSettings)), Thiscall, FMOD::System, getAdvancedSettings, FMOD_ADVANCEDSETTINGS*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SPEAKERMODE, FMOD_SPEAKERMODE, float*, int>::func(&FMOD::System::getDefaultMixMatrix)), Thiscall, FMOD::System, getDefaultMixMatrix, FMOD_SPEAKERMODE, FMOD_SPEAKERMODE, float*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*>::func(&FMOD::System::getGeometrySettings)), Thiscall, FMOD::System, getGeometrySettings, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::SoundGroup**>::func(&FMOD::System::getMasterSoundGroup)), Thiscall, FMOD::System, getMasterSoundGroup, FMOD::SoundGroup**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, int*>::func(&FMOD::System::getNumNestedPlugins)), Thiscall, FMOD::System, getNumNestedPlugins, unsigned int, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, char*, int, FMOD_GUID*, int*, FMOD_SPEAKERMODE*, int*, unsigned int*>::func(&FMOD::System::getRecordDriverInfo)), Thiscall, FMOD::System, getRecordDriverInfo, int, char*, int, FMOD_GUID*, int*, FMOD_SPEAKERMODE*, int*, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*, int*>::func(&FMOD::System::getRecordNumDrivers)), Thiscall, FMOD::System, getRecordNumDrivers, int*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD_REVERB_PROPERTIES*>::func(&FMOD::System::getReverbProperties)), Thiscall, FMOD::System, getReverbProperties, int, FMOD_REVERB_PROPERTIES*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::System::getSoftwareChannels)), Thiscall, FMOD::System, getSoftwareChannels, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int*, unsigned int*>::func(&FMOD::System::getStreamBufferSize)), Thiscall, FMOD::System, getStreamBufferSize, unsigned int*, unsigned int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_ADVANCEDSETTINGS*>::func(&FMOD::System::setAdvancedSettings)), Thiscall, FMOD::System, setAdvancedSettings, FMOD_ADVANCEDSETTINGS*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&FMOD::System::setGeometrySettings)), Thiscall, FMOD::System, setGeometrySettings, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD_REVERB_PROPERTIES const*>::func(&FMOD::System::setReverbProperties)), Thiscall, FMOD::System, setReverbProperties, int, FMOD_REVERB_PROPERTIES const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::System::setSoftwareChannels)), Thiscall, FMOD::System, setSoftwareChannels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, unsigned int>::func(&FMOD::System::setStreamBufferSize)), Thiscall, FMOD::System, setStreamBufferSize, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR const*, FMOD_VECTOR const*, float*, float*>::func(&FMOD::System::getGeometryOcclusion)), Thiscall, FMOD::System, getGeometryOcclusion, FMOD_VECTOR const*, FMOD_VECTOR const*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_3D_ROLLOFF_CALLBACK>::func(&FMOD::System::set3DRolloffCallback)), Thiscall, FMOD::System, set3DRolloffCallback, FMOD_3D_ROLLOFF_CALLBACK)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::ChannelGroup**>::func(&FMOD::System::getMasterChannelGroup)), Thiscall, FMOD::System, getMasterChannelGroup, FMOD::ChannelGroup**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_SPEAKERMODE, int*>::func(&FMOD::System::getSpeakerModeChannels)), Thiscall, FMOD::System, getSpeakerModeChannels, FMOD_SPEAKERMODE, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD_VECTOR*, FMOD_VECTOR*, FMOD_VECTOR*, FMOD_VECTOR*>::func(&FMOD::System::get3DListenerAttributes)), Thiscall, FMOD::System, get3DListenerAttributes, int, FMOD_VECTOR*, FMOD_VECTOR*, FMOD_VECTOR*, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, FMOD_VECTOR const*, FMOD_VECTOR const*, FMOD_VECTOR const*, FMOD_VECTOR const*>::func(&FMOD::System::set3DListenerAttributes)), Thiscall, FMOD::System, set3DListenerAttributes, int, FMOD_VECTOR const*, FMOD_VECTOR const*, FMOD_VECTOR const*, FMOD_VECTOR const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_PORT_TYPE, unsigned long long, FMOD::ChannelGroup*, bool>::func(&FMOD::System::attachChannelGroupToPort)), Thiscall, FMOD::System, attachChannelGroupToPort, FMOD_PORT_TYPE, unsigned long long, FMOD::ChannelGroup*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::ChannelGroup*>::func(&FMOD::System::detachChannelGroupFromPort)), Thiscall, FMOD::System, detachChannelGroupFromPort, FMOD::ChannelGroup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, unsigned int, void*>::func(&FMOD::System::init)), Thiscall, FMOD::System, init, int, unsigned int, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::System::close)), Thiscall, FMOD::System, close, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::System::update)), Thiscall, FMOD::System, update, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::System::lockDSP)), Thiscall, FMOD::System, lockDSP, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::DSP*, FMOD::ChannelGroup*, bool, FMOD::Channel**>::func(&FMOD::System::playDSP)), Thiscall, FMOD::System, playDSP, FMOD::DSP*, FMOD::ChannelGroup*, bool, FMOD::Channel**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::System::release)), Thiscall, FMOD::System, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_DSP_DESCRIPTION const*, FMOD::DSP**>::func(&FMOD::System::createDSP)), Thiscall, FMOD::System, createDSP, FMOD_DSP_DESCRIPTION const*, FMOD::DSP**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::System::getDriver)), Thiscall, FMOD::System, getDriver, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_OUTPUTTYPE*>::func(&FMOD::System::getOutput)), Thiscall, FMOD::System, getOutput, FMOD_OUTPUTTYPE*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD::Sound*, FMOD::ChannelGroup*, bool, FMOD::Channel**>::func(&FMOD::System::playSound)), Thiscall, FMOD::System, playSound, FMOD::Sound*, FMOD::ChannelGroup*, bool, FMOD::Channel**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FMOD::System::setDriver)), Thiscall, FMOD::System, setDriver, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_OUTPUTTYPE>::func(&FMOD::System::setOutput)), Thiscall, FMOD::System, setOutput, FMOD_OUTPUTTYPE)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::System::unlockDSP)), Thiscall, FMOD::System, unlockDSP, )
		}
	};
}
