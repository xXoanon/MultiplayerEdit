#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpritePart.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_frameChanged
		#define GEODE_STATICS_frameChanged
		GEODE_AS_STATIC_FUNCTION(frameChanged) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_frameChanged
		#define GEODE_CONCEPT_CHECK_frameChanged
		GEODE_CONCEPT_FUNCTION_CHECK(frameChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBeingUsed
		#define GEODE_CONCEPT_CHECK_getBeingUsed
		GEODE_CONCEPT_FUNCTION_CHECK(getBeingUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideInactive
		#define GEODE_CONCEPT_CHECK_hideInactive
		GEODE_CONCEPT_FUNCTION_CHECK(hideInactive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markAsNotBeingUsed
		#define GEODE_CONCEPT_CHECK_markAsNotBeingUsed
		GEODE_CONCEPT_FUNCTION_CHECK(markAsNotBeingUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTextureRect
		#define GEODE_CONCEPT_CHECK_resetTextureRect
		GEODE_CONCEPT_FUNCTION_CHECK(resetTextureRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBeingUsed
		#define GEODE_CONCEPT_CHECK_setBeingUsed
		GEODE_CONCEPT_FUNCTION_CHECK(setBeingUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisplayFrame
		#define GEODE_CONCEPT_CHECK_updateDisplayFrame
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisplayFrame) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpritePart> : ModifyBase<ModifyDerive<Der, CCSpritePart>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpritePart>>;
		using ModifyBase<ModifyDerive<Der, CCSpritePart>>::ModifyBase;
		using Base = CCSpritePart;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x45890, Thiscall, CCSpritePart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, create, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, createWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46aa0, Thiscall, CCSpritePart, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x469f0, Thiscall, CCSpritePart, frameChanged, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, getBeingUsed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, hideInactive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, markAsNotBeingUsed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, resetTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, setBeingUsed, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCSpritePart, updateDisplayFrame, gd::string)
		}
	};
}
