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

	#ifndef GEODE_STATICS_activeRangeTouchTest
		#define GEODE_STATICS_activeRangeTouchTest
		GEODE_AS_STATIC_FUNCTION(activeRangeTouchTest) 
	#endif

	#ifndef GEODE_STATICS_activeTouchTest
		#define GEODE_STATICS_activeTouchTest
		GEODE_AS_STATIC_FUNCTION(activeTouchTest) 
	#endif

	#ifndef GEODE_STATICS_getButtonScale
		#define GEODE_STATICS_getButtonScale
		GEODE_AS_STATIC_FUNCTION(getButtonScale) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_highlightButton
		#define GEODE_STATICS_highlightButton
		GEODE_AS_STATIC_FUNCTION(highlightButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadFromConfig
		#define GEODE_STATICS_loadFromConfig
		GEODE_AS_STATIC_FUNCTION(loadFromConfig) 
	#endif

	#ifndef GEODE_STATICS_resetState
		#define GEODE_STATICS_resetState
		GEODE_AS_STATIC_FUNCTION(resetState) 
	#endif

	#ifndef GEODE_STATICS_saveToConfig
		#define GEODE_STATICS_saveToConfig
		GEODE_AS_STATIC_FUNCTION(saveToConfig) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_toggleHighlight
		#define GEODE_STATICS_toggleHighlight
		GEODE_AS_STATIC_FUNCTION(toggleHighlight) 
	#endif

	#ifndef GEODE_STATICS_toggleModeB
		#define GEODE_STATICS_toggleModeB
		GEODE_AS_STATIC_FUNCTION(toggleModeB) 
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

	#ifndef GEODE_STATICS_updateButtonScale
		#define GEODE_STATICS_updateButtonScale
		GEODE_AS_STATIC_FUNCTION(updateButtonScale) 
	#endif

	#ifndef GEODE_STATICS_updateDeadzone
		#define GEODE_STATICS_updateDeadzone
		GEODE_AS_STATIC_FUNCTION(updateDeadzone) 
	#endif

	#ifndef GEODE_STATICS_updateDragRadius
		#define GEODE_STATICS_updateDragRadius
		GEODE_AS_STATIC_FUNCTION(updateDragRadius) 
	#endif

	#ifndef GEODE_STATICS_updateHeight
		#define GEODE_STATICS_updateHeight
		GEODE_AS_STATIC_FUNCTION(updateHeight) 
	#endif

	#ifndef GEODE_STATICS_updateRangePos
		#define GEODE_STATICS_updateRangePos
		GEODE_AS_STATIC_FUNCTION(updateRangePos) 
	#endif

	#ifndef GEODE_STATICS_updateSize
		#define GEODE_STATICS_updateSize
		GEODE_AS_STATIC_FUNCTION(updateSize) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UIButtonConfig&>::func(&GJUINode::create)), Default, GJUINode, create, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GJUINode::draw)), Default, GJUINode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&GJUINode::activeRangeTouchTest)), Default, GJUINode, activeRangeTouchTest, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&GJUINode::activeTouchTest)), Default, GJUINode, activeTouchTest, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJUINode::getButtonScale)), Default, GJUINode, getButtonScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJUINode::getOpacity)), Default, GJUINode, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJUINode::highlightButton)), Default, GJUINode, highlightButton, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UIButtonConfig&>::func(&GJUINode::init)), Default, GJUINode, init, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UIButtonConfig&>::func(&GJUINode::loadFromConfig)), Default, GJUINode, loadFromConfig, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJUINode::resetState)), Default, GJUINode, resetState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<UIButtonConfig&>::func(&GJUINode::saveToConfig)), Default, GJUINode, saveToConfig, UIButtonConfig&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned char>::func(&GJUINode::setOpacity)), Default, GJUINode, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GJUINode::toggleHighlight)), Default, GJUINode, toggleHighlight, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GJUINode::toggleModeB)), Default, GJUINode, toggleModeB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJUINode::touchEnded)), Default, GJUINode, touchEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&GJUINode::touchTest)), Default, GJUINode, touchTest, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJUINode::updateButtonFrames)), Default, GJUINode, updateButtonFrames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJUINode::updateButtonPositions)), Default, GJUINode, updateButtonPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJUINode::updateButtonScale)), Default, GJUINode, updateButtonScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJUINode::updateDeadzone)), Default, GJUINode, updateDeadzone, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJUINode::updateDragRadius)), Default, GJUINode, updateDragRadius, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJUINode::updateHeight)), Default, GJUINode, updateHeight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&GJUINode::updateRangePos)), Default, GJUINode, updateRangePos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&GJUINode::updateSize)), Default, GJUINode, updateSize, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJUINode::updateWidth)), Default, GJUINode, updateWidth, float)
		}
	};
}
