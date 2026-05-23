#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODSoundTween.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, FMODSoundTween> : ModifyBase<ModifyDerive<Der, FMODSoundTween>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODSoundTween>>;
		using ModifyBase<ModifyDerive<Der, FMODSoundTween>>::ModifyBase;
		using Base = FMODSoundTween;
        using Derived = Der;
		void apply() override {

		}
	};
}
