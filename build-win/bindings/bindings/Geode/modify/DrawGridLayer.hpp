#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DrawGridLayer.hpp>
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

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_loadTimeMarkers
		#define GEODE_STATICS_loadTimeMarkers
		GEODE_AS_STATIC_FUNCTION(loadTimeMarkers) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAudioLineObject
		#define GEODE_CONCEPT_CHECK_addAudioLineObject
		GEODE_CONCEPT_FUNCTION_CHECK(addAudioLineObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToEffects
		#define GEODE_CONCEPT_CHECK_addToEffects
		GEODE_CONCEPT_FUNCTION_CHECK(addToEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGuides
		#define GEODE_CONCEPT_CHECK_addToGuides
		GEODE_CONCEPT_FUNCTION_CHECK(addToGuides) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSpeedObjects
		#define GEODE_CONCEPT_CHECK_addToSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(addToSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalMinMax
		#define GEODE_CONCEPT_CHECK_getPortalMinMax
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalMinMax) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadTimeMarkers
		#define GEODE_CONCEPT_CHECK_loadTimeMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(loadTimeMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posForTime
		#define GEODE_CONCEPT_CHECK_posForTime
		GEODE_CONCEPT_FUNCTION_CHECK(posForTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postUpdate
		#define GEODE_CONCEPT_CHECK_postUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(postUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAudioLineObject
		#define GEODE_CONCEPT_CHECK_removeAudioLineObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeAudioLineObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromEffects
		#define GEODE_CONCEPT_CHECK_removeFromEffects
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGuides
		#define GEODE_CONCEPT_CHECK_removeFromGuides
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGuides) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromSpeedObjects
		#define GEODE_CONCEPT_CHECK_removeFromSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSpeedObjects
		#define GEODE_CONCEPT_CHECK_sortSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(sortSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForPos
		#define GEODE_CONCEPT_CHECK_timeForPos
		GEODE_CONCEPT_FUNCTION_CHECK(timeForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMusicGuideTime
		#define GEODE_CONCEPT_CHECK_updateMusicGuideTime
		GEODE_CONCEPT_FUNCTION_CHECK(updateMusicGuideTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMarkers
		#define GEODE_CONCEPT_CHECK_updateTimeMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMarkers) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DrawGridLayer> : ModifyBase<ModifyDerive<Der, DrawGridLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DrawGridLayer>>;
		using ModifyBase<ModifyDerive<Der, DrawGridLayer>>::ModifyBase;
		using Base = DrawGridLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e8af0, Default, DrawGridLayer, create, cocos2d::CCNode*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e8ff0, Thiscall, DrawGridLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e91f0, Thiscall, DrawGridLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, addAudioLineObject, AudioLineGuideGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, addToEffects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, addToGuides, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, addToSpeedObjects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, getPortalMinMax, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, init, cocos2d::CCNode*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2e8cd0, Thiscall, DrawGridLayer, loadTimeMarkers, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, posForTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, postUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, removeAudioLineObject, AudioLineGuideGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, removeFromEffects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, removeFromGuides, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, removeFromSpeedObjects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, sortSpeedObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, timeForPos, cocos2d::CCPoint, int, int, bool, bool, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, updateMusicGuideTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DrawGridLayer, updateTimeMarkers, )
		}
	};
}
