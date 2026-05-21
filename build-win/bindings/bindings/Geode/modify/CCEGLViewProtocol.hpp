#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getFrameSize
		#define GEODE_STATICS_getFrameSize
		GEODE_AS_STATIC_FUNCTION(getFrameSize) 
	#endif

	#ifndef GEODE_STATICS_setFrameSize
		#define GEODE_STATICS_setFrameSize
		GEODE_AS_STATIC_FUNCTION(setFrameSize) 
	#endif

	#ifndef GEODE_STATICS_getVisibleSize
		#define GEODE_STATICS_getVisibleSize
		GEODE_AS_STATIC_FUNCTION(getVisibleSize) 
	#endif

	#ifndef GEODE_STATICS_getVisibleOrigin
		#define GEODE_STATICS_getVisibleOrigin
		GEODE_AS_STATIC_FUNCTION(getVisibleOrigin) 
	#endif

	#ifndef GEODE_STATICS_setDesignResolutionSize
		#define GEODE_STATICS_setDesignResolutionSize
		GEODE_AS_STATIC_FUNCTION(setDesignResolutionSize) 
	#endif

	#ifndef GEODE_STATICS_getDesignResolutionSize
		#define GEODE_STATICS_getDesignResolutionSize
		GEODE_AS_STATIC_FUNCTION(getDesignResolutionSize) 
	#endif

	#ifndef GEODE_STATICS_setTouchDelegate
		#define GEODE_STATICS_setTouchDelegate
		GEODE_AS_STATIC_FUNCTION(setTouchDelegate) 
	#endif

	#ifndef GEODE_STATICS_setViewPortInPoints
		#define GEODE_STATICS_setViewPortInPoints
		GEODE_AS_STATIC_FUNCTION(setViewPortInPoints) 
	#endif

	#ifndef GEODE_STATICS_setScissorInPoints
		#define GEODE_STATICS_setScissorInPoints
		GEODE_AS_STATIC_FUNCTION(setScissorInPoints) 
	#endif

	#ifndef GEODE_STATICS_isScissorEnabled
		#define GEODE_STATICS_isScissorEnabled
		GEODE_AS_STATIC_FUNCTION(isScissorEnabled) 
	#endif

	#ifndef GEODE_STATICS_getScissorRect
		#define GEODE_STATICS_getScissorRect
		GEODE_AS_STATIC_FUNCTION(getScissorRect) 
	#endif

	#ifndef GEODE_STATICS_setViewName
		#define GEODE_STATICS_setViewName
		GEODE_AS_STATIC_FUNCTION(setViewName) 
	#endif

	#ifndef GEODE_STATICS_pollInputEvents
		#define GEODE_STATICS_pollInputEvents
		GEODE_AS_STATIC_FUNCTION(pollInputEvents) 
	#endif

	#ifndef GEODE_STATICS_handleTouchesBegin
		#define GEODE_STATICS_handleTouchesBegin
		GEODE_AS_STATIC_FUNCTION(handleTouchesBegin) 
	#endif

	#ifndef GEODE_STATICS_handleTouchesMove
		#define GEODE_STATICS_handleTouchesMove
		GEODE_AS_STATIC_FUNCTION(handleTouchesMove) 
	#endif

	#ifndef GEODE_STATICS_handleTouchesEnd
		#define GEODE_STATICS_handleTouchesEnd
		GEODE_AS_STATIC_FUNCTION(handleTouchesEnd) 
	#endif

	#ifndef GEODE_STATICS_handleTouchesCancel
		#define GEODE_STATICS_handleTouchesCancel
		GEODE_AS_STATIC_FUNCTION(handleTouchesCancel) 
	#endif

	#ifndef GEODE_STATICS_getScaleX
		#define GEODE_STATICS_getScaleX
		GEODE_AS_STATIC_FUNCTION(getScaleX) 
	#endif

	#ifndef GEODE_STATICS_getScaleY
		#define GEODE_STATICS_getScaleY
		GEODE_AS_STATIC_FUNCTION(getScaleY) 
	#endif

	#ifndef GEODE_STATICS_getSetOfTouchesEndOrCancel
		#define GEODE_STATICS_getSetOfTouchesEndOrCancel
		GEODE_AS_STATIC_FUNCTION(getSetOfTouchesEndOrCancel) 
	#endif

	#ifndef GEODE_STATICS_getViewName
		#define GEODE_STATICS_getViewName
		GEODE_AS_STATIC_FUNCTION(getViewName) 
	#endif

	#ifndef GEODE_STATICS_getViewPortRect
		#define GEODE_STATICS_getViewPortRect
		GEODE_AS_STATIC_FUNCTION(getViewPortRect) 
	#endif

	#ifndef GEODE_STATICS_updateDesignResolutionSize
		#define GEODE_STATICS_updateDesignResolutionSize
		GEODE_AS_STATIC_FUNCTION(updateDesignResolutionSize) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getFrameSize
		#define GEODE_CONCEPT_CHECK_getFrameSize
		GEODE_CONCEPT_FUNCTION_CHECK(getFrameSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFrameSize
		#define GEODE_CONCEPT_CHECK_setFrameSize
		GEODE_CONCEPT_FUNCTION_CHECK(setFrameSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVisibleSize
		#define GEODE_CONCEPT_CHECK_getVisibleSize
		GEODE_CONCEPT_FUNCTION_CHECK(getVisibleSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVisibleOrigin
		#define GEODE_CONCEPT_CHECK_getVisibleOrigin
		GEODE_CONCEPT_FUNCTION_CHECK(getVisibleOrigin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDesignResolutionSize
		#define GEODE_CONCEPT_CHECK_setDesignResolutionSize
		GEODE_CONCEPT_FUNCTION_CHECK(setDesignResolutionSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDesignResolutionSize
		#define GEODE_CONCEPT_CHECK_getDesignResolutionSize
		GEODE_CONCEPT_FUNCTION_CHECK(getDesignResolutionSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchDelegate
		#define GEODE_CONCEPT_CHECK_setTouchDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setViewPortInPoints
		#define GEODE_CONCEPT_CHECK_setViewPortInPoints
		GEODE_CONCEPT_FUNCTION_CHECK(setViewPortInPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScissorInPoints
		#define GEODE_CONCEPT_CHECK_setScissorInPoints
		GEODE_CONCEPT_FUNCTION_CHECK(setScissorInPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isScissorEnabled
		#define GEODE_CONCEPT_CHECK_isScissorEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isScissorEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScissorRect
		#define GEODE_CONCEPT_CHECK_getScissorRect
		GEODE_CONCEPT_FUNCTION_CHECK(getScissorRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setViewName
		#define GEODE_CONCEPT_CHECK_setViewName
		GEODE_CONCEPT_FUNCTION_CHECK(setViewName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pollInputEvents
		#define GEODE_CONCEPT_CHECK_pollInputEvents
		GEODE_CONCEPT_FUNCTION_CHECK(pollInputEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchesBegin
		#define GEODE_CONCEPT_CHECK_handleTouchesBegin
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchesBegin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchesMove
		#define GEODE_CONCEPT_CHECK_handleTouchesMove
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchesMove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchesEnd
		#define GEODE_CONCEPT_CHECK_handleTouchesEnd
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchesEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchesCancel
		#define GEODE_CONCEPT_CHECK_handleTouchesCancel
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchesCancel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleX
		#define GEODE_CONCEPT_CHECK_getScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaleY
		#define GEODE_CONCEPT_CHECK_getScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(getScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSetOfTouchesEndOrCancel
		#define GEODE_CONCEPT_CHECK_getSetOfTouchesEndOrCancel
		GEODE_CONCEPT_FUNCTION_CHECK(getSetOfTouchesEndOrCancel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getViewName
		#define GEODE_CONCEPT_CHECK_getViewName
		GEODE_CONCEPT_FUNCTION_CHECK(getViewName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getViewPortRect
		#define GEODE_CONCEPT_CHECK_getViewPortRect
		GEODE_CONCEPT_FUNCTION_CHECK(getViewPortRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDesignResolutionSize
		#define GEODE_CONCEPT_CHECK_updateDesignResolutionSize
		GEODE_CONCEPT_FUNCTION_CHECK(updateDesignResolutionSize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEGLViewProtocol> : ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEGLViewProtocol>>::ModifyBase;
		using Base = cocos2d::CCEGLViewProtocol;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCEGLViewProtocol@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCEGLViewProtocol, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCEGLViewProtocol@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCEGLViewProtocol)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getFrameSize)), Thiscall, cocos2d::CCEGLViewProtocol, getFrameSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float>::func(&cocos2d::CCEGLViewProtocol::setFrameSize)), Thiscall, cocos2d::CCEGLViewProtocol, setFrameSize, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getVisibleSize)), Thiscall, cocos2d::CCEGLViewProtocol, getVisibleSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getVisibleOrigin)), Thiscall, cocos2d::CCEGLViewProtocol, getVisibleOrigin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float, ResolutionPolicy>::func(&cocos2d::CCEGLViewProtocol::setDesignResolutionSize)), Thiscall, cocos2d::CCEGLViewProtocol, setDesignResolutionSize, float, float, ResolutionPolicy)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getDesignResolutionSize)), Thiscall, cocos2d::CCEGLViewProtocol, getDesignResolutionSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::EGLTouchDelegate*>::func(&cocos2d::CCEGLViewProtocol::setTouchDelegate)), Thiscall, cocos2d::CCEGLViewProtocol, setTouchDelegate, cocos2d::EGLTouchDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float, float, float>::func(&cocos2d::CCEGLViewProtocol::setViewPortInPoints)), Thiscall, cocos2d::CCEGLViewProtocol, setViewPortInPoints, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float, float, float>::func(&cocos2d::CCEGLViewProtocol::setScissorInPoints)), Thiscall, cocos2d::CCEGLViewProtocol, setScissorInPoints, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::isScissorEnabled)), Thiscall, cocos2d::CCEGLViewProtocol, isScissorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getScissorRect)), Thiscall, cocos2d::CCEGLViewProtocol, getScissorRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCEGLViewProtocol::setViewName)), Thiscall, cocos2d::CCEGLViewProtocol, setViewName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::pollInputEvents)), Thiscall, cocos2d::CCEGLViewProtocol, pollInputEvents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int*, float*, float*, double>::func(&cocos2d::CCEGLViewProtocol::handleTouchesBegin)), Thiscall, cocos2d::CCEGLViewProtocol, handleTouchesBegin, int, int*, float*, float*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int*, float*, float*, double>::func(&cocos2d::CCEGLViewProtocol::handleTouchesMove)), Thiscall, cocos2d::CCEGLViewProtocol, handleTouchesMove, int, int*, float*, float*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int*, float*, float*, double>::func(&cocos2d::CCEGLViewProtocol::handleTouchesEnd)), Thiscall, cocos2d::CCEGLViewProtocol, handleTouchesEnd, int, int*, float*, float*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, int*, float*, float*, double>::func(&cocos2d::CCEGLViewProtocol::handleTouchesCancel)), Thiscall, cocos2d::CCEGLViewProtocol, handleTouchesCancel, int, int*, float*, float*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getScaleX)), Thiscall, cocos2d::CCEGLViewProtocol, getScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getScaleY)), Thiscall, cocos2d::CCEGLViewProtocol, getScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSet&, int, int*, float*, float*, double>::func(&cocos2d::CCEGLViewProtocol::getSetOfTouchesEndOrCancel)), Thiscall, cocos2d::CCEGLViewProtocol, getSetOfTouchesEndOrCancel, cocos2d::CCSet&, int, int*, float*, float*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getViewName)), Thiscall, cocos2d::CCEGLViewProtocol, getViewName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::getViewPortRect)), Thiscall, cocos2d::CCEGLViewProtocol, getViewPortRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLViewProtocol::updateDesignResolutionSize)), Thiscall, cocos2d::CCEGLViewProtocol, updateDesignResolutionSize, )
		}
	};
}
