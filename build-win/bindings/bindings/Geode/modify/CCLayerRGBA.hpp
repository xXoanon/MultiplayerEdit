#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_getColor
		#define GEODE_STATICS_getColor
		GEODE_AS_STATIC_FUNCTION(getColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedColor
		#define GEODE_STATICS_getDisplayedColor
		GEODE_AS_STATIC_FUNCTION(getDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_getDisplayedOpacity
		#define GEODE_STATICS_getDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_STATICS_getOpacity
		#define GEODE_STATICS_getOpacity
		GEODE_AS_STATIC_FUNCTION(getOpacity) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_isCascadeColorEnabled
		#define GEODE_STATICS_isCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeColorEnabled
		#define GEODE_STATICS_setCascadeColorEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedColor
		#define GEODE_STATICS_updateDisplayedColor
		GEODE_AS_STATIC_FUNCTION(updateDisplayedColor) 
	#endif

	#ifndef GEODE_STATICS_isCascadeOpacityEnabled
		#define GEODE_STATICS_isCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_setCascadeOpacityEnabled
		#define GEODE_STATICS_setCascadeOpacityEnabled
		GEODE_AS_STATIC_FUNCTION(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_STATICS_updateDisplayedOpacity
		#define GEODE_STATICS_updateDisplayedOpacity
		GEODE_AS_STATIC_FUNCTION(updateDisplayedOpacity) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColor
		#define GEODE_CONCEPT_CHECK_getColor
		GEODE_CONCEPT_FUNCTION_CHECK(getColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisplayedColor
		#define GEODE_CONCEPT_CHECK_getDisplayedColor
		GEODE_CONCEPT_FUNCTION_CHECK(getDisplayedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_getDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getDisplayedOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacity
		#define GEODE_CONCEPT_CHECK_getOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCascadeColorEnabled
		#define GEODE_CONCEPT_CHECK_isCascadeColorEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isCascadeColorEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCascadeColorEnabled
		#define GEODE_CONCEPT_CHECK_setCascadeColorEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setCascadeColorEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedColor
		#define GEODE_CONCEPT_CHECK_updateDisplayedColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCascadeOpacityEnabled
		#define GEODE_CONCEPT_CHECK_isCascadeOpacityEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCascadeOpacityEnabled
		#define GEODE_CONCEPT_CHECK_setCascadeOpacityEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setCascadeOpacityEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		#define GEODE_CONCEPT_CHECK_updateDisplayedOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayedOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCLayerRGBA> : ModifyBase<ModifyDerive<Der, cocos2d::CCLayerRGBA>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCLayerRGBA>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCLayerRGBA>>::ModifyBase;
		using Base = cocos2d::CCLayerRGBA;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCLayerRGBA@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCLayerRGBA, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCLayerRGBA@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCLayerRGBA)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerRGBA::init)), Thiscall, cocos2d::CCLayerRGBA, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCLayerRGBA::setColor)), Thiscall, cocos2d::CCLayerRGBA, setColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerRGBA::getColor)), Thiscall, cocos2d::CCLayerRGBA, getColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerRGBA::getDisplayedColor)), Thiscall, cocos2d::CCLayerRGBA, getDisplayedColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerRGBA::getDisplayedOpacity)), Thiscall, cocos2d::CCLayerRGBA, getDisplayedOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerRGBA::getOpacity)), Thiscall, cocos2d::CCLayerRGBA, getOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCLayerRGBA::setOpacity)), Thiscall, cocos2d::CCLayerRGBA, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerRGBA::isCascadeColorEnabled)), Thiscall, cocos2d::CCLayerRGBA, isCascadeColorEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayerRGBA::setCascadeColorEnabled)), Thiscall, cocos2d::CCLayerRGBA, setCascadeColorEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCLayerRGBA::updateDisplayedColor)), Thiscall, cocos2d::CCLayerRGBA, updateDisplayedColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCLayerRGBA::isCascadeOpacityEnabled)), Thiscall, cocos2d::CCLayerRGBA, isCascadeOpacityEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCLayerRGBA::setCascadeOpacityEnabled)), Thiscall, cocos2d::CCLayerRGBA, setCascadeOpacityEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&cocos2d::CCLayerRGBA::updateDisplayedOpacity)), Thiscall, cocos2d::CCLayerRGBA, updateDisplayedOpacity, unsigned char)
		}
	};
}
