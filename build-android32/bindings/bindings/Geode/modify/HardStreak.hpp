#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HardStreak.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addPoint
		#define GEODE_STATICS_addPoint
		GEODE_AS_STATIC_FUNCTION(addPoint) 
	#endif

	#ifndef GEODE_STATICS_clearAboveXPos
		#define GEODE_STATICS_clearAboveXPos
		GEODE_AS_STATIC_FUNCTION(clearAboveXPos) 
	#endif

	#ifndef GEODE_STATICS_clearBehindXPos
		#define GEODE_STATICS_clearBehindXPos
		GEODE_AS_STATIC_FUNCTION(clearBehindXPos) 
	#endif

	#ifndef GEODE_STATICS_createDuplicate
		#define GEODE_STATICS_createDuplicate
		GEODE_AS_STATIC_FUNCTION(createDuplicate) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_normalizeAngle
		#define GEODE_STATICS_normalizeAngle
		GEODE_AS_STATIC_FUNCTION(normalizeAngle) 
	#endif

	#ifndef GEODE_STATICS_quadCornerOffset
		#define GEODE_STATICS_quadCornerOffset
		GEODE_AS_STATIC_FUNCTION(quadCornerOffset) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resumeStroke
		#define GEODE_STATICS_resumeStroke
		GEODE_AS_STATIC_FUNCTION(resumeStroke) 
	#endif

	#ifndef GEODE_STATICS_scheduleAutoUpdate
		#define GEODE_STATICS_scheduleAutoUpdate
		GEODE_AS_STATIC_FUNCTION(scheduleAutoUpdate) 
	#endif

	#ifndef GEODE_STATICS_stopStroke
		#define GEODE_STATICS_stopStroke
		GEODE_AS_STATIC_FUNCTION(stopStroke) 
	#endif

	#ifndef GEODE_STATICS_updateStroke
		#define GEODE_STATICS_updateStroke
		GEODE_AS_STATIC_FUNCTION(updateStroke) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPoint
		#define GEODE_CONCEPT_CHECK_addPoint
		GEODE_CONCEPT_FUNCTION_CHECK(addPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearAboveXPos
		#define GEODE_CONCEPT_CHECK_clearAboveXPos
		GEODE_CONCEPT_FUNCTION_CHECK(clearAboveXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearBehindXPos
		#define GEODE_CONCEPT_CHECK_clearBehindXPos
		GEODE_CONCEPT_FUNCTION_CHECK(clearBehindXPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDuplicate
		#define GEODE_CONCEPT_CHECK_createDuplicate
		GEODE_CONCEPT_FUNCTION_CHECK(createDuplicate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_normalizeAngle
		#define GEODE_CONCEPT_CHECK_normalizeAngle
		GEODE_CONCEPT_FUNCTION_CHECK(normalizeAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quadCornerOffset
		#define GEODE_CONCEPT_CHECK_quadCornerOffset
		GEODE_CONCEPT_FUNCTION_CHECK(quadCornerOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeStroke
		#define GEODE_CONCEPT_CHECK_resumeStroke
		GEODE_CONCEPT_FUNCTION_CHECK(resumeStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scheduleAutoUpdate
		#define GEODE_CONCEPT_CHECK_scheduleAutoUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(scheduleAutoUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopStroke
		#define GEODE_CONCEPT_CHECK_stopStroke
		GEODE_CONCEPT_FUNCTION_CHECK(stopStroke) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStroke
		#define GEODE_CONCEPT_CHECK_updateStroke
		GEODE_CONCEPT_FUNCTION_CHECK(updateStroke) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HardStreak> : ModifyBase<ModifyDerive<Der, HardStreak>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HardStreak>>;
		using ModifyBase<ModifyDerive<Der, HardStreak>>::ModifyBase;
		using Base = HardStreak;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&HardStreak::create)), Default, HardStreak, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&HardStreak::init)), Default, HardStreak, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&HardStreak::addPoint)), Default, HardStreak, addPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&HardStreak::clearAboveXPos)), Default, HardStreak, clearAboveXPos, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&HardStreak::clearBehindXPos)), Default, HardStreak, clearBehindXPos, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&HardStreak::createDuplicate)), Default, HardStreak, createDuplicate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&HardStreak::firstSetup)), Default, HardStreak, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<double>::func(&HardStreak::normalizeAngle)), Default, HardStreak, normalizeAngle, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint, cocos2d::CCPoint, float>::func(&HardStreak::quadCornerOffset)), Default, HardStreak, quadCornerOffset, cocos2d::CCPoint, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&HardStreak::reset)), Default, HardStreak, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&HardStreak::resumeStroke)), Default, HardStreak, resumeStroke, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&HardStreak::scheduleAutoUpdate)), Default, HardStreak, scheduleAutoUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&HardStreak::stopStroke)), Default, HardStreak, stopStroke, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&HardStreak::updateStroke)), Default, HardStreak, updateStroke, float)
		}
	};
}
