#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <fmod.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addPolygon
		#define GEODE_STATICS_addPolygon
		GEODE_AS_STATIC_FUNCTION(addPolygon) 
	#endif

	#ifndef GEODE_STATICS_getPosition
		#define GEODE_STATICS_getPosition
		GEODE_AS_STATIC_FUNCTION(getPosition) 
	#endif

	#ifndef GEODE_STATICS_getRotation
		#define GEODE_STATICS_getRotation
		GEODE_AS_STATIC_FUNCTION(getRotation) 
	#endif

	#ifndef GEODE_STATICS_getUserData
		#define GEODE_STATICS_getUserData
		GEODE_AS_STATIC_FUNCTION(getUserData) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setUserData
		#define GEODE_STATICS_setUserData
		GEODE_AS_STATIC_FUNCTION(setUserData) 
	#endif

	#ifndef GEODE_STATICS_getMaxPolygons
		#define GEODE_STATICS_getMaxPolygons
		GEODE_AS_STATIC_FUNCTION(getMaxPolygons) 
	#endif

	#ifndef GEODE_STATICS_getNumPolygons
		#define GEODE_STATICS_getNumPolygons
		GEODE_AS_STATIC_FUNCTION(getNumPolygons) 
	#endif

	#ifndef GEODE_STATICS_getPolygonVertex
		#define GEODE_STATICS_getPolygonVertex
		GEODE_AS_STATIC_FUNCTION(getPolygonVertex) 
	#endif

	#ifndef GEODE_STATICS_setPolygonVertex
		#define GEODE_STATICS_setPolygonVertex
		GEODE_AS_STATIC_FUNCTION(setPolygonVertex) 
	#endif

	#ifndef GEODE_STATICS_getPolygonAttributes
		#define GEODE_STATICS_getPolygonAttributes
		GEODE_AS_STATIC_FUNCTION(getPolygonAttributes) 
	#endif

	#ifndef GEODE_STATICS_setPolygonAttributes
		#define GEODE_STATICS_setPolygonAttributes
		GEODE_AS_STATIC_FUNCTION(setPolygonAttributes) 
	#endif

	#ifndef GEODE_STATICS_getPolygonNumVertices
		#define GEODE_STATICS_getPolygonNumVertices
		GEODE_AS_STATIC_FUNCTION(getPolygonNumVertices) 
	#endif

	#ifndef GEODE_STATICS_save
		#define GEODE_STATICS_save
		GEODE_AS_STATIC_FUNCTION(save) 
	#endif

	#ifndef GEODE_STATICS_release
		#define GEODE_STATICS_release
		GEODE_AS_STATIC_FUNCTION(release) 
	#endif

	#ifndef GEODE_STATICS_getScale
		#define GEODE_STATICS_getScale
		GEODE_AS_STATIC_FUNCTION(getScale) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_getActive
		#define GEODE_STATICS_getActive
		GEODE_AS_STATIC_FUNCTION(getActive) 
	#endif

	#ifndef GEODE_STATICS_setActive
		#define GEODE_STATICS_setActive
		GEODE_AS_STATIC_FUNCTION(setActive) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addPolygon
		#define GEODE_CONCEPT_CHECK_addPolygon
		GEODE_CONCEPT_FUNCTION_CHECK(addPolygon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPosition
		#define GEODE_CONCEPT_CHECK_getPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotation
		#define GEODE_CONCEPT_CHECK_getRotation
		GEODE_CONCEPT_FUNCTION_CHECK(getRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserData
		#define GEODE_CONCEPT_CHECK_getUserData
		GEODE_CONCEPT_FUNCTION_CHECK(getUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserData
		#define GEODE_CONCEPT_CHECK_setUserData
		GEODE_CONCEPT_FUNCTION_CHECK(setUserData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxPolygons
		#define GEODE_CONCEPT_CHECK_getMaxPolygons
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxPolygons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNumPolygons
		#define GEODE_CONCEPT_CHECK_getNumPolygons
		GEODE_CONCEPT_FUNCTION_CHECK(getNumPolygons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPolygonVertex
		#define GEODE_CONCEPT_CHECK_getPolygonVertex
		GEODE_CONCEPT_FUNCTION_CHECK(getPolygonVertex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPolygonVertex
		#define GEODE_CONCEPT_CHECK_setPolygonVertex
		GEODE_CONCEPT_FUNCTION_CHECK(setPolygonVertex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPolygonAttributes
		#define GEODE_CONCEPT_CHECK_getPolygonAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(getPolygonAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPolygonAttributes
		#define GEODE_CONCEPT_CHECK_setPolygonAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(setPolygonAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPolygonNumVertices
		#define GEODE_CONCEPT_CHECK_getPolygonNumVertices
		GEODE_CONCEPT_FUNCTION_CHECK(getPolygonNumVertices) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_save
		#define GEODE_CONCEPT_CHECK_save
		GEODE_CONCEPT_FUNCTION_CHECK(save) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_release
		#define GEODE_CONCEPT_CHECK_release
		GEODE_CONCEPT_FUNCTION_CHECK(release) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScale
		#define GEODE_CONCEPT_CHECK_getScale
		GEODE_CONCEPT_FUNCTION_CHECK(getScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActive
		#define GEODE_CONCEPT_CHECK_getActive
		GEODE_CONCEPT_FUNCTION_CHECK(getActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActive
		#define GEODE_CONCEPT_CHECK_setActive
		GEODE_CONCEPT_FUNCTION_CHECK(setActive) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMOD::Geometry> : ModifyBase<ModifyDerive<Der, FMOD::Geometry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMOD::Geometry>>;
		using ModifyBase<ModifyDerive<Der, FMOD::Geometry>>::ModifyBase;
		using Base = FMOD::Geometry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float, bool, int, FMOD_VECTOR const*, int*>::func(&FMOD::Geometry::addPolygon)), Thiscall, FMOD::Geometry, addPolygon, float, float, bool, int, FMOD_VECTOR const*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*>::func(&FMOD::Geometry::getPosition)), Thiscall, FMOD::Geometry, getPosition, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*, FMOD_VECTOR*>::func(&FMOD::Geometry::getRotation)), Thiscall, FMOD::Geometry, getRotation, FMOD_VECTOR*, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void**>::func(&FMOD::Geometry::getUserData)), Thiscall, FMOD::Geometry, getUserData, void**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR const*>::func(&FMOD::Geometry::setPosition)), Thiscall, FMOD::Geometry, setPosition, FMOD_VECTOR const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR const*, FMOD_VECTOR const*>::func(&FMOD::Geometry::setRotation)), Thiscall, FMOD::Geometry, setRotation, FMOD_VECTOR const*, FMOD_VECTOR const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*>::func(&FMOD::Geometry::setUserData)), Thiscall, FMOD::Geometry, setUserData, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*, int*>::func(&FMOD::Geometry::getMaxPolygons)), Thiscall, FMOD::Geometry, getMaxPolygons, int*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int*>::func(&FMOD::Geometry::getNumPolygons)), Thiscall, FMOD::Geometry, getNumPolygons, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, FMOD_VECTOR*>::func(&FMOD::Geometry::getPolygonVertex)), Thiscall, FMOD::Geometry, getPolygonVertex, int, int, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int, FMOD_VECTOR const*>::func(&FMOD::Geometry::setPolygonVertex)), Thiscall, FMOD::Geometry, setPolygonVertex, int, int, FMOD_VECTOR const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float*, float*, bool*>::func(&FMOD::Geometry::getPolygonAttributes)), Thiscall, FMOD::Geometry, getPolygonAttributes, int, float*, float*, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float, float, bool>::func(&FMOD::Geometry::setPolygonAttributes)), Thiscall, FMOD::Geometry, setPolygonAttributes, int, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int*>::func(&FMOD::Geometry::getPolygonNumVertices)), Thiscall, FMOD::Geometry, getPolygonNumVertices, int, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<void*, int*>::func(&FMOD::Geometry::save)), Thiscall, FMOD::Geometry, save, void*, int*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&FMOD::Geometry::release)), Thiscall, FMOD::Geometry, release, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR*>::func(&FMOD::Geometry::getScale)), Thiscall, FMOD::Geometry, getScale, FMOD_VECTOR*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<FMOD_VECTOR const*>::func(&FMOD::Geometry::setScale)), Thiscall, FMOD::Geometry, setScale, FMOD_VECTOR const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool*>::func(&FMOD::Geometry::getActive)), Thiscall, FMOD::Geometry, getActive, bool*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&FMOD::Geometry::setActive)), Thiscall, FMOD::Geometry, setActive, bool)
		}
	};
}
