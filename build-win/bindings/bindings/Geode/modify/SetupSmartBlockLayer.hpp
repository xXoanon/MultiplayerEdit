#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSmartBlockLayer.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAllowFlipping
		#define GEODE_STATICS_onAllowFlipping
		GEODE_AS_STATIC_FUNCTION(onAllowFlipping) 
	#endif

	#ifndef GEODE_STATICS_onAllowRotation
		#define GEODE_STATICS_onAllowRotation
		GEODE_AS_STATIC_FUNCTION(onAllowRotation) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCreate
		#define GEODE_STATICS_onCreate
		GEODE_AS_STATIC_FUNCTION(onCreate) 
	#endif

	#ifndef GEODE_STATICS_onCreateAll
		#define GEODE_STATICS_onCreateAll
		GEODE_AS_STATIC_FUNCTION(onCreateAll) 
	#endif

	#ifndef GEODE_STATICS_onCreateTemplate
		#define GEODE_STATICS_onCreateTemplate
		GEODE_AS_STATIC_FUNCTION(onCreateTemplate) 
	#endif

	#ifndef GEODE_STATICS_onDontDelete
		#define GEODE_STATICS_onDontDelete
		GEODE_AS_STATIC_FUNCTION(onDontDelete) 
	#endif

	#ifndef GEODE_STATICS_onIgnoreCorners
		#define GEODE_STATICS_onIgnoreCorners
		GEODE_AS_STATIC_FUNCTION(onIgnoreCorners) 
	#endif

	#ifndef GEODE_STATICS_onNearbyReference
		#define GEODE_STATICS_onNearbyReference
		GEODE_AS_STATIC_FUNCTION(onNearbyReference) 
	#endif

	#ifndef GEODE_STATICS_onPasteTemplate
		#define GEODE_STATICS_onPasteTemplate
		GEODE_AS_STATIC_FUNCTION(onPasteTemplate) 
	#endif

	#ifndef GEODE_STATICS_onReferenceOnly
		#define GEODE_STATICS_onReferenceOnly
		GEODE_AS_STATIC_FUNCTION(onReferenceOnly) 
	#endif

	#ifndef GEODE_STATICS_onSelectPremade
		#define GEODE_STATICS_onSelectPremade
		GEODE_AS_STATIC_FUNCTION(onSelectPremade) 
	#endif

	#ifndef GEODE_STATICS_onSelectTemplate
		#define GEODE_STATICS_onSelectTemplate
		GEODE_AS_STATIC_FUNCTION(onSelectTemplate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectArtClosed
		#define GEODE_CONCEPT_CHECK_selectArtClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectArtClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAllowFlipping
		#define GEODE_CONCEPT_CHECK_onAllowFlipping
		GEODE_CONCEPT_FUNCTION_CHECK(onAllowFlipping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAllowRotation
		#define GEODE_CONCEPT_CHECK_onAllowRotation
		GEODE_CONCEPT_FUNCTION_CHECK(onAllowRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreate
		#define GEODE_CONCEPT_CHECK_onCreate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateAll
		#define GEODE_CONCEPT_CHECK_onCreateAll
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateTemplate
		#define GEODE_CONCEPT_CHECK_onCreateTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDontDelete
		#define GEODE_CONCEPT_CHECK_onDontDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDontDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIgnoreCorners
		#define GEODE_CONCEPT_CHECK_onIgnoreCorners
		GEODE_CONCEPT_FUNCTION_CHECK(onIgnoreCorners) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNearbyReference
		#define GEODE_CONCEPT_CHECK_onNearbyReference
		GEODE_CONCEPT_FUNCTION_CHECK(onNearbyReference) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteTemplate
		#define GEODE_CONCEPT_CHECK_onPasteTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReferenceOnly
		#define GEODE_CONCEPT_CHECK_onReferenceOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onReferenceOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectPremade
		#define GEODE_CONCEPT_CHECK_onSelectPremade
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectPremade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectTemplate
		#define GEODE_CONCEPT_CHECK_onSelectTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectTemplate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSmartBlockLayer> : ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>>;
		using ModifyBase<ModifyDerive<Der, SetupSmartBlockLayer>>::ModifyBase;
		using Base = SetupSmartBlockLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4568d0, Default, SetupSmartBlockLayer, create, SmartGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x458a70, Thiscall, SetupSmartBlockLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8baf0, Thiscall, SetupSmartBlockLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x458a30, Thiscall, SetupSmartBlockLayer, selectArtClosed, SelectArtLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupSmartBlockLayer, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x456a10, Thiscall, SetupSmartBlockLayer, init, SmartGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457af0, Thiscall, SetupSmartBlockLayer, onAllowFlipping, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457a70, Thiscall, SetupSmartBlockLayer, onAllowRotation, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4583d0, Thiscall, SetupSmartBlockLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x458490, Thiscall, SetupSmartBlockLayer, onCreate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x458120, Thiscall, SetupSmartBlockLayer, onCreateAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4588c0, Thiscall, SetupSmartBlockLayer, onCreateTemplate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457c30, Thiscall, SetupSmartBlockLayer, onDontDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457ca0, Thiscall, SetupSmartBlockLayer, onIgnoreCorners, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457bc0, Thiscall, SetupSmartBlockLayer, onNearbyReference, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x457d20, Thiscall, SetupSmartBlockLayer, onPasteTemplate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4579e0, Thiscall, SetupSmartBlockLayer, onReferenceOnly, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4589c0, Thiscall, SetupSmartBlockLayer, onSelectPremade, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x458a40, Thiscall, SetupSmartBlockLayer, onSelectTemplate, cocos2d::CCObject*)
		}
	};
}
