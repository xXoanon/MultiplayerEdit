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

	#ifndef GEODE_STATICS_afterDraw
		#define GEODE_STATICS_afterDraw
		GEODE_AS_STATIC_FUNCTION(afterDraw) 
	#endif

	#ifndef GEODE_STATICS_beforeDraw
		#define GEODE_STATICS_beforeDraw
		GEODE_AS_STATIC_FUNCTION(beforeDraw) 
	#endif

	#ifndef GEODE_STATICS_initWithSize
		#define GEODE_STATICS_initWithSize
		GEODE_AS_STATIC_FUNCTION(initWithSize) 
	#endif

	#ifndef GEODE_STATICS_set2DProjection
		#define GEODE_STATICS_set2DProjection
		GEODE_AS_STATIC_FUNCTION(set2DProjection) 
	#endif

	#ifndef GEODE_STATICS_setActive
		#define GEODE_STATICS_setActive
		GEODE_AS_STATIC_FUNCTION(setActive) 
	#endif

	#ifndef GEODE_STATICS_setTextureFlipped
		#define GEODE_STATICS_setTextureFlipped
		GEODE_AS_STATIC_FUNCTION(setTextureFlipped) 
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

	#ifndef GEODE_CONCEPT_CHECK_afterDraw
		#define GEODE_CONCEPT_CHECK_afterDraw
		GEODE_CONCEPT_FUNCTION_CHECK(afterDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beforeDraw
		#define GEODE_CONCEPT_CHECK_beforeDraw
		GEODE_CONCEPT_FUNCTION_CHECK(beforeDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSize
		#define GEODE_CONCEPT_CHECK_initWithSize
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_set2DProjection
		#define GEODE_CONCEPT_CHECK_set2DProjection
		GEODE_CONCEPT_FUNCTION_CHECK(set2DProjection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActive
		#define GEODE_CONCEPT_CHECK_setActive
		GEODE_CONCEPT_FUNCTION_CHECK(setActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextureFlipped
		#define GEODE_CONCEPT_CHECK_setTextureFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(setTextureFlipped) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCGridBase> : ModifyBase<ModifyDerive<Der, cocos2d::CCGridBase>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCGridBase>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCGridBase>>::ModifyBase;
		using Base = cocos2d::CCGridBase;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCGridBase@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCGridBase)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCGridBase::create)), Default, cocos2d::CCGridBase, create, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool>::func(&cocos2d::CCGridBase::create)), Default, cocos2d::CCGridBase, create, cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCGridBase::blit)), Thiscall, cocos2d::CCGridBase, blit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCGridBase::reuse)), Thiscall, cocos2d::CCGridBase, reuse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCGridBase::calculateVertexPoints)), Thiscall, cocos2d::CCGridBase, calculateVertexPoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCGridBase::afterDraw)), Thiscall, cocos2d::CCGridBase, afterDraw, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGridBase::beforeDraw)), Thiscall, cocos2d::CCGridBase, beforeDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCGridBase::initWithSize)), Thiscall, cocos2d::CCGridBase, initWithSize, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool>::func(&cocos2d::CCGridBase::initWithSize)), Thiscall, cocos2d::CCGridBase, initWithSize, cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCGridBase::set2DProjection)), Thiscall, cocos2d::CCGridBase, set2DProjection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCGridBase::setActive)), Thiscall, cocos2d::CCGridBase, setActive, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&cocos2d::CCGridBase::setTextureFlipped)), Thiscall, cocos2d::CCGridBase, setTextureFlipped, bool)
		}
	};
}
