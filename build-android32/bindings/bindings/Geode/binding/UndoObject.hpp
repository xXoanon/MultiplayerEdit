#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJTransformState.hpp"

class UndoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "UndoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UndoObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36c8a0
     * @note[short] Android: Out of line
     */
     UndoObject();

    /**
     * @note[short] MacOS (ARM): 0xdf7c4
     * @note[short] MacOS (Intel): 0x1006c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36926c
     * @note[short] Android: Rebinded
     */
     ~UndoObject();

    /**
     * @note[short] MacOS (ARM): 0xc57d8
     * @note[short] MacOS (Intel): 0xdfbe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x359ba4
     * @note[short] Android
     */
    static UndoObject* create(GameObject* object, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xc82c4
     * @note[short] MacOS (Intel): 0xe29f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35bbcc
     * @note[short] Android
     */
    static UndoObject* createWithArray(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xdf8dc
     * @note[short] MacOS (Intel): 0x1007e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3692cc
     * @note[short] Android
     */
    static UndoObject* createWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xdf8a0
     * @note[short] MacOS (Intel): 0x1007b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(GameObject* object, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xdfa38
     * @note[short] MacOS (Intel): 0x100950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3693b8
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xdf9b4
     * @note[short] MacOS (Intel): 0x1008d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x369334
     * @note[short] Android
     */
    bool initWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xc8bd4
     * @note[short] MacOS (Intel): 0xe33f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35c318
     * @note[short] Android
     */
    void setObjects(cocos2d::CCArray* objects);
    GameObjectCopy* m_objectCopy;
    UndoCommand m_command;
    cocos2d::CCArray* m_objects;
    bool m_redo;
    bool m_undoTransform;
    GJTransformState m_transformState;
};
