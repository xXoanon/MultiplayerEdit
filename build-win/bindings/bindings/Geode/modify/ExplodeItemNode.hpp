#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ExplodeItemNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_createSprites
		#define GEODE_STATICS_createSprites
		GEODE_AS_STATIC_FUNCTION(createSprites) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSprites
		#define GEODE_CONCEPT_CHECK_createSprites
		GEODE_CONCEPT_FUNCTION_CHECK(createSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ExplodeItemNode> : ModifyBase<ModifyDerive<Der, ExplodeItemNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ExplodeItemNode>>;
		using ModifyBase<ModifyDerive<Der, ExplodeItemNode>>::ModifyBase;
		using Base = ExplodeItemNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3844f0, Default, ExplodeItemNode, create, cocos2d::CCRenderTexture*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x384f60, Thiscall, ExplodeItemNode, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3845b0, Thiscall, ExplodeItemNode, createSprites, int, int, float, float, float, float, float, float, cocos2d::ccColor4F, cocos2d::ccColor4F, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ExplodeItemNode, init, cocos2d::CCRenderTexture*)
		}
	};
}
