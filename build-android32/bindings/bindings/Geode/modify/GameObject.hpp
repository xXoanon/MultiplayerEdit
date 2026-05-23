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

	#ifndef GEODE_STATICS_isBasicEnterEffect
		#define GEODE_STATICS_isBasicEnterEffect
		GEODE_AS_STATIC_FUNCTION(isBasicEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_objectFromVector
		#define GEODE_STATICS_objectFromVector
		GEODE_AS_STATIC_FUNCTION(objectFromVector) 
	#endif

	#ifndef GEODE_STATICS_resetMID
		#define GEODE_STATICS_resetMID
		GEODE_AS_STATIC_FUNCTION(resetMID) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
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

	#ifndef GEODE_STATICS_particleWasActivated
		#define GEODE_STATICS_particleWasActivated
		GEODE_AS_STATIC_FUNCTION(particleWasActivated) 
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

	#ifndef GEODE_STATICS_shouldDrawEditorHitbox
		#define GEODE_STATICS_shouldDrawEditorHitbox
		GEODE_AS_STATIC_FUNCTION(shouldDrawEditorHitbox) 
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

	#ifndef GEODE_STATICS_addCustomBlackChild
		#define GEODE_STATICS_addCustomBlackChild
		GEODE_AS_STATIC_FUNCTION(addCustomBlackChild) 
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

	#ifndef GEODE_STATICS_addInternalChild
		#define GEODE_STATICS_addInternalChild
		GEODE_AS_STATIC_FUNCTION(addInternalChild) 
	#endif

	#ifndef GEODE_STATICS_addInternalCustomColorChild
		#define GEODE_STATICS_addInternalCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_addInternalGlowChild
		#define GEODE_STATICS_addInternalGlowChild
		GEODE_AS_STATIC_FUNCTION(addInternalGlowChild) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope01
		#define GEODE_STATICS_addNewSlope01
		GEODE_AS_STATIC_FUNCTION(addNewSlope01) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope01Glow
		#define GEODE_STATICS_addNewSlope01Glow
		GEODE_AS_STATIC_FUNCTION(addNewSlope01Glow) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope02
		#define GEODE_STATICS_addNewSlope02
		GEODE_AS_STATIC_FUNCTION(addNewSlope02) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope02Glow
		#define GEODE_STATICS_addNewSlope02Glow
		GEODE_AS_STATIC_FUNCTION(addNewSlope02Glow) 
	#endif

	#ifndef GEODE_STATICS_addRotation
		#define GEODE_STATICS_addRotation
		GEODE_AS_STATIC_FUNCTION(addRotation) 
	#endif

	#ifndef GEODE_STATICS_addToColorGroup
		#define GEODE_STATICS_addToColorGroup
		GEODE_AS_STATIC_FUNCTION(addToColorGroup) 
	#endif

	#ifndef GEODE_STATICS_addToCustomScaleX
		#define GEODE_STATICS_addToCustomScaleX
		GEODE_AS_STATIC_FUNCTION(addToCustomScaleX) 
	#endif

	#ifndef GEODE_STATICS_addToCustomScaleY
		#define GEODE_STATICS_addToCustomScaleY
		GEODE_AS_STATIC_FUNCTION(addToCustomScaleY) 
	#endif

	#ifndef GEODE_STATICS_addToOpacityGroup
		#define GEODE_STATICS_addToOpacityGroup
		GEODE_AS_STATIC_FUNCTION(addToOpacityGroup) 
	#endif

	#ifndef GEODE_STATICS_addToTempOffset
		#define GEODE_STATICS_addToTempOffset
		GEODE_AS_STATIC_FUNCTION(addToTempOffset) 
	#endif

	#ifndef GEODE_STATICS_assignUniqueID
		#define GEODE_STATICS_assignUniqueID
		GEODE_AS_STATIC_FUNCTION(assignUniqueID) 
	#endif

	#ifndef GEODE_STATICS_belongsToGroup
		#define GEODE_STATICS_belongsToGroup
		GEODE_AS_STATIC_FUNCTION(belongsToGroup) 
	#endif

	#ifndef GEODE_STATICS_calculateOrientedBox
		#define GEODE_STATICS_calculateOrientedBox
		GEODE_AS_STATIC_FUNCTION(calculateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_canChangeCustomColor
		#define GEODE_STATICS_canChangeCustomColor
		GEODE_AS_STATIC_FUNCTION(canChangeCustomColor) 
	#endif

	#ifndef GEODE_STATICS_canChangeMainColor
		#define GEODE_STATICS_canChangeMainColor
		GEODE_AS_STATIC_FUNCTION(canChangeMainColor) 
	#endif

	#ifndef GEODE_STATICS_canChangeSecondaryColor
		#define GEODE_STATICS_canChangeSecondaryColor
		GEODE_AS_STATIC_FUNCTION(canChangeSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_canRotateFree
		#define GEODE_STATICS_canRotateFree
		GEODE_AS_STATIC_FUNCTION(canRotateFree) 
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

	#ifndef GEODE_STATICS_createColorGroupContainer
		#define GEODE_STATICS_createColorGroupContainer
		GEODE_AS_STATIC_FUNCTION(createColorGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_createGlow
		#define GEODE_STATICS_createGlow
		GEODE_AS_STATIC_FUNCTION(createGlow) 
	#endif

	#ifndef GEODE_STATICS_createGroupContainer
		#define GEODE_STATICS_createGroupContainer
		GEODE_AS_STATIC_FUNCTION(createGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_createOpacityGroupContainer
		#define GEODE_STATICS_createOpacityGroupContainer
		GEODE_AS_STATIC_FUNCTION(createOpacityGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_createSpriteColor
		#define GEODE_STATICS_createSpriteColor
		GEODE_AS_STATIC_FUNCTION(createSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_deselectObject
		#define GEODE_STATICS_deselectObject
		GEODE_AS_STATIC_FUNCTION(deselectObject) 
	#endif

	#ifndef GEODE_STATICS_destroyObject
		#define GEODE_STATICS_destroyObject
		GEODE_AS_STATIC_FUNCTION(destroyObject) 
	#endif

	#ifndef GEODE_STATICS_determineSlopeDirection
		#define GEODE_STATICS_determineSlopeDirection
		GEODE_AS_STATIC_FUNCTION(determineSlopeDirection) 
	#endif

	#ifndef GEODE_STATICS_didScaleXChange
		#define GEODE_STATICS_didScaleXChange
		GEODE_AS_STATIC_FUNCTION(didScaleXChange) 
	#endif

	#ifndef GEODE_STATICS_didScaleYChange
		#define GEODE_STATICS_didScaleYChange
		GEODE_AS_STATIC_FUNCTION(didScaleYChange) 
	#endif

	#ifndef GEODE_STATICS_dirtifyObjectPos
		#define GEODE_STATICS_dirtifyObjectPos
		GEODE_AS_STATIC_FUNCTION(dirtifyObjectPos) 
	#endif

	#ifndef GEODE_STATICS_dirtifyObjectRect
		#define GEODE_STATICS_dirtifyObjectRect
		GEODE_AS_STATIC_FUNCTION(dirtifyObjectRect) 
	#endif

	#ifndef GEODE_STATICS_disableObject
		#define GEODE_STATICS_disableObject
		GEODE_AS_STATIC_FUNCTION(disableObject) 
	#endif

	#ifndef GEODE_STATICS_dontCountTowardsLimit
		#define GEODE_STATICS_dontCountTowardsLimit
		GEODE_AS_STATIC_FUNCTION(dontCountTowardsLimit) 
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

	#ifndef GEODE_STATICS_editorColorForCustomMode
		#define GEODE_STATICS_editorColorForCustomMode
		GEODE_AS_STATIC_FUNCTION(editorColorForCustomMode) 
	#endif

	#ifndef GEODE_STATICS_editorColorForMode
		#define GEODE_STATICS_editorColorForMode
		GEODE_AS_STATIC_FUNCTION(editorColorForMode) 
	#endif

	#ifndef GEODE_STATICS_fastRotateObject
		#define GEODE_STATICS_fastRotateObject
		GEODE_AS_STATIC_FUNCTION(fastRotateObject) 
	#endif

	#ifndef GEODE_STATICS_getActiveColorForMode
		#define GEODE_STATICS_getActiveColorForMode
		GEODE_AS_STATIC_FUNCTION(getActiveColorForMode) 
	#endif

	#ifndef GEODE_STATICS_getBallFrame
		#define GEODE_STATICS_getBallFrame
		GEODE_AS_STATIC_FUNCTION(getBallFrame) 
	#endif

	#ifndef GEODE_STATICS_getBoundingRect
		#define GEODE_STATICS_getBoundingRect
		GEODE_AS_STATIC_FUNCTION(getBoundingRect) 
	#endif

	#ifndef GEODE_STATICS_getBoxOffset
		#define GEODE_STATICS_getBoxOffset
		GEODE_AS_STATIC_FUNCTION(getBoxOffset) 
	#endif

	#ifndef GEODE_STATICS_getColorFrame
		#define GEODE_STATICS_getColorFrame
		GEODE_AS_STATIC_FUNCTION(getColorFrame) 
	#endif

	#ifndef GEODE_STATICS_getColorIndex
		#define GEODE_STATICS_getColorIndex
		GEODE_AS_STATIC_FUNCTION(getColorIndex) 
	#endif

	#ifndef GEODE_STATICS_getColorKey
		#define GEODE_STATICS_getColorKey
		GEODE_AS_STATIC_FUNCTION(getColorKey) 
	#endif

	#ifndef GEODE_STATICS_getCustomZLayer
		#define GEODE_STATICS_getCustomZLayer
		GEODE_AS_STATIC_FUNCTION(getCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_getGlowFrame
		#define GEODE_STATICS_getGlowFrame
		GEODE_AS_STATIC_FUNCTION(getGlowFrame) 
	#endif

	#ifndef GEODE_STATICS_getGroupDisabled
		#define GEODE_STATICS_getGroupDisabled
		GEODE_AS_STATIC_FUNCTION(getGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_getGroupID
		#define GEODE_STATICS_getGroupID
		GEODE_AS_STATIC_FUNCTION(getGroupID) 
	#endif

	#ifndef GEODE_STATICS_getGroupString
		#define GEODE_STATICS_getGroupString
		GEODE_AS_STATIC_FUNCTION(getGroupString) 
	#endif

	#ifndef GEODE_STATICS_getLastPosition
		#define GEODE_STATICS_getLastPosition
		GEODE_AS_STATIC_FUNCTION(getLastPosition) 
	#endif

	#ifndef GEODE_STATICS_getMainColor
		#define GEODE_STATICS_getMainColor
		GEODE_AS_STATIC_FUNCTION(getMainColor) 
	#endif

	#ifndef GEODE_STATICS_getMainColorMode
		#define GEODE_STATICS_getMainColorMode
		GEODE_AS_STATIC_FUNCTION(getMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_getObjectDirection
		#define GEODE_STATICS_getObjectDirection
		GEODE_AS_STATIC_FUNCTION(getObjectDirection) 
	#endif

	#ifndef GEODE_STATICS_getObjectRadius
		#define GEODE_STATICS_getObjectRadius
		GEODE_AS_STATIC_FUNCTION(getObjectRadius) 
	#endif

	#ifndef GEODE_STATICS_getObjectRectPointer
		#define GEODE_STATICS_getObjectRectPointer
		GEODE_AS_STATIC_FUNCTION(getObjectRectPointer) 
	#endif

	#ifndef GEODE_STATICS_getObjectZLayer
		#define GEODE_STATICS_getObjectZLayer
		GEODE_AS_STATIC_FUNCTION(getObjectZLayer) 
	#endif

	#ifndef GEODE_STATICS_getObjectZOrder
		#define GEODE_STATICS_getObjectZOrder
		GEODE_AS_STATIC_FUNCTION(getObjectZOrder) 
	#endif

	#ifndef GEODE_STATICS_getOuterObjectRect
		#define GEODE_STATICS_getOuterObjectRect
		GEODE_AS_STATIC_FUNCTION(getOuterObjectRect) 
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

	#ifndef GEODE_STATICS_getSecondaryColor
		#define GEODE_STATICS_getSecondaryColor
		GEODE_AS_STATIC_FUNCTION(getSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColorMode
		#define GEODE_STATICS_getSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(getSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_getSlopeAngle
		#define GEODE_STATICS_getSlopeAngle
		GEODE_AS_STATIC_FUNCTION(getSlopeAngle) 
	#endif

	#ifndef GEODE_STATICS_getUnmodifiedPosition
		#define GEODE_STATICS_getUnmodifiedPosition
		GEODE_AS_STATIC_FUNCTION(getUnmodifiedPosition) 
	#endif

	#ifndef GEODE_STATICS_groupColor
		#define GEODE_STATICS_groupColor
		GEODE_AS_STATIC_FUNCTION(groupColor) 
	#endif

	#ifndef GEODE_STATICS_groupOpacityMod
		#define GEODE_STATICS_groupOpacityMod
		GEODE_AS_STATIC_FUNCTION(groupOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_groupWasDisabled
		#define GEODE_STATICS_groupWasDisabled
		GEODE_AS_STATIC_FUNCTION(groupWasDisabled) 
	#endif

	#ifndef GEODE_STATICS_groupWasEnabled
		#define GEODE_STATICS_groupWasEnabled
		GEODE_AS_STATIC_FUNCTION(groupWasEnabled) 
	#endif

	#ifndef GEODE_STATICS_hasSecondaryColor
		#define GEODE_STATICS_hasSecondaryColor
		GEODE_AS_STATIC_FUNCTION(hasSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_ignoreEditorDuration
		#define GEODE_STATICS_ignoreEditorDuration
		GEODE_AS_STATIC_FUNCTION(ignoreEditorDuration) 
	#endif

	#ifndef GEODE_STATICS_ignoreEnter
		#define GEODE_STATICS_ignoreEnter
		GEODE_AS_STATIC_FUNCTION(ignoreEnter) 
	#endif

	#ifndef GEODE_STATICS_ignoreFade
		#define GEODE_STATICS_ignoreFade
		GEODE_AS_STATIC_FUNCTION(ignoreFade) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isBasicTrigger
		#define GEODE_STATICS_isBasicTrigger
		GEODE_AS_STATIC_FUNCTION(isBasicTrigger) 
	#endif

	#ifndef GEODE_STATICS_isColorObject
		#define GEODE_STATICS_isColorObject
		GEODE_AS_STATIC_FUNCTION(isColorObject) 
	#endif

	#ifndef GEODE_STATICS_isColorTrigger
		#define GEODE_STATICS_isColorTrigger
		GEODE_AS_STATIC_FUNCTION(isColorTrigger) 
	#endif

	#ifndef GEODE_STATICS_isConfigurablePortal
		#define GEODE_STATICS_isConfigurablePortal
		GEODE_AS_STATIC_FUNCTION(isConfigurablePortal) 
	#endif

	#ifndef GEODE_STATICS_isEditorSpawnableTrigger
		#define GEODE_STATICS_isEditorSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isEditorSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isFacingDown
		#define GEODE_STATICS_isFacingDown
		GEODE_AS_STATIC_FUNCTION(isFacingDown) 
	#endif

	#ifndef GEODE_STATICS_isFacingLeft
		#define GEODE_STATICS_isFacingLeft
		GEODE_AS_STATIC_FUNCTION(isFacingLeft) 
	#endif

	#ifndef GEODE_STATICS_isSettingsObject
		#define GEODE_STATICS_isSettingsObject
		GEODE_AS_STATIC_FUNCTION(isSettingsObject) 
	#endif

	#ifndef GEODE_STATICS_isSpawnableTrigger
		#define GEODE_STATICS_isSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isSpecialObject
		#define GEODE_STATICS_isSpecialObject
		GEODE_AS_STATIC_FUNCTION(isSpecialObject) 
	#endif

	#ifndef GEODE_STATICS_isSpeedObject
		#define GEODE_STATICS_isSpeedObject
		GEODE_AS_STATIC_FUNCTION(isSpeedObject) 
	#endif

	#ifndef GEODE_STATICS_isStoppableTrigger
		#define GEODE_STATICS_isStoppableTrigger
		GEODE_AS_STATIC_FUNCTION(isStoppableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isTrigger
		#define GEODE_STATICS_isTrigger
		GEODE_AS_STATIC_FUNCTION(isTrigger) 
	#endif

	#ifndef GEODE_STATICS_loadGroupsFromString
		#define GEODE_STATICS_loadGroupsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupsFromString) 
	#endif

	#ifndef GEODE_STATICS_makeInvisible
		#define GEODE_STATICS_makeInvisible
		GEODE_AS_STATIC_FUNCTION(makeInvisible) 
	#endif

	#ifndef GEODE_STATICS_makeVisible
		#define GEODE_STATICS_makeVisible
		GEODE_AS_STATIC_FUNCTION(makeVisible) 
	#endif

	#ifndef GEODE_STATICS_opacityModForMode
		#define GEODE_STATICS_opacityModForMode
		GEODE_AS_STATIC_FUNCTION(opacityModForMode) 
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

	#ifndef GEODE_STATICS_quickUpdatePosition
		#define GEODE_STATICS_quickUpdatePosition
		GEODE_AS_STATIC_FUNCTION(quickUpdatePosition) 
	#endif

	#ifndef GEODE_STATICS_quickUpdatePosition2
		#define GEODE_STATICS_quickUpdatePosition2
		GEODE_AS_STATIC_FUNCTION(quickUpdatePosition2) 
	#endif

	#ifndef GEODE_STATICS_removeColorSprite
		#define GEODE_STATICS_removeColorSprite
		GEODE_AS_STATIC_FUNCTION(removeColorSprite) 
	#endif

	#ifndef GEODE_STATICS_removeGlow
		#define GEODE_STATICS_removeGlow
		GEODE_AS_STATIC_FUNCTION(removeGlow) 
	#endif

	#ifndef GEODE_STATICS_reorderColorSprite
		#define GEODE_STATICS_reorderColorSprite
		GEODE_AS_STATIC_FUNCTION(reorderColorSprite) 
	#endif

	#ifndef GEODE_STATICS_resetColorGroups
		#define GEODE_STATICS_resetColorGroups
		GEODE_AS_STATIC_FUNCTION(resetColorGroups) 
	#endif

	#ifndef GEODE_STATICS_resetGroupDisabled
		#define GEODE_STATICS_resetGroupDisabled
		GEODE_AS_STATIC_FUNCTION(resetGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_resetGroups
		#define GEODE_STATICS_resetGroups
		GEODE_AS_STATIC_FUNCTION(resetGroups) 
	#endif

	#ifndef GEODE_STATICS_resetMainColorMode
		#define GEODE_STATICS_resetMainColorMode
		GEODE_AS_STATIC_FUNCTION(resetMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_resetMoveOffset
		#define GEODE_STATICS_resetMoveOffset
		GEODE_AS_STATIC_FUNCTION(resetMoveOffset) 
	#endif

	#ifndef GEODE_STATICS_resetRScaleForced
		#define GEODE_STATICS_resetRScaleForced
		GEODE_AS_STATIC_FUNCTION(resetRScaleForced) 
	#endif

	#ifndef GEODE_STATICS_resetSecondaryColorMode
		#define GEODE_STATICS_resetSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(resetSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setAreaOpacity
		#define GEODE_STATICS_setAreaOpacity
		GEODE_AS_STATIC_FUNCTION(setAreaOpacity) 
	#endif

	#ifndef GEODE_STATICS_setCustomZLayer
		#define GEODE_STATICS_setCustomZLayer
		GEODE_AS_STATIC_FUNCTION(setCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_setDefaultMainColorMode
		#define GEODE_STATICS_setDefaultMainColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setDefaultSecondaryColorMode
		#define GEODE_STATICS_setDefaultSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setGlowOpacity
		#define GEODE_STATICS_setGlowOpacity
		GEODE_AS_STATIC_FUNCTION(setGlowOpacity) 
	#endif

	#ifndef GEODE_STATICS_setLastPosition
		#define GEODE_STATICS_setLastPosition
		GEODE_AS_STATIC_FUNCTION(setLastPosition) 
	#endif

	#ifndef GEODE_STATICS_setMainColorMode
		#define GEODE_STATICS_setMainColorMode
		GEODE_AS_STATIC_FUNCTION(setMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setSecondaryColorMode
		#define GEODE_STATICS_setSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setupColorSprite
		#define GEODE_STATICS_setupColorSprite
		GEODE_AS_STATIC_FUNCTION(setupColorSprite) 
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

	#ifndef GEODE_STATICS_shouldNotHideAnimFreeze
		#define GEODE_STATICS_shouldNotHideAnimFreeze
		GEODE_AS_STATIC_FUNCTION(shouldNotHideAnimFreeze) 
	#endif

	#ifndef GEODE_STATICS_shouldShowPickupEffects
		#define GEODE_STATICS_shouldShowPickupEffects
		GEODE_AS_STATIC_FUNCTION(shouldShowPickupEffects) 
	#endif

	#ifndef GEODE_STATICS_slopeFloorTop
		#define GEODE_STATICS_slopeFloorTop
		GEODE_AS_STATIC_FUNCTION(slopeFloorTop) 
	#endif

	#ifndef GEODE_STATICS_slopeWallLeft
		#define GEODE_STATICS_slopeWallLeft
		GEODE_AS_STATIC_FUNCTION(slopeWallLeft) 
	#endif

	#ifndef GEODE_STATICS_slopeYPos
		#define GEODE_STATICS_slopeYPos
		GEODE_AS_STATIC_FUNCTION(slopeYPos) 
	#endif

	#ifndef GEODE_STATICS_spawnDefaultPickupParticle
		#define GEODE_STATICS_spawnDefaultPickupParticle
		GEODE_AS_STATIC_FUNCTION(spawnDefaultPickupParticle) 
	#endif

	#ifndef GEODE_STATICS_updateBlendMode
		#define GEODE_STATICS_updateBlendMode
		GEODE_AS_STATIC_FUNCTION(updateBlendMode) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColorType
		#define GEODE_STATICS_updateCustomColorType
		GEODE_AS_STATIC_FUNCTION(updateCustomColorType) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleX
		#define GEODE_STATICS_updateCustomScaleX
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleX) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleY
		#define GEODE_STATICS_updateCustomScaleY
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleY) 
	#endif

	#ifndef GEODE_STATICS_updateHSVState
		#define GEODE_STATICS_updateHSVState
		GEODE_AS_STATIC_FUNCTION(updateHSVState) 
	#endif

	#ifndef GEODE_STATICS_updateIsOriented
		#define GEODE_STATICS_updateIsOriented
		GEODE_AS_STATIC_FUNCTION(updateIsOriented) 
	#endif

	#ifndef GEODE_STATICS_updateMainColorOnly
		#define GEODE_STATICS_updateMainColorOnly
		GEODE_AS_STATIC_FUNCTION(updateMainColorOnly) 
	#endif

	#ifndef GEODE_STATICS_updateMainOpacity
		#define GEODE_STATICS_updateMainOpacity
		GEODE_AS_STATIC_FUNCTION(updateMainOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateObjectEditorColor
		#define GEODE_STATICS_updateObjectEditorColor
		GEODE_AS_STATIC_FUNCTION(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColorOnly
		#define GEODE_STATICS_updateSecondaryColorOnly
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColorOnly) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryOpacity
		#define GEODE_STATICS_updateSecondaryOpacity
		GEODE_AS_STATIC_FUNCTION(updateSecondaryOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateStartPos
		#define GEODE_STATICS_updateStartPos
		GEODE_AS_STATIC_FUNCTION(updateStartPos) 
	#endif

	#ifndef GEODE_STATICS_updateUnmodifiedPositions
		#define GEODE_STATICS_updateUnmodifiedPositions
		GEODE_AS_STATIC_FUNCTION(updateUnmodifiedPositions) 
	#endif

	#ifndef GEODE_STATICS_usesFreezeAnimation
		#define GEODE_STATICS_usesFreezeAnimation
		GEODE_AS_STATIC_FUNCTION(usesFreezeAnimation) 
	#endif

	#ifndef GEODE_STATICS_usesSpecialAnimation
		#define GEODE_STATICS_usesSpecialAnimation
		GEODE_AS_STATIC_FUNCTION(usesSpecialAnimation) 
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

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObjectC2Ev")), Default, GameObject, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObjectD2Ev")), Default, GameObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameObject::createWithFrame)), Default, GameObject, createWithFrame, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::createWithKey)), Default, GameObject, createWithKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::isBasicEnterEffect)), Default, GameObject, isBasicEnterEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject16objectFromVectorERSt6vectorISsSaISsEERS0_IPvSaIS4_EEP15GJBaseGameLayerb")), Default, GameObject, objectFromVector, gd::vector<gd::string>&, gd::vector<void*>&, GJBaseGameLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetMID)), Default, GameObject, resetMID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::update)), Default, GameObject, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setScaleX)), Default, GameObject, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setScaleY)), Default, GameObject, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setScale)), Default, GameObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&GameObject::setPosition)), Default, GameObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&GameObject::setVisible)), Default, GameObject, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setRotation)), Default, GameObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setRotationX)), Default, GameObject, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setRotationY)), Default, GameObject, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&GameObject::setOpacity)), Default, GameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&GameObject::initWithTexture)), Default, GameObject, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setChildColor)), Default, GameObject, setChildColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&GameObject::setFlipX)), Default, GameObject, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&GameObject::setFlipY)), Default, GameObject, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::customSetup)), Default, GameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject18setupCustomSpritesESs")), Default, GameObject, setupCustomSprites, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&GameObject::addMainSpriteToParent)), Default, GameObject, addMainSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::resetObject)), Default, GameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, triggerObject, GJBaseGameLayer*, int, gd::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::activateObject)), Default, GameObject, activateObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&GameObject::deactivateObject)), Default, GameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCRect&>::func(&GameObject::transferObjectRect)), Default, GameObject, transferObjectRect, cocos2d::CCRect&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getObjectRect)), Default, GameObject, getObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float>::func(&GameObject::getObjectRect)), Default, GameObject, getObjectRect, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, float>::func(&GameObject::getObjectRect2)), Default, GameObject, getObjectRect2, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getObjectTextureRect)), Default, GameObject, getObjectTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getRealPosition)), Default, GameObject, getRealPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint>::func(&GameObject::setStartPos)), Default, GameObject, setStartPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::updateStartValues)), Default, GameObject, updateStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJBaseGameLayer*>::func(&GameObject::getSaveString)), Default, GameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::claimParticle)), Default, GameObject, claimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::unclaimParticle)), Default, GameObject, unclaimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::particleWasActivated)), Default, GameObject, particleWasActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::isFlipX)), Default, GameObject, isFlipX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::isFlipY)), Default, GameObject, isFlipY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setRScaleX)), Default, GameObject, setRScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setRScaleY)), Default, GameObject, setRScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setRScale)), Default, GameObject, setRScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getRScaleX)), Default, GameObject, getRScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getRScaleY)), Default, GameObject, getRScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GameObject::setRRotation)), Default, GameObject, setRRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setObjectColor)), Default, GameObject, setObjectColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setGlowColor)), Default, GameObject, setGlowColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::restoreObject)), Default, GameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, animationTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B>::func(&GameObject::selectObject)), Default, GameObject, selectObject, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, activatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, hasBeenActivatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, hasBeenActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getOrientedBox)), Default, GameObject, getOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::updateOrientedBox)), Default, GameObject, updateOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getObjectRotation)), Default, GameObject, getObjectRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateMainColor)), Default, GameObject, updateMainColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateSecondaryColor)), Default, GameObject, updateSecondaryColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&GameObject::addToGroup)), Default, GameObject, addToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&GameObject::removeFromGroup)), Default, GameObject, removeFromGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::saveActiveColors)), Default, GameObject, saveActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::spawnXPosition)), Default, GameObject, spawnXPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canAllowMultiActivate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, blendModeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateParticleColor)), Default, GameObject, updateParticleColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned char>::func(&GameObject::updateParticleOpacity)), Default, GameObject, updateParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateMainParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateSecondaryParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canReverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isSpecialSpawnObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canBeOrdered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getObjectLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setObjectLabel, cocos2d::CCLabelBMFont*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::shouldDrawEditorHitbox)), Default, GameObject, shouldDrawEditorHitbox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getHasSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getHasRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canMultiActivate, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateTextKerning, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getTextKerning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getObjectRectDirty)), Default, GameObject, getObjectRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&GameObject::setObjectRectDirty)), Default, GameObject, setObjectRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getOrientedRectDirty)), Default, GameObject, getOrientedRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&GameObject::setOrientedRectDirty)), Default, GameObject, setOrientedRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getType)), Default, GameObject, getType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GameObjectType>::func(&GameObject::setType)), Default, GameObject, setType, GameObjectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GameObject::getStartPos)), Default, GameObject, getStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject14addColorSpriteESs")), Default, GameObject, addColorSprite, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameObject::addColorSpriteToParent)), Default, GameObject, addColorSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::addColorSpriteToSelf)), Default, GameObject, addColorSpriteToSelf, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject19addCustomBlackChildESsfb")), Default, GameObject, addCustomBlackChild, gd::string, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject14addCustomChildESsN7cocos2d7CCPointEi")), Default, GameObject, addCustomChild, gd::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject19addCustomColorChildESs")), Default, GameObject, addCustomColorChild, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::addEmptyGlow)), Default, GameObject, addEmptyGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject7addGlowESs")), Default, GameObject, addGlow, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject16addInternalChildEPN7cocos2d8CCSpriteESsNS0_7CCPointEi")), Default, GameObject, addInternalChild, cocos2d::CCSprite*, gd::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject27addInternalCustomColorChildESsN7cocos2d7CCPointEi")), Default, GameObject, addInternalCustomColorChild, gd::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject20addInternalGlowChildESsN7cocos2d7CCPointE")), Default, GameObject, addInternalGlowChild, gd::string, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameObject::addNewSlope01)), Default, GameObject, addNewSlope01, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameObject::addNewSlope01Glow)), Default, GameObject, addNewSlope01Glow, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameObject::addNewSlope02)), Default, GameObject, addNewSlope02, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GameObject::addNewSlope02Glow)), Default, GameObject, addNewSlope02Glow, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameObject::addRotation)), Default, GameObject, addRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&GameObject::addRotation)), Default, GameObject, addRotation, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::addToColorGroup)), Default, GameObject, addToColorGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameObject::addToCustomScaleX)), Default, GameObject, addToCustomScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameObject::addToCustomScaleY)), Default, GameObject, addToCustomScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::addToOpacityGroup)), Default, GameObject, addToOpacityGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<double, double>::func(&GameObject::addToTempOffset)), Default, GameObject, addToTempOffset, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::assignUniqueID)), Default, GameObject, assignUniqueID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::belongsToGroup)), Default, GameObject, belongsToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::calculateOrientedBox)), Default, GameObject, calculateOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::canChangeCustomColor)), Default, GameObject, canChangeCustomColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::canChangeMainColor)), Default, GameObject, canChangeMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::canChangeSecondaryColor)), Default, GameObject, canChangeSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::canRotateFree)), Default, GameObject, canRotateFree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameObject::colorForMode)), Default, GameObject, colorForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::commonInteractiveSetup)), Default, GameObject, commonInteractiveSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::commonSetup)), Default, GameObject, commonSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&GameObject::copyGroups)), Default, GameObject, copyGroups, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, char const*, int, cocos2d::tCCPositionType>::func(&GameObject::createAndAddParticle)), Default, GameObject, createAndAddParticle, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::createColorGroupContainer)), Default, GameObject, createColorGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject10createGlowESs")), Default, GameObject, createGlow, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::createGroupContainer)), Default, GameObject, createGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::createOpacityGroupContainer)), Default, GameObject, createOpacityGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::createSpriteColor)), Default, GameObject, createSpriteColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::deselectObject)), Default, GameObject, deselectObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::destroyObject)), Default, GameObject, destroyObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::determineSlopeDirection)), Default, GameObject, determineSlopeDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::didScaleXChange)), Default, GameObject, didScaleXChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::didScaleYChange)), Default, GameObject, didScaleYChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::dirtifyObjectPos)), Default, GameObject, dirtifyObjectPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::dirtifyObjectRect)), Default, GameObject, dirtifyObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::disableObject)), Default, GameObject, disableObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::dontCountTowardsLimit)), Default, GameObject, dontCountTowardsLimit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&GameObject::duplicateAttributes)), Default, GameObject, duplicateAttributes, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&GameObject::duplicateColorMode)), Default, GameObject, duplicateColorMode, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&GameObject::duplicateValues)), Default, GameObject, duplicateValues, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::editorColorForCustomMode)), Default, GameObject, editorColorForCustomMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::editorColorForMode)), Default, GameObject, editorColorForMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameObject::fastRotateObject)), Default, GameObject, fastRotateObject, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameObject::getActiveColorForMode)), Default, GameObject, getActiveColorForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::getBallFrame)), Default, GameObject, getBallFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getBoundingRect)), Default, GameObject, getBoundingRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getBoxOffset)), Default, GameObject, getBoxOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject13getColorFrameESs")), Default, GameObject, getColorFrame, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getColorIndex)), Default, GameObject, getColorIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool>::func(&GameObject::getColorKey)), Default, GameObject, getColorKey, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getCustomZLayer)), Default, GameObject, getCustomZLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject12getGlowFrameESs")), Default, GameObject, getGlowFrame, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getGroupDisabled)), Default, GameObject, getGroupDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::getGroupID)), Default, GameObject, getGroupID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getGroupString)), Default, GameObject, getGroupString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getLastPosition)), Default, GameObject, getLastPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getMainColor)), Default, GameObject, getMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getMainColorMode)), Default, GameObject, getMainColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getObjectDirection)), Default, GameObject, getObjectDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getObjectRadius)), Default, GameObject, getObjectRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getObjectRectPointer)), Default, GameObject, getObjectRectPointer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getObjectZLayer)), Default, GameObject, getObjectZLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getObjectZOrder)), Default, GameObject, getObjectZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getOuterObjectRect)), Default, GameObject, getOuterObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getParentMode)), Default, GameObject, getParentMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::getRelativeSpriteColor)), Default, GameObject, getRelativeSpriteColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getScalePosDelta)), Default, GameObject, getScalePosDelta, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getSecondaryColor)), Default, GameObject, getSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getSecondaryColorMode)), Default, GameObject, getSecondaryColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getSlopeAngle)), Default, GameObject, getSlopeAngle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::getUnmodifiedPosition)), Default, GameObject, getUnmodifiedPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B const&, bool>::func(&GameObject::groupColor)), Default, GameObject, groupColor, cocos2d::ccColor3B const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::groupOpacityMod)), Default, GameObject, groupOpacityMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::groupWasDisabled)), Default, GameObject, groupWasDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::groupWasEnabled)), Default, GameObject, groupWasEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::hasSecondaryColor)), Default, GameObject, hasSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::ignoreEditorDuration)), Default, GameObject, ignoreEditorDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::ignoreEnter)), Default, GameObject, ignoreEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::ignoreFade)), Default, GameObject, ignoreFade, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&GameObject::init)), Default, GameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isBasicTrigger)), Default, GameObject, isBasicTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isColorObject)), Default, GameObject, isColorObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isColorTrigger)), Default, GameObject, isColorTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isConfigurablePortal)), Default, GameObject, isConfigurablePortal, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isEditorSpawnableTrigger)), Default, GameObject, isEditorSpawnableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isFacingDown)), Default, GameObject, isFacingDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isFacingLeft)), Default, GameObject, isFacingLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isSettingsObject)), Default, GameObject, isSettingsObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isSpawnableTrigger)), Default, GameObject, isSpawnableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isSpecialObject)), Default, GameObject, isSpecialObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isSpeedObject)), Default, GameObject, isSpeedObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isStoppableTrigger)), Default, GameObject, isStoppableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::isTrigger)), Default, GameObject, isTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN10GameObject20loadGroupsFromStringESs")), Default, GameObject, loadGroupsFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::makeInvisible)), Default, GameObject, makeInvisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::makeVisible)), Default, GameObject, makeVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameObject::opacityModForMode)), Default, GameObject, opacityModForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool, int>::func(&GameObject::parentForZLayer)), Default, GameObject, parentForZLayer, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&GameObject::perspectiveColorFrame)), Default, GameObject, perspectiveColorFrame, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&GameObject::perspectiveFrame)), Default, GameObject, perspectiveFrame, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJBaseGameLayer*>::func(&GameObject::playDestroyObjectAnim)), Default, GameObject, playDestroyObjectAnim, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, float, float, float, float>::func(&GameObject::playPickupAnimation)), Default, GameObject, playPickupAnimation, cocos2d::CCSprite*, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float>::func(&GameObject::playPickupAnimation)), Default, GameObject, playPickupAnimation, cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::playShineEffect)), Default, GameObject, playShineEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::quickUpdatePosition)), Default, GameObject, quickUpdatePosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::quickUpdatePosition2)), Default, GameObject, quickUpdatePosition2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::removeColorSprite)), Default, GameObject, removeColorSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::removeGlow)), Default, GameObject, removeGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::reorderColorSprite)), Default, GameObject, reorderColorSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetColorGroups)), Default, GameObject, resetColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetGroupDisabled)), Default, GameObject, resetGroupDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetGroups)), Default, GameObject, resetGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetMainColorMode)), Default, GameObject, resetMainColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetMoveOffset)), Default, GameObject, resetMoveOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetRScaleForced)), Default, GameObject, resetRScaleForced, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::resetSecondaryColorMode)), Default, GameObject, resetSecondaryColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, int>::func(&GameObject::setAreaOpacity)), Default, GameObject, setAreaOpacity, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::setCustomZLayer)), Default, GameObject, setCustomZLayer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::setDefaultMainColorMode)), Default, GameObject, setDefaultMainColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::setDefaultSecondaryColorMode)), Default, GameObject, setDefaultSecondaryColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned char>::func(&GameObject::setGlowOpacity)), Default, GameObject, setGlowOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&GameObject::setLastPosition)), Default, GameObject, setLastPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::setMainColorMode)), Default, GameObject, setMainColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GameObject::setSecondaryColorMode)), Default, GameObject, setSecondaryColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GameObject::setupColorSprite)), Default, GameObject, setupColorSprite, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::setupPixelScale)), Default, GameObject, setupPixelScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::setupSpriteSize)), Default, GameObject, setupSpriteSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJSpriteColor*, bool>::func(&GameObject::shouldBlendColor)), Default, GameObject, shouldBlendColor, GJSpriteColor*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::shouldLockX)), Default, GameObject, shouldLockX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::shouldNotHideAnimFreeze)), Default, GameObject, shouldNotHideAnimFreeze, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::shouldShowPickupEffects)), Default, GameObject, shouldShowPickupEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::slopeFloorTop)), Default, GameObject, slopeFloorTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::slopeWallLeft)), Default, GameObject, slopeWallLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&GameObject::slopeYPos)), Default, GameObject, slopeYPos, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect>::func(&GameObject::slopeYPos)), Default, GameObject, slopeYPos, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameObject::slopeYPos)), Default, GameObject, slopeYPos, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJBaseGameLayer*>::func(&GameObject::spawnDefaultPickupParticle)), Default, GameObject, spawnDefaultPickupParticle, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateBlendMode)), Default, GameObject, updateBlendMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<short>::func(&GameObject::updateCustomColorType)), Default, GameObject, updateCustomColorType, short)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameObject::updateCustomScaleX)), Default, GameObject, updateCustomScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GameObject::updateCustomScaleY)), Default, GameObject, updateCustomScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateHSVState)), Default, GameObject, updateHSVState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateIsOriented)), Default, GameObject, updateIsOriented, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateMainColor)), Default, GameObject, updateMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateMainColorOnly)), Default, GameObject, updateMainColorOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateMainOpacity)), Default, GameObject, updateMainOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateObjectEditorColor)), Default, GameObject, updateObjectEditorColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateSecondaryColor)), Default, GameObject, updateSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateSecondaryColorOnly)), Default, GameObject, updateSecondaryColorOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateSecondaryOpacity)), Default, GameObject, updateSecondaryOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateStartPos)), Default, GameObject, updateStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::updateUnmodifiedPositions)), Default, GameObject, updateUnmodifiedPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::usesFreezeAnimation)), Default, GameObject, usesFreezeAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GameObject::usesSpecialAnimation)), Default, GameObject, usesSpecialAnimation, )
		}
	};
}
