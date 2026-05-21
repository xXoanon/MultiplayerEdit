#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_setContentSize
		#define GEODE_STATICS_setContentSize
		GEODE_AS_STATIC_FUNCTION(setContentSize) 
	#endif

	#ifndef GEODE_STATICS_getContentSize
		#define GEODE_STATICS_getContentSize
		GEODE_AS_STATIC_FUNCTION(getContentSize) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_setTouchEnabled
		#define GEODE_STATICS_setTouchEnabled
		GEODE_AS_STATIC_FUNCTION(setTouchEnabled) 
	#endif

	#ifndef GEODE_STATICS_afterDraw
		#define GEODE_STATICS_afterDraw
		GEODE_AS_STATIC_FUNCTION(afterDraw) 
	#endif

	#ifndef GEODE_STATICS_beforeDraw
		#define GEODE_STATICS_beforeDraw
		GEODE_AS_STATIC_FUNCTION(beforeDraw) 
	#endif

	#ifndef GEODE_STATICS_deaccelerateScrolling
		#define GEODE_STATICS_deaccelerateScrolling
		GEODE_AS_STATIC_FUNCTION(deaccelerateScrolling) 
	#endif

	#ifndef GEODE_STATICS_getContainer
		#define GEODE_STATICS_getContainer
		GEODE_AS_STATIC_FUNCTION(getContainer) 
	#endif

	#ifndef GEODE_STATICS_getContentOffset
		#define GEODE_STATICS_getContentOffset
		GEODE_AS_STATIC_FUNCTION(getContentOffset) 
	#endif

	#ifndef GEODE_STATICS_getScriptHandler
		#define GEODE_STATICS_getScriptHandler
		GEODE_AS_STATIC_FUNCTION(getScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_getViewRect
		#define GEODE_STATICS_getViewRect
		GEODE_AS_STATIC_FUNCTION(getViewRect) 
	#endif

	#ifndef GEODE_STATICS_getZoomScale
		#define GEODE_STATICS_getZoomScale
		GEODE_AS_STATIC_FUNCTION(getZoomScale) 
	#endif

	#ifndef GEODE_STATICS_initWithViewSize
		#define GEODE_STATICS_initWithViewSize
		GEODE_AS_STATIC_FUNCTION(initWithViewSize) 
	#endif

	#ifndef GEODE_STATICS_isNodeVisible
		#define GEODE_STATICS_isNodeVisible
		GEODE_AS_STATIC_FUNCTION(isNodeVisible) 
	#endif

	#ifndef GEODE_STATICS_maxContainerOffset
		#define GEODE_STATICS_maxContainerOffset
		GEODE_AS_STATIC_FUNCTION(maxContainerOffset) 
	#endif

	#ifndef GEODE_STATICS_minContainerOffset
		#define GEODE_STATICS_minContainerOffset
		GEODE_AS_STATIC_FUNCTION(minContainerOffset) 
	#endif

	#ifndef GEODE_STATICS_pause
		#define GEODE_STATICS_pause
		GEODE_AS_STATIC_FUNCTION(pause) 
	#endif

	#ifndef GEODE_STATICS_performedAnimatedScroll
		#define GEODE_STATICS_performedAnimatedScroll
		GEODE_AS_STATIC_FUNCTION(performedAnimatedScroll) 
	#endif

	#ifndef GEODE_STATICS_registerScriptHandler
		#define GEODE_STATICS_registerScriptHandler
		GEODE_AS_STATIC_FUNCTION(registerScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_relocateContainer
		#define GEODE_STATICS_relocateContainer
		GEODE_AS_STATIC_FUNCTION(relocateContainer) 
	#endif

	#ifndef GEODE_STATICS_resume
		#define GEODE_STATICS_resume
		GEODE_AS_STATIC_FUNCTION(resume) 
	#endif

	#ifndef GEODE_STATICS_setContainer
		#define GEODE_STATICS_setContainer
		GEODE_AS_STATIC_FUNCTION(setContainer) 
	#endif

	#ifndef GEODE_STATICS_setContentOffset
		#define GEODE_STATICS_setContentOffset
		GEODE_AS_STATIC_FUNCTION(setContentOffset) 
	#endif

	#ifndef GEODE_STATICS_setContentOffsetInDuration
		#define GEODE_STATICS_setContentOffsetInDuration
		GEODE_AS_STATIC_FUNCTION(setContentOffsetInDuration) 
	#endif

	#ifndef GEODE_STATICS_setViewSize
		#define GEODE_STATICS_setViewSize
		GEODE_AS_STATIC_FUNCTION(setViewSize) 
	#endif

	#ifndef GEODE_STATICS_setZoomScale
		#define GEODE_STATICS_setZoomScale
		GEODE_AS_STATIC_FUNCTION(setZoomScale) 
	#endif

	#ifndef GEODE_STATICS_setZoomScaleInDuration
		#define GEODE_STATICS_setZoomScaleInDuration
		GEODE_AS_STATIC_FUNCTION(setZoomScaleInDuration) 
	#endif

	#ifndef GEODE_STATICS_stoppedAnimatedScroll
		#define GEODE_STATICS_stoppedAnimatedScroll
		GEODE_AS_STATIC_FUNCTION(stoppedAnimatedScroll) 
	#endif

	#ifndef GEODE_STATICS_unregisterScriptHandler
		#define GEODE_STATICS_unregisterScriptHandler
		GEODE_AS_STATIC_FUNCTION(unregisterScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_updateInset
		#define GEODE_STATICS_updateInset
		GEODE_AS_STATIC_FUNCTION(updateInset) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentSize
		#define GEODE_CONCEPT_CHECK_setContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(setContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentSize
		#define GEODE_CONCEPT_CHECK_getContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(getContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addChild
		#define GEODE_CONCEPT_CHECK_addChild
		GEODE_CONCEPT_FUNCTION_CHECK(addChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTouchEnabled
		#define GEODE_CONCEPT_CHECK_setTouchEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setTouchEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_afterDraw
		#define GEODE_CONCEPT_CHECK_afterDraw
		GEODE_CONCEPT_FUNCTION_CHECK(afterDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beforeDraw
		#define GEODE_CONCEPT_CHECK_beforeDraw
		GEODE_CONCEPT_FUNCTION_CHECK(beforeDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deaccelerateScrolling
		#define GEODE_CONCEPT_CHECK_deaccelerateScrolling
		GEODE_CONCEPT_FUNCTION_CHECK(deaccelerateScrolling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContainer
		#define GEODE_CONCEPT_CHECK_getContainer
		GEODE_CONCEPT_FUNCTION_CHECK(getContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getContentOffset
		#define GEODE_CONCEPT_CHECK_getContentOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getContentOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScriptHandler
		#define GEODE_CONCEPT_CHECK_getScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(getScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getViewRect
		#define GEODE_CONCEPT_CHECK_getViewRect
		GEODE_CONCEPT_FUNCTION_CHECK(getViewRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getZoomScale
		#define GEODE_CONCEPT_CHECK_getZoomScale
		GEODE_CONCEPT_FUNCTION_CHECK(getZoomScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithViewSize
		#define GEODE_CONCEPT_CHECK_initWithViewSize
		GEODE_CONCEPT_FUNCTION_CHECK(initWithViewSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isNodeVisible
		#define GEODE_CONCEPT_CHECK_isNodeVisible
		GEODE_CONCEPT_FUNCTION_CHECK(isNodeVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_maxContainerOffset
		#define GEODE_CONCEPT_CHECK_maxContainerOffset
		GEODE_CONCEPT_FUNCTION_CHECK(maxContainerOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_minContainerOffset
		#define GEODE_CONCEPT_CHECK_minContainerOffset
		GEODE_CONCEPT_FUNCTION_CHECK(minContainerOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pause
		#define GEODE_CONCEPT_CHECK_pause
		GEODE_CONCEPT_FUNCTION_CHECK(pause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performedAnimatedScroll
		#define GEODE_CONCEPT_CHECK_performedAnimatedScroll
		GEODE_CONCEPT_FUNCTION_CHECK(performedAnimatedScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerScriptHandler
		#define GEODE_CONCEPT_CHECK_registerScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(registerScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_relocateContainer
		#define GEODE_CONCEPT_CHECK_relocateContainer
		GEODE_CONCEPT_FUNCTION_CHECK(relocateContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resume
		#define GEODE_CONCEPT_CHECK_resume
		GEODE_CONCEPT_FUNCTION_CHECK(resume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContainer
		#define GEODE_CONCEPT_CHECK_setContainer
		GEODE_CONCEPT_FUNCTION_CHECK(setContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentOffset
		#define GEODE_CONCEPT_CHECK_setContentOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setContentOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentOffsetInDuration
		#define GEODE_CONCEPT_CHECK_setContentOffsetInDuration
		GEODE_CONCEPT_FUNCTION_CHECK(setContentOffsetInDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setViewSize
		#define GEODE_CONCEPT_CHECK_setViewSize
		GEODE_CONCEPT_FUNCTION_CHECK(setViewSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setZoomScale
		#define GEODE_CONCEPT_CHECK_setZoomScale
		GEODE_CONCEPT_FUNCTION_CHECK(setZoomScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setZoomScaleInDuration
		#define GEODE_CONCEPT_CHECK_setZoomScaleInDuration
		GEODE_CONCEPT_FUNCTION_CHECK(setZoomScaleInDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stoppedAnimatedScroll
		#define GEODE_CONCEPT_CHECK_stoppedAnimatedScroll
		GEODE_CONCEPT_FUNCTION_CHECK(stoppedAnimatedScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterScriptHandler
		#define GEODE_CONCEPT_CHECK_unregisterScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInset
		#define GEODE_CONCEPT_CHECK_updateInset
		GEODE_CONCEPT_FUNCTION_CHECK(updateInset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCScrollView> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScrollView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScrollView>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCScrollView>>::ModifyBase;
		using Base = cocos2d::extension::CCScrollView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCScrollView@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCScrollView, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCScrollView@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCScrollView)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::create)), Default, cocos2d::extension::CCScrollView, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize, cocos2d::CCNode*>::func(&cocos2d::extension::CCScrollView::create)), Default, cocos2d::extension::CCScrollView, create, cocos2d::CCSize, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::init)), Thiscall, cocos2d::extension::CCScrollView, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::registerWithTouchDispatcher)), Thiscall, cocos2d::extension::CCScrollView, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCScrollView::ccTouchBegan)), Thiscall, cocos2d::extension::CCScrollView, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCScrollView::ccTouchMoved)), Thiscall, cocos2d::extension::CCScrollView, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCScrollView::ccTouchEnded)), Thiscall, cocos2d::extension::CCScrollView, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCScrollView::ccTouchCancelled)), Thiscall, cocos2d::extension::CCScrollView, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::extension::CCScrollView::setContentSize)), Thiscall, cocos2d::extension::CCScrollView, setContentSize, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::getContentSize)), Thiscall, cocos2d::extension::CCScrollView, getContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::visit)), Thiscall, cocos2d::extension::CCScrollView, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::extension::CCScrollView::addChild)), Thiscall, cocos2d::extension::CCScrollView, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::extension::CCScrollView::addChild)), Thiscall, cocos2d::extension::CCScrollView, addChild, cocos2d::CCNode*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::extension::CCScrollView::addChild)), Thiscall, cocos2d::extension::CCScrollView, addChild, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::extension::CCScrollView::setTouchEnabled)), Thiscall, cocos2d::extension::CCScrollView, setTouchEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::afterDraw)), Thiscall, cocos2d::extension::CCScrollView, afterDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::beforeDraw)), Thiscall, cocos2d::extension::CCScrollView, beforeDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::extension::CCScrollView::deaccelerateScrolling)), Thiscall, cocos2d::extension::CCScrollView, deaccelerateScrolling, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::getContainer)), Thiscall, cocos2d::extension::CCScrollView, getContainer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::getContentOffset)), Thiscall, cocos2d::extension::CCScrollView, getContentOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::extension::CCScrollView::getScriptHandler)), Thiscall, cocos2d::extension::CCScrollView, getScriptHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::getViewRect)), Thiscall, cocos2d::extension::CCScrollView, getViewRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::getZoomScale)), Thiscall, cocos2d::extension::CCScrollView, getZoomScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize, cocos2d::CCNode*>::func(&cocos2d::extension::CCScrollView::initWithViewSize)), Thiscall, cocos2d::extension::CCScrollView, initWithViewSize, cocos2d::CCSize, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::extension::CCScrollView::isNodeVisible)), Thiscall, cocos2d::extension::CCScrollView, isNodeVisible, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::maxContainerOffset)), Thiscall, cocos2d::extension::CCScrollView, maxContainerOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::minContainerOffset)), Thiscall, cocos2d::extension::CCScrollView, minContainerOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::extension::CCScrollView::pause)), Thiscall, cocos2d::extension::CCScrollView, pause, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::extension::CCScrollView::performedAnimatedScroll)), Thiscall, cocos2d::extension::CCScrollView, performedAnimatedScroll, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&cocos2d::extension::CCScrollView::registerScriptHandler)), Thiscall, cocos2d::extension::CCScrollView, registerScriptHandler, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::extension::CCScrollView::relocateContainer)), Thiscall, cocos2d::extension::CCScrollView, relocateContainer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::extension::CCScrollView::resume)), Thiscall, cocos2d::extension::CCScrollView, resume, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::extension::CCScrollView::setContainer)), Thiscall, cocos2d::extension::CCScrollView, setContainer, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, bool>::func(&cocos2d::extension::CCScrollView::setContentOffset)), Thiscall, cocos2d::extension::CCScrollView, setContentOffset, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, float>::func(&cocos2d::extension::CCScrollView::setContentOffsetInDuration)), Thiscall, cocos2d::extension::CCScrollView, setContentOffsetInDuration, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize>::func(&cocos2d::extension::CCScrollView::setViewSize)), Thiscall, cocos2d::extension::CCScrollView, setViewSize, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::extension::CCScrollView::setZoomScale)), Thiscall, cocos2d::extension::CCScrollView, setZoomScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, bool>::func(&cocos2d::extension::CCScrollView::setZoomScale)), Thiscall, cocos2d::extension::CCScrollView, setZoomScale, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&cocos2d::extension::CCScrollView::setZoomScaleInDuration)), Thiscall, cocos2d::extension::CCScrollView, setZoomScaleInDuration, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::extension::CCScrollView::stoppedAnimatedScroll)), Thiscall, cocos2d::extension::CCScrollView, stoppedAnimatedScroll, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&cocos2d::extension::CCScrollView::unregisterScriptHandler)), Thiscall, cocos2d::extension::CCScrollView, unregisterScriptHandler, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCScrollView::updateInset)), Thiscall, cocos2d::extension::CCScrollView, updateInset, )
		}
	};
}
