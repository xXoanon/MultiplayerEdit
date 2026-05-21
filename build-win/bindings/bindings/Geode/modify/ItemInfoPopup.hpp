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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b7b0, Default, ItemInfoPopup, create, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27d820, Default, ItemInfoPopup, nameForUnlockType, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, ItemInfoPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27b8a0, Thiscall, ItemInfoPopup, init, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ItemInfoPopup, isUnlockedByDefault, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, ItemInfoPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27d7f0, Thiscall, ItemInfoPopup, onCredit, cocos2d::CCObject*)
		}
	};
}
