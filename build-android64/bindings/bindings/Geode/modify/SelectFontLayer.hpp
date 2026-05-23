#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectFontLayer.hpp>
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

	#ifndef GEODE_STATICS_onChangeFont
		#define GEODE_STATICS_onChangeFont
		GEODE_AS_STATIC_FUNCTION(onChangeFont) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateFontLabel
		#define GEODE_STATICS_updateFontLabel
		GEODE_AS_STATIC_FUNCTION(updateFontLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_onChangeFont
		#define GEODE_CONCEPT_CHECK_onChangeFont
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFontLabel
		#define GEODE_CONCEPT_CHECK_updateFontLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateFontLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectFontLayer> : ModifyBase<ModifyDerive<Der, SelectFontLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectFontLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectFontLayer>>::ModifyBase;
		using Base = SelectFontLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15SelectFontLayerD2Ev")), Default, SelectFontLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LevelEditorLayer*>::func(&SelectFontLayer::create)), Default, SelectFontLayer, create, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SelectFontLayer::keyBackClicked)), Default, SelectFontLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LevelEditorLayer*>::func(&SelectFontLayer::init)), Default, SelectFontLayer, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SelectFontLayer::onChangeFont)), Default, SelectFontLayer, onChangeFont, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SelectFontLayer::onClose)), Default, SelectFontLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SelectFontLayer::updateFontLabel)), Default, SelectFontLayer, updateFontLabel, )
		}
	};
}
