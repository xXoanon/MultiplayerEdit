#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpriteWithHue.hpp>
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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrame
		#define GEODE_STATICS_initWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_getShaderName
		#define GEODE_STATICS_getShaderName
		GEODE_AS_STATIC_FUNCTION(getShaderName) 
	#endif

	#ifndef GEODE_STATICS_shaderBody
		#define GEODE_STATICS_shaderBody
		GEODE_AS_STATIC_FUNCTION(shaderBody) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_getAlpha
		#define GEODE_STATICS_getAlpha
		GEODE_AS_STATIC_FUNCTION(getAlpha) 
	#endif

	#ifndef GEODE_STATICS_getHue
		#define GEODE_STATICS_getHue
		GEODE_AS_STATIC_FUNCTION(getHue) 
	#endif

	#ifndef GEODE_STATICS_getUniformLocations
		#define GEODE_STATICS_getUniformLocations
		GEODE_AS_STATIC_FUNCTION(getUniformLocations) 
	#endif

	#ifndef GEODE_STATICS_initShader
		#define GEODE_STATICS_initShader
		GEODE_AS_STATIC_FUNCTION(initShader) 
	#endif

	#ifndef GEODE_STATICS_setCustomLuminance
		#define GEODE_STATICS_setCustomLuminance
		GEODE_AS_STATIC_FUNCTION(setCustomLuminance) 
	#endif

	#ifndef GEODE_STATICS_setEvenLuminance
		#define GEODE_STATICS_setEvenLuminance
		GEODE_AS_STATIC_FUNCTION(setEvenLuminance) 
	#endif

	#ifndef GEODE_STATICS_setHue
		#define GEODE_STATICS_setHue
		GEODE_AS_STATIC_FUNCTION(setHue) 
	#endif

	#ifndef GEODE_STATICS_setHueDegrees
		#define GEODE_STATICS_setHueDegrees
		GEODE_AS_STATIC_FUNCTION(setHueDegrees) 
	#endif

	#ifndef GEODE_STATICS_setLuminance
		#define GEODE_STATICS_setLuminance
		GEODE_AS_STATIC_FUNCTION(setLuminance) 
	#endif

	#ifndef GEODE_STATICS_setupDefaultSettings
		#define GEODE_STATICS_setupDefaultSettings
		GEODE_AS_STATIC_FUNCTION(setupDefaultSettings) 
	#endif

	#ifndef GEODE_STATICS_updateColorMatrix
		#define GEODE_STATICS_updateColorMatrix
		GEODE_AS_STATIC_FUNCTION(updateColorMatrix) 
	#endif

	#ifndef GEODE_STATICS_updateHue
		#define GEODE_STATICS_updateHue
		GEODE_AS_STATIC_FUNCTION(updateHue) 
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

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShaderName
		#define GEODE_CONCEPT_CHECK_getShaderName
		GEODE_CONCEPT_FUNCTION_CHECK(getShaderName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shaderBody
		#define GEODE_CONCEPT_CHECK_shaderBody
		GEODE_CONCEPT_FUNCTION_CHECK(shaderBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAlpha
		#define GEODE_CONCEPT_CHECK_getAlpha
		GEODE_CONCEPT_FUNCTION_CHECK(getAlpha) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHue
		#define GEODE_CONCEPT_CHECK_getHue
		GEODE_CONCEPT_FUNCTION_CHECK(getHue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUniformLocations
		#define GEODE_CONCEPT_CHECK_getUniformLocations
		GEODE_CONCEPT_FUNCTION_CHECK(getUniformLocations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initShader
		#define GEODE_CONCEPT_CHECK_initShader
		GEODE_CONCEPT_FUNCTION_CHECK(initShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomLuminance
		#define GEODE_CONCEPT_CHECK_setCustomLuminance
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomLuminance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEvenLuminance
		#define GEODE_CONCEPT_CHECK_setEvenLuminance
		GEODE_CONCEPT_FUNCTION_CHECK(setEvenLuminance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHue
		#define GEODE_CONCEPT_CHECK_setHue
		GEODE_CONCEPT_FUNCTION_CHECK(setHue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHueDegrees
		#define GEODE_CONCEPT_CHECK_setHueDegrees
		GEODE_CONCEPT_FUNCTION_CHECK(setHueDegrees) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLuminance
		#define GEODE_CONCEPT_CHECK_setLuminance
		GEODE_CONCEPT_FUNCTION_CHECK(setLuminance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupDefaultSettings
		#define GEODE_CONCEPT_CHECK_setupDefaultSettings
		GEODE_CONCEPT_FUNCTION_CHECK(setupDefaultSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorMatrix
		#define GEODE_CONCEPT_CHECK_updateColorMatrix
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorMatrix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHue
		#define GEODE_CONCEPT_CHECK_updateHue
		GEODE_CONCEPT_FUNCTION_CHECK(updateHue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpriteWithHue> : ModifyBase<ModifyDerive<Der, CCSpriteWithHue>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpriteWithHue>>;
		using ModifyBase<ModifyDerive<Der, CCSpriteWithHue>>::ModifyBase;
		using Base = CCSpriteWithHue;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15CCSpriteWithHue6createERKSs")), Default, CCSpriteWithHue, create, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15CCSpriteWithHue6createERKSsRKN7cocos2d6CCRectE")), Default, CCSpriteWithHue, create, gd::string const&, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&CCSpriteWithHue::createWithSpriteFrame)), Default, CCSpriteWithHue, createWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15CCSpriteWithHue25createWithSpriteFrameNameERKSs")), Default, CCSpriteWithHue, createWithSpriteFrameName, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&CCSpriteWithHue::createWithTexture)), Default, CCSpriteWithHue, createWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool>::func(&CCSpriteWithHue::createWithTexture)), Default, CCSpriteWithHue, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCSpriteWithHue::draw)), Default, CCSpriteWithHue, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&CCSpriteWithHue::initWithTexture)), Default, CCSpriteWithHue, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&CCSpriteWithHue::initWithTexture)), Default, CCSpriteWithHue, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool>::func(&CCSpriteWithHue::initWithTexture)), Default, CCSpriteWithHue, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&CCSpriteWithHue::initWithSpriteFrame)), Default, CCSpriteWithHue, initWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCSpriteWithHue::getShaderName)), Default, CCSpriteWithHue, getShaderName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCSpriteWithHue::shaderBody)), Default, CCSpriteWithHue, shaderBody, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCSpriteWithHue::updateColor)), Default, CCSpriteWithHue, updateColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCSpriteWithHue::getAlpha)), Default, CCSpriteWithHue, getAlpha, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCSpriteWithHue::getHue)), Default, CCSpriteWithHue, getHue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCSpriteWithHue::getUniformLocations)), Default, CCSpriteWithHue, getUniformLocations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCSpriteWithHue::initShader)), Default, CCSpriteWithHue, initShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&CCSpriteWithHue::setCustomLuminance)), Default, CCSpriteWithHue, setCustomLuminance, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCSpriteWithHue::setEvenLuminance)), Default, CCSpriteWithHue, setEvenLuminance, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCSpriteWithHue::setHue)), Default, CCSpriteWithHue, setHue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCSpriteWithHue::setHueDegrees)), Default, CCSpriteWithHue, setHueDegrees, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCSpriteWithHue::setLuminance)), Default, CCSpriteWithHue, setLuminance, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCSpriteWithHue::setupDefaultSettings)), Default, CCSpriteWithHue, setupDefaultSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCSpriteWithHue::updateColorMatrix)), Default, CCSpriteWithHue, updateColorMatrix, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCSpriteWithHue::updateHue)), Default, CCSpriteWithHue, updateHue, float)
		}
	};
}
