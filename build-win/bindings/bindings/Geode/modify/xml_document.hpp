#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, pugi::xml_document> : ModifyBase<ModifyDerive<Der, pugi::xml_document>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, pugi::xml_document>>;
		using ModifyBase<ModifyDerive<Der, pugi::xml_document>>::ModifyBase;
		using Base = pugi::xml_document;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0xml_document@pugi@@QEAA@XZ")), Thiscall, pugi::xml_document, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1xml_document@pugi@@QEAA@XZ")), Thiscall, pugi::xml_document)
		}
	};
}
