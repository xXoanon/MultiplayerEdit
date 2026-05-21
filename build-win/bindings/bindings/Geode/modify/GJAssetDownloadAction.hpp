#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAssetDownloadAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GJAssetDownloadAction> : ModifyBase<ModifyDerive<Der, GJAssetDownloadAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAssetDownloadAction>>;
		using ModifyBase<ModifyDerive<Der, GJAssetDownloadAction>>::ModifyBase;
		using Base = GJAssetDownloadAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
