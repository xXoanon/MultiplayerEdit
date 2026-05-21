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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_getSprite
		#define GEODE_STATICS_getSprite
		GEODE_AS_STATIC_FUNCTION(getSprite) 
	#endif

	#ifndef GEODE_STATICS_setSprite
		#define GEODE_STATICS_setSprite
		GEODE_AS_STATIC_FUNCTION(setSprite) 
	#endif

	#ifndef GEODE_STATICS_begin
		#define GEODE_STATICS_begin
		GEODE_AS_STATIC_FUNCTION(begin) 
	#endif

	#ifndef GEODE_STATICS_beginWithClear
		#define GEODE_STATICS_beginWithClear
		GEODE_AS_STATIC_FUNCTION(beginWithClear) 
	#endif

	#ifndef GEODE_STATICS_clear
		#define GEODE_STATICS_clear
		GEODE_AS_STATIC_FUNCTION(clear) 
	#endif

	#ifndef GEODE_STATICS_clearDepth
		#define GEODE_STATICS_clearDepth
		GEODE_AS_STATIC_FUNCTION(clearDepth) 
	#endif

	#ifndef GEODE_STATICS_clearStencil
		#define GEODE_STATICS_clearStencil
		GEODE_AS_STATIC_FUNCTION(clearStencil) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_getClearColor
		#define GEODE_STATICS_getClearColor
		GEODE_AS_STATIC_FUNCTION(getClearColor) 
	#endif

	#ifndef GEODE_STATICS_getClearDepth
		#define GEODE_STATICS_getClearDepth
		GEODE_AS_STATIC_FUNCTION(getClearDepth) 
	#endif

	#ifndef GEODE_STATICS_getClearFlags
		#define GEODE_STATICS_getClearFlags
		GEODE_AS_STATIC_FUNCTION(getClearFlags) 
	#endif

	#ifndef GEODE_STATICS_getClearStencil
		#define GEODE_STATICS_getClearStencil
		GEODE_AS_STATIC_FUNCTION(getClearStencil) 
	#endif

	#ifndef GEODE_STATICS_initWithWidthAndHeight
		#define GEODE_STATICS_initWithWidthAndHeight
		GEODE_AS_STATIC_FUNCTION(initWithWidthAndHeight) 
	#endif

	#ifndef GEODE_STATICS_isAutoDraw
		#define GEODE_STATICS_isAutoDraw
		GEODE_AS_STATIC_FUNCTION(isAutoDraw) 
	#endif

	#ifndef GEODE_STATICS_listenToBackground
		#define GEODE_STATICS_listenToBackground
		GEODE_AS_STATIC_FUNCTION(listenToBackground) 
	#endif

	#ifndef GEODE_STATICS_listenToForeground
		#define GEODE_STATICS_listenToForeground
		GEODE_AS_STATIC_FUNCTION(listenToForeground) 
	#endif

	#ifndef GEODE_STATICS_newCCImage
		#define GEODE_STATICS_newCCImage
		GEODE_AS_STATIC_FUNCTION(newCCImage) 
	#endif

	#ifndef GEODE_STATICS_saveToFile
		#define GEODE_STATICS_saveToFile
		GEODE_AS_STATIC_FUNCTION(saveToFile) 
	#endif

	#ifndef GEODE_STATICS_setAutoDraw
		#define GEODE_STATICS_setAutoDraw
		GEODE_AS_STATIC_FUNCTION(setAutoDraw) 
	#endif

	#ifndef GEODE_STATICS_setClearColor
		#define GEODE_STATICS_setClearColor
		GEODE_AS_STATIC_FUNCTION(setClearColor) 
	#endif

	#ifndef GEODE_STATICS_setClearDepth
		#define GEODE_STATICS_setClearDepth
		GEODE_AS_STATIC_FUNCTION(setClearDepth) 
	#endif

	#ifndef GEODE_STATICS_setClearFlags
		#define GEODE_STATICS_setClearFlags
		GEODE_AS_STATIC_FUNCTION(setClearFlags) 
	#endif

	#ifndef GEODE_STATICS_setClearStencil
		#define GEODE_STATICS_setClearStencil
		GEODE_AS_STATIC_FUNCTION(setClearStencil) 
	#endif

	#ifndef GEODE_STATICS_updateInternalScale
		#define GEODE_STATICS_updateInternalScale
		GEODE_AS_STATIC_FUNCTION(updateInternalScale) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSprite
		#define GEODE_CONCEPT_CHECK_getSprite
		GEODE_CONCEPT_FUNCTION_CHECK(getSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSprite
		#define GEODE_CONCEPT_CHECK_setSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_begin
		#define GEODE_CONCEPT_CHECK_begin
		GEODE_CONCEPT_FUNCTION_CHECK(begin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beginWithClear
		#define GEODE_CONCEPT_CHECK_beginWithClear
		GEODE_CONCEPT_FUNCTION_CHECK(beginWithClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clear
		#define GEODE_CONCEPT_CHECK_clear
		GEODE_CONCEPT_FUNCTION_CHECK(clear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearDepth
		#define GEODE_CONCEPT_CHECK_clearDepth
		GEODE_CONCEPT_FUNCTION_CHECK(clearDepth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearStencil
		#define GEODE_CONCEPT_CHECK_clearStencil
		GEODE_CONCEPT_FUNCTION_CHECK(clearStencil) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_end
		#define GEODE_CONCEPT_CHECK_end
		GEODE_CONCEPT_FUNCTION_CHECK(end) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClearColor
		#define GEODE_CONCEPT_CHECK_getClearColor
		GEODE_CONCEPT_FUNCTION_CHECK(getClearColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClearDepth
		#define GEODE_CONCEPT_CHECK_getClearDepth
		GEODE_CONCEPT_FUNCTION_CHECK(getClearDepth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClearFlags
		#define GEODE_CONCEPT_CHECK_getClearFlags
		GEODE_CONCEPT_FUNCTION_CHECK(getClearFlags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClearStencil
		#define GEODE_CONCEPT_CHECK_getClearStencil
		GEODE_CONCEPT_FUNCTION_CHECK(getClearStencil) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithWidthAndHeight
		#define GEODE_CONCEPT_CHECK_initWithWidthAndHeight
		GEODE_CONCEPT_FUNCTION_CHECK(initWithWidthAndHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAutoDraw
		#define GEODE_CONCEPT_CHECK_isAutoDraw
		GEODE_CONCEPT_FUNCTION_CHECK(isAutoDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listenToBackground
		#define GEODE_CONCEPT_CHECK_listenToBackground
		GEODE_CONCEPT_FUNCTION_CHECK(listenToBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listenToForeground
		#define GEODE_CONCEPT_CHECK_listenToForeground
		GEODE_CONCEPT_FUNCTION_CHECK(listenToForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_newCCImage
		#define GEODE_CONCEPT_CHECK_newCCImage
		GEODE_CONCEPT_FUNCTION_CHECK(newCCImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToFile
		#define GEODE_CONCEPT_CHECK_saveToFile
		GEODE_CONCEPT_FUNCTION_CHECK(saveToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAutoDraw
		#define GEODE_CONCEPT_CHECK_setAutoDraw
		GEODE_CONCEPT_FUNCTION_CHECK(setAutoDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClearColor
		#define GEODE_CONCEPT_CHECK_setClearColor
		GEODE_CONCEPT_FUNCTION_CHECK(setClearColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClearDepth
		#define GEODE_CONCEPT_CHECK_setClearDepth
		GEODE_CONCEPT_FUNCTION_CHECK(setClearDepth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClearFlags
		#define GEODE_CONCEPT_CHECK_setClearFlags
		GEODE_CONCEPT_FUNCTION_CHECK(setClearFlags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClearStencil
		#define GEODE_CONCEPT_CHECK_setClearStencil
		GEODE_CONCEPT_FUNCTION_CHECK(setClearStencil) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalScale
		#define GEODE_CONCEPT_CHECK_updateInternalScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalScale) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCRenderTexture> : ModifyBase<ModifyDerive<Der, cocos2d::CCRenderTexture>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCRenderTexture>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCRenderTexture>>::ModifyBase;
		using Base = cocos2d::CCRenderTexture;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCRenderTexture@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCRenderTexture, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCRenderTexture@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCRenderTexture)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&cocos2d::CCRenderTexture::create)), Default, cocos2d::CCRenderTexture, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, cocos2d::CCTexture2DPixelFormat>::func(&cocos2d::CCRenderTexture::create)), Default, cocos2d::CCRenderTexture, create, int, int, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, cocos2d::CCTexture2DPixelFormat, unsigned int>::func(&cocos2d::CCRenderTexture::create)), Default, cocos2d::CCRenderTexture, create, int, int, cocos2d::CCTexture2DPixelFormat, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::draw)), Thiscall, cocos2d::CCRenderTexture, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::visit)), Thiscall, cocos2d::CCRenderTexture, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::getSprite)), Thiscall, cocos2d::CCRenderTexture, getSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSprite*>::func(&cocos2d::CCRenderTexture::setSprite)), Thiscall, cocos2d::CCRenderTexture, setSprite, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::begin)), Thiscall, cocos2d::CCRenderTexture, begin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float>::func(&cocos2d::CCRenderTexture::beginWithClear)), Thiscall, cocos2d::CCRenderTexture, beginWithClear, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float, float>::func(&cocos2d::CCRenderTexture::beginWithClear)), Thiscall, cocos2d::CCRenderTexture, beginWithClear, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float, float, int>::func(&cocos2d::CCRenderTexture::beginWithClear)), Thiscall, cocos2d::CCRenderTexture, beginWithClear, float, float, float, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float, float, int, unsigned int>::func(&cocos2d::CCRenderTexture::beginWithClear)), Thiscall, cocos2d::CCRenderTexture, beginWithClear, float, float, float, float, float, int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, float>::func(&cocos2d::CCRenderTexture::clear)), Thiscall, cocos2d::CCRenderTexture, clear, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCRenderTexture::clearDepth)), Thiscall, cocos2d::CCRenderTexture, clearDepth, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::CCRenderTexture::clearStencil)), Thiscall, cocos2d::CCRenderTexture, clearStencil, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::end)), Thiscall, cocos2d::CCRenderTexture, end, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::getClearColor)), Thiscall, cocos2d::CCRenderTexture, getClearColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::getClearDepth)), Thiscall, cocos2d::CCRenderTexture, getClearDepth, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::getClearFlags)), Thiscall, cocos2d::CCRenderTexture, getClearFlags, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::getClearStencil)), Thiscall, cocos2d::CCRenderTexture, getClearStencil, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, cocos2d::CCTexture2DPixelFormat>::func(&cocos2d::CCRenderTexture::initWithWidthAndHeight)), Thiscall, cocos2d::CCRenderTexture, initWithWidthAndHeight, int, int, cocos2d::CCTexture2DPixelFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, cocos2d::CCTexture2DPixelFormat, unsigned int>::func(&cocos2d::CCRenderTexture::initWithWidthAndHeight)), Thiscall, cocos2d::CCRenderTexture, initWithWidthAndHeight, int, int, cocos2d::CCTexture2DPixelFormat, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCRenderTexture::isAutoDraw)), Thiscall, cocos2d::CCRenderTexture, isAutoDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCRenderTexture::listenToBackground)), Thiscall, cocos2d::CCRenderTexture, listenToBackground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCRenderTexture::listenToForeground)), Thiscall, cocos2d::CCRenderTexture, listenToForeground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCRenderTexture::newCCImage)), Thiscall, cocos2d::CCRenderTexture, newCCImage, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCRenderTexture::saveToFile)), Thiscall, cocos2d::CCRenderTexture, saveToFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::eImageFormat>::func(&cocos2d::CCRenderTexture::saveToFile)), Thiscall, cocos2d::CCRenderTexture, saveToFile, char const*, cocos2d::eImageFormat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCRenderTexture::setAutoDraw)), Thiscall, cocos2d::CCRenderTexture, setAutoDraw, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor4F const&>::func(&cocos2d::CCRenderTexture::setClearColor)), Thiscall, cocos2d::CCRenderTexture, setClearColor, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCRenderTexture::setClearDepth)), Thiscall, cocos2d::CCRenderTexture, setClearDepth, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCRenderTexture::setClearFlags)), Thiscall, cocos2d::CCRenderTexture, setClearFlags, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCRenderTexture::setClearStencil)), Thiscall, cocos2d::CCRenderTexture, setClearStencil, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&cocos2d::CCRenderTexture::updateInternalScale)), Thiscall, cocos2d::CCRenderTexture, updateInternalScale, float, float)
		}
	};
}
