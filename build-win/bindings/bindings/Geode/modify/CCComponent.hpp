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

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_serialize
		#define GEODE_STATICS_serialize
		GEODE_AS_STATIC_FUNCTION(serialize) 
	#endif

	#ifndef GEODE_STATICS_isEnabled
		#define GEODE_STATICS_isEnabled
		GEODE_AS_STATIC_FUNCTION(isEnabled) 
	#endif

	#ifndef GEODE_STATICS_setEnabled
		#define GEODE_STATICS_setEnabled
		GEODE_AS_STATIC_FUNCTION(setEnabled) 
	#endif

	#ifndef GEODE_STATICS_getName
		#define GEODE_STATICS_getName
		GEODE_AS_STATIC_FUNCTION(getName) 
	#endif

	#ifndef GEODE_STATICS_getOwner
		#define GEODE_STATICS_getOwner
		GEODE_AS_STATIC_FUNCTION(getOwner) 
	#endif

	#ifndef GEODE_STATICS_setName
		#define GEODE_STATICS_setName
		GEODE_AS_STATIC_FUNCTION(setName) 
	#endif

	#ifndef GEODE_STATICS_setOwner
		#define GEODE_STATICS_setOwner
		GEODE_AS_STATIC_FUNCTION(setOwner) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_serialize
		#define GEODE_CONCEPT_CHECK_serialize
		GEODE_CONCEPT_FUNCTION_CHECK(serialize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEnabled
		#define GEODE_CONCEPT_CHECK_isEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(isEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEnabled
		#define GEODE_CONCEPT_CHECK_setEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(setEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getName
		#define GEODE_CONCEPT_CHECK_getName
		GEODE_CONCEPT_FUNCTION_CHECK(getName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOwner
		#define GEODE_CONCEPT_CHECK_getOwner
		GEODE_CONCEPT_FUNCTION_CHECK(getOwner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setName
		#define GEODE_CONCEPT_CHECK_setName
		GEODE_CONCEPT_FUNCTION_CHECK(setName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOwner
		#define GEODE_CONCEPT_CHECK_setOwner
		GEODE_CONCEPT_FUNCTION_CHECK(setOwner) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCComponent> : ModifyBase<ModifyDerive<Der, cocos2d::CCComponent>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCComponent>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCComponent>>::ModifyBase;
		using Base = cocos2d::CCComponent;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCComponent@cocos2d@@IEAA@XZ")), Thiscall, cocos2d::CCComponent, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCComponent@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCComponent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCComponent::create)), Default, cocos2d::CCComponent, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCComponent::init)), Thiscall, cocos2d::CCComponent, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCComponent::onEnter)), Thiscall, cocos2d::CCComponent, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCComponent::onExit)), Thiscall, cocos2d::CCComponent, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCComponent::update)), Thiscall, cocos2d::CCComponent, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<void*>::func(&cocos2d::CCComponent::serialize)), Thiscall, cocos2d::CCComponent, serialize, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCComponent::isEnabled)), Thiscall, cocos2d::CCComponent, isEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCComponent::setEnabled)), Thiscall, cocos2d::CCComponent, setEnabled, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCComponent::getName)), Thiscall, cocos2d::CCComponent, getName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCComponent::getOwner)), Thiscall, cocos2d::CCComponent, getOwner, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCComponent::setName)), Thiscall, cocos2d::CCComponent, setName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCComponent::setOwner)), Thiscall, cocos2d::CCComponent, setOwner, cocos2d::CCNode*)
		}
	};
}
