#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCScrollLayerExt.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_preVisitWithClippingRect
		#define GEODE_STATICS_preVisitWithClippingRect
		GEODE_AS_STATIC_FUNCTION(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_STATICS_postVisit
		#define GEODE_STATICS_postVisit
		GEODE_AS_STATIC_FUNCTION(postVisit) 
	#endif

	#ifndef GEODE_STATICS_constraintContent
		#define GEODE_STATICS_constraintContent
		GEODE_AS_STATIC_FUNCTION(constraintContent) 
	#endif

	#ifndef GEODE_STATICS_doConstraintContent
		#define GEODE_STATICS_doConstraintContent
		GEODE_AS_STATIC_FUNCTION(doConstraintContent) 
	#endif

	#ifndef GEODE_STATICS_getMaxY
		#define GEODE_STATICS_getMaxY
		GEODE_AS_STATIC_FUNCTION(getMaxY) 
	#endif

	#ifndef GEODE_STATICS_getMinY
		#define GEODE_STATICS_getMinY
		GEODE_AS_STATIC_FUNCTION(getMinY) 
	#endif

	#ifndef GEODE_STATICS_moveToTop
		#define GEODE_STATICS_moveToTop
		GEODE_AS_STATIC_FUNCTION(moveToTop) 
	#endif

	#ifndef GEODE_STATICS_moveToTopWithOffset
		#define GEODE_STATICS_moveToTopWithOffset
		GEODE_AS_STATIC_FUNCTION(moveToTopWithOffset) 
	#endif

	#ifndef GEODE_STATICS_scrollingEnd
		#define GEODE_STATICS_scrollingEnd
		GEODE_AS_STATIC_FUNCTION(scrollingEnd) 
	#endif

	#ifndef GEODE_STATICS_scrollLayer
		#define GEODE_STATICS_scrollLayer
		GEODE_AS_STATIC_FUNCTION(scrollLayer) 
	#endif

	#ifndef GEODE_STATICS_setContentLayerSize
		#define GEODE_STATICS_setContentLayerSize
		GEODE_AS_STATIC_FUNCTION(setContentLayerSize) 
	#endif

	#ifndef GEODE_STATICS_setContentOffset
		#define GEODE_STATICS_setContentOffset
		GEODE_AS_STATIC_FUNCTION(setContentOffset) 
	#endif

	#ifndef GEODE_STATICS_updateIndicators
		#define GEODE_STATICS_updateIndicators
		GEODE_AS_STATIC_FUNCTION(updateIndicators) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		#define GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		GEODE_CONCEPT_FUNCTION_CHECK(preVisitWithClippingRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postVisit
		#define GEODE_CONCEPT_CHECK_postVisit
		GEODE_CONCEPT_FUNCTION_CHECK(postVisit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_constraintContent
		#define GEODE_CONCEPT_CHECK_constraintContent
		GEODE_CONCEPT_FUNCTION_CHECK(constraintContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doConstraintContent
		#define GEODE_CONCEPT_CHECK_doConstraintContent
		GEODE_CONCEPT_FUNCTION_CHECK(doConstraintContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxY
		#define GEODE_CONCEPT_CHECK_getMaxY
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinY
		#define GEODE_CONCEPT_CHECK_getMinY
		GEODE_CONCEPT_FUNCTION_CHECK(getMinY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToTop
		#define GEODE_CONCEPT_CHECK_moveToTop
		GEODE_CONCEPT_FUNCTION_CHECK(moveToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToTopWithOffset
		#define GEODE_CONCEPT_CHECK_moveToTopWithOffset
		GEODE_CONCEPT_FUNCTION_CHECK(moveToTopWithOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollingEnd
		#define GEODE_CONCEPT_CHECK_scrollingEnd
		GEODE_CONCEPT_FUNCTION_CHECK(scrollingEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayer
		#define GEODE_CONCEPT_CHECK_scrollLayer
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentLayerSize
		#define GEODE_CONCEPT_CHECK_setContentLayerSize
		GEODE_CONCEPT_FUNCTION_CHECK(setContentLayerSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentOffset
		#define GEODE_CONCEPT_CHECK_setContentOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setContentOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateIndicators
		#define GEODE_CONCEPT_CHECK_updateIndicators
		GEODE_CONCEPT_FUNCTION_CHECK(updateIndicators) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCScrollLayerExt> : ModifyBase<ModifyDerive<Der, CCScrollLayerExt>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCScrollLayerExt>>;
		using ModifyBase<ModifyDerive<Der, CCScrollLayerExt>>::ModifyBase;
		using Base = CCScrollLayerExt;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CCScrollLayerExtC2EN7cocos2d6CCRectE")), Default, CCScrollLayerExt, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16CCScrollLayerExtD2Ev")), Default, CCScrollLayerExt)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCScrollLayerExt::visit)), Default, CCScrollLayerExt, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCScrollLayerExt::ccTouchBegan)), Default, CCScrollLayerExt, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCScrollLayerExt::ccTouchMoved)), Default, CCScrollLayerExt, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCScrollLayerExt::ccTouchEnded)), Default, CCScrollLayerExt, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCScrollLayerExt::ccTouchCancelled)), Default, CCScrollLayerExt, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCScrollLayerExt::registerWithTouchDispatcher)), Default, CCScrollLayerExt, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect>::func(&CCScrollLayerExt::preVisitWithClippingRect)), Default, CCScrollLayerExt, preVisitWithClippingRect, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CCScrollLayerExt::postVisit)), Default, CCScrollLayerExt, postVisit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCScrollLayerExt::constraintContent)), Default, CCScrollLayerExt, constraintContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&CCScrollLayerExt::doConstraintContent)), Default, CCScrollLayerExt, doConstraintContent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCScrollLayerExt::getMaxY)), Default, CCScrollLayerExt, getMaxY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCScrollLayerExt::getMinY)), Default, CCScrollLayerExt, getMinY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCScrollLayerExt::moveToTop)), Default, CCScrollLayerExt, moveToTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCScrollLayerExt::moveToTopWithOffset)), Default, CCScrollLayerExt, moveToTopWithOffset, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCScrollLayerExt::scrollingEnd)), Default, CCScrollLayerExt, scrollingEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCScrollLayerExt::scrollLayer)), Default, CCScrollLayerExt, scrollLayer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize>::func(&CCScrollLayerExt::setContentLayerSize)), Default, CCScrollLayerExt, setContentLayerSize, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, bool>::func(&CCScrollLayerExt::setContentOffset)), Default, CCScrollLayerExt, setContentOffset, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCScrollLayerExt::updateIndicators)), Default, CCScrollLayerExt, updateIndicators, float)
		}
	};
}
