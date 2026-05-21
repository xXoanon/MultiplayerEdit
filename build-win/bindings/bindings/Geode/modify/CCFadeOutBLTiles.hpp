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

	#ifndef GEODE_STATICS_testFunc
		#define GEODE_STATICS_testFunc
		GEODE_AS_STATIC_FUNCTION(testFunc) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testFunc
		#define GEODE_CONCEPT_CHECK_testFunc
		GEODE_CONCEPT_FUNCTION_CHECK(testFunc) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFadeOutBLTiles> : ModifyBase<ModifyDerive<Der, cocos2d::CCFadeOutBLTiles>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFadeOutBLTiles>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFadeOutBLTiles>>::ModifyBase;
		using Base = cocos2d::CCFadeOutBLTiles;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, cocos2d::CCSize const&>::func(&cocos2d::CCFadeOutBLTiles::create)), Default, cocos2d::CCFadeOutBLTiles, create, float, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCSize const&, float>::func(&cocos2d::CCFadeOutBLTiles::testFunc)), Thiscall, cocos2d::CCFadeOutBLTiles, testFunc, cocos2d::CCSize const&, float)
		}
	};
}
