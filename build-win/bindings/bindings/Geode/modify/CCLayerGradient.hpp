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

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_initWithColor
		#define GEODE_STATICS_initWithColor
		GEODE_AS_STATIC_FUNCTION(initWithColor) 
	#endif

	#ifndef GEODE_STATICS_getStartColor
		#define GEODE_STATICS_getStartColor
		GEODE_AS_STATIC_FUNCTION(getStartColor) 
	#endif

	#ifndef GEODE_STATICS_setStartColor
		#define GEODE_STATICS_setStartColor
		GEODE_AS_STATIC_FUNCTION(setStartColor) 
	#endif

	#ifndef GEODE_STATICS_getEndColor
		#define GEODE_STATICS_getEndColor
		GEODE_AS_STATIC_FUNCTION(getEndColor) 
	#endif

	#ifndef GEODE_STATICS_setEndColor
		#define GEODE_STATICS_setEndColor
		GEODE_AS_STATIC_FUNCTION(setEndColor) 
	#endif

	#ifndef GEODE_STATICS_getStartOpacity
		#define GEODE_STATICS_getStartOpacity
		GEODE_AS_STATIC_FUNCTION(getStartOpacity) 
	#endif

	#ifndef GEODE_STATICS_setStartOpacity
		#define GEODE_STATICS_setStartOpacity
		GEODE_AS_STATIC_FUNCTION(setStartOpacity) 
	#endif

	#ifndef GEODE_STATICS_getEndOpacity
		#define GEODE_STATICS_getEndOpacity
		GEODE_AS_STATIC_FUNCTION(getEndOpacity) 
	#endif

	#ifndef GEODE_STATICS_setEndOpacity
		#define GEODE_STATICS_setEndOpacity
		GEODE_AS_STATIC_FUNCTION(setEndOpacity) 
	#endif

	#ifndef GEODE_STATICS_getVector
		#define GEODE_STATICS_getVector
		GEODE_AS_STATIC_FUNCTION(getVector) 
	#endif

	#ifndef GEODE_STATICS_setVector
		#define GEODE_STATICS_setVector
		GEODE_AS_STATIC_FUNCTION(setVector) 
	#endif

	#ifndef GEODE_STATICS_setCompressedInterpolation
		#define GEODE_STATICS_setCompressedInterpolation
		GEODE_AS_STATIC_FUNCTION(setCompressedInterpolation) 
	#endif

	#ifndef GEODE_STATICS_isCompressedInterpolation
		#define GEODE_STATICS_isCompressedInterpolation
		GEODE_AS_STATIC_FUNCTION(isCompressedInterpolation) 
	#endif

	#ifndef GEODE_STATICS_setValues
		#define GEODE_STATICS_setValues
		GEODE_AS_STATIC_FUNCTION(setValues) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithColor
		#define GEODE_CONCEPT_CHECK_initWithColor
		GEODE_CONCEPT_FUNCTION_CHECK(initWithColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartColor
		#define GEODE_CONCEPT_CHECK_getStartColor
		GEODE_CONCEPT_FUNCTION_CHECK(getStartColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartColor
		#define GEODE_CONCEPT_CHECK_setStartColor
		GEODE_CONCEPT_FUNCTION_CHECK(setStartColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndColor
		#define GEODE_CONCEPT_CHECK_getEndColor
		GEODE_CONCEPT_FUNCTION_CHECK(getEndColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndColor
		#define GEODE_CONCEPT_CHECK_setEndColor
		GEODE_CONCEPT_FUNCTION_CHECK(setEndColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartOpacity
		#define GEODE_CONCEPT_CHECK_getStartOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getStartOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartOpacity
		#define GEODE_CONCEPT_CHECK_setStartOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setStartOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndOpacity
		#define GEODE_CONCEPT_CHECK_getEndOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getEndOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndOpacity
		#define GEODE_CONCEPT_CHECK_setEndOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setEndOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVector
		#define GEODE_CONCEPT_CHECK_getVector
		GEODE_CONCEPT_FUNCTION_CHECK(getVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVector
		#define GEODE_CONCEPT_CHECK_setVector
		GEODE_CONCEPT_FUNCTION_CHECK(setVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCompressedInterpolation
		#define GEODE_CONCEPT_CHECK_setCompressedInterpolation
		GEODE_CONCEPT_FUNCTION_CHECK(setCompressedInterpolation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCompressedInterpolation
		#define GEODE_CONCEPT_CHECK_isCompressedInterpolation
		GEODE_CONCEPT_FUNCTION_CHECK(isCompressedInterpolation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValues
		#define GEODE_CONCEPT_CHECK_setValues
		GEODE_CONCEPT_FUNCTION_CHECK(setValues) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayerGradient> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayerGradient>>::ModifyBase;
		using Base = cocos2d::CCLayerGradient;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::create)), Default, cocos2d::CCLayerGradient, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor4B const&, cocos2d::ccColor4B const&>::func(&cocos2d::CCLayerGradient::create)), Default, cocos2d::CCLayerGradient, create, cocos2d::ccColor4B const&, cocos2d::ccColor4B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor4B const&, cocos2d::ccColor4B const&, cocos2d::CCPoint const&>::func(&cocos2d::CCLayerGradient::create)), Default, cocos2d::CCLayerGradient, create, cocos2d::ccColor4B const&, cocos2d::ccColor4B const&, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::init)), Thiscall, cocos2d::CCLayerGradient, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::visit)), Thiscall, cocos2d::CCLayerGradient, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::updateColor)), Thiscall, cocos2d::CCLayerGradient, updateColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor4B const&, cocos2d::ccColor4B const&>::func(&cocos2d::CCLayerGradient::initWithColor)), Thiscall, cocos2d::CCLayerGradient, initWithColor, cocos2d::ccColor4B const&, cocos2d::ccColor4B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor4B const&, cocos2d::ccColor4B const&, cocos2d::CCPoint const&>::func(&cocos2d::CCLayerGradient::initWithColor)), Thiscall, cocos2d::CCLayerGradient, initWithColor, cocos2d::ccColor4B const&, cocos2d::ccColor4B const&, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::getStartColor)), Thiscall, cocos2d::CCLayerGradient, getStartColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCLayerGradient::setStartColor)), Thiscall, cocos2d::CCLayerGradient, setStartColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::getEndColor)), Thiscall, cocos2d::CCLayerGradient, getEndColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCLayerGradient::setEndColor)), Thiscall, cocos2d::CCLayerGradient, setEndColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::getStartOpacity)), Thiscall, cocos2d::CCLayerGradient, getStartOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCLayerGradient::setStartOpacity)), Thiscall, cocos2d::CCLayerGradient, setStartOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::getEndOpacity)), Thiscall, cocos2d::CCLayerGradient, getEndOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCLayerGradient::setEndOpacity)), Thiscall, cocos2d::CCLayerGradient, setEndOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::getVector)), Thiscall, cocos2d::CCLayerGradient, getVector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCLayerGradient::setVector)), Thiscall, cocos2d::CCLayerGradient, setVector, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayerGradient::setCompressedInterpolation)), Thiscall, cocos2d::CCLayerGradient, setCompressedInterpolation, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerGradient::isCompressedInterpolation)), Thiscall, cocos2d::CCLayerGradient, isCompressedInterpolation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B const&, unsigned char, cocos2d::ccColor3B const&, unsigned char, cocos2d::CCPoint const&>::func(&cocos2d::CCLayerGradient::setValues)), Thiscall, cocos2d::CCLayerGradient, setValues, cocos2d::ccColor3B const&, unsigned char, cocos2d::ccColor3B const&, unsigned char, cocos2d::CCPoint const&)
		}
	};
}
