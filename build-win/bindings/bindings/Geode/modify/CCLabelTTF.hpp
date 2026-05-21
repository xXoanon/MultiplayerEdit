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

	#ifndef GEODE_STATICS_createWithFontDefinition
		#define GEODE_STATICS_createWithFontDefinition
		GEODE_AS_STATIC_FUNCTION(createWithFontDefinition) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS__prepareTextDefinition
		#define GEODE_STATICS__prepareTextDefinition
		GEODE_AS_STATIC_FUNCTION(_prepareTextDefinition) 
	#endif

	#ifndef GEODE_STATICS__updateWithTextDefinition
		#define GEODE_STATICS__updateWithTextDefinition
		GEODE_AS_STATIC_FUNCTION(_updateWithTextDefinition) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_disableShadow
		#define GEODE_STATICS_disableShadow
		GEODE_AS_STATIC_FUNCTION(disableShadow) 
	#endif

	#ifndef GEODE_STATICS_disableStroke
		#define GEODE_STATICS_disableStroke
		GEODE_AS_STATIC_FUNCTION(disableStroke) 
	#endif

	#ifndef GEODE_STATICS_enableShadow
		#define GEODE_STATICS_enableShadow
		GEODE_AS_STATIC_FUNCTION(enableShadow) 
	#endif

	#ifndef GEODE_STATICS_enableStroke
		#define GEODE_STATICS_enableStroke
		GEODE_AS_STATIC_FUNCTION(enableStroke) 
	#endif

	#ifndef GEODE_STATICS_getFontName
		#define GEODE_STATICS_getFontName
		GEODE_AS_STATIC_FUNCTION(getFontName) 
	#endif

	#ifndef GEODE_STATICS_getTextDefinition
		#define GEODE_STATICS_getTextDefinition
		GEODE_AS_STATIC_FUNCTION(getTextDefinition) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_initWithStringAndTextDefinition
		#define GEODE_STATICS_initWithStringAndTextDefinition
		GEODE_AS_STATIC_FUNCTION(initWithStringAndTextDefinition) 
	#endif

	#ifndef GEODE_STATICS_setFontFillColor
		#define GEODE_STATICS_setFontFillColor
		GEODE_AS_STATIC_FUNCTION(setFontFillColor) 
	#endif

	#ifndef GEODE_STATICS_setFontName
		#define GEODE_STATICS_setFontName
		GEODE_AS_STATIC_FUNCTION(setFontName) 
	#endif

	#ifndef GEODE_STATICS_setTextDefinition
		#define GEODE_STATICS_setTextDefinition
		GEODE_AS_STATIC_FUNCTION(setTextDefinition) 
	#endif

	#ifndef GEODE_STATICS_updateTexture
		#define GEODE_STATICS_updateTexture
		GEODE_AS_STATIC_FUNCTION(updateTexture) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithFontDefinition
		#define GEODE_CONCEPT_CHECK_createWithFontDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(createWithFontDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__prepareTextDefinition
		#define GEODE_CONCEPT_CHECK__prepareTextDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(_prepareTextDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__updateWithTextDefinition
		#define GEODE_CONCEPT_CHECK__updateWithTextDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(_updateWithTextDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableShadow
		#define GEODE_CONCEPT_CHECK_disableShadow
		GEODE_CONCEPT_FUNCTION_CHECK(disableShadow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableStroke
		#define GEODE_CONCEPT_CHECK_disableStroke
		GEODE_CONCEPT_FUNCTION_CHECK(disableStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableShadow
		#define GEODE_CONCEPT_CHECK_enableShadow
		GEODE_CONCEPT_FUNCTION_CHECK(enableShadow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableStroke
		#define GEODE_CONCEPT_CHECK_enableStroke
		GEODE_CONCEPT_FUNCTION_CHECK(enableStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontName
		#define GEODE_CONCEPT_CHECK_getFontName
		GEODE_CONCEPT_FUNCTION_CHECK(getFontName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextDefinition
		#define GEODE_CONCEPT_CHECK_getTextDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(getTextDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithString
		#define GEODE_CONCEPT_CHECK_initWithString
		GEODE_CONCEPT_FUNCTION_CHECK(initWithString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithStringAndTextDefinition
		#define GEODE_CONCEPT_CHECK_initWithStringAndTextDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(initWithStringAndTextDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontFillColor
		#define GEODE_CONCEPT_CHECK_setFontFillColor
		GEODE_CONCEPT_FUNCTION_CHECK(setFontFillColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFontName
		#define GEODE_CONCEPT_CHECK_setFontName
		GEODE_CONCEPT_FUNCTION_CHECK(setFontName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextDefinition
		#define GEODE_CONCEPT_CHECK_setTextDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(setTextDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTexture
		#define GEODE_CONCEPT_CHECK_updateTexture
		GEODE_CONCEPT_FUNCTION_CHECK(updateTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLabelTTF> : ModifyBase<ModifyDerive<Der, cocos2d::CCLabelTTF>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLabelTTF>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLabelTTF>>::ModifyBase;
		using Base = cocos2d::CCLabelTTF;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCLabelTTF@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCLabelTTF, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCLabelTTF@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCLabelTTF)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelTTF::create)), Default, cocos2d::CCLabelTTF, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float>::func(&cocos2d::CCLabelTTF::create)), Default, cocos2d::CCLabelTTF, create, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment>::func(&cocos2d::CCLabelTTF::create)), Default, cocos2d::CCLabelTTF, create, char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment>::func(&cocos2d::CCLabelTTF::create)), Default, cocos2d::CCLabelTTF, create, char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::ccFontDefinition&>::func(&cocos2d::CCLabelTTF::createWithFontDefinition)), Default, cocos2d::CCLabelTTF, createWithFontDefinition, char const*, cocos2d::ccFontDefinition&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelTTF::init)), Thiscall, cocos2d::CCLabelTTF, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCLabelTTF::setString)), Thiscall, cocos2d::CCLabelTTF, setString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelTTF::getString)), Thiscall, cocos2d::CCLabelTTF, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCLabelTTF::_prepareTextDefinition)), Thiscall, cocos2d::CCLabelTTF, _prepareTextDefinition, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccFontDefinition&, bool>::func(&cocos2d::CCLabelTTF::_updateWithTextDefinition)), Thiscall, cocos2d::CCLabelTTF, _updateWithTextDefinition, cocos2d::ccFontDefinition&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelTTF::description)), Thiscall, cocos2d::CCLabelTTF, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCLabelTTF::disableShadow)), Thiscall, cocos2d::CCLabelTTF, disableShadow, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCLabelTTF::disableStroke)), Thiscall, cocos2d::CCLabelTTF, disableStroke, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&, float, float, bool>::func(&cocos2d::CCLabelTTF::enableShadow)), Thiscall, cocos2d::CCLabelTTF, enableShadow, cocos2d::CCSize const&, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B const&, float, bool>::func(&cocos2d::CCLabelTTF::enableStroke)), Thiscall, cocos2d::CCLabelTTF, enableStroke, cocos2d::ccColor3B const&, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelTTF::getFontName)), Thiscall, cocos2d::CCLabelTTF, getFontName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelTTF::getTextDefinition)), Thiscall, cocos2d::CCLabelTTF, getTextDefinition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float>::func(&cocos2d::CCLabelTTF::initWithString)), Thiscall, cocos2d::CCLabelTTF, initWithString, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment>::func(&cocos2d::CCLabelTTF::initWithString)), Thiscall, cocos2d::CCLabelTTF, initWithString, char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment>::func(&cocos2d::CCLabelTTF::initWithString)), Thiscall, cocos2d::CCLabelTTF, initWithString, char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::ccFontDefinition&>::func(&cocos2d::CCLabelTTF::initWithStringAndTextDefinition)), Thiscall, cocos2d::CCLabelTTF, initWithStringAndTextDefinition, char const*, cocos2d::ccFontDefinition&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B const&, bool>::func(&cocos2d::CCLabelTTF::setFontFillColor)), Thiscall, cocos2d::CCLabelTTF, setFontFillColor, cocos2d::ccColor3B const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCLabelTTF::setFontName)), Thiscall, cocos2d::CCLabelTTF, setFontName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccFontDefinition*>::func(&cocos2d::CCLabelTTF::setTextDefinition)), Thiscall, cocos2d::CCLabelTTF, setTextDefinition, cocos2d::ccFontDefinition*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLabelTTF::updateTexture)), Thiscall, cocos2d::CCLabelTTF, updateTexture, )
		}
	};
}
