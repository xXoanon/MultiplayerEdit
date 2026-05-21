#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJItemIcon.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createBrowserItem
		#define GEODE_STATICS_createBrowserItem
		GEODE_AS_STATIC_FUNCTION(createBrowserItem) 
	#endif

	#ifndef GEODE_STATICS_createStoreItem
		#define GEODE_STATICS_createStoreItem
		GEODE_AS_STATIC_FUNCTION(createStoreItem) 
	#endif

	#ifndef GEODE_STATICS_scaleForType
		#define GEODE_STATICS_scaleForType
		GEODE_AS_STATIC_FUNCTION(scaleForType) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_changeToLockedState
		#define GEODE_STATICS_changeToLockedState
		GEODE_AS_STATIC_FUNCTION(changeToLockedState) 
	#endif

	#ifndef GEODE_STATICS_darkenStoreItem
		#define GEODE_STATICS_darkenStoreItem
		GEODE_AS_STATIC_FUNCTION(darkenStoreItem) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_toggleEnabledState
		#define GEODE_STATICS_toggleEnabledState
		GEODE_AS_STATIC_FUNCTION(toggleEnabledState) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createBrowserItem
		#define GEODE_CONCEPT_CHECK_createBrowserItem
		GEODE_CONCEPT_FUNCTION_CHECK(createBrowserItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStoreItem
		#define GEODE_CONCEPT_CHECK_createStoreItem
		GEODE_CONCEPT_FUNCTION_CHECK(createStoreItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleForType
		#define GEODE_CONCEPT_CHECK_scaleForType
		GEODE_CONCEPT_FUNCTION_CHECK(scaleForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockedColorForType
		#define GEODE_CONCEPT_CHECK_unlockedColorForType
		GEODE_CONCEPT_FUNCTION_CHECK(unlockedColorForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_changeToLockedState
		#define GEODE_CONCEPT_CHECK_changeToLockedState
		GEODE_CONCEPT_FUNCTION_CHECK(changeToLockedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_darkenStoreItem
		#define GEODE_CONCEPT_CHECK_darkenStoreItem
		GEODE_CONCEPT_FUNCTION_CHECK(darkenStoreItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEnabledState
		#define GEODE_CONCEPT_CHECK_toggleEnabledState
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEnabledState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJItemIcon> : ModifyBase<ModifyDerive<Der, GJItemIcon>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJItemIcon>>;
		using ModifyBase<ModifyDerive<Der, GJItemIcon>>::ModifyBase;
		using Base = GJItemIcon;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJItemIcon, create, UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27a9f0, Default, GJItemIcon, createBrowserItem, UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27a8c0, Default, GJItemIcon, createStoreItem, UnlockType, int, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b710, Default, GJItemIcon, scaleForType, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJItemIcon, unlockedColorForType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b220, Thiscall, GJItemIcon, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b630, Thiscall, GJItemIcon, changeToLockedState, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b2c0, Thiscall, GJItemIcon, darkenStoreItem, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b340, Thiscall, GJItemIcon, darkenStoreItem, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ab10, Thiscall, GJItemIcon, init, UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b570, Thiscall, GJItemIcon, toggleEnabledState, bool)
		}
	};
}
