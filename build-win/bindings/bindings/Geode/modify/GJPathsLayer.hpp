#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_nameForPath
		#define GEODE_STATICS_nameForPath
		GEODE_AS_STATIC_FUNCTION(nameForPath) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPath
		#define GEODE_STATICS_onPath
		GEODE_AS_STATIC_FUNCTION(onPath) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForPath
		#define GEODE_CONCEPT_CHECK_nameForPath
		GEODE_CONCEPT_FUNCTION_CHECK(nameForPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_darkenButtons
		#define GEODE_CONCEPT_CHECK_darkenButtons
		GEODE_CONCEPT_FUNCTION_CHECK(darkenButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPath
		#define GEODE_CONCEPT_CHECK_onPath
		GEODE_CONCEPT_FUNCTION_CHECK(onPath) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathsLayer> : ModifyBase<ModifyDerive<Der, GJPathsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathsLayer>>;
		using ModifyBase<ModifyDerive<Der, GJPathsLayer>>::ModifyBase;
		using Base = GJPathsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x284b00, Default, GJPathsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x284890, Default, GJPathsLayer, nameForPath, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x284c00, Thiscall, GJPathsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x285160, Thiscall, GJPathsLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, GJPathsLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x285450, Thiscall, GJPathsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x867f0, Thiscall, GJPathsLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJPathsLayer, darkenButtons, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2853f0, Thiscall, GJPathsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2851b0, Thiscall, GJPathsLayer, onPath, cocos2d::CCObject*)
		}
	};
}
