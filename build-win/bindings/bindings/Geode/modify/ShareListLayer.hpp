#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareListLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_onUnlisted
		#define GEODE_STATICS_onUnlisted
		GEODE_AS_STATIC_FUNCTION(onUnlisted) 
	#endif

	#ifndef GEODE_STATICS_updateUnlistedF
		#define GEODE_STATICS_updateUnlistedF
		GEODE_AS_STATIC_FUNCTION(updateUnlistedF) 
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

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShare
		#define GEODE_CONCEPT_CHECK_onShare
		GEODE_CONCEPT_FUNCTION_CHECK(onShare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlisted
		#define GEODE_CONCEPT_CHECK_onUnlisted
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlisted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUnlistedF
		#define GEODE_CONCEPT_CHECK_updateUnlistedF
		GEODE_CONCEPT_FUNCTION_CHECK(updateUnlistedF) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareListLayer> : ModifyBase<ModifyDerive<Der, ShareListLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareListLayer>>;
		using ModifyBase<ModifyDerive<Der, ShareListLayer>>::ModifyBase;
		using Base = ShareListLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShareListLayer, create, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, ShareListLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309b20, Thiscall, ShareListLayer, init, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, ShareListLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x30acc0, Thiscall, ShareListLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x30af80, Thiscall, ShareListLayer, onShare, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x30ae30, Thiscall, ShareListLayer, onUnlisted, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x30aea0, Thiscall, ShareListLayer, updateUnlistedF, )
		}
	};
}
