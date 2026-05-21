#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUserMessage.hpp>
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
	struct ModifyDerive<Der, GJUserMessage> : ModifyBase<ModifyDerive<Der, GJUserMessage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUserMessage>>;
		using ModifyBase<ModifyDerive<Der, GJUserMessage>>::ModifyBase;
		using Base = GJUserMessage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173ed0, Default, GJUserMessage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x173390, Default, GJUserMessage, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77de0, Thiscall, GJUserMessage, init, )
		}
	};
}
