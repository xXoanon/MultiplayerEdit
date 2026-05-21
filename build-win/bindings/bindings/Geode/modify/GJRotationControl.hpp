#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRotationControl.hpp>
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

	#ifndef GEODE_STATICS_finishTouch
		#define GEODE_STATICS_finishTouch
		GEODE_AS_STATIC_FUNCTION(finishTouch) 
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

	#ifndef GEODE_CONCEPT_CHECK_finishTouch
		#define GEODE_CONCEPT_CHECK_finishTouch
		GEODE_CONCEPT_FUNCTION_CHECK(finishTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAngle
		#define GEODE_CONCEPT_CHECK_setAngle
		GEODE_CONCEPT_FUNCTION_CHECK(setAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSliderPosition
		#define GEODE_CONCEPT_CHECK_updateSliderPosition
		GEODE_CONCEPT_FUNCTION_CHECK(updateSliderPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRotationControl> : ModifyBase<ModifyDerive<Der, GJRotationControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRotationControl>>;
		using ModifyBase<ModifyDerive<Der, GJRotationControl>>::ModifyBase;
		using Base = GJRotationControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRotationControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129590, Thiscall, GJRotationControl, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1299f0, Thiscall, GJRotationControl, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129730, Thiscall, GJRotationControl, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129830, Thiscall, GJRotationControl, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1299d0, Thiscall, GJRotationControl, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71240, Thiscall, GJRotationControl, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1296b0, Thiscall, GJRotationControl, finishTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRotationControl, setAngle, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRotationControl, updateSliderPosition, cocos2d::CCPoint)
		}
	};
}
