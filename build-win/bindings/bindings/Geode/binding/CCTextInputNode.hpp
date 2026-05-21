#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputNode, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): 0x8e6b8
     * @note[short] MacOS (Intel): 0x9ddc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16c6d4
     * @note[short] Android: Rebinded
     */
     ~CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): 0x8e7d0
     * @note[short] MacOS (Intel): 0x9df70
     * @note[short] Windows: 0x4f160
     * @note[short] iOS: 0x16c7cc
     * @note[short] Android
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont);

    /**
     * @note[short] MacOS (ARM): 0x8f198
     * @note[short] MacOS (Intel): 0x9e9f0
     * @note[short] Windows: 0x4f7a0
     * @note[short] iOS: 0x16ce4c
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x91170
     * @note[short] MacOS (Intel): 0xa0dd0
     * @note[short] Windows: 0x51330
     * @note[short] iOS: 0x16e770
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x91350
     * @note[short] MacOS (Intel): 0xa0ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16e918
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x91340
     * @note[short] MacOS (Intel): 0xa0fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16e908
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x91348
     * @note[short] MacOS (Intel): 0xa0fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16e910
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x91358
     * @note[short] MacOS (Intel): 0xa1010
     * @note[short] Windows: 0x51540
     * @note[short] iOS: 0x16e920
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x8fc28
     * @note[short] MacOS (Intel): 0x9f570
     * @note[short] Windows: 0x50480
     * @note[short] iOS: 0x16d708
     * @note[short] Android
     */
    virtual void textChanged();

    /**
     * @note[short] MacOS (ARM): 0x8fc08
     * @note[short] MacOS (Intel): 0x9f550
     * @note[short] Windows: 0x50460
     * @note[short] iOS: 0x16d6e8
     * @note[short] Android
     */
    virtual void onClickTrackNode(bool selected);

    /**
     * @note[short] MacOS (ARM): 0x8f9bc
     * @note[short] MacOS (Intel): 0x9f2f0
     * @note[short] Windows: 0x50280
     * @note[short] iOS: 0x16d4fc
     * @note[short] Android
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& info);

    /**
     * @note[short] MacOS (ARM): 0x8fae0
     * @note[short] MacOS (Intel): 0x9f440
     * @note[short] Windows: 0x503e0
     * @note[short] iOS: 0x16d64c
     * @note[short] Android
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& info);

    /**
     * @note[short] MacOS (ARM): 0x8fd34
     * @note[short] MacOS (Intel): 0x9f690
     * @note[short] Windows: 0x50510
     * @note[short] iOS: 0x16d7a0
     * @note[short] Android
     */
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes);

    /**
     * @note[short] MacOS (ARM): 0x9028c
     * @note[short] MacOS (Intel): 0x9fcd0
     * @note[short] Windows: 0x508f0
     * @note[short] iOS: 0x16db84
     * @note[short] Android
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x90594
     * @note[short] MacOS (Intel): 0xa0000
     * @note[short] Windows: 0x50c20
     * @note[short] iOS: 0x16ddf8
     * @note[short] Android
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x8ec78
     * @note[short] MacOS (Intel): 0x9e4a0
     * @note[short] Windows: 0x4f5b0
     * @note[short] iOS: 0x16cae4
     * @note[short] Android
     */
    void addTextArea(TextArea* textArea);

    /**
     * @note[short] MacOS (ARM): 0x90c44
     * @note[short] MacOS (Intel): 0xa0790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16e2f8
     * @note[short] Android
     */
    void forceOffset();

    /**
     * @note[short] MacOS (ARM): 0x8f2c4
     * @note[short] MacOS (Intel): 0x9eb10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16cf64
     * @note[short] Android
     */
    gd::string getString();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    cocos2d::CCLabelBMFont* getTextLabel();

    /**
     * @note[short] MacOS (ARM): 0x8e930
     * @note[short] MacOS (Intel): 0x9e130
     * @note[short] Windows: 0x4f370
     * @note[short] iOS: 0x16c880
     * @note[short] Android
     */
    bool init(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont);

    /**
     * @note[short] MacOS (ARM): 0x8f374
     * @note[short] MacOS (Intel): 0x9ebc0
     * @note[short] Windows: 0x4fbb0
     * @note[short] iOS: 0x16cf98
     * @note[short] Android
     */
    void refreshLabel();

    /**
     * @note[short] MacOS (ARM): 0x8f190
     * @note[short] MacOS (Intel): 0x9e9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16ce44
     * @note[short] Android: Rebinded
     */
    void setAllowedChars(gd::string filter);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDelegate(TextInputDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x8f5b4
     * @note[short] MacOS (Intel): 0x9ee80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLabelNormalColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x8f5a4
     * @note[short] MacOS (Intel): 0x9ee60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16d148
     * @note[short] Android
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x8f59c
     * @note[short] MacOS (Intel): 0x9ee40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16d140
     * @note[short] Android
     */
    void setLabelPlaceholderScale(float v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setMaxLabelLength(int v);

    /**
     * @note[short] MacOS (ARM): 0x8f58c
     * @note[short] MacOS (Intel): 0x9ee00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16d130
     * @note[short] Android
     */
    void setMaxLabelScale(float v);

    /**
     * @note[short] MacOS (ARM): 0x8f594
     * @note[short] MacOS (Intel): 0x9ee20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16d138
     * @note[short] Android
     */
    void setMaxLabelWidth(float v);

    /**
     * @note[short] MacOS (ARM): 0x8f1f4
     * @note[short] MacOS (Intel): 0x9ea50
     * @note[short] Windows: 0x4f810
     * @note[short] iOS: 0x16cea8
     * @note[short] Android: Rebinded
     */
    void setString(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x8f580
     * @note[short] MacOS (Intel): 0x9ede0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBlinkLabel();

    /**
     * @note[short] MacOS (ARM): 0x8f5c8
     * @note[short] MacOS (Intel): 0x9eea0
     * @note[short] Windows: 0x4fe90
     * @note[short] iOS: 0x16d158
     * @note[short] Android
     */
    void updateBlinkLabelToChar(int index);

    /**
     * @note[short] MacOS (ARM): 0x90c48
     * @note[short] MacOS (Intel): 0xa07a0
     * @note[short] Windows: 0x50dd0
     * @note[short] iOS: 0x16e2fc
     * @note[short] Android
     */
    void updateCursorPosition(cocos2d::CCPoint position, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x8ebd0
     * @note[short] MacOS (Intel): 0x9e400
     * @note[short] Windows: 0x4f6a0
     * @note[short] iOS: 0x16ca64
     * @note[short] Android: Rebinded
     */
    void updateDefaultFontValues(gd::string font);

    /**
     * @note[short] MacOS (ARM): 0x8eea0
     * @note[short] MacOS (Intel): 0x9e6b0
     * @note[short] Windows: 0x4f8b0
     * @note[short] iOS: 0x16cc18
     * @note[short] Android: Rebinded
     */
    void updateLabel(gd::string text);
    bool m_numberInput;
    gd::string m_caption;
    int m_unknown1;
    bool m_selected;
    bool m_unknown2;
    float m_fontValue1;
    float m_fontValue2;
    bool m_isChatFont;
    gd::string m_allowedChars;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_textLabel;
    bool m_filterSwearWords;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
    InputValueType m_valueType;
    int m_decimalPlaces;
    int m_kerningAmount;
};
