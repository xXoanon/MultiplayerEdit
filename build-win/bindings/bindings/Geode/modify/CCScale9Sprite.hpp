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

	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setContentSize
		#define GEODE_STATICS_setContentSize
		GEODE_AS_STATIC_FUNCTION(setContentSize) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_getPreferredSize
		#define GEODE_STATICS_getPreferredSize
		GEODE_AS_STATIC_FUNCTION(getPreferredSize) 
	#endif

	#ifndef GEODE_STATICS_setPreferredSize
		#define GEODE_STATICS_setPreferredSize
		GEODE_AS_STATIC_FUNCTION(setPreferredSize) 
	#endif

	#ifndef GEODE_STATICS_getCapInsets
		#define GEODE_STATICS_getCapInsets
		GEODE_AS_STATIC_FUNCTION(getCapInsets) 
	#endif

	#ifndef GEODE_STATICS_setCapInsets
		#define GEODE_STATICS_setCapInsets
		GEODE_AS_STATIC_FUNCTION(setCapInsets) 
	#endif

	#ifndef GEODE_STATICS_getInsetLeft
		#define GEODE_STATICS_getInsetLeft
		GEODE_AS_STATIC_FUNCTION(getInsetLeft) 
	#endif

	#ifndef GEODE_STATICS_setInsetLeft
		#define GEODE_STATICS_setInsetLeft
		GEODE_AS_STATIC_FUNCTION(setInsetLeft) 
	#endif

	#ifndef GEODE_STATICS_getInsetTop
		#define GEODE_STATICS_getInsetTop
		GEODE_AS_STATIC_FUNCTION(getInsetTop) 
	#endif

	#ifndef GEODE_STATICS_setInsetTop
		#define GEODE_STATICS_setInsetTop
		GEODE_AS_STATIC_FUNCTION(setInsetTop) 
	#endif

	#ifndef GEODE_STATICS_getInsetRight
		#define GEODE_STATICS_getInsetRight
		GEODE_AS_STATIC_FUNCTION(getInsetRight) 
	#endif

	#ifndef GEODE_STATICS_setInsetRight
		#define GEODE_STATICS_setInsetRight
		GEODE_AS_STATIC_FUNCTION(setInsetRight) 
	#endif

	#ifndef GEODE_STATICS_getInsetBottom
		#define GEODE_STATICS_getInsetBottom
		GEODE_AS_STATIC_FUNCTION(getInsetBottom) 
	#endif

	#ifndef GEODE_STATICS_setInsetBottom
		#define GEODE_STATICS_setInsetBottom
		GEODE_AS_STATIC_FUNCTION(setInsetBottom) 
	#endif

	#ifndef GEODE_STATICS_initWithBatchNode
		#define GEODE_STATICS_initWithBatchNode
		GEODE_AS_STATIC_FUNCTION(initWithBatchNode) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrameName
		#define GEODE_STATICS_initWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_updateWithBatchNode
		#define GEODE_STATICS_updateWithBatchNode
		GEODE_AS_STATIC_FUNCTION(updateWithBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setSpriteFrame
		#define GEODE_STATICS_setSpriteFrame
		GEODE_AS_STATIC_FUNCTION(setSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_resizableSpriteWithCapInsets
		#define GEODE_STATICS_resizableSpriteWithCapInsets
		GEODE_AS_STATIC_FUNCTION(resizableSpriteWithCapInsets) 
	#endif

	#ifndef GEODE_STATICS_setBlendAdditive
		#define GEODE_STATICS_setBlendAdditive
		GEODE_AS_STATIC_FUNCTION(setBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_updateCapInset
		#define GEODE_STATICS_updateCapInset
		GEODE_AS_STATIC_FUNCTION(updateCapInset) 
	#endif

	#ifndef GEODE_STATICS_updatePositions
		#define GEODE_STATICS_updatePositions
		GEODE_AS_STATIC_FUNCTION(updatePositions) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentSize
		#define GEODE_CONCEPT_CHECK_setContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(setContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedColor
		#define GEODE_CONCEPT_CHECK_updateDisplayedColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPreferredSize
		#define GEODE_CONCEPT_CHECK_getPreferredSize
		GEODE_CONCEPT_FUNCTION_CHECK(getPreferredSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPreferredSize
		#define GEODE_CONCEPT_CHECK_setPreferredSize
		GEODE_CONCEPT_FUNCTION_CHECK(setPreferredSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCapInsets
		#define GEODE_CONCEPT_CHECK_getCapInsets
		GEODE_CONCEPT_FUNCTION_CHECK(getCapInsets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCapInsets
		#define GEODE_CONCEPT_CHECK_setCapInsets
		GEODE_CONCEPT_FUNCTION_CHECK(setCapInsets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInsetLeft
		#define GEODE_CONCEPT_CHECK_getInsetLeft
		GEODE_CONCEPT_FUNCTION_CHECK(getInsetLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInsetLeft
		#define GEODE_CONCEPT_CHECK_setInsetLeft
		GEODE_CONCEPT_FUNCTION_CHECK(setInsetLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInsetTop
		#define GEODE_CONCEPT_CHECK_getInsetTop
		GEODE_CONCEPT_FUNCTION_CHECK(getInsetTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInsetTop
		#define GEODE_CONCEPT_CHECK_setInsetTop
		GEODE_CONCEPT_FUNCTION_CHECK(setInsetTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInsetRight
		#define GEODE_CONCEPT_CHECK_getInsetRight
		GEODE_CONCEPT_FUNCTION_CHECK(getInsetRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInsetRight
		#define GEODE_CONCEPT_CHECK_setInsetRight
		GEODE_CONCEPT_FUNCTION_CHECK(setInsetRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInsetBottom
		#define GEODE_CONCEPT_CHECK_getInsetBottom
		GEODE_CONCEPT_FUNCTION_CHECK(getInsetBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInsetBottom
		#define GEODE_CONCEPT_CHECK_setInsetBottom
		GEODE_CONCEPT_FUNCTION_CHECK(setInsetBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithBatchNode
		#define GEODE_CONCEPT_CHECK_initWithBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(initWithBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFile
		#define GEODE_CONCEPT_CHECK_initWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateWithBatchNode
		#define GEODE_CONCEPT_CHECK_updateWithBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(updateWithBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpriteFrame
		#define GEODE_CONCEPT_CHECK_setSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resizableSpriteWithCapInsets
		#define GEODE_CONCEPT_CHECK_resizableSpriteWithCapInsets
		GEODE_CONCEPT_FUNCTION_CHECK(resizableSpriteWithCapInsets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendAdditive
		#define GEODE_CONCEPT_CHECK_setBlendAdditive
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendAdditive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCapInset
		#define GEODE_CONCEPT_CHECK_updateCapInset
		GEODE_CONCEPT_FUNCTION_CHECK(updateCapInset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePositions
		#define GEODE_CONCEPT_CHECK_updatePositions
		GEODE_CONCEPT_FUNCTION_CHECK(updatePositions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCScale9Sprite> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScale9Sprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScale9Sprite>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScale9Sprite>>::ModifyBase;
		using Base = cocos2d::extension::CCScale9Sprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCScale9Sprite@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCScale9Sprite, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCScale9Sprite@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCScale9Sprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::create)), Default, cocos2d::extension::CCScale9Sprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::extension::CCScale9Sprite::create)), Default, cocos2d::extension::CCScale9Sprite, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::create)), Default, cocos2d::extension::CCScale9Sprite, create, char const*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect, char const*>::func(&cocos2d::extension::CCScale9Sprite::create)), Default, cocos2d::extension::CCScale9Sprite, create, cocos2d::CCRect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::create)), Default, cocos2d::extension::CCScale9Sprite, create, char const*, cocos2d::CCRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::extension::CCScale9Sprite::createWithSpriteFrame)), Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::createWithSpriteFrame)), Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrame, cocos2d::CCSpriteFrame*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::extension::CCScale9Sprite::createWithSpriteFrameName)), Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::createWithSpriteFrameName)), Default, cocos2d::extension::CCScale9Sprite, createWithSpriteFrameName, char const*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::init)), Thiscall, cocos2d::extension::CCScale9Sprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const cocos2d::CCSize&>::func(&cocos2d::extension::CCScale9Sprite::setContentSize)), Thiscall, cocos2d::extension::CCScale9Sprite, setContentSize, const cocos2d::CCSize&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::visit)), Thiscall, cocos2d::extension::CCScale9Sprite, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getOpacity)), Thiscall, cocos2d::extension::CCScale9Sprite, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::extension::CCScale9Sprite::setOpacity)), Thiscall, cocos2d::extension::CCScale9Sprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity)), Thiscall, cocos2d::extension::CCScale9Sprite, updateDisplayedOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getColor)), Thiscall, cocos2d::extension::CCScale9Sprite, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const cocos2d::ccColor3B&>::func(&cocos2d::extension::CCScale9Sprite::setColor)), Thiscall, cocos2d::extension::CCScale9Sprite, setColor, const cocos2d::ccColor3B&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const cocos2d::ccColor3B&>::func(&cocos2d::extension::CCScale9Sprite::updateDisplayedColor)), Thiscall, cocos2d::extension::CCScale9Sprite, updateDisplayedColor, const cocos2d::ccColor3B&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB)), Thiscall, cocos2d::extension::CCScale9Sprite, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB)), Thiscall, cocos2d::extension::CCScale9Sprite, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getPreferredSize)), Thiscall, cocos2d::extension::CCScale9Sprite, getPreferredSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize>::func(&cocos2d::extension::CCScale9Sprite::setPreferredSize)), Thiscall, cocos2d::extension::CCScale9Sprite, setPreferredSize, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getCapInsets)), Thiscall, cocos2d::extension::CCScale9Sprite, getCapInsets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::setCapInsets)), Thiscall, cocos2d::extension::CCScale9Sprite, setCapInsets, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getInsetLeft)), Thiscall, cocos2d::extension::CCScale9Sprite, getInsetLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::extension::CCScale9Sprite::setInsetLeft)), Thiscall, cocos2d::extension::CCScale9Sprite, setInsetLeft, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getInsetTop)), Thiscall, cocos2d::extension::CCScale9Sprite, getInsetTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::extension::CCScale9Sprite::setInsetTop)), Thiscall, cocos2d::extension::CCScale9Sprite, setInsetTop, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getInsetRight)), Thiscall, cocos2d::extension::CCScale9Sprite, getInsetRight, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::extension::CCScale9Sprite::setInsetRight)), Thiscall, cocos2d::extension::CCScale9Sprite, setInsetRight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::getInsetBottom)), Thiscall, cocos2d::extension::CCScale9Sprite, getInsetBottom, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::extension::CCScale9Sprite::setInsetBottom)), Thiscall, cocos2d::extension::CCScale9Sprite, setInsetBottom, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::initWithBatchNode)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithBatchNode, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::initWithBatchNode)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithBatchNode, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*, cocos2d::CCRect, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::initWithFile)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile, const char*, cocos2d::CCRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::initWithFile)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile, const char*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect, const char*>::func(&cocos2d::extension::CCScale9Sprite::initWithFile)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile, cocos2d::CCRect, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*>::func(&cocos2d::extension::CCScale9Sprite::initWithFile)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::initWithSpriteFrame)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame, cocos2d::CCSpriteFrame*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::extension::CCScale9Sprite::initWithSpriteFrame)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName, const char*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<const char*>::func(&cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName)), Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName, const char*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::updateWithBatchNode)), Thiscall, cocos2d::extension::CCScale9Sprite, updateWithBatchNode, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::extension::CCScale9Sprite::setSpriteFrame)), Thiscall, cocos2d::extension::CCScale9Sprite, setSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect>::func(&cocos2d::extension::CCScale9Sprite::resizableSpriteWithCapInsets)), Thiscall, cocos2d::extension::CCScale9Sprite, resizableSpriteWithCapInsets, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::extension::CCScale9Sprite::setBlendAdditive)), Thiscall, cocos2d::extension::CCScale9Sprite, setBlendAdditive, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::updateCapInset)), Thiscall, cocos2d::extension::CCScale9Sprite, updateCapInset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScale9Sprite::updatePositions)), Thiscall, cocos2d::extension::CCScale9Sprite, updatePositions, )
		}
	};
}
