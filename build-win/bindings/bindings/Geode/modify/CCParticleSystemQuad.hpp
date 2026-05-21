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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_setBatchNode
		#define GEODE_STATICS_setBatchNode
		GEODE_AS_STATIC_FUNCTION(setBatchNode) 
	#endif

	#ifndef GEODE_STATICS_setTotalParticles
		#define GEODE_STATICS_setTotalParticles
		GEODE_AS_STATIC_FUNCTION(setTotalParticles) 
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

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_allocMemory
		#define GEODE_STATICS_allocMemory
		GEODE_AS_STATIC_FUNCTION(allocMemory) 
	#endif

	#ifndef GEODE_STATICS_initIndices
		#define GEODE_STATICS_initIndices
		GEODE_AS_STATIC_FUNCTION(initIndices) 
	#endif

	#ifndef GEODE_STATICS_initTexCoordsWithRect
		#define GEODE_STATICS_initTexCoordsWithRect
		GEODE_AS_STATIC_FUNCTION(initTexCoordsWithRect) 
	#endif

	#ifndef GEODE_STATICS_listenBackToForeground
		#define GEODE_STATICS_listenBackToForeground
		GEODE_AS_STATIC_FUNCTION(listenBackToForeground) 
	#endif

	#ifndef GEODE_STATICS_setDisplayFrame
		#define GEODE_STATICS_setDisplayFrame
		GEODE_AS_STATIC_FUNCTION(setDisplayFrame) 
	#endif

	#ifndef GEODE_STATICS_setTextureWithRect
		#define GEODE_STATICS_setTextureWithRect
		GEODE_AS_STATIC_FUNCTION(setTextureWithRect) 
	#endif

	#ifndef GEODE_STATICS_setupVBO
		#define GEODE_STATICS_setupVBO
		GEODE_AS_STATIC_FUNCTION(setupVBO) 
	#endif

	#ifndef GEODE_STATICS_updateTexCoords
		#define GEODE_STATICS_updateTexCoords
		GEODE_AS_STATIC_FUNCTION(updateTexCoords) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTotalParticles
		#define GEODE_CONCEPT_CHECK_createWithTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTotalParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBatchNode
		#define GEODE_CONCEPT_CHECK_setBatchNode
		GEODE_CONCEPT_FUNCTION_CHECK(setBatchNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTotalParticles
		#define GEODE_CONCEPT_CHECK_setTotalParticles
		GEODE_CONCEPT_FUNCTION_CHECK(setTotalParticles) 
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

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allocMemory
		#define GEODE_CONCEPT_CHECK_allocMemory
		GEODE_CONCEPT_FUNCTION_CHECK(allocMemory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initIndices
		#define GEODE_CONCEPT_CHECK_initIndices
		GEODE_CONCEPT_FUNCTION_CHECK(initIndices) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initTexCoordsWithRect
		#define GEODE_CONCEPT_CHECK_initTexCoordsWithRect
		GEODE_CONCEPT_FUNCTION_CHECK(initTexCoordsWithRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listenBackToForeground
		#define GEODE_CONCEPT_CHECK_listenBackToForeground
		GEODE_CONCEPT_FUNCTION_CHECK(listenBackToForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDisplayFrame
		#define GEODE_CONCEPT_CHECK_setDisplayFrame
		GEODE_CONCEPT_FUNCTION_CHECK(setDisplayFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextureWithRect
		#define GEODE_CONCEPT_CHECK_setTextureWithRect
		GEODE_CONCEPT_FUNCTION_CHECK(setTextureWithRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupVBO
		#define GEODE_CONCEPT_CHECK_setupVBO
		GEODE_CONCEPT_FUNCTION_CHECK(setupVBO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupVBOandVAO
		#define GEODE_CONCEPT_CHECK_setupVBOandVAO
		GEODE_CONCEPT_FUNCTION_CHECK(setupVBOandVAO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTexCoords
		#define GEODE_CONCEPT_CHECK_updateTexCoords
		GEODE_CONCEPT_FUNCTION_CHECK(updateTexCoords) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCParticleSystemQuad> : ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCParticleSystemQuad>>::ModifyBase;
		using Base = cocos2d::CCParticleSystemQuad;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCParticleSystemQuad@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCParticleSystemQuad, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCParticleSystemQuad@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCParticleSystemQuad)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::create)), Default, cocos2d::CCParticleSystemQuad, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCParticleSystemQuad::create)), Default, cocos2d::CCParticleSystemQuad, create, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCParticleSystemQuad::createWithTotalParticles)), Default, cocos2d::CCParticleSystemQuad, createWithTotalParticles, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::draw)), Thiscall, cocos2d::CCParticleSystemQuad, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCParticleBatchNode*>::func(&cocos2d::CCParticleSystemQuad::setBatchNode)), Thiscall, cocos2d::CCParticleSystemQuad, setBatchNode, cocos2d::CCParticleBatchNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::CCParticleSystemQuad::setTotalParticles)), Thiscall, cocos2d::CCParticleSystemQuad, setTotalParticles, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCParticleSystemQuad::initWithTotalParticles)), Thiscall, cocos2d::CCParticleSystemQuad, initWithTotalParticles, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::sCCParticle*, cocos2d::CCPoint const&>::func(&cocos2d::CCParticleSystemQuad::updateQuadWithParticle)), Thiscall, cocos2d::CCParticleSystemQuad, updateQuadWithParticle, cocos2d::sCCParticle*, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::postStep)), Thiscall, cocos2d::CCParticleSystemQuad, postStep, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCParticleSystemQuad::setTexture)), Thiscall, cocos2d::CCParticleSystemQuad, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::allocMemory)), Thiscall, cocos2d::CCParticleSystemQuad, allocMemory, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::initIndices)), Thiscall, cocos2d::CCParticleSystemQuad, initIndices, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCRect const&>::func(&cocos2d::CCParticleSystemQuad::initTexCoordsWithRect)), Thiscall, cocos2d::CCParticleSystemQuad, initTexCoordsWithRect, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCParticleSystemQuad::listenBackToForeground)), Thiscall, cocos2d::CCParticleSystemQuad, listenBackToForeground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSpriteFrame*>::func(&cocos2d::CCParticleSystemQuad::setDisplayFrame)), Thiscall, cocos2d::CCParticleSystemQuad, setDisplayFrame, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&cocos2d::CCParticleSystemQuad::setTextureWithRect)), Thiscall, cocos2d::CCParticleSystemQuad, setTextureWithRect, cocos2d::CCTexture2D*, cocos2d::CCRect const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::setupVBO)), Thiscall, cocos2d::CCParticleSystemQuad, setupVBO, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCParticleSystemQuad::updateTexCoords)), Thiscall, cocos2d::CCParticleSystemQuad, updateTexCoords, )
		}
	};
}
