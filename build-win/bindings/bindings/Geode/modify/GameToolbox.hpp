#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addBackButton
		#define GEODE_STATICS_addBackButton
		GEODE_AS_STATIC_FUNCTION(addBackButton) 
	#endif

	#ifndef GEODE_STATICS_addRThumbScrollButton
		#define GEODE_STATICS_addRThumbScrollButton
		GEODE_AS_STATIC_FUNCTION(addRThumbScrollButton) 
	#endif

	#ifndef GEODE_STATICS_alignItemsHorisontally
		#define GEODE_STATICS_alignItemsHorisontally
		GEODE_AS_STATIC_FUNCTION(alignItemsHorisontally) 
	#endif

	#ifndef GEODE_STATICS_bounceTime
		#define GEODE_STATICS_bounceTime
		GEODE_AS_STATIC_FUNCTION(bounceTime) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_easeToText
		#define GEODE_STATICS_easeToText
		GEODE_AS_STATIC_FUNCTION(easeToText) 
	#endif

	#ifndef GEODE_STATICS_gen_random
		#define GEODE_STATICS_gen_random
		GEODE_AS_STATIC_FUNCTION(gen_random) 
	#endif

	#ifndef GEODE_STATICS_getEasedValue
		#define GEODE_STATICS_getEasedValue
		GEODE_AS_STATIC_FUNCTION(getEasedValue) 
	#endif

	#ifndef GEODE_STATICS_getRelativeOffset
		#define GEODE_STATICS_getRelativeOffset
		GEODE_AS_STATIC_FUNCTION(getRelativeOffset) 
	#endif

	#ifndef GEODE_STATICS_getResponse
		#define GEODE_STATICS_getResponse
		GEODE_AS_STATIC_FUNCTION(getResponse) 
	#endif

	#ifndef GEODE_STATICS_getTimeString
		#define GEODE_STATICS_getTimeString
		GEODE_AS_STATIC_FUNCTION(getTimeString) 
	#endif

	#ifndef GEODE_STATICS_hsvFromString
		#define GEODE_STATICS_hsvFromString
		GEODE_AS_STATIC_FUNCTION(hsvFromString) 
	#endif

	#ifndef GEODE_STATICS_intToShortString
		#define GEODE_STATICS_intToShortString
		GEODE_AS_STATIC_FUNCTION(intToShortString) 
	#endif

	#ifndef GEODE_STATICS_intToString
		#define GEODE_STATICS_intToString
		GEODE_AS_STATIC_FUNCTION(intToString) 
	#endif

	#ifndef GEODE_STATICS_mergeDictsSaveLargestInt
		#define GEODE_STATICS_mergeDictsSaveLargestInt
		GEODE_AS_STATIC_FUNCTION(mergeDictsSaveLargestInt) 
	#endif

	#ifndef GEODE_STATICS_mergeDictsSkipConflict
		#define GEODE_STATICS_mergeDictsSkipConflict
		GEODE_AS_STATIC_FUNCTION(mergeDictsSkipConflict) 
	#endif

	#ifndef GEODE_STATICS_msToTimeString
		#define GEODE_STATICS_msToTimeString
		GEODE_AS_STATIC_FUNCTION(msToTimeString) 
	#endif

	#ifndef GEODE_STATICS_openRateURL
		#define GEODE_STATICS_openRateURL
		GEODE_AS_STATIC_FUNCTION(openRateURL) 
	#endif

	#ifndef GEODE_STATICS_particleFromStruct
		#define GEODE_STATICS_particleFromStruct
		GEODE_AS_STATIC_FUNCTION(particleFromStruct) 
	#endif

	#ifndef GEODE_STATICS_particleStringToStruct
		#define GEODE_STATICS_particleStringToStruct
		GEODE_AS_STATIC_FUNCTION(particleStringToStruct) 
	#endif

	#ifndef GEODE_STATICS_pointsToString
		#define GEODE_STATICS_pointsToString
		GEODE_AS_STATIC_FUNCTION(pointsToString) 
	#endif

	#ifndef GEODE_STATICS_preVisitWithClippingRect
		#define GEODE_STATICS_preVisitWithClippingRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_STATICS_saveParticleToString
		#define GEODE_STATICS_saveParticleToString
		GEODE_AS_STATIC_FUNCTION(saveParticleToString) 
	#endif

	#ifndef GEODE_STATICS_stringFromHSV
		#define GEODE_STATICS_stringFromHSV
		GEODE_AS_STATIC_FUNCTION(stringFromHSV) 
	#endif

	#ifndef GEODE_STATICS_stringSetupToDict
		#define GEODE_STATICS_stringSetupToDict
		GEODE_AS_STATIC_FUNCTION(stringSetupToDict) 
	#endif

	#ifndef GEODE_STATICS_stringSetupToMap
		#define GEODE_STATICS_stringSetupToMap
		GEODE_AS_STATIC_FUNCTION(stringSetupToMap) 
	#endif

	#ifndef GEODE_STATICS_timestampToHumanReadable
		#define GEODE_STATICS_timestampToHumanReadable
		GEODE_AS_STATIC_FUNCTION(timestampToHumanReadable) 
	#endif

	#ifndef GEODE_STATICS_transformColor
		#define GEODE_STATICS_transformColor
		GEODE_AS_STATIC_FUNCTION(transformColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addBackButton
		#define GEODE_CONCEPT_CHECK_addBackButton
		GEODE_CONCEPT_FUNCTION_CHECK(addBackButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRThumbScrollButton
		#define GEODE_CONCEPT_CHECK_addRThumbScrollButton
		GEODE_CONCEPT_FUNCTION_CHECK(addRThumbScrollButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_alignItemsHorisontally
		#define GEODE_CONCEPT_CHECK_alignItemsHorisontally
		GEODE_CONCEPT_FUNCTION_CHECK(alignItemsHorisontally) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_alignItemsVertically
		#define GEODE_CONCEPT_CHECK_alignItemsVertically
		GEODE_CONCEPT_FUNCTION_CHECK(alignItemsVertically) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bounceTime
		#define GEODE_CONCEPT_CHECK_bounceTime
		GEODE_CONCEPT_FUNCTION_CHECK(bounceTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorToSepia
		#define GEODE_CONCEPT_CHECK_colorToSepia
		GEODE_CONCEPT_FUNCTION_CHECK(colorToSepia) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_contentScaleClipRect
		#define GEODE_CONCEPT_CHECK_contentScaleClipRect
		GEODE_CONCEPT_FUNCTION_CHECK(contentScaleClipRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createHashString
		#define GEODE_CONCEPT_CHECK_createHashString
		GEODE_CONCEPT_FUNCTION_CHECK(createHashString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doWeHaveInternet
		#define GEODE_CONCEPT_CHECK_doWeHaveInternet
		GEODE_CONCEPT_FUNCTION_CHECK(doWeHaveInternet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_easeToText
		#define GEODE_CONCEPT_CHECK_easeToText
		GEODE_CONCEPT_FUNCTION_CHECK(easeToText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fast_rand
		#define GEODE_CONCEPT_CHECK_fast_rand
		GEODE_CONCEPT_FUNCTION_CHECK(fast_rand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fast_rand_0_1
		#define GEODE_CONCEPT_CHECK_fast_rand_0_1
		GEODE_CONCEPT_FUNCTION_CHECK(fast_rand_0_1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fast_rand_minus1_1
		#define GEODE_CONCEPT_CHECK_fast_rand_minus1_1
		GEODE_CONCEPT_FUNCTION_CHECK(fast_rand_minus1_1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fast_srand
		#define GEODE_CONCEPT_CHECK_fast_srand
		GEODE_CONCEPT_FUNCTION_CHECK(fast_srand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gen_random
		#define GEODE_CONCEPT_CHECK_gen_random
		GEODE_CONCEPT_FUNCTION_CHECK(gen_random) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDropActionWDelay
		#define GEODE_CONCEPT_CHECK_getDropActionWDelay
		GEODE_CONCEPT_FUNCTION_CHECK(getDropActionWDelay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDropActionWEnd
		#define GEODE_CONCEPT_CHECK_getDropActionWEnd
		GEODE_CONCEPT_FUNCTION_CHECK(getDropActionWEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEasedAction
		#define GEODE_CONCEPT_CHECK_getEasedAction
		GEODE_CONCEPT_FUNCTION_CHECK(getEasedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEasedValue
		#define GEODE_CONCEPT_CHECK_getEasedValue
		GEODE_CONCEPT_FUNCTION_CHECK(getEasedValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getfast_srand
		#define GEODE_CONCEPT_CHECK_getfast_srand
		GEODE_CONCEPT_FUNCTION_CHECK(getfast_srand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInvertedEasing
		#define GEODE_CONCEPT_CHECK_getInvertedEasing
		GEODE_CONCEPT_FUNCTION_CHECK(getInvertedEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLargestMergedIntDicts
		#define GEODE_CONCEPT_CHECK_getLargestMergedIntDicts
		GEODE_CONCEPT_FUNCTION_CHECK(getLargestMergedIntDicts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMultipliedHSV
		#define GEODE_CONCEPT_CHECK_getMultipliedHSV
		GEODE_CONCEPT_FUNCTION_CHECK(getMultipliedHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeOffset
		#define GEODE_CONCEPT_CHECK_getRelativeOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResponse
		#define GEODE_CONCEPT_CHECK_getResponse
		GEODE_CONCEPT_FUNCTION_CHECK(getResponse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeString
		#define GEODE_CONCEPT_CHECK_getTimeString
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hsvFromString
		#define GEODE_CONCEPT_CHECK_hsvFromString
		GEODE_CONCEPT_FUNCTION_CHECK(hsvFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_intToShortString
		#define GEODE_CONCEPT_CHECK_intToShortString
		GEODE_CONCEPT_FUNCTION_CHECK(intToShortString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_intToString
		#define GEODE_CONCEPT_CHECK_intToString
		GEODE_CONCEPT_FUNCTION_CHECK(intToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isIOS
		#define GEODE_CONCEPT_CHECK_isIOS
		GEODE_CONCEPT_FUNCTION_CHECK(isIOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRateEasing
		#define GEODE_CONCEPT_CHECK_isRateEasing
		GEODE_CONCEPT_FUNCTION_CHECK(isRateEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mergeDictsSaveLargestInt
		#define GEODE_CONCEPT_CHECK_mergeDictsSaveLargestInt
		GEODE_CONCEPT_FUNCTION_CHECK(mergeDictsSaveLargestInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mergeDictsSkipConflict
		#define GEODE_CONCEPT_CHECK_mergeDictsSkipConflict
		GEODE_CONCEPT_FUNCTION_CHECK(mergeDictsSkipConflict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_msToTimeString
		#define GEODE_CONCEPT_CHECK_msToTimeString
		GEODE_CONCEPT_FUNCTION_CHECK(msToTimeString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_multipliedColorValue
		#define GEODE_CONCEPT_CHECK_multipliedColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(multipliedColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openAppPage
		#define GEODE_CONCEPT_CHECK_openAppPage
		GEODE_CONCEPT_FUNCTION_CHECK(openAppPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openRateURL
		#define GEODE_CONCEPT_CHECK_openRateURL
		GEODE_CONCEPT_FUNCTION_CHECK(openRateURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_particleFromString
		#define GEODE_CONCEPT_CHECK_particleFromString
		GEODE_CONCEPT_FUNCTION_CHECK(particleFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_particleFromStruct
		#define GEODE_CONCEPT_CHECK_particleFromStruct
		GEODE_CONCEPT_FUNCTION_CHECK(particleFromStruct) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_particleStringToStruct
		#define GEODE_CONCEPT_CHECK_particleStringToStruct
		GEODE_CONCEPT_FUNCTION_CHECK(particleStringToStruct) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pointsToString
		#define GEODE_CONCEPT_CHECK_pointsToString
		GEODE_CONCEPT_FUNCTION_CHECK(pointsToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postClipVisit
		#define GEODE_CONCEPT_CHECK_postClipVisit
		GEODE_CONCEPT_FUNCTION_CHECK(postClipVisit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		#define GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		GEODE_CONCEPT_FUNCTION_CHECK(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preVisitWithClipRect
		#define GEODE_CONCEPT_CHECK_preVisitWithClipRect
		GEODE_CONCEPT_FUNCTION_CHECK(preVisitWithClipRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveParticleToString
		#define GEODE_CONCEPT_CHECK_saveParticleToString
		GEODE_CONCEPT_FUNCTION_CHECK(saveParticleToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveStringToFile
		#define GEODE_CONCEPT_CHECK_saveStringToFile
		GEODE_CONCEPT_FUNCTION_CHECK(saveStringToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringFromHSV
		#define GEODE_CONCEPT_CHECK_stringFromHSV
		GEODE_CONCEPT_FUNCTION_CHECK(stringFromHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringSetupToDict
		#define GEODE_CONCEPT_CHECK_stringSetupToDict
		GEODE_CONCEPT_FUNCTION_CHECK(stringSetupToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringSetupToMap
		#define GEODE_CONCEPT_CHECK_stringSetupToMap
		GEODE_CONCEPT_FUNCTION_CHECK(stringSetupToMap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_strongColor
		#define GEODE_CONCEPT_CHECK_strongColor
		GEODE_CONCEPT_FUNCTION_CHECK(strongColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timestampToHumanReadable
		#define GEODE_CONCEPT_CHECK_timestampToHumanReadable
		GEODE_CONCEPT_FUNCTION_CHECK(timestampToHumanReadable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformColor
		#define GEODE_CONCEPT_CHECK_transformColor
		GEODE_CONCEPT_FUNCTION_CHECK(transformColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameToolbox> : ModifyBase<ModifyDerive<Der, GameToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameToolbox>>;
		using ModifyBase<ModifyDerive<Der, GameToolbox>>::ModifyBase;
		using Base = GameToolbox;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x65040, Default, GameToolbox, addBackButton, cocos2d::CCLayer*, cocos2d::CCMenuItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x65120, Default, GameToolbox, addRThumbScrollButton, cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x64140, Default, GameToolbox, alignItemsHorisontally, cocos2d::CCArray*, float, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, alignItemsVertically, cocos2d::CCArray*, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68ac0, Default, GameToolbox, bounceTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, colorToSepia, cocos2d::ccColor3B, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, contentScaleClipRect, cocos2d::CCRect&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, createHashString, gd::string const&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x646a0, Default, GameToolbox, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, doWeHaveInternet, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x685a0, Default, GameToolbox, easeToText, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, fast_rand, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, fast_rand_0_1, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, fast_rand_minus1_1, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, fast_srand, uint64_t)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66070, Default, GameToolbox, gen_random, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, getDropActionWDelay, float, float, float, cocos2d::CCNode*, cocos2d::SEL_CallFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, getDropActionWEnd, float, float, float, cocos2d::CCAction*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, getEasedAction, cocos2d::CCActionInterval*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68b70, Default, GameToolbox, getEasedValue, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, getfast_srand, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, getInvertedEasing, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, getLargestMergedIntDicts, cocos2d::CCDictionary*, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, getMultipliedHSV, cocos2d::ccHSVValue const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x649a0, Default, GameToolbox, getRelativeOffset, GameObject*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x64340, Default, GameToolbox, getResponse, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x65e50, Default, GameToolbox, getTimeString, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x65510, Default, GameToolbox, hsvFromString, gd::string const&, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69150, Default, GameToolbox, intToShortString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69090, Default, GameToolbox, intToString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, isIOS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, isRateEasing, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x64ba0, Default, GameToolbox, mergeDictsSaveLargestInt, cocos2d::CCDictionary*, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x64e00, Default, GameToolbox, mergeDictsSkipConflict, cocos2d::CCDictionary*, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69660, Default, GameToolbox, msToTimeString, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, multipliedColorValue, cocos2d::ccColor3B, cocos2d::ccColor3B, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, openAppPage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameToolbox, openRateURL, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, particleFromString, gd::string const&, cocos2d::CCParticleSystemQuad*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68030, Default, GameToolbox, particleFromStruct, cocos2d::ParticleStruct const&, cocos2d::CCParticleSystemQuad*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67570, Default, GameToolbox, particleStringToStruct, gd::string const&, cocos2d::ParticleStruct&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69790, Default, GameToolbox, pointsToString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, postClipVisit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x645f0, Default, GameToolbox, preVisitWithClippingRect, cocos2d::CCNode*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, preVisitWithClipRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66300, Default, GameToolbox, saveParticleToString, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, saveStringToFile, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x65720, Default, GameToolbox, stringFromHSV, cocos2d::ccHSVValue, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x65c60, Default, GameToolbox, stringSetupToDict, gd::string const&, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x658c0, Default, GameToolbox, stringSetupToMap, gd::string const&, char const*, gd::map<gd::string, gd::string>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, strongColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x692f0, Default, GameToolbox, timestampToHumanReadable, time_t)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x652c0, Default, GameToolbox, transformColor, cocos2d::ccColor3B const&, cocos2d::ccHSVValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameToolbox, transformColor, cocos2d::ccColor3B const&, float, float, float)
		}
	};
}
