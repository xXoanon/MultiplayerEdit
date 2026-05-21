#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/URLCell.hpp>
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

	#ifndef GEODE_STATICS_onURL
		#define GEODE_STATICS_onURL
		GEODE_AS_STATIC_FUNCTION(onURL) 
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

	#ifndef GEODE_CONCEPT_CHECK_onURL
		#define GEODE_CONCEPT_CHECK_onURL
		GEODE_CONCEPT_FUNCTION_CHECK(onURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, URLCell> : ModifyBase<ModifyDerive<Der, URLCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, URLCell>>;
		using ModifyBase<ModifyDerive<Der, URLCell>>::ModifyBase;
		using Base = URLCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c830, Thiscall, URLCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xade20, Thiscall, URLCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc0250, Thiscall, URLCell, loadFromObject, CCURLObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc0480, Thiscall, URLCell, onURL, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(URLCell, updateBGColor, int)
		}
	};
}
