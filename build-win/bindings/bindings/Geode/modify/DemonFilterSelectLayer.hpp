#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DemonFilterSelectLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_selectRating
		#define GEODE_STATICS_selectRating
		GEODE_AS_STATIC_FUNCTION(selectRating) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectRating
		#define GEODE_CONCEPT_CHECK_selectRating
		GEODE_CONCEPT_FUNCTION_CHECK(selectRating) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DemonFilterSelectLayer> : ModifyBase<ModifyDerive<Der, DemonFilterSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DemonFilterSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, DemonFilterSelectLayer>>::ModifyBase;
		using Base = DemonFilterSelectLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DemonFilterSelectLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x317950, Thiscall, DemonFilterSelectLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3180a0, Thiscall, DemonFilterSelectLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x318050, Thiscall, DemonFilterSelectLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x317f90, Thiscall, DemonFilterSelectLayer, selectRating, cocos2d::CCObject*)
		}
	};
}
