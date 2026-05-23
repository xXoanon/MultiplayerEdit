#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_updateToggleItem
		#define GEODE_STATICS_updateToggleItem
		GEODE_AS_STATIC_FUNCTION(updateToggleItem) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_triggerValueFromSliderValue
		#define GEODE_STATICS_triggerValueFromSliderValue
		GEODE_AS_STATIC_FUNCTION(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderValueFromValue
		#define GEODE_STATICS_triggerSliderValueFromValue
		GEODE_AS_STATIC_FUNCTION(triggerSliderValueFromValue) 
	#endif

	#ifndef GEODE_STATICS_valuePopupClosed
		#define GEODE_STATICS_valuePopupClosed
		GEODE_AS_STATIC_FUNCTION(valuePopupClosed) 
	#endif

	#ifndef GEODE_STATICS_addCloseButton
		#define GEODE_STATICS_addCloseButton
		GEODE_AS_STATIC_FUNCTION(addCloseButton) 
	#endif

	#ifndef GEODE_STATICS_addCustomButton
		#define GEODE_STATICS_addCustomButton
		GEODE_AS_STATIC_FUNCTION(addCustomButton) 
	#endif

	#ifndef GEODE_STATICS_addHelpButton
		#define GEODE_STATICS_addHelpButton
		GEODE_AS_STATIC_FUNCTION(addHelpButton) 
	#endif

	#ifndef GEODE_STATICS_addInfoLabel
		#define GEODE_STATICS_addInfoLabel
		GEODE_AS_STATIC_FUNCTION(addInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_addObjectsToGroup
		#define GEODE_STATICS_addObjectsToGroup
		GEODE_AS_STATIC_FUNCTION(addObjectsToGroup) 
	#endif

	#ifndef GEODE_STATICS_addObjectsToPage
		#define GEODE_STATICS_addObjectsToPage
		GEODE_AS_STATIC_FUNCTION(addObjectsToPage) 
	#endif

	#ifndef GEODE_STATICS_addObjectToGroup
		#define GEODE_STATICS_addObjectToGroup
		GEODE_AS_STATIC_FUNCTION(addObjectToGroup) 
	#endif

	#ifndef GEODE_STATICS_addObjectToPage
		#define GEODE_STATICS_addObjectToPage
		GEODE_AS_STATIC_FUNCTION(addObjectToPage) 
	#endif

	#ifndef GEODE_STATICS_addTitle
		#define GEODE_STATICS_addTitle
		GEODE_AS_STATIC_FUNCTION(addTitle) 
	#endif

	#ifndef GEODE_STATICS_closeInputNodes
		#define GEODE_STATICS_closeInputNodes
		GEODE_AS_STATIC_FUNCTION(closeInputNodes) 
	#endif

	#ifndef GEODE_STATICS_createCustomButton
		#define GEODE_STATICS_createCustomButton
		GEODE_AS_STATIC_FUNCTION(createCustomButton) 
	#endif

	#ifndef GEODE_STATICS_createCustomEasingControls
		#define GEODE_STATICS_createCustomEasingControls
		GEODE_AS_STATIC_FUNCTION(createCustomEasingControls) 
	#endif

	#ifndef GEODE_STATICS_createCustomToggleValueControl
		#define GEODE_STATICS_createCustomToggleValueControl
		GEODE_AS_STATIC_FUNCTION(createCustomToggleValueControl) 
	#endif

	#ifndef GEODE_STATICS_createEasingControls
		#define GEODE_STATICS_createEasingControls
		GEODE_AS_STATIC_FUNCTION(createEasingControls) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItems
		#define GEODE_STATICS_createMultiTriggerItems
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItems) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsCorner
		#define GEODE_STATICS_createMultiTriggerItemsCorner
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsCorner) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsDefault
		#define GEODE_STATICS_createMultiTriggerItemsDefault
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsDefault) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsDefaultHorizontal
		#define GEODE_STATICS_createMultiTriggerItemsDefaultHorizontal
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsDefaultHorizontal) 
	#endif

	#ifndef GEODE_STATICS_createMultiTriggerItemsDefaultVertical
		#define GEODE_STATICS_createMultiTriggerItemsDefaultVertical
		GEODE_AS_STATIC_FUNCTION(createMultiTriggerItemsDefaultVertical) 
	#endif

	#ifndef GEODE_STATICS_createPageButtons
		#define GEODE_STATICS_createPageButtons
		GEODE_AS_STATIC_FUNCTION(createPageButtons) 
	#endif

	#ifndef GEODE_STATICS_createPlusButton
		#define GEODE_STATICS_createPlusButton
		GEODE_AS_STATIC_FUNCTION(createPlusButton) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_createToggleValueControl
		#define GEODE_STATICS_createToggleValueControl
		GEODE_AS_STATIC_FUNCTION(createToggleValueControl) 
	#endif

	#ifndef GEODE_STATICS_createToggleValueControlAdvanced
		#define GEODE_STATICS_createToggleValueControlAdvanced
		GEODE_AS_STATIC_FUNCTION(createToggleValueControlAdvanced) 
	#endif

	#ifndef GEODE_STATICS_createValueControl
		#define GEODE_STATICS_createValueControl
		GEODE_AS_STATIC_FUNCTION(createValueControl) 
	#endif

	#ifndef GEODE_STATICS_createValueControlAdvanced
		#define GEODE_STATICS_createValueControlAdvanced
		GEODE_AS_STATIC_FUNCTION(createValueControlAdvanced) 
	#endif

	#ifndef GEODE_STATICS_createValueControlWArrows
		#define GEODE_STATICS_createValueControlWArrows
		GEODE_AS_STATIC_FUNCTION(createValueControlWArrows) 
	#endif

	#ifndef GEODE_STATICS_getGroupContainer
		#define GEODE_STATICS_getGroupContainer
		GEODE_AS_STATIC_FUNCTION(getGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_getMaxSliderValue
		#define GEODE_STATICS_getMaxSliderValue
		GEODE_AS_STATIC_FUNCTION(getMaxSliderValue) 
	#endif

	#ifndef GEODE_STATICS_getMinSliderValue
		#define GEODE_STATICS_getMinSliderValue
		GEODE_AS_STATIC_FUNCTION(getMinSliderValue) 
	#endif

	#ifndef GEODE_STATICS_getObjects
		#define GEODE_STATICS_getObjects
		GEODE_AS_STATIC_FUNCTION(getObjects) 
	#endif

	#ifndef GEODE_STATICS_getPageContainer
		#define GEODE_STATICS_getPageContainer
		GEODE_AS_STATIC_FUNCTION(getPageContainer) 
	#endif

	#ifndef GEODE_STATICS_getTriggerValue
		#define GEODE_STATICS_getTriggerValue
		GEODE_AS_STATIC_FUNCTION(getTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_getTruncatedValue
		#define GEODE_STATICS_getTruncatedValue
		GEODE_AS_STATIC_FUNCTION(getTruncatedValue) 
	#endif

	#ifndef GEODE_STATICS_getTruncatedValueByTag
		#define GEODE_STATICS_getTruncatedValueByTag
		GEODE_AS_STATIC_FUNCTION(getTruncatedValueByTag) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseArrow
		#define GEODE_STATICS_onCustomEaseArrow
		GEODE_AS_STATIC_FUNCTION(onCustomEaseArrow) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseArrowDown
		#define GEODE_STATICS_onCustomEaseArrowDown
		GEODE_AS_STATIC_FUNCTION(onCustomEaseArrowDown) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseArrowUp
		#define GEODE_STATICS_onCustomEaseArrowUp
		GEODE_AS_STATIC_FUNCTION(onCustomEaseArrowUp) 
	#endif

	#ifndef GEODE_STATICS_onCustomEaseRate
		#define GEODE_STATICS_onCustomEaseRate
		GEODE_AS_STATIC_FUNCTION(onCustomEaseRate) 
	#endif

	#ifndef GEODE_STATICS_onDisableValue
		#define GEODE_STATICS_onDisableValue
		GEODE_AS_STATIC_FUNCTION(onDisableValue) 
	#endif

	#ifndef GEODE_STATICS_onEase
		#define GEODE_STATICS_onEase
		GEODE_AS_STATIC_FUNCTION(onEase) 
	#endif

	#ifndef GEODE_STATICS_onEaseRate
		#define GEODE_STATICS_onEaseRate
		GEODE_AS_STATIC_FUNCTION(onEaseRate) 
	#endif

	#ifndef GEODE_STATICS_onMultiTrigger
		#define GEODE_STATICS_onMultiTrigger
		GEODE_AS_STATIC_FUNCTION(onMultiTrigger) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onSpawnedByTrigger
		#define GEODE_STATICS_onSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_onToggleTriggerValue
		#define GEODE_STATICS_onToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_onTouchTriggered
		#define GEODE_STATICS_onTouchTriggered
		GEODE_AS_STATIC_FUNCTION(onTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_postSetup
		#define GEODE_STATICS_postSetup
		GEODE_AS_STATIC_FUNCTION(postSetup) 
	#endif

	#ifndef GEODE_STATICS_preSetup
		#define GEODE_STATICS_preSetup
		GEODE_AS_STATIC_FUNCTION(preSetup) 
	#endif

	#ifndef GEODE_STATICS_refreshGroupVisibility
		#define GEODE_STATICS_refreshGroupVisibility
		GEODE_AS_STATIC_FUNCTION(refreshGroupVisibility) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromGroup
		#define GEODE_STATICS_removeObjectFromGroup
		GEODE_AS_STATIC_FUNCTION(removeObjectFromGroup) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromPage
		#define GEODE_STATICS_removeObjectFromPage
		GEODE_AS_STATIC_FUNCTION(removeObjectFromPage) 
	#endif

	#ifndef GEODE_STATICS_resetDisabledValues
		#define GEODE_STATICS_resetDisabledValues
		GEODE_AS_STATIC_FUNCTION(resetDisabledValues) 
	#endif

	#ifndef GEODE_STATICS_setMaxSliderValue
		#define GEODE_STATICS_setMaxSliderValue
		GEODE_AS_STATIC_FUNCTION(setMaxSliderValue) 
	#endif

	#ifndef GEODE_STATICS_setMinSliderValue
		#define GEODE_STATICS_setMinSliderValue
		GEODE_AS_STATIC_FUNCTION(setMinSliderValue) 
	#endif

	#ifndef GEODE_STATICS_shouldLimitValue
		#define GEODE_STATICS_shouldLimitValue
		GEODE_AS_STATIC_FUNCTION(shouldLimitValue) 
	#endif

	#ifndef GEODE_STATICS_toggleBG
		#define GEODE_STATICS_toggleBG
		GEODE_AS_STATIC_FUNCTION(toggleBG) 
	#endif

	#ifndef GEODE_STATICS_toggleCustomEaseRateVisibility
		#define GEODE_STATICS_toggleCustomEaseRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleCustomEaseRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleDisableButtons
		#define GEODE_STATICS_toggleDisableButtons
		GEODE_AS_STATIC_FUNCTION(toggleDisableButtons) 
	#endif

	#ifndef GEODE_STATICS_toggleEaseRateVisibility
		#define GEODE_STATICS_toggleEaseRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleEaseRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleLimitValue
		#define GEODE_STATICS_toggleLimitValue
		GEODE_AS_STATIC_FUNCTION(toggleLimitValue) 
	#endif

	#ifndef GEODE_STATICS_togglePageArrows
		#define GEODE_STATICS_togglePageArrows
		GEODE_AS_STATIC_FUNCTION(togglePageArrows) 
	#endif

	#ifndef GEODE_STATICS_triggerArrowChanged
		#define GEODE_STATICS_triggerArrowChanged
		GEODE_AS_STATIC_FUNCTION(triggerArrowChanged) 
	#endif

	#ifndef GEODE_STATICS_triggerArrowLeft
		#define GEODE_STATICS_triggerArrowLeft
		GEODE_AS_STATIC_FUNCTION(triggerArrowLeft) 
	#endif

	#ifndef GEODE_STATICS_triggerArrowRight
		#define GEODE_STATICS_triggerArrowRight
		GEODE_AS_STATIC_FUNCTION(triggerArrowRight) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderChanged
		#define GEODE_STATICS_triggerSliderChanged
		GEODE_AS_STATIC_FUNCTION(triggerSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateCustomEaseLabel
		#define GEODE_STATICS_updateCustomEaseLabel
		GEODE_AS_STATIC_FUNCTION(updateCustomEaseLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCustomEaseRateLabel
		#define GEODE_STATICS_updateCustomEaseRateLabel
		GEODE_AS_STATIC_FUNCTION(updateCustomEaseRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCustomToggleTrigger
		#define GEODE_STATICS_updateCustomToggleTrigger
		GEODE_AS_STATIC_FUNCTION(updateCustomToggleTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateEaseLabel
		#define GEODE_STATICS_updateEaseLabel
		GEODE_AS_STATIC_FUNCTION(updateEaseLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEaseRateLabel
		#define GEODE_STATICS_updateEaseRateLabel
		GEODE_AS_STATIC_FUNCTION(updateEaseRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEditorLabel
		#define GEODE_STATICS_updateEditorLabel
		GEODE_AS_STATIC_FUNCTION(updateEditorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateInputNodeLabel
		#define GEODE_STATICS_updateInputNodeLabel
		GEODE_AS_STATIC_FUNCTION(updateInputNodeLabel) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMultiTriggerBtn
		#define GEODE_STATICS_updateMultiTriggerBtn
		GEODE_AS_STATIC_FUNCTION(updateMultiTriggerBtn) 
	#endif

	#ifndef GEODE_STATICS_updateSlider
		#define GEODE_STATICS_updateSlider
		GEODE_AS_STATIC_FUNCTION(updateSlider) 
	#endif

	#ifndef GEODE_STATICS_updateSpawnedByTrigger
		#define GEODE_STATICS_updateSpawnedByTrigger
		GEODE_AS_STATIC_FUNCTION(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_STATICS_updateTouchTriggered
		#define GEODE_STATICS_updateTouchTriggered
		GEODE_AS_STATIC_FUNCTION(updateTouchTriggered) 
	#endif

	#ifndef GEODE_STATICS_updateValue
		#define GEODE_STATICS_updateValue
		GEODE_AS_STATIC_FUNCTION(updateValue) 
	#endif

	#ifndef GEODE_STATICS_updateValueControls
		#define GEODE_STATICS_updateValueControls
		GEODE_AS_STATIC_FUNCTION(updateValueControls) 
	#endif

	#ifndef GEODE_STATICS_valueChanged
		#define GEODE_STATICS_valueChanged
		GEODE_AS_STATIC_FUNCTION(valueChanged) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageChanged
		#define GEODE_CONCEPT_CHECK_pageChanged
		GEODE_CONCEPT_FUNCTION_CHECK(pageChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroup
		#define GEODE_CONCEPT_CHECK_toggleGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputValue
		#define GEODE_CONCEPT_CHECK_updateInputValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderBegan
		#define GEODE_CONCEPT_CHECK_sliderBegan
		GEODE_CONCEPT_FUNCTION_CHECK(sliderBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderEnded
		#define GEODE_CONCEPT_CHECK_sliderEnded
		GEODE_CONCEPT_FUNCTION_CHECK(sliderEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlusButton
		#define GEODE_CONCEPT_CHECK_onPlusButton
		GEODE_CONCEPT_FUNCTION_CHECK(onPlusButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomButton
		#define GEODE_CONCEPT_CHECK_onCustomButton
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		#define GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputNode
		#define GEODE_CONCEPT_CHECK_updateInputNode
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggleItem
		#define GEODE_CONCEPT_CHECK_updateToggleItem
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggleItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerValueFromSliderValue
		#define GEODE_CONCEPT_CHECK_triggerValueFromSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSliderValueFromValue
		#define GEODE_CONCEPT_CHECK_triggerSliderValueFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSliderValueFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valuePopupClosed
		#define GEODE_CONCEPT_CHECK_valuePopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(valuePopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCloseButton
		#define GEODE_CONCEPT_CHECK_addCloseButton
		GEODE_CONCEPT_FUNCTION_CHECK(addCloseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomButton
		#define GEODE_CONCEPT_CHECK_addCustomButton
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addHelpButton
		#define GEODE_CONCEPT_CHECK_addHelpButton
		GEODE_CONCEPT_FUNCTION_CHECK(addHelpButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInfoLabel
		#define GEODE_CONCEPT_CHECK_addInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(addInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectsToGroup
		#define GEODE_CONCEPT_CHECK_addObjectsToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectsToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectsToPage
		#define GEODE_CONCEPT_CHECK_addObjectsToPage
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectsToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectToGroup
		#define GEODE_CONCEPT_CHECK_addObjectToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectToPage
		#define GEODE_CONCEPT_CHECK_addObjectToPage
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTitle
		#define GEODE_CONCEPT_CHECK_addTitle
		GEODE_CONCEPT_FUNCTION_CHECK(addTitle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeInputNodes
		#define GEODE_CONCEPT_CHECK_closeInputNodes
		GEODE_CONCEPT_FUNCTION_CHECK(closeInputNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomButton
		#define GEODE_CONCEPT_CHECK_createCustomButton
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomEasingControls
		#define GEODE_CONCEPT_CHECK_createCustomEasingControls
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomEasingControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomToggleValueControl
		#define GEODE_CONCEPT_CHECK_createCustomToggleValueControl
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomToggleValueControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createEasingControls
		#define GEODE_CONCEPT_CHECK_createEasingControls
		GEODE_CONCEPT_FUNCTION_CHECK(createEasingControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMultiTriggerItems
		#define GEODE_CONCEPT_CHECK_createMultiTriggerItems
		GEODE_CONCEPT_FUNCTION_CHECK(createMultiTriggerItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMultiTriggerItemsCorner
		#define GEODE_CONCEPT_CHECK_createMultiTriggerItemsCorner
		GEODE_CONCEPT_FUNCTION_CHECK(createMultiTriggerItemsCorner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMultiTriggerItemsDefault
		#define GEODE_CONCEPT_CHECK_createMultiTriggerItemsDefault
		GEODE_CONCEPT_FUNCTION_CHECK(createMultiTriggerItemsDefault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMultiTriggerItemsDefaultHorizontal
		#define GEODE_CONCEPT_CHECK_createMultiTriggerItemsDefaultHorizontal
		GEODE_CONCEPT_FUNCTION_CHECK(createMultiTriggerItemsDefaultHorizontal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMultiTriggerItemsDefaultVertical
		#define GEODE_CONCEPT_CHECK_createMultiTriggerItemsDefaultVertical
		GEODE_CONCEPT_FUNCTION_CHECK(createMultiTriggerItemsDefaultVertical) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPageButtons
		#define GEODE_CONCEPT_CHECK_createPageButtons
		GEODE_CONCEPT_FUNCTION_CHECK(createPageButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPlusButton
		#define GEODE_CONCEPT_CHECK_createPlusButton
		GEODE_CONCEPT_FUNCTION_CHECK(createPlusButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleValueControl
		#define GEODE_CONCEPT_CHECK_createToggleValueControl
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleValueControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleValueControlAdvanced
		#define GEODE_CONCEPT_CHECK_createToggleValueControlAdvanced
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleValueControlAdvanced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createValueControl
		#define GEODE_CONCEPT_CHECK_createValueControl
		GEODE_CONCEPT_FUNCTION_CHECK(createValueControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createValueControlAdvanced
		#define GEODE_CONCEPT_CHECK_createValueControlAdvanced
		GEODE_CONCEPT_FUNCTION_CHECK(createValueControlAdvanced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createValueControlWArrows
		#define GEODE_CONCEPT_CHECK_createValueControlWArrows
		GEODE_CONCEPT_FUNCTION_CHECK(createValueControlWArrows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupContainer
		#define GEODE_CONCEPT_CHECK_getGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxSliderValue
		#define GEODE_CONCEPT_CHECK_getMaxSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinSliderValue
		#define GEODE_CONCEPT_CHECK_getMinSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(getMinSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjects
		#define GEODE_CONCEPT_CHECK_getObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageContainer
		#define GEODE_CONCEPT_CHECK_getPageContainer
		GEODE_CONCEPT_FUNCTION_CHECK(getPageContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTriggerValue
		#define GEODE_CONCEPT_CHECK_getTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(getTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTruncatedValue
		#define GEODE_CONCEPT_CHECK_getTruncatedValue
		GEODE_CONCEPT_FUNCTION_CHECK(getTruncatedValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTruncatedValueByTag
		#define GEODE_CONCEPT_CHECK_getTruncatedValueByTag
		GEODE_CONCEPT_FUNCTION_CHECK(getTruncatedValueByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideAll
		#define GEODE_CONCEPT_CHECK_hideAll
		GEODE_CONCEPT_FUNCTION_CHECK(hideAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomEaseArrow
		#define GEODE_CONCEPT_CHECK_onCustomEaseArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomEaseArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomEaseArrowDown
		#define GEODE_CONCEPT_CHECK_onCustomEaseArrowDown
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomEaseArrowDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomEaseArrowUp
		#define GEODE_CONCEPT_CHECK_onCustomEaseArrowUp
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomEaseArrowUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomEaseRate
		#define GEODE_CONCEPT_CHECK_onCustomEaseRate
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomEaseRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDisableValue
		#define GEODE_CONCEPT_CHECK_onDisableValue
		GEODE_CONCEPT_FUNCTION_CHECK(onDisableValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEase
		#define GEODE_CONCEPT_CHECK_onEase
		GEODE_CONCEPT_FUNCTION_CHECK(onEase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEaseRate
		#define GEODE_CONCEPT_CHECK_onEaseRate
		GEODE_CONCEPT_FUNCTION_CHECK(onEaseRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMultiTrigger
		#define GEODE_CONCEPT_CHECK_onMultiTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(onMultiTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_onSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(onSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTouchTriggered
		#define GEODE_CONCEPT_CHECK_onTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(onTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postSetup
		#define GEODE_CONCEPT_CHECK_postSetup
		GEODE_CONCEPT_FUNCTION_CHECK(postSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preSetup
		#define GEODE_CONCEPT_CHECK_preSetup
		GEODE_CONCEPT_FUNCTION_CHECK(preSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshGroupVisibility
		#define GEODE_CONCEPT_CHECK_refreshGroupVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(refreshGroupVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectFromGroup
		#define GEODE_CONCEPT_CHECK_removeObjectFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectFromPage
		#define GEODE_CONCEPT_CHECK_removeObjectFromPage
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectFromPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDisabledValues
		#define GEODE_CONCEPT_CHECK_resetDisabledValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetDisabledValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxSliderValue
		#define GEODE_CONCEPT_CHECK_setMaxSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMinSliderValue
		#define GEODE_CONCEPT_CHECK_setMinSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(setMinSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldLimitValue
		#define GEODE_CONCEPT_CHECK_shouldLimitValue
		GEODE_CONCEPT_FUNCTION_CHECK(shouldLimitValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleBG
		#define GEODE_CONCEPT_CHECK_toggleBG
		GEODE_CONCEPT_FUNCTION_CHECK(toggleBG) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCustomEaseRateVisibility
		#define GEODE_CONCEPT_CHECK_toggleCustomEaseRateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCustomEaseRateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDisableButtons
		#define GEODE_CONCEPT_CHECK_toggleDisableButtons
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDisableButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEaseRateVisibility
		#define GEODE_CONCEPT_CHECK_toggleEaseRateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEaseRateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLimitValue
		#define GEODE_CONCEPT_CHECK_toggleLimitValue
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLimitValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePageArrows
		#define GEODE_CONCEPT_CHECK_togglePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(togglePageArrows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerArrowChanged
		#define GEODE_CONCEPT_CHECK_triggerArrowChanged
		GEODE_CONCEPT_FUNCTION_CHECK(triggerArrowChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerArrowLeft
		#define GEODE_CONCEPT_CHECK_triggerArrowLeft
		GEODE_CONCEPT_FUNCTION_CHECK(triggerArrowLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerArrowRight
		#define GEODE_CONCEPT_CHECK_triggerArrowRight
		GEODE_CONCEPT_FUNCTION_CHECK(triggerArrowRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSliderChanged
		#define GEODE_CONCEPT_CHECK_triggerSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomEaseLabel
		#define GEODE_CONCEPT_CHECK_updateCustomEaseLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomEaseLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomEaseRateLabel
		#define GEODE_CONCEPT_CHECK_updateCustomEaseRateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomEaseRateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomToggleTrigger
		#define GEODE_CONCEPT_CHECK_updateCustomToggleTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomToggleTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEaseLabel
		#define GEODE_CONCEPT_CHECK_updateEaseLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEaseLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEaseRateLabel
		#define GEODE_CONCEPT_CHECK_updateEaseRateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEaseRateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorLabel
		#define GEODE_CONCEPT_CHECK_updateEditorLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputNodeLabel
		#define GEODE_CONCEPT_CHECK_updateInputNodeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputNodeLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabel
		#define GEODE_CONCEPT_CHECK_updateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMultiTriggerBtn
		#define GEODE_CONCEPT_CHECK_updateMultiTriggerBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updateMultiTriggerBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSlider
		#define GEODE_CONCEPT_CHECK_updateSlider
		GEODE_CONCEPT_FUNCTION_CHECK(updateSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		#define GEODE_CONCEPT_CHECK_updateSpawnedByTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpawnedByTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTouchTriggered
		#define GEODE_CONCEPT_CHECK_updateTouchTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(updateTouchTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValue
		#define GEODE_CONCEPT_CHECK_updateValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValueControls
		#define GEODE_CONCEPT_CHECK_updateValueControls
		GEODE_CONCEPT_FUNCTION_CHECK(updateValueControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueChanged
		#define GEODE_CONCEPT_CHECK_valueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(valueChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTriggerPopup>>::ModifyBase;
		using Base = SetupTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopupD2Ev")), Default, SetupTriggerPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&SetupTriggerPopup::create)), Default, SetupTriggerPopup, create, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*, float, float, int>::func(&SetupTriggerPopup::create)), Default, SetupTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetupTriggerPopup::ccTouchBegan)), Default, SetupTriggerPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupTriggerPopup::keyBackClicked)), Default, SetupTriggerPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupTriggerPopup::show)), Default, SetupTriggerPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupTriggerPopup, pageChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, bool>::func(&SetupTriggerPopup::toggleGroup)), Default, SetupTriggerPopup, toggleGroup, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupTriggerPopup::determineStartValues)), Default, SetupTriggerPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onClose)), Default, SetupTriggerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textInputClosed)), Default, SetupTriggerPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textChanged)), Default, SetupTriggerPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*, float>::func(&SetupTriggerPopup::textInputShouldOffset)), Default, SetupTriggerPopup, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textInputReturn)), Default, SetupTriggerPopup, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupTriggerPopup, updateInputValue, int, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<Slider*>::func(&SetupTriggerPopup::sliderBegan)), Default, SetupTriggerPopup, sliderBegan, Slider*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<Slider*>::func(&SetupTriggerPopup::sliderEnded)), Default, SetupTriggerPopup, sliderEnded, Slider*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupTriggerPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupTriggerPopup, onCustomButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupTriggerPopup::updateDefaultTriggerValues)), Default, SetupTriggerPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupTriggerPopup::updateInputNode)), Default, SetupTriggerPopup, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, bool>::func(&SetupTriggerPopup::updateToggleItem)), Default, SetupTriggerPopup, updateToggleItem, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&SetupTriggerPopup::getValue)), Default, SetupTriggerPopup, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupTriggerPopup::triggerValueFromSliderValue)), Default, SetupTriggerPopup, triggerValueFromSliderValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupTriggerPopup::triggerSliderValueFromValue)), Default, SetupTriggerPopup, triggerSliderValueFromValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<ConfigureValuePopup*, float>::func(&SetupTriggerPopup::valuePopupClosed)), Default, SetupTriggerPopup, valuePopupClosed, ConfigureValuePopup*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup14addCloseButtonESs")), Default, SetupTriggerPopup, addCloseButton, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, ButtonSprite*, cocos2d::CCPoint, int, int>::func(&SetupTriggerPopup::addCustomButton)), Default, SetupTriggerPopup, addCustomButton, int, ButtonSprite*, cocos2d::CCPoint, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup13addHelpButtonESsSsf")), Default, SetupTriggerPopup, addHelpButton, gd::string, gd::string, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup12addInfoLabelESsfN7cocos2d7CCPointEii")), Default, SetupTriggerPopup, addInfoLabel, gd::string, float, cocos2d::CCPoint, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, int>::func(&SetupTriggerPopup::addObjectsToGroup)), Default, SetupTriggerPopup, addObjectsToGroup, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*, int>::func(&SetupTriggerPopup::addObjectsToPage)), Default, SetupTriggerPopup, addObjectsToPage, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int>::func(&SetupTriggerPopup::addObjectToGroup)), Default, SetupTriggerPopup, addObjectToGroup, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int>::func(&SetupTriggerPopup::addObjectToPage)), Default, SetupTriggerPopup, addObjectToPage, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup8addTitleESs")), Default, SetupTriggerPopup, addTitle, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::closeInputNodes)), Default, SetupTriggerPopup, closeInputNodes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup18createCustomButtonEiSsSsN7cocos2d7CCPointEffbii")), Default, SetupTriggerPopup, createCustomButton, int, gd::string, gd::string, cocos2d::CCPoint, float, float, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup26createCustomEasingControlsESsN7cocos2d7CCPointEfiiii")), Default, SetupTriggerPopup, createCustomEasingControls, gd::string, cocos2d::CCPoint, float, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup30createCustomToggleValueControlEibbSsN7cocos2d7CCPointEbii")), Default, SetupTriggerPopup, createCustomToggleValueControl, int, bool, bool, gd::string, cocos2d::CCPoint, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, float, int, int>::func(&SetupTriggerPopup::createEasingControls)), Default, SetupTriggerPopup, createEasingControls, cocos2d::CCPoint, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint>::func(&SetupTriggerPopup::createMultiTriggerItems)), Default, SetupTriggerPopup, createMultiTriggerItems, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::createMultiTriggerItemsCorner)), Default, SetupTriggerPopup, createMultiTriggerItemsCorner, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::createMultiTriggerItemsDefault)), Default, SetupTriggerPopup, createMultiTriggerItemsDefault, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::createMultiTriggerItemsDefaultHorizontal)), Default, SetupTriggerPopup, createMultiTriggerItemsDefaultHorizontal, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::createMultiTriggerItemsDefaultVertical)), Default, SetupTriggerPopup, createMultiTriggerItemsDefaultVertical, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int>::func(&SetupTriggerPopup::createPageButtons)), Default, SetupTriggerPopup, createPageButtons, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup16createPlusButtonEiN7cocos2d7CCPointEfSsii")), Default, SetupTriggerPopup, createPlusButton, int, cocos2d::CCPoint, float, gd::string, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup18createToggleButtonESsMN7cocos2d8CCObjectEFvPS1_EbNS0_7CCPointE")), Default, SetupTriggerPopup, createToggleButton, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup24createToggleValueControlEiSsN7cocos2d7CCPointEbiif")), Default, SetupTriggerPopup, createToggleValueControl, int, gd::string, cocos2d::CCPoint, bool, int, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup32createToggleValueControlAdvancedEiSsN7cocos2d7CCPointEbiifffS1_")), Default, SetupTriggerPopup, createToggleValueControlAdvanced, int, gd::string, cocos2d::CCPoint, bool, int, int, float, float, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup18createValueControlEiSsN7cocos2d7CCPointEfff")), Default, SetupTriggerPopup, createValueControl, int, gd::string, cocos2d::CCPoint, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup26createValueControlAdvancedEiSsN7cocos2d7CCPointEfb14InputValueTypeibffii12GJInputStyleib")), Default, SetupTriggerPopup, createValueControlAdvanced, int, gd::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup25createValueControlWArrowsEiSsN7cocos2d7CCPointEf")), Default, SetupTriggerPopup, createValueControlWArrows, int, gd::string, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupTriggerPopup::getGroupContainer)), Default, SetupTriggerPopup, getGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupTriggerPopup::getMaxSliderValue)), Default, SetupTriggerPopup, getMaxSliderValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupTriggerPopup::getMinSliderValue)), Default, SetupTriggerPopup, getMinSliderValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::getObjects)), Default, SetupTriggerPopup, getObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupTriggerPopup::getPageContainer)), Default, SetupTriggerPopup, getPageContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, GameObject*>::func(&SetupTriggerPopup::getTriggerValue)), Default, SetupTriggerPopup, getTriggerValue, int, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int>::func(&SetupTriggerPopup::getTruncatedValue)), Default, SetupTriggerPopup, getTruncatedValue, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&SetupTriggerPopup::getTruncatedValueByTag)), Default, SetupTriggerPopup, getTruncatedValueByTag, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&SetupTriggerPopup::goToPage)), Default, SetupTriggerPopup, goToPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::hideAll)), Default, SetupTriggerPopup, hideAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*, float, float, int>::func(&SetupTriggerPopup::init)), Default, SetupTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&SetupTriggerPopup::onCustomEaseArrow)), Default, SetupTriggerPopup, onCustomEaseArrow, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onCustomEaseArrowDown)), Default, SetupTriggerPopup, onCustomEaseArrowDown, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onCustomEaseArrowUp)), Default, SetupTriggerPopup, onCustomEaseArrowUp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onCustomEaseRate)), Default, SetupTriggerPopup, onCustomEaseRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onDisableValue)), Default, SetupTriggerPopup, onDisableValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onEase)), Default, SetupTriggerPopup, onEase, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onEaseRate)), Default, SetupTriggerPopup, onEaseRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onMultiTrigger)), Default, SetupTriggerPopup, onMultiTrigger, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onPage)), Default, SetupTriggerPopup, onPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onSpawnedByTrigger)), Default, SetupTriggerPopup, onSpawnedByTrigger, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onToggleTriggerValue)), Default, SetupTriggerPopup, onToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onTouchTriggered)), Default, SetupTriggerPopup, onTouchTriggered, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::postSetup)), Default, SetupTriggerPopup, postSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::preSetup)), Default, SetupTriggerPopup, preSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::refreshGroupVisibility)), Default, SetupTriggerPopup, refreshGroupVisibility, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int>::func(&SetupTriggerPopup::removeObjectFromGroup)), Default, SetupTriggerPopup, removeObjectFromGroup, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, int>::func(&SetupTriggerPopup::removeObjectFromPage)), Default, SetupTriggerPopup, removeObjectFromPage, cocos2d::CCObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::resetDisabledValues)), Default, SetupTriggerPopup, resetDisabledValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int>::func(&SetupTriggerPopup::setMaxSliderValue)), Default, SetupTriggerPopup, setMaxSliderValue, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, int>::func(&SetupTriggerPopup::setMinSliderValue)), Default, SetupTriggerPopup, setMinSliderValue, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupTriggerPopup::shouldLimitValue)), Default, SetupTriggerPopup, shouldLimitValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&SetupTriggerPopup::toggleBG)), Default, SetupTriggerPopup, toggleBG, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&SetupTriggerPopup::toggleCustomEaseRateVisibility)), Default, SetupTriggerPopup, toggleCustomEaseRateVisibility, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&SetupTriggerPopup::toggleDisableButtons)), Default, SetupTriggerPopup, toggleDisableButtons, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::toggleEaseRateVisibility)), Default, SetupTriggerPopup, toggleEaseRateVisibility, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&SetupTriggerPopup::toggleLimitValue)), Default, SetupTriggerPopup, toggleLimitValue, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&SetupTriggerPopup::togglePageArrows)), Default, SetupTriggerPopup, togglePageArrows, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&SetupTriggerPopup::triggerArrowChanged)), Default, SetupTriggerPopup, triggerArrowChanged, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::triggerArrowLeft)), Default, SetupTriggerPopup, triggerArrowLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::triggerArrowRight)), Default, SetupTriggerPopup, triggerArrowRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::triggerSliderChanged)), Default, SetupTriggerPopup, triggerSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&SetupTriggerPopup::updateCustomEaseLabel)), Default, SetupTriggerPopup, updateCustomEaseLabel, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&SetupTriggerPopup::updateCustomEaseRateLabel)), Default, SetupTriggerPopup, updateCustomEaseRateLabel, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&SetupTriggerPopup::updateCustomToggleTrigger)), Default, SetupTriggerPopup, updateCustomToggleTrigger, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::updateEaseLabel)), Default, SetupTriggerPopup, updateEaseLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::updateEaseRateLabel)), Default, SetupTriggerPopup, updateEaseRateLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::updateEditorLabel)), Default, SetupTriggerPopup, updateEditorLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup20updateInputNodeLabelEiSs")), Default, SetupTriggerPopup, updateInputNodeLabel, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SetupTriggerPopup11updateLabelEiSs")), Default, SetupTriggerPopup, updateLabel, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::updateMultiTriggerBtn)), Default, SetupTriggerPopup, updateMultiTriggerBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupTriggerPopup::updateSlider)), Default, SetupTriggerPopup, updateSlider, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&SetupTriggerPopup::updateSlider)), Default, SetupTriggerPopup, updateSlider, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::updateSpawnedByTrigger)), Default, SetupTriggerPopup, updateSpawnedByTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupTriggerPopup::updateTouchTriggered)), Default, SetupTriggerPopup, updateTouchTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&SetupTriggerPopup::updateValue)), Default, SetupTriggerPopup, updateValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&SetupTriggerPopup::updateValueControls)), Default, SetupTriggerPopup, updateValueControls, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&SetupTriggerPopup::valueChanged)), Default, SetupTriggerPopup, valueChanged, int, float)
		}
	};
}
