#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBigSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_finishedLoadingSpriteAsync
		#define GEODE_STATICS_finishedLoadingSpriteAsync
		GEODE_AS_STATIC_FUNCTION(finishedLoadingSpriteAsync) 
	#endif

	#ifndef GEODE_STATICS_loadSpriteAsync
		#define GEODE_STATICS_loadSpriteAsync
		GEODE_AS_STATIC_FUNCTION(loadSpriteAsync) 
	#endif

	#ifndef GEODE_STATICS_unloadAll
		#define GEODE_STATICS_unloadAll
		GEODE_AS_STATIC_FUNCTION(unloadAll) 
	#endif

	#ifndef GEODE_STATICS_unloadSprite
		#define GEODE_STATICS_unloadSprite
		GEODE_AS_STATIC_FUNCTION(unloadSprite) 
	#endif

	#ifndef GEODE_STATICS_updateSpriteVisibility
		#define GEODE_STATICS_updateSpriteVisibility
		GEODE_AS_STATIC_FUNCTION(updateSpriteVisibility) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingSpriteAsync
		#define GEODE_CONCEPT_CHECK_finishedLoadingSpriteAsync
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingSpriteAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSpriteAsync
		#define GEODE_CONCEPT_CHECK_loadSpriteAsync
		GEODE_CONCEPT_FUNCTION_CHECK(loadSpriteAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadAll
		#define GEODE_CONCEPT_CHECK_unloadAll
		GEODE_CONCEPT_FUNCTION_CHECK(unloadAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadSprite
		#define GEODE_CONCEPT_CHECK_unloadSprite
		GEODE_CONCEPT_FUNCTION_CHECK(unloadSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteVisibility
		#define GEODE_CONCEPT_CHECK_updateSpriteVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJBigSprite> : ModifyBase<ModifyDerive<Der, GJBigSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBigSprite>>;
		using ModifyBase<ModifyDerive<Der, GJBigSprite>>::ModifyBase;
		using Base = GJBigSprite;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBigSprite, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBigSprite, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBigSprite, finishedLoadingSpriteAsync, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBigSprite, loadSpriteAsync, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBigSprite, unloadAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBigSprite, unloadSprite, gd::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBigSprite, updateSpriteVisibility, )
		}
	};
}
