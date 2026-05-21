#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MenuGameLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_destroyPlayer
		#define GEODE_STATICS_destroyPlayer
		GEODE_AS_STATIC_FUNCTION(destroyPlayer) 
	#endif

	#ifndef GEODE_STATICS_getBGColor
		#define GEODE_STATICS_getBGColor
		GEODE_AS_STATIC_FUNCTION(getBGColor) 
	#endif

	#ifndef GEODE_STATICS_resetPlayer
		#define GEODE_STATICS_resetPlayer
		GEODE_AS_STATIC_FUNCTION(resetPlayer) 
	#endif

	#ifndef GEODE_STATICS_tryJump
		#define GEODE_STATICS_tryJump
		GEODE_AS_STATIC_FUNCTION(tryJump) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyPlayer
		#define GEODE_CONCEPT_CHECK_destroyPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(destroyPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGColor
		#define GEODE_CONCEPT_CHECK_getBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(getBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPlayer
		#define GEODE_CONCEPT_CHECK_resetPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(resetPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryJump
		#define GEODE_CONCEPT_CHECK_tryJump
		GEODE_CONCEPT_FUNCTION_CHECK(tryJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColors
		#define GEODE_CONCEPT_CHECK_updateColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateColors) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MenuGameLayer> : ModifyBase<ModifyDerive<Der, MenuGameLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MenuGameLayer>>;
		using ModifyBase<ModifyDerive<Der, MenuGameLayer>>::ModifyBase;
		using Base = MenuGameLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuGameLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x332240, Thiscall, MenuGameLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x331420, Thiscall, MenuGameLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x333600, Thiscall, MenuGameLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuGameLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuGameLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71240, Thiscall, MenuGameLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3337b0, Thiscall, MenuGameLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x333340, Thiscall, MenuGameLayer, destroyPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x331ca0, Thiscall, MenuGameLayer, getBGColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x332710, Thiscall, MenuGameLayer, resetPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x331f70, Thiscall, MenuGameLayer, tryJump, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x331b50, Thiscall, MenuGameLayer, updateColor, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuGameLayer, updateColors, )
		}
	};
}
