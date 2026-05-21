#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetColorIDPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialColor
		#define GEODE_STATICS_onSelectSpecialColor
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpecialColor
		#define GEODE_CONCEPT_CHECK_onSelectSpecialColor
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpecialColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetColorIDPopup> : ModifyBase<ModifyDerive<Der, SetColorIDPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetColorIDPopup>>;
		using ModifyBase<ModifyDerive<Der, SetColorIDPopup>>::ModifyBase;
		using Base = SetColorIDPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetColorIDPopup, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c350, Thiscall, SetColorIDPopup, colorSelectClosed, GJSpecialColorSelect*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c100, Thiscall, SetColorIDPopup, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29c2e0, Thiscall, SetColorIDPopup, onSelectSpecialColor, cocos2d::CCObject*)
		}
	};
}
