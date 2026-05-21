#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomListView.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_cellHeightForRowAtIndexPath
		#define GEODE_STATICS_cellHeightForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellHeightForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_numberOfRowsInSection
		#define GEODE_STATICS_numberOfRowsInSection
		GEODE_AS_STATIC_FUNCTION(numberOfRowsInSection) 
	#endif

	#ifndef GEODE_STATICS_cellForRowAtIndexPath
		#define GEODE_STATICS_cellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_getListCell
		#define GEODE_STATICS_getListCell
		GEODE_AS_STATIC_FUNCTION(getListCell) 
	#endif

	#ifndef GEODE_STATICS_loadCell
		#define GEODE_STATICS_loadCell
		GEODE_AS_STATIC_FUNCTION(loadCell) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3bf80, Thiscall, BoomListView)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, create, cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c390, Thiscall, BoomListView, setupList, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, TableViewWillDisplayCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c420, Thiscall, BoomListView, cellHeightForRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, didSelectRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c430, Thiscall, BoomListView, numberOfRowsInSection, unsigned int, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, numberOfSectionsInTableView, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c450, Thiscall, BoomListView, cellForRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, TableViewCommitCellEditingStyleForRowAtIndexPath, TableView*, TableViewCellEditingStyle, CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, TableViewWillReloadCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4e0, Thiscall, BoomListView, getListCell, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c650, Thiscall, BoomListView, loadCell, TableViewCell*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, addObjectToList, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, init, cocos2d::CCArray*, BoomListType, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c020, Thiscall, BoomListView, init, cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomListView, lockList, bool)
		}
	};
}
