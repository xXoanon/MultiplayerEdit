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

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_onExitTransitionDidStart
		#define GEODE_STATICS_onExitTransitionDidStart
		GEODE_AS_STATIC_FUNCTION(onExitTransitionDidStart) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_getAlphaThreshold
		#define GEODE_STATICS_getAlphaThreshold
		GEODE_AS_STATIC_FUNCTION(getAlphaThreshold) 
	#endif

	#ifndef GEODE_STATICS_getStencil
		#define GEODE_STATICS_getStencil
		GEODE_AS_STATIC_FUNCTION(getStencil) 
	#endif

	#ifndef GEODE_STATICS_isInverted
		#define GEODE_STATICS_isInverted
		GEODE_AS_STATIC_FUNCTION(isInverted) 
	#endif

	#ifndef GEODE_STATICS_setAlphaThreshold
		#define GEODE_STATICS_setAlphaThreshold
		GEODE_AS_STATIC_FUNCTION(setAlphaThreshold) 
	#endif

	#ifndef GEODE_STATICS_setInverted
		#define GEODE_STATICS_setInverted
		GEODE_AS_STATIC_FUNCTION(setInverted) 
	#endif

	#ifndef GEODE_STATICS_setStencil
		#define GEODE_STATICS_setStencil
		GEODE_AS_STATIC_FUNCTION(setStencil) 
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

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitTransitionDidStart
		#define GEODE_CONCEPT_CHECK_onExitTransitionDidStart
		GEODE_CONCEPT_FUNCTION_CHECK(onExitTransitionDidStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAlphaThreshold
		#define GEODE_CONCEPT_CHECK_getAlphaThreshold
		GEODE_CONCEPT_FUNCTION_CHECK(getAlphaThreshold) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStencil
		#define GEODE_CONCEPT_CHECK_getStencil
		GEODE_CONCEPT_FUNCTION_CHECK(getStencil) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isInverted
		#define GEODE_CONCEPT_CHECK_isInverted
		GEODE_CONCEPT_FUNCTION_CHECK(isInverted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAlphaThreshold
		#define GEODE_CONCEPT_CHECK_setAlphaThreshold
		GEODE_CONCEPT_FUNCTION_CHECK(setAlphaThreshold) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInverted
		#define GEODE_CONCEPT_CHECK_setInverted
		GEODE_CONCEPT_FUNCTION_CHECK(setInverted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStencil
		#define GEODE_CONCEPT_CHECK_setStencil
		GEODE_CONCEPT_FUNCTION_CHECK(setStencil) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCClippingNode> : ModifyBase<ModifyDerive<Der, cocos2d::CCClippingNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCClippingNode>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCClippingNode>>::ModifyBase;
		using Base = cocos2d::CCClippingNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d14CCClippingNodeC2Ev")), Default, cocos2d::CCClippingNode, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d14CCClippingNodeD2Ev")), Default, cocos2d::CCClippingNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCClippingNode::create)), Default, cocos2d::CCClippingNode, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCClippingNode::create)), Default, cocos2d::CCClippingNode, create, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCClippingNode::init)), Default, cocos2d::CCClippingNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCClippingNode::init)), Default, cocos2d::CCClippingNode, init, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCClippingNode::onEnter)), Default, cocos2d::CCClippingNode, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCClippingNode::onEnterTransitionDidFinish)), Default, cocos2d::CCClippingNode, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCClippingNode::onExit)), Default, cocos2d::CCClippingNode, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCClippingNode::onExitTransitionDidStart)), Default, cocos2d::CCClippingNode, onExitTransitionDidStart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCClippingNode::visit)), Default, cocos2d::CCClippingNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCClippingNode::getAlphaThreshold)), Default, cocos2d::CCClippingNode, getAlphaThreshold, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCClippingNode::getStencil)), Default, cocos2d::CCClippingNode, getStencil, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCClippingNode::isInverted)), Default, cocos2d::CCClippingNode, isInverted, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCClippingNode::setAlphaThreshold)), Default, cocos2d::CCClippingNode, setAlphaThreshold, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCClippingNode::setInverted)), Default, cocos2d::CCClippingNode, setInverted, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCClippingNode::setStencil)), Default, cocos2d::CCClippingNode, setStencil, cocos2d::CCNode*)
		}
	};
}
