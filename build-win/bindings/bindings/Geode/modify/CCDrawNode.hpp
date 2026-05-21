#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
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

	#ifndef GEODE_STATICS_clear
		#define GEODE_STATICS_clear
		GEODE_AS_STATIC_FUNCTION(clear) 
	#endif

	#ifndef GEODE_STATICS_disableDrawArea
		#define GEODE_STATICS_disableDrawArea
		GEODE_AS_STATIC_FUNCTION(disableDrawArea) 
	#endif

	#ifndef GEODE_STATICS_drawArchLikeHalfCircle
		#define GEODE_STATICS_drawArchLikeHalfCircle
		GEODE_AS_STATIC_FUNCTION(drawArchLikeHalfCircle) 
	#endif

	#ifndef GEODE_STATICS_drawCircle
		#define GEODE_STATICS_drawCircle
		GEODE_AS_STATIC_FUNCTION(drawCircle) 
	#endif

	#ifndef GEODE_STATICS_drawCubicBezier
		#define GEODE_STATICS_drawCubicBezier
		GEODE_AS_STATIC_FUNCTION(drawCubicBezier) 
	#endif

	#ifndef GEODE_STATICS_drawCubicBezierDashed
		#define GEODE_STATICS_drawCubicBezierDashed
		GEODE_AS_STATIC_FUNCTION(drawCubicBezierDashed) 
	#endif

	#ifndef GEODE_STATICS_drawDot
		#define GEODE_STATICS_drawDot
		GEODE_AS_STATIC_FUNCTION(drawDot) 
	#endif

	#ifndef GEODE_STATICS_drawLines
		#define GEODE_STATICS_drawLines
		GEODE_AS_STATIC_FUNCTION(drawLines) 
	#endif

	#ifndef GEODE_STATICS_drawPolygon
		#define GEODE_STATICS_drawPolygon
		GEODE_AS_STATIC_FUNCTION(drawPolygon) 
	#endif

	#ifndef GEODE_STATICS_drawPreciseCubicBezier
		#define GEODE_STATICS_drawPreciseCubicBezier
		GEODE_AS_STATIC_FUNCTION(drawPreciseCubicBezier) 
	#endif

	#ifndef GEODE_STATICS_drawRect
		#define GEODE_STATICS_drawRect
		GEODE_AS_STATIC_FUNCTION(drawRect) 
	#endif

	#ifndef GEODE_STATICS_drawSegment
		#define GEODE_STATICS_drawSegment
		GEODE_AS_STATIC_FUNCTION(drawSegment) 
	#endif

	#ifndef GEODE_STATICS_drawSegmentEx
		#define GEODE_STATICS_drawSegmentEx
		GEODE_AS_STATIC_FUNCTION(drawSegmentEx) 
	#endif

	#ifndef GEODE_STATICS_enableDrawArea
		#define GEODE_STATICS_enableDrawArea
		GEODE_AS_STATIC_FUNCTION(enableDrawArea) 
	#endif

	#ifndef GEODE_STATICS_ensureCapacity
		#define GEODE_STATICS_ensureCapacity
		GEODE_AS_STATIC_FUNCTION(ensureCapacity) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_is_circle_on_screen
		#define GEODE_STATICS_is_circle_on_screen
		GEODE_AS_STATIC_FUNCTION(is_circle_on_screen) 
	#endif

	#ifndef GEODE_STATICS_is_segment_on_screen
		#define GEODE_STATICS_is_segment_on_screen
		GEODE_AS_STATIC_FUNCTION(is_segment_on_screen) 
	#endif

	#ifndef GEODE_STATICS_listenBackToForeground
		#define GEODE_STATICS_listenBackToForeground
		GEODE_AS_STATIC_FUNCTION(listenBackToForeground) 
	#endif

	#ifndef GEODE_STATICS_render
		#define GEODE_STATICS_render
		GEODE_AS_STATIC_FUNCTION(render) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
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

	#ifndef GEODE_CONCEPT_CHECK_clear
		#define GEODE_CONCEPT_CHECK_clear
		GEODE_CONCEPT_FUNCTION_CHECK(clear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableDrawArea
		#define GEODE_CONCEPT_CHECK_disableDrawArea
		GEODE_CONCEPT_FUNCTION_CHECK(disableDrawArea) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawArchLikeHalfCircle
		#define GEODE_CONCEPT_CHECK_drawArchLikeHalfCircle
		GEODE_CONCEPT_FUNCTION_CHECK(drawArchLikeHalfCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawCircle
		#define GEODE_CONCEPT_CHECK_drawCircle
		GEODE_CONCEPT_FUNCTION_CHECK(drawCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawCubicBezier
		#define GEODE_CONCEPT_CHECK_drawCubicBezier
		GEODE_CONCEPT_FUNCTION_CHECK(drawCubicBezier) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawCubicBezierDashed
		#define GEODE_CONCEPT_CHECK_drawCubicBezierDashed
		GEODE_CONCEPT_FUNCTION_CHECK(drawCubicBezierDashed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawDot
		#define GEODE_CONCEPT_CHECK_drawDot
		GEODE_CONCEPT_FUNCTION_CHECK(drawDot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawLines
		#define GEODE_CONCEPT_CHECK_drawLines
		GEODE_CONCEPT_FUNCTION_CHECK(drawLines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawPolygon
		#define GEODE_CONCEPT_CHECK_drawPolygon
		GEODE_CONCEPT_FUNCTION_CHECK(drawPolygon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawPreciseCubicBezier
		#define GEODE_CONCEPT_CHECK_drawPreciseCubicBezier
		GEODE_CONCEPT_FUNCTION_CHECK(drawPreciseCubicBezier) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawRect
		#define GEODE_CONCEPT_CHECK_drawRect
		GEODE_CONCEPT_FUNCTION_CHECK(drawRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawSegment
		#define GEODE_CONCEPT_CHECK_drawSegment
		GEODE_CONCEPT_FUNCTION_CHECK(drawSegment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawSegmentEx
		#define GEODE_CONCEPT_CHECK_drawSegmentEx
		GEODE_CONCEPT_FUNCTION_CHECK(drawSegmentEx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableDrawArea
		#define GEODE_CONCEPT_CHECK_enableDrawArea
		GEODE_CONCEPT_FUNCTION_CHECK(enableDrawArea) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensureCapacity
		#define GEODE_CONCEPT_CHECK_ensureCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(ensureCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_is_circle_on_screen
		#define GEODE_CONCEPT_CHECK_is_circle_on_screen
		GEODE_CONCEPT_FUNCTION_CHECK(is_circle_on_screen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_is_segment_on_screen
		#define GEODE_CONCEPT_CHECK_is_segment_on_screen
		GEODE_CONCEPT_FUNCTION_CHECK(is_segment_on_screen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listenBackToForeground
		#define GEODE_CONCEPT_CHECK_listenBackToForeground
		GEODE_CONCEPT_FUNCTION_CHECK(listenBackToForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_render
		#define GEODE_CONCEPT_CHECK_render
		GEODE_CONCEPT_FUNCTION_CHECK(render) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDrawNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCDrawNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDrawNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDrawNode>>::ModifyBase;
		using Base = cocos2d::CCDrawNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCDrawNode@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCDrawNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCDrawNode@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCDrawNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::create)), Default, cocos2d::CCDrawNode, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDrawNode::init)), Thiscall, cocos2d::CCDrawNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCDrawNode::draw)), Thiscall, cocos2d::CCDrawNode, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::clear)), Thiscall, cocos2d::CCDrawNode, clear, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::disableDrawArea)), Thiscall, cocos2d::CCDrawNode, disableDrawArea, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, unsigned int, cocos2d::_ccColor4F const&, float>::func(&cocos2d::CCDrawNode::drawArchLikeHalfCircle)), Thiscall, cocos2d::CCDrawNode, drawArchLikeHalfCircle, cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, unsigned int, cocos2d::_ccColor4F const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, unsigned int>::func(&cocos2d::CCDrawNode::drawCircle)), Thiscall, cocos2d::CCDrawNode, drawCircle, cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::ccColor4F const&, float>::func(&cocos2d::CCDrawNode::drawCubicBezier)), Thiscall, cocos2d::CCDrawNode, drawCubicBezier, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::ccColor4F const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::ccColor4F const&, float, unsigned int, unsigned int>::func(&cocos2d::CCDrawNode::drawCubicBezierDashed)), Thiscall, cocos2d::CCDrawNode, drawCubicBezierDashed, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::ccColor4F const&, float, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&>::func(&cocos2d::CCDrawNode::drawDot)), Thiscall, cocos2d::CCDrawNode, drawDot, cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint*, unsigned int, float, cocos2d::ccColor4F const&>::func(&cocos2d::CCDrawNode::drawLines)), Thiscall, cocos2d::CCDrawNode, drawLines, cocos2d::CCPoint*, unsigned int, float, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint*, unsigned int, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, cocos2d::BorderAlignment>::func(&cocos2d::CCDrawNode::drawPolygon)), Thiscall, cocos2d::CCDrawNode, drawPolygon, cocos2d::CCPoint*, unsigned int, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, cocos2d::BorderAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::ccColor4F const&, float>::func(&cocos2d::CCDrawNode::drawPreciseCubicBezier)), Thiscall, cocos2d::CCDrawNode, drawPreciseCubicBezier, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::ccColor4F const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, cocos2d::BorderAlignment>::func(&cocos2d::CCDrawNode::drawRect)), Thiscall, cocos2d::CCDrawNode, drawRect, cocos2d::CCRect const&, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, cocos2d::BorderAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, cocos2d::BorderAlignment>::func(&cocos2d::CCDrawNode::drawRect)), Thiscall, cocos2d::CCDrawNode, drawRect, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::ccColor4F const&, float, cocos2d::ccColor4F const&, cocos2d::BorderAlignment)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&>::func(&cocos2d::CCDrawNode::drawSegment)), Thiscall, cocos2d::CCDrawNode, drawSegment, cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&, bool, bool>::func(&cocos2d::CCDrawNode::drawSegmentEx)), Thiscall, cocos2d::CCDrawNode, drawSegmentEx, cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::ccColor4F const&, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect&>::func(&cocos2d::CCDrawNode::enableDrawArea)), Thiscall, cocos2d::CCDrawNode, enableDrawArea, cocos2d::CCRect&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCDrawNode::ensureCapacity)), Thiscall, cocos2d::CCDrawNode, ensureCapacity, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::getBlendFunc)), Thiscall, cocos2d::CCDrawNode, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&, cocos2d::CCPoint const&, float>::func(&cocos2d::CCDrawNode::is_circle_on_screen)), Thiscall, cocos2d::CCDrawNode, is_circle_on_screen, cocos2d::CCRect const&, cocos2d::CCPoint const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&>::func(&cocos2d::CCDrawNode::is_segment_on_screen)), Thiscall, cocos2d::CCDrawNode, is_segment_on_screen, cocos2d::CCRect const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCDrawNode::listenBackToForeground)), Thiscall, cocos2d::CCDrawNode, listenBackToForeground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDrawNode::render)), Thiscall, cocos2d::CCDrawNode, render, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccBlendFunc const&>::func(&cocos2d::CCDrawNode::setBlendFunc)), Thiscall, cocos2d::CCDrawNode, setBlendFunc, cocos2d::ccBlendFunc const&)
		}
	};
}
