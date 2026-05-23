#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomListView.hpp>
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

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_TableViewWillDisplayCellForRowAtIndexPath
		#define GEODE_STATICS_TableViewWillDisplayCellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(TableViewWillDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_cellHeightForRowAtIndexPath
		#define GEODE_STATICS_cellHeightForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellHeightForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_didSelectRowAtIndexPath
		#define GEODE_STATICS_didSelectRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(didSelectRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_numberOfRowsInSection
		#define GEODE_STATICS_numberOfRowsInSection
		GEODE_AS_STATIC_FUNCTION(numberOfRowsInSection) 
	#endif

	#ifndef GEODE_STATICS_numberOfSectionsInTableView
		#define GEODE_STATICS_numberOfSectionsInTableView
		GEODE_AS_STATIC_FUNCTION(numberOfSectionsInTableView) 
	#endif

	#ifndef GEODE_STATICS_cellForRowAtIndexPath
		#define GEODE_STATICS_cellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_TableViewCommitCellEditingStyleForRowAtIndexPath
		#define GEODE_STATICS_TableViewCommitCellEditingStyleForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(TableViewCommitCellEditingStyleForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_TableViewWillReloadCellForRowAtIndexPath
		#define GEODE_STATICS_TableViewWillReloadCellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(TableViewWillReloadCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_getListCell
		#define GEODE_STATICS_getListCell
		GEODE_AS_STATIC_FUNCTION(getListCell) 
	#endif

	#ifndef GEODE_STATICS_loadCell
		#define GEODE_STATICS_loadCell
		GEODE_AS_STATIC_FUNCTION(loadCell) 
	#endif

	#ifndef GEODE_STATICS_addObjectToList
		#define GEODE_STATICS_addObjectToList
		GEODE_AS_STATIC_FUNCTION(addObjectToList) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_lockList
		#define GEODE_STATICS_lockList
		GEODE_AS_STATIC_FUNCTION(lockList) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewWillDisplayCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewWillDisplayCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewWillDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellHeightForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_cellHeightForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(cellHeightForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didSelectRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_didSelectRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(didSelectRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_numberOfRowsInSection
		#define GEODE_CONCEPT_CHECK_numberOfRowsInSection
		GEODE_CONCEPT_FUNCTION_CHECK(numberOfRowsInSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_numberOfSectionsInTableView
		#define GEODE_CONCEPT_CHECK_numberOfSectionsInTableView
		GEODE_CONCEPT_FUNCTION_CHECK(numberOfSectionsInTableView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewCommitCellEditingStyleForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewCommitCellEditingStyleForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewCommitCellEditingStyleForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewWillReloadCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewWillReloadCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewWillReloadCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListCell
		#define GEODE_CONCEPT_CHECK_getListCell
		GEODE_CONCEPT_FUNCTION_CHECK(getListCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCell
		#define GEODE_CONCEPT_CHECK_loadCell
		GEODE_CONCEPT_FUNCTION_CHECK(loadCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectToList
		#define GEODE_CONCEPT_CHECK_addObjectToList
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectToList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockList
		#define GEODE_CONCEPT_CHECK_lockList
		GEODE_CONCEPT_FUNCTION_CHECK(lockList) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BoomListView> : ModifyBase<ModifyDerive<Der, BoomListView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomListView>>;
		using ModifyBase<ModifyDerive<Der, BoomListView>>::ModifyBase;
		using Base = BoomListView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12BoomListViewD2Ev")), Default, BoomListView)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float>::func(&BoomListView::create)), Default, BoomListView, create, cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&BoomListView::draw)), Default, BoomListView, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&BoomListView::setupList)), Default, BoomListView, setupList, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCIndexPath&, TableViewCell*, TableView*>::func(&BoomListView::TableViewWillDisplayCellForRowAtIndexPath)), Default, BoomListView, TableViewWillDisplayCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCIndexPath&, TableView*>::func(&BoomListView::cellHeightForRowAtIndexPath)), Default, BoomListView, cellHeightForRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCIndexPath&, TableView*>::func(&BoomListView::didSelectRowAtIndexPath)), Default, BoomListView, didSelectRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int, TableView*>::func(&BoomListView::numberOfRowsInSection)), Default, BoomListView, numberOfRowsInSection, unsigned int, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<TableView*>::func(&BoomListView::numberOfSectionsInTableView)), Default, BoomListView, numberOfSectionsInTableView, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCIndexPath&, TableView*>::func(&BoomListView::cellForRowAtIndexPath)), Default, BoomListView, cellForRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<TableView*, TableViewCellEditingStyle, CCIndexPath&>::func(&BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath)), Default, BoomListView, TableViewCommitCellEditingStyleForRowAtIndexPath, TableView*, TableViewCellEditingStyle, CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCIndexPath&, TableViewCell*, TableView*>::func(&BoomListView::TableViewWillReloadCellForRowAtIndexPath)), Default, BoomListView, TableViewWillReloadCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&BoomListView::getListCell)), Default, BoomListView, getListCell, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<TableViewCell*, int>::func(&BoomListView::loadCell)), Default, BoomListView, loadCell, TableViewCell*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&BoomListView::addObjectToList)), Default, BoomListView, addObjectToList, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, init, cocos2d::CCArray*, BoomListType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float>::func(&BoomListView::init)), Default, BoomListView, init, cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&BoomListView::lockList)), Default, BoomListView, lockList, bool)
		}
	};
}
