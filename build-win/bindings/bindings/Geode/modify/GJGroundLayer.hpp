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

	#ifndef GEODE_STATICS_fadeInFinished
		#define GEODE_STATICS_fadeInFinished
		GEODE_AS_STATIC_FUNCTION(fadeInFinished) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadGroundSprites
		#define GEODE_STATICS_loadGroundSprites
		GEODE_AS_STATIC_FUNCTION(loadGroundSprites) 
	#endif

	#ifndef GEODE_STATICS_scaleGround
		#define GEODE_STATICS_scaleGround
		GEODE_AS_STATIC_FUNCTION(scaleGround) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e1a0, Default, GJGroundLayer, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27edf0, Thiscall, GJGroundLayer, showGround, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ee00, Thiscall, GJGroundLayer, fadeInGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27eff0, Thiscall, GJGroundLayer, fadeOutGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ea50, Thiscall, GJGroundLayer, createLine, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, deactivateGround, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27edf0, Thiscall, GJGroundLayer, fadeInFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, getGroundY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, hideShadows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e220, Thiscall, GJGroundLayer, init, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e790, Thiscall, GJGroundLayer, loadGroundSprites, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, positionGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ec40, Thiscall, GJGroundLayer, scaleGround, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, toggleVisible01, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, toggleVisible02, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, updateGround01Color, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, updateGround02Color, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, updateGroundPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, updateGroundWidth, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGroundLayer, updateLineBlend, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ee80, Thiscall, GJGroundLayer, updateShadows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ef20, Thiscall, GJGroundLayer, updateShadowXPos, float, float)
		}
	};
}
