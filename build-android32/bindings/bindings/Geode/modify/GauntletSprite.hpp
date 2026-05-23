#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addLockedSprite
		#define GEODE_STATICS_addLockedSprite
		GEODE_AS_STATIC_FUNCTION(addLockedSprite) 
	#endif

	#ifndef GEODE_STATICS_addNormalSprite
		#define GEODE_STATICS_addNormalSprite
		GEODE_AS_STATIC_FUNCTION(addNormalSprite) 
	#endif

	#ifndef GEODE_STATICS_colorForType
		#define GEODE_STATICS_colorForType
		GEODE_AS_STATIC_FUNCTION(colorForType) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_luminanceForType
		#define GEODE_STATICS_luminanceForType
		GEODE_AS_STATIC_FUNCTION(luminanceForType) 
	#endif

	#ifndef GEODE_STATICS_toggleLockedSprite
		#define GEODE_STATICS_toggleLockedSprite
		GEODE_AS_STATIC_FUNCTION(toggleLockedSprite) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addLockedSprite
		#define GEODE_CONCEPT_CHECK_addLockedSprite
		GEODE_CONCEPT_FUNCTION_CHECK(addLockedSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNormalSprite
		#define GEODE_CONCEPT_CHECK_addNormalSprite
		GEODE_CONCEPT_FUNCTION_CHECK(addNormalSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForType
		#define GEODE_CONCEPT_CHECK_colorForType
		GEODE_CONCEPT_FUNCTION_CHECK(colorForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_luminanceForType
		#define GEODE_CONCEPT_CHECK_luminanceForType
		GEODE_CONCEPT_FUNCTION_CHECK(luminanceForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLockedSprite
		#define GEODE_CONCEPT_CHECK_toggleLockedSprite
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLockedSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletSprite> : ModifyBase<ModifyDerive<Der, GauntletSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletSprite>>;
		using ModifyBase<ModifyDerive<Der, GauntletSprite>>::ModifyBase;
		using Base = GauntletSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GauntletType, bool>::func(&GauntletSprite::create)), Default, GauntletSprite, create, GauntletType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GauntletSprite::addLockedSprite)), Default, GauntletSprite, addLockedSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GauntletSprite::addNormalSprite)), Default, GauntletSprite, addNormalSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GauntletType>::func(&GauntletSprite::colorForType)), Default, GauntletSprite, colorForType, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GauntletType, bool>::func(&GauntletSprite::init)), Default, GauntletSprite, init, GauntletType, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GauntletType>::func(&GauntletSprite::luminanceForType)), Default, GauntletSprite, luminanceForType, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&GauntletSprite::toggleLockedSprite)), Default, GauntletSprite, toggleLockedSprite, bool)
		}
	};
}
