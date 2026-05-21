#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedDecoder
		#define GEODE_STATICS_sharedDecoder
		GEODE_AS_STATIC_FUNCTION(sharedDecoder) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getDecodedObject
		#define GEODE_STATICS_getDecodedObject
		GEODE_AS_STATIC_FUNCTION(getDecodedObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedDecoder
		#define GEODE_CONCEPT_CHECK_sharedDecoder
		GEODE_CONCEPT_FUNCTION_CHECK(sharedDecoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDecodedObject
		#define GEODE_CONCEPT_CHECK_getDecodedObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDecodedObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectDecoder> : ModifyBase<ModifyDerive<Der, ObjectDecoder>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectDecoder>>;
		using ModifyBase<ModifyDerive<Der, ObjectDecoder>>::ModifyBase;
		using Base = ObjectDecoder;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ObjectDecoder::sharedDecoder)), Default, ObjectDecoder, sharedDecoder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ObjectDecoder::init)), Thiscall, ObjectDecoder, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, DS_Dictionary*>::func(&ObjectDecoder::getDecodedObject)), Thiscall, ObjectDecoder, getDecodedObject, int, DS_Dictionary*)
		}
	};
}
