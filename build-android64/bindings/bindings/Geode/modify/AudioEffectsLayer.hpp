#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AudioEffectsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

	#ifndef GEODE_STATICS_audioStep
		#define GEODE_STATICS_audioStep
		GEODE_AS_STATIC_FUNCTION(audioStep) 
	#endif

	#ifndef GEODE_STATICS_getBGSquare
		#define GEODE_STATICS_getBGSquare
		GEODE_AS_STATIC_FUNCTION(getBGSquare) 
	#endif

	#ifndef GEODE_STATICS_goingDown
		#define GEODE_STATICS_goingDown
		GEODE_AS_STATIC_FUNCTION(goingDown) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetAudioVars
		#define GEODE_STATICS_resetAudioVars
		GEODE_AS_STATIC_FUNCTION(resetAudioVars) 
	#endif

	#ifndef GEODE_STATICS_triggerEffect
		#define GEODE_STATICS_triggerEffect
		GEODE_AS_STATIC_FUNCTION(triggerEffect) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_audioStep
		#define GEODE_CONCEPT_CHECK_audioStep
		GEODE_CONCEPT_FUNCTION_CHECK(audioStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBGSquare
		#define GEODE_CONCEPT_CHECK_getBGSquare
		GEODE_CONCEPT_FUNCTION_CHECK(getBGSquare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goingDown
		#define GEODE_CONCEPT_CHECK_goingDown
		GEODE_CONCEPT_FUNCTION_CHECK(goingDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAudioVars
		#define GEODE_CONCEPT_CHECK_resetAudioVars
		GEODE_CONCEPT_FUNCTION_CHECK(resetAudioVars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerEffect
		#define GEODE_CONCEPT_CHECK_triggerEffect
		GEODE_CONCEPT_FUNCTION_CHECK(triggerEffect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AudioEffectsLayer> : ModifyBase<ModifyDerive<Der, AudioEffectsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AudioEffectsLayer>>;
		using ModifyBase<ModifyDerive<Der, AudioEffectsLayer>>::ModifyBase;
		using Base = AudioEffectsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17AudioEffectsLayerD2Ev")), Default, AudioEffectsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17AudioEffectsLayer6createESs")), Default, AudioEffectsLayer, create, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AudioEffectsLayer::draw)), Default, AudioEffectsLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float, char const*>::func(&AudioEffectsLayer::updateTweenAction)), Default, AudioEffectsLayer, updateTweenAction, float, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&AudioEffectsLayer::audioStep)), Default, AudioEffectsLayer, audioStep, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AudioEffectsLayer::getBGSquare)), Default, AudioEffectsLayer, getBGSquare, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AudioEffectsLayer::goingDown)), Default, AudioEffectsLayer, goingDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17AudioEffectsLayer4initESs")), Default, AudioEffectsLayer, init, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AudioEffectsLayer::resetAudioVars)), Default, AudioEffectsLayer, resetAudioVars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&AudioEffectsLayer::triggerEffect)), Default, AudioEffectsLayer, triggerEffect, float)
		}
	};
}
