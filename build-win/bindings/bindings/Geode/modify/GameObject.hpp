#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithFrame
		#define GEODE_STATICS_createWithFrame
		GEODE_AS_STATIC_FUNCTION(createWithFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithKey
		#define GEODE_STATICS_createWithKey
		GEODE_AS_STATIC_FUNCTION(createWithKey) 
	#endif

	#ifndef GEODE_STATICS_objectFromVector
		#define GEODE_STATICS_objectFromVector
		GEODE_AS_STATIC_FUNCTION(objectFromVector) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_activateObject
		#define GEODE_STATICS_activateObject
		GEODE_AS_STATIC_FUNCTION(activateObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_transferObjectRect
		#define GEODE_STATICS_transferObjectRect
		GEODE_AS_STATIC_FUNCTION(transferObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect
		#define GEODE_STATICS_getObjectRect
		GEODE_AS_STATIC_FUNCTION(getObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect2
		#define GEODE_STATICS_getObjectRect2
		GEODE_AS_STATIC_FUNCTION(getObjectRect2) 
	#endif

	#ifndef GEODE_STATICS_getObjectTextureRect
		#define GEODE_STATICS_getObjectTextureRect
		GEODE_AS_STATIC_FUNCTION(getObjectTextureRect) 
	#endif

	#ifndef GEODE_STATICS_getRealPosition
		#define GEODE_STATICS_getRealPosition
		GEODE_AS_STATIC_FUNCTION(getRealPosition) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

	#ifndef GEODE_STATICS_updateStartValues
		#define GEODE_STATICS_updateStartValues
		GEODE_AS_STATIC_FUNCTION(updateStartValues) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_isFlipX
		#define GEODE_STATICS_isFlipX
		GEODE_AS_STATIC_FUNCTION(isFlipX) 
	#endif

	#ifndef GEODE_STATICS_isFlipY
		#define GEODE_STATICS_isFlipY
		GEODE_AS_STATIC_FUNCTION(isFlipY) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setRScale
		#define GEODE_STATICS_setRScale
		GEODE_AS_STATIC_FUNCTION(setRScale) 
	#endif

	#ifndef GEODE_STATICS_getRScaleX
		#define GEODE_STATICS_getRScaleX
		GEODE_AS_STATIC_FUNCTION(getRScaleX) 
	#endif

	#ifndef GEODE_STATICS_getRScaleY
		#define GEODE_STATICS_getRScaleY
		GEODE_AS_STATIC_FUNCTION(getRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setRRotation
		#define GEODE_STATICS_setRRotation
		GEODE_AS_STATIC_FUNCTION(setRRotation) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_setGlowColor
		#define GEODE_STATICS_setGlowColor
		GEODE_AS_STATIC_FUNCTION(setGlowColor) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_selectObject
		#define GEODE_STATICS_selectObject
		GEODE_AS_STATIC_FUNCTION(selectObject) 
	#endif

	#ifndef GEODE_STATICS_getOrientedBox
		#define GEODE_STATICS_getOrientedBox
		GEODE_AS_STATIC_FUNCTION(getOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_updateOrientedBox
		#define GEODE_STATICS_updateOrientedBox
		GEODE_AS_STATIC_FUNCTION(updateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_getObjectRotation
		#define GEODE_STATICS_getObjectRotation
		GEODE_AS_STATIC_FUNCTION(getObjectRotation) 
	#endif

	#ifndef GEODE_STATICS_updateMainColor
		#define GEODE_STATICS_updateMainColor
		GEODE_AS_STATIC_FUNCTION(updateMainColor) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColor
		#define GEODE_STATICS_updateSecondaryColor
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_saveActiveColors
		#define GEODE_STATICS_saveActiveColors
		GEODE_AS_STATIC_FUNCTION(saveActiveColors) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_updateParticleColor
		#define GEODE_STATICS_updateParticleColor
		GEODE_AS_STATIC_FUNCTION(updateParticleColor) 
	#endif

	#ifndef GEODE_STATICS_updateParticleOpacity
		#define GEODE_STATICS_updateParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_getObjectRectDirty
		#define GEODE_STATICS_getObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(getObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setObjectRectDirty
		#define GEODE_STATICS_setObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(setObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getOrientedRectDirty
		#define GEODE_STATICS_getOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(getOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setOrientedRectDirty
		#define GEODE_STATICS_setOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(setOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

	#ifndef GEODE_STATICS_getStartPos
		#define GEODE_STATICS_getStartPos
		GEODE_AS_STATIC_FUNCTION(getStartPos) 
	#endif

	#ifndef GEODE_STATICS_addColorSprite
		#define GEODE_STATICS_addColorSprite
		GEODE_AS_STATIC_FUNCTION(addColorSprite) 
	#endif

	#ifndef GEODE_STATICS_addColorSpriteToParent
		#define GEODE_STATICS_addColorSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addColorSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_addColorSpriteToSelf
		#define GEODE_STATICS_addColorSpriteToSelf
		GEODE_AS_STATIC_FUNCTION(addColorSpriteToSelf) 
	#endif

	#ifndef GEODE_STATICS_addCustomChild
		#define GEODE_STATICS_addCustomChild
		GEODE_AS_STATIC_FUNCTION(addCustomChild) 
	#endif

	#ifndef GEODE_STATICS_addCustomColorChild
		#define GEODE_STATICS_addCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_addEmptyGlow
		#define GEODE_STATICS_addEmptyGlow
		GEODE_AS_STATIC_FUNCTION(addEmptyGlow) 
	#endif

	#ifndef GEODE_STATICS_addGlow
		#define GEODE_STATICS_addGlow
		GEODE_AS_STATIC_FUNCTION(addGlow) 
	#endif

	#ifndef GEODE_STATICS_addInternalCustomColorChild
		#define GEODE_STATICS_addInternalCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_addInternalGlowChild
		#define GEODE_STATICS_addInternalGlowChild
		GEODE_AS_STATIC_FUNCTION(addInternalGlowChild) 
	#endif

	#ifndef GEODE_STATICS_addRotation
		#define GEODE_STATICS_addRotation
		GEODE_AS_STATIC_FUNCTION(addRotation) 
	#endif

	#ifndef GEODE_STATICS_addToColorGroup
		#define GEODE_STATICS_addToColorGroup
		GEODE_AS_STATIC_FUNCTION(addToColorGroup) 
	#endif

	#ifndef GEODE_STATICS_colorForMode
		#define GEODE_STATICS_colorForMode
		GEODE_AS_STATIC_FUNCTION(colorForMode) 
	#endif

	#ifndef GEODE_STATICS_commonInteractiveSetup
		#define GEODE_STATICS_commonInteractiveSetup
		GEODE_AS_STATIC_FUNCTION(commonInteractiveSetup) 
	#endif

	#ifndef GEODE_STATICS_commonSetup
		#define GEODE_STATICS_commonSetup
		GEODE_AS_STATIC_FUNCTION(commonSetup) 
	#endif

	#ifndef GEODE_STATICS_copyGroups
		#define GEODE_STATICS_copyGroups
		GEODE_AS_STATIC_FUNCTION(copyGroups) 
	#endif

	#ifndef GEODE_STATICS_createAndAddParticle
		#define GEODE_STATICS_createAndAddParticle
		GEODE_AS_STATIC_FUNCTION(createAndAddParticle) 
	#endif

	#ifndef GEODE_STATICS_createGlow
		#define GEODE_STATICS_createGlow
		GEODE_AS_STATIC_FUNCTION(createGlow) 
	#endif

	#ifndef GEODE_STATICS_createGroupContainer
		#define GEODE_STATICS_createGroupContainer
		GEODE_AS_STATIC_FUNCTION(createGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_determineSlopeDirection
		#define GEODE_STATICS_determineSlopeDirection
		GEODE_AS_STATIC_FUNCTION(determineSlopeDirection) 
	#endif

	#ifndef GEODE_STATICS_duplicateAttributes
		#define GEODE_STATICS_duplicateAttributes
		GEODE_AS_STATIC_FUNCTION(duplicateAttributes) 
	#endif

	#ifndef GEODE_STATICS_duplicateColorMode
		#define GEODE_STATICS_duplicateColorMode
		GEODE_AS_STATIC_FUNCTION(duplicateColorMode) 
	#endif

	#ifndef GEODE_STATICS_duplicateValues
		#define GEODE_STATICS_duplicateValues
		GEODE_AS_STATIC_FUNCTION(duplicateValues) 
	#endif

	#ifndef GEODE_STATICS_editorColorForMode
		#define GEODE_STATICS_editorColorForMode
		GEODE_AS_STATIC_FUNCTION(editorColorForMode) 
	#endif

	#ifndef GEODE_STATICS_getActiveColorForMode
		#define GEODE_STATICS_getActiveColorForMode
		GEODE_AS_STATIC_FUNCTION(getActiveColorForMode) 
	#endif

	#ifndef GEODE_STATICS_getBoxOffset
		#define GEODE_STATICS_getBoxOffset
		GEODE_AS_STATIC_FUNCTION(getBoxOffset) 
	#endif

	#ifndef GEODE_STATICS_getColorFrame
		#define GEODE_STATICS_getColorFrame
		GEODE_AS_STATIC_FUNCTION(getColorFrame) 
	#endif

	#ifndef GEODE_STATICS_getColorKey
		#define GEODE_STATICS_getColorKey
		GEODE_AS_STATIC_FUNCTION(getColorKey) 
	#endif

	#ifndef GEODE_STATICS_getGlowFrame
		#define GEODE_STATICS_getGlowFrame
		GEODE_AS_STATIC_FUNCTION(getGlowFrame) 
	#endif

	#ifndef GEODE_STATICS_getObjectDirection
		#define GEODE_STATICS_getObjectDirection
		GEODE_AS_STATIC_FUNCTION(getObjectDirection) 
	#endif

	#ifndef GEODE_STATICS_getParentMode
		#define GEODE_STATICS_getParentMode
		GEODE_AS_STATIC_FUNCTION(getParentMode) 
	#endif

	#ifndef GEODE_STATICS_getRelativeSpriteColor
		#define GEODE_STATICS_getRelativeSpriteColor
		GEODE_AS_STATIC_FUNCTION(getRelativeSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_getScalePosDelta
		#define GEODE_STATICS_getScalePosDelta
		GEODE_AS_STATIC_FUNCTION(getScalePosDelta) 
	#endif

	#ifndef GEODE_STATICS_groupOpacityMod
		#define GEODE_STATICS_groupOpacityMod
		GEODE_AS_STATIC_FUNCTION(groupOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_ignoreEditorDuration
		#define GEODE_STATICS_ignoreEditorDuration
		GEODE_AS_STATIC_FUNCTION(ignoreEditorDuration) 
	#endif

	#ifndef GEODE_STATICS_isBasicTrigger
		#define GEODE_STATICS_isBasicTrigger
		GEODE_AS_STATIC_FUNCTION(isBasicTrigger) 
	#endif

	#ifndef GEODE_STATICS_isFacingDown
		#define GEODE_STATICS_isFacingDown
		GEODE_AS_STATIC_FUNCTION(isFacingDown) 
	#endif

	#ifndef GEODE_STATICS_isFacingLeft
		#define GEODE_STATICS_isFacingLeft
		GEODE_AS_STATIC_FUNCTION(isFacingLeft) 
	#endif

	#ifndef GEODE_STATICS_isSpawnableTrigger
		#define GEODE_STATICS_isSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isSpecialObject
		#define GEODE_STATICS_isSpecialObject
		GEODE_AS_STATIC_FUNCTION(isSpecialObject) 
	#endif

	#ifndef GEODE_STATICS_isTrigger
		#define GEODE_STATICS_isTrigger
		GEODE_AS_STATIC_FUNCTION(isTrigger) 
	#endif

	#ifndef GEODE_STATICS_loadGroupsFromString
		#define GEODE_STATICS_loadGroupsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupsFromString) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_perspectiveColorFrame
		#define GEODE_STATICS_perspectiveColorFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveColorFrame) 
	#endif

	#ifndef GEODE_STATICS_perspectiveFrame
		#define GEODE_STATICS_perspectiveFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveFrame) 
	#endif

	#ifndef GEODE_STATICS_playDestroyObjectAnim
		#define GEODE_STATICS_playDestroyObjectAnim
		GEODE_AS_STATIC_FUNCTION(playDestroyObjectAnim) 
	#endif

	#ifndef GEODE_STATICS_playPickupAnimation
		#define GEODE_STATICS_playPickupAnimation
		GEODE_AS_STATIC_FUNCTION(playPickupAnimation) 
	#endif

	#ifndef GEODE_STATICS_playShineEffect
		#define GEODE_STATICS_playShineEffect
		GEODE_AS_STATIC_FUNCTION(playShineEffect) 
	#endif

	#ifndef GEODE_STATICS_setAreaOpacity
		#define GEODE_STATICS_setAreaOpacity
		GEODE_AS_STATIC_FUNCTION(setAreaOpacity) 
	#endif

	#ifndef GEODE_STATICS_setupPixelScale
		#define GEODE_STATICS_setupPixelScale
		GEODE_AS_STATIC_FUNCTION(setupPixelScale) 
	#endif

	#ifndef GEODE_STATICS_setupSpriteSize
		#define GEODE_STATICS_setupSpriteSize
		GEODE_AS_STATIC_FUNCTION(setupSpriteSize) 
	#endif

	#ifndef GEODE_STATICS_shouldBlendColor
		#define GEODE_STATICS_shouldBlendColor
		GEODE_AS_STATIC_FUNCTION(shouldBlendColor) 
	#endif

	#ifndef GEODE_STATICS_shouldLockX
		#define GEODE_STATICS_shouldLockX
		GEODE_AS_STATIC_FUNCTION(shouldLockX) 
	#endif

	#ifndef GEODE_STATICS_slopeYPos
		#define GEODE_STATICS_slopeYPos
		GEODE_AS_STATIC_FUNCTION(slopeYPos) 
	#endif

	#ifndef GEODE_STATICS_spawnDefaultPickupParticle
		#define GEODE_STATICS_spawnDefaultPickupParticle
		GEODE_AS_STATIC_FUNCTION(spawnDefaultPickupParticle) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleX
		#define GEODE_STATICS_updateCustomScaleX
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleX) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleY
		#define GEODE_STATICS_updateCustomScaleY
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleY) 
	#endif

	#ifndef GEODE_STATICS_updateIsOriented
		#define GEODE_STATICS_updateIsOriented
		GEODE_AS_STATIC_FUNCTION(updateIsOriented) 
	#endif

	#ifndef GEODE_STATICS_updateObjectEditorColor
		#define GEODE_STATICS_updateObjectEditorColor
		GEODE_AS_STATIC_FUNCTION(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_STATICS_updateStartPos
		#define GEODE_STATICS_updateStartPos
		GEODE_AS_STATIC_FUNCTION(updateStartPos) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithFrame
		#define GEODE_CONCEPT_CHECK_createWithFrame
		GEODE_CONCEPT_FUNCTION_CHECK(createWithFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithKey
		#define GEODE_CONCEPT_CHECK_createWithKey
		GEODE_CONCEPT_FUNCTION_CHECK(createWithKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBasicEnterEffect
		#define GEODE_CONCEPT_CHECK_isBasicEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(isBasicEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromVector
		#define GEODE_CONCEPT_CHECK_objectFromVector
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMID
		#define GEODE_CONCEPT_CHECK_resetMID
		GEODE_CONCEPT_FUNCTION_CHECK(resetMID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleX
		#define GEODE_CONCEPT_CHECK_setScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleY
		#define GEODE_CONCEPT_CHECK_setScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationX
		#define GEODE_CONCEPT_CHECK_setRotationX
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationY
		#define GEODE_CONCEPT_CHECK_setRotationY
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChildColor
		#define GEODE_CONCEPT_CHECK_setChildColor
		GEODE_CONCEPT_FUNCTION_CHECK(setChildColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCustomSprites
		#define GEODE_CONCEPT_CHECK_setupCustomSprites
		GEODE_CONCEPT_FUNCTION_CHECK(setupCustomSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMainSpriteToParent
		#define GEODE_CONCEPT_CHECK_addMainSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateObject
		#define GEODE_CONCEPT_CHECK_activateObject
		GEODE_CONCEPT_FUNCTION_CHECK(activateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateObject
		#define GEODE_CONCEPT_CHECK_deactivateObject
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transferObjectRect
		#define GEODE_CONCEPT_CHECK_transferObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(transferObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect
		#define GEODE_CONCEPT_CHECK_getObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect2
		#define GEODE_CONCEPT_CHECK_getObjectRect2
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectTextureRect
		#define GEODE_CONCEPT_CHECK_getObjectTextureRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectTextureRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealPosition
		#define GEODE_CONCEPT_CHECK_getRealPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getRealPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPos
		#define GEODE_CONCEPT_CHECK_setStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStartValues
		#define GEODE_CONCEPT_CHECK_updateStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimParticle
		#define GEODE_CONCEPT_CHECK_claimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimParticle
		#define GEODE_CONCEPT_CHECK_unclaimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_particleWasActivated
		#define GEODE_CONCEPT_CHECK_particleWasActivated
		GEODE_CONCEPT_FUNCTION_CHECK(particleWasActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipX
		#define GEODE_CONCEPT_CHECK_isFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipY
		#define GEODE_CONCEPT_CHECK_isFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleX
		#define GEODE_CONCEPT_CHECK_setRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleY
		#define GEODE_CONCEPT_CHECK_setRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScale
		#define GEODE_CONCEPT_CHECK_setRScale
		GEODE_CONCEPT_FUNCTION_CHECK(setRScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRScaleX
		#define GEODE_CONCEPT_CHECK_getRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(getRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRScaleY
		#define GEODE_CONCEPT_CHECK_getRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(getRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRRotation
		#define GEODE_CONCEPT_CHECK_setRRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectColor
		#define GEODE_CONCEPT_CHECK_setObjectColor
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlowColor
		#define GEODE_CONCEPT_CHECK_setGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(setGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreObject
		#define GEODE_CONCEPT_CHECK_restoreObject
		GEODE_CONCEPT_FUNCTION_CHECK(restoreObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationTriggered
		#define GEODE_CONCEPT_CHECK_animationTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(animationTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObject
		#define GEODE_CONCEPT_CHECK_selectObject
		GEODE_CONCEPT_FUNCTION_CHECK(selectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatedByPlayer
		#define GEODE_CONCEPT_CHECK_activatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(activatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		#define GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivated
		#define GEODE_CONCEPT_CHECK_hasBeenActivated
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedBox
		#define GEODE_CONCEPT_CHECK_getOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOrientedBox
		#define GEODE_CONCEPT_CHECK_updateOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(updateOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRotation
		#define GEODE_CONCEPT_CHECK_getObjectRotation
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainColor
		#define GEODE_CONCEPT_CHECK_updateMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryColor
		#define GEODE_CONCEPT_CHECK_updateSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveActiveColors
		#define GEODE_CONCEPT_CHECK_saveActiveColors
		GEODE_CONCEPT_FUNCTION_CHECK(saveActiveColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnXPosition
		#define GEODE_CONCEPT_CHECK_spawnXPosition
		GEODE_CONCEPT_FUNCTION_CHECK(spawnXPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canAllowMultiActivate
		#define GEODE_CONCEPT_CHECK_canAllowMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blendModeChanged
		#define GEODE_CONCEPT_CHECK_blendModeChanged
		GEODE_CONCEPT_FUNCTION_CHECK(blendModeChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleColor
		#define GEODE_CONCEPT_CHECK_updateParticleColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateMainParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateSecondaryParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canReverse
		#define GEODE_CONCEPT_CHECK_canReverse
		GEODE_CONCEPT_FUNCTION_CHECK(canReverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		#define GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canBeOrdered
		#define GEODE_CONCEPT_CHECK_canBeOrdered
		GEODE_CONCEPT_FUNCTION_CHECK(canBeOrdered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectLabel
		#define GEODE_CONCEPT_CHECK_getObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectLabel
		#define GEODE_CONCEPT_CHECK_setObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDrawEditorHitbox
		#define GEODE_CONCEPT_CHECK_shouldDrawEditorHitbox
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDrawEditorHitbox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		#define GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasRotateAction
		#define GEODE_CONCEPT_CHECK_getHasRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(getHasRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canMultiActivate
		#define GEODE_CONCEPT_CHECK_canMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextKerning
		#define GEODE_CONCEPT_CHECK_updateTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextKerning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextKerning
		#define GEODE_CONCEPT_CHECK_getTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(getTextKerning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRectDirty
		#define GEODE_CONCEPT_CHECK_getObjectRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectRectDirty
		#define GEODE_CONCEPT_CHECK_setObjectRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedRectDirty
		#define GEODE_CONCEPT_CHECK_getOrientedRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOrientedRectDirty
		#define GEODE_CONCEPT_CHECK_setOrientedRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setOrientedRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setType
		#define GEODE_CONCEPT_CHECK_setType
		GEODE_CONCEPT_FUNCTION_CHECK(setType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartPos
		#define GEODE_CONCEPT_CHECK_getStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(getStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSprite
		#define GEODE_CONCEPT_CHECK_addColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSpriteToParent
		#define GEODE_CONCEPT_CHECK_addColorSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSpriteToParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSpriteToSelf
		#define GEODE_CONCEPT_CHECK_addColorSpriteToSelf
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSpriteToSelf) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomBlackChild
		#define GEODE_CONCEPT_CHECK_addCustomBlackChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomBlackChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomChild
		#define GEODE_CONCEPT_CHECK_addCustomChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomColorChild
		#define GEODE_CONCEPT_CHECK_addCustomColorChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomColorChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addEmptyGlow
		#define GEODE_CONCEPT_CHECK_addEmptyGlow
		GEODE_CONCEPT_FUNCTION_CHECK(addEmptyGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGlow
		#define GEODE_CONCEPT_CHECK_addGlow
		GEODE_CONCEPT_FUNCTION_CHECK(addGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalChild
		#define GEODE_CONCEPT_CHECK_addInternalChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalCustomColorChild
		#define GEODE_CONCEPT_CHECK_addInternalCustomColorChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalGlowChild
		#define GEODE_CONCEPT_CHECK_addInternalGlowChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalGlowChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope01
		#define GEODE_CONCEPT_CHECK_addNewSlope01
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope01Glow
		#define GEODE_CONCEPT_CHECK_addNewSlope01Glow
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope01Glow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope02
		#define GEODE_CONCEPT_CHECK_addNewSlope02
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope02Glow
		#define GEODE_CONCEPT_CHECK_addNewSlope02Glow
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope02Glow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRotation
		#define GEODE_CONCEPT_CHECK_addRotation
		GEODE_CONCEPT_FUNCTION_CHECK(addRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToColorGroup
		#define GEODE_CONCEPT_CHECK_addToColorGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToColorGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToCustomScaleX
		#define GEODE_CONCEPT_CHECK_addToCustomScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(addToCustomScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToCustomScaleY
		#define GEODE_CONCEPT_CHECK_addToCustomScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(addToCustomScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToOpacityGroup
		#define GEODE_CONCEPT_CHECK_addToOpacityGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToOpacityGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToTempOffset
		#define GEODE_CONCEPT_CHECK_addToTempOffset
		GEODE_CONCEPT_FUNCTION_CHECK(addToTempOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_assignUniqueID
		#define GEODE_CONCEPT_CHECK_assignUniqueID
		GEODE_CONCEPT_FUNCTION_CHECK(assignUniqueID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_belongsToGroup
		#define GEODE_CONCEPT_CHECK_belongsToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(belongsToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateOrientedBox
		#define GEODE_CONCEPT_CHECK_calculateOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(calculateOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeCustomColor
		#define GEODE_CONCEPT_CHECK_canChangeCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeMainColor
		#define GEODE_CONCEPT_CHECK_canChangeMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeSecondaryColor
		#define GEODE_CONCEPT_CHECK_canChangeSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canRotateFree
		#define GEODE_CONCEPT_CHECK_canRotateFree
		GEODE_CONCEPT_FUNCTION_CHECK(canRotateFree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForMode
		#define GEODE_CONCEPT_CHECK_colorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(colorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commonInteractiveSetup
		#define GEODE_CONCEPT_CHECK_commonInteractiveSetup
		GEODE_CONCEPT_FUNCTION_CHECK(commonInteractiveSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commonSetup
		#define GEODE_CONCEPT_CHECK_commonSetup
		GEODE_CONCEPT_FUNCTION_CHECK(commonSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyGroups
		#define GEODE_CONCEPT_CHECK_copyGroups
		GEODE_CONCEPT_FUNCTION_CHECK(copyGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndAddParticle
		#define GEODE_CONCEPT_CHECK_createAndAddParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createAndAddParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createColorGroupContainer
		#define GEODE_CONCEPT_CHECK_createColorGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(createColorGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGlow
		#define GEODE_CONCEPT_CHECK_createGlow
		GEODE_CONCEPT_FUNCTION_CHECK(createGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGroupContainer
		#define GEODE_CONCEPT_CHECK_createGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(createGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createOpacityGroupContainer
		#define GEODE_CONCEPT_CHECK_createOpacityGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(createOpacityGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpriteColor
		#define GEODE_CONCEPT_CHECK_createSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(createSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectObject
		#define GEODE_CONCEPT_CHECK_deselectObject
		GEODE_CONCEPT_FUNCTION_CHECK(deselectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyObject
		#define GEODE_CONCEPT_CHECK_destroyObject
		GEODE_CONCEPT_FUNCTION_CHECK(destroyObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineSlopeDirection
		#define GEODE_CONCEPT_CHECK_determineSlopeDirection
		GEODE_CONCEPT_FUNCTION_CHECK(determineSlopeDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didScaleXChange
		#define GEODE_CONCEPT_CHECK_didScaleXChange
		GEODE_CONCEPT_FUNCTION_CHECK(didScaleXChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didScaleYChange
		#define GEODE_CONCEPT_CHECK_didScaleYChange
		GEODE_CONCEPT_FUNCTION_CHECK(didScaleYChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dirtifyObjectPos
		#define GEODE_CONCEPT_CHECK_dirtifyObjectPos
		GEODE_CONCEPT_FUNCTION_CHECK(dirtifyObjectPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dirtifyObjectRect
		#define GEODE_CONCEPT_CHECK_dirtifyObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(dirtifyObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableObject
		#define GEODE_CONCEPT_CHECK_disableObject
		GEODE_CONCEPT_FUNCTION_CHECK(disableObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dontCountTowardsLimit
		#define GEODE_CONCEPT_CHECK_dontCountTowardsLimit
		GEODE_CONCEPT_FUNCTION_CHECK(dontCountTowardsLimit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateAttributes
		#define GEODE_CONCEPT_CHECK_duplicateAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateColorMode
		#define GEODE_CONCEPT_CHECK_duplicateColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateValues
		#define GEODE_CONCEPT_CHECK_duplicateValues
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorColorForCustomMode
		#define GEODE_CONCEPT_CHECK_editorColorForCustomMode
		GEODE_CONCEPT_FUNCTION_CHECK(editorColorForCustomMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorColorForMode
		#define GEODE_CONCEPT_CHECK_editorColorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(editorColorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastRotateObject
		#define GEODE_CONCEPT_CHECK_fastRotateObject
		GEODE_CONCEPT_FUNCTION_CHECK(fastRotateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveColorForMode
		#define GEODE_CONCEPT_CHECK_getActiveColorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveColorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBallFrame
		#define GEODE_CONCEPT_CHECK_getBallFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getBallFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoundingRect
		#define GEODE_CONCEPT_CHECK_getBoundingRect
		GEODE_CONCEPT_FUNCTION_CHECK(getBoundingRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoxOffset
		#define GEODE_CONCEPT_CHECK_getBoxOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getBoxOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorFrame
		#define GEODE_CONCEPT_CHECK_getColorFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getColorFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorIndex
		#define GEODE_CONCEPT_CHECK_getColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorKey
		#define GEODE_CONCEPT_CHECK_getColorKey
		GEODE_CONCEPT_FUNCTION_CHECK(getColorKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomZLayer
		#define GEODE_CONCEPT_CHECK_getCustomZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlowFrame
		#define GEODE_CONCEPT_CHECK_getGlowFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getGlowFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupDisabled
		#define GEODE_CONCEPT_CHECK_getGroupDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupID
		#define GEODE_CONCEPT_CHECK_getGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupString
		#define GEODE_CONCEPT_CHECK_getGroupString
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastPosition
		#define GEODE_CONCEPT_CHECK_getLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainColor
		#define GEODE_CONCEPT_CHECK_getMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(getMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainColorMode
		#define GEODE_CONCEPT_CHECK_getMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectDirection
		#define GEODE_CONCEPT_CHECK_getObjectDirection
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRadius
		#define GEODE_CONCEPT_CHECK_getObjectRadius
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRectPointer
		#define GEODE_CONCEPT_CHECK_getObjectRectPointer
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRectPointer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectZLayer
		#define GEODE_CONCEPT_CHECK_getObjectZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectZOrder
		#define GEODE_CONCEPT_CHECK_getObjectZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOuterObjectRect
		#define GEODE_CONCEPT_CHECK_getOuterObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getOuterObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParentMode
		#define GEODE_CONCEPT_CHECK_getParentMode
		GEODE_CONCEPT_FUNCTION_CHECK(getParentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeSpriteColor
		#define GEODE_CONCEPT_CHECK_getRelativeSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScalePosDelta
		#define GEODE_CONCEPT_CHECK_getScalePosDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getScalePosDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryColor
		#define GEODE_CONCEPT_CHECK_getSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_getSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSlopeAngle
		#define GEODE_CONCEPT_CHECK_getSlopeAngle
		GEODE_CONCEPT_FUNCTION_CHECK(getSlopeAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnmodifiedPosition
		#define GEODE_CONCEPT_CHECK_getUnmodifiedPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getUnmodifiedPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupColor
		#define GEODE_CONCEPT_CHECK_groupColor
		GEODE_CONCEPT_FUNCTION_CHECK(groupColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupOpacityMod
		#define GEODE_CONCEPT_CHECK_groupOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(groupOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupWasDisabled
		#define GEODE_CONCEPT_CHECK_groupWasDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(groupWasDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupWasEnabled
		#define GEODE_CONCEPT_CHECK_groupWasEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(groupWasEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasSecondaryColor
		#define GEODE_CONCEPT_CHECK_hasSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(hasSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreEditorDuration
		#define GEODE_CONCEPT_CHECK_ignoreEditorDuration
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreEditorDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreEnter
		#define GEODE_CONCEPT_CHECK_ignoreEnter
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreFade
		#define GEODE_CONCEPT_CHECK_ignoreFade
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBasicTrigger
		#define GEODE_CONCEPT_CHECK_isBasicTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isBasicTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorObject
		#define GEODE_CONCEPT_CHECK_isColorObject
		GEODE_CONCEPT_FUNCTION_CHECK(isColorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorTrigger
		#define GEODE_CONCEPT_CHECK_isColorTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isColorTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isConfigurablePortal
		#define GEODE_CONCEPT_CHECK_isConfigurablePortal
		GEODE_CONCEPT_FUNCTION_CHECK(isConfigurablePortal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEditorSpawnableTrigger
		#define GEODE_CONCEPT_CHECK_isEditorSpawnableTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isEditorSpawnableTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFacingDown
		#define GEODE_CONCEPT_CHECK_isFacingDown
		GEODE_CONCEPT_FUNCTION_CHECK(isFacingDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFacingLeft
		#define GEODE_CONCEPT_CHECK_isFacingLeft
		GEODE_CONCEPT_FUNCTION_CHECK(isFacingLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSettingsObject
		#define GEODE_CONCEPT_CHECK_isSettingsObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSettingsObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpawnableTrigger
		#define GEODE_CONCEPT_CHECK_isSpawnableTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialObject
		#define GEODE_CONCEPT_CHECK_isSpecialObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpeedObject
		#define GEODE_CONCEPT_CHECK_isSpeedObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpeedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isStoppableTrigger
		#define GEODE_CONCEPT_CHECK_isStoppableTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isStoppableTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTrigger
		#define GEODE_CONCEPT_CHECK_isTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGroupsFromString
		#define GEODE_CONCEPT_CHECK_loadGroupsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadGroupsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_makeInvisible
		#define GEODE_CONCEPT_CHECK_makeInvisible
		GEODE_CONCEPT_FUNCTION_CHECK(makeInvisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_makeVisible
		#define GEODE_CONCEPT_CHECK_makeVisible
		GEODE_CONCEPT_FUNCTION_CHECK(makeVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityModForMode
		#define GEODE_CONCEPT_CHECK_opacityModForMode
		GEODE_CONCEPT_FUNCTION_CHECK(opacityModForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentForZLayer
		#define GEODE_CONCEPT_CHECK_parentForZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(parentForZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_perspectiveColorFrame
		#define GEODE_CONCEPT_CHECK_perspectiveColorFrame
		GEODE_CONCEPT_FUNCTION_CHECK(perspectiveColorFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_perspectiveFrame
		#define GEODE_CONCEPT_CHECK_perspectiveFrame
		GEODE_CONCEPT_FUNCTION_CHECK(perspectiveFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playDestroyObjectAnim
		#define GEODE_CONCEPT_CHECK_playDestroyObjectAnim
		GEODE_CONCEPT_FUNCTION_CHECK(playDestroyObjectAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playPickupAnimation
		#define GEODE_CONCEPT_CHECK_playPickupAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playPickupAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playShineEffect
		#define GEODE_CONCEPT_CHECK_playShineEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playShineEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdatePosition
		#define GEODE_CONCEPT_CHECK_quickUpdatePosition
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdatePosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdatePosition2
		#define GEODE_CONCEPT_CHECK_quickUpdatePosition2
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdatePosition2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeColorSprite
		#define GEODE_CONCEPT_CHECK_removeColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(removeColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGlow
		#define GEODE_CONCEPT_CHECK_removeGlow
		GEODE_CONCEPT_FUNCTION_CHECK(removeGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderColorSprite
		#define GEODE_CONCEPT_CHECK_reorderColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(reorderColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetColorGroups
		#define GEODE_CONCEPT_CHECK_resetColorGroups
		GEODE_CONCEPT_FUNCTION_CHECK(resetColorGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGroupDisabled
		#define GEODE_CONCEPT_CHECK_resetGroupDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(resetGroupDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGroups
		#define GEODE_CONCEPT_CHECK_resetGroups
		GEODE_CONCEPT_FUNCTION_CHECK(resetGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMainColorMode
		#define GEODE_CONCEPT_CHECK_resetMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(resetMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMoveOffset
		#define GEODE_CONCEPT_CHECK_resetMoveOffset
		GEODE_CONCEPT_FUNCTION_CHECK(resetMoveOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetRScaleForced
		#define GEODE_CONCEPT_CHECK_resetRScaleForced
		GEODE_CONCEPT_FUNCTION_CHECK(resetRScaleForced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_resetSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(resetSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAreaOpacity
		#define GEODE_CONCEPT_CHECK_setAreaOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setAreaOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomZLayer
		#define GEODE_CONCEPT_CHECK_setCustomZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultMainColorMode
		#define GEODE_CONCEPT_CHECK_setDefaultMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_setDefaultSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlowOpacity
		#define GEODE_CONCEPT_CHECK_setGlowOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setGlowOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastPosition
		#define GEODE_CONCEPT_CHECK_setLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMainColorMode
		#define GEODE_CONCEPT_CHECK_setMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_setSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorSprite
		#define GEODE_CONCEPT_CHECK_setupColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPixelScale
		#define GEODE_CONCEPT_CHECK_setupPixelScale
		GEODE_CONCEPT_FUNCTION_CHECK(setupPixelScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSpriteSize
		#define GEODE_CONCEPT_CHECK_setupSpriteSize
		GEODE_CONCEPT_FUNCTION_CHECK(setupSpriteSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlendColor
		#define GEODE_CONCEPT_CHECK_shouldBlendColor
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlendColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldLockX
		#define GEODE_CONCEPT_CHECK_shouldLockX
		GEODE_CONCEPT_FUNCTION_CHECK(shouldLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldNotHideAnimFreeze
		#define GEODE_CONCEPT_CHECK_shouldNotHideAnimFreeze
		GEODE_CONCEPT_FUNCTION_CHECK(shouldNotHideAnimFreeze) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldShowPickupEffects
		#define GEODE_CONCEPT_CHECK_shouldShowPickupEffects
		GEODE_CONCEPT_FUNCTION_CHECK(shouldShowPickupEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeFloorTop
		#define GEODE_CONCEPT_CHECK_slopeFloorTop
		GEODE_CONCEPT_FUNCTION_CHECK(slopeFloorTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeWallLeft
		#define GEODE_CONCEPT_CHECK_slopeWallLeft
		GEODE_CONCEPT_FUNCTION_CHECK(slopeWallLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeYPos
		#define GEODE_CONCEPT_CHECK_slopeYPos
		GEODE_CONCEPT_FUNCTION_CHECK(slopeYPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnDefaultPickupParticle
		#define GEODE_CONCEPT_CHECK_spawnDefaultPickupParticle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnDefaultPickupParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendMode
		#define GEODE_CONCEPT_CHECK_updateBlendMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColorType
		#define GEODE_CONCEPT_CHECK_updateCustomColorType
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColorType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomScaleX
		#define GEODE_CONCEPT_CHECK_updateCustomScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomScaleY
		#define GEODE_CONCEPT_CHECK_updateCustomScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVState
		#define GEODE_CONCEPT_CHECK_updateHSVState
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateIsOriented
		#define GEODE_CONCEPT_CHECK_updateIsOriented
		GEODE_CONCEPT_FUNCTION_CHECK(updateIsOriented) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainColorOnly
		#define GEODE_CONCEPT_CHECK_updateMainColorOnly
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainColorOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainOpacity
		#define GEODE_CONCEPT_CHECK_updateMainOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectEditorColor
		#define GEODE_CONCEPT_CHECK_updateObjectEditorColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryColorOnly
		#define GEODE_CONCEPT_CHECK_updateSecondaryColorOnly
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryColorOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryOpacity
		#define GEODE_CONCEPT_CHECK_updateSecondaryOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStartPos
		#define GEODE_CONCEPT_CHECK_updateStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUnmodifiedPositions
		#define GEODE_CONCEPT_CHECK_updateUnmodifiedPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateUnmodifiedPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_usesFreezeAnimation
		#define GEODE_CONCEPT_CHECK_usesFreezeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(usesFreezeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_usesSpecialAnimation
		#define GEODE_CONCEPT_CHECK_usesSpecialAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(usesSpecialAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameObject> : ModifyBase<ModifyDerive<Der, GameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObject>>;
		using ModifyBase<ModifyDerive<Der, GameObject>>::ModifyBase;
		using Base = GameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x1377e0, Thiscall, GameObject, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x18b6b0, Thiscall, GameObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18dc20, Default, GameObject, createWithFrame, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b7d0, Default, GameObject, createWithKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isBasicEnterEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19d1e0, Default, GameObject, objectFromVector, gd::vector<gd::string>&, gd::vector<void*>&, GJBaseGameLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetMID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198250, Thiscall, GameObject, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198330, Thiscall, GameObject, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198420, Thiscall, GameObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197b60, Thiscall, GameObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198c50, Thiscall, GameObject, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197e00, Thiscall, GameObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197f50, Thiscall, GameObject, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1980a0, Thiscall, GameObject, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198800, Thiscall, GameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18dcb0, Thiscall, GameObject, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a0dc0, Thiscall, GameObject, setChildColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1981c0, Thiscall, GameObject, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198200, Thiscall, GameObject, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190e20, Thiscall, GameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1aef00, Thiscall, GameObject, setupCustomSprites, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bd50, Thiscall, GameObject, addMainSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1906d0, Thiscall, GameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190ae0, Thiscall, GameObject, activateObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190b90, Thiscall, GameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197650, Thiscall, GameObject, transferObjectRect, cocos2d::CCRect&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1976a0, Thiscall, GameObject, getObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1976c0, Thiscall, GameObject, getObjectRect, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197850, Thiscall, GameObject, getObjectRect2, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1978f0, Thiscall, GameObject, getObjectTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197b20, Thiscall, GameObject, getRealPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190550, Thiscall, GameObject, setStartPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190920, Thiscall, GameObject, updateStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ecd0, Thiscall, GameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198d70, Thiscall, GameObject, claimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1992a0, Thiscall, GameObject, unclaimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, particleWasActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1981a0, Thiscall, GameObject, isFlipX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1981b0, Thiscall, GameObject, isFlipY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198510, Thiscall, GameObject, setRScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198550, Thiscall, GameObject, setRScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198590, Thiscall, GameObject, setRScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1985d0, Thiscall, GameObject, getRScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198610, Thiscall, GameObject, getRScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197d70, Thiscall, GameObject, setRRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a0a80, Thiscall, GameObject, setObjectColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a0d70, Thiscall, GameObject, setGlowColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x199390, Thiscall, GameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, animationTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a0e40, Thiscall, GameObject, selectObject, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, activatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, hasBeenActivatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, hasBeenActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1510, Thiscall, GameObject, getOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1570, Thiscall, GameObject, updateOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a14f0, Thiscall, GameObject, getObjectRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1f70, Thiscall, GameObject, updateMainColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1f80, Thiscall, GameObject, updateSecondaryColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c790, Thiscall, GameObject, addToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c8b0, Thiscall, GameObject, removeFromGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a08d0, Thiscall, GameObject, saveActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137c20, Thiscall, GameObject, spawnXPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canAllowMultiActivate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, blendModeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a0c60, Thiscall, GameObject, updateParticleColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198aa0, Thiscall, GameObject, updateParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateMainParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateSecondaryParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canReverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isSpecialSpawnObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canBeOrdered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getObjectLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setObjectLabel, cocos2d::CCLabelBMFont*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, shouldDrawEditorHitbox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getHasSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getHasRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canMultiActivate, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateTextKerning, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getTextKerning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137c40, Thiscall, GameObject, getObjectRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137c50, Thiscall, GameObject, setObjectRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137c60, Thiscall, GameObject, getOrientedRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137c70, Thiscall, GameObject, setOrientedRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137c80, Thiscall, GameObject, getType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137c90, Thiscall, GameObject, setType, GameObjectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x137ca0, Thiscall, GameObject, getStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18e7b0, Thiscall, GameObject, addColorSprite, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bfc0, Thiscall, GameObject, addColorSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c1c0, Thiscall, GameObject, addColorSpriteToSelf, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addCustomBlackChild, gd::string, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1972b0, Thiscall, GameObject, addCustomChild, gd::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197370, Thiscall, GameObject, addCustomColorChild, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18e660, Thiscall, GameObject, addEmptyGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18dee0, Thiscall, GameObject, addGlow, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addInternalChild, cocos2d::CCSprite*, gd::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1974b0, Thiscall, GameObject, addInternalCustomColorChild, gd::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197580, Thiscall, GameObject, addInternalGlowChild, gd::string, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addNewSlope01, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addNewSlope01Glow, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addNewSlope02, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addNewSlope02Glow, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197cd0, Thiscall, GameObject, addRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addRotation, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c9d0, Thiscall, GameObject, addToColorGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addToCustomScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addToCustomScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addToOpacityGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, addToTempOffset, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, assignUniqueID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, belongsToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, calculateOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canChangeCustomColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canChangeMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canChangeSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canRotateFree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1f90, Thiscall, GameObject, colorForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196d80, Thiscall, GameObject, commonInteractiveSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18dcf0, Thiscall, GameObject, commonSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c940, Thiscall, GameObject, copyGroups, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198b20, Thiscall, GameObject, createAndAddParticle, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, createColorGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18e6d0, Thiscall, GameObject, createGlow, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c6c0, Thiscall, GameObject, createGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, createOpacityGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, createSpriteColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, deselectObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, destroyObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c2c0, Thiscall, GameObject, determineSlopeDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, didScaleXChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, didScaleYChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, dirtifyObjectPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, dirtifyObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, disableObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, dontCountTowardsLimit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1c80, Thiscall, GameObject, duplicateAttributes, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1ba0, Thiscall, GameObject, duplicateColorMode, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1dc0, Thiscall, GameObject, duplicateValues, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, editorColorForCustomMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1020, Thiscall, GameObject, editorColorForMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, fastRotateObject, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a20c0, Thiscall, GameObject, getActiveColorForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getBallFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getBoundingRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a17d0, Thiscall, GameObject, getBoxOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1903d0, Thiscall, GameObject, getColorFrame, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getColorIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19cd30, Thiscall, GameObject, getColorKey, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getCustomZLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190490, Thiscall, GameObject, getGlowFrame, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getGroupDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getGroupID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getGroupString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getLastPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getMainColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c520, Thiscall, GameObject, getObjectDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getObjectRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getObjectRectPointer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getObjectZLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getObjectZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getOuterObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ab30, Thiscall, GameObject, getParentMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1ab0, Thiscall, GameObject, getRelativeSpriteColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c5a0, Thiscall, GameObject, getScalePosDelta, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getSecondaryColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getSlopeAngle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getUnmodifiedPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, groupColor, cocos2d::ccColor3B const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ccb0, Thiscall, GameObject, groupOpacityMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, groupWasDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, groupWasEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, hasSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a3100, Thiscall, GameObject, ignoreEditorDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, ignoreEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, ignoreFade, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a35f0, Thiscall, GameObject, isBasicTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isColorObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isColorTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isConfigurablePortal, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isEditorSpawnableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1910, Thiscall, GameObject, isFacingDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a19d0, Thiscall, GameObject, isFacingLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isSettingsObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a26b0, Thiscall, GameObject, isSpawnableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2ac0, Thiscall, GameObject, isSpecialObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isSpeedObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isStoppableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2240, Thiscall, GameObject, isTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19cad0, Thiscall, GameObject, loadGroupsFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, makeInvisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, makeVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, opacityModForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19bee0, Thiscall, GameObject, parentForZLayer, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1aeed0, Thiscall, GameObject, perspectiveColorFrame, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1aed90, Thiscall, GameObject, perspectiveFrame, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1aa4a0, Thiscall, GameObject, playDestroyObjectAnim, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9ed0, Thiscall, GameObject, playPickupAnimation, cocos2d::CCSprite*, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a9fc0, Thiscall, GameObject, playPickupAnimation, cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1993b0, Thiscall, GameObject, playShineEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, quickUpdatePosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, quickUpdatePosition2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, removeColorSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, removeGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, reorderColorSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetGroupDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetMainColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetMoveOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetRScaleForced, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, resetSecondaryColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198770, Thiscall, GameObject, setAreaOpacity, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setCustomZLayer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setDefaultMainColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setDefaultSecondaryColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setGlowOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setLastPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setMainColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setSecondaryColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setupColorSprite, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1c3300, Thiscall, GameObject, setupPixelScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a36a0, Thiscall, GameObject, setupSpriteSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190c80, Thiscall, GameObject, shouldBlendColor, GJSpriteColor*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196e40, Thiscall, GameObject, shouldLockX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, shouldNotHideAnimFreeze, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, shouldShowPickupEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, slopeFloorTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, slopeWallLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, slopeYPos, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, slopeYPos, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a13b0, Thiscall, GameObject, slopeYPos, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1aa260, Thiscall, GameObject, spawnDefaultPickupParticle, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateBlendMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateCustomColorType, short)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198650, Thiscall, GameObject, updateCustomScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1986e0, Thiscall, GameObject, updateCustomScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateHSVState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a1730, Thiscall, GameObject, updateIsOriented, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateMainColorOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateMainOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a12f0, Thiscall, GameObject, updateObjectEditorColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateSecondaryColorOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateSecondaryOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1905f0, Thiscall, GameObject, updateStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateUnmodifiedPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, usesFreezeAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, usesSpecialAnimation, )
		}
	};
}
