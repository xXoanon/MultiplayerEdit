#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListButtonBar.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onLeft
		#define GEODE_STATICS_onLeft
		GEODE_AS_STATIC_FUNCTION(onLeft) 
	#endif

	#ifndef GEODE_STATICS_onRight
		#define GEODE_STATICS_onRight
		GEODE_AS_STATIC_FUNCTION(onRight) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLeft
		#define GEODE_CONCEPT_CHECK_onLeft
		GEODE_CONCEPT_FUNCTION_CHECK(onLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRight
		#define GEODE_CONCEPT_CHECK_onRight
		GEODE_CONCEPT_FUNCTION_CHECK(onRight) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ListButtonBar> : ModifyBase<ModifyDerive<Der, ListButtonBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListButtonBar>>;
		using ModifyBase<ModifyDerive<Der, ListButtonBar>>::ModifyBase;
		using Base = ListButtonBar;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int>::func(&ListButtonBar::create)), Default, ListButtonBar, create, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ListButtonBar::getPage)), Default, ListButtonBar, getPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&ListButtonBar::goToPage)), Default, ListButtonBar, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int>::func(&ListButtonBar::init)), Default, ListButtonBar, init, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ListButtonBar::onLeft)), Default, ListButtonBar, onLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ListButtonBar::onRight)), Default, ListButtonBar, onRight, cocos2d::CCObject*)
		}
	};
}
