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

	#ifndef GEODE_STATICS_createWithTotalParticles
		#define GEODE_STATICS_createWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(createWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_getBatchNode
		#define GEODE_STATICS_getBatchNode
		GEODE_AS_STATIC_FUNCTION(getBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setBatchNode
		#define GEODE_STATICS_setBatchNode
		GEODE_AS_STATIC_FUNCTION(setBatchNode) 
	#endif

	#ifndef GEODE_STATICS_getParticleCount
		#define GEODE_STATICS_getParticleCount
		GEODE_AS_STATIC_FUNCTION(getParticleCount) 
	#endif

	#ifndef GEODE_STATICS_getDuration
		#define GEODE_STATICS_getDuration
		GEODE_AS_STATIC_FUNCTION(getDuration) 
	#endif

	#ifndef GEODE_STATICS_setDuration
		#define GEODE_STATICS_setDuration
		GEODE_AS_STATIC_FUNCTION(setDuration) 
	#endif

	#ifndef GEODE_STATICS_getSourcePosition
		#define GEODE_STATICS_getSourcePosition
		GEODE_AS_STATIC_FUNCTION(getSourcePosition) 
	#endif

	#ifndef GEODE_STATICS_setSourcePosition
		#define GEODE_STATICS_setSourcePosition
		GEODE_AS_STATIC_FUNCTION(setSourcePosition) 
	#endif

	#ifndef GEODE_STATICS_getPosVar
		#define GEODE_STATICS_getPosVar
		GEODE_AS_STATIC_FUNCTION(getPosVar) 
	#endif

	#ifndef GEODE_STATICS_setPosVar
		#define GEODE_STATICS_setPosVar
		GEODE_AS_STATIC_FUNCTION(setPosVar) 
	#endif

	#ifndef GEODE_STATICS_getLife
		#define GEODE_STATICS_getLife
		GEODE_AS_STATIC_FUNCTION(getLife) 
	#endif

	#ifndef GEODE_STATICS_setLife
		#define GEODE_STATICS_setLife
		GEODE_AS_STATIC_FUNCTION(setLife) 
	#endif

	#ifndef GEODE_STATICS_getLifeVar
		#define GEODE_STATICS_getLifeVar
		GEODE_AS_STATIC_FUNCTION(getLifeVar) 
	#endif

	#ifndef GEODE_STATICS_setLifeVar
		#define GEODE_STATICS_setLifeVar
		GEODE_AS_STATIC_FUNCTION(setLifeVar) 
	#endif

	#ifndef GEODE_STATICS_getAngle
		#define GEODE_STATICS_getAngle
		GEODE_AS_STATIC_FUNCTION(getAngle) 
	#endif

	#ifndef GEODE_STATICS_setAngle
		#define GEODE_STATICS_setAngle
		GEODE_AS_STATIC_FUNCTION(setAngle) 
	#endif

	#ifndef GEODE_STATICS_getAngleVar
		#define GEODE_STATICS_getAngleVar
		GEODE_AS_STATIC_FUNCTION(getAngleVar) 
	#endif

	#ifndef GEODE_STATICS_setAngleVar
		#define GEODE_STATICS_setAngleVar
		GEODE_AS_STATIC_FUNCTION(setAngleVar) 
	#endif

	#ifndef GEODE_STATICS_updateEmissionRate
		#define GEODE_STATICS_updateEmissionRate
		GEODE_AS_STATIC_FUNCTION(updateEmissionRate) 
	#endif

	#ifndef GEODE_STATICS_getGravity
		#define GEODE_STATICS_getGravity
		GEODE_AS_STATIC_FUNCTION(getGravity) 
	#endif

	#ifndef GEODE_STATICS_setGravity
		#define GEODE_STATICS_setGravity
		GEODE_AS_STATIC_FUNCTION(setGravity) 
	#endif

	#ifndef GEODE_STATICS_getSpeed
		#define GEODE_STATICS_getSpeed
		GEODE_AS_STATIC_FUNCTION(getSpeed) 
	#endif

	#ifndef GEODE_STATICS_setSpeed
		#define GEODE_STATICS_setSpeed
		GEODE_AS_STATIC_FUNCTION(setSpeed) 
	#endif

	#ifndef GEODE_STATICS_getSpeedVar
		#define GEODE_STATICS_getSpeedVar
		GEODE_AS_STATIC_FUNCTION(getSpeedVar) 
	#endif

	#ifndef GEODE_STATICS_setSpeedVar
		#define GEODE_STATICS_setSpeedVar
		GEODE_AS_STATIC_FUNCTION(setSpeedVar) 
	#endif

	#ifndef GEODE_STATICS_getTangentialAccel
		#define GEODE_STATICS_getTangentialAccel
		GEODE_AS_STATIC_FUNCTION(getTangentialAccel) 
	#endif

	#ifndef GEODE_STATICS_setTangentialAccel
		#define GEODE_STATICS_setTangentialAccel
		GEODE_AS_STATIC_FUNCTION(setTangentialAccel) 
	#endif

	#ifndef GEODE_STATICS_getTangentialAccelVar
		#define GEODE_STATICS_getTangentialAccelVar
		GEODE_AS_STATIC_FUNCTION(getTangentialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_setTangentialAccelVar
		#define GEODE_STATICS_setTangentialAccelVar
		GEODE_AS_STATIC_FUNCTION(setTangentialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_getRadialAccel
		#define GEODE_STATICS_getRadialAccel
		GEODE_AS_STATIC_FUNCTION(getRadialAccel) 
	#endif

	#ifndef GEODE_STATICS_setRadialAccel
		#define GEODE_STATICS_setRadialAccel
		GEODE_AS_STATIC_FUNCTION(setRadialAccel) 
	#endif

	#ifndef GEODE_STATICS_getRadialAccelVar
		#define GEODE_STATICS_getRadialAccelVar
		GEODE_AS_STATIC_FUNCTION(getRadialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_setRadialAccelVar
		#define GEODE_STATICS_setRadialAccelVar
		GEODE_AS_STATIC_FUNCTION(setRadialAccelVar) 
	#endif

	#ifndef GEODE_STATICS_getRotationIsDir
		#define GEODE_STATICS_getRotationIsDir
		GEODE_AS_STATIC_FUNCTION(getRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_setRotationIsDir
		#define GEODE_STATICS_setRotationIsDir
		GEODE_AS_STATIC_FUNCTION(setRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_getStartRadius
		#define GEODE_STATICS_getStartRadius
		GEODE_AS_STATIC_FUNCTION(getStartRadius) 
	#endif

	#ifndef GEODE_STATICS_setStartRadius
		#define GEODE_STATICS_setStartRadius
		GEODE_AS_STATIC_FUNCTION(setStartRadius) 
	#endif

	#ifndef GEODE_STATICS_getStartRadiusVar
		#define GEODE_STATICS_getStartRadiusVar
		GEODE_AS_STATIC_FUNCTION(getStartRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_setStartRadiusVar
		#define GEODE_STATICS_setStartRadiusVar
		GEODE_AS_STATIC_FUNCTION(setStartRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_getEndRadius
		#define GEODE_STATICS_getEndRadius
		GEODE_AS_STATIC_FUNCTION(getEndRadius) 
	#endif

	#ifndef GEODE_STATICS_setEndRadius
		#define GEODE_STATICS_setEndRadius
		GEODE_AS_STATIC_FUNCTION(setEndRadius) 
	#endif

	#ifndef GEODE_STATICS_getEndRadiusVar
		#define GEODE_STATICS_getEndRadiusVar
		GEODE_AS_STATIC_FUNCTION(getEndRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_setEndRadiusVar
		#define GEODE_STATICS_setEndRadiusVar
		GEODE_AS_STATIC_FUNCTION(setEndRadiusVar) 
	#endif

	#ifndef GEODE_STATICS_getRotatePerSecond
		#define GEODE_STATICS_getRotatePerSecond
		GEODE_AS_STATIC_FUNCTION(getRotatePerSecond) 
	#endif

	#ifndef GEODE_STATICS_setRotatePerSecond
		#define GEODE_STATICS_setRotatePerSecond
		GEODE_AS_STATIC_FUNCTION(setRotatePerSecond) 
	#endif

	#ifndef GEODE_STATICS_getRotatePerSecondVar
		#define GEODE_STATICS_getRotatePerSecondVar
		GEODE_AS_STATIC_FUNCTION(getRotatePerSecondVar) 
	#endif

	#ifndef GEODE_STATICS_setRotatePerSecondVar
		#define GEODE_STATICS_setRotatePerSecondVar
		GEODE_AS_STATIC_FUNCTION(setRotatePerSecondVar) 
	#endif

	#ifndef GEODE_STATICS_isActive
		#define GEODE_STATICS_isActive
		GEODE_AS_STATIC_FUNCTION(isActive) 
	#endif

	#ifndef GEODE_STATICS_isBlendAdditive
		#define GEODE_STATICS_isBlendAdditive
		GEODE_AS_STATIC_FUNCTION(isBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_setBlendAdditive
		#define GEODE_STATICS_setBlendAdditive
		GEODE_AS_STATIC_FUNCTION(setBlendAdditive) 
	#endif

	#ifndef GEODE_STATICS_getStartSize
		#define GEODE_STATICS_getStartSize
		GEODE_AS_STATIC_FUNCTION(getStartSize) 
	#endif

	#ifndef GEODE_STATICS_setStartSize
		#define GEODE_STATICS_setStartSize
		GEODE_AS_STATIC_FUNCTION(setStartSize) 
	#endif

	#ifndef GEODE_STATICS_getStartSizeVar
		#define GEODE_STATICS_getStartSizeVar
		GEODE_AS_STATIC_FUNCTION(getStartSizeVar) 
	#endif

	#ifndef GEODE_STATICS_setStartSizeVar
		#define GEODE_STATICS_setStartSizeVar
		GEODE_AS_STATIC_FUNCTION(setStartSizeVar) 
	#endif

	#ifndef GEODE_STATICS_getEndSize
		#define GEODE_STATICS_getEndSize
		GEODE_AS_STATIC_FUNCTION(getEndSize) 
	#endif

	#ifndef GEODE_STATICS_setEndSize
		#define GEODE_STATICS_setEndSize
		GEODE_AS_STATIC_FUNCTION(setEndSize) 
	#endif

	#ifndef GEODE_STATICS_getEndSizeVar
		#define GEODE_STATICS_getEndSizeVar
		GEODE_AS_STATIC_FUNCTION(getEndSizeVar) 
	#endif

	#ifndef GEODE_STATICS_setEndSizeVar
		#define GEODE_STATICS_setEndSizeVar
		GEODE_AS_STATIC_FUNCTION(setEndSizeVar) 
	#endif

	#ifndef GEODE_STATICS_getStartColor
		#define GEODE_STATICS_getStartColor
		GEODE_AS_STATIC_FUNCTION(getStartColor) 
	#endif

	#ifndef GEODE_STATICS_setStartColor
		#define GEODE_STATICS_setStartColor
		GEODE_AS_STATIC_FUNCTION(setStartColor) 
	#endif

	#ifndef GEODE_STATICS_getStartColorVar
		#define GEODE_STATICS_getStartColorVar
		GEODE_AS_STATIC_FUNCTION(getStartColorVar) 
	#endif

	#ifndef GEODE_STATICS_setStartColorVar
		#define GEODE_STATICS_setStartColorVar
		GEODE_AS_STATIC_FUNCTION(setStartColorVar) 
	#endif

	#ifndef GEODE_STATICS_getEndColor
		#define GEODE_STATICS_getEndColor
		GEODE_AS_STATIC_FUNCTION(getEndColor) 
	#endif

	#ifndef GEODE_STATICS_setEndColor
		#define GEODE_STATICS_setEndColor
		GEODE_AS_STATIC_FUNCTION(setEndColor) 
	#endif

	#ifndef GEODE_STATICS_getEndColorVar
		#define GEODE_STATICS_getEndColorVar
		GEODE_AS_STATIC_FUNCTION(getEndColorVar) 
	#endif

	#ifndef GEODE_STATICS_setEndColorVar
		#define GEODE_STATICS_setEndColorVar
		GEODE_AS_STATIC_FUNCTION(setEndColorVar) 
	#endif

	#ifndef GEODE_STATICS_getStartSpin
		#define GEODE_STATICS_getStartSpin
		GEODE_AS_STATIC_FUNCTION(getStartSpin) 
	#endif

	#ifndef GEODE_STATICS_setStartSpin
		#define GEODE_STATICS_setStartSpin
		GEODE_AS_STATIC_FUNCTION(setStartSpin) 
	#endif

	#ifndef GEODE_STATICS_getStartSpinVar
		#define GEODE_STATICS_getStartSpinVar
		GEODE_AS_STATIC_FUNCTION(getStartSpinVar) 
	#endif

	#ifndef GEODE_STATICS_setStartSpinVar
		#define GEODE_STATICS_setStartSpinVar
		GEODE_AS_STATIC_FUNCTION(setStartSpinVar) 
	#endif

	#ifndef GEODE_STATICS_getEndSpin
		#define GEODE_STATICS_getEndSpin
		GEODE_AS_STATIC_FUNCTION(getEndSpin) 
	#endif

	#ifndef GEODE_STATICS_setEndSpin
		#define GEODE_STATICS_setEndSpin
		GEODE_AS_STATIC_FUNCTION(setEndSpin) 
	#endif

	#ifndef GEODE_STATICS_getEndSpinVar
		#define GEODE_STATICS_getEndSpinVar
		GEODE_AS_STATIC_FUNCTION(getEndSpinVar) 
	#endif

	#ifndef GEODE_STATICS_setEndSpinVar
		#define GEODE_STATICS_setEndSpinVar
		GEODE_AS_STATIC_FUNCTION(setEndSpinVar) 
	#endif

	#ifndef GEODE_STATICS_getEmissionRate
		#define GEODE_STATICS_getEmissionRate
		GEODE_AS_STATIC_FUNCTION(getEmissionRate) 
	#endif

	#ifndef GEODE_STATICS_setEmissionRate
		#define GEODE_STATICS_setEmissionRate
		GEODE_AS_STATIC_FUNCTION(setEmissionRate) 
	#endif

	#ifndef GEODE_STATICS_getTotalParticles
		#define GEODE_STATICS_getTotalParticles
		GEODE_AS_STATIC_FUNCTION(getTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_setTotalParticles
		#define GEODE_STATICS_setTotalParticles
		GEODE_AS_STATIC_FUNCTION(setTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_getOpacityModifyRGB
		#define GEODE_STATICS_getOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(getOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_setOpacityModifyRGB
		#define GEODE_STATICS_setOpacityModifyRGB
		GEODE_AS_STATIC_FUNCTION(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_STATICS_getPositionType
		#define GEODE_STATICS_getPositionType
		GEODE_AS_STATIC_FUNCTION(getPositionType) 
	#endif

	#ifndef GEODE_STATICS_setPositionType
		#define GEODE_STATICS_setPositionType
		GEODE_AS_STATIC_FUNCTION(setPositionType) 
	#endif

	#ifndef GEODE_STATICS_isAutoRemoveOnFinish
		#define GEODE_STATICS_isAutoRemoveOnFinish
		GEODE_AS_STATIC_FUNCTION(isAutoRemoveOnFinish) 
	#endif

	#ifndef GEODE_STATICS_setAutoRemoveOnFinish
		#define GEODE_STATICS_setAutoRemoveOnFinish
		GEODE_AS_STATIC_FUNCTION(setAutoRemoveOnFinish) 
	#endif

	#ifndef GEODE_STATICS_getEmitterMode
		#define GEODE_STATICS_getEmitterMode
		GEODE_AS_STATIC_FUNCTION(getEmitterMode) 
	#endif

	#ifndef GEODE_STATICS_setEmitterMode
		#define GEODE_STATICS_setEmitterMode
		GEODE_AS_STATIC_FUNCTION(setEmitterMode) 
	#endif

	#ifndef GEODE_STATICS_initWithTotalParticles
		#define GEODE_STATICS_initWithTotalParticles
		GEODE_AS_STATIC_FUNCTION(initWithTotalParticles) 
	#endif

	#ifndef GEODE_STATICS_updateQuadWithParticle
		#define GEODE_STATICS_updateQuadWithParticle
		GEODE_AS_STATIC_FUNCTION(updateQuadWithParticle) 
	#endif

	#ifndef GEODE_STATICS_postStep
		#define GEODE_STATICS_postStep
		GEODE_AS_STATIC_FUNCTION(postStep) 
	#endif

	#ifndef GEODE_STATICS_updateWithNoTime
		#define GEODE_STATICS_updateWithNoTime
		GEODE_AS_STATIC_FUNCTION(updateWithNoTime) 
	#endif

	#ifndef GEODE_STATICS_updateBlendFunc
		#define GEODE_STATICS_updateBlendFunc
		GEODE_AS_STATIC_FUNCTION(updateBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_addParticle
		#define GEODE_STATICS_addParticle
		GEODE_AS_STATIC_FUNCTION(addParticle) 
	#endif

	#ifndef GEODE_STATICS_calculateWorldSpace
		#define GEODE_STATICS_calculateWorldSpace
		GEODE_AS_STATIC_FUNCTION(calculateWorldSpace) 
	#endif

	#ifndef GEODE_STATICS_getParticleDrawCost
		#define GEODE_STATICS_getParticleDrawCost
		GEODE_AS_STATIC_FUNCTION(getParticleDrawCost) 
	#endif

	#ifndef GEODE_STATICS_getTimeElapsed
		#define GEODE_STATICS_getTimeElapsed
		GEODE_AS_STATIC_FUNCTION(getTimeElapsed) 
	#endif

	#ifndef GEODE_STATICS_initParticle
		#define GEODE_STATICS_initParticle
		GEODE_AS_STATIC_FUNCTION(initParticle) 
	#endif

	#ifndef GEODE_STATICS_initWithDictionary
		#define GEODE_STATICS_initWithDictionary
		GEODE_AS_STATIC_FUNCTION(initWithDictionary) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_isFull
		#define GEODE_STATICS_isFull
		GEODE_AS_STATIC_FUNCTION(isFull) 
	#endif

	#ifndef GEODE_STATICS_loadDefaults
		#define GEODE_STATICS_loadDefaults
		GEODE_AS_STATIC_FUNCTION(loadDefaults) 
	#endif

	#ifndef GEODE_STATICS_loadScaledDefaults
		#define GEODE_STATICS_loadScaledDefaults
		GEODE_AS_STATIC_FUNCTION(loadScaledDefaults) 
	#endif

	#ifndef GEODE_STATICS_resetSystem
		#define GEODE_STATICS_resetSystem
		GEODE_AS_STATIC_FUNCTION(resetSystem) 
	#endif

	#ifndef GEODE_STATICS_resumeSystem
		#define GEODE_STATICS_resumeSystem
		GEODE_AS_STATIC_FUNCTION(resumeSystem) 
	#endif

	#ifndef GEODE_STATICS_saveDefaults
		#define GEODE_STATICS_saveDefaults
		GEODE_AS_STATIC_FUNCTION(saveDefaults) 
	#endif

	#ifndef GEODE_STATICS_stopSystem
		#define GEODE_STATICS_stopSystem
		GEODE_AS_STATIC_FUNCTION(stopSystem) 
	#endif

	#ifndef GEODE_STATICS_updateVisible
		#define GEODE_STATICS_updateVisible
		GEODE_AS_STATIC_FUNCTION(updateVisible) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTotalParticles
		#define GEODE_CONCEPT_CHECK_createWithTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTotalParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBatchNode
		#define GEODE_CONCEPT_CHECK_getBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(getBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBatchNode
		#define GEODE_CONCEPT_CHECK_setBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(setBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleCount
		#define GEODE_CONCEPT_CHECK_getParticleCount
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDuration
		#define GEODE_CONCEPT_CHECK_getDuration
		GEODE_CONCEPT_FUNCTION_CHECK(getDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDuration
		#define GEODE_CONCEPT_CHECK_setDuration
		GEODE_CONCEPT_FUNCTION_CHECK(setDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSourcePosition
		#define GEODE_CONCEPT_CHECK_getSourcePosition
		GEODE_CONCEPT_FUNCTION_CHECK(getSourcePosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSourcePosition
		#define GEODE_CONCEPT_CHECK_setSourcePosition
		GEODE_CONCEPT_FUNCTION_CHECK(setSourcePosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPosVar
		#define GEODE_CONCEPT_CHECK_getPosVar
		GEODE_CONCEPT_FUNCTION_CHECK(getPosVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosVar
		#define GEODE_CONCEPT_CHECK_setPosVar
		GEODE_CONCEPT_FUNCTION_CHECK(setPosVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLife
		#define GEODE_CONCEPT_CHECK_getLife
		GEODE_CONCEPT_FUNCTION_CHECK(getLife) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLife
		#define GEODE_CONCEPT_CHECK_setLife
		GEODE_CONCEPT_FUNCTION_CHECK(setLife) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLifeVar
		#define GEODE_CONCEPT_CHECK_getLifeVar
		GEODE_CONCEPT_FUNCTION_CHECK(getLifeVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLifeVar
		#define GEODE_CONCEPT_CHECK_setLifeVar
		GEODE_CONCEPT_FUNCTION_CHECK(setLifeVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAngle
		#define GEODE_CONCEPT_CHECK_getAngle
		GEODE_CONCEPT_FUNCTION_CHECK(getAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAngle
		#define GEODE_CONCEPT_CHECK_setAngle
		GEODE_CONCEPT_FUNCTION_CHECK(setAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAngleVar
		#define GEODE_CONCEPT_CHECK_getAngleVar
		GEODE_CONCEPT_FUNCTION_CHECK(getAngleVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAngleVar
		#define GEODE_CONCEPT_CHECK_setAngleVar
		GEODE_CONCEPT_FUNCTION_CHECK(setAngleVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEmissionRate
		#define GEODE_CONCEPT_CHECK_updateEmissionRate
		GEODE_CONCEPT_FUNCTION_CHECK(updateEmissionRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGravity
		#define GEODE_CONCEPT_CHECK_getGravity
		GEODE_CONCEPT_FUNCTION_CHECK(getGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGravity
		#define GEODE_CONCEPT_CHECK_setGravity
		GEODE_CONCEPT_FUNCTION_CHECK(setGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpeed
		#define GEODE_CONCEPT_CHECK_getSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(getSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpeed
		#define GEODE_CONCEPT_CHECK_setSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(setSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpeedVar
		#define GEODE_CONCEPT_CHECK_getSpeedVar
		GEODE_CONCEPT_FUNCTION_CHECK(getSpeedVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSpeedVar
		#define GEODE_CONCEPT_CHECK_setSpeedVar
		GEODE_CONCEPT_FUNCTION_CHECK(setSpeedVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTangentialAccel
		#define GEODE_CONCEPT_CHECK_getTangentialAccel
		GEODE_CONCEPT_FUNCTION_CHECK(getTangentialAccel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTangentialAccel
		#define GEODE_CONCEPT_CHECK_setTangentialAccel
		GEODE_CONCEPT_FUNCTION_CHECK(setTangentialAccel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTangentialAccelVar
		#define GEODE_CONCEPT_CHECK_getTangentialAccelVar
		GEODE_CONCEPT_FUNCTION_CHECK(getTangentialAccelVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTangentialAccelVar
		#define GEODE_CONCEPT_CHECK_setTangentialAccelVar
		GEODE_CONCEPT_FUNCTION_CHECK(setTangentialAccelVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRadialAccel
		#define GEODE_CONCEPT_CHECK_getRadialAccel
		GEODE_CONCEPT_FUNCTION_CHECK(getRadialAccel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRadialAccel
		#define GEODE_CONCEPT_CHECK_setRadialAccel
		GEODE_CONCEPT_FUNCTION_CHECK(setRadialAccel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRadialAccelVar
		#define GEODE_CONCEPT_CHECK_getRadialAccelVar
		GEODE_CONCEPT_FUNCTION_CHECK(getRadialAccelVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRadialAccelVar
		#define GEODE_CONCEPT_CHECK_setRadialAccelVar
		GEODE_CONCEPT_FUNCTION_CHECK(setRadialAccelVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotationIsDir
		#define GEODE_CONCEPT_CHECK_getRotationIsDir
		GEODE_CONCEPT_FUNCTION_CHECK(getRotationIsDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationIsDir
		#define GEODE_CONCEPT_CHECK_setRotationIsDir
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationIsDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartRadius
		#define GEODE_CONCEPT_CHECK_getStartRadius
		GEODE_CONCEPT_FUNCTION_CHECK(getStartRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartRadius
		#define GEODE_CONCEPT_CHECK_setStartRadius
		GEODE_CONCEPT_FUNCTION_CHECK(setStartRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartRadiusVar
		#define GEODE_CONCEPT_CHECK_getStartRadiusVar
		GEODE_CONCEPT_FUNCTION_CHECK(getStartRadiusVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartRadiusVar
		#define GEODE_CONCEPT_CHECK_setStartRadiusVar
		GEODE_CONCEPT_FUNCTION_CHECK(setStartRadiusVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndRadius
		#define GEODE_CONCEPT_CHECK_getEndRadius
		GEODE_CONCEPT_FUNCTION_CHECK(getEndRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndRadius
		#define GEODE_CONCEPT_CHECK_setEndRadius
		GEODE_CONCEPT_FUNCTION_CHECK(setEndRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndRadiusVar
		#define GEODE_CONCEPT_CHECK_getEndRadiusVar
		GEODE_CONCEPT_FUNCTION_CHECK(getEndRadiusVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndRadiusVar
		#define GEODE_CONCEPT_CHECK_setEndRadiusVar
		GEODE_CONCEPT_FUNCTION_CHECK(setEndRadiusVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotatePerSecond
		#define GEODE_CONCEPT_CHECK_getRotatePerSecond
		GEODE_CONCEPT_FUNCTION_CHECK(getRotatePerSecond) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotatePerSecond
		#define GEODE_CONCEPT_CHECK_setRotatePerSecond
		GEODE_CONCEPT_FUNCTION_CHECK(setRotatePerSecond) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotatePerSecondVar
		#define GEODE_CONCEPT_CHECK_getRotatePerSecondVar
		GEODE_CONCEPT_FUNCTION_CHECK(getRotatePerSecondVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotatePerSecondVar
		#define GEODE_CONCEPT_CHECK_setRotatePerSecondVar
		GEODE_CONCEPT_FUNCTION_CHECK(setRotatePerSecondVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isActive
		#define GEODE_CONCEPT_CHECK_isActive
		GEODE_CONCEPT_FUNCTION_CHECK(isActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBlendAdditive
		#define GEODE_CONCEPT_CHECK_isBlendAdditive
		GEODE_CONCEPT_FUNCTION_CHECK(isBlendAdditive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendAdditive
		#define GEODE_CONCEPT_CHECK_setBlendAdditive
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendAdditive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartSize
		#define GEODE_CONCEPT_CHECK_getStartSize
		GEODE_CONCEPT_FUNCTION_CHECK(getStartSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartSize
		#define GEODE_CONCEPT_CHECK_setStartSize
		GEODE_CONCEPT_FUNCTION_CHECK(setStartSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartSizeVar
		#define GEODE_CONCEPT_CHECK_getStartSizeVar
		GEODE_CONCEPT_FUNCTION_CHECK(getStartSizeVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartSizeVar
		#define GEODE_CONCEPT_CHECK_setStartSizeVar
		GEODE_CONCEPT_FUNCTION_CHECK(setStartSizeVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndSize
		#define GEODE_CONCEPT_CHECK_getEndSize
		GEODE_CONCEPT_FUNCTION_CHECK(getEndSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndSize
		#define GEODE_CONCEPT_CHECK_setEndSize
		GEODE_CONCEPT_FUNCTION_CHECK(setEndSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndSizeVar
		#define GEODE_CONCEPT_CHECK_getEndSizeVar
		GEODE_CONCEPT_FUNCTION_CHECK(getEndSizeVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndSizeVar
		#define GEODE_CONCEPT_CHECK_setEndSizeVar
		GEODE_CONCEPT_FUNCTION_CHECK(setEndSizeVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartColor
		#define GEODE_CONCEPT_CHECK_getStartColor
		GEODE_CONCEPT_FUNCTION_CHECK(getStartColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartColor
		#define GEODE_CONCEPT_CHECK_setStartColor
		GEODE_CONCEPT_FUNCTION_CHECK(setStartColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartColorVar
		#define GEODE_CONCEPT_CHECK_getStartColorVar
		GEODE_CONCEPT_FUNCTION_CHECK(getStartColorVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartColorVar
		#define GEODE_CONCEPT_CHECK_setStartColorVar
		GEODE_CONCEPT_FUNCTION_CHECK(setStartColorVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndColor
		#define GEODE_CONCEPT_CHECK_getEndColor
		GEODE_CONCEPT_FUNCTION_CHECK(getEndColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndColor
		#define GEODE_CONCEPT_CHECK_setEndColor
		GEODE_CONCEPT_FUNCTION_CHECK(setEndColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndColorVar
		#define GEODE_CONCEPT_CHECK_getEndColorVar
		GEODE_CONCEPT_FUNCTION_CHECK(getEndColorVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndColorVar
		#define GEODE_CONCEPT_CHECK_setEndColorVar
		GEODE_CONCEPT_FUNCTION_CHECK(setEndColorVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartSpin
		#define GEODE_CONCEPT_CHECK_getStartSpin
		GEODE_CONCEPT_FUNCTION_CHECK(getStartSpin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartSpin
		#define GEODE_CONCEPT_CHECK_setStartSpin
		GEODE_CONCEPT_FUNCTION_CHECK(setStartSpin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartSpinVar
		#define GEODE_CONCEPT_CHECK_getStartSpinVar
		GEODE_CONCEPT_FUNCTION_CHECK(getStartSpinVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartSpinVar
		#define GEODE_CONCEPT_CHECK_setStartSpinVar
		GEODE_CONCEPT_FUNCTION_CHECK(setStartSpinVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndSpin
		#define GEODE_CONCEPT_CHECK_getEndSpin
		GEODE_CONCEPT_FUNCTION_CHECK(getEndSpin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndSpin
		#define GEODE_CONCEPT_CHECK_setEndSpin
		GEODE_CONCEPT_FUNCTION_CHECK(setEndSpin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndSpinVar
		#define GEODE_CONCEPT_CHECK_getEndSpinVar
		GEODE_CONCEPT_FUNCTION_CHECK(getEndSpinVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEndSpinVar
		#define GEODE_CONCEPT_CHECK_setEndSpinVar
		GEODE_CONCEPT_FUNCTION_CHECK(setEndSpinVar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEmissionRate
		#define GEODE_CONCEPT_CHECK_getEmissionRate
		GEODE_CONCEPT_FUNCTION_CHECK(getEmissionRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEmissionRate
		#define GEODE_CONCEPT_CHECK_setEmissionRate
		GEODE_CONCEPT_FUNCTION_CHECK(setEmissionRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalParticles
		#define GEODE_CONCEPT_CHECK_getTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTotalParticles
		#define GEODE_CONCEPT_CHECK_setTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(setTotalParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_getOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(getOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		#define GEODE_CONCEPT_CHECK_setOpacityModifyRGB
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacityModifyRGB) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPositionType
		#define GEODE_CONCEPT_CHECK_getPositionType
		GEODE_CONCEPT_FUNCTION_CHECK(getPositionType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPositionType
		#define GEODE_CONCEPT_CHECK_setPositionType
		GEODE_CONCEPT_FUNCTION_CHECK(setPositionType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAutoRemoveOnFinish
		#define GEODE_CONCEPT_CHECK_isAutoRemoveOnFinish
		GEODE_CONCEPT_FUNCTION_CHECK(isAutoRemoveOnFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAutoRemoveOnFinish
		#define GEODE_CONCEPT_CHECK_setAutoRemoveOnFinish
		GEODE_CONCEPT_FUNCTION_CHECK(setAutoRemoveOnFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEmitterMode
		#define GEODE_CONCEPT_CHECK_getEmitterMode
		GEODE_CONCEPT_FUNCTION_CHECK(getEmitterMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEmitterMode
		#define GEODE_CONCEPT_CHECK_setEmitterMode
		GEODE_CONCEPT_FUNCTION_CHECK(setEmitterMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTotalParticles
		#define GEODE_CONCEPT_CHECK_initWithTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTotalParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateQuadWithParticle
		#define GEODE_CONCEPT_CHECK_updateQuadWithParticle
		GEODE_CONCEPT_FUNCTION_CHECK(updateQuadWithParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postStep
		#define GEODE_CONCEPT_CHECK_postStep
		GEODE_CONCEPT_FUNCTION_CHECK(postStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateWithNoTime
		#define GEODE_CONCEPT_CHECK_updateWithNoTime
		GEODE_CONCEPT_FUNCTION_CHECK(updateWithNoTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendFunc
		#define GEODE_CONCEPT_CHECK_updateBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addParticle
		#define GEODE_CONCEPT_CHECK_addParticle
		GEODE_CONCEPT_FUNCTION_CHECK(addParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateWorldSpace
		#define GEODE_CONCEPT_CHECK_calculateWorldSpace
		GEODE_CONCEPT_FUNCTION_CHECK(calculateWorldSpace) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleDrawCost
		#define GEODE_CONCEPT_CHECK_getParticleDrawCost
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleDrawCost) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeElapsed
		#define GEODE_CONCEPT_CHECK_getTimeElapsed
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeElapsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initParticle
		#define GEODE_CONCEPT_CHECK_initParticle
		GEODE_CONCEPT_FUNCTION_CHECK(initParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDictionary
		#define GEODE_CONCEPT_CHECK_initWithDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFile
		#define GEODE_CONCEPT_CHECK_initWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFull
		#define GEODE_CONCEPT_CHECK_isFull
		GEODE_CONCEPT_FUNCTION_CHECK(isFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDefaults
		#define GEODE_CONCEPT_CHECK_loadDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(loadDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadScaledDefaults
		#define GEODE_CONCEPT_CHECK_loadScaledDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(loadScaledDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSystem
		#define GEODE_CONCEPT_CHECK_resetSystem
		GEODE_CONCEPT_FUNCTION_CHECK(resetSystem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeSystem
		#define GEODE_CONCEPT_CHECK_resumeSystem
		GEODE_CONCEPT_FUNCTION_CHECK(resumeSystem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveDefaults
		#define GEODE_CONCEPT_CHECK_saveDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(saveDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopSystem
		#define GEODE_CONCEPT_CHECK_stopSystem
		GEODE_CONCEPT_FUNCTION_CHECK(stopSystem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisible
		#define GEODE_CONCEPT_CHECK_updateVisible
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisible) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCParticleSystem> : ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystem>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystem>>::ModifyBase;
		using Base = cocos2d::CCParticleSystem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCParticleSystem@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCParticleSystem, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCParticleSystem@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCParticleSystem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCParticleSystem::create)), Default, cocos2d::CCParticleSystem, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleSystem::createWithTotalParticles)), Default, cocos2d::CCParticleSystem, createWithTotalParticles, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::update)), Thiscall, cocos2d::CCParticleSystem, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::init)), Thiscall, cocos2d::CCParticleSystem, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setScaleX)), Thiscall, cocos2d::CCParticleSystem, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setScaleY)), Thiscall, cocos2d::CCParticleSystem, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setScale)), Thiscall, cocos2d::CCParticleSystem, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setVisible)), Thiscall, cocos2d::CCParticleSystem, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRotation)), Thiscall, cocos2d::CCParticleSystem, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getBatchNode)), Thiscall, cocos2d::CCParticleSystem, getBatchNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCParticleBatchNode*>::func(&cocos2d::CCParticleSystem::setBatchNode)), Thiscall, cocos2d::CCParticleSystem, setBatchNode, cocos2d::CCParticleBatchNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getParticleCount)), Thiscall, cocos2d::CCParticleSystem, getParticleCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getDuration)), Thiscall, cocos2d::CCParticleSystem, getDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setDuration)), Thiscall, cocos2d::CCParticleSystem, setDuration, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getSourcePosition)), Thiscall, cocos2d::CCParticleSystem, getSourcePosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::setSourcePosition)), Thiscall, cocos2d::CCParticleSystem, setSourcePosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getPosVar)), Thiscall, cocos2d::CCParticleSystem, getPosVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::setPosVar)), Thiscall, cocos2d::CCParticleSystem, setPosVar, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getLife)), Thiscall, cocos2d::CCParticleSystem, getLife, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setLife)), Thiscall, cocos2d::CCParticleSystem, setLife, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getLifeVar)), Thiscall, cocos2d::CCParticleSystem, getLifeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setLifeVar)), Thiscall, cocos2d::CCParticleSystem, setLifeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getAngle)), Thiscall, cocos2d::CCParticleSystem, getAngle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setAngle)), Thiscall, cocos2d::CCParticleSystem, setAngle, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getAngleVar)), Thiscall, cocos2d::CCParticleSystem, getAngleVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setAngleVar)), Thiscall, cocos2d::CCParticleSystem, setAngleVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateEmissionRate)), Thiscall, cocos2d::CCParticleSystem, updateEmissionRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getGravity)), Thiscall, cocos2d::CCParticleSystem, getGravity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::setGravity)), Thiscall, cocos2d::CCParticleSystem, setGravity, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getSpeed)), Thiscall, cocos2d::CCParticleSystem, getSpeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setSpeed)), Thiscall, cocos2d::CCParticleSystem, setSpeed, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getSpeedVar)), Thiscall, cocos2d::CCParticleSystem, getSpeedVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setSpeedVar)), Thiscall, cocos2d::CCParticleSystem, setSpeedVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTangentialAccel)), Thiscall, cocos2d::CCParticleSystem, getTangentialAccel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setTangentialAccel)), Thiscall, cocos2d::CCParticleSystem, setTangentialAccel, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTangentialAccelVar)), Thiscall, cocos2d::CCParticleSystem, getTangentialAccelVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setTangentialAccelVar)), Thiscall, cocos2d::CCParticleSystem, setTangentialAccelVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRadialAccel)), Thiscall, cocos2d::CCParticleSystem, getRadialAccel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRadialAccel)), Thiscall, cocos2d::CCParticleSystem, setRadialAccel, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRadialAccelVar)), Thiscall, cocos2d::CCParticleSystem, getRadialAccelVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRadialAccelVar)), Thiscall, cocos2d::CCParticleSystem, setRadialAccelVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRotationIsDir)), Thiscall, cocos2d::CCParticleSystem, getRotationIsDir, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setRotationIsDir)), Thiscall, cocos2d::CCParticleSystem, setRotationIsDir, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartRadius)), Thiscall, cocos2d::CCParticleSystem, getStartRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartRadius)), Thiscall, cocos2d::CCParticleSystem, setStartRadius, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartRadiusVar)), Thiscall, cocos2d::CCParticleSystem, getStartRadiusVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartRadiusVar)), Thiscall, cocos2d::CCParticleSystem, setStartRadiusVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndRadius)), Thiscall, cocos2d::CCParticleSystem, getEndRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndRadius)), Thiscall, cocos2d::CCParticleSystem, setEndRadius, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndRadiusVar)), Thiscall, cocos2d::CCParticleSystem, getEndRadiusVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndRadiusVar)), Thiscall, cocos2d::CCParticleSystem, setEndRadiusVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRotatePerSecond)), Thiscall, cocos2d::CCParticleSystem, getRotatePerSecond, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRotatePerSecond)), Thiscall, cocos2d::CCParticleSystem, setRotatePerSecond, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getRotatePerSecondVar)), Thiscall, cocos2d::CCParticleSystem, getRotatePerSecondVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setRotatePerSecondVar)), Thiscall, cocos2d::CCParticleSystem, setRotatePerSecondVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isActive)), Thiscall, cocos2d::CCParticleSystem, isActive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isBlendAdditive)), Thiscall, cocos2d::CCParticleSystem, isBlendAdditive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setBlendAdditive)), Thiscall, cocos2d::CCParticleSystem, setBlendAdditive, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSize)), Thiscall, cocos2d::CCParticleSystem, getStartSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSize)), Thiscall, cocos2d::CCParticleSystem, setStartSize, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSizeVar)), Thiscall, cocos2d::CCParticleSystem, getStartSizeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSizeVar)), Thiscall, cocos2d::CCParticleSystem, setStartSizeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSize)), Thiscall, cocos2d::CCParticleSystem, getEndSize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSize)), Thiscall, cocos2d::CCParticleSystem, setEndSize, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSizeVar)), Thiscall, cocos2d::CCParticleSystem, getEndSizeVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSizeVar)), Thiscall, cocos2d::CCParticleSystem, setEndSizeVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartColor)), Thiscall, cocos2d::CCParticleSystem, getStartColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor4F const&>::func(&cocos2d::CCParticleSystem::setStartColor)), Thiscall, cocos2d::CCParticleSystem, setStartColor, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartColorVar)), Thiscall, cocos2d::CCParticleSystem, getStartColorVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor4F const&>::func(&cocos2d::CCParticleSystem::setStartColorVar)), Thiscall, cocos2d::CCParticleSystem, setStartColorVar, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndColor)), Thiscall, cocos2d::CCParticleSystem, getEndColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor4F const&>::func(&cocos2d::CCParticleSystem::setEndColor)), Thiscall, cocos2d::CCParticleSystem, setEndColor, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndColorVar)), Thiscall, cocos2d::CCParticleSystem, getEndColorVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccColor4F const&>::func(&cocos2d::CCParticleSystem::setEndColorVar)), Thiscall, cocos2d::CCParticleSystem, setEndColorVar, cocos2d::ccColor4F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSpin)), Thiscall, cocos2d::CCParticleSystem, getStartSpin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSpin)), Thiscall, cocos2d::CCParticleSystem, setStartSpin, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getStartSpinVar)), Thiscall, cocos2d::CCParticleSystem, getStartSpinVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setStartSpinVar)), Thiscall, cocos2d::CCParticleSystem, setStartSpinVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSpin)), Thiscall, cocos2d::CCParticleSystem, getEndSpin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSpin)), Thiscall, cocos2d::CCParticleSystem, setEndSpin, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEndSpinVar)), Thiscall, cocos2d::CCParticleSystem, getEndSpinVar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEndSpinVar)), Thiscall, cocos2d::CCParticleSystem, setEndSpinVar, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEmissionRate)), Thiscall, cocos2d::CCParticleSystem, getEmissionRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::setEmissionRate)), Thiscall, cocos2d::CCParticleSystem, setEmissionRate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTotalParticles)), Thiscall, cocos2d::CCParticleSystem, getTotalParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleSystem::setTotalParticles)), Thiscall, cocos2d::CCParticleSystem, setTotalParticles, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getOpacityModifyRGB)), Thiscall, cocos2d::CCParticleSystem, getOpacityModifyRGB, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setOpacityModifyRGB)), Thiscall, cocos2d::CCParticleSystem, setOpacityModifyRGB, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getPositionType)), Thiscall, cocos2d::CCParticleSystem, getPositionType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::tCCPositionType>::func(&cocos2d::CCParticleSystem::setPositionType)), Thiscall, cocos2d::CCParticleSystem, setPositionType, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isAutoRemoveOnFinish)), Thiscall, cocos2d::CCParticleSystem, isAutoRemoveOnFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCParticleSystem::setAutoRemoveOnFinish)), Thiscall, cocos2d::CCParticleSystem, setAutoRemoveOnFinish, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getEmitterMode)), Thiscall, cocos2d::CCParticleSystem, getEmitterMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&cocos2d::CCParticleSystem::setEmitterMode)), Thiscall, cocos2d::CCParticleSystem, setEmitterMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCParticleSystem::initWithTotalParticles)), Thiscall, cocos2d::CCParticleSystem, initWithTotalParticles, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::sCCParticle*, cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystem::updateQuadWithParticle)), Thiscall, cocos2d::CCParticleSystem, updateQuadWithParticle, cocos2d::sCCParticle*, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::postStep)), Thiscall, cocos2d::CCParticleSystem, postStep, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateWithNoTime)), Thiscall, cocos2d::CCParticleSystem, updateWithNoTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateBlendFunc)), Thiscall, cocos2d::CCParticleSystem, updateBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::ccBlendFunc>::func(&cocos2d::CCParticleSystem::setBlendFunc)), Thiscall, cocos2d::CCParticleSystem, setBlendFunc, cocos2d::ccBlendFunc)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getBlendFunc)), Thiscall, cocos2d::CCParticleSystem, getBlendFunc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTexture)), Thiscall, cocos2d::CCParticleSystem, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCParticleSystem::setTexture)), Thiscall, cocos2d::CCParticleSystem, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::addParticle)), Thiscall, cocos2d::CCParticleSystem, addParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::calculateWorldSpace)), Thiscall, cocos2d::CCParticleSystem, calculateWorldSpace, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getParticleDrawCost)), Thiscall, cocos2d::CCParticleSystem, getParticleDrawCost, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::getTimeElapsed)), Thiscall, cocos2d::CCParticleSystem, getTimeElapsed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::sCCParticle*>::func(&cocos2d::CCParticleSystem::initParticle)), Thiscall, cocos2d::CCParticleSystem, initParticle, cocos2d::sCCParticle*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*, bool>::func(&cocos2d::CCParticleSystem::initWithDictionary)), Thiscall, cocos2d::CCParticleSystem, initWithDictionary, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*, char const*, bool>::func(&cocos2d::CCParticleSystem::initWithDictionary)), Thiscall, cocos2d::CCParticleSystem, initWithDictionary, cocos2d::CCDictionary*, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCParticleSystem::initWithFile)), Thiscall, cocos2d::CCParticleSystem, initWithFile, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::isFull)), Thiscall, cocos2d::CCParticleSystem, isFull, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::loadDefaults)), Thiscall, cocos2d::CCParticleSystem, loadDefaults, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&cocos2d::CCParticleSystem::loadScaledDefaults)), Thiscall, cocos2d::CCParticleSystem, loadScaledDefaults, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::resetSystem)), Thiscall, cocos2d::CCParticleSystem, resetSystem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::resumeSystem)), Thiscall, cocos2d::CCParticleSystem, resumeSystem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::saveDefaults)), Thiscall, cocos2d::CCParticleSystem, saveDefaults, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::stopSystem)), Thiscall, cocos2d::CCParticleSystem, stopSystem, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystem::updateVisible)), Thiscall, cocos2d::CCParticleSystem, updateVisible, )
		}
	};
}
