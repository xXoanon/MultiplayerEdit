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

	#ifndef GEODE_STATICS_scrollViewDidScroll
		#define GEODE_STATICS_scrollViewDidScroll
		GEODE_AS_STATIC_FUNCTION(scrollViewDidScroll) 
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

	#ifndef GEODE_STATICS___indexFromOffset
		#define GEODE_STATICS___indexFromOffset
		GEODE_AS_STATIC_FUNCTION(__indexFromOffset) 
	#endif

	#ifndef GEODE_STATICS___offsetFromIndex
		#define GEODE_STATICS___offsetFromIndex
		GEODE_AS_STATIC_FUNCTION(__offsetFromIndex) 
	#endif

	#ifndef GEODE_STATICS__addCellIfNecessary
		#define GEODE_STATICS__addCellIfNecessary
		GEODE_AS_STATIC_FUNCTION(_addCellIfNecessary) 
	#endif

	#ifndef GEODE_STATICS__indexFromOffset
		#define GEODE_STATICS__indexFromOffset
		GEODE_AS_STATIC_FUNCTION(_indexFromOffset) 
	#endif

	#ifndef GEODE_STATICS__moveCellOutOfSight
		#define GEODE_STATICS__moveCellOutOfSight
		GEODE_AS_STATIC_FUNCTION(_moveCellOutOfSight) 
	#endif

	#ifndef GEODE_STATICS__offsetFromIndex
		#define GEODE_STATICS__offsetFromIndex
		GEODE_AS_STATIC_FUNCTION(_offsetFromIndex) 
	#endif

	#ifndef GEODE_STATICS__setIndexForCell
		#define GEODE_STATICS__setIndexForCell
		GEODE_AS_STATIC_FUNCTION(_setIndexForCell) 
	#endif

	#ifndef GEODE_STATICS__updateCellPositions
		#define GEODE_STATICS__updateCellPositions
		GEODE_AS_STATIC_FUNCTION(_updateCellPositions) 
	#endif

	#ifndef GEODE_STATICS__updateContentSize
		#define GEODE_STATICS__updateContentSize
		GEODE_AS_STATIC_FUNCTION(_updateContentSize) 
	#endif

	#ifndef GEODE_STATICS_cellAtIndex
		#define GEODE_STATICS_cellAtIndex
		GEODE_AS_STATIC_FUNCTION(cellAtIndex) 
	#endif

	#ifndef GEODE_STATICS_dequeueCell
		#define GEODE_STATICS_dequeueCell
		GEODE_AS_STATIC_FUNCTION(dequeueCell) 
	#endif

	#ifndef GEODE_STATICS_getVerticalFillOrder
		#define GEODE_STATICS_getVerticalFillOrder
		GEODE_AS_STATIC_FUNCTION(getVerticalFillOrder) 
	#endif

	#ifndef GEODE_STATICS_initWithViewSize
		#define GEODE_STATICS_initWithViewSize
		GEODE_AS_STATIC_FUNCTION(initWithViewSize) 
	#endif

	#ifndef GEODE_STATICS_insertCellAtIndex
		#define GEODE_STATICS_insertCellAtIndex
		GEODE_AS_STATIC_FUNCTION(insertCellAtIndex) 
	#endif

	#ifndef GEODE_STATICS_reloadData
		#define GEODE_STATICS_reloadData
		GEODE_AS_STATIC_FUNCTION(reloadData) 
	#endif

	#ifndef GEODE_STATICS_removeCellAtIndex
		#define GEODE_STATICS_removeCellAtIndex
		GEODE_AS_STATIC_FUNCTION(removeCellAtIndex) 
	#endif

	#ifndef GEODE_STATICS_setVerticalFillOrder
		#define GEODE_STATICS_setVerticalFillOrder
		GEODE_AS_STATIC_FUNCTION(setVerticalFillOrder) 
	#endif

	#ifndef GEODE_STATICS_unregisterAllScriptHandler
		#define GEODE_STATICS_unregisterAllScriptHandler
		GEODE_AS_STATIC_FUNCTION(unregisterAllScriptHandler) 
	#endif

	#ifndef GEODE_STATICS_updateCellAtIndex
		#define GEODE_STATICS_updateCellAtIndex
		GEODE_AS_STATIC_FUNCTION(updateCellAtIndex) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidScroll
		#define GEODE_CONCEPT_CHECK_scrollViewDidScroll
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidScroll) 
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

	#ifndef GEODE_CONCEPT_CHECK___indexFromOffset
		#define GEODE_CONCEPT_CHECK___indexFromOffset
		GEODE_CONCEPT_FUNCTION_CHECK(__indexFromOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK___offsetFromIndex
		#define GEODE_CONCEPT_CHECK___offsetFromIndex
		GEODE_CONCEPT_FUNCTION_CHECK(__offsetFromIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__addCellIfNecessary
		#define GEODE_CONCEPT_CHECK__addCellIfNecessary
		GEODE_CONCEPT_FUNCTION_CHECK(_addCellIfNecessary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__indexFromOffset
		#define GEODE_CONCEPT_CHECK__indexFromOffset
		GEODE_CONCEPT_FUNCTION_CHECK(_indexFromOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__moveCellOutOfSight
		#define GEODE_CONCEPT_CHECK__moveCellOutOfSight
		GEODE_CONCEPT_FUNCTION_CHECK(_moveCellOutOfSight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__offsetFromIndex
		#define GEODE_CONCEPT_CHECK__offsetFromIndex
		GEODE_CONCEPT_FUNCTION_CHECK(_offsetFromIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__setIndexForCell
		#define GEODE_CONCEPT_CHECK__setIndexForCell
		GEODE_CONCEPT_FUNCTION_CHECK(_setIndexForCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__updateCellPositions
		#define GEODE_CONCEPT_CHECK__updateCellPositions
		GEODE_CONCEPT_FUNCTION_CHECK(_updateCellPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK__updateContentSize
		#define GEODE_CONCEPT_CHECK__updateContentSize
		GEODE_CONCEPT_FUNCTION_CHECK(_updateContentSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellAtIndex
		#define GEODE_CONCEPT_CHECK_cellAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(cellAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dequeueCell
		#define GEODE_CONCEPT_CHECK_dequeueCell
		GEODE_CONCEPT_FUNCTION_CHECK(dequeueCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVerticalFillOrder
		#define GEODE_CONCEPT_CHECK_getVerticalFillOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getVerticalFillOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithViewSize
		#define GEODE_CONCEPT_CHECK_initWithViewSize
		GEODE_CONCEPT_FUNCTION_CHECK(initWithViewSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertCellAtIndex
		#define GEODE_CONCEPT_CHECK_insertCellAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(insertCellAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadData
		#define GEODE_CONCEPT_CHECK_reloadData
		GEODE_CONCEPT_FUNCTION_CHECK(reloadData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeCellAtIndex
		#define GEODE_CONCEPT_CHECK_removeCellAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(removeCellAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVerticalFillOrder
		#define GEODE_CONCEPT_CHECK_setVerticalFillOrder
		GEODE_CONCEPT_FUNCTION_CHECK(setVerticalFillOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unregisterAllScriptHandler
		#define GEODE_CONCEPT_CHECK_unregisterAllScriptHandler
		GEODE_CONCEPT_FUNCTION_CHECK(unregisterAllScriptHandler) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCellAtIndex
		#define GEODE_CONCEPT_CHECK_updateCellAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(updateCellAtIndex) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCTableView> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCTableView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCTableView>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCTableView>>::ModifyBase;
		using Base = cocos2d::extension::CCTableView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCTableView@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCTableView, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCTableView@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCTableView)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize>::func(&cocos2d::extension::CCTableView::create)), Default, cocos2d::extension::CCTableView, create, cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize, cocos2d::CCNode*>::func(&cocos2d::extension::CCTableView::create)), Default, cocos2d::extension::CCTableView, create, cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::extension::CCScrollView*>::func(&cocos2d::extension::CCTableView::scrollViewDidScroll)), Thiscall, cocos2d::extension::CCTableView, scrollViewDidScroll, cocos2d::extension::CCScrollView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCTableView::ccTouchBegan)), Thiscall, cocos2d::extension::CCTableView, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCTableView::ccTouchMoved)), Thiscall, cocos2d::extension::CCTableView, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCTableView::ccTouchEnded)), Thiscall, cocos2d::extension::CCTableView, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCTableView::ccTouchCancelled)), Thiscall, cocos2d::extension::CCTableView, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCTableView::__indexFromOffset)), Thiscall, cocos2d::extension::CCTableView, __indexFromOffset, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableView::__offsetFromIndex)), Thiscall, cocos2d::extension::CCTableView, __offsetFromIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCTableViewCell*>::func(&cocos2d::extension::CCTableView::_addCellIfNecessary)), Thiscall, cocos2d::extension::CCTableView, _addCellIfNecessary, cocos2d::extension::CCTableViewCell*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&cocos2d::extension::CCTableView::_indexFromOffset)), Thiscall, cocos2d::extension::CCTableView, _indexFromOffset, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCTableViewCell*>::func(&cocos2d::extension::CCTableView::_moveCellOutOfSight)), Thiscall, cocos2d::extension::CCTableView, _moveCellOutOfSight, cocos2d::extension::CCTableViewCell*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableView::_offsetFromIndex)), Thiscall, cocos2d::extension::CCTableView, _offsetFromIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::extension::CCTableViewCell*>::func(&cocos2d::extension::CCTableView::_setIndexForCell)), Thiscall, cocos2d::extension::CCTableView, _setIndexForCell, unsigned int, cocos2d::extension::CCTableViewCell*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableView::_updateCellPositions)), Thiscall, cocos2d::extension::CCTableView, _updateCellPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableView::_updateContentSize)), Thiscall, cocos2d::extension::CCTableView, _updateContentSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableView::cellAtIndex)), Thiscall, cocos2d::extension::CCTableView, cellAtIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableView::dequeueCell)), Thiscall, cocos2d::extension::CCTableView, dequeueCell, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableView::getVerticalFillOrder)), Thiscall, cocos2d::extension::CCTableView, getVerticalFillOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize, cocos2d::CCNode*>::func(&cocos2d::extension::CCTableView::initWithViewSize)), Thiscall, cocos2d::extension::CCTableView, initWithViewSize, cocos2d::CCSize, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableView::insertCellAtIndex)), Thiscall, cocos2d::extension::CCTableView, insertCellAtIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableView::reloadData)), Thiscall, cocos2d::extension::CCTableView, reloadData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableView::removeCellAtIndex)), Thiscall, cocos2d::extension::CCTableView, removeCellAtIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCTableViewVerticalFillOrder>::func(&cocos2d::extension::CCTableView::setVerticalFillOrder)), Thiscall, cocos2d::extension::CCTableView, setVerticalFillOrder, cocos2d::extension::CCTableViewVerticalFillOrder)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableView::unregisterAllScriptHandler)), Thiscall, cocos2d::extension::CCTableView, unregisterAllScriptHandler, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableView::updateCellAtIndex)), Thiscall, cocos2d::extension::CCTableView, updateCellAtIndex, unsigned int)
		}
	};
}
