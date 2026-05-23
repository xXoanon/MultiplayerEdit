#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ItemInfoPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_nameForUnlockType
		#define GEODE_STATICS_nameForUnlockType
		GEODE_AS_STATIC_FUNCTION(nameForUnlockType) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isUnlockedByDefault
		#define GEODE_STATICS_isUnlockedByDefault
		GEODE_AS_STATIC_FUNCTION(isUnlockedByDefault) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCredit
		#define GEODE_STATICS_onCredit
		GEODE_AS_STATIC_FUNCTION(onCredit) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForUnlockType
		#define GEODE_CONCEPT_CHECK_nameForUnlockType
		GEODE_CONCEPT_FUNCTION_CHECK(nameForUnlockType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUnlockedByDefault
		#define GEODE_CONCEPT_CHECK_isUnlockedByDefault
		GEODE_CONCEPT_FUNCTION_CHECK(isUnlockedByDefault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCredit
		#define GEODE_CONCEPT_CHECK_onCredit
		GEODE_CONCEPT_FUNCTION_CHECK(onCredit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ItemInfoPopup> : ModifyBase<ModifyDerive<Der, ItemInfoPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ItemInfoPopup>>;
		using ModifyBase<ModifyDerive<Der, ItemInfoPopup>>::ModifyBase;
		using Base = ItemInfoPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&ItemInfoPopup::create)), Default, ItemInfoPopup, create, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&ItemInfoPopup::nameForUnlockType)), Default, ItemInfoPopup, nameForUnlockType, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ItemInfoPopup::keyBackClicked)), Default, ItemInfoPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&ItemInfoPopup::init)), Default, ItemInfoPopup, init, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&ItemInfoPopup::isUnlockedByDefault)), Default, ItemInfoPopup, isUnlockedByDefault, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ItemInfoPopup::onClose)), Default, ItemInfoPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ItemInfoPopup::onCredit)), Default, ItemInfoPopup, onCredit, cocos2d::CCObject*)
		}
	};
}
