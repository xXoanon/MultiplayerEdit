#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ButtonPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ButtonPage> : ModifyBase<ModifyDerive<Der, ButtonPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ButtonPage>>;
		using ModifyBase<ModifyDerive<Der, ButtonPage>>::ModifyBase;
		using Base = ButtonPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ButtonPage, create, cocos2d::CCArray*, cocos2d::CCPoint, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ButtonPage, init, cocos2d::CCArray*, cocos2d::CCPoint, int, float)
		}
	};
}
