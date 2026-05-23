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

	#ifndef GEODE_STATICS_addAudioLineObject
		#define GEODE_STATICS_addAudioLineObject
		GEODE_AS_STATIC_FUNCTION(addAudioLineObject) 
	#endif

	#ifndef GEODE_STATICS_addToEffects
		#define GEODE_STATICS_addToEffects
		GEODE_AS_STATIC_FUNCTION(addToEffects) 
	#endif

	#ifndef GEODE_STATICS_addToGuides
		#define GEODE_STATICS_addToGuides
		GEODE_AS_STATIC_FUNCTION(addToGuides) 
	#endif

	#ifndef GEODE_STATICS_addToSpeedObjects
		#define GEODE_STATICS_addToSpeedObjects
		GEODE_AS_STATIC_FUNCTION(addToSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_getPortalMinMax
		#define GEODE_STATICS_getPortalMinMax
		GEODE_AS_STATIC_FUNCTION(getPortalMinMax) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadTimeMarkers
		#define GEODE_STATICS_loadTimeMarkers
		GEODE_AS_STATIC_FUNCTION(loadTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_posForTime
		#define GEODE_STATICS_posForTime
		GEODE_AS_STATIC_FUNCTION(posForTime) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_removeAudioLineObject
		#define GEODE_STATICS_removeAudioLineObject
		GEODE_AS_STATIC_FUNCTION(removeAudioLineObject) 
	#endif

	#ifndef GEODE_STATICS_removeFromEffects
		#define GEODE_STATICS_removeFromEffects
		GEODE_AS_STATIC_FUNCTION(removeFromEffects) 
	#endif

	#ifndef GEODE_STATICS_removeFromGuides
		#define GEODE_STATICS_removeFromGuides
		GEODE_AS_STATIC_FUNCTION(removeFromGuides) 
	#endif

	#ifndef GEODE_STATICS_removeFromSpeedObjects
		#define GEODE_STATICS_removeFromSpeedObjects
		GEODE_AS_STATIC_FUNCTION(removeFromSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_sortSpeedObjects
		#define GEODE_STATICS_sortSpeedObjects
		GEODE_AS_STATIC_FUNCTION(sortSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_updateMusicGuideTime
		#define GEODE_STATICS_updateMusicGuideTime
		GEODE_AS_STATIC_FUNCTION(updateMusicGuideTime) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMarkers
		#define GEODE_STATICS_updateTimeMarkers
		GEODE_AS_STATIC_FUNCTION(updateTimeMarkers) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, LevelEditorLayer*>::func(&DrawGridLayer::create)), Default, DrawGridLayer, create, cocos2d::CCNode*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&DrawGridLayer::update)), Default, DrawGridLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&DrawGridLayer::draw)), Default, DrawGridLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<AudioLineGuideGameObject*>::func(&DrawGridLayer::addAudioLineObject)), Default, DrawGridLayer, addAudioLineObject, AudioLineGuideGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&DrawGridLayer::addToEffects)), Default, DrawGridLayer, addToEffects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&DrawGridLayer::addToGuides)), Default, DrawGridLayer, addToGuides, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&DrawGridLayer::addToSpeedObjects)), Default, DrawGridLayer, addToSpeedObjects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&DrawGridLayer::getPortalMinMax)), Default, DrawGridLayer, getPortalMinMax, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCNode*, LevelEditorLayer*>::func(&DrawGridLayer::init)), Default, DrawGridLayer, init, cocos2d::CCNode*, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13DrawGridLayer15loadTimeMarkersESs")), Default, DrawGridLayer, loadTimeMarkers, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&DrawGridLayer::posForTime)), Default, DrawGridLayer, posForTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DrawGridLayer::postUpdate)), Default, DrawGridLayer, postUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<AudioLineGuideGameObject*>::func(&DrawGridLayer::removeAudioLineObject)), Default, DrawGridLayer, removeAudioLineObject, AudioLineGuideGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&DrawGridLayer::removeFromEffects)), Default, DrawGridLayer, removeFromEffects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GameObject*>::func(&DrawGridLayer::removeFromGuides)), Default, DrawGridLayer, removeFromGuides, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*>::func(&DrawGridLayer::removeFromSpeedObjects)), Default, DrawGridLayer, removeFromSpeedObjects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DrawGridLayer::sortSpeedObjects)), Default, DrawGridLayer, sortSpeedObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, int, int, bool, bool, bool, int>::func(&DrawGridLayer::timeForPos)), Default, DrawGridLayer, timeForPos, cocos2d::CCPoint, int, int, bool, bool, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&DrawGridLayer::updateMusicGuideTime)), Default, DrawGridLayer, updateMusicGuideTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DrawGridLayer::updateTimeMarkers)), Default, DrawGridLayer, updateTimeMarkers, )
		}
	};
}
