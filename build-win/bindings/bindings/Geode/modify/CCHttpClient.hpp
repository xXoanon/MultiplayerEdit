#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_destroyInstance
		#define GEODE_STATICS_destroyInstance
		GEODE_AS_STATIC_FUNCTION(destroyInstance) 
	#endif

	#ifndef GEODE_STATICS_getInstance
		#define GEODE_STATICS_getInstance
		GEODE_AS_STATIC_FUNCTION(getInstance) 
	#endif

	#ifndef GEODE_STATICS_availableThreadCount
		#define GEODE_STATICS_availableThreadCount
		GEODE_AS_STATIC_FUNCTION(availableThreadCount) 
	#endif

	#ifndef GEODE_STATICS_dispatchResponseCallbacks
		#define GEODE_STATICS_dispatchResponseCallbacks
		GEODE_AS_STATIC_FUNCTION(dispatchResponseCallbacks) 
	#endif

	#ifndef GEODE_STATICS_send
		#define GEODE_STATICS_send
		GEODE_AS_STATIC_FUNCTION(send) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_destroyInstance
		#define GEODE_CONCEPT_CHECK_destroyInstance
		GEODE_CONCEPT_FUNCTION_CHECK(destroyInstance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInstance
		#define GEODE_CONCEPT_CHECK_getInstance
		GEODE_CONCEPT_FUNCTION_CHECK(getInstance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_availableThreadCount
		#define GEODE_CONCEPT_CHECK_availableThreadCount
		GEODE_CONCEPT_FUNCTION_CHECK(availableThreadCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dispatchResponseCallbacks
		#define GEODE_CONCEPT_CHECK_dispatchResponseCallbacks
		GEODE_CONCEPT_FUNCTION_CHECK(dispatchResponseCallbacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_send
		#define GEODE_CONCEPT_CHECK_send
		GEODE_CONCEPT_FUNCTION_CHECK(send) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCHttpClient> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCHttpClient>>::ModifyBase;
		using Base = cocos2d::extension::CCHttpClient;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??0CCHttpClient@extension@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::extension::CCHttpClient, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getExtensions(), "??1CCHttpClient@extension@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::extension::CCHttpClient)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCHttpClient::destroyInstance)), Default, cocos2d::extension::CCHttpClient, destroyInstance, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCHttpClient::getInstance)), Default, cocos2d::extension::CCHttpClient, getInstance, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCHttpClient::availableThreadCount)), Thiscall, cocos2d::extension::CCHttpClient, availableThreadCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::extension::CCHttpClient::dispatchResponseCallbacks)), Thiscall, cocos2d::extension::CCHttpClient, dispatchResponseCallbacks, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCHttpRequest*>::func(&cocos2d::extension::CCHttpClient::send)), Thiscall, cocos2d::extension::CCHttpClient, send, cocos2d::extension::CCHttpRequest*)
		}
	};
}
