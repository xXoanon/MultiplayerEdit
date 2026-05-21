#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_updateTextKerning
		#define GEODE_STATICS_updateTextKerning
		GEODE_AS_STATIC_FUNCTION(updateTextKerning) 
	#endif

	#ifndef GEODE_STATICS_getTextKerning
		#define GEODE_STATICS_getTextKerning
		GEODE_AS_STATIC_FUNCTION(getTextKerning) 
	#endif

	#ifndef GEODE_STATICS_updateTextObject
		#define GEODE_STATICS_updateTextObject
		GEODE_AS_STATIC_FUNCTION(updateTextObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextKerning
		#define GEODE_CONCEPT_CHECK_updateTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextKerning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextKerning
		#define GEODE_CONCEPT_CHECK_getTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(getTextKerning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextObject
		#define GEODE_CONCEPT_CHECK_updateTextObject
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextGameObject> : ModifyBase<ModifyDerive<Der, TextGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextGameObject>>;
		using ModifyBase<ModifyDerive<Der, TextGameObject>>::ModifyBase;
		using Base = TextGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a74b0, Default, TextGameObject, create, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7940, Thiscall, TextGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7b00, Thiscall, TextGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7590, Thiscall, TextGameObject, updateTextKerning, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b650, Thiscall, TextGameObject, getTextKerning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextGameObject, init, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a75a0, Thiscall, TextGameObject, updateTextObject, gd::string, bool)
		}
	};
}
