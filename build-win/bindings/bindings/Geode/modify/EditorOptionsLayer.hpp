#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif

	#ifndef GEODE_STATICS_onButtonRows
		#define GEODE_STATICS_onButtonRows
		GEODE_AS_STATIC_FUNCTION(onButtonRows) 
	#endif

	#ifndef GEODE_STATICS_onButtonsPerRow
		#define GEODE_STATICS_onButtonsPerRow
		GEODE_AS_STATIC_FUNCTION(onButtonsPerRow) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupOptions
		#define GEODE_CONCEPT_CHECK_setupOptions
		GEODE_CONCEPT_FUNCTION_CHECK(setupOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButtonRows
		#define GEODE_CONCEPT_CHECK_onButtonRows
		GEODE_CONCEPT_FUNCTION_CHECK(onButtonRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButtonsPerRow
		#define GEODE_CONCEPT_CHECK_onButtonsPerRow
		GEODE_CONCEPT_FUNCTION_CHECK(onButtonsPerRow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorOptionsLayer> : ModifyBase<ModifyDerive<Der, EditorOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorOptionsLayer>>::ModifyBase;
		using Base = EditorOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorOptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291040, Thiscall, EditorOptionsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291a90, Thiscall, EditorOptionsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291070, Thiscall, EditorOptionsLayer, setupOptions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291a00, Thiscall, EditorOptionsLayer, onButtonRows, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x291970, Thiscall, EditorOptionsLayer, onButtonsPerRow, cocos2d::CCObject*)
		}
	};
}
