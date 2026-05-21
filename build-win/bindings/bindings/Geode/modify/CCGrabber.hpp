#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_afterRender
		#define GEODE_STATICS_afterRender
		GEODE_AS_STATIC_FUNCTION(afterRender) 
	#endif

	#ifndef GEODE_STATICS_beforeRender
		#define GEODE_STATICS_beforeRender
		GEODE_AS_STATIC_FUNCTION(beforeRender) 
	#endif

	#ifndef GEODE_STATICS_grab
		#define GEODE_STATICS_grab
		GEODE_AS_STATIC_FUNCTION(grab) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_afterRender
		#define GEODE_CONCEPT_CHECK_afterRender
		GEODE_CONCEPT_FUNCTION_CHECK(afterRender) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beforeRender
		#define GEODE_CONCEPT_CHECK_beforeRender
		GEODE_CONCEPT_FUNCTION_CHECK(beforeRender) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_grab
		#define GEODE_CONCEPT_CHECK_grab
		GEODE_CONCEPT_FUNCTION_CHECK(grab) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCGrabber> : ModifyBase<ModifyDerive<Der, cocos2d::CCGrabber>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCGrabber>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCGrabber>>::ModifyBase;
		using Base = cocos2d::CCGrabber;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCGrabber@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCGrabber, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCGrabber@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCGrabber)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCGrabber::afterRender)), Thiscall, cocos2d::CCGrabber, afterRender, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCGrabber::beforeRender)), Thiscall, cocos2d::CCGrabber, beforeRender, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCGrabber::grab)), Thiscall, cocos2d::CCGrabber, grab, cocos2d::CCTexture2D*)
		}
	};
}
