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
#include "ListUploadDelegate.hpp"

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadListPopup();

    /**
     * @note[short] MacOS (ARM): 0x2ee4c0
     * @note[short] MacOS (Intel): 0x363560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249330
     * @note[short] Android: Rebinded
     */
     ~UploadListPopup();

    /**
     * @note[short] MacOS (ARM): 0x2ee33c
     * @note[short] MacOS (Intel): 0x3633a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2491f4
     * @note[short] Android
     */
    static UploadListPopup* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2ef160
     * @note[short] MacOS (Intel): 0x364350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249d8c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2ef100
     * @note[short] MacOS (Intel): 0x3642e0
     * @note[short] Windows: 0x30bc70
     * @note[short] iOS: 0x249d2c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2eec04
     * @note[short] MacOS (Intel): 0x363de0
     * @note[short] Windows: 0x30b710
     * @note[short] iOS: 0x249884
     * @note[short] Android
     */
    virtual void listUploadFinished(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2eee08
     * @note[short] MacOS (Intel): 0x364000
     * @note[short] Windows: 0x30b8e0
     * @note[short] iOS: 0x249a78
     * @note[short] Android
     */
    virtual void listUploadFailed(GJLevelList* list, int response);

    /**
     * @note[short] MacOS (ARM): 0x2ee754
     * @note[short] MacOS (Intel): 0x3638d0
     * @note[short] Windows: 0x30b1d0
     * @note[short] iOS: 0x2493f8
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2eebb8
     * @note[short] MacOS (Intel): 0x363d90
     * @note[short] Windows: 0x30bcd0
     * @note[short] iOS: 0x249838
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ef0bc
     * @note[short] MacOS (Intel): 0x364290
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x249ce8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eedb4
     * @note[short] MacOS (Intel): 0x363f90
     * @note[short] Windows: 0x30bc20
     * @note[short] iOS: 0x249a24
     * @note[short] Android
     */
    void onReturnToList(cocos2d::CCObject* sender);
    GJLevelList* m_levelList;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};
