#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SmartTemplateCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromObject
		#define GEODE_CONCEPT_CHECK_loadFromObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClick
		#define GEODE_CONCEPT_CHECK_onClick
		GEODE_CONCEPT_FUNCTION_CHECK(onClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SmartTemplateCell> : ModifyBase<ModifyDerive<Der, SmartTemplateCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SmartTemplateCell>>;
		using ModifyBase<ModifyDerive<Der, SmartTemplateCell>>::ModifyBase;
		using Base = SmartTemplateCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c830, Thiscall, SmartTemplateCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, SmartTemplateCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbe5e0, Thiscall, SmartTemplateCell, loadFromObject, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbeac0, Thiscall, SmartTemplateCell, onClick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbe9d0, Thiscall, SmartTemplateCell, updateBGColor, int)
		}
	};
}
