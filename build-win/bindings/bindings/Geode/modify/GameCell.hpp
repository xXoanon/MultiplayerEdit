#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameCell.hpp>
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

	#ifndef GEODE_STATICS_loadFromString
		#define GEODE_STATICS_loadFromString
		GEODE_AS_STATIC_FUNCTION(loadFromString) 
	#endif

	#ifndef GEODE_STATICS_onTouch
		#define GEODE_STATICS_onTouch
		GEODE_AS_STATIC_FUNCTION(onTouch) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromString
		#define GEODE_CONCEPT_CHECK_loadFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTouch
		#define GEODE_CONCEPT_CHECK_onTouch
		GEODE_CONCEPT_FUNCTION_CHECK(onTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameCell> : ModifyBase<ModifyDerive<Der, GameCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameCell>>;
		using ModifyBase<ModifyDerive<Der, GameCell>>::ModifyBase;
		using Base = GameCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c830, Thiscall, GameCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cc30, Thiscall, GameCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c840, Thiscall, GameCell, loadFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cc00, Thiscall, GameCell, onTouch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameCell, updateBGColor, int)
		}
	};
}
