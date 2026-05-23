#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCPartAnimSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithAnimDesc
		#define GEODE_STATICS_createWithAnimDesc
		GEODE_AS_STATIC_FUNCTION(createWithAnimDesc) 
	#endif

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

	#ifndef GEODE_STATICS_changeTextureOfID
		#define GEODE_STATICS_changeTextureOfID
		GEODE_AS_STATIC_FUNCTION(changeTextureOfID) 
	#endif

	#ifndef GEODE_STATICS_countParts
		#define GEODE_STATICS_countParts
		GEODE_AS_STATIC_FUNCTION(countParts) 
	#endif

	#ifndef GEODE_STATICS_dirtify
		#define GEODE_STATICS_dirtify
		GEODE_AS_STATIC_FUNCTION(dirtify) 
	#endif

	#ifndef GEODE_STATICS_getSpriteForKey
		#define GEODE_STATICS_getSpriteForKey
		GEODE_AS_STATIC_FUNCTION(getSpriteForKey) 
	#endif

	#ifndef GEODE_STATICS_initWithAnimDesc
		#define GEODE_STATICS_initWithAnimDesc
		GEODE_AS_STATIC_FUNCTION(initWithAnimDesc) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_transformSprite
		#define GEODE_STATICS_transformSprite
		GEODE_AS_STATIC_FUNCTION(transformSprite) 
	#endif

	#ifndef GEODE_STATICS_tweenSpriteTo
		#define GEODE_STATICS_tweenSpriteTo
		GEODE_AS_STATIC_FUNCTION(tweenSpriteTo) 
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

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CCPartAnimSpriteD2Ev")), Default, CCPartAnimSprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCTexture2D*, bool>::func(&CCPartAnimSprite::createWithAnimDesc)), Default, CCPartAnimSprite, createWithAnimDesc, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&CCPartAnimSprite::setScaleX)), Default, CCPartAnimSprite, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&CCPartAnimSprite::setScaleY)), Default, CCPartAnimSprite, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&CCPartAnimSprite::setScale)), Default, CCPartAnimSprite, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&CCPartAnimSprite::setOpacity)), Default, CCPartAnimSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccBlendFunc>::func(&CCPartAnimSprite::setBlendFunc)), Default, CCPartAnimSprite, setBlendFunc, cocos2d::ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&CCPartAnimSprite::setDisplayFrame)), Default, CCPartAnimSprite, setDisplayFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&CCPartAnimSprite::isFrameDisplayed)), Default, CCPartAnimSprite, isFrameDisplayed, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCPartAnimSprite::displayFrame)), Default, CCPartAnimSprite, displayFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&CCPartAnimSprite::changeTextureOfID)), Default, CCPartAnimSprite, changeTextureOfID, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCPartAnimSprite::countParts)), Default, CCPartAnimSprite, countParts, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCPartAnimSprite::dirtify)), Default, CCPartAnimSprite, dirtify, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&CCPartAnimSprite::getSpriteForKey)), Default, CCPartAnimSprite, getSpriteForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCTexture2D*, bool>::func(&CCPartAnimSprite::initWithAnimDesc)), Default, CCPartAnimSprite, initWithAnimDesc, char const*, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&CCPartAnimSprite::setColor)), Default, CCPartAnimSprite, setColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&CCPartAnimSprite::setFlipX)), Default, CCPartAnimSprite, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&CCPartAnimSprite::setFlipY)), Default, CCPartAnimSprite, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SpriteDescription*>::func(&CCPartAnimSprite::transformSprite)), Default, CCPartAnimSprite, transformSprite, SpriteDescription*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SpriteDescription*, float>::func(&CCPartAnimSprite::tweenSpriteTo)), Default, CCPartAnimSprite, tweenSpriteTo, SpriteDescription*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*, float>::func(&CCPartAnimSprite::tweenToFrame)), Default, CCPartAnimSprite, tweenToFrame, cocos2d::CCSpriteFrame*, float)
		}
	};
}
