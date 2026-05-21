#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addDelegate
		#define GEODE_STATICS_addDelegate
		GEODE_AS_STATIC_FUNCTION(addDelegate) 
	#endif

	#ifndef GEODE_STATICS_dispatchScrollMSG
		#define GEODE_STATICS_dispatchScrollMSG
		GEODE_AS_STATIC_FUNCTION(dispatchScrollMSG) 
	#endif

	#ifndef GEODE_STATICS_forceAddDelegate
		#define GEODE_STATICS_forceAddDelegate
		GEODE_AS_STATIC_FUNCTION(forceAddDelegate) 
	#endif

	#ifndef GEODE_STATICS_forceRemoveDelegate
		#define GEODE_STATICS_forceRemoveDelegate
		GEODE_AS_STATIC_FUNCTION(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_STATICS_removeDelegate
		#define GEODE_STATICS_removeDelegate
		GEODE_AS_STATIC_FUNCTION(removeDelegate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addDelegate
		#define GEODE_CONCEPT_CHECK_addDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchScrollMSG
		#define GEODE_CONCEPT_CHECK_dispatchScrollMSG
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchScrollMSG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceAddDelegate
		#define GEODE_CONCEPT_CHECK_forceAddDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(forceAddDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceRemoveDelegate
		#define GEODE_CONCEPT_CHECK_forceRemoveDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(forceRemoveDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDelegate
		#define GEODE_CONCEPT_CHECK_removeDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeDelegate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCMouseDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCMouseDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCMouseDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCMouseDispatcher>>::ModifyBase;
		using Base = cocos2d::CCMouseDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCMouseDispatcher@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCMouseDispatcher, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCMouseDispatcher@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCMouseDispatcher)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseDispatcher::addDelegate)), Thiscall, cocos2d::CCMouseDispatcher, addDelegate, cocos2d::CCMouseDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&cocos2d::CCMouseDispatcher::dispatchScrollMSG)), Thiscall, cocos2d::CCMouseDispatcher, dispatchScrollMSG, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseDispatcher::forceAddDelegate)), Thiscall, cocos2d::CCMouseDispatcher, forceAddDelegate, cocos2d::CCMouseDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseDispatcher::forceRemoveDelegate)), Thiscall, cocos2d::CCMouseDispatcher, forceRemoveDelegate, cocos2d::CCMouseDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseDispatcher::removeDelegate)), Thiscall, cocos2d::CCMouseDispatcher, removeDelegate, cocos2d::CCMouseDelegate*)
		}
	};
}
