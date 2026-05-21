#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_willTweenToIndexPath
		#define GEODE_CONCEPT_CHECK_willTweenToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(willTweenToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didEndTweenToIndexPath
		#define GEODE_CONCEPT_CHECK_didEndTweenToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(didEndTweenToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewWillDisplayCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewWillDisplayCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewWillDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewDidDisplayCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewDidDisplayCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewDidDisplayCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewWillReloadCellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewWillReloadCellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewWillReloadCellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellHeightForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_cellHeightForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(cellHeightForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didSelectRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_didSelectRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(didSelectRowAtIndexPath) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewDelegate> : ModifyBase<ModifyDerive<Der, TableViewDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewDelegate>>;
		using ModifyBase<ModifyDerive<Der, TableViewDelegate>>::ModifyBase;
		using Base = TableViewDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, willTweenToIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, didEndTweenToIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, TableViewWillDisplayCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, TableViewDidDisplayCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, TableViewWillReloadCellForRowAtIndexPath, CCIndexPath&, TableViewCell*, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, cellHeightForRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDelegate, didSelectRowAtIndexPath, CCIndexPath&, TableView*)
		}
	};
}
