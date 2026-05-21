#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpriteWithHue.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

	#ifndef GEODE_STATICS_initShader
		#define GEODE_STATICS_initShader
		GEODE_AS_STATIC_FUNCTION(initShader) 
	#endif

	#ifndef GEODE_STATICS_updateColorMatrix
		#define GEODE_STATICS_updateColorMatrix
		GEODE_AS_STATIC_FUNCTION(updateColorMatrix) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, create, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, create, gd::string const&, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, createWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, createWithSpriteFrameName, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, createWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48c90, Thiscall, CCSpriteWithHue, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48660, Thiscall, CCSpriteWithHue, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x486c0, Thiscall, CCSpriteWithHue, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48600, Thiscall, CCSpriteWithHue, initWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x486d0, Thiscall, CCSpriteWithHue, initWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48470, Thiscall, CCSpriteWithHue, getShaderName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48970, Thiscall, CCSpriteWithHue, shaderBody, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48980, Thiscall, CCSpriteWithHue, updateColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, getAlpha, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, getHue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, getUniformLocations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48740, Thiscall, CCSpriteWithHue, initShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, setCustomLuminance, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, setEvenLuminance, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, setHue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, setHueDegrees, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, setLuminance, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, setupDefaultSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489a0, Thiscall, CCSpriteWithHue, updateColorMatrix, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteWithHue, updateHue, float)
		}
	};
}
