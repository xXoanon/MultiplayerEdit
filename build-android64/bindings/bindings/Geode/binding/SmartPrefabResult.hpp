#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SmartPrefabResult {
public:
    static constexpr auto CLASS_NAME = "SmartPrefabResult";
    GJSmartPrefab* m_smartPrefab;
    gd::string m_binaryKey;
    gd::string m_prefabKey;
    int m_prefabCount;
    bool m_unrequired;
    int m_rotation;
    bool m_flipX;
    bool m_flipY;
    bool m_ignoreCorners;
};
