#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectPremadeLayer.hpp>
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

	#ifndef GEODE_STATICS_onSelectPremade
		#define GEODE_STATICS_onSelectPremade
		GEODE_AS_STATIC_FUNCTION(onSelectPremade) 
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

	#ifndef GEODE_CONCEPT_CHECK_onSelectPremade
		#define GEODE_CONCEPT_CHECK_onSelectPremade
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectPremade) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectPremadeLayer> : ModifyBase<ModifyDerive<Der, SelectPremadeLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectPremadeLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectPremadeLayer>>::ModifyBase;
		using Base = SelectPremadeLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectPremadeLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x406bb0, Thiscall, SelectPremadeLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, SelectPremadeLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, SelectPremadeLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4071c0, Thiscall, SelectPremadeLayer, onSelectPremade, cocos2d::CCObject*)
		}
	};
}
