#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FindBPMLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_playMusic
		#define GEODE_STATICS_playMusic
		GEODE_AS_STATIC_FUNCTION(playMusic) 
	#endif

	#ifndef GEODE_STATICS_registerTouch
		#define GEODE_STATICS_registerTouch
		GEODE_AS_STATIC_FUNCTION(registerTouch) 
	#endif

	#ifndef GEODE_STATICS_onRecord
		#define GEODE_STATICS_onRecord
		GEODE_AS_STATIC_FUNCTION(onRecord) 
	#endif

	#ifndef GEODE_STATICS_recordingDidStop
		#define GEODE_STATICS_recordingDidStop
		GEODE_AS_STATIC_FUNCTION(recordingDidStop) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playMusic
		#define GEODE_CONCEPT_CHECK_playMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerTouch
		#define GEODE_CONCEPT_CHECK_registerTouch
		GEODE_CONCEPT_FUNCTION_CHECK(registerTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRecord
		#define GEODE_CONCEPT_CHECK_onRecord
		GEODE_CONCEPT_FUNCTION_CHECK(onRecord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordingDidStop
		#define GEODE_CONCEPT_CHECK_recordingDidStop
		GEODE_CONCEPT_FUNCTION_CHECK(recordingDidStop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateBPM
		#define GEODE_CONCEPT_CHECK_calculateBPM
		GEODE_CONCEPT_FUNCTION_CHECK(calculateBPM) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FindBPMLayer> : ModifyBase<ModifyDerive<Der, FindBPMLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FindBPMLayer>>;
		using ModifyBase<ModifyDerive<Der, FindBPMLayer>>::ModifyBase;
		using Base = FindBPMLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b8b0, Default, FindBPMLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9bea0, Thiscall, FindBPMLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9bd10, Thiscall, FindBPMLayer, playMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9bdb0, Thiscall, FindBPMLayer, registerTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FindBPMLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9bad0, Thiscall, FindBPMLayer, onRecord, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9bc90, Thiscall, FindBPMLayer, recordingDidStop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FindBPMLayer, calculateBPM, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FindBPMLayer, init, int)
		}
	};
}
