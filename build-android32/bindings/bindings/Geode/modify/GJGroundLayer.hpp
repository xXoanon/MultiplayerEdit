#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGroundLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_showGround
		#define GEODE_STATICS_showGround
		GEODE_AS_STATIC_FUNCTION(showGround) 
	#endif

	#ifndef GEODE_STATICS_fadeInGround
		#define GEODE_STATICS_fadeInGround
		GEODE_AS_STATIC_FUNCTION(fadeInGround) 
	#endif

	#ifndef GEODE_STATICS_fadeOutGround
		#define GEODE_STATICS_fadeOutGround
		GEODE_AS_STATIC_FUNCTION(fadeOutGround) 
	#endif

	#ifndef GEODE_STATICS_createLine
		#define GEODE_STATICS_createLine
		GEODE_AS_STATIC_FUNCTION(createLine) 
	#endif

	#ifndef GEODE_STATICS_deactivateGround
		#define GEODE_STATICS_deactivateGround
		GEODE_AS_STATIC_FUNCTION(deactivateGround) 
	#endif

	#ifndef GEODE_STATICS_fadeInFinished
		#define GEODE_STATICS_fadeInFinished
		GEODE_AS_STATIC_FUNCTION(fadeInFinished) 
	#endif

	#ifndef GEODE_STATICS_getGroundY
		#define GEODE_STATICS_getGroundY
		GEODE_AS_STATIC_FUNCTION(getGroundY) 
	#endif

	#ifndef GEODE_STATICS_hideShadows
		#define GEODE_STATICS_hideShadows
		GEODE_AS_STATIC_FUNCTION(hideShadows) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadGroundSprites
		#define GEODE_STATICS_loadGroundSprites
		GEODE_AS_STATIC_FUNCTION(loadGroundSprites) 
	#endif

	#ifndef GEODE_STATICS_positionGround
		#define GEODE_STATICS_positionGround
		GEODE_AS_STATIC_FUNCTION(positionGround) 
	#endif

	#ifndef GEODE_STATICS_scaleGround
		#define GEODE_STATICS_scaleGround
		GEODE_AS_STATIC_FUNCTION(scaleGround) 
	#endif

	#ifndef GEODE_STATICS_toggleVisible01
		#define GEODE_STATICS_toggleVisible01
		GEODE_AS_STATIC_FUNCTION(toggleVisible01) 
	#endif

	#ifndef GEODE_STATICS_toggleVisible02
		#define GEODE_STATICS_toggleVisible02
		GEODE_AS_STATIC_FUNCTION(toggleVisible02) 
	#endif

	#ifndef GEODE_STATICS_updateGround01Color
		#define GEODE_STATICS_updateGround01Color
		GEODE_AS_STATIC_FUNCTION(updateGround01Color) 
	#endif

	#ifndef GEODE_STATICS_updateGround02Color
		#define GEODE_STATICS_updateGround02Color
		GEODE_AS_STATIC_FUNCTION(updateGround02Color) 
	#endif

	#ifndef GEODE_STATICS_updateGroundPos
		#define GEODE_STATICS_updateGroundPos
		GEODE_AS_STATIC_FUNCTION(updateGroundPos) 
	#endif

	#ifndef GEODE_STATICS_updateGroundWidth
		#define GEODE_STATICS_updateGroundWidth
		GEODE_AS_STATIC_FUNCTION(updateGroundWidth) 
	#endif

	#ifndef GEODE_STATICS_updateLineBlend
		#define GEODE_STATICS_updateLineBlend
		GEODE_AS_STATIC_FUNCTION(updateLineBlend) 
	#endif

	#ifndef GEODE_STATICS_updateShadows
		#define GEODE_STATICS_updateShadows
		GEODE_AS_STATIC_FUNCTION(updateShadows) 
	#endif

	#ifndef GEODE_STATICS_updateShadowXPos
		#define GEODE_STATICS_updateShadowXPos
		GEODE_AS_STATIC_FUNCTION(updateShadowXPos) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGround
		#define GEODE_CONCEPT_CHECK_showGround
		GEODE_CONCEPT_FUNCTION_CHECK(showGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInGround
		#define GEODE_CONCEPT_CHECK_fadeInGround
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutGround
		#define GEODE_CONCEPT_CHECK_fadeOutGround
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createLine
		#define GEODE_CONCEPT_CHECK_createLine
		GEODE_CONCEPT_FUNCTION_CHECK(createLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateGround
		#define GEODE_CONCEPT_CHECK_deactivateGround
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInFinished
		#define GEODE_CONCEPT_CHECK_fadeInFinished
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundY
		#define GEODE_CONCEPT_CHECK_getGroundY
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideShadows
		#define GEODE_CONCEPT_CHECK_hideShadows
		GEODE_CONCEPT_FUNCTION_CHECK(hideShadows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGroundSprites
		#define GEODE_CONCEPT_CHECK_loadGroundSprites
		GEODE_CONCEPT_FUNCTION_CHECK(loadGroundSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionGround
		#define GEODE_CONCEPT_CHECK_positionGround
		GEODE_CONCEPT_FUNCTION_CHECK(positionGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleGround
		#define GEODE_CONCEPT_CHECK_scaleGround
		GEODE_CONCEPT_FUNCTION_CHECK(scaleGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleVisible01
		#define GEODE_CONCEPT_CHECK_toggleVisible01
		GEODE_CONCEPT_FUNCTION_CHECK(toggleVisible01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleVisible02
		#define GEODE_CONCEPT_CHECK_toggleVisible02
		GEODE_CONCEPT_FUNCTION_CHECK(toggleVisible02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGround01Color
		#define GEODE_CONCEPT_CHECK_updateGround01Color
		GEODE_CONCEPT_FUNCTION_CHECK(updateGround01Color) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGround02Color
		#define GEODE_CONCEPT_CHECK_updateGround02Color
		GEODE_CONCEPT_FUNCTION_CHECK(updateGround02Color) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroundPos
		#define GEODE_CONCEPT_CHECK_updateGroundPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroundPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroundWidth
		#define GEODE_CONCEPT_CHECK_updateGroundWidth
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroundWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLineBlend
		#define GEODE_CONCEPT_CHECK_updateLineBlend
		GEODE_CONCEPT_FUNCTION_CHECK(updateLineBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShadows
		#define GEODE_CONCEPT_CHECK_updateShadows
		GEODE_CONCEPT_FUNCTION_CHECK(updateShadows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShadowXPos
		#define GEODE_CONCEPT_CHECK_updateShadowXPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateShadowXPos) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGroundLayer> : ModifyBase<ModifyDerive<Der, GJGroundLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGroundLayer>>;
		using ModifyBase<ModifyDerive<Der, GJGroundLayer>>::ModifyBase;
		using Base = GJGroundLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GJGroundLayer::create)), Default, GJGroundLayer, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GJGroundLayer::draw)), Default, GJGroundLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&GJGroundLayer::showGround)), Default, GJGroundLayer, showGround, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GJGroundLayer::fadeInGround)), Default, GJGroundLayer, fadeInGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&GJGroundLayer::fadeOutGround)), Default, GJGroundLayer, fadeOutGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&GJGroundLayer::createLine)), Default, GJGroundLayer, createLine, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJGroundLayer::deactivateGround)), Default, GJGroundLayer, deactivateGround, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJGroundLayer::fadeInFinished)), Default, GJGroundLayer, fadeInFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJGroundLayer::getGroundY)), Default, GJGroundLayer, getGroundY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJGroundLayer::hideShadows)), Default, GJGroundLayer, hideShadows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&GJGroundLayer::init)), Default, GJGroundLayer, init, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool>::func(&GJGroundLayer::loadGroundSprites)), Default, GJGroundLayer, loadGroundSprites, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJGroundLayer::positionGround)), Default, GJGroundLayer, positionGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&GJGroundLayer::scaleGround)), Default, GJGroundLayer, scaleGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GJGroundLayer::toggleVisible01)), Default, GJGroundLayer, toggleVisible01, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GJGroundLayer::toggleVisible02)), Default, GJGroundLayer, toggleVisible02, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&GJGroundLayer::updateGround01Color)), Default, GJGroundLayer, updateGround01Color, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B>::func(&GJGroundLayer::updateGround02Color)), Default, GJGroundLayer, updateGround02Color, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&GJGroundLayer::updateGroundPos)), Default, GJGroundLayer, updateGroundPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GJGroundLayer::updateGroundWidth)), Default, GJGroundLayer, updateGroundWidth, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GJGroundLayer::updateLineBlend)), Default, GJGroundLayer, updateLineBlend, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GJGroundLayer::updateShadows)), Default, GJGroundLayer, updateShadows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&GJGroundLayer::updateShadowXPos)), Default, GJGroundLayer, updateShadowXPos, float, float)
		}
	};
}
