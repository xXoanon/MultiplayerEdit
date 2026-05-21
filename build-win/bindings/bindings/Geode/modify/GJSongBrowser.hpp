#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSongBrowser.hpp>
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

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onDeleteAll
		#define GEODE_STATICS_onDeleteAll
		GEODE_AS_STATIC_FUNCTION(onDeleteAll) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLayer
		#define GEODE_CONCEPT_CHECK_exitLayer
		GEODE_CONCEPT_FUNCTION_CHECK(exitLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteAll
		#define GEODE_CONCEPT_CHECK_onDeleteAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSongBrowser
		#define GEODE_CONCEPT_CHECK_setupSongBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupSongBrowser) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSongBrowser> : ModifyBase<ModifyDerive<Der, GJSongBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSongBrowser>>;
		using ModifyBase<ModifyDerive<Der, GJSongBrowser>>::ModifyBase;
		using Base = GJSongBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7170, Default, GJSongBrowser, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b72f0, Thiscall, GJSongBrowser, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b73f0, Thiscall, GJSongBrowser, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7330, Thiscall, GJSongBrowser, exitLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7b30, Thiscall, GJSongBrowser, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7c30, Thiscall, GJSongBrowser, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7c60, Thiscall, GJSongBrowser, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7770, Thiscall, GJSongBrowser, loadPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7a20, Thiscall, GJSongBrowser, onDeleteAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7a00, Thiscall, GJSongBrowser, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2b7a10, Thiscall, GJSongBrowser, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSongBrowser, setupPageInfo, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSongBrowser, setupSongBrowser, cocos2d::CCArray*)
		}
	};
}
