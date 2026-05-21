#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelTools.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_artistForAudio
		#define GEODE_STATICS_artistForAudio
		GEODE_AS_STATIC_FUNCTION(artistForAudio) 
	#endif

	#ifndef GEODE_STATICS_fbURLForArtist
		#define GEODE_STATICS_fbURLForArtist
		GEODE_AS_STATIC_FUNCTION(fbURLForArtist) 
	#endif

	#ifndef GEODE_STATICS_getAudioFileName
		#define GEODE_STATICS_getAudioFileName
		GEODE_AS_STATIC_FUNCTION(getAudioFileName) 
	#endif

	#ifndef GEODE_STATICS_getAudioString
		#define GEODE_STATICS_getAudioString
		GEODE_AS_STATIC_FUNCTION(getAudioString) 
	#endif

	#ifndef GEODE_STATICS_getAudioTitle
		#define GEODE_STATICS_getAudioTitle
		GEODE_AS_STATIC_FUNCTION(getAudioTitle) 
	#endif

	#ifndef GEODE_STATICS_getLevel
		#define GEODE_STATICS_getLevel
		GEODE_AS_STATIC_FUNCTION(getLevel) 
	#endif

	#ifndef GEODE_STATICS_getLevelList
		#define GEODE_STATICS_getLevelList
		GEODE_AS_STATIC_FUNCTION(getLevelList) 
	#endif

	#ifndef GEODE_STATICS_getSongObject
		#define GEODE_STATICS_getSongObject
		GEODE_AS_STATIC_FUNCTION(getSongObject) 
	#endif

	#ifndef GEODE_STATICS_moveTriggerObjectsToArray
		#define GEODE_STATICS_moveTriggerObjectsToArray
		GEODE_AS_STATIC_FUNCTION(moveTriggerObjectsToArray) 
	#endif

	#ifndef GEODE_STATICS_nameForArtist
		#define GEODE_STATICS_nameForArtist
		GEODE_AS_STATIC_FUNCTION(nameForArtist) 
	#endif

	#ifndef GEODE_STATICS_ngURLForArtist
		#define GEODE_STATICS_ngURLForArtist
		GEODE_AS_STATIC_FUNCTION(ngURLForArtist) 
	#endif

	#ifndef GEODE_STATICS_posForTimeInternal
		#define GEODE_STATICS_posForTimeInternal
		GEODE_AS_STATIC_FUNCTION(posForTimeInternal) 
	#endif

	#ifndef GEODE_STATICS_sortChannelOrderObjects
		#define GEODE_STATICS_sortChannelOrderObjects
		GEODE_AS_STATIC_FUNCTION(sortChannelOrderObjects) 
	#endif

	#ifndef GEODE_STATICS_sortSpeedObjects
		#define GEODE_STATICS_sortSpeedObjects
		GEODE_AS_STATIC_FUNCTION(sortSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_urlForAudio
		#define GEODE_STATICS_urlForAudio
		GEODE_AS_STATIC_FUNCTION(urlForAudio) 
	#endif

	#ifndef GEODE_STATICS_verifyLevelIntegrity
		#define GEODE_STATICS_verifyLevelIntegrity
		GEODE_AS_STATIC_FUNCTION(verifyLevelIntegrity) 
	#endif

	#ifndef GEODE_STATICS_ytURLForArtist
		#define GEODE_STATICS_ytURLForArtist
		GEODE_AS_STATIC_FUNCTION(ytURLForArtist) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_artistForAudio
		#define GEODE_CONCEPT_CHECK_artistForAudio
		GEODE_CONCEPT_FUNCTION_CHECK(artistForAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_base64DecodeString
		#define GEODE_CONCEPT_CHECK_base64DecodeString
		GEODE_CONCEPT_FUNCTION_CHECK(base64DecodeString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_base64EncodeString
		#define GEODE_CONCEPT_CHECK_base64EncodeString
		GEODE_CONCEPT_FUNCTION_CHECK(base64EncodeString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStarPackDict
		#define GEODE_CONCEPT_CHECK_createStarPackDict
		GEODE_CONCEPT_FUNCTION_CHECK(createStarPackDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fbURLForArtist
		#define GEODE_CONCEPT_CHECK_fbURLForArtist
		GEODE_CONCEPT_FUNCTION_CHECK(fbURLForArtist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioBPM
		#define GEODE_CONCEPT_CHECK_getAudioBPM
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioBPM) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioFileName
		#define GEODE_CONCEPT_CHECK_getAudioFileName
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioString
		#define GEODE_CONCEPT_CHECK_getAudioString
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioTitle
		#define GEODE_CONCEPT_CHECK_getAudioTitle
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioTitle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastGameplayReversed
		#define GEODE_CONCEPT_CHECK_getLastGameplayReversed
		GEODE_CONCEPT_FUNCTION_CHECK(getLastGameplayReversed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastGameplayRotated
		#define GEODE_CONCEPT_CHECK_getLastGameplayRotated
		GEODE_CONCEPT_FUNCTION_CHECK(getLastGameplayRotated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastTimewarp
		#define GEODE_CONCEPT_CHECK_getLastTimewarp
		GEODE_CONCEPT_FUNCTION_CHECK(getLastTimewarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevel
		#define GEODE_CONCEPT_CHECK_getLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelList
		#define GEODE_CONCEPT_CHECK_getLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongObject
		#define GEODE_CONCEPT_CHECK_getSongObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSongObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveTriggerObjectsToArray
		#define GEODE_CONCEPT_CHECK_moveTriggerObjectsToArray
		GEODE_CONCEPT_FUNCTION_CHECK(moveTriggerObjectsToArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForArtist
		#define GEODE_CONCEPT_CHECK_nameForArtist
		GEODE_CONCEPT_FUNCTION_CHECK(nameForArtist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ngURLForArtist
		#define GEODE_CONCEPT_CHECK_ngURLForArtist
		GEODE_CONCEPT_FUNCTION_CHECK(ngURLForArtist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetBPMForTrack
		#define GEODE_CONCEPT_CHECK_offsetBPMForTrack
		GEODE_CONCEPT_FUNCTION_CHECK(offsetBPMForTrack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posForTime
		#define GEODE_CONCEPT_CHECK_posForTime
		GEODE_CONCEPT_FUNCTION_CHECK(posForTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posForTimeInternal
		#define GEODE_CONCEPT_CHECK_posForTimeInternal
		GEODE_CONCEPT_FUNCTION_CHECK(posForTimeInternal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortChannelOrderObjects
		#define GEODE_CONCEPT_CHECK_sortChannelOrderObjects
		GEODE_CONCEPT_FUNCTION_CHECK(sortChannelOrderObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSpeedObjects
		#define GEODE_CONCEPT_CHECK_sortSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(sortSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForPos
		#define GEODE_CONCEPT_CHECK_timeForPos
		GEODE_CONCEPT_FUNCTION_CHECK(timeForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDebugLogging
		#define GEODE_CONCEPT_CHECK_toggleDebugLogging
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDebugLogging) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_urlForAudio
		#define GEODE_CONCEPT_CHECK_urlForAudio
		GEODE_CONCEPT_FUNCTION_CHECK(urlForAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueForSpeedMod
		#define GEODE_CONCEPT_CHECK_valueForSpeedMod
		GEODE_CONCEPT_FUNCTION_CHECK(valueForSpeedMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyLevelIntegrity
		#define GEODE_CONCEPT_CHECK_verifyLevelIntegrity
		GEODE_CONCEPT_FUNCTION_CHECK(verifyLevelIntegrity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ytURLForArtist
		#define GEODE_CONCEPT_CHECK_ytURLForArtist
		GEODE_CONCEPT_FUNCTION_CHECK(ytURLForArtist) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelTools> : ModifyBase<ModifyDerive<Der, LevelTools>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelTools>>;
		using ModifyBase<ModifyDerive<Der, LevelTools>>::ModifyBase;
		using Base = LevelTools;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x329040, Default, LevelTools, artistForAudio, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, base64DecodeString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, base64EncodeString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, createStarPackDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32b150, Default, LevelTools, fbURLForArtist, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, getAudioBPM, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x328470, Default, LevelTools, getAudioFileName, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32b650, Default, LevelTools, getAudioString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3278f0, Default, LevelTools, getAudioTitle, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, getLastGameplayReversed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, getLastGameplayRotated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, getLastTimewarp, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x325040, Default, LevelTools, getLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324f00, Default, LevelTools, getLevelList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32d200, Default, LevelTools, getSongObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32d5e0, Default, LevelTools, moveTriggerObjectsToArray, cocos2d::CCArray*, cocos2d::CCDictionary*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x329110, Default, LevelTools, nameForArtist, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32a730, Default, LevelTools, ngURLForArtist, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, offsetBPMForTrack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, posForTime, float, cocos2d::CCArray*, int, bool, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32cba0, Default, LevelTools, posForTimeInternal, float, cocos2d::CCArray*, int, bool, bool, bool, int&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32d6b0, Default, LevelTools, sortChannelOrderObjects, cocos2d::CCArray*, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32d930, Default, LevelTools, sortSpeedObjects, cocos2d::CCArray*, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32c1c0, Default, LevelTools, timeForPos, cocos2d::CCPoint, cocos2d::CCArray*, int, int, int, bool, bool, bool, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, toggleDebugLogging, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x329410, Default, LevelTools, urlForAudio, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelTools, valueForSpeedMod, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32d3c0, Default, LevelTools, verifyLevelIntegrity, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32abd0, Default, LevelTools, ytURLForArtist, int)
		}
	};
}
