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

	#ifndef GEODE_STATICS_getTextureAtlas
		#define GEODE_STATICS_getTextureAtlas
		GEODE_AS_STATIC_FUNCTION(getTextureAtlas) 
	#endif

	#ifndef GEODE_STATICS_setTextureAtlas
		#define GEODE_STATICS_setTextureAtlas
		GEODE_AS_STATIC_FUNCTION(setTextureAtlas) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getQuadsToDraw
		#define GEODE_STATICS_getQuadsToDraw
		GEODE_AS_STATIC_FUNCTION(getQuadsToDraw) 
	#endif

	#ifndef GEODE_STATICS_setQuadsToDraw
		#define GEODE_STATICS_setQuadsToDraw
		GEODE_AS_STATIC_FUNCTION(setQuadsToDraw) 
	#endif

	#ifndef GEODE_STATICS_updateAtlasValues
		#define GEODE_STATICS_updateAtlasValues
		GEODE_AS_STATIC_FUNCTION(updateAtlasValues) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_calculateMaxItems
		#define GEODE_STATICS_calculateMaxItems
		GEODE_AS_STATIC_FUNCTION(calculateMaxItems) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithTileFile
		#define GEODE_STATICS_initWithTileFile
		GEODE_AS_STATIC_FUNCTION(initWithTileFile) 
	#endif

	#ifndef GEODE_STATICS_setIgnoreContentScaleFactor
		#define GEODE_STATICS_setIgnoreContentScaleFactor
		GEODE_AS_STATIC_FUNCTION(setIgnoreContentScaleFactor) 
	#endif

	#ifndef GEODE_STATICS_updateBlendFunc
		#define GEODE_STATICS_updateBlendFunc
		GEODE_AS_STATIC_FUNCTION(updateBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityModifyRGB
		#define GEODE_STATICS_updateOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(updateOpacityModifyRGB) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextureAtlas
		#define GEODE_CONCEPT_CHECK_getTextureAtlas
		GEODE_CONCEPT_FUNCTION_CHECK(getTextureAtlas) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextureAtlas
		#define GEODE_CONCEPT_CHECK_setTextureAtlas
		GEODE_CONCEPT_FUNCTION_CHECK(setTextureAtlas) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getQuadsToDraw
		#define GEODE_CONCEPT_CHECK_getQuadsToDraw
		GEODE_CONCEPT_FUNCTION_CHECK(getQuadsToDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setQuadsToDraw
		#define GEODE_CONCEPT_CHECK_setQuadsToDraw
		GEODE_CONCEPT_FUNCTION_CHECK(setQuadsToDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAtlasValues
		#define GEODE_CONCEPT_CHECK_updateAtlasValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateAtlasValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateMaxItems
		#define GEODE_CONCEPT_CHECK_calculateMaxItems
		GEODE_CONCEPT_FUNCTION_CHECK(calculateMaxItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTileFile
		#define GEODE_CONCEPT_CHECK_initWithTileFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTileFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIgnoreContentScaleFactor
		#define GEODE_CONCEPT_CHECK_setIgnoreContentScaleFactor
		GEODE_CONCEPT_FUNCTION_CHECK(setIgnoreContentScaleFactor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendFunc
		#define GEODE_CONCEPT_CHECK_updateBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_updateOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacityModifyRGB) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCAtlasNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCAtlasNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCAtlasNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCAtlasNode>>::ModifyBase;
		using Base = cocos2d::CCAtlasNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCAtlasNode@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCAtlasNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCAtlasNode@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCAtlasNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int, unsigned int, unsigned int>::func(&cocos2d::CCAtlasNode::create)), Default, cocos2d::CCAtlasNode, create, char const*, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::getTextureAtlas)), Thiscall, cocos2d::CCAtlasNode, getTextureAtlas, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTextureAtlas*>::func(&cocos2d::CCAtlasNode::setTextureAtlas)), Thiscall, cocos2d::CCAtlasNode, setTextureAtlas, cocos2d::CCTextureAtlas*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::getBlendFunc)), Thiscall, cocos2d::CCAtlasNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccBlendFunc>::func(&cocos2d::CCAtlasNode::setBlendFunc)), Thiscall, cocos2d::CCAtlasNode, setBlendFunc, cocos2d::ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::getQuadsToDraw)), Thiscall, cocos2d::CCAtlasNode, getQuadsToDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCAtlasNode::setQuadsToDraw)), Thiscall, cocos2d::CCAtlasNode, setQuadsToDraw, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::updateAtlasValues)), Thiscall, cocos2d::CCAtlasNode, updateAtlasValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::draw)), Thiscall, cocos2d::CCAtlasNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::getTexture)), Thiscall, cocos2d::CCAtlasNode, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCAtlasNode::setTexture)), Thiscall, cocos2d::CCAtlasNode, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::isOpacityModifyRGB)), Thiscall, cocos2d::CCAtlasNode, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCAtlasNode::setOpacityModifyRGB)), Thiscall, cocos2d::CCAtlasNode, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::getColor)), Thiscall, cocos2d::CCAtlasNode, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCAtlasNode::setColor)), Thiscall, cocos2d::CCAtlasNode, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCAtlasNode::setOpacity)), Thiscall, cocos2d::CCAtlasNode, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::calculateMaxItems)), Thiscall, cocos2d::CCAtlasNode, calculateMaxItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int>::func(&cocos2d::CCAtlasNode::initWithTexture)), Thiscall, cocos2d::CCAtlasNode, initWithTexture, cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int, unsigned int, unsigned int>::func(&cocos2d::CCAtlasNode::initWithTileFile)), Thiscall, cocos2d::CCAtlasNode, initWithTileFile, char const*, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCAtlasNode::setIgnoreContentScaleFactor)), Thiscall, cocos2d::CCAtlasNode, setIgnoreContentScaleFactor, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::updateBlendFunc)), Thiscall, cocos2d::CCAtlasNode, updateBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCAtlasNode::updateOpacityModifyRGB)), Thiscall, cocos2d::CCAtlasNode, updateOpacityModifyRGB, )
		}
	};
}
