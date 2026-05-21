#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getZEye
		#define GEODE_STATICS_getZEye
		GEODE_AS_STATIC_FUNCTION(getZEye) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_getCenterXYZ
		#define GEODE_STATICS_getCenterXYZ
		GEODE_AS_STATIC_FUNCTION(getCenterXYZ) 
	#endif

	#ifndef GEODE_STATICS_getEyeXYZ
		#define GEODE_STATICS_getEyeXYZ
		GEODE_AS_STATIC_FUNCTION(getEyeXYZ) 
	#endif

	#ifndef GEODE_STATICS_getUpXYZ
		#define GEODE_STATICS_getUpXYZ
		GEODE_AS_STATIC_FUNCTION(getUpXYZ) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_locate
		#define GEODE_STATICS_locate
		GEODE_AS_STATIC_FUNCTION(locate) 
	#endif

	#ifndef GEODE_STATICS_restore
		#define GEODE_STATICS_restore
		GEODE_AS_STATIC_FUNCTION(restore) 
	#endif

	#ifndef GEODE_STATICS_setCenterXYZ
		#define GEODE_STATICS_setCenterXYZ
		GEODE_AS_STATIC_FUNCTION(setCenterXYZ) 
	#endif

	#ifndef GEODE_STATICS_setEyeXYZ
		#define GEODE_STATICS_setEyeXYZ
		GEODE_AS_STATIC_FUNCTION(setEyeXYZ) 
	#endif

	#ifndef GEODE_STATICS_setUpXYZ
		#define GEODE_STATICS_setUpXYZ
		GEODE_AS_STATIC_FUNCTION(setUpXYZ) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getZEye
		#define GEODE_CONCEPT_CHECK_getZEye
		GEODE_CONCEPT_FUNCTION_CHECK(getZEye) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCenterXYZ
		#define GEODE_CONCEPT_CHECK_getCenterXYZ
		GEODE_CONCEPT_FUNCTION_CHECK(getCenterXYZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEyeXYZ
		#define GEODE_CONCEPT_CHECK_getEyeXYZ
		GEODE_CONCEPT_FUNCTION_CHECK(getEyeXYZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUpXYZ
		#define GEODE_CONCEPT_CHECK_getUpXYZ
		GEODE_CONCEPT_FUNCTION_CHECK(getUpXYZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_locate
		#define GEODE_CONCEPT_CHECK_locate
		GEODE_CONCEPT_FUNCTION_CHECK(locate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restore
		#define GEODE_CONCEPT_CHECK_restore
		GEODE_CONCEPT_FUNCTION_CHECK(restore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCenterXYZ
		#define GEODE_CONCEPT_CHECK_setCenterXYZ
		GEODE_CONCEPT_FUNCTION_CHECK(setCenterXYZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEyeXYZ
		#define GEODE_CONCEPT_CHECK_setEyeXYZ
		GEODE_CONCEPT_FUNCTION_CHECK(setEyeXYZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUpXYZ
		#define GEODE_CONCEPT_CHECK_setUpXYZ
		GEODE_CONCEPT_FUNCTION_CHECK(setUpXYZ) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCCamera> : ModifyBase<ModifyDerive<Der, cocos2d::CCCamera>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCCamera>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCCamera>>::ModifyBase;
		using Base = cocos2d::CCCamera;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCCamera@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCCamera, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCCamera@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCCamera)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCCamera::getZEye)), Default, cocos2d::CCCamera, getZEye, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCCamera::description)), Thiscall, cocos2d::CCCamera, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&cocos2d::CCCamera::getCenterXYZ)), Thiscall, cocos2d::CCCamera, getCenterXYZ, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&cocos2d::CCCamera::getEyeXYZ)), Thiscall, cocos2d::CCCamera, getEyeXYZ, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float*, float*, float*>::func(&cocos2d::CCCamera::getUpXYZ)), Thiscall, cocos2d::CCCamera, getUpXYZ, float*, float*, float*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCCamera::init)), Thiscall, cocos2d::CCCamera, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCCamera::locate)), Thiscall, cocos2d::CCCamera, locate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCCamera::restore)), Thiscall, cocos2d::CCCamera, restore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&cocos2d::CCCamera::setCenterXYZ)), Thiscall, cocos2d::CCCamera, setCenterXYZ, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&cocos2d::CCCamera::setEyeXYZ)), Thiscall, cocos2d::CCCamera, setEyeXYZ, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, float>::func(&cocos2d::CCCamera::setUpXYZ)), Thiscall, cocos2d::CCCamera, setUpXYZ, float, float, float)
		}
	};
}
