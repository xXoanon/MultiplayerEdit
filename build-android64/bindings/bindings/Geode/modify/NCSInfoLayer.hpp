#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NCSInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onLibrary
		#define GEODE_STATICS_onLibrary
		GEODE_AS_STATIC_FUNCTION(onLibrary) 
	#endif

	#ifndef GEODE_STATICS_onNCS
		#define GEODE_STATICS_onNCS
		GEODE_AS_STATIC_FUNCTION(onNCS) 
	#endif

	#ifndef GEODE_STATICS_onNCSIO
		#define GEODE_STATICS_onNCSIO
		GEODE_AS_STATIC_FUNCTION(onNCSIO) 
	#endif

	#ifndef GEODE_STATICS_onNCSUsage
		#define GEODE_STATICS_onNCSUsage
		GEODE_AS_STATIC_FUNCTION(onNCSUsage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLibrary
		#define GEODE_CONCEPT_CHECK_onLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(onLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNCS
		#define GEODE_CONCEPT_CHECK_onNCS
		GEODE_CONCEPT_FUNCTION_CHECK(onNCS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNCSIO
		#define GEODE_CONCEPT_CHECK_onNCSIO
		GEODE_CONCEPT_FUNCTION_CHECK(onNCSIO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNCSUsage
		#define GEODE_CONCEPT_CHECK_onNCSUsage
		GEODE_CONCEPT_FUNCTION_CHECK(onNCSUsage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NCSInfoLayer> : ModifyBase<ModifyDerive<Der, NCSInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NCSInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, NCSInfoLayer>>::ModifyBase;
		using Base = NCSInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<CustomSongLayer*>::func(&NCSInfoLayer::create)), Default, NCSInfoLayer, create, CustomSongLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&NCSInfoLayer::keyBackClicked)), Default, NCSInfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<CustomSongLayer*>::func(&NCSInfoLayer::init)), Default, NCSInfoLayer, init, CustomSongLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&NCSInfoLayer::onClose)), Default, NCSInfoLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&NCSInfoLayer::onLibrary)), Default, NCSInfoLayer, onLibrary, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&NCSInfoLayer::onNCS)), Default, NCSInfoLayer, onNCS, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&NCSInfoLayer::onNCSIO)), Default, NCSInfoLayer, onNCSIO, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&NCSInfoLayer::onNCSUsage)), Default, NCSInfoLayer, onNCSUsage, cocos2d::CCObject*)
		}
	};
}
