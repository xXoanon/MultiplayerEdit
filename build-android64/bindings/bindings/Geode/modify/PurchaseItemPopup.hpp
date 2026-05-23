#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PurchaseItemPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPurchase
		#define GEODE_STATICS_onPurchase
		GEODE_AS_STATIC_FUNCTION(onPurchase) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPurchase
		#define GEODE_CONCEPT_CHECK_onPurchase
		GEODE_CONCEPT_FUNCTION_CHECK(onPurchase) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PurchaseItemPopup> : ModifyBase<ModifyDerive<Der, PurchaseItemPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PurchaseItemPopup>>;
		using ModifyBase<ModifyDerive<Der, PurchaseItemPopup>>::ModifyBase;
		using Base = PurchaseItemPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJStoreItem*>::func(&PurchaseItemPopup::create)), Default, PurchaseItemPopup, create, GJStoreItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&PurchaseItemPopup::keyBackClicked)), Default, PurchaseItemPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJStoreItem*>::func(&PurchaseItemPopup::init)), Default, PurchaseItemPopup, init, GJStoreItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&PurchaseItemPopup::onClose)), Default, PurchaseItemPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&PurchaseItemPopup::onPurchase)), Default, PurchaseItemPopup, onPurchase, cocos2d::CCObject*)
		}
	};
}
