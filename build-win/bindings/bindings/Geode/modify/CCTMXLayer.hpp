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

	#ifndef GEODE_STATICS_getTileSet
		#define GEODE_STATICS_getTileSet
		GEODE_AS_STATIC_FUNCTION(getTileSet) 
	#endif

	#ifndef GEODE_STATICS_setTileSet
		#define GEODE_STATICS_setTileSet
		GEODE_AS_STATIC_FUNCTION(setTileSet) 
	#endif

	#ifndef GEODE_STATICS_getProperties
		#define GEODE_STATICS_getProperties
		GEODE_AS_STATIC_FUNCTION(getProperties) 
	#endif

	#ifndef GEODE_STATICS_setProperties
		#define GEODE_STATICS_setProperties
		GEODE_AS_STATIC_FUNCTION(setProperties) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeChild
		#define GEODE_STATICS_removeChild
		GEODE_AS_STATIC_FUNCTION(removeChild) 
	#endif

	#ifndef GEODE_STATICS_appendTileForGID
		#define GEODE_STATICS_appendTileForGID
		GEODE_AS_STATIC_FUNCTION(appendTileForGID) 
	#endif

	#ifndef GEODE_STATICS_atlasIndexForExistantZ
		#define GEODE_STATICS_atlasIndexForExistantZ
		GEODE_AS_STATIC_FUNCTION(atlasIndexForExistantZ) 
	#endif

	#ifndef GEODE_STATICS_atlasIndexForNewZ
		#define GEODE_STATICS_atlasIndexForNewZ
		GEODE_AS_STATIC_FUNCTION(atlasIndexForNewZ) 
	#endif

	#ifndef GEODE_STATICS_calculateLayerOffset
		#define GEODE_STATICS_calculateLayerOffset
		GEODE_AS_STATIC_FUNCTION(calculateLayerOffset) 
	#endif

	#ifndef GEODE_STATICS_initWithTilesetInfo
		#define GEODE_STATICS_initWithTilesetInfo
		GEODE_AS_STATIC_FUNCTION(initWithTilesetInfo) 
	#endif

	#ifndef GEODE_STATICS_insertTileForGID
		#define GEODE_STATICS_insertTileForGID
		GEODE_AS_STATIC_FUNCTION(insertTileForGID) 
	#endif

	#ifndef GEODE_STATICS_parseInternalProperties
		#define GEODE_STATICS_parseInternalProperties
		GEODE_AS_STATIC_FUNCTION(parseInternalProperties) 
	#endif

	#ifndef GEODE_STATICS_positionAt
		#define GEODE_STATICS_positionAt
		GEODE_AS_STATIC_FUNCTION(positionAt) 
	#endif

	#ifndef GEODE_STATICS_positionForHexAt
		#define GEODE_STATICS_positionForHexAt
		GEODE_AS_STATIC_FUNCTION(positionForHexAt) 
	#endif

	#ifndef GEODE_STATICS_positionForIsoAt
		#define GEODE_STATICS_positionForIsoAt
		GEODE_AS_STATIC_FUNCTION(positionForIsoAt) 
	#endif

	#ifndef GEODE_STATICS_positionForOrthoAt
		#define GEODE_STATICS_positionForOrthoAt
		GEODE_AS_STATIC_FUNCTION(positionForOrthoAt) 
	#endif

	#ifndef GEODE_STATICS_propertyNamed
		#define GEODE_STATICS_propertyNamed
		GEODE_AS_STATIC_FUNCTION(propertyNamed) 
	#endif

	#ifndef GEODE_STATICS_releaseMap
		#define GEODE_STATICS_releaseMap
		GEODE_AS_STATIC_FUNCTION(releaseMap) 
	#endif

	#ifndef GEODE_STATICS_removeTileAt
		#define GEODE_STATICS_removeTileAt
		GEODE_AS_STATIC_FUNCTION(removeTileAt) 
	#endif

	#ifndef GEODE_STATICS_reusedTileWithRect
		#define GEODE_STATICS_reusedTileWithRect
		GEODE_AS_STATIC_FUNCTION(reusedTileWithRect) 
	#endif

	#ifndef GEODE_STATICS_setTileGID
		#define GEODE_STATICS_setTileGID
		GEODE_AS_STATIC_FUNCTION(setTileGID) 
	#endif

	#ifndef GEODE_STATICS_setupTiles
		#define GEODE_STATICS_setupTiles
		GEODE_AS_STATIC_FUNCTION(setupTiles) 
	#endif

	#ifndef GEODE_STATICS_setupTileSprite
		#define GEODE_STATICS_setupTileSprite
		GEODE_AS_STATIC_FUNCTION(setupTileSprite) 
	#endif

	#ifndef GEODE_STATICS_tileAt
		#define GEODE_STATICS_tileAt
		GEODE_AS_STATIC_FUNCTION(tileAt) 
	#endif

	#ifndef GEODE_STATICS_tileGIDAt
		#define GEODE_STATICS_tileGIDAt
		GEODE_AS_STATIC_FUNCTION(tileGIDAt) 
	#endif

	#ifndef GEODE_STATICS_updateTileForGID
		#define GEODE_STATICS_updateTileForGID
		GEODE_AS_STATIC_FUNCTION(updateTileForGID) 
	#endif

	#ifndef GEODE_STATICS_vertexZForPos
		#define GEODE_STATICS_vertexZForPos
		GEODE_AS_STATIC_FUNCTION(vertexZForPos) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTileSet
		#define GEODE_CONCEPT_CHECK_getTileSet
		GEODE_CONCEPT_FUNCTION_CHECK(getTileSet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTileSet
		#define GEODE_CONCEPT_CHECK_setTileSet
		GEODE_CONCEPT_FUNCTION_CHECK(setTileSet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getProperties
		#define GEODE_CONCEPT_CHECK_getProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProperties
		#define GEODE_CONCEPT_CHECK_setProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChild
		#define GEODE_CONCEPT_CHECK_addChild
		GEODE_CONCEPT_FUNCTION_CHECK(addChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeChild
		#define GEODE_CONCEPT_CHECK_removeChild
		GEODE_CONCEPT_FUNCTION_CHECK(removeChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_appendTileForGID
		#define GEODE_CONCEPT_CHECK_appendTileForGID
		GEODE_CONCEPT_FUNCTION_CHECK(appendTileForGID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_atlasIndexForExistantZ
		#define GEODE_CONCEPT_CHECK_atlasIndexForExistantZ
		GEODE_CONCEPT_FUNCTION_CHECK(atlasIndexForExistantZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_atlasIndexForNewZ
		#define GEODE_CONCEPT_CHECK_atlasIndexForNewZ
		GEODE_CONCEPT_FUNCTION_CHECK(atlasIndexForNewZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateLayerOffset
		#define GEODE_CONCEPT_CHECK_calculateLayerOffset
		GEODE_CONCEPT_FUNCTION_CHECK(calculateLayerOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTilesetInfo
		#define GEODE_CONCEPT_CHECK_initWithTilesetInfo
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTilesetInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertTileForGID
		#define GEODE_CONCEPT_CHECK_insertTileForGID
		GEODE_CONCEPT_FUNCTION_CHECK(insertTileForGID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseInternalProperties
		#define GEODE_CONCEPT_CHECK_parseInternalProperties
		GEODE_CONCEPT_FUNCTION_CHECK(parseInternalProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionAt
		#define GEODE_CONCEPT_CHECK_positionAt
		GEODE_CONCEPT_FUNCTION_CHECK(positionAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForHexAt
		#define GEODE_CONCEPT_CHECK_positionForHexAt
		GEODE_CONCEPT_FUNCTION_CHECK(positionForHexAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForIsoAt
		#define GEODE_CONCEPT_CHECK_positionForIsoAt
		GEODE_CONCEPT_FUNCTION_CHECK(positionForIsoAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForOrthoAt
		#define GEODE_CONCEPT_CHECK_positionForOrthoAt
		GEODE_CONCEPT_FUNCTION_CHECK(positionForOrthoAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_propertyNamed
		#define GEODE_CONCEPT_CHECK_propertyNamed
		GEODE_CONCEPT_FUNCTION_CHECK(propertyNamed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseMap
		#define GEODE_CONCEPT_CHECK_releaseMap
		GEODE_CONCEPT_FUNCTION_CHECK(releaseMap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTileAt
		#define GEODE_CONCEPT_CHECK_removeTileAt
		GEODE_CONCEPT_FUNCTION_CHECK(removeTileAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reusedTileWithRect
		#define GEODE_CONCEPT_CHECK_reusedTileWithRect
		GEODE_CONCEPT_FUNCTION_CHECK(reusedTileWithRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTileGID
		#define GEODE_CONCEPT_CHECK_setTileGID
		GEODE_CONCEPT_FUNCTION_CHECK(setTileGID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTiles
		#define GEODE_CONCEPT_CHECK_setupTiles
		GEODE_CONCEPT_FUNCTION_CHECK(setupTiles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTileSprite
		#define GEODE_CONCEPT_CHECK_setupTileSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setupTileSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tileAt
		#define GEODE_CONCEPT_CHECK_tileAt
		GEODE_CONCEPT_FUNCTION_CHECK(tileAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tileGIDAt
		#define GEODE_CONCEPT_CHECK_tileGIDAt
		GEODE_CONCEPT_FUNCTION_CHECK(tileGIDAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTileForGID
		#define GEODE_CONCEPT_CHECK_updateTileForGID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTileForGID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_vertexZForPos
		#define GEODE_CONCEPT_CHECK_vertexZForPos
		GEODE_CONCEPT_FUNCTION_CHECK(vertexZForPos) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTMXLayer> : ModifyBase<ModifyDerive<Der, cocos2d::CCTMXLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTMXLayer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTMXLayer>>::ModifyBase;
		using Base = cocos2d::CCTMXLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTMXLayer@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTMXLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTMXLayer@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTMXLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*>::func(&cocos2d::CCTMXLayer::create)), Default, cocos2d::CCTMXLayer, create, cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXLayer::getTileSet)), Thiscall, cocos2d::CCTMXLayer, getTileSet, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTMXTilesetInfo*>::func(&cocos2d::CCTMXLayer::setTileSet)), Thiscall, cocos2d::CCTMXLayer, setTileSet, cocos2d::CCTMXTilesetInfo*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXLayer::getProperties)), Thiscall, cocos2d::CCTMXLayer, getProperties, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCTMXLayer::setProperties)), Thiscall, cocos2d::CCTMXLayer, setProperties, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCTMXLayer::addChild)), Thiscall, cocos2d::CCTMXLayer, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCTMXLayer::removeChild)), Thiscall, cocos2d::CCTMXLayer, removeChild, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::appendTileForGID)), Thiscall, cocos2d::CCTMXLayer, appendTileForGID, unsigned int, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCTMXLayer::atlasIndexForExistantZ)), Thiscall, cocos2d::CCTMXLayer, atlasIndexForExistantZ, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCTMXLayer::atlasIndexForNewZ)), Thiscall, cocos2d::CCTMXLayer, atlasIndexForNewZ, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::calculateLayerOffset)), Thiscall, cocos2d::CCTMXLayer, calculateLayerOffset, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*>::func(&cocos2d::CCTMXLayer::initWithTilesetInfo)), Thiscall, cocos2d::CCTMXLayer, initWithTilesetInfo, cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::insertTileForGID)), Thiscall, cocos2d::CCTMXLayer, insertTileForGID, unsigned int, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTMXLayer::parseInternalProperties)), Thiscall, cocos2d::CCTMXLayer, parseInternalProperties, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::positionAt)), Thiscall, cocos2d::CCTMXLayer, positionAt, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::positionForHexAt)), Thiscall, cocos2d::CCTMXLayer, positionForHexAt, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::positionForIsoAt)), Thiscall, cocos2d::CCTMXLayer, positionForIsoAt, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::positionForOrthoAt)), Thiscall, cocos2d::CCTMXLayer, positionForOrthoAt, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTMXLayer::propertyNamed)), Thiscall, cocos2d::CCTMXLayer, propertyNamed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTMXLayer::releaseMap)), Thiscall, cocos2d::CCTMXLayer, releaseMap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::removeTileAt)), Thiscall, cocos2d::CCTMXLayer, removeTileAt, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect>::func(&cocos2d::CCTMXLayer::reusedTileWithRect)), Thiscall, cocos2d::CCTMXLayer, reusedTileWithRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::setTileGID)), Thiscall, cocos2d::CCTMXLayer, setTileGID, unsigned int, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::CCPoint const&, cocos2d::ccTMXTileFlags>::func(&cocos2d::CCTMXLayer::setTileGID)), Thiscall, cocos2d::CCTMXLayer, setTileGID, unsigned int, cocos2d::CCPoint const&, cocos2d::ccTMXTileFlags)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTMXLayer::setupTiles)), Thiscall, cocos2d::CCTMXLayer, setupTiles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, cocos2d::CCPoint, unsigned int>::func(&cocos2d::CCTMXLayer::setupTileSprite)), Thiscall, cocos2d::CCTMXLayer, setupTileSprite, cocos2d::CCSprite*, cocos2d::CCPoint, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::tileAt)), Thiscall, cocos2d::CCTMXLayer, tileAt, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::tileGIDAt)), Thiscall, cocos2d::CCTMXLayer, tileGIDAt, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::ccTMXTileFlags*>::func(&cocos2d::CCTMXLayer::tileGIDAt)), Thiscall, cocos2d::CCTMXLayer, tileGIDAt, cocos2d::CCPoint const&, cocos2d::ccTMXTileFlags*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::updateTileForGID)), Thiscall, cocos2d::CCTMXLayer, updateTileForGID, unsigned int, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTMXLayer::vertexZForPos)), Thiscall, cocos2d::CCTMXLayer, vertexZForPos, cocos2d::CCPoint const&)
		}
	};
}
