#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameObjectPhysics {
public:
    static constexpr auto CLASS_NAME = "GameObjectPhysics";
    GameObject* m_gameObject;
    cocos2d::CCPoint m_unkPoint1;
    cocos2d::CCPoint m_unkPoint2;
    float m_unkFloat1;
    float m_unkFloat2;
    int m_unkInt1;
    int m_unkInt2;
    int m_unkInt3;
};
