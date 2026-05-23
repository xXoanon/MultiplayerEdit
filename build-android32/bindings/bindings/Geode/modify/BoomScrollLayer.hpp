#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomScrollLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

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

	#ifndef GEODE_STATICS_addPage
		#define GEODE_STATICS_addPage
		GEODE_AS_STATIC_FUNCTION(addPage) 
	#endif

	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_getRelativePageForNum
		#define GEODE_STATICS_getRelativePageForNum
		GEODE_AS_STATIC_FUNCTION(getRelativePageForNum) 
	#endif

	#ifndef GEODE_STATICS_getRelativePosForPage
		#define GEODE_STATICS_getRelativePosForPage
		GEODE_AS_STATIC_FUNCTION(getRelativePosForPage) 
	#endif

	#ifndef GEODE_STATICS_getTotalPages
		#define GEODE_STATICS_getTotalPages
		GEODE_AS_STATIC_FUNCTION(getTotalPages) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_instantMoveToPage
		#define GEODE_STATICS_instantMoveToPage
		GEODE_AS_STATIC_FUNCTION(instantMoveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPage
		#define GEODE_STATICS_moveToPage
		GEODE_AS_STATIC_FUNCTION(moveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPageEnded
		#define GEODE_STATICS_moveToPageEnded
		GEODE_AS_STATIC_FUNCTION(moveToPageEnded) 
	#endif

	#ifndef GEODE_STATICS_pageNumberForPosition
		#define GEODE_STATICS_pageNumberForPosition
		GEODE_AS_STATIC_FUNCTION(pageNumberForPosition) 
	#endif

	#ifndef GEODE_STATICS_positionForPageWithNumber
		#define GEODE_STATICS_positionForPageWithNumber
		GEODE_AS_STATIC_FUNCTION(positionForPageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_quickUpdate
		#define GEODE_STATICS_quickUpdate
		GEODE_AS_STATIC_FUNCTION(quickUpdate) 
	#endif

	#ifndef GEODE_STATICS_removePage
		#define GEODE_STATICS_removePage
		GEODE_AS_STATIC_FUNCTION(removePage) 
	#endif

	#ifndef GEODE_STATICS_removePageWithNumber
		#define GEODE_STATICS_removePageWithNumber
		GEODE_AS_STATIC_FUNCTION(removePageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_repositionPagesLooped
		#define GEODE_STATICS_repositionPagesLooped
		GEODE_AS_STATIC_FUNCTION(repositionPagesLooped) 
	#endif

	#ifndef GEODE_STATICS_selectPage
		#define GEODE_STATICS_selectPage
		GEODE_AS_STATIC_FUNCTION(selectPage) 
	#endif

	#ifndef GEODE_STATICS_setDotScale
		#define GEODE_STATICS_setDotScale
		GEODE_AS_STATIC_FUNCTION(setDotScale) 
	#endif

	#ifndef GEODE_STATICS_setPagesIndicatorPosition
		#define GEODE_STATICS_setPagesIndicatorPosition
		GEODE_AS_STATIC_FUNCTION(setPagesIndicatorPosition) 
	#endif

	#ifndef GEODE_STATICS_setupDynamicScrolling
		#define GEODE_STATICS_setupDynamicScrolling
		GEODE_AS_STATIC_FUNCTION(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_STATICS_togglePageIndicators
		#define GEODE_STATICS_togglePageIndicators
		GEODE_AS_STATIC_FUNCTION(togglePageIndicators) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_updatePages
		#define GEODE_STATICS_updatePages
		GEODE_AS_STATIC_FUNCTION(updatePages) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_addPage
		#define GEODE_CONCEPT_CHECK_addPage
		GEODE_CONCEPT_FUNCTION_CHECK(addPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		#define GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		GEODE_CONCEPT_FUNCTION_CHECK(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimTouch
		#define GEODE_CONCEPT_CHECK_claimTouch
		GEODE_CONCEPT_FUNCTION_CHECK(claimTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativePageForNum
		#define GEODE_CONCEPT_CHECK_getRelativePageForNum
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativePageForNum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativePosForPage
		#define GEODE_CONCEPT_CHECK_getRelativePosForPage
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativePosForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalPages
		#define GEODE_CONCEPT_CHECK_getTotalPages
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalPages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_instantMoveToPage
		#define GEODE_CONCEPT_CHECK_instantMoveToPage
		GEODE_CONCEPT_FUNCTION_CHECK(instantMoveToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToPage
		#define GEODE_CONCEPT_CHECK_moveToPage
		GEODE_CONCEPT_FUNCTION_CHECK(moveToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToPageEnded
		#define GEODE_CONCEPT_CHECK_moveToPageEnded
		GEODE_CONCEPT_FUNCTION_CHECK(moveToPageEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageNumberForPosition
		#define GEODE_CONCEPT_CHECK_pageNumberForPosition
		GEODE_CONCEPT_FUNCTION_CHECK(pageNumberForPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForPageWithNumber
		#define GEODE_CONCEPT_CHECK_positionForPageWithNumber
		GEODE_CONCEPT_FUNCTION_CHECK(positionForPageWithNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdate
		#define GEODE_CONCEPT_CHECK_quickUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePage
		#define GEODE_CONCEPT_CHECK_removePage
		GEODE_CONCEPT_FUNCTION_CHECK(removePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePageWithNumber
		#define GEODE_CONCEPT_CHECK_removePageWithNumber
		GEODE_CONCEPT_FUNCTION_CHECK(removePageWithNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repositionPagesLooped
		#define GEODE_CONCEPT_CHECK_repositionPagesLooped
		GEODE_CONCEPT_FUNCTION_CHECK(repositionPagesLooped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectPage
		#define GEODE_CONCEPT_CHECK_selectPage
		GEODE_CONCEPT_FUNCTION_CHECK(selectPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDotScale
		#define GEODE_CONCEPT_CHECK_setDotScale
		GEODE_CONCEPT_FUNCTION_CHECK(setDotScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPagesIndicatorPosition
		#define GEODE_CONCEPT_CHECK_setPagesIndicatorPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPagesIndicatorPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupDynamicScrolling
		#define GEODE_CONCEPT_CHECK_setupDynamicScrolling
		GEODE_CONCEPT_FUNCTION_CHECK(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePageIndicators
		#define GEODE_CONCEPT_CHECK_togglePageIndicators
		GEODE_CONCEPT_FUNCTION_CHECK(togglePageIndicators) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDots
		#define GEODE_CONCEPT_CHECK_updateDots
		GEODE_CONCEPT_FUNCTION_CHECK(updateDots) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePages
		#define GEODE_CONCEPT_CHECK_updatePages
		GEODE_CONCEPT_FUNCTION_CHECK(updatePages) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BoomScrollLayer> : ModifyBase<ModifyDerive<Der, BoomScrollLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomScrollLayer>>;
		using ModifyBase<ModifyDerive<Der, BoomScrollLayer>>::ModifyBase;
		using Base = BoomScrollLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15BoomScrollLayerC2Ev")), Default, BoomScrollLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15BoomScrollLayerD2Ev")), Default, BoomScrollLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, int, bool>::func(&BoomScrollLayer::create)), Default, BoomScrollLayer, create, cocos2d::CCArray*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*>::func(&BoomScrollLayer::create)), Default, BoomScrollLayer, create, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&BoomScrollLayer::visit)), Default, BoomScrollLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchBegan)), Default, BoomScrollLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchMoved)), Default, BoomScrollLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchEnded)), Default, BoomScrollLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchCancelled)), Default, BoomScrollLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&BoomScrollLayer::registerWithTouchDispatcher)), Default, BoomScrollLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCLayer*>::func(&BoomScrollLayer::addPage)), Default, BoomScrollLayer, addPage, cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCLayer*, int>::func(&BoomScrollLayer::addPage)), Default, BoomScrollLayer, addPage, cocos2d::CCLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::cancelAndStoleTouch)), Default, BoomScrollLayer, cancelAndStoleTouch, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTouch*>::func(&BoomScrollLayer::claimTouch)), Default, BoomScrollLayer, claimTouch, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::getPage)), Default, BoomScrollLayer, getPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::getRelativePageForNum)), Default, BoomScrollLayer, getRelativePageForNum, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::getRelativePosForPage)), Default, BoomScrollLayer, getRelativePosForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BoomScrollLayer::getTotalPages)), Default, BoomScrollLayer, getTotalPages, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*>::func(&BoomScrollLayer::init)), Default, BoomScrollLayer, init, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::instantMoveToPage)), Default, BoomScrollLayer, instantMoveToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::moveToPage)), Default, BoomScrollLayer, moveToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BoomScrollLayer::moveToPageEnded)), Default, BoomScrollLayer, moveToPageEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&BoomScrollLayer::pageNumberForPosition)), Default, BoomScrollLayer, pageNumberForPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::positionForPageWithNumber)), Default, BoomScrollLayer, positionForPageWithNumber, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BoomScrollLayer::quickUpdate)), Default, BoomScrollLayer, quickUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCLayer*>::func(&BoomScrollLayer::removePage)), Default, BoomScrollLayer, removePage, cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::removePageWithNumber)), Default, BoomScrollLayer, removePageWithNumber, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BoomScrollLayer::repositionPagesLooped)), Default, BoomScrollLayer, repositionPagesLooped, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&BoomScrollLayer::selectPage)), Default, BoomScrollLayer, selectPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&BoomScrollLayer::setDotScale)), Default, BoomScrollLayer, setDotScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&BoomScrollLayer::setPagesIndicatorPosition)), Default, BoomScrollLayer, setPagesIndicatorPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, DynamicScrollDelegate*>::func(&BoomScrollLayer::setupDynamicScrolling)), Default, BoomScrollLayer, setupDynamicScrolling, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&BoomScrollLayer::togglePageIndicators)), Default, BoomScrollLayer, togglePageIndicators, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&BoomScrollLayer::updateDots)), Default, BoomScrollLayer, updateDots, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&BoomScrollLayer::updatePages)), Default, BoomScrollLayer, updatePages, )
		}
	};
}
