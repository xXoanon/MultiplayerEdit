#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DynamicObjectAction {
public:
    static constexpr auto CLASS_NAME = "DynamicObjectAction";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DynamicObjectAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DynamicObjectAction(EffectGameObject* object, GameObject* targetObject, GameObject* centerObject);
    EffectGameObject* m_gameObject1;
    GameObject* m_gameObject2;
    GameObject* m_gameObject3;
    GameObject* m_gameObject4;
    GameObject* m_gameObject5;
    GameObject* m_gameObject6;
    GameObject* m_gameObject7;
    GameObject* m_gameObject8;
    float m_unkFloat1;
    float m_unkFloat2;
    float m_unkFloat3;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_unkBool3;
    bool m_unkBool4;
    int m_controlID;
    int m_targetGroupID;
    int m_centerGroupID;
};
