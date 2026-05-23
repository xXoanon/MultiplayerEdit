#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addSpriteToTargetWithPosAndAnchor
		#define GEODE_STATICS_addSpriteToTargetWithPosAndAnchor
		GEODE_AS_STATIC_FUNCTION(addSpriteToTargetWithPosAndAnchor) 
	#endif

	#ifndef GEODE_STATICS_CCRectUnion
		#define GEODE_STATICS_CCRectUnion
		GEODE_AS_STATIC_FUNCTION(CCRectUnion) 
	#endif

	#ifndef GEODE_STATICS_HSVfromRGB
		#define GEODE_STATICS_HSVfromRGB
		GEODE_AS_STATIC_FUNCTION(HSVfromRGB) 
	#endif

	#ifndef GEODE_STATICS_RGBfromHSV
		#define GEODE_STATICS_RGBfromHSV
		GEODE_AS_STATIC_FUNCTION(RGBfromHSV) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addSpriteToTargetWithPosAndAnchor
		#define GEODE_CONCEPT_CHECK_addSpriteToTargetWithPosAndAnchor
		GEODE_CONCEPT_FUNCTION_CHECK(addSpriteToTargetWithPosAndAnchor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_CCRectUnion
		#define GEODE_CONCEPT_CHECK_CCRectUnion
		GEODE_CONCEPT_FUNCTION_CHECK(CCRectUnion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_HSVfromRGB
		#define GEODE_CONCEPT_CHECK_HSVfromRGB
		GEODE_CONCEPT_FUNCTION_CHECK(HSVfromRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_RGBfromHSV
		#define GEODE_CONCEPT_CHECK_RGBfromHSV
		GEODE_CONCEPT_FUNCTION_CHECK(RGBfromHSV) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCControlUtils> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlUtils>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlUtils>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCControlUtils>>::ModifyBase;
		using Base = cocos2d::extension::CCControlUtils;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, cocos2d::CCNode*, cocos2d::CCPoint, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlUtils::addSpriteToTargetWithPosAndAnchor)), Default, cocos2d::extension::CCControlUtils, addSpriteToTargetWithPosAndAnchor, char const*, cocos2d::CCNode*, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&, cocos2d::CCRect const&>::func(&cocos2d::extension::CCControlUtils::CCRectUnion)), Default, cocos2d::extension::CCControlUtils, CCRectUnion, cocos2d::CCRect const&, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::RGBA>::func(&cocos2d::extension::CCControlUtils::HSVfromRGB)), Default, cocos2d::extension::CCControlUtils, HSVfromRGB, cocos2d::extension::RGBA)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::HSV>::func(&cocos2d::extension::CCControlUtils::RGBfromHSV)), Default, cocos2d::extension::CCControlUtils, RGBfromHSV, cocos2d::extension::HSV)
		}
	};
}
