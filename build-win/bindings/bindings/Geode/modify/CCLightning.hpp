#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_lightningWithStrikePoint
		#define GEODE_STATICS_lightningWithStrikePoint
		GEODE_AS_STATIC_FUNCTION(lightningWithStrikePoint) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedOpacity
		#define GEODE_STATICS_getDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_isCascadeOpacityEnabled
		#define GEODE_STATICS_isCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeOpacityEnabled
		#define GEODE_STATICS_setCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedColor
		#define GEODE_STATICS_getDisplayedColor
		GEODE_AS_STATIC_FUNCTION(getDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_isCascadeColorEnabled
		#define GEODE_STATICS_isCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeColorEnabled
		#define GEODE_STATICS_setCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_initWithStrikePoint
		#define GEODE_STATICS_initWithStrikePoint
		GEODE_AS_STATIC_FUNCTION(initWithStrikePoint) 
	#endif

	#ifndef GEODE_STATICS_strike
		#define GEODE_STATICS_strike
		GEODE_AS_STATIC_FUNCTION(strike) 
	#endif

	#ifndef GEODE_STATICS_strikeFinished
		#define GEODE_STATICS_strikeFinished
		GEODE_AS_STATIC_FUNCTION(strikeFinished) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_lightningWithStrikePoint
		#define GEODE_CONCEPT_CHECK_lightningWithStrikePoint
		GEODE_CONCEPT_FUNCTION_CHECK(lightningWithStrikePoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_getDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCascadeOpacityEnabled
		#define GEODE_CONCEPT_CHECK_isCascadeOpacityEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCascadeOpacityEnabled
		#define GEODE_CONCEPT_CHECK_setCascadeOpacityEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisplayedColor
		#define GEODE_CONCEPT_CHECK_getDisplayedColor
		GEODE_CONCEPT_FUNCTION_CHECK(getDisplayedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedColor
		#define GEODE_CONCEPT_CHECK_updateDisplayedColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCascadeColorEnabled
		#define GEODE_CONCEPT_CHECK_isCascadeColorEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCascadeColorEnabled
		#define GEODE_CONCEPT_CHECK_setCascadeColorEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithStrikePoint
		#define GEODE_CONCEPT_CHECK_initWithStrikePoint
		GEODE_CONCEPT_FUNCTION_CHECK(initWithStrikePoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_strike
		#define GEODE_CONCEPT_CHECK_strike
		GEODE_CONCEPT_FUNCTION_CHECK(strike) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_strikeFinished
		#define GEODE_CONCEPT_CHECK_strikeFinished
		GEODE_CONCEPT_FUNCTION_CHECK(strikeFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_strikeRandom
		#define GEODE_CONCEPT_CHECK_strikeRandom
		GEODE_CONCEPT_FUNCTION_CHECK(strikeRandom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_strikeWithSeed
		#define GEODE_CONCEPT_CHECK_strikeWithSeed
		GEODE_CONCEPT_FUNCTION_CHECK(strikeWithSeed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLightning> : ModifyBase<ModifyDerive<Der, cocos2d::CCLightning>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLightning>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLightning>>::ModifyBase;
		using Base = cocos2d::CCLightning;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x44470, Thiscall, cocos2d::CCLightning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCLightning, lightningWithStrikePoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x445b0, Default, cocos2d::CCLightning, lightningWithStrikePoint, cocos2d::CCPoint, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44770, Thiscall, cocos2d::CCLightning, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449d0, Thiscall, cocos2d::CCLightning, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449e0, Thiscall, cocos2d::CCLightning, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44980, Thiscall, cocos2d::CCLightning, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44990, Thiscall, cocos2d::CCLightning, getDisplayedOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449a0, Thiscall, cocos2d::CCLightning, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449f0, Thiscall, cocos2d::CCLightning, updateDisplayedOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a00, Thiscall, cocos2d::CCLightning, isCascadeOpacityEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a10, Thiscall, cocos2d::CCLightning, setCascadeOpacityEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449b0, Thiscall, cocos2d::CCLightning, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a20, Thiscall, cocos2d::CCLightning, getDisplayedColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449c0, Thiscall, cocos2d::CCLightning, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a30, Thiscall, cocos2d::CCLightning, updateDisplayedColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a40, Thiscall, cocos2d::CCLightning, isCascadeColorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a50, Thiscall, cocos2d::CCLightning, setCascadeColorEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCLightning, initWithStrikePoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44650, Thiscall, cocos2d::CCLightning, initWithStrikePoint, cocos2d::CCPoint, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x448f0, Thiscall, cocos2d::CCLightning, strike, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44960, Thiscall, cocos2d::CCLightning, strikeFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCLightning, strikeRandom, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCLightning, strikeWithSeed, uint64_t)
		}
	};
}
