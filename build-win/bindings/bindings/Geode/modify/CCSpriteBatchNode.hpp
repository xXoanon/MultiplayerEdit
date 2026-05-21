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

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_addSpriteWithoutQuad
		#define GEODE_STATICS_addSpriteWithoutQuad
		GEODE_AS_STATIC_FUNCTION(addSpriteWithoutQuad) 
	#endif

	#ifndef GEODE_STATICS_appendChild
		#define GEODE_STATICS_appendChild
		GEODE_AS_STATIC_FUNCTION(appendChild) 
	#endif

	#ifndef GEODE_STATICS_atlasIndexForChild
		#define GEODE_STATICS_atlasIndexForChild
		GEODE_AS_STATIC_FUNCTION(atlasIndexForChild) 
	#endif

	#ifndef GEODE_STATICS_getAtlasCapacity
		#define GEODE_STATICS_getAtlasCapacity
		GEODE_AS_STATIC_FUNCTION(getAtlasCapacity) 
	#endif

	#ifndef GEODE_STATICS_getUsedAtlasCapacity
		#define GEODE_STATICS_getUsedAtlasCapacity
		GEODE_AS_STATIC_FUNCTION(getUsedAtlasCapacity) 
	#endif

	#ifndef GEODE_STATICS_highestAtlasIndexInChild
		#define GEODE_STATICS_highestAtlasIndexInChild
		GEODE_AS_STATIC_FUNCTION(highestAtlasIndexInChild) 
	#endif

	#ifndef GEODE_STATICS_increaseAtlasCapacity
		#define GEODE_STATICS_increaseAtlasCapacity
		GEODE_AS_STATIC_FUNCTION(increaseAtlasCapacity) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_insertChild
		#define GEODE_STATICS_insertChild
		GEODE_AS_STATIC_FUNCTION(insertChild) 
	#endif

	#ifndef GEODE_STATICS_insertQuadFromSprite
		#define GEODE_STATICS_insertQuadFromSprite
		GEODE_AS_STATIC_FUNCTION(insertQuadFromSprite) 
	#endif

	#ifndef GEODE_STATICS_lowestAtlasIndexInChild
		#define GEODE_STATICS_lowestAtlasIndexInChild
		GEODE_AS_STATIC_FUNCTION(lowestAtlasIndexInChild) 
	#endif

	#ifndef GEODE_STATICS_manualSortAllChildren
		#define GEODE_STATICS_manualSortAllChildren
		GEODE_AS_STATIC_FUNCTION(manualSortAllChildren) 
	#endif

	#ifndef GEODE_STATICS_rebuildIndexInOrder
		#define GEODE_STATICS_rebuildIndexInOrder
		GEODE_AS_STATIC_FUNCTION(rebuildIndexInOrder) 
	#endif

	#ifndef GEODE_STATICS_removeChildAtIndex
		#define GEODE_STATICS_removeChildAtIndex
		GEODE_AS_STATIC_FUNCTION(removeChildAtIndex) 
	#endif

	#ifndef GEODE_STATICS_removeSpriteFromAtlas
		#define GEODE_STATICS_removeSpriteFromAtlas
		GEODE_AS_STATIC_FUNCTION(removeSpriteFromAtlas) 
	#endif

	#ifndef GEODE_STATICS_reorderBatch
		#define GEODE_STATICS_reorderBatch
		GEODE_AS_STATIC_FUNCTION(reorderBatch) 
	#endif

	#ifndef GEODE_STATICS_swap
		#define GEODE_STATICS_swap
		GEODE_AS_STATIC_FUNCTION(swap) 
	#endif

	#ifndef GEODE_STATICS_updateAtlasIndex
		#define GEODE_STATICS_updateAtlasIndex
		GEODE_AS_STATIC_FUNCTION(updateAtlasIndex) 
	#endif

	#ifndef GEODE_STATICS_updateBlendFunc
		#define GEODE_STATICS_updateBlendFunc
		GEODE_AS_STATIC_FUNCTION(updateBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_updateQuadFromSprite
		#define GEODE_STATICS_updateQuadFromSprite
		GEODE_AS_STATIC_FUNCTION(updateQuadFromSprite) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTexture
		#define GEODE_CONCEPT_CHECK_createWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpriteWithoutQuad
		#define GEODE_CONCEPT_CHECK_addSpriteWithoutQuad
		GEODE_CONCEPT_FUNCTION_CHECK(addSpriteWithoutQuad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_appendChild
		#define GEODE_CONCEPT_CHECK_appendChild
		GEODE_CONCEPT_FUNCTION_CHECK(appendChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_atlasIndexForChild
		#define GEODE_CONCEPT_CHECK_atlasIndexForChild
		GEODE_CONCEPT_FUNCTION_CHECK(atlasIndexForChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAtlasCapacity
		#define GEODE_CONCEPT_CHECK_getAtlasCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(getAtlasCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUsedAtlasCapacity
		#define GEODE_CONCEPT_CHECK_getUsedAtlasCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(getUsedAtlasCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_highestAtlasIndexInChild
		#define GEODE_CONCEPT_CHECK_highestAtlasIndexInChild
		GEODE_CONCEPT_FUNCTION_CHECK(highestAtlasIndexInChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_increaseAtlasCapacity
		#define GEODE_CONCEPT_CHECK_increaseAtlasCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(increaseAtlasCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFile
		#define GEODE_CONCEPT_CHECK_initWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertChild
		#define GEODE_CONCEPT_CHECK_insertChild
		GEODE_CONCEPT_FUNCTION_CHECK(insertChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertQuadFromSprite
		#define GEODE_CONCEPT_CHECK_insertQuadFromSprite
		GEODE_CONCEPT_FUNCTION_CHECK(insertQuadFromSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lowestAtlasIndexInChild
		#define GEODE_CONCEPT_CHECK_lowestAtlasIndexInChild
		GEODE_CONCEPT_FUNCTION_CHECK(lowestAtlasIndexInChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_manualSortAllChildren
		#define GEODE_CONCEPT_CHECK_manualSortAllChildren
		GEODE_CONCEPT_FUNCTION_CHECK(manualSortAllChildren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildIndexInOrder
		#define GEODE_CONCEPT_CHECK_rebuildIndexInOrder
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildIndexInOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChildAtIndex
		#define GEODE_CONCEPT_CHECK_removeChildAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(removeChildAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSpriteFromAtlas
		#define GEODE_CONCEPT_CHECK_removeSpriteFromAtlas
		GEODE_CONCEPT_FUNCTION_CHECK(removeSpriteFromAtlas) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderBatch
		#define GEODE_CONCEPT_CHECK_reorderBatch
		GEODE_CONCEPT_FUNCTION_CHECK(reorderBatch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swap
		#define GEODE_CONCEPT_CHECK_swap
		GEODE_CONCEPT_FUNCTION_CHECK(swap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAtlasIndex
		#define GEODE_CONCEPT_CHECK_updateAtlasIndex
		GEODE_CONCEPT_FUNCTION_CHECK(updateAtlasIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendFunc
		#define GEODE_CONCEPT_CHECK_updateBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateQuadFromSprite
		#define GEODE_CONCEPT_CHECK_updateQuadFromSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateQuadFromSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSpriteBatchNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSpriteBatchNode>>::ModifyBase;
		using Base = cocos2d::CCSpriteBatchNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCSpriteBatchNode@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCSpriteBatchNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSpriteBatchNode@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCSpriteBatchNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::create)), Default, cocos2d::CCSpriteBatchNode, create, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::createWithTexture)), Default, cocos2d::CCSpriteBatchNode, createWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::init)), Thiscall, cocos2d::CCSpriteBatchNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCSpriteBatchNode::addChild)), Thiscall, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSpriteBatchNode::addChild)), Thiscall, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCSpriteBatchNode::addChild)), Thiscall, cocos2d::CCSpriteBatchNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCSpriteBatchNode::removeChild)), Thiscall, cocos2d::CCSpriteBatchNode, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCSpriteBatchNode::removeAllChildrenWithCleanup)), Thiscall, cocos2d::CCSpriteBatchNode, removeAllChildrenWithCleanup, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCSpriteBatchNode::reorderChild)), Thiscall, cocos2d::CCSpriteBatchNode, reorderChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::sortAllChildren)), Thiscall, cocos2d::CCSpriteBatchNode, sortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::draw)), Thiscall, cocos2d::CCSpriteBatchNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::visit)), Thiscall, cocos2d::CCSpriteBatchNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccBlendFunc>::func(&cocos2d::CCSpriteBatchNode::setBlendFunc)), Thiscall, cocos2d::CCSpriteBatchNode, setBlendFunc, cocos2d::ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::getBlendFunc)), Thiscall, cocos2d::CCSpriteBatchNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::getTexture)), Thiscall, cocos2d::CCSpriteBatchNode, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCSpriteBatchNode::setTexture)), Thiscall, cocos2d::CCSpriteBatchNode, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, unsigned int, int>::func(&cocos2d::CCSpriteBatchNode::addSpriteWithoutQuad)), Thiscall, cocos2d::CCSpriteBatchNode, addSpriteWithoutQuad, cocos2d::CCSprite*, unsigned int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCSpriteBatchNode::appendChild)), Thiscall, cocos2d::CCSpriteBatchNode, appendChild, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, int>::func(&cocos2d::CCSpriteBatchNode::atlasIndexForChild)), Thiscall, cocos2d::CCSpriteBatchNode, atlasIndexForChild, cocos2d::CCSprite*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::getAtlasCapacity)), Thiscall, cocos2d::CCSpriteBatchNode, getAtlasCapacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity)), Thiscall, cocos2d::CCSpriteBatchNode, getUsedAtlasCapacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCSpriteBatchNode::highestAtlasIndexInChild)), Thiscall, cocos2d::CCSpriteBatchNode, highestAtlasIndexInChild, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::increaseAtlasCapacity)), Thiscall, cocos2d::CCSpriteBatchNode, increaseAtlasCapacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCSpriteBatchNode::increaseAtlasCapacity)), Thiscall, cocos2d::CCSpriteBatchNode, increaseAtlasCapacity, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::initWithFile)), Thiscall, cocos2d::CCSpriteBatchNode, initWithFile, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::initWithTexture)), Thiscall, cocos2d::CCSpriteBatchNode, initWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::insertChild)), Thiscall, cocos2d::CCSpriteBatchNode, insertChild, cocos2d::CCSprite*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::insertQuadFromSprite)), Thiscall, cocos2d::CCSpriteBatchNode, insertQuadFromSprite, cocos2d::CCSprite*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCSpriteBatchNode::lowestAtlasIndexInChild)), Thiscall, cocos2d::CCSpriteBatchNode, lowestAtlasIndexInChild, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::manualSortAllChildren)), Thiscall, cocos2d::CCSpriteBatchNode, manualSortAllChildren, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::rebuildIndexInOrder)), Thiscall, cocos2d::CCSpriteBatchNode, rebuildIndexInOrder, cocos2d::CCSprite*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCSpriteBatchNode::removeChildAtIndex)), Thiscall, cocos2d::CCSpriteBatchNode, removeChildAtIndex, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCSpriteBatchNode::removeSpriteFromAtlas)), Thiscall, cocos2d::CCSpriteBatchNode, removeSpriteFromAtlas, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCSpriteBatchNode::reorderBatch)), Thiscall, cocos2d::CCSpriteBatchNode, reorderBatch, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&cocos2d::CCSpriteBatchNode::swap)), Thiscall, cocos2d::CCSpriteBatchNode, swap, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, int*>::func(&cocos2d::CCSpriteBatchNode::updateAtlasIndex)), Thiscall, cocos2d::CCSpriteBatchNode, updateAtlasIndex, cocos2d::CCSprite*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSpriteBatchNode::updateBlendFunc)), Thiscall, cocos2d::CCSpriteBatchNode, updateBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, unsigned int>::func(&cocos2d::CCSpriteBatchNode::updateQuadFromSprite)), Thiscall, cocos2d::CCSpriteBatchNode, updateQuadFromSprite, cocos2d::CCSprite*, unsigned int)
		}
	};
}
