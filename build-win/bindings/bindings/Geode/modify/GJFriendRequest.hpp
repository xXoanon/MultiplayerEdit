#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJFriendRequest.hpp>
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJFriendRequest> : ModifyBase<ModifyDerive<Der, GJFriendRequest>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJFriendRequest>>;
		using ModifyBase<ModifyDerive<Der, GJFriendRequest>>::ModifyBase;
		using Base = GJFriendRequest;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJFriendRequest, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x172c80, Default, GJFriendRequest, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77de0, Thiscall, GJFriendRequest, init, )
		}
	};
}
