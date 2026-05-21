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

	#ifndef GEODE_STATICS_fontName
		#define GEODE_STATICS_fontName
		GEODE_AS_STATIC_FUNCTION(fontName) 
	#endif

	#ifndef GEODE_STATICS_fontSize
		#define GEODE_STATICS_fontSize
		GEODE_AS_STATIC_FUNCTION(fontSize) 
	#endif

	#ifndef GEODE_STATICS_setFontName
		#define GEODE_STATICS_setFontName
		GEODE_AS_STATIC_FUNCTION(setFontName) 
	#endif

	#ifndef GEODE_STATICS_setFontSize
		#define GEODE_STATICS_setFontSize
		GEODE_AS_STATIC_FUNCTION(setFontSize) 
	#endif

	#ifndef GEODE_STATICS_fontNameObj
		#define GEODE_STATICS_fontNameObj
		GEODE_AS_STATIC_FUNCTION(fontNameObj) 
	#endif

	#ifndef GEODE_STATICS_fontSizeObj
		#define GEODE_STATICS_fontSizeObj
		GEODE_AS_STATIC_FUNCTION(fontSizeObj) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_recreateLabel
		#define GEODE_STATICS_recreateLabel
		GEODE_AS_STATIC_FUNCTION(recreateLabel) 
	#endif

	#ifndef GEODE_STATICS_setFontNameObj
		#define GEODE_STATICS_setFontNameObj
		GEODE_AS_STATIC_FUNCTION(setFontNameObj) 
	#endif

	#ifndef GEODE_STATICS_setFontSizeObj
		#define GEODE_STATICS_setFontSizeObj
		GEODE_AS_STATIC_FUNCTION(setFontSizeObj) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fontName
		#define GEODE_CONCEPT_CHECK_fontName
		GEODE_CONCEPT_FUNCTION_CHECK(fontName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fontSize
		#define GEODE_CONCEPT_CHECK_fontSize
		GEODE_CONCEPT_FUNCTION_CHECK(fontSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontName
		#define GEODE_CONCEPT_CHECK_setFontName
		GEODE_CONCEPT_FUNCTION_CHECK(setFontName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontSize
		#define GEODE_CONCEPT_CHECK_setFontSize
		GEODE_CONCEPT_FUNCTION_CHECK(setFontSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fontNameObj
		#define GEODE_CONCEPT_CHECK_fontNameObj
		GEODE_CONCEPT_FUNCTION_CHECK(fontNameObj) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fontSizeObj
		#define GEODE_CONCEPT_CHECK_fontSizeObj
		GEODE_CONCEPT_FUNCTION_CHECK(fontSizeObj) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithString
		#define GEODE_CONCEPT_CHECK_initWithString
		GEODE_CONCEPT_FUNCTION_CHECK(initWithString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recreateLabel
		#define GEODE_CONCEPT_CHECK_recreateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(recreateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontNameObj
		#define GEODE_CONCEPT_CHECK_setFontNameObj
		GEODE_CONCEPT_FUNCTION_CHECK(setFontNameObj) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontSizeObj
		#define GEODE_CONCEPT_CHECK_setFontSizeObj
		GEODE_CONCEPT_FUNCTION_CHECK(setFontSizeObj) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMenuItemFont> : ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemFont>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemFont>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMenuItemFont>>::ModifyBase;
		using Base = cocos2d::CCMenuItemFont;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCMenuItemFont::create)), Default, cocos2d::CCMenuItemFont, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemFont::create)), Default, cocos2d::CCMenuItemFont, create, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemFont::fontName)), Default, cocos2d::CCMenuItemFont, fontName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemFont::fontSize)), Default, cocos2d::CCMenuItemFont, fontSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCMenuItemFont::setFontName)), Default, cocos2d::CCMenuItemFont, setFontName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCMenuItemFont::setFontSize)), Default, cocos2d::CCMenuItemFont, setFontSize, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemFont::fontNameObj)), Thiscall, cocos2d::CCMenuItemFont, fontNameObj, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemFont::fontSizeObj)), Thiscall, cocos2d::CCMenuItemFont, fontSizeObj, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler>::func(&cocos2d::CCMenuItemFont::initWithString)), Thiscall, cocos2d::CCMenuItemFont, initWithString, char const*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMenuItemFont::recreateLabel)), Thiscall, cocos2d::CCMenuItemFont, recreateLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCMenuItemFont::setFontNameObj)), Thiscall, cocos2d::CCMenuItemFont, setFontNameObj, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCMenuItemFont::setFontSizeObj)), Thiscall, cocos2d::CCMenuItemFont, setFontSizeObj, unsigned int)
		}
	};
}
