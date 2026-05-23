#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_addTags
		#define GEODE_STATICS_addTags
		GEODE_AS_STATIC_FUNCTION(addTags) 
	#endif

	#ifndef GEODE_STATICS_containsTag
		#define GEODE_STATICS_containsTag
		GEODE_AS_STATIC_FUNCTION(containsTag) 
	#endif

	#ifndef GEODE_STATICS_copyValues
		#define GEODE_STATICS_copyValues
		GEODE_AS_STATIC_FUNCTION(copyValues) 
	#endif

	#ifndef GEODE_STATICS_getArtistNames
		#define GEODE_STATICS_getArtistNames
		GEODE_AS_STATIC_FUNCTION(getArtistNames) 
	#endif

	#ifndef GEODE_STATICS_getExtraArtistCount
		#define GEODE_STATICS_getExtraArtistCount
		GEODE_AS_STATIC_FUNCTION(getExtraArtistCount) 
	#endif

	#ifndef GEODE_STATICS_getTagsString
		#define GEODE_STATICS_getTagsString
		GEODE_AS_STATIC_FUNCTION(getTagsString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateArtists
		#define GEODE_STATICS_updateArtists
		GEODE_AS_STATIC_FUNCTION(updateArtists) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTags
		#define GEODE_CONCEPT_CHECK_addTags
		GEODE_CONCEPT_FUNCTION_CHECK(addTags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_containsTag
		#define GEODE_CONCEPT_CHECK_containsTag
		GEODE_CONCEPT_FUNCTION_CHECK(containsTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyValues
		#define GEODE_CONCEPT_CHECK_copyValues
		GEODE_CONCEPT_FUNCTION_CHECK(copyValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArtistNames
		#define GEODE_CONCEPT_CHECK_getArtistNames
		GEODE_CONCEPT_FUNCTION_CHECK(getArtistNames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getExtraArtistCount
		#define GEODE_CONCEPT_CHECK_getExtraArtistCount
		GEODE_CONCEPT_FUNCTION_CHECK(getExtraArtistCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTagsString
		#define GEODE_CONCEPT_CHECK_getTagsString
		GEODE_CONCEPT_FUNCTION_CHECK(getTagsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateArtists
		#define GEODE_CONCEPT_CHECK_updateArtists
		GEODE_CONCEPT_FUNCTION_CHECK(updateArtists) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoObject> : ModifyBase<ModifyDerive<Der, SongInfoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoObject>>;
		using ModifyBase<ModifyDerive<Der, SongInfoObject>>::ModifyBase;
		using Base = SongInfoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&SongInfoObject::create)), Default, SongInfoObject, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SongInfoObject::create)), Default, SongInfoObject, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject6createEiSsSsifSsSsSsSsiSsbii")), Default, SongInfoObject, create, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, gd::string, int, gd::string, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&SongInfoObject::createWithCoder)), Default, SongInfoObject, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<DS_Dictionary*>::func(&SongInfoObject::encodeWithCoder)), Default, SongInfoObject, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SongInfoObject::canEncode)), Default, SongInfoObject, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject7addTagsESs")), Default, SongInfoObject, addTags, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SongInfoObject::containsTag)), Default, SongInfoObject, containsTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<SongInfoObject*>::func(&SongInfoObject::copyValues)), Default, SongInfoObject, copyValues, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SongInfoObject::getArtistNames)), Default, SongInfoObject, getArtistNames, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SongInfoObject::getExtraArtistCount)), Default, SongInfoObject, getExtraArtistCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&SongInfoObject::getTagsString)), Default, SongInfoObject, getTagsString, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject4initEiSsSsifSsSsSsSsiSsbii")), Default, SongInfoObject, init, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, gd::string, int, gd::string, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject13updateArtistsESs")), Default, SongInfoObject, updateArtists, gd::string)
		}
	};
}
