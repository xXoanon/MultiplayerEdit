#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_rectForGID
		#define GEODE_STATICS_rectForGID
		GEODE_AS_STATIC_FUNCTION(rectForGID) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_rectForGID
		#define GEODE_CONCEPT_CHECK_rectForGID
		GEODE_CONCEPT_FUNCTION_CHECK(rectForGID) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTMXTilesetInfo> : ModifyBase<ModifyDerive<Der, cocos2d::CCTMXTilesetInfo>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTMXTilesetInfo>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTMXTilesetInfo>>::ModifyBase;
		using Base = cocos2d::CCTMXTilesetInfo;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTMXTilesetInfo@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTMXTilesetInfo, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTMXTilesetInfo@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTMXTilesetInfo)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCTMXTilesetInfo::rectForGID)), Thiscall, cocos2d::CCTMXTilesetInfo, rectForGID, unsigned int)
		}
	};
}
