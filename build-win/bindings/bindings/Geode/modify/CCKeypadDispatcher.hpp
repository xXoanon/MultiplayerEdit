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

	#ifndef GEODE_STATICS_dispatchKeypadMSG
		#define GEODE_STATICS_dispatchKeypadMSG
		GEODE_AS_STATIC_FUNCTION(dispatchKeypadMSG) 
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

	#ifndef GEODE_CONCEPT_CHECK_dispatchKeypadMSG
		#define GEODE_CONCEPT_CHECK_dispatchKeypadMSG
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchKeypadMSG) 
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
	struct ModifyDerive<Der, cocos2d::CCKeypadDispatcher> : ModifyBase<ModifyDerive<Der, cocos2d::CCKeypadDispatcher>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCKeypadDispatcher>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCKeypadDispatcher>>::ModifyBase;
		using Base = cocos2d::CCKeypadDispatcher;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCKeypadDispatcher@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCKeypadDispatcher, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCKeypadDispatcher@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCKeypadDispatcher)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeypadDelegate*>::func(&cocos2d::CCKeypadDispatcher::addDelegate)), Thiscall, cocos2d::CCKeypadDispatcher, addDelegate, cocos2d::CCKeypadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccKeypadMSGType>::func(&cocos2d::CCKeypadDispatcher::dispatchKeypadMSG)), Thiscall, cocos2d::CCKeypadDispatcher, dispatchKeypadMSG, cocos2d::ccKeypadMSGType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeypadDelegate*>::func(&cocos2d::CCKeypadDispatcher::forceAddDelegate)), Thiscall, cocos2d::CCKeypadDispatcher, forceAddDelegate, cocos2d::CCKeypadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeypadDelegate*>::func(&cocos2d::CCKeypadDispatcher::forceRemoveDelegate)), Thiscall, cocos2d::CCKeypadDispatcher, forceRemoveDelegate, cocos2d::CCKeypadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCKeypadDelegate*>::func(&cocos2d::CCKeypadDispatcher::removeDelegate)), Thiscall, cocos2d::CCKeypadDispatcher, removeDelegate, cocos2d::CCKeypadDelegate*)
		}
	};
}
