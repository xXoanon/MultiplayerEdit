#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJItemIcon.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

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

	#ifndef GEODE_STATICS_unlockedColorForType
		#define GEODE_STATICS_unlockedColorForType
		GEODE_AS_STATIC_FUNCTION(unlockedColorForType) 
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

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GJItemIconD2Ev")), Default, GJItemIcon)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B>::func(&GJItemIcon::create)), Default, GJItemIcon, create, UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType, int>::func(&GJItemIcon::createBrowserItem)), Default, GJItemIcon, createBrowserItem, UnlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType, int, bool, cocos2d::ccColor3B>::func(&GJItemIcon::createStoreItem)), Default, GJItemIcon, createStoreItem, UnlockType, int, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType>::func(&GJItemIcon::scaleForType)), Default, GJItemIcon, scaleForType, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJItemIcon::unlockedColorForType)), Default, GJItemIcon, unlockedColorForType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&GJItemIcon::setOpacity)), Default, GJItemIcon, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJItemIcon::changeToLockedState)), Default, GJItemIcon, changeToLockedState, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ShopType>::func(&GJItemIcon::darkenStoreItem)), Default, GJItemIcon, darkenStoreItem, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&GJItemIcon::darkenStoreItem)), Default, GJItemIcon, darkenStoreItem, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B>::func(&GJItemIcon::init)), Default, GJItemIcon, init, UnlockType, int, cocos2d::ccColor3B, cocos2d::ccColor3B, bool, bool, bool, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GJItemIcon::toggleEnabledState)), Default, GJItemIcon, toggleEnabledState, bool)
		}
	};
}
