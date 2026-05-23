#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TableViewCellDelegate.hpp"

class OptionsScrollLayer : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsScrollLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x535704
     * @note[short] MacOS (Intel): 0x60fd80
     * @note[short] Windows: 0x33ab70
     * @note[short] iOS: 0x3c2a44
     * @note[short] Android
     */
    static OptionsScrollLayer* create(cocos2d::CCArray* objects, bool recreate, int minimum);

    /**
     * @note[short] MacOS (ARM): 0x5361dc
     * @note[short] MacOS (Intel): 0x6109c0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x3c3044
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5360b8
     * @note[short] MacOS (Intel): 0x610890
     * @note[short] Windows: 0x33b020
     * @note[short] iOS: 0x3c3038
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x536214
     * @note[short] MacOS (Intel): 0x610a00
     * @note[short] Windows: 0x33b030
     * @note[short] iOS: 0x3c307c
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x536028
     * @note[short] MacOS (Intel): 0x610810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c2fb0
     * @note[short] Android
     */
    cocos2d::CCArray* getRelevantObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x535c98
     * @note[short] MacOS (Intel): 0x610470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c2c84
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, bool recreate, int minimum);

    /**
     * @note[short] MacOS (ARM): 0x535e04
     * @note[short] MacOS (Intel): 0x6105e0
     * @note[short] Windows: 0x33af90
     * @note[short] iOS: 0x3c2dec
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x535e94
     * @note[short] MacOS (Intel): 0x610670
     * @note[short] Windows: 0x33adc0
     * @note[short] iOS: 0x3c2e7c
     * @note[short] Android
     */
    void setupList(cocos2d::CCArray* objects);
    cocos2d::CCArray* m_optionObjects;
    GJCommentListLayer* m_listLayer;
    bool m_recreateList;
    int m_minCount;
};
