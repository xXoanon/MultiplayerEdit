#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUINode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_activeTouchTest
		#define GEODE_STATICS_activeTouchTest
		GEODE_AS_STATIC_FUNCTION(activeTouchTest) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_saveToConfig
		#define GEODE_STATICS_saveToConfig
		GEODE_AS_STATIC_FUNCTION(saveToConfig) 
	#endif

	#ifndef GEODE_STATICS_toggleHighlight
		#define GEODE_STATICS_toggleHighlight
		GEODE_AS_STATIC_FUNCTION(toggleHighlight) 
	#endif

	#ifndef GEODE_STATICS_touchEnded
		#define GEODE_STATICS_touchEnded
		GEODE_AS_STATIC_FUNCTION(touchEnded) 
	#endif

	#ifndef GEODE_STATICS_touchTest
		#define GEODE_STATICS_touchTest
		GEODE_AS_STATIC_FUNCTION(touchTest) 
	#endif

	#ifndef GEODE_STATICS_updateButtonFrames
		#define GEODE_STATICS_updateButtonFrames
		GEODE_AS_STATIC_FUNCTION(updateButtonFrames) 
	#endif

	#ifndef GEODE_STATICS_updateButtonPositions
		#define GEODE_STATICS_updateButtonPositions
		GEODE_AS_STATIC_FUNCTION(updateButtonPositions) 
	#endif

	#ifndef GEODE_STATICS_updateHeight
		#define GEODE_STATICS_updateHeight
		GEODE_AS_STATIC_FUNCTION(updateHeight) 
	#endif

	#ifndef GEODE_STATICS_updateWidth
		#define GEODE_STATICS_updateWidth
		GEODE_AS_STATIC_FUNCTION(updateWidth) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeRangeTouchTest
		#define GEODE_CONCEPT_CHECK_activeRangeTouchTest
		GEODE_CONCEPT_FUNCTION_CHECK(activeRangeTouchTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeTouchTest
		#define GEODE_CONCEPT_CHECK_activeTouchTest
		GEODE_CONCEPT_FUNCTION_CHECK(activeTouchTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getButtonScale
		#define GEODE_CONCEPT_CHECK_getButtonScale
		GEODE_CONCEPT_FUNCTION_CHECK(getButtonScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_highlightButton
		#define GEODE_CONCEPT_CHECK_highlightButton
		GEODE_CONCEPT_FUNCTION_CHECK(highlightButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromConfig
		#define GEODE_CONCEPT_CHECK_loadFromConfig
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetState
		#define GEODE_CONCEPT_CHECK_resetState
		GEODE_CONCEPT_FUNCTION_CHECK(resetState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToConfig
		#define GEODE_CONCEPT_CHECK_saveToConfig
		GEODE_CONCEPT_FUNCTION_CHECK(saveToConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleHighlight
		#define GEODE_CONCEPT_CHECK_toggleHighlight
		GEODE_CONCEPT_FUNCTION_CHECK(toggleHighlight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleModeB
		#define GEODE_CONCEPT_CHECK_toggleModeB
		GEODE_CONCEPT_FUNCTION_CHECK(toggleModeB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchEnded
		#define GEODE_CONCEPT_CHECK_touchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(touchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchTest
		#define GEODE_CONCEPT_CHECK_touchTest
		GEODE_CONCEPT_FUNCTION_CHECK(touchTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtonFrames
		#define GEODE_CONCEPT_CHECK_updateButtonFrames
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtonFrames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtonPositions
		#define GEODE_CONCEPT_CHECK_updateButtonPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtonPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtonScale
		#define GEODE_CONCEPT_CHECK_updateButtonScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtonScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDeadzone
		#define GEODE_CONCEPT_CHECK_updateDeadzone
		GEODE_CONCEPT_FUNCTION_CHECK(updateDeadzone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDragRadius
		#define GEODE_CONCEPT_CHECK_updateDragRadius
		GEODE_CONCEPT_FUNCTION_CHECK(updateDragRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHeight
		#define GEODE_CONCEPT_CHECK_updateHeight
		GEODE_CONCEPT_FUNCTION_CHECK(updateHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRangePos
		#define GEODE_CONCEPT_CHECK_updateRangePos
		GEODE_CONCEPT_FUNCTION_CHECK(updateRangePos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSize
		#define GEODE_CONCEPT_CHECK_updateSize
		GEODE_CONCEPT_FUNCTION_CHECK(updateSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateWidth
		#define GEODE_CONCEPT_CHECK_updateWidth
		GEODE_CONCEPT_FUNCTION_CHECK(updateWidth) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJUINode> : ModifyBase<ModifyDerive<Der, GJUINode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUINode>>;
		using ModifyBase<ModifyDerive<Der, GJUINode>>::ModifyBase;
		using Base = GJUINode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ceab0, Default, GJUINode, create, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cf5f0, Thiscall, GJUINode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, activeRangeTouchTest, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cf2c0, Thiscall, GJUINode, activeTouchTest, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, getButtonScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, highlightButton, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ceb90, Thiscall, GJUINode, init, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, loadFromConfig, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, resetState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cee40, Thiscall, GJUINode, saveToConfig, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cf560, Thiscall, GJUINode, toggleHighlight, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, toggleModeB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cf4a0, Thiscall, GJUINode, touchEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cf1b0, Thiscall, GJUINode, touchTest, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ceef0, Thiscall, GJUINode, updateButtonFrames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cf0b0, Thiscall, GJUINode, updateButtonPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, updateButtonScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, updateDeadzone, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, updateDragRadius, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cf040, Thiscall, GJUINode, updateHeight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, updateRangePos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUINode, updateSize, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cefd0, Thiscall, GJUINode, updateWidth, float)
		}
	};
}
