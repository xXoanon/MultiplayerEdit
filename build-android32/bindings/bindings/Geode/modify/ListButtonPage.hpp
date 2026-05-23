#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListButtonPage.hpp>
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
	struct ModifyDerive<Der, ListButtonPage> : ModifyBase<ModifyDerive<Der, ListButtonPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListButtonPage>>;
		using ModifyBase<ModifyDerive<Der, ListButtonPage>>::ModifyBase;
		using Base = ListButtonPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float>::func(&ListButtonPage::create)), Default, ListButtonPage, create, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float>::func(&ListButtonPage::init)), Default, ListButtonPage, init, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float)
		}
	};
}
