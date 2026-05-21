#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingCircle.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_fadeAndRemove
		#define GEODE_STATICS_fadeAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeAndRemove) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
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

	#ifndef GEODE_CONCEPT_CHECK_fadeAndRemove
		#define GEODE_CONCEPT_CHECK_fadeAndRemove
		GEODE_CONCEPT_FUNCTION_CHECK(fadeAndRemove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFade
		#define GEODE_CONCEPT_CHECK_setFade
		GEODE_CONCEPT_FUNCTION_CHECK(setFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParentLayer
		#define GEODE_CONCEPT_CHECK_setParentLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setParentLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LoadingCircle> : ModifyBase<ModifyDerive<Der, LoadingCircle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingCircle>>;
		using ModifyBase<ModifyDerive<Der, LoadingCircle>>::ModifyBase;
		using Base = LoadingCircle;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6b870, Default, LoadingCircle, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6b970, Thiscall, LoadingCircle, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bbf0, Thiscall, LoadingCircle, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircle, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircle, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircle, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircle, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bc10, Thiscall, LoadingCircle, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6bb50, Thiscall, LoadingCircle, fadeAndRemove, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircle, setFade, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LoadingCircle, setParentLayer, cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6ba50, Thiscall, LoadingCircle, show, )
		}
	};
}
