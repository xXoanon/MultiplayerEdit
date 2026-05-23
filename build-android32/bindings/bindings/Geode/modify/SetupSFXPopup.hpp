#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSFXPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_sfxObjectSelected
		#define GEODE_STATICS_sfxObjectSelected
		GEODE_AS_STATIC_FUNCTION(sfxObjectSelected) 
	#endif

	#ifndef GEODE_STATICS_getActiveSFXID
		#define GEODE_STATICS_getActiveSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveSFXID) 
	#endif

	#ifndef GEODE_STATICS_overridePlaySFX
		#define GEODE_STATICS_overridePlaySFX
		GEODE_AS_STATIC_FUNCTION(overridePlaySFX) 
	#endif

	#ifndef GEODE_STATICS_sfxBrowserClosed
		#define GEODE_STATICS_sfxBrowserClosed
		GEODE_AS_STATIC_FUNCTION(sfxBrowserClosed) 
	#endif

	#ifndef GEODE_STATICS_createSFXWidget
		#define GEODE_STATICS_createSFXWidget
		GEODE_AS_STATIC_FUNCTION(createSFXWidget) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBrowseSFX
		#define GEODE_STATICS_onBrowseSFX
		GEODE_AS_STATIC_FUNCTION(onBrowseSFX) 
	#endif

	#ifndef GEODE_STATICS_updateLength
		#define GEODE_STATICS_updateLength
		GEODE_AS_STATIC_FUNCTION(updateLength) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageChanged
		#define GEODE_CONCEPT_CHECK_pageChanged
		GEODE_CONCEPT_FUNCTION_CHECK(pageChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlusButton
		#define GEODE_CONCEPT_CHECK_onPlusButton
		GEODE_CONCEPT_FUNCTION_CHECK(onPlusButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxObjectSelected
		#define GEODE_CONCEPT_CHECK_sfxObjectSelected
		GEODE_CONCEPT_FUNCTION_CHECK(sfxObjectSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSFXID
		#define GEODE_CONCEPT_CHECK_getActiveSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_overridePlaySFX
		#define GEODE_CONCEPT_CHECK_overridePlaySFX
		GEODE_CONCEPT_FUNCTION_CHECK(overridePlaySFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxBrowserClosed
		#define GEODE_CONCEPT_CHECK_sfxBrowserClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sfxBrowserClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSFXWidget
		#define GEODE_CONCEPT_CHECK_createSFXWidget
		GEODE_CONCEPT_FUNCTION_CHECK(createSFXWidget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBrowseSFX
		#define GEODE_CONCEPT_CHECK_onBrowseSFX
		GEODE_CONCEPT_FUNCTION_CHECK(onBrowseSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLength
		#define GEODE_CONCEPT_CHECK_updateLength
		GEODE_CONCEPT_FUNCTION_CHECK(updateLength) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSFXPopup> : ModifyBase<ModifyDerive<Der, SetupSFXPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSFXPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSFXPopup>>::ModifyBase;
		using Base = SetupSFXPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXTriggerGameObject*, cocos2d::CCArray*>::func(&SetupSFXPopup::create)), Default, SetupSFXPopup, create, SFXTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupSFXPopup::pageChanged)), Default, SetupSFXPopup, pageChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupSFXPopup::onClose)), Default, SetupSFXPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupSFXPopup::onPlusButton)), Default, SetupSFXPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupSFXPopup::valueDidChange)), Default, SetupSFXPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXInfoObject*>::func(&SetupSFXPopup::sfxObjectSelected)), Default, SetupSFXPopup, sfxObjectSelected, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupSFXPopup::getActiveSFXID)), Default, SetupSFXPopup, getActiveSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXInfoObject*>::func(&SetupSFXPopup::overridePlaySFX)), Default, SetupSFXPopup, overridePlaySFX, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<SFXBrowser*>::func(&SetupSFXPopup::sfxBrowserClosed)), Default, SetupSFXPopup, sfxBrowserClosed, SFXBrowser*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupSFXPopup::createSFXWidget)), Default, SetupSFXPopup, createSFXWidget, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SFXTriggerGameObject*, cocos2d::CCArray*>::func(&SetupSFXPopup::init)), Default, SetupSFXPopup, init, SFXTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupSFXPopup::onBrowseSFX)), Default, SetupSFXPopup, onBrowseSFX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupSFXPopup::updateLength)), Default, SetupSFXPopup, updateLength, )
		}
	};
}
