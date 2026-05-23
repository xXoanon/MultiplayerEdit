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

class UploadActionPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadActionPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x242eb0
     * @note[short] MacOS (Intel): 0x2a3fc0
     * @note[short] Windows: 0x295180
     * @note[short] iOS: 0x2d831c
     * @note[short] Android: Rebinded
     */
    static UploadActionPopup* create(UploadPopupDelegate* delegate, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x243784
     * @note[short] MacOS (Intel): 0x2a48f0
     * @note[short] Windows: 0x295980
     * @note[short] iOS: 0x2d8a48
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x243748
     * @note[short] MacOS (Intel): 0x2a48c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2d8a0c
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x243034
     * @note[short] MacOS (Intel): 0x2a4160
     * @note[short] Windows: 0x2952c0
     * @note[short] iOS: 0x2d8448
     * @note[short] Android: Rebinded
     */
    bool init(UploadPopupDelegate* delegate, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x243444
     * @note[short] MacOS (Intel): 0x2a45b0
     * @note[short] Windows: 0x295930
     * @note[short] iOS: 0x2d87e0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x243600
     * @note[short] MacOS (Intel): 0x2a4770
     * @note[short] Windows: 0x295830
     * @note[short] iOS: 0x2d8930
     * @note[short] Android: Rebinded
     */
    void showFailMessage(gd::string message);

    /**
     * @note[short] MacOS (ARM): 0x2434a4
     * @note[short] MacOS (Intel): 0x2a4600
     * @note[short] Windows: 0x295720
     * @note[short] iOS: 0x2d8840
     * @note[short] Android: Rebinded
     */
    void showSuccessMessage(gd::string message);
    UploadPopupDelegate* m_delegate;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    bool m_succeeded;
};
