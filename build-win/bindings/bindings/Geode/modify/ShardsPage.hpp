#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShardsPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onIconInfo
		#define GEODE_STATICS_onIconInfo
		GEODE_AS_STATIC_FUNCTION(onIconInfo) 
	#endif

	#ifndef GEODE_STATICS_onSwitchPage
		#define GEODE_STATICS_onSwitchPage
		GEODE_AS_STATIC_FUNCTION(onSwitchPage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIconInfo
		#define GEODE_CONCEPT_CHECK_onIconInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onIconInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSwitchPage
		#define GEODE_CONCEPT_CHECK_onSwitchPage
		GEODE_CONCEPT_FUNCTION_CHECK(onSwitchPage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShardsPage> : ModifyBase<ModifyDerive<Der, ShardsPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShardsPage>>;
		using ModifyBase<ModifyDerive<Der, ShardsPage>>::ModifyBase;
		using Base = ShardsPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShardsPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489b00, Thiscall, ShardsPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, ShardsPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, ShardsPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x867f0, Thiscall, ShardsPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShardsPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48cb70, Thiscall, ShardsPage, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, ShardsPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48caf0, Thiscall, ShardsPage, onIconInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48cb30, Thiscall, ShardsPage, onSwitchPage, cocos2d::CCObject*)
		}
	};
}
