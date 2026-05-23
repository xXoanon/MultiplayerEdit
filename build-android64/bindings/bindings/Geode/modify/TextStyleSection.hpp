#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextStyleSection.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createColoredSection
		#define GEODE_STATICS_createColoredSection
		GEODE_AS_STATIC_FUNCTION(createColoredSection) 
	#endif

	#ifndef GEODE_STATICS_createDelaySection
		#define GEODE_STATICS_createDelaySection
		GEODE_AS_STATIC_FUNCTION(createDelaySection) 
	#endif

	#ifndef GEODE_STATICS_createInstantSection
		#define GEODE_STATICS_createInstantSection
		GEODE_AS_STATIC_FUNCTION(createInstantSection) 
	#endif

	#ifndef GEODE_STATICS_createShakeSection
		#define GEODE_STATICS_createShakeSection
		GEODE_AS_STATIC_FUNCTION(createShakeSection) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createColoredSection
		#define GEODE_CONCEPT_CHECK_createColoredSection
		GEODE_CONCEPT_FUNCTION_CHECK(createColoredSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDelaySection
		#define GEODE_CONCEPT_CHECK_createDelaySection
		GEODE_CONCEPT_FUNCTION_CHECK(createDelaySection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createInstantSection
		#define GEODE_CONCEPT_CHECK_createInstantSection
		GEODE_CONCEPT_FUNCTION_CHECK(createInstantSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createShakeSection
		#define GEODE_CONCEPT_CHECK_createShakeSection
		GEODE_CONCEPT_FUNCTION_CHECK(createShakeSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextStyleSection> : ModifyBase<ModifyDerive<Der, TextStyleSection>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextStyleSection>>;
		using ModifyBase<ModifyDerive<Der, TextStyleSection>>::ModifyBase;
		using Base = TextStyleSection;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, TextStyleType>::func(&TextStyleSection::create)), Default, TextStyleSection, create, int, int, TextStyleType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::ccColor3B, int, int>::func(&TextStyleSection::createColoredSection)), Default, TextStyleSection, createColoredSection, cocos2d::ccColor3B, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&TextStyleSection::createDelaySection)), Default, TextStyleSection, createDelaySection, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, float>::func(&TextStyleSection::createInstantSection)), Default, TextStyleSection, createInstantSection, int, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, int, int>::func(&TextStyleSection::createShakeSection)), Default, TextStyleSection, createShakeSection, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, TextStyleType>::func(&TextStyleSection::init)), Default, TextStyleSection, init, int, int, TextStyleType)
		}
	};
}
