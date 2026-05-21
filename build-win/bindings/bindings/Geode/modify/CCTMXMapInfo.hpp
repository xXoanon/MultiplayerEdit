#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_formatWithTMXFile
		#define GEODE_STATICS_formatWithTMXFile
		GEODE_AS_STATIC_FUNCTION(formatWithTMXFile) 
	#endif

	#ifndef GEODE_STATICS_formatWithXML
		#define GEODE_STATICS_formatWithXML
		GEODE_AS_STATIC_FUNCTION(formatWithXML) 
	#endif

	#ifndef GEODE_STATICS_getLayers
		#define GEODE_STATICS_getLayers
		GEODE_AS_STATIC_FUNCTION(getLayers) 
	#endif

	#ifndef GEODE_STATICS_setLayers
		#define GEODE_STATICS_setLayers
		GEODE_AS_STATIC_FUNCTION(setLayers) 
	#endif

	#ifndef GEODE_STATICS_getTilesets
		#define GEODE_STATICS_getTilesets
		GEODE_AS_STATIC_FUNCTION(getTilesets) 
	#endif

	#ifndef GEODE_STATICS_setTilesets
		#define GEODE_STATICS_setTilesets
		GEODE_AS_STATIC_FUNCTION(setTilesets) 
	#endif

	#ifndef GEODE_STATICS_getObjectGroups
		#define GEODE_STATICS_getObjectGroups
		GEODE_AS_STATIC_FUNCTION(getObjectGroups) 
	#endif

	#ifndef GEODE_STATICS_setObjectGroups
		#define GEODE_STATICS_setObjectGroups
		GEODE_AS_STATIC_FUNCTION(setObjectGroups) 
	#endif

	#ifndef GEODE_STATICS_getProperties
		#define GEODE_STATICS_getProperties
		GEODE_AS_STATIC_FUNCTION(getProperties) 
	#endif

	#ifndef GEODE_STATICS_setProperties
		#define GEODE_STATICS_setProperties
		GEODE_AS_STATIC_FUNCTION(setProperties) 
	#endif

	#ifndef GEODE_STATICS_startElement
		#define GEODE_STATICS_startElement
		GEODE_AS_STATIC_FUNCTION(startElement) 
	#endif

	#ifndef GEODE_STATICS_endElement
		#define GEODE_STATICS_endElement
		GEODE_AS_STATIC_FUNCTION(endElement) 
	#endif

	#ifndef GEODE_STATICS_textHandler
		#define GEODE_STATICS_textHandler
		GEODE_AS_STATIC_FUNCTION(textHandler) 
	#endif

	#ifndef GEODE_STATICS_getTileProperties
		#define GEODE_STATICS_getTileProperties
		GEODE_AS_STATIC_FUNCTION(getTileProperties) 
	#endif

	#ifndef GEODE_STATICS_initWithTMXFile
		#define GEODE_STATICS_initWithTMXFile
		GEODE_AS_STATIC_FUNCTION(initWithTMXFile) 
	#endif

	#ifndef GEODE_STATICS_initWithXML
		#define GEODE_STATICS_initWithXML
		GEODE_AS_STATIC_FUNCTION(initWithXML) 
	#endif

	#ifndef GEODE_STATICS_internalInit
		#define GEODE_STATICS_internalInit
		GEODE_AS_STATIC_FUNCTION(internalInit) 
	#endif

	#ifndef GEODE_STATICS_parseXMLFile
		#define GEODE_STATICS_parseXMLFile
		GEODE_AS_STATIC_FUNCTION(parseXMLFile) 
	#endif

	#ifndef GEODE_STATICS_parseXMLString
		#define GEODE_STATICS_parseXMLString
		GEODE_AS_STATIC_FUNCTION(parseXMLString) 
	#endif

	#ifndef GEODE_STATICS_setTileProperties
		#define GEODE_STATICS_setTileProperties
		GEODE_AS_STATIC_FUNCTION(setTileProperties) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_formatWithTMXFile
		#define GEODE_CONCEPT_CHECK_formatWithTMXFile
		GEODE_CONCEPT_FUNCTION_CHECK(formatWithTMXFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_formatWithXML
		#define GEODE_CONCEPT_CHECK_formatWithXML
		GEODE_CONCEPT_FUNCTION_CHECK(formatWithXML) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLayers
		#define GEODE_CONCEPT_CHECK_getLayers
		GEODE_CONCEPT_FUNCTION_CHECK(getLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLayers
		#define GEODE_CONCEPT_CHECK_setLayers
		GEODE_CONCEPT_FUNCTION_CHECK(setLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTilesets
		#define GEODE_CONCEPT_CHECK_getTilesets
		GEODE_CONCEPT_FUNCTION_CHECK(getTilesets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTilesets
		#define GEODE_CONCEPT_CHECK_setTilesets
		GEODE_CONCEPT_FUNCTION_CHECK(setTilesets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectGroups
		#define GEODE_CONCEPT_CHECK_getObjectGroups
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectGroups
		#define GEODE_CONCEPT_CHECK_setObjectGroups
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getProperties
		#define GEODE_CONCEPT_CHECK_getProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProperties
		#define GEODE_CONCEPT_CHECK_setProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startElement
		#define GEODE_CONCEPT_CHECK_startElement
		GEODE_CONCEPT_FUNCTION_CHECK(startElement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_endElement
		#define GEODE_CONCEPT_CHECK_endElement
		GEODE_CONCEPT_FUNCTION_CHECK(endElement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textHandler
		#define GEODE_CONCEPT_CHECK_textHandler
		GEODE_CONCEPT_FUNCTION_CHECK(textHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTileProperties
		#define GEODE_CONCEPT_CHECK_getTileProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getTileProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTMXFile
		#define GEODE_CONCEPT_CHECK_initWithTMXFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTMXFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithXML
		#define GEODE_CONCEPT_CHECK_initWithXML
		GEODE_CONCEPT_FUNCTION_CHECK(initWithXML) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_internalInit
		#define GEODE_CONCEPT_CHECK_internalInit
		GEODE_CONCEPT_FUNCTION_CHECK(internalInit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseXMLFile
		#define GEODE_CONCEPT_CHECK_parseXMLFile
		GEODE_CONCEPT_FUNCTION_CHECK(parseXMLFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseXMLString
		#define GEODE_CONCEPT_CHECK_parseXMLString
		GEODE_CONCEPT_FUNCTION_CHECK(parseXMLString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTileProperties
		#define GEODE_CONCEPT_CHECK_setTileProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setTileProperties) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTMXMapInfo> : ModifyBase<ModifyDerive<Der, cocos2d::CCTMXMapInfo>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTMXMapInfo>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTMXMapInfo>>::ModifyBase;
		using Base = cocos2d::CCTMXMapInfo;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTMXMapInfo@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTMXMapInfo, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTMXMapInfo@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTMXMapInfo)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTMXMapInfo::formatWithTMXFile)), Default, cocos2d::CCTMXMapInfo, formatWithTMXFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCTMXMapInfo::formatWithXML)), Default, cocos2d::CCTMXMapInfo, formatWithXML, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXMapInfo::getLayers)), Thiscall, cocos2d::CCTMXMapInfo, getLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTMXMapInfo::setLayers)), Thiscall, cocos2d::CCTMXMapInfo, setLayers, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXMapInfo::getTilesets)), Thiscall, cocos2d::CCTMXMapInfo, getTilesets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTMXMapInfo::setTilesets)), Thiscall, cocos2d::CCTMXMapInfo, setTilesets, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXMapInfo::getObjectGroups)), Thiscall, cocos2d::CCTMXMapInfo, getObjectGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTMXMapInfo::setObjectGroups)), Thiscall, cocos2d::CCTMXMapInfo, setObjectGroups, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXMapInfo::getProperties)), Thiscall, cocos2d::CCTMXMapInfo, getProperties, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCTMXMapInfo::setProperties)), Thiscall, cocos2d::CCTMXMapInfo, setProperties, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<void*, char const*, char const**>::func(&cocos2d::CCTMXMapInfo::startElement)), Thiscall, cocos2d::CCTMXMapInfo, startElement, void*, char const*, char const**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<void*, char const*>::func(&cocos2d::CCTMXMapInfo::endElement)), Thiscall, cocos2d::CCTMXMapInfo, endElement, void*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<void*, char const*, int>::func(&cocos2d::CCTMXMapInfo::textHandler)), Thiscall, cocos2d::CCTMXMapInfo, textHandler, void*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTMXMapInfo::getTileProperties)), Thiscall, cocos2d::CCTMXMapInfo, getTileProperties, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTMXMapInfo::initWithTMXFile)), Thiscall, cocos2d::CCTMXMapInfo, initWithTMXFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCTMXMapInfo::initWithXML)), Thiscall, cocos2d::CCTMXMapInfo, initWithXML, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCTMXMapInfo::internalInit)), Thiscall, cocos2d::CCTMXMapInfo, internalInit, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTMXMapInfo::parseXMLFile)), Thiscall, cocos2d::CCTMXMapInfo, parseXMLFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTMXMapInfo::parseXMLString)), Thiscall, cocos2d::CCTMXMapInfo, parseXMLString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCTMXMapInfo::setTileProperties)), Thiscall, cocos2d::CCTMXMapInfo, setTileProperties, cocos2d::CCDictionary*)
		}
	};
}
