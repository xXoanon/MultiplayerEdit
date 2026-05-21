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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6d840, Default, TextStyleSection, create, int, int, TextStyleType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextStyleSection, createColoredSection, cocos2d::ccColor3B, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextStyleSection, createDelaySection, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextStyleSection, createInstantSection, int, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextStyleSection, createShakeSection, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextStyleSection, init, int, int, TextStyleType)
		}
	};
}
