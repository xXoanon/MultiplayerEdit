#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEventLinkPopup.hpp>
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

	#ifndef GEODE_STATICS_onSelectEvent
		#define GEODE_STATICS_onSelectEvent
		GEODE_AS_STATIC_FUNCTION(onSelectEvent) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectEvent
		#define GEODE_CONCEPT_CHECK_onSelectEvent
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEventIDs
		#define GEODE_CONCEPT_CHECK_updateEventIDs
		GEODE_CONCEPT_FUNCTION_CHECK(updateEventIDs) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEventLinkPopup> : ModifyBase<ModifyDerive<Der, SetupEventLinkPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEventLinkPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEventLinkPopup>>::ModifyBase;
		using Base = SetupEventLinkPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x465e40, Default, SetupEventLinkPopup, create, EventLinkTrigger*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x465f50, Thiscall, SetupEventLinkPopup, init, EventLinkTrigger*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4664c0, Thiscall, SetupEventLinkPopup, onSelectEvent, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupEventLinkPopup, updateEventIDs, gd::set<int>&)
		}
	};
}
