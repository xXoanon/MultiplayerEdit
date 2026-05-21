#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCContentLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCContentLayer> : ModifyBase<ModifyDerive<Der, CCContentLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCContentLayer>>;
		using ModifyBase<ModifyDerive<Der, CCContentLayer>>::ModifyBase;
		using Base = CCContentLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCContentLayer, create, cocos2d::ccColor4B const&, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42fe0, Thiscall, CCContentLayer, setPosition, cocos2d::CCPoint const&)
		}
	};
}
