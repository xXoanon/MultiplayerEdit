#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ScrollingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
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

	#ifndef GEODE_STATICS_getViewRect
		#define GEODE_STATICS_getViewRect
		GEODE_AS_STATIC_FUNCTION(getViewRect) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
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

	#ifndef GEODE_CONCEPT_CHECK_getViewRect
		#define GEODE_CONCEPT_CHECK_getViewRect
		GEODE_CONCEPT_FUNCTION_CHECK(getViewRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartOffset
		#define GEODE_CONCEPT_CHECK_setStartOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setStartOffset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ScrollingLayer> : ModifyBase<ModifyDerive<Der, ScrollingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ScrollingLayer>>;
		using ModifyBase<ModifyDerive<Der, ScrollingLayer>>::ModifyBase;
		using Base = ScrollingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollingLayer, create, cocos2d::CCSize, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x70f10, Thiscall, ScrollingLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x70fd0, Thiscall, ScrollingLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71020, Thiscall, ScrollingLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71110, Thiscall, ScrollingLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71220, Thiscall, ScrollingLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71240, Thiscall, ScrollingLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x70e20, Thiscall, ScrollingLayer, getViewRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollingLayer, init, cocos2d::CCSize, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollingLayer, setStartOffset, cocos2d::CCPoint)
		}
	};
}
