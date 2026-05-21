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

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_isOpacityModifyRGB
		#define GEODE_STATICS_isOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_enableRepeatMode
		#define GEODE_STATICS_enableRepeatMode
		GEODE_AS_STATIC_FUNCTION(enableRepeatMode) 
	#endif

	#ifndef GEODE_STATICS_initWithFade
		#define GEODE_STATICS_initWithFade
		GEODE_AS_STATIC_FUNCTION(initWithFade) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resumeStroke
		#define GEODE_STATICS_resumeStroke
		GEODE_AS_STATIC_FUNCTION(resumeStroke) 
	#endif

	#ifndef GEODE_STATICS_setStroke
		#define GEODE_STATICS_setStroke
		GEODE_AS_STATIC_FUNCTION(setStroke) 
	#endif

	#ifndef GEODE_STATICS_stopStroke
		#define GEODE_STATICS_stopStroke
		GEODE_AS_STATIC_FUNCTION(stopStroke) 
	#endif

	#ifndef GEODE_STATICS_tintWithColor
		#define GEODE_STATICS_tintWithColor
		GEODE_AS_STATIC_FUNCTION(tintWithColor) 
	#endif

	#ifndef GEODE_STATICS_updateFade
		#define GEODE_STATICS_updateFade
		GEODE_AS_STATIC_FUNCTION(updateFade) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_isOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(isOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableRepeatMode
		#define GEODE_CONCEPT_CHECK_enableRepeatMode
		GEODE_CONCEPT_FUNCTION_CHECK(enableRepeatMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFade
		#define GEODE_CONCEPT_CHECK_initWithFade
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeStroke
		#define GEODE_CONCEPT_CHECK_resumeStroke
		GEODE_CONCEPT_FUNCTION_CHECK(resumeStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStroke
		#define GEODE_CONCEPT_CHECK_setStroke
		GEODE_CONCEPT_FUNCTION_CHECK(setStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopStroke
		#define GEODE_CONCEPT_CHECK_stopStroke
		GEODE_CONCEPT_FUNCTION_CHECK(stopStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tintWithColor
		#define GEODE_CONCEPT_CHECK_tintWithColor
		GEODE_CONCEPT_FUNCTION_CHECK(tintWithColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFade
		#define GEODE_CONCEPT_CHECK_updateFade
		GEODE_CONCEPT_FUNCTION_CHECK(updateFade) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMotionStreak> : ModifyBase<ModifyDerive<Der, cocos2d::CCMotionStreak>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMotionStreak>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMotionStreak>>::ModifyBase;
		using Base = cocos2d::CCMotionStreak;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCMotionStreak@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCMotionStreak, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCMotionStreak@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCMotionStreak)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, cocos2d::ccColor3B const&, char const*>::func(&cocos2d::CCMotionStreak::create)), Default, cocos2d::CCMotionStreak, create, float, float, float, cocos2d::ccColor3B const&, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, cocos2d::ccColor3B const&, cocos2d::CCTexture2D*>::func(&cocos2d::CCMotionStreak::create)), Default, cocos2d::CCMotionStreak, create, float, float, float, cocos2d::ccColor3B const&, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCMotionStreak::update)), Thiscall, cocos2d::CCMotionStreak, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCMotionStreak::setPosition)), Thiscall, cocos2d::CCMotionStreak, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::draw)), Thiscall, cocos2d::CCMotionStreak, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::getOpacity)), Thiscall, cocos2d::CCMotionStreak, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCMotionStreak::setOpacity)), Thiscall, cocos2d::CCMotionStreak, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCMotionStreak::setOpacityModifyRGB)), Thiscall, cocos2d::CCMotionStreak, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::isOpacityModifyRGB)), Thiscall, cocos2d::CCMotionStreak, isOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccBlendFunc>::func(&cocos2d::CCMotionStreak::setBlendFunc)), Thiscall, cocos2d::CCMotionStreak, setBlendFunc, cocos2d::ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::getBlendFunc)), Thiscall, cocos2d::CCMotionStreak, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::getTexture)), Thiscall, cocos2d::CCMotionStreak, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCMotionStreak::setTexture)), Thiscall, cocos2d::CCMotionStreak, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCMotionStreak::enableRepeatMode)), Thiscall, cocos2d::CCMotionStreak, enableRepeatMode, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, cocos2d::ccColor3B const&, char const*>::func(&cocos2d::CCMotionStreak::initWithFade)), Thiscall, cocos2d::CCMotionStreak, initWithFade, float, float, float, cocos2d::ccColor3B const&, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float, cocos2d::ccColor3B const&, cocos2d::CCTexture2D*>::func(&cocos2d::CCMotionStreak::initWithFade)), Thiscall, cocos2d::CCMotionStreak, initWithFade, float, float, float, cocos2d::ccColor3B const&, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::reset)), Thiscall, cocos2d::CCMotionStreak, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::resumeStroke)), Thiscall, cocos2d::CCMotionStreak, resumeStroke, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCMotionStreak::setStroke)), Thiscall, cocos2d::CCMotionStreak, setStroke, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCMotionStreak::stopStroke)), Thiscall, cocos2d::CCMotionStreak, stopStroke, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&cocos2d::CCMotionStreak::tintWithColor)), Thiscall, cocos2d::CCMotionStreak, tintWithColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCMotionStreak::updateFade)), Thiscall, cocos2d::CCMotionStreak, updateFade, float)
		}
	};
}
