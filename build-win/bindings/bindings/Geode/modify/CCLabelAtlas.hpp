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

	#ifndef GEODE_STATICS_updateAtlasValues
		#define GEODE_STATICS_updateAtlasValues
		GEODE_AS_STATIC_FUNCTION(updateAtlasValues) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_getString
		#define GEODE_STATICS_getString
		GEODE_AS_STATIC_FUNCTION(getString) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAtlasValues
		#define GEODE_CONCEPT_CHECK_updateAtlasValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateAtlasValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithString
		#define GEODE_CONCEPT_CHECK_initWithString
		GEODE_CONCEPT_FUNCTION_CHECK(initWithString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLabelAtlas> : ModifyBase<ModifyDerive<Der, cocos2d::CCLabelAtlas>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLabelAtlas>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLabelAtlas>>::ModifyBase;
		using Base = cocos2d::CCLabelAtlas;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCLabelAtlas::create)), Default, cocos2d::CCLabelAtlas, create, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, unsigned int, unsigned int, unsigned int>::func(&cocos2d::CCLabelAtlas::create)), Default, cocos2d::CCLabelAtlas, create, char const*, char const*, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelAtlas::updateAtlasValues)), Thiscall, cocos2d::CCLabelAtlas, updateAtlasValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCLabelAtlas::setString)), Thiscall, cocos2d::CCLabelAtlas, setString, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLabelAtlas::getString)), Thiscall, cocos2d::CCLabelAtlas, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCLabelAtlas::initWithString)), Thiscall, cocos2d::CCLabelAtlas, initWithString, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, unsigned int, unsigned int, unsigned int>::func(&cocos2d::CCLabelAtlas::initWithString)), Thiscall, cocos2d::CCLabelAtlas, initWithString, char const*, char const*, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int>::func(&cocos2d::CCLabelAtlas::initWithString)), Thiscall, cocos2d::CCLabelAtlas, initWithString, char const*, cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int)
		}
	};
}
