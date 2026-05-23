#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCounterLabel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_calculateStepSize
		#define GEODE_STATICS_calculateStepSize
		GEODE_AS_STATIC_FUNCTION(calculateStepSize) 
	#endif

	#ifndef GEODE_STATICS_disableCounter
		#define GEODE_STATICS_disableCounter
		GEODE_AS_STATIC_FUNCTION(disableCounter) 
	#endif

	#ifndef GEODE_STATICS_enableCounter
		#define GEODE_STATICS_enableCounter
		GEODE_AS_STATIC_FUNCTION(enableCounter) 
	#endif

	#ifndef GEODE_STATICS_fastUpdateCounter
		#define GEODE_STATICS_fastUpdateCounter
		GEODE_AS_STATIC_FUNCTION(fastUpdateCounter) 
	#endif

	#ifndef GEODE_STATICS_getTargetCount
		#define GEODE_STATICS_getTargetCount
		GEODE_AS_STATIC_FUNCTION(getTargetCount) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, char const*, FormatterType>::func(&CCCounterLabel::create)), Default, CCCounterLabel, create, int, char const*, FormatterType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CCCounterLabel::calculateStepSize)), Default, CCCounterLabel, calculateStepSize, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCCounterLabel::disableCounter)), Default, CCCounterLabel, disableCounter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCCounterLabel::enableCounter)), Default, CCCounterLabel, enableCounter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCCounterLabel::fastUpdateCounter)), Default, CCCounterLabel, fastUpdateCounter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCCounterLabel::getTargetCount)), Default, CCCounterLabel, getTargetCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, char const*, FormatterType>::func(&CCCounterLabel::init)), Default, CCCounterLabel, init, int, char const*, FormatterType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CCCounterLabel::setTargetCount)), Default, CCCounterLabel, setTargetCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&CCCounterLabel::updateCounter)), Default, CCCounterLabel, updateCounter, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CCCounterLabel::updateString)), Default, CCCounterLabel, updateString, )
		}
	};
}
