#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setAnimationInterval
		#define GEODE_STATICS_setAnimationInterval
		GEODE_AS_STATIC_FUNCTION(setAnimationInterval) 
	#endif

	#ifndef GEODE_STATICS_stopAnimation
		#define GEODE_STATICS_stopAnimation
		GEODE_AS_STATIC_FUNCTION(stopAnimation) 
	#endif

	#ifndef GEODE_STATICS_startAnimation
		#define GEODE_STATICS_startAnimation
		GEODE_AS_STATIC_FUNCTION(startAnimation) 
	#endif

	#ifndef GEODE_STATICS_mainLoop
		#define GEODE_STATICS_mainLoop
		GEODE_AS_STATIC_FUNCTION(mainLoop) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_setAnimationInterval
		#define GEODE_CONCEPT_CHECK_setAnimationInterval
		GEODE_CONCEPT_FUNCTION_CHECK(setAnimationInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAnimation
		#define GEODE_CONCEPT_CHECK_stopAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(stopAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startAnimation
		#define GEODE_CONCEPT_CHECK_startAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(startAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mainLoop
		#define GEODE_CONCEPT_CHECK_mainLoop
		GEODE_CONCEPT_FUNCTION_CHECK(mainLoop) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDisplayLinkDirector> : ModifyBase<ModifyDerive<Der, cocos2d::CCDisplayLinkDirector>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDisplayLinkDirector>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDisplayLinkDirector>>::ModifyBase;
		using Base = cocos2d::CCDisplayLinkDirector;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::getCocos() + 0xbf3f0, Thiscall, cocos2d::CCDisplayLinkDirector, setAnimationInterval, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::getCocos() + 0xbff30, Thiscall, cocos2d::CCDisplayLinkDirector, stopAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::getCocos() + 0xbfef0, Thiscall, cocos2d::CCDisplayLinkDirector, startAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::getCocos() + 0xbeae0, Thiscall, cocos2d::CCDisplayLinkDirector, mainLoop, )
		}
	};
}
