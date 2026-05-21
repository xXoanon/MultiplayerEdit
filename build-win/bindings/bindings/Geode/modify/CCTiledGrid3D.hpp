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

	#ifndef GEODE_STATICS_blit
		#define GEODE_STATICS_blit
		GEODE_AS_STATIC_FUNCTION(blit) 
	#endif

	#ifndef GEODE_STATICS_reuse
		#define GEODE_STATICS_reuse
		GEODE_AS_STATIC_FUNCTION(reuse) 
	#endif

	#ifndef GEODE_STATICS_calculateVertexPoints
		#define GEODE_STATICS_calculateVertexPoints
		GEODE_AS_STATIC_FUNCTION(calculateVertexPoints) 
	#endif

	#ifndef GEODE_STATICS_originalTile
		#define GEODE_STATICS_originalTile
		GEODE_AS_STATIC_FUNCTION(originalTile) 
	#endif

	#ifndef GEODE_STATICS_setTile
		#define GEODE_STATICS_setTile
		GEODE_AS_STATIC_FUNCTION(setTile) 
	#endif

	#ifndef GEODE_STATICS_tile
		#define GEODE_STATICS_tile
		GEODE_AS_STATIC_FUNCTION(tile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blit
		#define GEODE_CONCEPT_CHECK_blit
		GEODE_CONCEPT_FUNCTION_CHECK(blit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reuse
		#define GEODE_CONCEPT_CHECK_reuse
		GEODE_CONCEPT_FUNCTION_CHECK(reuse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateVertexPoints
		#define GEODE_CONCEPT_CHECK_calculateVertexPoints
		GEODE_CONCEPT_FUNCTION_CHECK(calculateVertexPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_originalTile
		#define GEODE_CONCEPT_CHECK_originalTile
		GEODE_CONCEPT_FUNCTION_CHECK(originalTile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTile
		#define GEODE_CONCEPT_CHECK_setTile
		GEODE_CONCEPT_FUNCTION_CHECK(setTile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tile
		#define GEODE_CONCEPT_CHECK_tile
		GEODE_CONCEPT_FUNCTION_CHECK(tile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTiledGrid3D> : ModifyBase<ModifyDerive<Der, cocos2d::CCTiledGrid3D>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTiledGrid3D>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTiledGrid3D>>::ModifyBase;
		using Base = cocos2d::CCTiledGrid3D;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTiledGrid3D@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTiledGrid3D, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTiledGrid3D@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTiledGrid3D)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCTiledGrid3D::create)), Default, cocos2d::CCTiledGrid3D, create, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool>::func(&cocos2d::CCTiledGrid3D::create)), Default, cocos2d::CCTiledGrid3D, create, cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTiledGrid3D::blit)), Thiscall, cocos2d::CCTiledGrid3D, blit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTiledGrid3D::reuse)), Thiscall, cocos2d::CCTiledGrid3D, reuse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTiledGrid3D::calculateVertexPoints)), Thiscall, cocos2d::CCTiledGrid3D, calculateVertexPoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTiledGrid3D::originalTile)), Thiscall, cocos2d::CCTiledGrid3D, originalTile, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::ccQuad3 const&>::func(&cocos2d::CCTiledGrid3D::setTile)), Thiscall, cocos2d::CCTiledGrid3D, setTile, cocos2d::CCPoint const&, cocos2d::ccQuad3 const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCTiledGrid3D::tile)), Thiscall, cocos2d::CCTiledGrid3D, tile, cocos2d::CCPoint const&)
		}
	};
}
