#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_get
		#define GEODE_STATICS_get
		GEODE_AS_STATIC_FUNCTION(get) 
	#endif

	#ifndef GEODE_STATICS_add
		#define GEODE_STATICS_add
		GEODE_AS_STATIC_FUNCTION(add) 
	#endif

	#ifndef GEODE_STATICS_remove
		#define GEODE_STATICS_remove
		GEODE_AS_STATIC_FUNCTION(remove) 
	#endif

	#ifndef GEODE_STATICS_removeAll
		#define GEODE_STATICS_removeAll
		GEODE_AS_STATIC_FUNCTION(removeAll) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_alloc
		#define GEODE_STATICS_alloc
		GEODE_AS_STATIC_FUNCTION(alloc) 
	#endif

	#ifndef GEODE_STATICS_isEmpty
		#define GEODE_STATICS_isEmpty
		GEODE_AS_STATIC_FUNCTION(isEmpty) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_add
		#define GEODE_CONCEPT_CHECK_add
		GEODE_CONCEPT_FUNCTION_CHECK(add) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_remove
		#define GEODE_CONCEPT_CHECK_remove
		GEODE_CONCEPT_FUNCTION_CHECK(remove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAll
		#define GEODE_CONCEPT_CHECK_removeAll
		GEODE_CONCEPT_FUNCTION_CHECK(removeAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_alloc
		#define GEODE_CONCEPT_CHECK_alloc
		GEODE_CONCEPT_FUNCTION_CHECK(alloc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEmpty
		#define GEODE_CONCEPT_CHECK_isEmpty
		GEODE_CONCEPT_FUNCTION_CHECK(isEmpty) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCComponentContainer> : ModifyBase<ModifyDerive<Der, cocos2d::CCComponentContainer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCComponentContainer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCComponentContainer>>::ModifyBase;
		using Base = cocos2d::CCComponentContainer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCComponentContainer@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCComponentContainer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCComponentContainer::get)), Thiscall, cocos2d::CCComponentContainer, get, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCComponent*>::func(&cocos2d::CCComponentContainer::add)), Thiscall, cocos2d::CCComponentContainer, add, cocos2d::CCComponent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCComponentContainer::remove)), Thiscall, cocos2d::CCComponentContainer, remove, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCComponent*>::func(&cocos2d::CCComponentContainer::remove)), Thiscall, cocos2d::CCComponentContainer, remove, cocos2d::CCComponent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCComponentContainer::removeAll)), Thiscall, cocos2d::CCComponentContainer, removeAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCComponentContainer::visit)), Thiscall, cocos2d::CCComponentContainer, visit, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCComponentContainer::alloc)), Thiscall, cocos2d::CCComponentContainer, alloc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCComponentContainer::isEmpty)), Thiscall, cocos2d::CCComponentContainer, isEmpty, )
		}
	};
}
