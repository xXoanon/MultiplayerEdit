#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SliderTouchLogic.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxOffset
		#define GEODE_CONCEPT_CHECK_setMaxOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotated
		#define GEODE_CONCEPT_CHECK_setRotated
		GEODE_CONCEPT_FUNCTION_CHECK(setRotated) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SliderTouchLogic> : ModifyBase<ModifyDerive<Der, SliderTouchLogic>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SliderTouchLogic>>;
		using ModifyBase<ModifyDerive<Der, SliderTouchLogic>>::ModifyBase;
		using Base = SliderTouchLogic;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderTouchLogic, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x714e0, Thiscall, SliderTouchLogic, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x715d0, Thiscall, SliderTouchLogic, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71590, Thiscall, SliderTouchLogic, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71700, Thiscall, SliderTouchLogic, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderTouchLogic, init, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderTouchLogic, setMaxOffset, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SliderTouchLogic, setRotated, bool)
		}
	};
}
