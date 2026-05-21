#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCounterLabel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setTargetCount
		#define GEODE_STATICS_setTargetCount
		GEODE_AS_STATIC_FUNCTION(setTargetCount) 
	#endif

	#ifndef GEODE_STATICS_updateCounter
		#define GEODE_STATICS_updateCounter
		GEODE_AS_STATIC_FUNCTION(updateCounter) 
	#endif

	#ifndef GEODE_STATICS_updateString
		#define GEODE_STATICS_updateString
		GEODE_AS_STATIC_FUNCTION(updateString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateStepSize
		#define GEODE_CONCEPT_CHECK_calculateStepSize
		GEODE_CONCEPT_FUNCTION_CHECK(calculateStepSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableCounter
		#define GEODE_CONCEPT_CHECK_disableCounter
		GEODE_CONCEPT_FUNCTION_CHECK(disableCounter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableCounter
		#define GEODE_CONCEPT_CHECK_enableCounter
		GEODE_CONCEPT_FUNCTION_CHECK(enableCounter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastUpdateCounter
		#define GEODE_CONCEPT_CHECK_fastUpdateCounter
		GEODE_CONCEPT_FUNCTION_CHECK(fastUpdateCounter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetCount
		#define GEODE_CONCEPT_CHECK_getTargetCount
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTargetCount
		#define GEODE_CONCEPT_CHECK_setTargetCount
		GEODE_CONCEPT_FUNCTION_CHECK(setTargetCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCounter
		#define GEODE_CONCEPT_CHECK_updateCounter
		GEODE_CONCEPT_FUNCTION_CHECK(updateCounter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateString
		#define GEODE_CONCEPT_CHECK_updateString
		GEODE_CONCEPT_FUNCTION_CHECK(updateString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCounterLabel> : ModifyBase<ModifyDerive<Der, CCCounterLabel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCounterLabel>>;
		using ModifyBase<ModifyDerive<Der, CCCounterLabel>>::ModifyBase;
		using Base = CCCounterLabel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCounterLabel, create, int, char const*, FormatterType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCounterLabel, calculateStepSize, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCounterLabel, disableCounter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCounterLabel, enableCounter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCounterLabel, fastUpdateCounter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCounterLabel, getTargetCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCounterLabel, init, int, char const*, FormatterType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x431a0, Thiscall, CCCounterLabel, setTargetCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43230, Thiscall, CCCounterLabel, updateCounter, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x432b0, Thiscall, CCCounterLabel, updateString, )
		}
	};
}
