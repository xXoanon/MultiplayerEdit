#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCPartAnimSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setDisplayFrame
		#define GEODE_STATICS_setDisplayFrame
		GEODE_AS_STATIC_FUNCTION(setDisplayFrame) 
	#endif

	#ifndef GEODE_STATICS_isFrameDisplayed
		#define GEODE_STATICS_isFrameDisplayed
		GEODE_AS_STATIC_FUNCTION(isFrameDisplayed) 
	#endif

	#ifndef GEODE_STATICS_displayFrame
		#define GEODE_STATICS_displayFrame
		GEODE_AS_STATIC_FUNCTION(displayFrame) 
	#endif

	#ifndef GEODE_STATICS_initWithAnimDesc
		#define GEODE_STATICS_initWithAnimDesc
		GEODE_AS_STATIC_FUNCTION(initWithAnimDesc) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_tweenToFrame
		#define GEODE_STATICS_tweenToFrame
		GEODE_AS_STATIC_FUNCTION(tweenToFrame) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithAnimDesc
		#define GEODE_CONCEPT_CHECK_createWithAnimDesc
		GEODE_CONCEPT_FUNCTION_CHECK(createWithAnimDesc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleX
		#define GEODE_CONCEPT_CHECK_setScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleY
		#define GEODE_CONCEPT_CHECK_setScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDisplayFrame
		#define GEODE_CONCEPT_CHECK_setDisplayFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setDisplayFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFrameDisplayed
		#define GEODE_CONCEPT_CHECK_isFrameDisplayed
		GEODE_CONCEPT_FUNCTION_CHECK(isFrameDisplayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayFrame
		#define GEODE_CONCEPT_CHECK_displayFrame
		GEODE_CONCEPT_FUNCTION_CHECK(displayFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_changeTextureOfID
		#define GEODE_CONCEPT_CHECK_changeTextureOfID
		GEODE_CONCEPT_FUNCTION_CHECK(changeTextureOfID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countParts
		#define GEODE_CONCEPT_CHECK_countParts
		GEODE_CONCEPT_FUNCTION_CHECK(countParts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dirtify
		#define GEODE_CONCEPT_CHECK_dirtify
		GEODE_CONCEPT_FUNCTION_CHECK(dirtify) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteForKey
		#define GEODE_CONCEPT_CHECK_getSpriteForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithAnimDesc
		#define GEODE_CONCEPT_CHECK_initWithAnimDesc
		GEODE_CONCEPT_FUNCTION_CHECK(initWithAnimDesc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformSprite
		#define GEODE_CONCEPT_CHECK_transformSprite
		GEODE_CONCEPT_FUNCTION_CHECK(transformSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenSpriteTo
		#define GEODE_CONCEPT_CHECK_tweenSpriteTo
		GEODE_CONCEPT_FUNCTION_CHECK(tweenSpriteTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenToFrame
		#define GEODE_CONCEPT_CHECK_tweenToFrame
		GEODE_CONCEPT_FUNCTION_CHECK(tweenToFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCPartAnimSprite> : ModifyBase<ModifyDerive<Der, CCPartAnimSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCPartAnimSprite>>;
		using ModifyBase<ModifyDerive<Der, CCPartAnimSprite>>::ModifyBase;
		using Base = CCPartAnimSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, createWithAnimDesc, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46720, Thiscall, CCPartAnimSprite, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46740, Thiscall, CCPartAnimSprite, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46700, Thiscall, CCPartAnimSprite, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46910, Thiscall, CCPartAnimSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46760, Thiscall, CCPartAnimSprite, setBlendFunc, cocos2d::ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46130, Thiscall, CCPartAnimSprite, setDisplayFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463a0, Thiscall, CCPartAnimSprite, isFrameDisplayed, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463c0, Thiscall, CCPartAnimSprite, displayFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, changeTextureOfID, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, countParts, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, dirtify, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, getSpriteForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45980, Thiscall, CCPartAnimSprite, initWithAnimDesc, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46830, Thiscall, CCPartAnimSprite, setColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, transformSprite, SpriteDescription*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCPartAnimSprite, tweenSpriteTo, SpriteDescription*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463d0, Thiscall, CCPartAnimSprite, tweenToFrame, cocos2d::CCSpriteFrame*, float)
		}
	};
}
