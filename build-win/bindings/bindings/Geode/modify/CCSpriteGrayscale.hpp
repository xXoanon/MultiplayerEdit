#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpriteGrayscale.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_getShaderName
		#define GEODE_STATICS_getShaderName
		GEODE_AS_STATIC_FUNCTION(getShaderName) 
	#endif

	#ifndef GEODE_STATICS_shaderBody
		#define GEODE_STATICS_shaderBody
		GEODE_AS_STATIC_FUNCTION(shaderBody) 
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

	#ifndef GEODE_CONCEPT_CHECK_getShaderName
		#define GEODE_CONCEPT_CHECK_getShaderName
		GEODE_CONCEPT_FUNCTION_CHECK(getShaderName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shaderBody
		#define GEODE_CONCEPT_CHECK_shaderBody
		GEODE_CONCEPT_FUNCTION_CHECK(shaderBody) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpriteGrayscale> : ModifyBase<ModifyDerive<Der, CCSpriteGrayscale>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpriteGrayscale>>;
		using ModifyBase<ModifyDerive<Der, CCSpriteGrayscale>>::ModifyBase;
		using Base = CCSpriteGrayscale;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteGrayscale, create, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteGrayscale, create, gd::string const&, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteGrayscale, createWithSpriteFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49090, Default, CCSpriteGrayscale, createWithSpriteFrameName, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteGrayscale, createWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpriteGrayscale, createWithTexture, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49030, Thiscall, CCSpriteGrayscale, getShaderName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48e70, Thiscall, CCSpriteGrayscale, shaderBody, )
		}
	};
}
