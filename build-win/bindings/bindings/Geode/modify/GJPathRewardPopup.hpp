#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathRewardPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_closePopup
		#define GEODE_STATICS_closePopup
		GEODE_AS_STATIC_FUNCTION(closePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClaim
		#define GEODE_STATICS_onClaim
		GEODE_AS_STATIC_FUNCTION(onClaim) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closePopup
		#define GEODE_CONCEPT_CHECK_closePopup
		GEODE_CONCEPT_FUNCTION_CHECK(closePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaim
		#define GEODE_CONCEPT_CHECK_onClaim
		GEODE_CONCEPT_FUNCTION_CHECK(onClaim) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathRewardPopup> : ModifyBase<ModifyDerive<Der, GJPathRewardPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathRewardPopup>>;
		using ModifyBase<ModifyDerive<Der, GJPathRewardPopup>>::ModifyBase;
		using Base = GJPathRewardPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJPathRewardPopup, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJPathRewardPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2853f0, Thiscall, GJPathRewardPopup, closePopup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289f20, Thiscall, GJPathRewardPopup, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28a400, Thiscall, GJPathRewardPopup, onClaim, cocos2d::CCObject*)
		}
	};
}
