#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectEventLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_addToggle
		#define GEODE_STATICS_addToggle
		GEODE_AS_STATIC_FUNCTION(addToggle) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToggle
		#define GEODE_CONCEPT_CHECK_addToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nextPosition
		#define GEODE_CONCEPT_CHECK_nextPosition
		GEODE_CONCEPT_FUNCTION_CHECK(nextPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectEventLayer> : ModifyBase<ModifyDerive<Der, SelectEventLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectEventLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectEventLayer>>::ModifyBase;
		using Base = SelectEventLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectEventLayer, create, SetupEventLinkPopup*, gd::set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6ec0, Thiscall, SelectEventLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4676a0, Thiscall, SelectEventLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467550, Thiscall, SelectEventLayer, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467760, Thiscall, SelectEventLayer, addToggle, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4666e0, Thiscall, SelectEventLayer, init, SetupEventLinkPopup*, gd::set<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectEventLayer, nextPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x467ba0, Thiscall, SelectEventLayer, onInfo, cocos2d::CCObject*)
		}
	};
}
