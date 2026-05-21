#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_defaultAlphaPixelFormat
		#define GEODE_STATICS_defaultAlphaPixelFormat
		GEODE_AS_STATIC_FUNCTION(defaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_PVRImagesHavePremultipliedAlpha
		#define GEODE_STATICS_PVRImagesHavePremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(PVRImagesHavePremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_setDefaultAlphaPixelFormat
		#define GEODE_STATICS_setDefaultAlphaPixelFormat
		GEODE_AS_STATIC_FUNCTION(setDefaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_getPixelFormat
		#define GEODE_STATICS_getPixelFormat
		GEODE_AS_STATIC_FUNCTION(getPixelFormat) 
	#endif

	#ifndef GEODE_STATICS_getPixelsWide
		#define GEODE_STATICS_getPixelsWide
		GEODE_AS_STATIC_FUNCTION(getPixelsWide) 
	#endif

	#ifndef GEODE_STATICS_getPixelsHigh
		#define GEODE_STATICS_getPixelsHigh
		GEODE_AS_STATIC_FUNCTION(getPixelsHigh) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_getMaxS
		#define GEODE_STATICS_getMaxS
		GEODE_AS_STATIC_FUNCTION(getMaxS) 
	#endif

	#ifndef GEODE_STATICS_setMaxS
		#define GEODE_STATICS_setMaxS
		GEODE_AS_STATIC_FUNCTION(setMaxS) 
	#endif

	#ifndef GEODE_STATICS_getMaxT
		#define GEODE_STATICS_getMaxT
		GEODE_AS_STATIC_FUNCTION(getMaxT) 
	#endif

	#ifndef GEODE_STATICS_setMaxT
		#define GEODE_STATICS_setMaxT
		GEODE_AS_STATIC_FUNCTION(setMaxT) 
	#endif

	#ifndef GEODE_STATICS_getContentSize
		#define GEODE_STATICS_getContentSize
		GEODE_AS_STATIC_FUNCTION(getContentSize) 
	#endif

	#ifndef GEODE_STATICS_getShaderProgram
		#define GEODE_STATICS_getShaderProgram
		GEODE_AS_STATIC_FUNCTION(getShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_setShaderProgram
		#define GEODE_STATICS_setShaderProgram
		GEODE_AS_STATIC_FUNCTION(setShaderProgram) 
	#endif

	#ifndef GEODE_STATICS_bitsPerPixelForFormat
		#define GEODE_STATICS_bitsPerPixelForFormat
		GEODE_AS_STATIC_FUNCTION(bitsPerPixelForFormat) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_drawAtPoint
		#define GEODE_STATICS_drawAtPoint
		GEODE_AS_STATIC_FUNCTION(drawAtPoint) 
	#endif

	#ifndef GEODE_STATICS_drawInRect
		#define GEODE_STATICS_drawInRect
		GEODE_AS_STATIC_FUNCTION(drawInRect) 
	#endif

	#ifndef GEODE_STATICS_generateMipmap
		#define GEODE_STATICS_generateMipmap
		GEODE_AS_STATIC_FUNCTION(generateMipmap) 
	#endif

	#ifndef GEODE_STATICS_getContentSizeInPixels
		#define GEODE_STATICS_getContentSizeInPixels
		GEODE_AS_STATIC_FUNCTION(getContentSizeInPixels) 
	#endif

	#ifndef GEODE_STATICS_hasMipmaps
		#define GEODE_STATICS_hasMipmaps
		GEODE_AS_STATIC_FUNCTION(hasMipmaps) 
	#endif

	#ifndef GEODE_STATICS_hasPremultipliedAlpha
		#define GEODE_STATICS_hasPremultipliedAlpha
		GEODE_AS_STATIC_FUNCTION(hasPremultipliedAlpha) 
	#endif

	#ifndef GEODE_STATICS_initPremultipliedATextureWithImage
		#define GEODE_STATICS_initPremultipliedATextureWithImage
		GEODE_AS_STATIC_FUNCTION(initPremultipliedATextureWithImage) 
	#endif

	#ifndef GEODE_STATICS_initWithData
		#define GEODE_STATICS_initWithData
		GEODE_AS_STATIC_FUNCTION(initWithData) 
	#endif

	#ifndef GEODE_STATICS_initWithETCFile
		#define GEODE_STATICS_initWithETCFile
		GEODE_AS_STATIC_FUNCTION(initWithETCFile) 
	#endif

	#ifndef GEODE_STATICS_initWithImage
		#define GEODE_STATICS_initWithImage
		GEODE_AS_STATIC_FUNCTION(initWithImage) 
	#endif

	#ifndef GEODE_STATICS_initWithPVRFile
		#define GEODE_STATICS_initWithPVRFile
		GEODE_AS_STATIC_FUNCTION(initWithPVRFile) 
	#endif

	#ifndef GEODE_STATICS_initWithString
		#define GEODE_STATICS_initWithString
		GEODE_AS_STATIC_FUNCTION(initWithString) 
	#endif

	#ifndef GEODE_STATICS_keepData
		#define GEODE_STATICS_keepData
		GEODE_AS_STATIC_FUNCTION(keepData) 
	#endif

	#ifndef GEODE_STATICS_releaseData
		#define GEODE_STATICS_releaseData
		GEODE_AS_STATIC_FUNCTION(releaseData) 
	#endif

	#ifndef GEODE_STATICS_releaseGLTexture
		#define GEODE_STATICS_releaseGLTexture
		GEODE_AS_STATIC_FUNCTION(releaseGLTexture) 
	#endif

	#ifndef GEODE_STATICS_setAliasTexParameters
		#define GEODE_STATICS_setAliasTexParameters
		GEODE_AS_STATIC_FUNCTION(setAliasTexParameters) 
	#endif

	#ifndef GEODE_STATICS_setAntiAliasTexParameters
		#define GEODE_STATICS_setAntiAliasTexParameters
		GEODE_AS_STATIC_FUNCTION(setAntiAliasTexParameters) 
	#endif

	#ifndef GEODE_STATICS_setTexParameters
		#define GEODE_STATICS_setTexParameters
		GEODE_AS_STATIC_FUNCTION(setTexParameters) 
	#endif

	#ifndef GEODE_STATICS_stringForFormat
		#define GEODE_STATICS_stringForFormat
		GEODE_AS_STATIC_FUNCTION(stringForFormat) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_defaultAlphaPixelFormat
		#define GEODE_CONCEPT_CHECK_defaultAlphaPixelFormat
		GEODE_CONCEPT_FUNCTION_CHECK(defaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_PVRImagesHavePremultipliedAlpha
		#define GEODE_CONCEPT_CHECK_PVRImagesHavePremultipliedAlpha
		GEODE_CONCEPT_FUNCTION_CHECK(PVRImagesHavePremultipliedAlpha) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultAlphaPixelFormat
		#define GEODE_CONCEPT_CHECK_setDefaultAlphaPixelFormat
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultAlphaPixelFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPixelFormat
		#define GEODE_CONCEPT_CHECK_getPixelFormat
		GEODE_CONCEPT_FUNCTION_CHECK(getPixelFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPixelsWide
		#define GEODE_CONCEPT_CHECK_getPixelsWide
		GEODE_CONCEPT_FUNCTION_CHECK(getPixelsWide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPixelsHigh
		#define GEODE_CONCEPT_CHECK_getPixelsHigh
		GEODE_CONCEPT_FUNCTION_CHECK(getPixelsHigh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getName
		#define GEODE_CONCEPT_CHECK_getName
		GEODE_CONCEPT_FUNCTION_CHECK(getName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxS
		#define GEODE_CONCEPT_CHECK_getMaxS
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxS
		#define GEODE_CONCEPT_CHECK_setMaxS
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxT
		#define GEODE_CONCEPT_CHECK_getMaxT
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxT
		#define GEODE_CONCEPT_CHECK_setMaxT
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxT) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentSize
		#define GEODE_CONCEPT_CHECK_getContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(getContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShaderProgram
		#define GEODE_CONCEPT_CHECK_getShaderProgram
		GEODE_CONCEPT_FUNCTION_CHECK(getShaderProgram) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setShaderProgram
		#define GEODE_CONCEPT_CHECK_setShaderProgram
		GEODE_CONCEPT_FUNCTION_CHECK(setShaderProgram) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bitsPerPixelForFormat
		#define GEODE_CONCEPT_CHECK_bitsPerPixelForFormat
		GEODE_CONCEPT_FUNCTION_CHECK(bitsPerPixelForFormat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawAtPoint
		#define GEODE_CONCEPT_CHECK_drawAtPoint
		GEODE_CONCEPT_FUNCTION_CHECK(drawAtPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawInRect
		#define GEODE_CONCEPT_CHECK_drawInRect
		GEODE_CONCEPT_FUNCTION_CHECK(drawInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateMipmap
		#define GEODE_CONCEPT_CHECK_generateMipmap
		GEODE_CONCEPT_FUNCTION_CHECK(generateMipmap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentSizeInPixels
		#define GEODE_CONCEPT_CHECK_getContentSizeInPixels
		GEODE_CONCEPT_FUNCTION_CHECK(getContentSizeInPixels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasMipmaps
		#define GEODE_CONCEPT_CHECK_hasMipmaps
		GEODE_CONCEPT_FUNCTION_CHECK(hasMipmaps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasPremultipliedAlpha
		#define GEODE_CONCEPT_CHECK_hasPremultipliedAlpha
		GEODE_CONCEPT_FUNCTION_CHECK(hasPremultipliedAlpha) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initPremultipliedATextureWithImage
		#define GEODE_CONCEPT_CHECK_initPremultipliedATextureWithImage
		GEODE_CONCEPT_FUNCTION_CHECK(initPremultipliedATextureWithImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithData
		#define GEODE_CONCEPT_CHECK_initWithData
		GEODE_CONCEPT_FUNCTION_CHECK(initWithData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithETCFile
		#define GEODE_CONCEPT_CHECK_initWithETCFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithETCFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithImage
		#define GEODE_CONCEPT_CHECK_initWithImage
		GEODE_CONCEPT_FUNCTION_CHECK(initWithImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithPVRFile
		#define GEODE_CONCEPT_CHECK_initWithPVRFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithPVRFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithString
		#define GEODE_CONCEPT_CHECK_initWithString
		GEODE_CONCEPT_FUNCTION_CHECK(initWithString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keepData
		#define GEODE_CONCEPT_CHECK_keepData
		GEODE_CONCEPT_FUNCTION_CHECK(keepData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseData
		#define GEODE_CONCEPT_CHECK_releaseData
		GEODE_CONCEPT_FUNCTION_CHECK(releaseData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseGLTexture
		#define GEODE_CONCEPT_CHECK_releaseGLTexture
		GEODE_CONCEPT_FUNCTION_CHECK(releaseGLTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAliasTexParameters
		#define GEODE_CONCEPT_CHECK_setAliasTexParameters
		GEODE_CONCEPT_FUNCTION_CHECK(setAliasTexParameters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAntiAliasTexParameters
		#define GEODE_CONCEPT_CHECK_setAntiAliasTexParameters
		GEODE_CONCEPT_FUNCTION_CHECK(setAntiAliasTexParameters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexParameters
		#define GEODE_CONCEPT_CHECK_setTexParameters
		GEODE_CONCEPT_FUNCTION_CHECK(setTexParameters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringForFormat
		#define GEODE_CONCEPT_CHECK_stringForFormat
		GEODE_CONCEPT_FUNCTION_CHECK(stringForFormat) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTexture2D> : ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTexture2D>>::ModifyBase;
		using Base = cocos2d::CCTexture2D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTexture2D@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTexture2D, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTexture2D@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTexture2D)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::defaultAlphaPixelFormat)), Default, cocos2d::CCTexture2D, defaultAlphaPixelFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCTexture2D::PVRImagesHavePremultipliedAlpha)), Default, cocos2d::CCTexture2D, PVRImagesHavePremultipliedAlpha, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2DPixelFormat>::func(&cocos2d::CCTexture2D::setDefaultAlphaPixelFormat)), Default, cocos2d::CCTexture2D, setDefaultAlphaPixelFormat, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getPixelFormat)), Thiscall, cocos2d::CCTexture2D, getPixelFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getPixelsWide)), Thiscall, cocos2d::CCTexture2D, getPixelsWide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getPixelsHigh)), Thiscall, cocos2d::CCTexture2D, getPixelsHigh, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getName)), Thiscall, cocos2d::CCTexture2D, getName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getMaxS)), Thiscall, cocos2d::CCTexture2D, getMaxS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCTexture2D::setMaxS)), Thiscall, cocos2d::CCTexture2D, setMaxS, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getMaxT)), Thiscall, cocos2d::CCTexture2D, getMaxT, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCTexture2D::setMaxT)), Thiscall, cocos2d::CCTexture2D, setMaxT, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getContentSize)), Thiscall, cocos2d::CCTexture2D, getContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getShaderProgram)), Thiscall, cocos2d::CCTexture2D, getShaderProgram, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCGLProgram*>::func(&cocos2d::CCTexture2D::setShaderProgram)), Thiscall, cocos2d::CCTexture2D, setShaderProgram, cocos2d::CCGLProgram*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::bitsPerPixelForFormat)), Thiscall, cocos2d::CCTexture2D, bitsPerPixelForFormat, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2DPixelFormat>::func(&cocos2d::CCTexture2D::bitsPerPixelForFormat)), Thiscall, cocos2d::CCTexture2D, bitsPerPixelForFormat, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::description)), Thiscall, cocos2d::CCTexture2D, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTexture2D::drawAtPoint)), Thiscall, cocos2d::CCTexture2D, drawAtPoint, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCTexture2D::drawInRect)), Thiscall, cocos2d::CCTexture2D, drawInRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::generateMipmap)), Thiscall, cocos2d::CCTexture2D, generateMipmap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::getContentSizeInPixels)), Thiscall, cocos2d::CCTexture2D, getContentSizeInPixels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::hasMipmaps)), Thiscall, cocos2d::CCTexture2D, hasMipmaps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::hasPremultipliedAlpha)), Thiscall, cocos2d::CCTexture2D, hasPremultipliedAlpha, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCImage*, unsigned int, unsigned int>::func(&cocos2d::CCTexture2D::initPremultipliedATextureWithImage)), Thiscall, cocos2d::CCTexture2D, initPremultipliedATextureWithImage, cocos2d::CCImage*, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&>::func(&cocos2d::CCTexture2D::initWithData)), Thiscall, cocos2d::CCTexture2D, initWithData, void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTexture2D::initWithETCFile)), Thiscall, cocos2d::CCTexture2D, initWithETCFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCImage*>::func(&cocos2d::CCTexture2D::initWithImage)), Thiscall, cocos2d::CCTexture2D, initWithImage, cocos2d::CCImage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTexture2D::initWithPVRFile)), Thiscall, cocos2d::CCTexture2D, initWithPVRFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::ccFontDefinition*>::func(&cocos2d::CCTexture2D::initWithString)), Thiscall, cocos2d::CCTexture2D, initWithString, char const*, cocos2d::ccFontDefinition*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float>::func(&cocos2d::CCTexture2D::initWithString)), Thiscall, cocos2d::CCTexture2D, initWithString, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment>::func(&cocos2d::CCTexture2D::initWithString)), Thiscall, cocos2d::CCTexture2D, initWithString, char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, unsigned int>::func(&cocos2d::CCTexture2D::keepData)), Thiscall, cocos2d::CCTexture2D, keepData, void*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&cocos2d::CCTexture2D::releaseData)), Thiscall, cocos2d::CCTexture2D, releaseData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::releaseGLTexture)), Thiscall, cocos2d::CCTexture2D, releaseGLTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::setAliasTexParameters)), Thiscall, cocos2d::CCTexture2D, setAliasTexParameters, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::setAntiAliasTexParameters)), Thiscall, cocos2d::CCTexture2D, setAntiAliasTexParameters, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccTexParams*>::func(&cocos2d::CCTexture2D::setTexParameters)), Thiscall, cocos2d::CCTexture2D, setTexParameters, cocos2d::ccTexParams*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCTexture2D::stringForFormat)), Thiscall, cocos2d::CCTexture2D, stringForFormat, )
		}
	};
}
