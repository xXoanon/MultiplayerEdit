#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TutorialPopup.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_animateMenu
		#define GEODE_STATICS_animateMenu
		GEODE_AS_STATIC_FUNCTION(animateMenu) 
	#endif

	#ifndef GEODE_STATICS_closeTutorial
		#define GEODE_STATICS_closeTutorial
		GEODE_AS_STATIC_FUNCTION(closeTutorial) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerForCallback
		#define GEODE_STATICS_registerForCallback
		GEODE_AS_STATIC_FUNCTION(registerForCallback) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateMenu
		#define GEODE_CONCEPT_CHECK_animateMenu
		GEODE_CONCEPT_FUNCTION_CHECK(animateMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeTutorial
		#define GEODE_CONCEPT_CHECK_closeTutorial
		GEODE_CONCEPT_FUNCTION_CHECK(closeTutorial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerForCallback
		#define GEODE_CONCEPT_CHECK_registerForCallback
		GEODE_CONCEPT_FUNCTION_CHECK(registerForCallback) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TutorialPopup> : ModifyBase<ModifyDerive<Der, TutorialPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TutorialPopup>>;
		using ModifyBase<ModifyDerive<Der, TutorialPopup>>::ModifyBase;
		using Base = TutorialPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TutorialPopup, create, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TutorialPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TutorialPopup, show, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TutorialPopup, animateMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TutorialPopup, closeTutorial, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TutorialPopup, init, gd::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TutorialPopup, registerForCallback, cocos2d::SEL_MenuHandler, cocos2d::CCNode*)
		}
	};
}
