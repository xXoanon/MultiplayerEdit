#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewDataSource.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_numberOfRowsInSection
		#define GEODE_CONCEPT_CHECK_numberOfRowsInSection
		GEODE_CONCEPT_FUNCTION_CHECK(numberOfRowsInSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_numberOfSectionsInTableView
		#define GEODE_CONCEPT_CHECK_numberOfSectionsInTableView
		GEODE_CONCEPT_FUNCTION_CHECK(numberOfSectionsInTableView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_TableViewCommitCellEditingStyleForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_TableViewCommitCellEditingStyleForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(TableViewCommitCellEditingStyleForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(cellForRowAtIndexPath) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewDataSource> : ModifyBase<ModifyDerive<Der, TableViewDataSource>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewDataSource>>;
		using ModifyBase<ModifyDerive<Der, TableViewDataSource>>::ModifyBase;
		using Base = TableViewDataSource;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDataSource, numberOfRowsInSection, unsigned int, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDataSource, numberOfSectionsInTableView, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDataSource, TableViewCommitCellEditingStyleForRowAtIndexPath, TableView*, TableViewCellEditingStyle, CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewDataSource, cellForRowAtIndexPath, CCIndexPath&, TableView*)
		}
	};
}
