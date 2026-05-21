#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createBatched
		#define GEODE_STATICS_createBatched
		GEODE_AS_STATIC_FUNCTION(createBatched) 
	#endif

	#ifndef GEODE_STATICS_purgeCachedData
		#define GEODE_STATICS_purgeCachedData
		GEODE_AS_STATIC_FUNCTION(purgeCachedData) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_setCString
		#define GEODE_STATICS_setCString
		GEODE_AS_STATIC_FUNCTION(setCString) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_setAlignment
		#define GEODE_STATICS_setAlignment
		GEODE_AS_STATIC_FUNCTION(setAlignment) 
	#endif

	#ifndef GEODE_STATICS_setWidth
		#define GEODE_STATICS_setWidth
		GEODE_AS_STATIC_FUNCTION(setWidth) 
	#endif

	#ifndef GEODE_STATICS_setLineBreakWithoutSpace
		#define GEODE_STATICS_setLineBreakWithoutSpace
		GEODE_AS_STATIC_FUNCTION(setLineBreakWithoutSpace) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedColor
		#define GEODE_STATICS_getDisplayedColor
		GEODE_AS_STATIC_FUNCTION(getDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedOpacity
		#define GEODE_STATICS_getDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isCascadeColorEnabled
		#define GEODE_STATICS_isCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeColorEnabled
		#define GEODE_STATICS_setCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_isCascadeOpacityEnabled
		#define GEODE_STATICS_isCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeOpacityEnabled
		#define GEODE_STATICS_setCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_createFontChars
		#define GEODE_STATICS_createFontChars
		GEODE_AS_STATIC_FUNCTION(createFontChars) 
	#endif

	#ifndef GEODE_STATICS_getFntFile
		#define GEODE_STATICS_getFntFile
		GEODE_AS_STATIC_FUNCTION(getFntFile) 
	#endif

	#ifndef GEODE_STATICS_getLetterPosXLeft
		#define GEODE_STATICS_getLetterPosXLeft
		GEODE_AS_STATIC_FUNCTION(getLetterPosXLeft) 
	#endif

	#ifndef GEODE_STATICS_getLetterPosXRight
		#define GEODE_STATICS_getLetterPosXRight
		GEODE_AS_STATIC_FUNCTION(getLetterPosXRight) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_kerningAmountForFirst
		#define GEODE_STATICS_kerningAmountForFirst
		GEODE_AS_STATIC_FUNCTION(kerningAmountForFirst) 
	#endif

	#ifndef GEODE_STATICS_limitLabelWidth
		#define GEODE_STATICS_limitLabelWidth
		GEODE_AS_STATIC_FUNCTION(limitLabelWidth) 
	#endif

	#ifndef GEODE_STATICS_setFntFile
		#define GEODE_STATICS_setFntFile
		GEODE_AS_STATIC_FUNCTION(setFntFile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createBatched
		#define GEODE_CONCEPT_CHECK_createBatched
		GEODE_CONCEPT_FUNCTION_CHECK(createBatched) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeCachedData
		#define GEODE_CONCEPT_CHECK_purgeCachedData
		GEODE_CONCEPT_FUNCTION_CHECK(purgeCachedData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_setAnchorPoint
		#define GEODE_CONCEPT_CHECK_setAnchorPoint
		GEODE_CONCEPT_FUNCTION_CHECK(setAnchorPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCString
		#define GEODE_CONCEPT_CHECK_setCString
		GEODE_CONCEPT_FUNCTION_CHECK(setCString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabel
		#define GEODE_CONCEPT_CHECK_updateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAlignment
		#define GEODE_CONCEPT_CHECK_setAlignment
		GEODE_CONCEPT_FUNCTION_CHECK(setAlignment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWidth
		#define GEODE_CONCEPT_CHECK_setWidth
		GEODE_CONCEPT_FUNCTION_CHECK(setWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLineBreakWithoutSpace
		#define GEODE_CONCEPT_CHECK_setLineBreakWithoutSpace
		GEODE_CONCEPT_FUNCTION_CHECK(setLineBreakWithoutSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisplayedColor
		#define GEODE_CONCEPT_CHECK_getDisplayedColor
		GEODE_CONCEPT_FUNCTION_CHECK(getDisplayedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_getDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCascadeColorEnabled
		#define GEODE_CONCEPT_CHECK_isCascadeColorEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCascadeColorEnabled
		#define GEODE_CONCEPT_CHECK_setCascadeColorEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedColor
		#define GEODE_CONCEPT_CHECK_updateDisplayedColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCascadeOpacityEnabled
		#define GEODE_CONCEPT_CHECK_isCascadeOpacityEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCascadeOpacityEnabled
		#define GEODE_CONCEPT_CHECK_setCascadeOpacityEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFontChars
		#define GEODE_CONCEPT_CHECK_createFontChars
		GEODE_CONCEPT_FUNCTION_CHECK(createFontChars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFntFile
		#define GEODE_CONCEPT_CHECK_getFntFile
		GEODE_CONCEPT_FUNCTION_CHECK(getFntFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLetterPosXLeft
		#define GEODE_CONCEPT_CHECK_getLetterPosXLeft
		GEODE_CONCEPT_FUNCTION_CHECK(getLetterPosXLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLetterPosXRight
		#define GEODE_CONCEPT_CHECK_getLetterPosXRight
		GEODE_CONCEPT_FUNCTION_CHECK(getLetterPosXRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithString
		#define GEODE_CONCEPT_CHECK_initWithString
		GEODE_CONCEPT_FUNCTION_CHECK(initWithString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_kerningAmountForFirst
		#define GEODE_CONCEPT_CHECK_kerningAmountForFirst
		GEODE_CONCEPT_FUNCTION_CHECK(kerningAmountForFirst) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitLabelWidth
		#define GEODE_CONCEPT_CHECK_limitLabelWidth
		GEODE_CONCEPT_FUNCTION_CHECK(limitLabelWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFntFile
		#define GEODE_CONCEPT_CHECK_setFntFile
		GEODE_CONCEPT_FUNCTION_CHECK(setFntFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLabelBMFont> : ModifyBase<ModifyDerive<Der, cocos2d::CCLabelBMFont>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLabelBMFont>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLabelBMFont>>::ModifyBase;
		using Base = cocos2d::CCLabelBMFont;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCLabelBMFont@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCLabelBMFont, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCLabelBMFont@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCLabelBMFont)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::create)), Default, cocos2d::CCLabelBMFont, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCLabelBMFont::create)), Default, cocos2d::CCLabelBMFont, create, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float>::func(&cocos2d::CCLabelBMFont::create)), Default, cocos2d::CCLabelBMFont, create, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCTextAlignment>::func(&cocos2d::CCLabelBMFont::create)), Default, cocos2d::CCLabelBMFont, create, char const*, char const*, float, cocos2d::CCTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint>::func(&cocos2d::CCLabelBMFont::create)), Default, cocos2d::CCLabelBMFont, create, char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, cocos2d::CCArray*, int>::func(&cocos2d::CCLabelBMFont::createBatched)), Default, cocos2d::CCLabelBMFont, createBatched, char const*, char const*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::purgeCachedData)), Default, cocos2d::CCLabelBMFont, purgeCachedData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::init)), Thiscall, cocos2d::CCLabelBMFont, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCLabelBMFont::setScaleX)), Thiscall, cocos2d::CCLabelBMFont, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCLabelBMFont::setScaleY)), Thiscall, cocos2d::CCLabelBMFont, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCLabelBMFont::setScale)), Thiscall, cocos2d::CCLabelBMFont, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCLabelBMFont::setAnchorPoint)), Thiscall, cocos2d::CCLabelBMFont, setAnchorPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCLabelBMFont::setString)), Thiscall, cocos2d::CCLabelBMFont, setString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, bool>::func(&cocos2d::CCLabelBMFont::setString)), Thiscall, cocos2d::CCLabelBMFont, setString, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::getString)), Thiscall, cocos2d::CCLabelBMFont, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCLabelBMFont::setCString)), Thiscall, cocos2d::CCLabelBMFont, setCString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::updateLabel)), Thiscall, cocos2d::CCLabelBMFont, updateLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTextAlignment>::func(&cocos2d::CCLabelBMFont::setAlignment)), Thiscall, cocos2d::CCLabelBMFont, setAlignment, cocos2d::CCTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCLabelBMFont::setWidth)), Thiscall, cocos2d::CCLabelBMFont, setWidth, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLabelBMFont::setLineBreakWithoutSpace)), Thiscall, cocos2d::CCLabelBMFont, setLineBreakWithoutSpace, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned short*, bool>::func(&cocos2d::CCLabelBMFont::setString)), Thiscall, cocos2d::CCLabelBMFont, setString, unsigned short*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCLabelBMFont::setColor)), Thiscall, cocos2d::CCLabelBMFont, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::getColor)), Thiscall, cocos2d::CCLabelBMFont, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::getDisplayedColor)), Thiscall, cocos2d::CCLabelBMFont, getDisplayedColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::getDisplayedOpacity)), Thiscall, cocos2d::CCLabelBMFont, getDisplayedOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::getOpacity)), Thiscall, cocos2d::CCLabelBMFont, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCLabelBMFont::setOpacity)), Thiscall, cocos2d::CCLabelBMFont, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLabelBMFont::setOpacityModifyRGB)), Thiscall, cocos2d::CCLabelBMFont, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::isOpacityModifyRGB)), Thiscall, cocos2d::CCLabelBMFont, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::isCascadeColorEnabled)), Thiscall, cocos2d::CCLabelBMFont, isCascadeColorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLabelBMFont::setCascadeColorEnabled)), Thiscall, cocos2d::CCLabelBMFont, setCascadeColorEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCLabelBMFont::updateDisplayedColor)), Thiscall, cocos2d::CCLabelBMFont, updateDisplayedColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::isCascadeOpacityEnabled)), Thiscall, cocos2d::CCLabelBMFont, isCascadeOpacityEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLabelBMFont::setCascadeOpacityEnabled)), Thiscall, cocos2d::CCLabelBMFont, setCascadeOpacityEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCLabelBMFont::updateDisplayedOpacity)), Thiscall, cocos2d::CCLabelBMFont, updateDisplayedOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::createFontChars)), Thiscall, cocos2d::CCLabelBMFont, createFontChars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelBMFont::getFntFile)), Thiscall, cocos2d::CCLabelBMFont, getFntFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, float, bool>::func(&cocos2d::CCLabelBMFont::getLetterPosXLeft)), Thiscall, cocos2d::CCLabelBMFont, getLetterPosXLeft, cocos2d::CCSprite*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, float, bool>::func(&cocos2d::CCLabelBMFont::getLetterPosXRight)), Thiscall, cocos2d::CCLabelBMFont, getLetterPosXRight, cocos2d::CCSprite*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint>::func(&cocos2d::CCLabelBMFont::initWithString)), Thiscall, cocos2d::CCLabelBMFont, initWithString, char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned short, unsigned short>::func(&cocos2d::CCLabelBMFont::kerningAmountForFirst)), Thiscall, cocos2d::CCLabelBMFont, kerningAmountForFirst, unsigned short, unsigned short)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&cocos2d::CCLabelBMFont::limitLabelWidth)), Thiscall, cocos2d::CCLabelBMFont, limitLabelWidth, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCLabelBMFont::setFntFile)), Thiscall, cocos2d::CCLabelBMFont, setFntFile, char const*)
		}
	};
}
