#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LikeItemLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDislike
		#define GEODE_STATICS_onDislike
		GEODE_AS_STATIC_FUNCTION(onDislike) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_triggerLike
		#define GEODE_STATICS_triggerLike
		GEODE_AS_STATIC_FUNCTION(triggerLike) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDislike
		#define GEODE_CONCEPT_CHECK_onDislike
		GEODE_CONCEPT_FUNCTION_CHECK(onDislike) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLike
		#define GEODE_CONCEPT_CHECK_onLike
		GEODE_CONCEPT_FUNCTION_CHECK(onLike) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerLike
		#define GEODE_CONCEPT_CHECK_triggerLike
		GEODE_CONCEPT_FUNCTION_CHECK(triggerLike) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LikeItemLayer> : ModifyBase<ModifyDerive<Der, LikeItemLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LikeItemLayer>>;
		using ModifyBase<ModifyDerive<Der, LikeItemLayer>>::ModifyBase;
		using Base = LikeItemLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32dd60, Default, LikeItemLayer, create, LikeItemType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, LikeItemLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32de60, Thiscall, LikeItemLayer, init, LikeItemType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, LikeItemLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32e240, Thiscall, LikeItemLayer, onDislike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32e230, Thiscall, LikeItemLayer, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x32e250, Thiscall, LikeItemLayer, triggerLike, bool)
		}
	};
}
