#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJFollowCommandLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onUpdateGroupID
		#define GEODE_STATICS_onUpdateGroupID
		GEODE_AS_STATIC_FUNCTION(onUpdateGroupID) 
	#endif

	#ifndef GEODE_STATICS_onUpdateGroupID2
		#define GEODE_STATICS_onUpdateGroupID2
		GEODE_AS_STATIC_FUNCTION(onUpdateGroupID2) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderXModChanged
		#define GEODE_STATICS_sliderXModChanged
		GEODE_AS_STATIC_FUNCTION(sliderXModChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderYModChanged
		#define GEODE_STATICS_sliderYModChanged
		GEODE_AS_STATIC_FUNCTION(sliderYModChanged) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetGroupID
		#define GEODE_STATICS_updateTargetGroupID
		GEODE_AS_STATIC_FUNCTION(updateTargetGroupID) 
	#endif

	#ifndef GEODE_STATICS_updateTargetGroupID2
		#define GEODE_STATICS_updateTargetGroupID2
		GEODE_AS_STATIC_FUNCTION(updateTargetGroupID2) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel2
		#define GEODE_STATICS_updateTextInputLabel2
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel2) 
	#endif

	#ifndef GEODE_STATICS_updateXMod
		#define GEODE_STATICS_updateXMod
		GEODE_AS_STATIC_FUNCTION(updateXMod) 
	#endif

	#ifndef GEODE_STATICS_updateXModLabel
		#define GEODE_STATICS_updateXModLabel
		GEODE_AS_STATIC_FUNCTION(updateXModLabel) 
	#endif

	#ifndef GEODE_STATICS_updateYMod
		#define GEODE_STATICS_updateYMod
		GEODE_AS_STATIC_FUNCTION(updateYMod) 
	#endif

	#ifndef GEODE_STATICS_updateYModLabel
		#define GEODE_STATICS_updateYModLabel
		GEODE_AS_STATIC_FUNCTION(updateYModLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateGroupID
		#define GEODE_CONCEPT_CHECK_onUpdateGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateGroupID2
		#define GEODE_CONCEPT_CHECK_onUpdateGroupID2
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateGroupID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderXModChanged
		#define GEODE_CONCEPT_CHECK_sliderXModChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderXModChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderYModChanged
		#define GEODE_CONCEPT_CHECK_sliderYModChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderYModChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDuration
		#define GEODE_CONCEPT_CHECK_updateDuration
		GEODE_CONCEPT_FUNCTION_CHECK(updateDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDurLabel
		#define GEODE_CONCEPT_CHECK_updateDurLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDurLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetGroupID
		#define GEODE_CONCEPT_CHECK_updateTargetGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetGroupID2
		#define GEODE_CONCEPT_CHECK_updateTargetGroupID2
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetGroupID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel2
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel2
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateXMod
		#define GEODE_CONCEPT_CHECK_updateXMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateXMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateXModLabel
		#define GEODE_CONCEPT_CHECK_updateXModLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateXModLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateYMod
		#define GEODE_CONCEPT_CHECK_updateYMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateYMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateYModLabel
		#define GEODE_CONCEPT_CHECK_updateYModLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateYModLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJFollowCommandLayer> : ModifyBase<ModifyDerive<Der, GJFollowCommandLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJFollowCommandLayer>>;
		using ModifyBase<ModifyDerive<Der, GJFollowCommandLayer>>::ModifyBase;
		using Base = GJFollowCommandLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2705e0, Default, GJFollowCommandLayer, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271a10, Thiscall, GJFollowCommandLayer, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272a80, Thiscall, GJFollowCommandLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272130, Thiscall, GJFollowCommandLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270710, Thiscall, GJFollowCommandLayer, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272070, Thiscall, GJFollowCommandLayer, onUpdateGroupID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2720d0, Thiscall, GJFollowCommandLayer, onUpdateGroupID2, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271d20, Thiscall, GJFollowCommandLayer, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271eb0, Thiscall, GJFollowCommandLayer, sliderXModChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271ef0, Thiscall, GJFollowCommandLayer, sliderYModChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272a00, Thiscall, GJFollowCommandLayer, updateDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271de0, Thiscall, GJFollowCommandLayer, updateDurLabel, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272760, Thiscall, GJFollowCommandLayer, updateTargetGroupID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272830, Thiscall, GJFollowCommandLayer, updateTargetGroupID2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272640, Thiscall, GJFollowCommandLayer, updateTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2726d0, Thiscall, GJFollowCommandLayer, updateTextInputLabel2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272900, Thiscall, GJFollowCommandLayer, updateXMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271f30, Thiscall, GJFollowCommandLayer, updateXModLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272980, Thiscall, GJFollowCommandLayer, updateYMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271fd0, Thiscall, GJFollowCommandLayer, updateYModLabel, )
		}
	};
}
