#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UIOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onReset
		#define GEODE_STATICS_onReset
		GEODE_AS_STATIC_FUNCTION(onReset) 
	#endif

	#ifndef GEODE_STATICS_onSaveLoad
		#define GEODE_STATICS_onSaveLoad
		GEODE_AS_STATIC_FUNCTION(onSaveLoad) 
	#endif

	#ifndef GEODE_STATICS_toggleUIGroup
		#define GEODE_STATICS_toggleUIGroup
		GEODE_AS_STATIC_FUNCTION(toggleUIGroup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNode
		#define GEODE_CONCEPT_CHECK_getNode
		GEODE_CONCEPT_FUNCTION_CHECK(getNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReset
		#define GEODE_CONCEPT_CHECK_onReset
		GEODE_CONCEPT_FUNCTION_CHECK(onReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveLoad
		#define GEODE_CONCEPT_CHECK_onSaveLoad
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleUIGroup
		#define GEODE_CONCEPT_CHECK_toggleUIGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleUIGroup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UIOptionsLayer> : ModifyBase<ModifyDerive<Der, UIOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UIOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, UIOptionsLayer>>::ModifyBase;
		using Base = UIOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0ca0, Default, UIOptionsLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a3d00, Thiscall, UIOptionsLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a3e50, Thiscall, UIOptionsLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a3f80, Thiscall, UIOptionsLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71240, Thiscall, UIOptionsLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b7d0, Thiscall, UIOptionsLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a2de0, Thiscall, UIOptionsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a31e0, Thiscall, UIOptionsLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a3960, Thiscall, UIOptionsLayer, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UIOptionsLayer, getNode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0de0, Thiscall, UIOptionsLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a30d0, Thiscall, UIOptionsLayer, onReset, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a2cb0, Thiscall, UIOptionsLayer, onSaveLoad, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a2af0, Thiscall, UIOptionsLayer, toggleUIGroup, int)
		}
	};
}
