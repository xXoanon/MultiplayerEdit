#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedOpenGLView
		#define GEODE_STATICS_sharedOpenGLView
		GEODE_AS_STATIC_FUNCTION(sharedOpenGLView) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_swapBuffers
		#define GEODE_STATICS_swapBuffers
		GEODE_AS_STATIC_FUNCTION(swapBuffers) 
	#endif

	#ifndef GEODE_STATICS_isOpenGLReady
		#define GEODE_STATICS_isOpenGLReady
		GEODE_AS_STATIC_FUNCTION(isOpenGLReady) 
	#endif

	#ifndef GEODE_STATICS_setIMEKeyboardState
		#define GEODE_STATICS_setIMEKeyboardState
		GEODE_AS_STATIC_FUNCTION(setIMEKeyboardState) 
	#endif

	#ifndef GEODE_STATICS_setFrameSize
		#define GEODE_STATICS_setFrameSize
		GEODE_AS_STATIC_FUNCTION(setFrameSize) 
	#endif

	#ifndef GEODE_STATICS_setViewPortInPoints
		#define GEODE_STATICS_setViewPortInPoints
		GEODE_AS_STATIC_FUNCTION(setViewPortInPoints) 
	#endif

	#ifndef GEODE_STATICS_setScissorInPoints
		#define GEODE_STATICS_setScissorInPoints
		GEODE_AS_STATIC_FUNCTION(setScissorInPoints) 
	#endif

	#ifndef GEODE_STATICS_initGlew
		#define GEODE_STATICS_initGlew
		GEODE_AS_STATIC_FUNCTION(initGlew) 
	#endif

	#ifndef GEODE_STATICS_onGLFWCharCallback
		#define GEODE_STATICS_onGLFWCharCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWCharCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWCursorEnterFunCallback
		#define GEODE_STATICS_onGLFWCursorEnterFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWCursorEnterFunCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWDeviceChangeFunCallback
		#define GEODE_STATICS_onGLFWDeviceChangeFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWDeviceChangeFunCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWError
		#define GEODE_STATICS_onGLFWError
		GEODE_AS_STATIC_FUNCTION(onGLFWError) 
	#endif

	#ifndef GEODE_STATICS_onGLFWframebuffersize
		#define GEODE_STATICS_onGLFWframebuffersize
		GEODE_AS_STATIC_FUNCTION(onGLFWframebuffersize) 
	#endif

	#ifndef GEODE_STATICS_onGLFWMouseScrollCallback
		#define GEODE_STATICS_onGLFWMouseScrollCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWMouseScrollCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWWindowIconifyFunCallback
		#define GEODE_STATICS_onGLFWWindowIconifyFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWWindowIconifyFunCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWWindowPosCallback
		#define GEODE_STATICS_onGLFWWindowPosCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWWindowPosCallback) 
	#endif

	#ifndef GEODE_STATICS_onGLFWWindowSizeFunCallback
		#define GEODE_STATICS_onGLFWWindowSizeFunCallback
		GEODE_AS_STATIC_FUNCTION(onGLFWWindowSizeFunCallback) 
	#endif

	#ifndef GEODE_STATICS_performSafeClipboardPaste
		#define GEODE_STATICS_performSafeClipboardPaste
		GEODE_AS_STATIC_FUNCTION(performSafeClipboardPaste) 
	#endif

	#ifndef GEODE_STATICS_pollEvents
		#define GEODE_STATICS_pollEvents
		GEODE_AS_STATIC_FUNCTION(pollEvents) 
	#endif

	#ifndef GEODE_STATICS_pumpRawInput
		#define GEODE_STATICS_pumpRawInput
		GEODE_AS_STATIC_FUNCTION(pumpRawInput) 
	#endif

	#ifndef GEODE_STATICS_setupWindow
		#define GEODE_STATICS_setupWindow
		GEODE_AS_STATIC_FUNCTION(setupWindow) 
	#endif

	#ifndef GEODE_STATICS_toggleFullScreen
		#define GEODE_STATICS_toggleFullScreen
		GEODE_AS_STATIC_FUNCTION(toggleFullScreen) 
	#endif

	#ifndef GEODE_STATICS_toggleLockCursor
		#define GEODE_STATICS_toggleLockCursor
		GEODE_AS_STATIC_FUNCTION(toggleLockCursor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedOpenGLView
		#define GEODE_CONCEPT_CHECK_sharedOpenGLView
		GEODE_CONCEPT_FUNCTION_CHECK(sharedOpenGLView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_end
		#define GEODE_CONCEPT_CHECK_end
		GEODE_CONCEPT_FUNCTION_CHECK(end) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapBuffers
		#define GEODE_CONCEPT_CHECK_swapBuffers
		GEODE_CONCEPT_FUNCTION_CHECK(swapBuffers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpenGLReady
		#define GEODE_CONCEPT_CHECK_isOpenGLReady
		GEODE_CONCEPT_FUNCTION_CHECK(isOpenGLReady) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIMEKeyboardState
		#define GEODE_CONCEPT_CHECK_setIMEKeyboardState
		GEODE_CONCEPT_FUNCTION_CHECK(setIMEKeyboardState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFrameSize
		#define GEODE_CONCEPT_CHECK_setFrameSize
		GEODE_CONCEPT_FUNCTION_CHECK(setFrameSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentScaleFactor
		#define GEODE_CONCEPT_CHECK_setContentScaleFactor
		GEODE_CONCEPT_FUNCTION_CHECK(setContentScaleFactor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setViewPortInPoints
		#define GEODE_CONCEPT_CHECK_setViewPortInPoints
		GEODE_CONCEPT_FUNCTION_CHECK(setViewPortInPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScissorInPoints
		#define GEODE_CONCEPT_CHECK_setScissorInPoints
		GEODE_CONCEPT_FUNCTION_CHECK(setScissorInPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMultiTouchMask
		#define GEODE_CONCEPT_CHECK_setMultiTouchMask
		GEODE_CONCEPT_FUNCTION_CHECK(setMultiTouchMask) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initGlew
		#define GEODE_CONCEPT_CHECK_initGlew
		GEODE_CONCEPT_FUNCTION_CHECK(initGlew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWCharCallback
		#define GEODE_CONCEPT_CHECK_onGLFWCharCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWCharCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWCursorEnterFunCallback
		#define GEODE_CONCEPT_CHECK_onGLFWCursorEnterFunCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWCursorEnterFunCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWDeviceChangeFunCallback
		#define GEODE_CONCEPT_CHECK_onGLFWDeviceChangeFunCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWDeviceChangeFunCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWError
		#define GEODE_CONCEPT_CHECK_onGLFWError
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWframebuffersize
		#define GEODE_CONCEPT_CHECK_onGLFWframebuffersize
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWframebuffersize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWKeyCallback
		#define GEODE_CONCEPT_CHECK_onGLFWKeyCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWKeyCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWMouseCallBack
		#define GEODE_CONCEPT_CHECK_onGLFWMouseCallBack
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWMouseCallBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWMouseMoveCallBack
		#define GEODE_CONCEPT_CHECK_onGLFWMouseMoveCallBack
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWMouseMoveCallBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWMouseScrollCallback
		#define GEODE_CONCEPT_CHECK_onGLFWMouseScrollCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWMouseScrollCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWWindowIconifyFunCallback
		#define GEODE_CONCEPT_CHECK_onGLFWWindowIconifyFunCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWWindowIconifyFunCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWWindowPosCallback
		#define GEODE_CONCEPT_CHECK_onGLFWWindowPosCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWWindowPosCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGLFWWindowSizeFunCallback
		#define GEODE_CONCEPT_CHECK_onGLFWWindowSizeFunCallback
		GEODE_CONCEPT_FUNCTION_CHECK(onGLFWWindowSizeFunCallback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performSafeClipboardPaste
		#define GEODE_CONCEPT_CHECK_performSafeClipboardPaste
		GEODE_CONCEPT_FUNCTION_CHECK(performSafeClipboardPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pollEvents
		#define GEODE_CONCEPT_CHECK_pollEvents
		GEODE_CONCEPT_FUNCTION_CHECK(pollEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pumpRawInput
		#define GEODE_CONCEPT_CHECK_pumpRawInput
		GEODE_CONCEPT_FUNCTION_CHECK(pumpRawInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupWindow
		#define GEODE_CONCEPT_CHECK_setupWindow
		GEODE_CONCEPT_FUNCTION_CHECK(setupWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFullScreen
		#define GEODE_CONCEPT_CHECK_toggleFullScreen
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFullScreen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLockCursor
		#define GEODE_CONCEPT_CHECK_toggleLockCursor
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLockCursor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCEGLView> : ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCEGLView>>::ModifyBase;
		using Base = cocos2d::CCEGLView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCEGLView@cocos2d@@IEAA@XZ")), Thiscall, cocos2d::CCEGLView, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCEGLView@cocos2d@@MEAA@XZ")), Thiscall, cocos2d::CCEGLView)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLView::sharedOpenGLView)), Default, cocos2d::CCEGLView, sharedOpenGLView, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLView::end)), Thiscall, cocos2d::CCEGLView, end, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLView::swapBuffers)), Thiscall, cocos2d::CCEGLView, swapBuffers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCEGLView::isOpenGLReady)), Thiscall, cocos2d::CCEGLView, isOpenGLReady, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCEGLView::setIMEKeyboardState)), Thiscall, cocos2d::CCEGLView, setIMEKeyboardState, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float>::func(&cocos2d::CCEGLView::setFrameSize)), Thiscall, cocos2d::CCEGLView, setFrameSize, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float, float, float>::func(&cocos2d::CCEGLView::setViewPortInPoints)), Thiscall, cocos2d::CCEGLView, setViewPortInPoints, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float, float, float>::func(&cocos2d::CCEGLView::setScissorInPoints)), Thiscall, cocos2d::CCEGLView, setScissorInPoints, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLView::initGlew)), Thiscall, cocos2d::CCEGLView, initGlew, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*, unsigned int>::func(&cocos2d::CCEGLView::onGLFWCharCallback)), Thiscall, cocos2d::CCEGLView, onGLFWCharCallback, GLFWwindow*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*, int>::func(&cocos2d::CCEGLView::onGLFWCursorEnterFunCallback)), Thiscall, cocos2d::CCEGLView, onGLFWCursorEnterFunCallback, GLFWwindow*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*>::func(&cocos2d::CCEGLView::onGLFWDeviceChangeFunCallback)), Thiscall, cocos2d::CCEGLView, onGLFWDeviceChangeFunCallback, GLFWwindow*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, char const*>::func(&cocos2d::CCEGLView::onGLFWError)), Thiscall, cocos2d::CCEGLView, onGLFWError, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*, int, int>::func(&cocos2d::CCEGLView::onGLFWframebuffersize)), Thiscall, cocos2d::CCEGLView, onGLFWframebuffersize, GLFWwindow*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCEGLView, onGLFWKeyCallback, GLFWwindow*, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCEGLView, onGLFWMouseCallBack, GLFWwindow*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCEGLView, onGLFWMouseMoveCallBack, GLFWwindow*, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*, double, double>::func(&cocos2d::CCEGLView::onGLFWMouseScrollCallback)), Thiscall, cocos2d::CCEGLView, onGLFWMouseScrollCallback, GLFWwindow*, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*, int>::func(&cocos2d::CCEGLView::onGLFWWindowIconifyFunCallback)), Thiscall, cocos2d::CCEGLView, onGLFWWindowIconifyFunCallback, GLFWwindow*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*, int, int>::func(&cocos2d::CCEGLView::onGLFWWindowPosCallback)), Thiscall, cocos2d::CCEGLView, onGLFWWindowPosCallback, GLFWwindow*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GLFWwindow*, int, int>::func(&cocos2d::CCEGLView::onGLFWWindowSizeFunCallback)), Thiscall, cocos2d::CCEGLView, onGLFWWindowSizeFunCallback, GLFWwindow*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLView::performSafeClipboardPaste)), Thiscall, cocos2d::CCEGLView, performSafeClipboardPaste, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLView::pollEvents)), Thiscall, cocos2d::CCEGLView, pollEvents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCEGLView::pumpRawInput)), Thiscall, cocos2d::CCEGLView, pumpRawInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect>::func(&cocos2d::CCEGLView::setupWindow)), Thiscall, cocos2d::CCEGLView, setupWindow, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool>::func(&cocos2d::CCEGLView::toggleFullScreen)), Thiscall, cocos2d::CCEGLView, toggleFullScreen, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCEGLView::toggleLockCursor)), Thiscall, cocos2d::CCEGLView, toggleLockCursor, bool)
		}
	};
}
