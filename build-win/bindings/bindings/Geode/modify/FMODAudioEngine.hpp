#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_pitchForIdx
		#define GEODE_STATICS_pitchForIdx
		GEODE_AS_STATIC_FUNCTION(pitchForIdx) 
	#endif

	#ifndef GEODE_STATICS_reverbToString
		#define GEODE_STATICS_reverbToString
		GEODE_AS_STATIC_FUNCTION(reverbToString) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_channelForChannelID
		#define GEODE_STATICS_channelForChannelID
		GEODE_AS_STATIC_FUNCTION(channelForChannelID) 
	#endif

	#ifndef GEODE_STATICS_channelIDForUniqueID
		#define GEODE_STATICS_channelIDForUniqueID
		GEODE_AS_STATIC_FUNCTION(channelIDForUniqueID) 
	#endif

	#ifndef GEODE_STATICS_channelStopped
		#define GEODE_STATICS_channelStopped
		GEODE_AS_STATIC_FUNCTION(channelStopped) 
	#endif

	#ifndef GEODE_STATICS_channelUnlinkSound
		#define GEODE_STATICS_channelUnlinkSound
		GEODE_AS_STATIC_FUNCTION(channelUnlinkSound) 
	#endif

	#ifndef GEODE_STATICS_clearAllAudio
		#define GEODE_STATICS_clearAllAudio
		GEODE_AS_STATIC_FUNCTION(clearAllAudio) 
	#endif

	#ifndef GEODE_STATICS_createStream
		#define GEODE_STATICS_createStream
		GEODE_AS_STATIC_FUNCTION(createStream) 
	#endif

	#ifndef GEODE_STATICS_fadeInMusic
		#define GEODE_STATICS_fadeInMusic
		GEODE_AS_STATIC_FUNCTION(fadeInMusic) 
	#endif

	#ifndef GEODE_STATICS_fadeMusic
		#define GEODE_STATICS_fadeMusic
		GEODE_AS_STATIC_FUNCTION(fadeMusic) 
	#endif

	#ifndef GEODE_STATICS_fadeOutMusic
		#define GEODE_STATICS_fadeOutMusic
		GEODE_AS_STATIC_FUNCTION(fadeOutMusic) 
	#endif

	#ifndef GEODE_STATICS_getChannelGroup
		#define GEODE_STATICS_getChannelGroup
		GEODE_AS_STATIC_FUNCTION(getChannelGroup) 
	#endif

	#ifndef GEODE_STATICS_getFMODStatus
		#define GEODE_STATICS_getFMODStatus
		GEODE_AS_STATIC_FUNCTION(getFMODStatus) 
	#endif

	#ifndef GEODE_STATICS_getMusicLengthMS
		#define GEODE_STATICS_getMusicLengthMS
		GEODE_AS_STATIC_FUNCTION(getMusicLengthMS) 
	#endif

	#ifndef GEODE_STATICS_getMusicTimeMS
		#define GEODE_STATICS_getMusicTimeMS
		GEODE_AS_STATIC_FUNCTION(getMusicTimeMS) 
	#endif

	#ifndef GEODE_STATICS_isMusicPlaying
		#define GEODE_STATICS_isMusicPlaying
		GEODE_AS_STATIC_FUNCTION(isMusicPlaying) 
	#endif

	#ifndef GEODE_STATICS_isPersistentMatchPlaying
		#define GEODE_STATICS_isPersistentMatchPlaying
		GEODE_AS_STATIC_FUNCTION(isPersistentMatchPlaying) 
	#endif

	#ifndef GEODE_STATICS_lengthForSound
		#define GEODE_STATICS_lengthForSound
		GEODE_AS_STATIC_FUNCTION(lengthForSound) 
	#endif

	#ifndef GEODE_STATICS_loadAndPlayMusic
		#define GEODE_STATICS_loadAndPlayMusic
		GEODE_AS_STATIC_FUNCTION(loadAndPlayMusic) 
	#endif

	#ifndef GEODE_STATICS_loadAudioState
		#define GEODE_STATICS_loadAudioState
		GEODE_AS_STATIC_FUNCTION(loadAudioState) 
	#endif

	#ifndef GEODE_STATICS_loadMusic
		#define GEODE_STATICS_loadMusic
		GEODE_AS_STATIC_FUNCTION(loadMusic) 
	#endif

	#ifndef GEODE_STATICS_playEffect
		#define GEODE_STATICS_playEffect
		GEODE_AS_STATIC_FUNCTION(playEffect) 
	#endif

	#ifndef GEODE_STATICS_playEffectAdvanced
		#define GEODE_STATICS_playEffectAdvanced
		GEODE_AS_STATIC_FUNCTION(playEffectAdvanced) 
	#endif

	#ifndef GEODE_STATICS_playMusic
		#define GEODE_STATICS_playMusic
		GEODE_AS_STATIC_FUNCTION(playMusic) 
	#endif

	#ifndef GEODE_STATICS_preloadEffect
		#define GEODE_STATICS_preloadEffect
		GEODE_AS_STATIC_FUNCTION(preloadEffect) 
	#endif

	#ifndef GEODE_STATICS_preloadEffectAsync
		#define GEODE_STATICS_preloadEffectAsync
		GEODE_AS_STATIC_FUNCTION(preloadEffectAsync) 
	#endif

	#ifndef GEODE_STATICS_preloadMusic
		#define GEODE_STATICS_preloadMusic
		GEODE_AS_STATIC_FUNCTION(preloadMusic) 
	#endif

	#ifndef GEODE_STATICS_queuedEffectFinishedLoading
		#define GEODE_STATICS_queuedEffectFinishedLoading
		GEODE_AS_STATIC_FUNCTION(queuedEffectFinishedLoading) 
	#endif

	#ifndef GEODE_STATICS_queuePlayEffect
		#define GEODE_STATICS_queuePlayEffect
		GEODE_AS_STATIC_FUNCTION(queuePlayEffect) 
	#endif

	#ifndef GEODE_STATICS_queueStartMusic
		#define GEODE_STATICS_queueStartMusic
		GEODE_AS_STATIC_FUNCTION(queueStartMusic) 
	#endif

	#ifndef GEODE_STATICS_registerChannel
		#define GEODE_STATICS_registerChannel
		GEODE_AS_STATIC_FUNCTION(registerChannel) 
	#endif

	#ifndef GEODE_STATICS_resumeAllMusic
		#define GEODE_STATICS_resumeAllMusic
		GEODE_AS_STATIC_FUNCTION(resumeAllMusic) 
	#endif

	#ifndef GEODE_STATICS_saveAudioState
		#define GEODE_STATICS_saveAudioState
		GEODE_AS_STATIC_FUNCTION(saveAudioState) 
	#endif

	#ifndef GEODE_STATICS_setChannelPitch
		#define GEODE_STATICS_setChannelPitch
		GEODE_AS_STATIC_FUNCTION(setChannelPitch) 
	#endif

	#ifndef GEODE_STATICS_setChannelVolume
		#define GEODE_STATICS_setChannelVolume
		GEODE_AS_STATIC_FUNCTION(setChannelVolume) 
	#endif

	#ifndef GEODE_STATICS_setChannelVolumeMod
		#define GEODE_STATICS_setChannelVolumeMod
		GEODE_AS_STATIC_FUNCTION(setChannelVolumeMod) 
	#endif

	#ifndef GEODE_STATICS_setMusicTimeMS
		#define GEODE_STATICS_setMusicTimeMS
		GEODE_AS_STATIC_FUNCTION(setMusicTimeMS) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
	#endif

	#ifndef GEODE_STATICS_setupAudioEngine
		#define GEODE_STATICS_setupAudioEngine
		GEODE_AS_STATIC_FUNCTION(setupAudioEngine) 
	#endif

	#ifndef GEODE_STATICS_start
		#define GEODE_STATICS_start
		GEODE_AS_STATIC_FUNCTION(start) 
	#endif

	#ifndef GEODE_STATICS_startMusic
		#define GEODE_STATICS_startMusic
		GEODE_AS_STATIC_FUNCTION(startMusic) 
	#endif

	#ifndef GEODE_STATICS_stopAllEffects
		#define GEODE_STATICS_stopAllEffects
		GEODE_AS_STATIC_FUNCTION(stopAllEffects) 
	#endif

	#ifndef GEODE_STATICS_stopAllMusic
		#define GEODE_STATICS_stopAllMusic
		GEODE_AS_STATIC_FUNCTION(stopAllMusic) 
	#endif

	#ifndef GEODE_STATICS_stopAndGetFade
		#define GEODE_STATICS_stopAndGetFade
		GEODE_AS_STATIC_FUNCTION(stopAndGetFade) 
	#endif

	#ifndef GEODE_STATICS_stopAndRemoveMusic
		#define GEODE_STATICS_stopAndRemoveMusic
		GEODE_AS_STATIC_FUNCTION(stopAndRemoveMusic) 
	#endif

	#ifndef GEODE_STATICS_stopChannel
		#define GEODE_STATICS_stopChannel
		GEODE_AS_STATIC_FUNCTION(stopChannel) 
	#endif

	#ifndef GEODE_STATICS_storeEffect
		#define GEODE_STATICS_storeEffect
		GEODE_AS_STATIC_FUNCTION(storeEffect) 
	#endif

	#ifndef GEODE_STATICS_swapMusicIndex
		#define GEODE_STATICS_swapMusicIndex
		GEODE_AS_STATIC_FUNCTION(swapMusicIndex) 
	#endif

	#ifndef GEODE_STATICS_triggerQueuedMusic
		#define GEODE_STATICS_triggerQueuedMusic
		GEODE_AS_STATIC_FUNCTION(triggerQueuedMusic) 
	#endif

	#ifndef GEODE_STATICS_unloadAllEffects
		#define GEODE_STATICS_unloadAllEffects
		GEODE_AS_STATIC_FUNCTION(unloadAllEffects) 
	#endif

	#ifndef GEODE_STATICS_unregisterChannel
		#define GEODE_STATICS_unregisterChannel
		GEODE_AS_STATIC_FUNCTION(unregisterChannel) 
	#endif

	#ifndef GEODE_STATICS_updateChannel
		#define GEODE_STATICS_updateChannel
		GEODE_AS_STATIC_FUNCTION(updateChannel) 
	#endif

	#ifndef GEODE_STATICS_updateChannelTweens
		#define GEODE_STATICS_updateChannelTweens
		GEODE_AS_STATIC_FUNCTION(updateChannelTweens) 
	#endif

	#ifndef GEODE_STATICS_updateQueuedEffects
		#define GEODE_STATICS_updateQueuedEffects
		GEODE_AS_STATIC_FUNCTION(updateQueuedEffects) 
	#endif

	#ifndef GEODE_STATICS_updateQueuedMusic
		#define GEODE_STATICS_updateQueuedMusic
		GEODE_AS_STATIC_FUNCTION(updateQueuedMusic) 
	#endif

	#ifndef GEODE_STATICS_updateReverb
		#define GEODE_STATICS_updateReverb
		GEODE_AS_STATIC_FUNCTION(updateReverb) 
	#endif

	#ifndef GEODE_STATICS_updateTemporaryEffects
		#define GEODE_STATICS_updateTemporaryEffects
		GEODE_AS_STATIC_FUNCTION(updateTemporaryEffects) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pitchForIdx
		#define GEODE_CONCEPT_CHECK_pitchForIdx
		GEODE_CONCEPT_FUNCTION_CHECK(pitchForIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverbToString
		#define GEODE_CONCEPT_CHECK_reverbToString
		GEODE_CONCEPT_FUNCTION_CHECK(reverbToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedEngine
		#define GEODE_CONCEPT_CHECK_sharedEngine
		GEODE_CONCEPT_FUNCTION_CHECK(sharedEngine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateQueuedMusic
		#define GEODE_CONCEPT_CHECK_activateQueuedMusic
		GEODE_CONCEPT_FUNCTION_CHECK(activateQueuedMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_channelForChannelID
		#define GEODE_CONCEPT_CHECK_channelForChannelID
		GEODE_CONCEPT_FUNCTION_CHECK(channelForChannelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_channelForUniqueID
		#define GEODE_CONCEPT_CHECK_channelForUniqueID
		GEODE_CONCEPT_FUNCTION_CHECK(channelForUniqueID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_channelIDForUniqueID
		#define GEODE_CONCEPT_CHECK_channelIDForUniqueID
		GEODE_CONCEPT_FUNCTION_CHECK(channelIDForUniqueID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_channelLinkSound
		#define GEODE_CONCEPT_CHECK_channelLinkSound
		GEODE_CONCEPT_FUNCTION_CHECK(channelLinkSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_channelStopped
		#define GEODE_CONCEPT_CHECK_channelStopped
		GEODE_CONCEPT_FUNCTION_CHECK(channelStopped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_channelUnlinkSound
		#define GEODE_CONCEPT_CHECK_channelUnlinkSound
		GEODE_CONCEPT_FUNCTION_CHECK(channelUnlinkSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearAllAudio
		#define GEODE_CONCEPT_CHECK_clearAllAudio
		GEODE_CONCEPT_FUNCTION_CHECK(clearAllAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countActiveEffects
		#define GEODE_CONCEPT_CHECK_countActiveEffects
		GEODE_CONCEPT_FUNCTION_CHECK(countActiveEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countActiveMusic
		#define GEODE_CONCEPT_CHECK_countActiveMusic
		GEODE_CONCEPT_FUNCTION_CHECK(countActiveMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStream
		#define GEODE_CONCEPT_CHECK_createStream
		GEODE_CONCEPT_FUNCTION_CHECK(createStream) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableMetering
		#define GEODE_CONCEPT_CHECK_disableMetering
		GEODE_CONCEPT_FUNCTION_CHECK(disableMetering) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableMetering
		#define GEODE_CONCEPT_CHECK_enableMetering
		GEODE_CONCEPT_FUNCTION_CHECK(enableMetering) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInBackgroundMusic
		#define GEODE_CONCEPT_CHECK_fadeInBackgroundMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInBackgroundMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInMusic
		#define GEODE_CONCEPT_CHECK_fadeInMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeMusic
		#define GEODE_CONCEPT_CHECK_fadeMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutMusic
		#define GEODE_CONCEPT_CHECK_fadeOutMusic
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveMusic
		#define GEODE_CONCEPT_CHECK_getActiveMusic
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveMusicChannel
		#define GEODE_CONCEPT_CHECK_getActiveMusicChannel
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveMusicChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackgroundMusicVolume
		#define GEODE_CONCEPT_CHECK_getBackgroundMusicVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getChannelGroup
		#define GEODE_CONCEPT_CHECK_getChannelGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getChannelGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEffectsVolume
		#define GEODE_CONCEPT_CHECK_getEffectsVolume
		GEODE_CONCEPT_FUNCTION_CHECK(getEffectsVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFMODStatus
		#define GEODE_CONCEPT_CHECK_getFMODStatus
		GEODE_CONCEPT_FUNCTION_CHECK(getFMODStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMeteringValue
		#define GEODE_CONCEPT_CHECK_getMeteringValue
		GEODE_CONCEPT_FUNCTION_CHECK(getMeteringValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicChannelID
		#define GEODE_CONCEPT_CHECK_getMusicChannelID
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicChannelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicLengthMS
		#define GEODE_CONCEPT_CHECK_getMusicLengthMS
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicLengthMS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicTime
		#define GEODE_CONCEPT_CHECK_getMusicTime
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicTimeMS
		#define GEODE_CONCEPT_CHECK_getMusicTimeMS
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicTimeMS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextChannelID
		#define GEODE_CONCEPT_CHECK_getNextChannelID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextChannelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTweenContainer
		#define GEODE_CONCEPT_CHECK_getTweenContainer
		GEODE_CONCEPT_FUNCTION_CHECK(getTweenContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAnyPersistentPlaying
		#define GEODE_CONCEPT_CHECK_isAnyPersistentPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(isAnyPersistentPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isChannelStopping
		#define GEODE_CONCEPT_CHECK_isChannelStopping
		GEODE_CONCEPT_FUNCTION_CHECK(isChannelStopping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEffectLoaded
		#define GEODE_CONCEPT_CHECK_isEffectLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isEffectLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isMusicPlaying
		#define GEODE_CONCEPT_CHECK_isMusicPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(isMusicPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPersistentMatchPlaying
		#define GEODE_CONCEPT_CHECK_isPersistentMatchPlaying
		GEODE_CONCEPT_FUNCTION_CHECK(isPersistentMatchPlaying) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSoundReady
		#define GEODE_CONCEPT_CHECK_isSoundReady
		GEODE_CONCEPT_FUNCTION_CHECK(isSoundReady) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lengthForSound
		#define GEODE_CONCEPT_CHECK_lengthForSound
		GEODE_CONCEPT_FUNCTION_CHECK(lengthForSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadAndPlayMusic
		#define GEODE_CONCEPT_CHECK_loadAndPlayMusic
		GEODE_CONCEPT_FUNCTION_CHECK(loadAndPlayMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadAudioState
		#define GEODE_CONCEPT_CHECK_loadAudioState
		GEODE_CONCEPT_FUNCTION_CHECK(loadAudioState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadMusic
		#define GEODE_CONCEPT_CHECK_loadMusic
		GEODE_CONCEPT_FUNCTION_CHECK(loadMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAllAudio
		#define GEODE_CONCEPT_CHECK_pauseAllAudio
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAllAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAllEffects
		#define GEODE_CONCEPT_CHECK_pauseAllEffects
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAllEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAllMusic
		#define GEODE_CONCEPT_CHECK_pauseAllMusic
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAllMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseEffect
		#define GEODE_CONCEPT_CHECK_pauseEffect
		GEODE_CONCEPT_FUNCTION_CHECK(pauseEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseMusic
		#define GEODE_CONCEPT_CHECK_pauseMusic
		GEODE_CONCEPT_FUNCTION_CHECK(pauseMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEffect
		#define GEODE_CONCEPT_CHECK_playEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEffectAdvanced
		#define GEODE_CONCEPT_CHECK_playEffectAdvanced
		GEODE_CONCEPT_FUNCTION_CHECK(playEffectAdvanced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEffectAsync
		#define GEODE_CONCEPT_CHECK_playEffectAsync
		GEODE_CONCEPT_FUNCTION_CHECK(playEffectAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playMusic
		#define GEODE_CONCEPT_CHECK_playMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadEffect
		#define GEODE_CONCEPT_CHECK_preloadEffect
		GEODE_CONCEPT_FUNCTION_CHECK(preloadEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadEffectAsync
		#define GEODE_CONCEPT_CHECK_preloadEffectAsync
		GEODE_CONCEPT_FUNCTION_CHECK(preloadEffectAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preloadMusic
		#define GEODE_CONCEPT_CHECK_preloadMusic
		GEODE_CONCEPT_FUNCTION_CHECK(preloadMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_printResult
		#define GEODE_CONCEPT_CHECK_printResult
		GEODE_CONCEPT_FUNCTION_CHECK(printResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queuedEffectFinishedLoading
		#define GEODE_CONCEPT_CHECK_queuedEffectFinishedLoading
		GEODE_CONCEPT_FUNCTION_CHECK(queuedEffectFinishedLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queuePlayEffect
		#define GEODE_CONCEPT_CHECK_queuePlayEffect
		GEODE_CONCEPT_FUNCTION_CHECK(queuePlayEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueStartMusic
		#define GEODE_CONCEPT_CHECK_queueStartMusic
		GEODE_CONCEPT_FUNCTION_CHECK(queueStartMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerChannel
		#define GEODE_CONCEPT_CHECK_registerChannel
		GEODE_CONCEPT_FUNCTION_CHECK(registerChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseRemovedSounds
		#define GEODE_CONCEPT_CHECK_releaseRemovedSounds
		GEODE_CONCEPT_FUNCTION_CHECK(releaseRemovedSounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAllAudio
		#define GEODE_CONCEPT_CHECK_resumeAllAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAllAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAllEffects
		#define GEODE_CONCEPT_CHECK_resumeAllEffects
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAllEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAllMusic
		#define GEODE_CONCEPT_CHECK_resumeAllMusic
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAllMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAudio
		#define GEODE_CONCEPT_CHECK_resumeAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeEffect
		#define GEODE_CONCEPT_CHECK_resumeEffect
		GEODE_CONCEPT_FUNCTION_CHECK(resumeEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeMusic
		#define GEODE_CONCEPT_CHECK_resumeMusic
		GEODE_CONCEPT_FUNCTION_CHECK(resumeMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveAudioState
		#define GEODE_CONCEPT_CHECK_saveAudioState
		GEODE_CONCEPT_FUNCTION_CHECK(saveAudioState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackgroundMusicVolume
		#define GEODE_CONCEPT_CHECK_setBackgroundMusicVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setBackgroundMusicVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChannelPitch
		#define GEODE_CONCEPT_CHECK_setChannelPitch
		GEODE_CONCEPT_FUNCTION_CHECK(setChannelPitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChannelVolume
		#define GEODE_CONCEPT_CHECK_setChannelVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setChannelVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChannelVolumeMod
		#define GEODE_CONCEPT_CHECK_setChannelVolumeMod
		GEODE_CONCEPT_FUNCTION_CHECK(setChannelVolumeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEffectsVolume
		#define GEODE_CONCEPT_CHECK_setEffectsVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setEffectsVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMusicTimeMS
		#define GEODE_CONCEPT_CHECK_setMusicTimeMS
		GEODE_CONCEPT_FUNCTION_CHECK(setMusicTimeMS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setup
		#define GEODE_CONCEPT_CHECK_setup
		GEODE_CONCEPT_FUNCTION_CHECK(setup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupAudioEngine
		#define GEODE_CONCEPT_CHECK_setupAudioEngine
		GEODE_CONCEPT_FUNCTION_CHECK(setupAudioEngine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_start
		#define GEODE_CONCEPT_CHECK_start
		GEODE_CONCEPT_FUNCTION_CHECK(start) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMusic
		#define GEODE_CONCEPT_CHECK_startMusic
		GEODE_CONCEPT_FUNCTION_CHECK(startMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stop
		#define GEODE_CONCEPT_CHECK_stop
		GEODE_CONCEPT_FUNCTION_CHECK(stop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllEffects
		#define GEODE_CONCEPT_CHECK_stopAllEffects
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllMusic
		#define GEODE_CONCEPT_CHECK_stopAllMusic
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAndGetFade
		#define GEODE_CONCEPT_CHECK_stopAndGetFade
		GEODE_CONCEPT_FUNCTION_CHECK(stopAndGetFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAndRemoveMusic
		#define GEODE_CONCEPT_CHECK_stopAndRemoveMusic
		GEODE_CONCEPT_FUNCTION_CHECK(stopAndRemoveMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopChannel
		#define GEODE_CONCEPT_CHECK_stopChannel
		GEODE_CONCEPT_FUNCTION_CHECK(stopChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopChannelTween
		#define GEODE_CONCEPT_CHECK_stopChannelTween
		GEODE_CONCEPT_FUNCTION_CHECK(stopChannelTween) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopChannelTweens
		#define GEODE_CONCEPT_CHECK_stopChannelTweens
		GEODE_CONCEPT_FUNCTION_CHECK(stopChannelTweens) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopMusic
		#define GEODE_CONCEPT_CHECK_stopMusic
		GEODE_CONCEPT_FUNCTION_CHECK(stopMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopMusicNotInSet
		#define GEODE_CONCEPT_CHECK_stopMusicNotInSet
		GEODE_CONCEPT_FUNCTION_CHECK(stopMusicNotInSet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeEffect
		#define GEODE_CONCEPT_CHECK_storeEffect
		GEODE_CONCEPT_FUNCTION_CHECK(storeEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapMusicIndex
		#define GEODE_CONCEPT_CHECK_swapMusicIndex
		GEODE_CONCEPT_FUNCTION_CHECK(swapMusicIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testFunction
		#define GEODE_CONCEPT_CHECK_testFunction
		GEODE_CONCEPT_FUNCTION_CHECK(testFunction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerQueuedMusic
		#define GEODE_CONCEPT_CHECK_triggerQueuedMusic
		GEODE_CONCEPT_FUNCTION_CHECK(triggerQueuedMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadAllEffects
		#define GEODE_CONCEPT_CHECK_unloadAllEffects
		GEODE_CONCEPT_FUNCTION_CHECK(unloadAllEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadEffect
		#define GEODE_CONCEPT_CHECK_unloadEffect
		GEODE_CONCEPT_FUNCTION_CHECK(unloadEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterChannel
		#define GEODE_CONCEPT_CHECK_unregisterChannel
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBackgroundFade
		#define GEODE_CONCEPT_CHECK_updateBackgroundFade
		GEODE_CONCEPT_FUNCTION_CHECK(updateBackgroundFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChannel
		#define GEODE_CONCEPT_CHECK_updateChannel
		GEODE_CONCEPT_FUNCTION_CHECK(updateChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChannelTweens
		#define GEODE_CONCEPT_CHECK_updateChannelTweens
		GEODE_CONCEPT_FUNCTION_CHECK(updateChannelTweens) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMetering
		#define GEODE_CONCEPT_CHECK_updateMetering
		GEODE_CONCEPT_FUNCTION_CHECK(updateMetering) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateQueuedEffects
		#define GEODE_CONCEPT_CHECK_updateQueuedEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateQueuedEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateQueuedMusic
		#define GEODE_CONCEPT_CHECK_updateQueuedMusic
		GEODE_CONCEPT_FUNCTION_CHECK(updateQueuedMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateReverb
		#define GEODE_CONCEPT_CHECK_updateReverb
		GEODE_CONCEPT_FUNCTION_CHECK(updateReverb) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTemporaryEffects
		#define GEODE_CONCEPT_CHECK_updateTemporaryEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateTemporaryEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_waitUntilSoundReady
		#define GEODE_CONCEPT_CHECK_waitUntilSoundReady
		GEODE_CONCEPT_FUNCTION_CHECK(waitUntilSoundReady) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMODAudioEngine> : ModifyBase<ModifyDerive<Der, FMODAudioEngine>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODAudioEngine>>;
		using ModifyBase<ModifyDerive<Der, FMODAudioEngine>>::ModifyBase;
		using Base = FMODAudioEngine;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x53100, Thiscall, FMODAudioEngine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x569e0, Default, FMODAudioEngine, pitchForIdx, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54cf0, Default, FMODAudioEngine, reverbToString, FMODReverbPreset)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, sharedEngine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x553c0, Thiscall, FMODAudioEngine, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, activateQueuedMusic, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584b0, Thiscall, FMODAudioEngine, channelForChannelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, channelForUniqueID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583f0, Thiscall, FMODAudioEngine, channelIDForUniqueID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, channelLinkSound, int, FMODSound*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x580e0, Thiscall, FMODAudioEngine, channelStopped, FMOD::Channel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57e50, Thiscall, FMODAudioEngine, channelUnlinkSound, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55310, Thiscall, FMODAudioEngine, clearAllAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, countActiveEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, countActiveMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cba0, Thiscall, FMODAudioEngine, createStream, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, disableMetering, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, enableMetering, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, fadeInBackgroundMusic, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c3f0, Thiscall, FMODAudioEngine, fadeInMusic, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c670, Thiscall, FMODAudioEngine, fadeMusic, float, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c530, Thiscall, FMODAudioEngine, fadeOutMusic, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getActiveMusic, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getActiveMusicChannel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getBackgroundMusicVolume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56b50, Thiscall, FMODAudioEngine, getChannelGroup, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getEffectsVolume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cde0, Thiscall, FMODAudioEngine, getFMODStatus, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getMeteringValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getMusicChannelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c360, Thiscall, FMODAudioEngine, getMusicLengthMS, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getMusicTime, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c300, Thiscall, FMODAudioEngine, getMusicTimeMS, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getNextChannelID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, getTweenContainer, AudioTargetType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, isAnyPersistentPlaying, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, isChannelStopping, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, isEffectLoaded, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59d30, Thiscall, FMODAudioEngine, isMusicPlaying, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59f10, Thiscall, FMODAudioEngine, isMusicPlaying, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ad80, Thiscall, FMODAudioEngine, isPersistentMatchPlaying, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, isSoundReady, FMOD::Sound*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a00, Thiscall, FMODAudioEngine, lengthForSound, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a040, Thiscall, FMODAudioEngine, loadAndPlayMusic, gd::string, unsigned int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55f50, Thiscall, FMODAudioEngine, loadAudioState, FMODAudioState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, loadMusic, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a2b0, Thiscall, FMODAudioEngine, loadMusic, gd::string, float, float, float, bool, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, pauseAllAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, pauseAllEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, pauseAllMusic, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, pauseEffect, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, pauseMusic, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56dc0, Thiscall, FMODAudioEngine, playEffect, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56e40, Thiscall, FMODAudioEngine, playEffect, gd::string, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56f30, Thiscall, FMODAudioEngine, playEffectAdvanced, gd::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, bool, int, int, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, playEffectAsync, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a140, Thiscall, FMODAudioEngine, playMusic, gd::string, bool, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59290, Thiscall, FMODAudioEngine, preloadEffect, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59680, Thiscall, FMODAudioEngine, preloadEffectAsync, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c7c0, Thiscall, FMODAudioEngine, preloadMusic, gd::string, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, printResult, FMOD_RESULT)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b0a0, Thiscall, FMODAudioEngine, queuedEffectFinishedLoading, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57950, Thiscall, FMODAudioEngine, queuePlayEffect, gd::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, int, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5aaa0, Thiscall, FMODAudioEngine, queueStartMusic, gd::string, float, float, float, bool, int, int, int, int, int, bool, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57b20, Thiscall, FMODAudioEngine, registerChannel, FMOD::Channel*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, releaseRemovedSounds, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, resumeAllAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, resumeAllEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59eb0, Thiscall, FMODAudioEngine, resumeAllMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, resumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, resumeEffect, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, resumeMusic, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55920, Thiscall, FMODAudioEngine, saveAudioState, FMODAudioState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, setBackgroundMusicVolume, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59180, Thiscall, FMODAudioEngine, setChannelPitch, int, AudioTargetType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58de0, Thiscall, FMODAudioEngine, setChannelVolume, int, AudioTargetType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58fb0, Thiscall, FMODAudioEngine, setChannelVolumeMod, int, AudioTargetType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, setEffectsVolume, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c1c0, Thiscall, FMODAudioEngine, setMusicTimeMS, unsigned int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x53bf0, Thiscall, FMODAudioEngine, setup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x540d0, Thiscall, FMODAudioEngine, setupAudioEngine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x552b0, Thiscall, FMODAudioEngine, start, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a620, Thiscall, FMODAudioEngine, startMusic, int, int, int, int, bool, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, stop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598e0, Thiscall, FMODAudioEngine, stopAllEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59da0, Thiscall, FMODAudioEngine, stopAllMusic, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a50, Thiscall, FMODAudioEngine, stopAndGetFade, FMOD::Channel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5cab0, Thiscall, FMODAudioEngine, stopAndRemoveMusic, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, stopChannel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58840, Thiscall, FMODAudioEngine, stopChannel, FMOD::Channel*, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58570, Thiscall, FMODAudioEngine, stopChannel, int, AudioTargetType, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, stopChannelTween, int, AudioTargetType, AudioModType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, stopChannelTweens, int, AudioTargetType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, stopMusic, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, stopMusicNotInSet, gd::unordered_set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59540, Thiscall, FMODAudioEngine, storeEffect, FMOD::Sound*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bd10, Thiscall, FMODAudioEngine, swapMusicIndex, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, testFunction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b9d0, Thiscall, FMODAudioEngine, triggerQueuedMusic, FMODQueuedMusic)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59ad0, Thiscall, FMODAudioEngine, unloadAllEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, unloadEffect, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57c50, Thiscall, FMODAudioEngine, unregisterChannel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, updateBackgroundFade, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58b90, Thiscall, FMODAudioEngine, updateChannel, int, AudioTargetType, AudioModType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x567f0, Thiscall, FMODAudioEngine, updateChannelTweens, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, updateMetering, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5aef0, Thiscall, FMODAudioEngine, updateQueuedEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b6d0, Thiscall, FMODAudioEngine, updateQueuedMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54430, Thiscall, FMODAudioEngine, updateReverb, FMODReverbPreset, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b440, Thiscall, FMODAudioEngine, updateTemporaryEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FMODAudioEngine, waitUntilSoundReady, FMOD::Sound*)
		}
	};
}
