#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ConfigureHSVWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getHSV
		#define GEODE_STATICS_getHSV
		GEODE_AS_STATIC_FUNCTION(getHSV) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_createTextInputNode
		#define GEODE_STATICS_createTextInputNode
		GEODE_AS_STATIC_FUNCTION(createTextInputNode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onResetHSV
		#define GEODE_STATICS_onResetHSV
		GEODE_AS_STATIC_FUNCTION(onResetHSV) 
	#endif

	#ifndef GEODE_STATICS_onToggleSConst
		#define GEODE_STATICS_onToggleSConst
		GEODE_AS_STATIC_FUNCTION(onToggleSConst) 
	#endif

	#ifndef GEODE_STATICS_onToggleVConst
		#define GEODE_STATICS_onToggleVConst
		GEODE_AS_STATIC_FUNCTION(onToggleVConst) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateLabels
		#define GEODE_STATICS_updateLabels
		GEODE_AS_STATIC_FUNCTION(updateLabels) 
	#endif

	#ifndef GEODE_STATICS_updateSliders
		#define GEODE_STATICS_updateSliders
		GEODE_AS_STATIC_FUNCTION(updateSliders) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHSV
		#define GEODE_CONCEPT_CHECK_getHSV
		GEODE_CONCEPT_FUNCTION_CHECK(getHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextInputNode
		#define GEODE_CONCEPT_CHECK_createTextInputNode
		GEODE_CONCEPT_FUNCTION_CHECK(createTextInputNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetHSV
		#define GEODE_CONCEPT_CHECK_onResetHSV
		GEODE_CONCEPT_FUNCTION_CHECK(onResetHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSConst
		#define GEODE_CONCEPT_CHECK_onToggleSConst
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSConst) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleVConst
		#define GEODE_CONCEPT_CHECK_onToggleVConst
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleVConst) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabels
		#define GEODE_CONCEPT_CHECK_updateLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSliders
		#define GEODE_CONCEPT_CHECK_updateSliders
		GEODE_CONCEPT_FUNCTION_CHECK(updateSliders) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ConfigureHSVWidget> : ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>>;
		using ModifyBase<ModifyDerive<Der, ConfigureHSVWidget>>::ModifyBase;
		using Base = ConfigureHSVWidget;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccHSVValue, bool, bool>::func(&ConfigureHSVWidget::create)), Default, ConfigureHSVWidget, create, cocos2d::ccHSVValue, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*, cocos2d::CCArray*, int>::func(&ConfigureHSVWidget::getHSV)), Default, ConfigureHSVWidget, getHSV, GameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputOpened)), Default, ConfigureHSVWidget, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputClosed)), Default, ConfigureHSVWidget, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textChanged)), Default, ConfigureHSVWidget, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, int>::func(&ConfigureHSVWidget::createTextInputNode)), Default, ConfigureHSVWidget, createTextInputNode, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccHSVValue, bool, bool>::func(&ConfigureHSVWidget::init)), Default, ConfigureHSVWidget, init, cocos2d::ccHSVValue, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ConfigureHSVWidget::onClose)), Default, ConfigureHSVWidget, onClose, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ConfigureHSVWidget::onResetHSV)), Default, ConfigureHSVWidget, onResetHSV, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ConfigureHSVWidget::onToggleSConst)), Default, ConfigureHSVWidget, onToggleSConst, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ConfigureHSVWidget::onToggleVConst)), Default, ConfigureHSVWidget, onToggleVConst, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ConfigureHSVWidget::sliderChanged)), Default, ConfigureHSVWidget, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ConfigureHSVWidget::updateLabels)), Default, ConfigureHSVWidget, updateLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ConfigureHSVWidget::updateSliders)), Default, ConfigureHSVWidget, updateSliders, )
		}
	};
}
