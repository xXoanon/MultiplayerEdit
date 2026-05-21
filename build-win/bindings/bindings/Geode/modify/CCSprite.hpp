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

	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setVertexZ
		#define GEODE_STATICS_setVertexZ
		GEODE_AS_STATIC_FUNCTION(setVertexZ) 
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

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setSkewX
		#define GEODE_STATICS_setSkewX
		GEODE_AS_STATIC_FUNCTION(setSkewX) 
	#endif

	#ifndef GEODE_STATICS_setSkewY
		#define GEODE_STATICS_setSkewY
		GEODE_AS_STATIC_FUNCTION(setSkewY) 
	#endif

	#ifndef GEODE_STATICS_setAnchorPoint
		#define GEODE_STATICS_setAnchorPoint
		GEODE_AS_STATIC_FUNCTION(setAnchorPoint) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_ignoreAnchorPointForPosition
		#define GEODE_STATICS_ignoreAnchorPointForPosition
		GEODE_AS_STATIC_FUNCTION(ignoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildrenWithCleanup
		#define GEODE_STATICS_removeAllChildrenWithCleanup
		GEODE_AS_STATIC_FUNCTION(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_STATICS_reorderChild
		#define GEODE_STATICS_reorderChild
		GEODE_AS_STATIC_FUNCTION(reorderChild) 
	#endif

	#ifndef GEODE_STATICS_sortAllChildren
		#define GEODE_STATICS_sortAllChildren
		GEODE_AS_STATIC_FUNCTION(sortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTransform
		#define GEODE_STATICS_updateTransform
		GEODE_AS_STATIC_FUNCTION(updateTransform) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrameName
		#define GEODE_STATICS_initWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_setChildOpacity
		#define GEODE_STATICS_setChildOpacity
		GEODE_AS_STATIC_FUNCTION(setChildOpacity) 
	#endif

	#ifndef GEODE_STATICS_getBatchNode
		#define GEODE_STATICS_getBatchNode
		GEODE_AS_STATIC_FUNCTION(getBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setBatchNode
		#define GEODE_STATICS_setBatchNode
		GEODE_AS_STATIC_FUNCTION(setBatchNode) 
	#endif

	#ifndef GEODE_STATICS_refreshTextureRect
		#define GEODE_STATICS_refreshTextureRect
		GEODE_AS_STATIC_FUNCTION(refreshTextureRect) 
	#endif

	#ifndef GEODE_STATICS_setTextureRect
		#define GEODE_STATICS_setTextureRect
		GEODE_AS_STATIC_FUNCTION(setTextureRect) 
	#endif

	#ifndef GEODE_STATICS_setVertexRect
		#define GEODE_STATICS_setVertexRect
		GEODE_AS_STATIC_FUNCTION(setVertexRect) 
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

	#ifndef GEODE_STATICS_setDisplayFrameWithAnimationName
		#define GEODE_STATICS_setDisplayFrameWithAnimationName
		GEODE_AS_STATIC_FUNCTION(setDisplayFrameWithAnimationName) 
	#endif

	#ifndef GEODE_STATICS_setTextureCoords
		#define GEODE_STATICS_setTextureCoords
		GEODE_AS_STATIC_FUNCTION(setTextureCoords) 
	#endif

	#ifndef GEODE_STATICS_updateBlendFunc
		#define GEODE_STATICS_updateBlendFunc
		GEODE_AS_STATIC_FUNCTION(updateBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setReorderChildDirtyRecursively
		#define GEODE_STATICS_setReorderChildDirtyRecursively
		GEODE_AS_STATIC_FUNCTION(setReorderChildDirtyRecursively) 
	#endif

	#ifndef GEODE_STATICS_setDirtyRecursively
		#define GEODE_STATICS_setDirtyRecursively
		GEODE_AS_STATIC_FUNCTION(setDirtyRecursively) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
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

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_isFlipX
		#define GEODE_STATICS_isFlipX
		GEODE_AS_STATIC_FUNCTION(isFlipX) 
	#endif

	#ifndef GEODE_STATICS_isFlipY
		#define GEODE_STATICS_isFlipY
		GEODE_AS_STATIC_FUNCTION(isFlipY) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
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

	#ifndef GEODE_CONCEPT_CHECK_createWithTexture
		#define GEODE_CONCEPT_CHECK_createWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVertexZ
		#define GEODE_CONCEPT_CHECK_setVertexZ
		GEODE_CONCEPT_FUNCTION_CHECK(setVertexZ) 
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

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSkewX
		#define GEODE_CONCEPT_CHECK_setSkewX
		GEODE_CONCEPT_FUNCTION_CHECK(setSkewX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSkewY
		#define GEODE_CONCEPT_CHECK_setSkewY
		GEODE_CONCEPT_FUNCTION_CHECK(setSkewY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAnchorPoint
		#define GEODE_CONCEPT_CHECK_setAnchorPoint
		GEODE_CONCEPT_FUNCTION_CHECK(setAnchorPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationX
		#define GEODE_CONCEPT_CHECK_setRotationX
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationY
		#define GEODE_CONCEPT_CHECK_setRotationY
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreAnchorPointForPosition
		#define GEODE_CONCEPT_CHECK_ignoreAnchorPointForPosition
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreAnchorPointForPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChild
		#define GEODE_CONCEPT_CHECK_addChild
		GEODE_CONCEPT_FUNCTION_CHECK(addChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChild
		#define GEODE_CONCEPT_CHECK_removeChild
		GEODE_CONCEPT_FUNCTION_CHECK(removeChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		#define GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllChildrenWithCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderChild
		#define GEODE_CONCEPT_CHECK_reorderChild
		GEODE_CONCEPT_FUNCTION_CHECK(reorderChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortAllChildren
		#define GEODE_CONCEPT_CHECK_sortAllChildren
		GEODE_CONCEPT_FUNCTION_CHECK(sortAllChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTransform
		#define GEODE_CONCEPT_CHECK_updateTransform
		GEODE_CONCEPT_FUNCTION_CHECK(updateTransform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFile
		#define GEODE_CONCEPT_CHECK_initWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChildColor
		#define GEODE_CONCEPT_CHECK_setChildColor
		GEODE_CONCEPT_FUNCTION_CHECK(setChildColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChildOpacity
		#define GEODE_CONCEPT_CHECK_setChildOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setChildOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNode
		#define GEODE_CONCEPT_CHECK_getBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBatchNode
		#define GEODE_CONCEPT_CHECK_setBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(setBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshTextureRect
		#define GEODE_CONCEPT_CHECK_refreshTextureRect
		GEODE_CONCEPT_FUNCTION_CHECK(refreshTextureRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextureRect
		#define GEODE_CONCEPT_CHECK_setTextureRect
		GEODE_CONCEPT_FUNCTION_CHECK(setTextureRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVertexRect
		#define GEODE_CONCEPT_CHECK_setVertexRect
		GEODE_CONCEPT_FUNCTION_CHECK(setVertexRect) 
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

	#ifndef GEODE_CONCEPT_CHECK_setDisplayFrameWithAnimationName
		#define GEODE_CONCEPT_CHECK_setDisplayFrameWithAnimationName
		GEODE_CONCEPT_FUNCTION_CHECK(setDisplayFrameWithAnimationName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextureCoords
		#define GEODE_CONCEPT_CHECK_setTextureCoords
		GEODE_CONCEPT_FUNCTION_CHECK(setTextureCoords) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendFunc
		#define GEODE_CONCEPT_CHECK_updateBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setReorderChildDirtyRecursively
		#define GEODE_CONCEPT_CHECK_setReorderChildDirtyRecursively
		GEODE_CONCEPT_FUNCTION_CHECK(setReorderChildDirtyRecursively) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDirtyRecursively
		#define GEODE_CONCEPT_CHECK_setDirtyRecursively
		GEODE_CONCEPT_FUNCTION_CHECK(setDirtyRecursively) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedOpacity) 
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

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipX
		#define GEODE_CONCEPT_CHECK_isFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipY
		#define GEODE_CONCEPT_CHECK_isFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSprite> : ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSprite>>::ModifyBase;
		using Base = cocos2d::CCSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCSprite@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCSprite, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSprite@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCSprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::create)), Default, cocos2d::CCSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::create)), Default, cocos2d::CCSprite, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::create)), Default, cocos2d::CCSprite, create, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::createWithSpriteFrame)), Default, cocos2d::CCSprite, createWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::createWithSpriteFrameName)), Default, cocos2d::CCSprite, createWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSprite::createWithTexture)), Default, cocos2d::CCSprite, createWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::createWithTexture)), Default, cocos2d::CCSprite, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::init)), Thiscall, cocos2d::CCSprite, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setVertexZ)), Thiscall, cocos2d::CCSprite, setVertexZ, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setScaleX)), Thiscall, cocos2d::CCSprite, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setScaleY)), Thiscall, cocos2d::CCSprite, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setScale)), Thiscall, cocos2d::CCSprite, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSprite::setPosition)), Thiscall, cocos2d::CCSprite, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setSkewX)), Thiscall, cocos2d::CCSprite, setSkewX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setSkewY)), Thiscall, cocos2d::CCSprite, setSkewY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCSprite::setAnchorPoint)), Thiscall, cocos2d::CCSprite, setAnchorPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setVisible)), Thiscall, cocos2d::CCSprite, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setRotation)), Thiscall, cocos2d::CCSprite, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setRotationX)), Thiscall, cocos2d::CCSprite, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCSprite::setRotationY)), Thiscall, cocos2d::CCSprite, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::ignoreAnchorPointForPosition)), Thiscall, cocos2d::CCSprite, ignoreAnchorPointForPosition, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCSprite::addChild)), Thiscall, cocos2d::CCSprite, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSprite::addChild)), Thiscall, cocos2d::CCSprite, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCSprite::addChild)), Thiscall, cocos2d::CCSprite, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCSprite::removeChild)), Thiscall, cocos2d::CCSprite, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::removeAllChildrenWithCleanup)), Thiscall, cocos2d::CCSprite, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSprite::reorderChild)), Thiscall, cocos2d::CCSprite, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::sortAllChildren)), Thiscall, cocos2d::CCSprite, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::draw)), Thiscall, cocos2d::CCSprite, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::updateTransform)), Thiscall, cocos2d::CCSprite, updateTransform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSprite::initWithTexture)), Thiscall, cocos2d::CCSprite, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::initWithTexture)), Thiscall, cocos2d::CCSprite, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool>::func(&cocos2d::CCSprite::initWithTexture)), Thiscall, cocos2d::CCSprite, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::initWithSpriteFrame)), Thiscall, cocos2d::CCSprite, initWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::initWithSpriteFrameName)), Thiscall, cocos2d::CCSprite, initWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCSprite::initWithFile)), Thiscall, cocos2d::CCSprite, initWithFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, cocos2d::CCRect const&>::func(&cocos2d::CCSprite::initWithFile)), Thiscall, cocos2d::CCSprite, initWithFile, char const*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCSprite::setChildColor)), Thiscall, cocos2d::CCSprite, setChildColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCSprite::setChildOpacity)), Thiscall, cocos2d::CCSprite, setChildOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::getBatchNode)), Thiscall, cocos2d::CCSprite, getBatchNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteBatchNode*>::func(&cocos2d::CCSprite::setBatchNode)), Thiscall, cocos2d::CCSprite, setBatchNode, cocos2d::CCSpriteBatchNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::refreshTextureRect)), Thiscall, cocos2d::CCSprite, refreshTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSprite::setTextureRect)), Thiscall, cocos2d::CCSprite, setTextureRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&, bool, cocos2d::CCSize const&>::func(&cocos2d::CCSprite::setTextureRect)), Thiscall, cocos2d::CCSprite, setTextureRect, cocos2d::CCRect const&, bool, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSprite::setVertexRect)), Thiscall, cocos2d::CCSprite, setVertexRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::setDisplayFrame)), Thiscall, cocos2d::CCSprite, setDisplayFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCSprite::isFrameDisplayed)), Thiscall, cocos2d::CCSprite, isFrameDisplayed, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::displayFrame)), Thiscall, cocos2d::CCSprite, displayFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, int>::func(&cocos2d::CCSprite::setDisplayFrameWithAnimationName)), Thiscall, cocos2d::CCSprite, setDisplayFrameWithAnimationName, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCSprite::setTextureCoords)), Thiscall, cocos2d::CCSprite, setTextureCoords, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::updateBlendFunc)), Thiscall, cocos2d::CCSprite, updateBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::setReorderChildDirtyRecursively)), Thiscall, cocos2d::CCSprite, setReorderChildDirtyRecursively, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setDirtyRecursively)), Thiscall, cocos2d::CCSprite, setDirtyRecursively, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCSprite::setOpacity)), Thiscall, cocos2d::CCSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCSprite::updateDisplayedOpacity)), Thiscall, cocos2d::CCSprite, updateDisplayedOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCSprite::setColor)), Thiscall, cocos2d::CCSprite, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCSprite::updateDisplayedColor)), Thiscall, cocos2d::CCSprite, updateDisplayedColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setOpacityModifyRGB)), Thiscall, cocos2d::CCSprite, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::isOpacityModifyRGB)), Thiscall, cocos2d::CCSprite, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSprite::setTexture)), Thiscall, cocos2d::CCSprite, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSprite::getTexture)), Thiscall, cocos2d::CCSprite, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::isFlipX)), Thiscall, cocos2d::CCSprite, isFlipX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::isFlipY)), Thiscall, cocos2d::CCSprite, isFlipY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setFlipX)), Thiscall, cocos2d::CCSprite, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSprite::setFlipY)), Thiscall, cocos2d::CCSprite, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSprite::updateColor)), Thiscall, cocos2d::CCSprite, updateColor, )
		}
	};
}
