#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorPauseLayer.hpp>
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

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_doResetUnused
		#define GEODE_STATICS_doResetUnused
		GEODE_AS_STATIC_FUNCTION(doResetUnused) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAlignX
		#define GEODE_STATICS_onAlignX
		GEODE_AS_STATIC_FUNCTION(onAlignX) 
	#endif

	#ifndef GEODE_STATICS_onAlignY
		#define GEODE_STATICS_onAlignY
		GEODE_AS_STATIC_FUNCTION(onAlignY) 
	#endif

	#ifndef GEODE_STATICS_onBuildHelper
		#define GEODE_STATICS_onBuildHelper
		GEODE_AS_STATIC_FUNCTION(onBuildHelper) 
	#endif

	#ifndef GEODE_STATICS_onCopyWColor
		#define GEODE_STATICS_onCopyWColor
		GEODE_AS_STATIC_FUNCTION(onCopyWColor) 
	#endif

	#ifndef GEODE_STATICS_onCreateExtras
		#define GEODE_STATICS_onCreateExtras
		GEODE_AS_STATIC_FUNCTION(onCreateExtras) 
	#endif

	#ifndef GEODE_STATICS_onCreateLoop
		#define GEODE_STATICS_onCreateLoop
		GEODE_AS_STATIC_FUNCTION(onCreateLoop) 
	#endif

	#ifndef GEODE_STATICS_onCreateTemplate
		#define GEODE_STATICS_onCreateTemplate
		GEODE_AS_STATIC_FUNCTION(onCreateTemplate) 
	#endif

	#ifndef GEODE_STATICS_onExitEditor
		#define GEODE_STATICS_onExitEditor
		GEODE_AS_STATIC_FUNCTION(onExitEditor) 
	#endif

	#ifndef GEODE_STATICS_onExitNoSave
		#define GEODE_STATICS_onExitNoSave
		GEODE_AS_STATIC_FUNCTION(onExitNoSave) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onKeybindings
		#define GEODE_STATICS_onKeybindings
		GEODE_AS_STATIC_FUNCTION(onKeybindings) 
	#endif

	#ifndef GEODE_STATICS_onNewGroupX
		#define GEODE_STATICS_onNewGroupX
		GEODE_AS_STATIC_FUNCTION(onNewGroupX) 
	#endif

	#ifndef GEODE_STATICS_onNewGroupY
		#define GEODE_STATICS_onNewGroupY
		GEODE_AS_STATIC_FUNCTION(onNewGroupY) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onPasteWColor
		#define GEODE_STATICS_onPasteWColor
		GEODE_AS_STATIC_FUNCTION(onPasteWColor) 
	#endif

	#ifndef GEODE_STATICS_onReGroup
		#define GEODE_STATICS_onReGroup
		GEODE_AS_STATIC_FUNCTION(onReGroup) 
	#endif

	#ifndef GEODE_STATICS_onResetUnusedColors
		#define GEODE_STATICS_onResetUnusedColors
		GEODE_AS_STATIC_FUNCTION(onResetUnusedColors) 
	#endif

	#ifndef GEODE_STATICS_onResume
		#define GEODE_STATICS_onResume
		GEODE_AS_STATIC_FUNCTION(onResume) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndExit
		#define GEODE_STATICS_onSaveAndExit
		GEODE_AS_STATIC_FUNCTION(onSaveAndExit) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndPlay
		#define GEODE_STATICS_onSaveAndPlay
		GEODE_AS_STATIC_FUNCTION(onSaveAndPlay) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onSelectAllLeft
		#define GEODE_STATICS_onSelectAllLeft
		GEODE_AS_STATIC_FUNCTION(onSelectAllLeft) 
	#endif

	#ifndef GEODE_STATICS_onSelectAllRight
		#define GEODE_STATICS_onSelectAllRight
		GEODE_AS_STATIC_FUNCTION(onSelectAllRight) 
	#endif

	#ifndef GEODE_STATICS_onSong
		#define GEODE_STATICS_onSong
		GEODE_AS_STATIC_FUNCTION(onSong) 
	#endif

	#ifndef GEODE_STATICS_onUnlockAllLayers
		#define GEODE_STATICS_onUnlockAllLayers
		GEODE_AS_STATIC_FUNCTION(onUnlockAllLayers) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugDraw
		#define GEODE_STATICS_toggleDebugDraw
		GEODE_AS_STATIC_FUNCTION(toggleDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorBackground
		#define GEODE_STATICS_toggleEditorBackground
		GEODE_AS_STATIC_FUNCTION(toggleEditorBackground) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorColorMode
		#define GEODE_STATICS_toggleEditorColorMode
		GEODE_AS_STATIC_FUNCTION(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGrid
		#define GEODE_STATICS_toggleEditorGrid
		GEODE_AS_STATIC_FUNCTION(toggleEditorGrid) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGround
		#define GEODE_STATICS_toggleEditorGround
		GEODE_AS_STATIC_FUNCTION(toggleEditorGround) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectDuration
		#define GEODE_STATICS_toggleEffectDuration
		GEODE_AS_STATIC_FUNCTION(toggleEffectDuration) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectLines
		#define GEODE_STATICS_toggleEffectLines
		GEODE_AS_STATIC_FUNCTION(toggleEffectLines) 
	#endif

	#ifndef GEODE_STATICS_toggleFollowPlayer
		#define GEODE_STATICS_toggleFollowPlayer
		GEODE_AS_STATIC_FUNCTION(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleGridOnTop
		#define GEODE_STATICS_toggleGridOnTop
		GEODE_AS_STATIC_FUNCTION(toggleGridOnTop) 
	#endif

	#ifndef GEODE_STATICS_toggleHideInvisible
		#define GEODE_STATICS_toggleHideInvisible
		GEODE_AS_STATIC_FUNCTION(toggleHideInvisible) 
	#endif

	#ifndef GEODE_STATICS_toggleIgnoreDamage
		#define GEODE_STATICS_toggleIgnoreDamage
		GEODE_AS_STATIC_FUNCTION(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_STATICS_togglePlaytestMusic
		#define GEODE_STATICS_togglePlaytestMusic
		GEODE_AS_STATIC_FUNCTION(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewAnim
		#define GEODE_STATICS_togglePreviewAnim
		GEODE_AS_STATIC_FUNCTION(togglePreviewAnim) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewParticles
		#define GEODE_STATICS_togglePreviewParticles
		GEODE_AS_STATIC_FUNCTION(togglePreviewParticles) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewShaders
		#define GEODE_STATICS_togglePreviewShaders
		GEODE_AS_STATIC_FUNCTION(togglePreviewShaders) 
	#endif

	#ifndef GEODE_STATICS_toggleRecordOrder
		#define GEODE_STATICS_toggleRecordOrder
		GEODE_AS_STATIC_FUNCTION(toggleRecordOrder) 
	#endif

	#ifndef GEODE_STATICS_toggleSelectFilter
		#define GEODE_STATICS_toggleSelectFilter
		GEODE_AS_STATIC_FUNCTION(toggleSelectFilter) 
	#endif

	#ifndef GEODE_STATICS_toggleShowObjectInfo
		#define GEODE_STATICS_toggleShowObjectInfo
		GEODE_AS_STATIC_FUNCTION(toggleShowObjectInfo) 
	#endif

	#ifndef GEODE_STATICS_uncheckAllPortals
		#define GEODE_STATICS_uncheckAllPortals
		GEODE_AS_STATIC_FUNCTION(uncheckAllPortals) 
	#endif

	#ifndef GEODE_STATICS_updateSongButton
		#define GEODE_STATICS_updateSongButton
		GEODE_AS_STATIC_FUNCTION(updateSongButton) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doResetUnused
		#define GEODE_CONCEPT_CHECK_doResetUnused
		GEODE_CONCEPT_FUNCTION_CHECK(doResetUnused) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAlignX
		#define GEODE_CONCEPT_CHECK_onAlignX
		GEODE_CONCEPT_FUNCTION_CHECK(onAlignX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAlignY
		#define GEODE_CONCEPT_CHECK_onAlignY
		GEODE_CONCEPT_FUNCTION_CHECK(onAlignY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBuildHelper
		#define GEODE_CONCEPT_CHECK_onBuildHelper
		GEODE_CONCEPT_FUNCTION_CHECK(onBuildHelper) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyWColor
		#define GEODE_CONCEPT_CHECK_onCopyWColor
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyWColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateExtras
		#define GEODE_CONCEPT_CHECK_onCreateExtras
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateExtras) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateLoop
		#define GEODE_CONCEPT_CHECK_onCreateLoop
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateLoop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateTemplate
		#define GEODE_CONCEPT_CHECK_onCreateTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitEditor
		#define GEODE_CONCEPT_CHECK_onExitEditor
		GEODE_CONCEPT_FUNCTION_CHECK(onExitEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitNoSave
		#define GEODE_CONCEPT_CHECK_onExitNoSave
		GEODE_CONCEPT_FUNCTION_CHECK(onExitNoSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onKeybindings
		#define GEODE_CONCEPT_CHECK_onKeybindings
		GEODE_CONCEPT_FUNCTION_CHECK(onKeybindings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewGroupX
		#define GEODE_CONCEPT_CHECK_onNewGroupX
		GEODE_CONCEPT_FUNCTION_CHECK(onNewGroupX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewGroupY
		#define GEODE_CONCEPT_CHECK_onNewGroupY
		GEODE_CONCEPT_FUNCTION_CHECK(onNewGroupY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteWColor
		#define GEODE_CONCEPT_CHECK_onPasteWColor
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteWColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReGroup
		#define GEODE_CONCEPT_CHECK_onReGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onReGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetUnusedColors
		#define GEODE_CONCEPT_CHECK_onResetUnusedColors
		GEODE_CONCEPT_FUNCTION_CHECK(onResetUnusedColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResume
		#define GEODE_CONCEPT_CHECK_onResume
		GEODE_CONCEPT_FUNCTION_CHECK(onResume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveAndExit
		#define GEODE_CONCEPT_CHECK_onSaveAndExit
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveAndExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveAndPlay
		#define GEODE_CONCEPT_CHECK_onSaveAndPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveAndPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAllLeft
		#define GEODE_CONCEPT_CHECK_onSelectAllLeft
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAllLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAllRight
		#define GEODE_CONCEPT_CHECK_onSelectAllRight
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAllRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSong
		#define GEODE_CONCEPT_CHECK_onSong
		GEODE_CONCEPT_FUNCTION_CHECK(onSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlockAllLayers
		#define GEODE_CONCEPT_CHECK_onUnlockAllLayers
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlockAllLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep2
		#define GEODE_CONCEPT_CHECK_playStep2
		GEODE_CONCEPT_FUNCTION_CHECK(playStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep3
		#define GEODE_CONCEPT_CHECK_playStep3
		GEODE_CONCEPT_FUNCTION_CHECK(playStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevel
		#define GEODE_CONCEPT_CHECK_saveLevel
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDebugDraw
		#define GEODE_CONCEPT_CHECK_toggleDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorBackground
		#define GEODE_CONCEPT_CHECK_toggleEditorBackground
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorColorMode
		#define GEODE_CONCEPT_CHECK_toggleEditorColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorGrid
		#define GEODE_CONCEPT_CHECK_toggleEditorGrid
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorGround
		#define GEODE_CONCEPT_CHECK_toggleEditorGround
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEffectDuration
		#define GEODE_CONCEPT_CHECK_toggleEffectDuration
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEffectDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEffectLines
		#define GEODE_CONCEPT_CHECK_toggleEffectLines
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEffectLines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFollowPlayer
		#define GEODE_CONCEPT_CHECK_toggleFollowPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGridOnTop
		#define GEODE_CONCEPT_CHECK_toggleGridOnTop
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGridOnTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleHideInvisible
		#define GEODE_CONCEPT_CHECK_toggleHideInvisible
		GEODE_CONCEPT_FUNCTION_CHECK(toggleHideInvisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		#define GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		GEODE_CONCEPT_FUNCTION_CHECK(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlaytestMusic
		#define GEODE_CONCEPT_CHECK_togglePlaytestMusic
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePreviewAnim
		#define GEODE_CONCEPT_CHECK_togglePreviewAnim
		GEODE_CONCEPT_FUNCTION_CHECK(togglePreviewAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePreviewParticles
		#define GEODE_CONCEPT_CHECK_togglePreviewParticles
		GEODE_CONCEPT_FUNCTION_CHECK(togglePreviewParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePreviewShaders
		#define GEODE_CONCEPT_CHECK_togglePreviewShaders
		GEODE_CONCEPT_FUNCTION_CHECK(togglePreviewShaders) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleRecordOrder
		#define GEODE_CONCEPT_CHECK_toggleRecordOrder
		GEODE_CONCEPT_FUNCTION_CHECK(toggleRecordOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSelectFilter
		#define GEODE_CONCEPT_CHECK_toggleSelectFilter
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSelectFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleShowObjectInfo
		#define GEODE_CONCEPT_CHECK_toggleShowObjectInfo
		GEODE_CONCEPT_FUNCTION_CHECK(toggleShowObjectInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uncheckAllPortals
		#define GEODE_CONCEPT_CHECK_uncheckAllPortals
		GEODE_CONCEPT_FUNCTION_CHECK(uncheckAllPortals) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongButton
		#define GEODE_CONCEPT_CHECK_updateSongButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorPauseLayer> : ModifyBase<ModifyDerive<Der, EditorPauseLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorPauseLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorPauseLayer>>::ModifyBase;
		using Base = EditorPauseLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LevelEditorLayer*>::func(&EditorPauseLayer::create)), Default, EditorPauseLayer, create, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorPauseLayer::keyBackClicked)), Default, EditorPauseLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::enumKeyCodes, double>::func(&EditorPauseLayer::keyDown)), Default, EditorPauseLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EditorPauseLayer::customSetup)), Default, EditorPauseLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&EditorPauseLayer::FLAlert_Clicked)), Default, EditorPauseLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorPauseLayer::doResetUnused)), Default, EditorPauseLayer, doResetUnused, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<LevelEditorLayer*>::func(&EditorPauseLayer::init)), Default, EditorPauseLayer, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onAlignX)), Default, EditorPauseLayer, onAlignX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onAlignY)), Default, EditorPauseLayer, onAlignY, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onBuildHelper)), Default, EditorPauseLayer, onBuildHelper, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onCopyWColor)), Default, EditorPauseLayer, onCopyWColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onCreateExtras)), Default, EditorPauseLayer, onCreateExtras, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onCreateLoop)), Default, EditorPauseLayer, onCreateLoop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onCreateTemplate)), Default, EditorPauseLayer, onCreateTemplate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onExitEditor)), Default, EditorPauseLayer, onExitEditor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onExitNoSave)), Default, EditorPauseLayer, onExitNoSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onHelp)), Default, EditorPauseLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onKeybindings)), Default, EditorPauseLayer, onKeybindings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onNewGroupX)), Default, EditorPauseLayer, onNewGroupX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onNewGroupY)), Default, EditorPauseLayer, onNewGroupY, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onOptions)), Default, EditorPauseLayer, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onPasteWColor)), Default, EditorPauseLayer, onPasteWColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onReGroup)), Default, EditorPauseLayer, onReGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onResetUnusedColors)), Default, EditorPauseLayer, onResetUnusedColors, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onResume)), Default, EditorPauseLayer, onResume, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onSave)), Default, EditorPauseLayer, onSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onSaveAndExit)), Default, EditorPauseLayer, onSaveAndExit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onSaveAndPlay)), Default, EditorPauseLayer, onSaveAndPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onSelectAll)), Default, EditorPauseLayer, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onSelectAllLeft)), Default, EditorPauseLayer, onSelectAllLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onSelectAllRight)), Default, EditorPauseLayer, onSelectAllRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onSong)), Default, EditorPauseLayer, onSong, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::onUnlockAllLayers)), Default, EditorPauseLayer, onUnlockAllLayers, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorPauseLayer::playStep2)), Default, EditorPauseLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorPauseLayer::playStep3)), Default, EditorPauseLayer, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorPauseLayer::saveLevel)), Default, EditorPauseLayer, saveLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleDebugDraw)), Default, EditorPauseLayer, toggleDebugDraw, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleEditorBackground)), Default, EditorPauseLayer, toggleEditorBackground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleEditorColorMode)), Default, EditorPauseLayer, toggleEditorColorMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleEditorGrid)), Default, EditorPauseLayer, toggleEditorGrid, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleEditorGround)), Default, EditorPauseLayer, toggleEditorGround, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleEffectDuration)), Default, EditorPauseLayer, toggleEffectDuration, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleEffectLines)), Default, EditorPauseLayer, toggleEffectLines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleFollowPlayer)), Default, EditorPauseLayer, toggleFollowPlayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleGridOnTop)), Default, EditorPauseLayer, toggleGridOnTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleHideInvisible)), Default, EditorPauseLayer, toggleHideInvisible, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleIgnoreDamage)), Default, EditorPauseLayer, toggleIgnoreDamage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::togglePlaytestMusic)), Default, EditorPauseLayer, togglePlaytestMusic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::togglePreviewAnim)), Default, EditorPauseLayer, togglePreviewAnim, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::togglePreviewParticles)), Default, EditorPauseLayer, togglePreviewParticles, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::togglePreviewShaders)), Default, EditorPauseLayer, togglePreviewShaders, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleRecordOrder)), Default, EditorPauseLayer, toggleRecordOrder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleSelectFilter)), Default, EditorPauseLayer, toggleSelectFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::toggleShowObjectInfo)), Default, EditorPauseLayer, toggleShowObjectInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EditorPauseLayer::uncheckAllPortals)), Default, EditorPauseLayer, uncheckAllPortals, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EditorPauseLayer::updateSongButton)), Default, EditorPauseLayer, updateSongButton, )
		}
	};
}
