#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getGrid
		#define GEODE_STATICS_getGrid
		GEODE_AS_STATIC_FUNCTION(getGrid) 
	#endif

	#ifndef GEODE_STATICS_originalVertex
		#define GEODE_STATICS_originalVertex
		GEODE_AS_STATIC_FUNCTION(originalVertex) 
	#endif

	#ifndef GEODE_STATICS_setVertex
		#define GEODE_STATICS_setVertex
		GEODE_AS_STATIC_FUNCTION(setVertex) 
	#endif

	#ifndef GEODE_STATICS_vertex
		#define GEODE_STATICS_vertex
		GEODE_AS_STATIC_FUNCTION(vertex) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getGrid
		#define GEODE_CONCEPT_CHECK_getGrid
		GEODE_CONCEPT_FUNCTION_CHECK(getGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_originalVertex
		#define GEODE_CONCEPT_CHECK_originalVertex
		GEODE_CONCEPT_FUNCTION_CHECK(originalVertex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVertex
		#define GEODE_CONCEPT_CHECK_setVertex
		GEODE_CONCEPT_FUNCTION_CHECK(setVertex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_vertex
		#define GEODE_CONCEPT_CHECK_vertex
		GEODE_CONCEPT_FUNCTION_CHECK(vertex) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCGrid3DAction> : ModifyBase<ModifyDerive<Der, cocos2d::CCGrid3DAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCGrid3DAction>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCGrid3DAction>>::ModifyBase;
		using Base = cocos2d::CCGrid3DAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCGrid3DAction::getGrid)), Thiscall, cocos2d::CCGrid3DAction, getGrid, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCGrid3DAction::originalVertex)), Thiscall, cocos2d::CCGrid3DAction, originalVertex, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&, cocos2d::ccVertex3F const&>::func(&cocos2d::CCGrid3DAction::setVertex)), Thiscall, cocos2d::CCGrid3DAction, setVertex, cocos2d::CCPoint const&, cocos2d::ccVertex3F const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCGrid3DAction::vertex)), Thiscall, cocos2d::CCGrid3DAction, vertex, cocos2d::CCPoint const&)
		}
	};
}
