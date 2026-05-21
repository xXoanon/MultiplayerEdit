#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_needsLayout
		#define GEODE_STATICS_needsLayout
		GEODE_AS_STATIC_FUNCTION(needsLayout) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_setSelected
		#define GEODE_STATICS_setSelected
		GEODE_AS_STATIC_FUNCTION(setSelected) 
	#endif

	#ifndef GEODE_STATICS_setHighlighted
		#define GEODE_STATICS_setHighlighted
		GEODE_AS_STATIC_FUNCTION(setHighlighted) 
	#endif

	#ifndef GEODE_STATICS_getPreferredSize
		#define GEODE_STATICS_getPreferredSize
		GEODE_AS_STATIC_FUNCTION(getPreferredSize) 
	#endif

	#ifndef GEODE_STATICS_setPreferredSize
		#define GEODE_STATICS_setPreferredSize
		GEODE_AS_STATIC_FUNCTION(setPreferredSize) 
	#endif

	#ifndef GEODE_STATICS_getZoomOnTouchDown
		#define GEODE_STATICS_getZoomOnTouchDown
		GEODE_AS_STATIC_FUNCTION(getZoomOnTouchDown) 
	#endif

	#ifndef GEODE_STATICS_setZoomOnTouchDown
		#define GEODE_STATICS_setZoomOnTouchDown
		GEODE_AS_STATIC_FUNCTION(setZoomOnTouchDown) 
	#endif

	#ifndef GEODE_STATICS_getLabelAnchorPoint
		#define GEODE_STATICS_getLabelAnchorPoint
		GEODE_AS_STATIC_FUNCTION(getLabelAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_setLabelAnchorPoint
		#define GEODE_STATICS_setLabelAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setLabelAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setMargins
		#define GEODE_STATICS_setMargins
		GEODE_AS_STATIC_FUNCTION(setMargins) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithLabelAndBackgroundSprite
		#define GEODE_STATICS_initWithLabelAndBackgroundSprite
		GEODE_AS_STATIC_FUNCTION(initWithLabelAndBackgroundSprite) 
	#endif

	#ifndef GEODE_STATICS_initWithTitleAndFontNameAndFontSize
		#define GEODE_STATICS_initWithTitleAndFontNameAndFontSize
		GEODE_AS_STATIC_FUNCTION(initWithTitleAndFontNameAndFontSize) 
	#endif

	#ifndef GEODE_STATICS_initWithBackgroundSprite
		#define GEODE_STATICS_initWithBackgroundSprite
		GEODE_AS_STATIC_FUNCTION(initWithBackgroundSprite) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_getTitleForState
		#define GEODE_STATICS_getTitleForState
		GEODE_AS_STATIC_FUNCTION(getTitleForState) 
	#endif

	#ifndef GEODE_STATICS_setTitleForState
		#define GEODE_STATICS_setTitleForState
		GEODE_AS_STATIC_FUNCTION(setTitleForState) 
	#endif

	#ifndef GEODE_STATICS_getTitleColorForState
		#define GEODE_STATICS_getTitleColorForState
		GEODE_AS_STATIC_FUNCTION(getTitleColorForState) 
	#endif

	#ifndef GEODE_STATICS_setTitleColorForState
		#define GEODE_STATICS_setTitleColorForState
		GEODE_AS_STATIC_FUNCTION(setTitleColorForState) 
	#endif

	#ifndef GEODE_STATICS_getTitleLabelForState
		#define GEODE_STATICS_getTitleLabelForState
		GEODE_AS_STATIC_FUNCTION(getTitleLabelForState) 
	#endif

	#ifndef GEODE_STATICS_setTitleLabelForState
		#define GEODE_STATICS_setTitleLabelForState
		GEODE_AS_STATIC_FUNCTION(setTitleLabelForState) 
	#endif

	#ifndef GEODE_STATICS_setTitleTTFForState
		#define GEODE_STATICS_setTitleTTFForState
		GEODE_AS_STATIC_FUNCTION(setTitleTTFForState) 
	#endif

	#ifndef GEODE_STATICS_getTitleTTFForState
		#define GEODE_STATICS_getTitleTTFForState
		GEODE_AS_STATIC_FUNCTION(getTitleTTFForState) 
	#endif

	#ifndef GEODE_STATICS_setTitleTTFSizeForState
		#define GEODE_STATICS_setTitleTTFSizeForState
		GEODE_AS_STATIC_FUNCTION(setTitleTTFSizeForState) 
	#endif

	#ifndef GEODE_STATICS_getTitleTTFSizeForState
		#define GEODE_STATICS_getTitleTTFSizeForState
		GEODE_AS_STATIC_FUNCTION(getTitleTTFSizeForState) 
	#endif

	#ifndef GEODE_STATICS_setTitleBMFontForState
		#define GEODE_STATICS_setTitleBMFontForState
		GEODE_AS_STATIC_FUNCTION(setTitleBMFontForState) 
	#endif

	#ifndef GEODE_STATICS_getTitleBMFontForState
		#define GEODE_STATICS_getTitleBMFontForState
		GEODE_AS_STATIC_FUNCTION(getTitleBMFontForState) 
	#endif

	#ifndef GEODE_STATICS_getBackgroundSpriteForState
		#define GEODE_STATICS_getBackgroundSpriteForState
		GEODE_AS_STATIC_FUNCTION(getBackgroundSpriteForState) 
	#endif

	#ifndef GEODE_STATICS_setBackgroundSpriteForState
		#define GEODE_STATICS_setBackgroundSpriteForState
		GEODE_AS_STATIC_FUNCTION(setBackgroundSpriteForState) 
	#endif

	#ifndef GEODE_STATICS_setBackgroundSpriteFrameForState
		#define GEODE_STATICS_setBackgroundSpriteFrameForState
		GEODE_AS_STATIC_FUNCTION(setBackgroundSpriteFrameForState) 
	#endif

	#ifndef GEODE_STATICS_doesAdjustBackgroundImage
		#define GEODE_STATICS_doesAdjustBackgroundImage
		GEODE_AS_STATIC_FUNCTION(doesAdjustBackgroundImage) 
	#endif

	#ifndef GEODE_STATICS_setAdjustBackgroundImage
		#define GEODE_STATICS_setAdjustBackgroundImage
		GEODE_AS_STATIC_FUNCTION(setAdjustBackgroundImage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_needsLayout
		#define GEODE_CONCEPT_CHECK_needsLayout
		GEODE_CONCEPT_FUNCTION_CHECK(needsLayout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSelected
		#define GEODE_CONCEPT_CHECK_setSelected
		GEODE_CONCEPT_FUNCTION_CHECK(setSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHighlighted
		#define GEODE_CONCEPT_CHECK_setHighlighted
		GEODE_CONCEPT_FUNCTION_CHECK(setHighlighted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPreferredSize
		#define GEODE_CONCEPT_CHECK_getPreferredSize
		GEODE_CONCEPT_FUNCTION_CHECK(getPreferredSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPreferredSize
		#define GEODE_CONCEPT_CHECK_setPreferredSize
		GEODE_CONCEPT_FUNCTION_CHECK(setPreferredSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getZoomOnTouchDown
		#define GEODE_CONCEPT_CHECK_getZoomOnTouchDown
		GEODE_CONCEPT_FUNCTION_CHECK(getZoomOnTouchDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setZoomOnTouchDown
		#define GEODE_CONCEPT_CHECK_setZoomOnTouchDown
		GEODE_CONCEPT_FUNCTION_CHECK(setZoomOnTouchDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLabelAnchorPoint
		#define GEODE_CONCEPT_CHECK_getLabelAnchorPoint
		GEODE_CONCEPT_FUNCTION_CHECK(getLabelAnchorPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelAnchorPoint
		#define GEODE_CONCEPT_CHECK_setLabelAnchorPoint
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelAnchorPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMargins
		#define GEODE_CONCEPT_CHECK_setMargins
		GEODE_CONCEPT_FUNCTION_CHECK(setMargins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithLabelAndBackgroundSprite
		#define GEODE_CONCEPT_CHECK_initWithLabelAndBackgroundSprite
		GEODE_CONCEPT_FUNCTION_CHECK(initWithLabelAndBackgroundSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTitleAndFontNameAndFontSize
		#define GEODE_CONCEPT_CHECK_initWithTitleAndFontNameAndFontSize
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTitleAndFontNameAndFontSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithBackgroundSprite
		#define GEODE_CONCEPT_CHECK_initWithBackgroundSprite
		GEODE_CONCEPT_FUNCTION_CHECK(initWithBackgroundSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTitleForState
		#define GEODE_CONCEPT_CHECK_getTitleForState
		GEODE_CONCEPT_FUNCTION_CHECK(getTitleForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTitleForState
		#define GEODE_CONCEPT_CHECK_setTitleForState
		GEODE_CONCEPT_FUNCTION_CHECK(setTitleForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTitleColorForState
		#define GEODE_CONCEPT_CHECK_getTitleColorForState
		GEODE_CONCEPT_FUNCTION_CHECK(getTitleColorForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTitleColorForState
		#define GEODE_CONCEPT_CHECK_setTitleColorForState
		GEODE_CONCEPT_FUNCTION_CHECK(setTitleColorForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTitleLabelForState
		#define GEODE_CONCEPT_CHECK_getTitleLabelForState
		GEODE_CONCEPT_FUNCTION_CHECK(getTitleLabelForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTitleLabelForState
		#define GEODE_CONCEPT_CHECK_setTitleLabelForState
		GEODE_CONCEPT_FUNCTION_CHECK(setTitleLabelForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTitleTTFForState
		#define GEODE_CONCEPT_CHECK_setTitleTTFForState
		GEODE_CONCEPT_FUNCTION_CHECK(setTitleTTFForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTitleTTFForState
		#define GEODE_CONCEPT_CHECK_getTitleTTFForState
		GEODE_CONCEPT_FUNCTION_CHECK(getTitleTTFForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTitleTTFSizeForState
		#define GEODE_CONCEPT_CHECK_setTitleTTFSizeForState
		GEODE_CONCEPT_FUNCTION_CHECK(setTitleTTFSizeForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTitleTTFSizeForState
		#define GEODE_CONCEPT_CHECK_getTitleTTFSizeForState
		GEODE_CONCEPT_FUNCTION_CHECK(getTitleTTFSizeForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTitleBMFontForState
		#define GEODE_CONCEPT_CHECK_setTitleBMFontForState
		GEODE_CONCEPT_FUNCTION_CHECK(setTitleBMFontForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTitleBMFontForState
		#define GEODE_CONCEPT_CHECK_getTitleBMFontForState
		GEODE_CONCEPT_FUNCTION_CHECK(getTitleBMFontForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackgroundSpriteForState
		#define GEODE_CONCEPT_CHECK_getBackgroundSpriteForState
		GEODE_CONCEPT_FUNCTION_CHECK(getBackgroundSpriteForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackgroundSpriteForState
		#define GEODE_CONCEPT_CHECK_setBackgroundSpriteForState
		GEODE_CONCEPT_FUNCTION_CHECK(setBackgroundSpriteForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackgroundSpriteFrameForState
		#define GEODE_CONCEPT_CHECK_setBackgroundSpriteFrameForState
		GEODE_CONCEPT_FUNCTION_CHECK(setBackgroundSpriteFrameForState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doesAdjustBackgroundImage
		#define GEODE_CONCEPT_CHECK_doesAdjustBackgroundImage
		GEODE_CONCEPT_FUNCTION_CHECK(doesAdjustBackgroundImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAdjustBackgroundImage
		#define GEODE_CONCEPT_CHECK_setAdjustBackgroundImage
		GEODE_CONCEPT_FUNCTION_CHECK(setAdjustBackgroundImage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControlButton> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlButton>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlButton>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlButton>>::ModifyBase;
		using Base = cocos2d::extension::CCControlButton;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCControlButton@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCControlButton, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCControlButton@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCControlButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::create)), Default, cocos2d::extension::CCControlButton, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCScale9Sprite*>::func(&cocos2d::extension::CCControlButton::create)), Default, cocos2d::extension::CCControlButton, create, cocos2d::extension::CCScale9Sprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*>::func(&cocos2d::extension::CCControlButton::create)), Default, cocos2d::extension::CCControlButton, create, cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string, char const*, float>::func(&cocos2d::extension::CCControlButton::create)), Default, cocos2d::extension::CCControlButton, create, gd::string, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::needsLayout)), Thiscall, cocos2d::extension::CCControlButton, needsLayout, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlButton::setEnabled)), Thiscall, cocos2d::extension::CCControlButton, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlButton::setSelected)), Thiscall, cocos2d::extension::CCControlButton, setSelected, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlButton::setHighlighted)), Thiscall, cocos2d::extension::CCControlButton, setHighlighted, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::getPreferredSize)), Thiscall, cocos2d::extension::CCControlButton, getPreferredSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize>::func(&cocos2d::extension::CCControlButton::setPreferredSize)), Thiscall, cocos2d::extension::CCControlButton, setPreferredSize, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::getZoomOnTouchDown)), Thiscall, cocos2d::extension::CCControlButton, getZoomOnTouchDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlButton::setZoomOnTouchDown)), Thiscall, cocos2d::extension::CCControlButton, setZoomOnTouchDown, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::getLabelAnchorPoint)), Thiscall, cocos2d::extension::CCControlButton, getLabelAnchorPoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCControlButton::setLabelAnchorPoint)), Thiscall, cocos2d::extension::CCControlButton, setLabelAnchorPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::getOpacity)), Thiscall, cocos2d::extension::CCControlButton, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::extension::CCControlButton::setOpacity)), Thiscall, cocos2d::extension::CCControlButton, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::getColor)), Thiscall, cocos2d::extension::CCControlButton, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::extension::CCControlButton::setColor)), Thiscall, cocos2d::extension::CCControlButton, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int>::func(&cocos2d::extension::CCControlButton::setMargins)), Thiscall, cocos2d::extension::CCControlButton, setMargins, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::init)), Thiscall, cocos2d::extension::CCControlButton, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*>::func(&cocos2d::extension::CCControlButton::initWithLabelAndBackgroundSprite)), Thiscall, cocos2d::extension::CCControlButton, initWithLabelAndBackgroundSprite, cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string, char const*, float>::func(&cocos2d::extension::CCControlButton::initWithTitleAndFontNameAndFontSize)), Thiscall, cocos2d::extension::CCControlButton, initWithTitleAndFontNameAndFontSize, gd::string, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::extension::CCScale9Sprite*>::func(&cocos2d::extension::CCControlButton::initWithBackgroundSprite)), Thiscall, cocos2d::extension::CCControlButton, initWithBackgroundSprite, cocos2d::extension::CCScale9Sprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlButton::ccTouchBegan)), Thiscall, cocos2d::extension::CCControlButton, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlButton::ccTouchMoved)), Thiscall, cocos2d::extension::CCControlButton, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlButton::ccTouchEnded)), Thiscall, cocos2d::extension::CCControlButton, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlButton::ccTouchCancelled)), Thiscall, cocos2d::extension::CCControlButton, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControlButton::getTitleForState)), Thiscall, cocos2d::extension::CCControlButton, getTitleForState, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCString*, unsigned int>::func(&cocos2d::extension::CCControlButton::setTitleForState)), Thiscall, cocos2d::extension::CCControlButton, setTitleForState, cocos2d::CCString*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControlButton::getTitleColorForState)), Thiscall, cocos2d::extension::CCControlButton, getTitleColorForState, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B, unsigned int>::func(&cocos2d::extension::CCControlButton::setTitleColorForState)), Thiscall, cocos2d::extension::CCControlButton, setTitleColorForState, cocos2d::ccColor3B, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControlButton::getTitleLabelForState)), Thiscall, cocos2d::extension::CCControlButton, getTitleLabelForState, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, unsigned int>::func(&cocos2d::extension::CCControlButton::setTitleLabelForState)), Thiscall, cocos2d::extension::CCControlButton, setTitleLabelForState, cocos2d::CCNode*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, unsigned int>::func(&cocos2d::extension::CCControlButton::setTitleTTFForState)), Thiscall, cocos2d::extension::CCControlButton, setTitleTTFForState, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControlButton::getTitleTTFForState)), Thiscall, cocos2d::extension::CCControlButton, getTitleTTFForState, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, unsigned int>::func(&cocos2d::extension::CCControlButton::setTitleTTFSizeForState)), Thiscall, cocos2d::extension::CCControlButton, setTitleTTFSizeForState, float, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControlButton::getTitleTTFSizeForState)), Thiscall, cocos2d::extension::CCControlButton, getTitleTTFSizeForState, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, unsigned int>::func(&cocos2d::extension::CCControlButton::setTitleBMFontForState)), Thiscall, cocos2d::extension::CCControlButton, setTitleBMFontForState, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControlButton::getTitleBMFontForState)), Thiscall, cocos2d::extension::CCControlButton, getTitleBMFontForState, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCControlButton::getBackgroundSpriteForState)), Thiscall, cocos2d::extension::CCControlButton, getBackgroundSpriteForState, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::extension::CCScale9Sprite*, unsigned int>::func(&cocos2d::extension::CCControlButton::setBackgroundSpriteForState)), Thiscall, cocos2d::extension::CCControlButton, setBackgroundSpriteForState, cocos2d::extension::CCScale9Sprite*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*, unsigned int>::func(&cocos2d::extension::CCControlButton::setBackgroundSpriteFrameForState)), Thiscall, cocos2d::extension::CCControlButton, setBackgroundSpriteFrameForState, cocos2d::CCSpriteFrame*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCControlButton::doesAdjustBackgroundImage)), Thiscall, cocos2d::extension::CCControlButton, doesAdjustBackgroundImage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::extension::CCControlButton::setAdjustBackgroundImage)), Thiscall, cocos2d::extension::CCControlButton, setAdjustBackgroundImage, bool)
		}
	};
}
