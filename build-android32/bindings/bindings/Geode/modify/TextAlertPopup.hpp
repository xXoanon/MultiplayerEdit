#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextAlertPopup.hpp>
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

	#ifndef GEODE_STATICS_setAlertPosition
		#define GEODE_STATICS_setAlertPosition
		GEODE_AS_STATIC_FUNCTION(setAlertPosition) 
	#endif

	#ifndef GEODE_STATICS_setLabelColor
		#define GEODE_STATICS_setLabelColor
		GEODE_AS_STATIC_FUNCTION(setLabelColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAlertPosition
		#define GEODE_CONCEPT_CHECK_setAlertPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setAlertPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelColor
		#define GEODE_CONCEPT_CHECK_setLabelColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextAlertPopup> : ModifyBase<ModifyDerive<Der, TextAlertPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextAlertPopup>>;
		using ModifyBase<ModifyDerive<Der, TextAlertPopup>>::ModifyBase;
		using Base = TextAlertPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14TextAlertPopup6createESsffiSs")), Default, TextAlertPopup, create, gd::string, float, float, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14TextAlertPopup4initESsffiSs")), Default, TextAlertPopup, init, gd::string, float, float, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCPoint>::func(&TextAlertPopup::setAlertPosition)), Default, TextAlertPopup, setAlertPosition, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&TextAlertPopup::setLabelColor)), Default, TextAlertPopup, setLabelColor, cocos2d::ccColor3B)
		}
	};
}
