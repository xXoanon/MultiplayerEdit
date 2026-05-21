#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditButtonBar.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_loadFromItems
		#define GEODE_STATICS_loadFromItems
		GEODE_AS_STATIC_FUNCTION(loadFromItems) 
	#endif

	#ifndef GEODE_STATICS_onLeft
		#define GEODE_STATICS_onLeft
		GEODE_AS_STATIC_FUNCTION(onLeft) 
	#endif

	#ifndef GEODE_STATICS_onRight
		#define GEODE_STATICS_onRight
		GEODE_AS_STATIC_FUNCTION(onRight) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromItems
		#define GEODE_CONCEPT_CHECK_loadFromItems
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLeft
		#define GEODE_CONCEPT_CHECK_onLeft
		GEODE_CONCEPT_FUNCTION_CHECK(onLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRight
		#define GEODE_CONCEPT_CHECK_onRight
		GEODE_CONCEPT_FUNCTION_CHECK(onRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadItems
		#define GEODE_CONCEPT_CHECK_reloadItems
		GEODE_CONCEPT_FUNCTION_CHECK(reloadItems) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditButtonBar> : ModifyBase<ModifyDerive<Der, EditButtonBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditButtonBar>>;
		using ModifyBase<ModifyDerive<Der, EditButtonBar>>::ModifyBase;
		using Base = EditButtonBar;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4470, Default, EditButtonBar, create, cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditButtonBar, getPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4ef0, Thiscall, EditButtonBar, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditButtonBar, init, cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd45d0, Thiscall, EditButtonBar, loadFromItems, cocos2d::CCArray*, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4fc0, Thiscall, EditButtonBar, onLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4f50, Thiscall, EditButtonBar, onRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditButtonBar, reloadItems, int, int)
		}
	};
}
