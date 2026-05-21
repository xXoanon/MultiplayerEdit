#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setObjectID
		#define GEODE_STATICS_setObjectID
		GEODE_AS_STATIC_FUNCTION(setObjectID) 
	#endif

	#ifndef GEODE_STATICS_getObjectID
		#define GEODE_STATICS_getObjectID
		GEODE_AS_STATIC_FUNCTION(getObjectID) 
	#endif

	#ifndef GEODE_STATICS_getIdx
		#define GEODE_STATICS_getIdx
		GEODE_AS_STATIC_FUNCTION(getIdx) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_setIdx
		#define GEODE_STATICS_setIdx
		GEODE_AS_STATIC_FUNCTION(setIdx) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_setObjectID
		#define GEODE_CONCEPT_CHECK_setObjectID
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectID
		#define GEODE_CONCEPT_CHECK_getObjectID
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIdx
		#define GEODE_CONCEPT_CHECK_getIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIdx
		#define GEODE_CONCEPT_CHECK_setIdx
		GEODE_CONCEPT_FUNCTION_CHECK(setIdx) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCTableViewCell> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCTableViewCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCTableViewCell>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCTableViewCell>>::ModifyBase;
		using Base = cocos2d::extension::CCTableViewCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableViewCell::setObjectID)), Thiscall, cocos2d::extension::CCTableViewCell, setObjectID, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::extension::CCTableViewCell::getObjectID)), Thiscall, cocos2d::extension::CCTableViewCell, getObjectID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableViewCell::getIdx)), Thiscall, cocos2d::extension::CCTableViewCell, getIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::extension::CCTableViewCell::reset)), Thiscall, cocos2d::extension::CCTableViewCell, reset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCTableViewCell::setIdx)), Thiscall, cocos2d::extension::CCTableViewCell, setIdx, unsigned int)
		}
	};
}
