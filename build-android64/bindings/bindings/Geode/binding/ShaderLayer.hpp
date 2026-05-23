#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJShaderState.hpp"

class ShaderLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ShaderLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ShaderLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3523a0
     * @note[short] MacOS (Intel): 0x3d2020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x273420
     * @note[short] Android: Out of line
     */
     ShaderLayer();

    /**
     * @note[short] MacOS (ARM): 0x34b67c
     * @note[short] MacOS (Intel): 0x3ca420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26daac
     * @note[short] Android: Rebinded
     */
     ~ShaderLayer();

    /**
     * @note[short] MacOS (ARM): 0x34b7d0
     * @note[short] MacOS (Intel): 0x3ca620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26db50
     * @note[short] Android
     */
    static ShaderLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x34b850
     * @note[short] MacOS (Intel): 0x3ca680
     * @note[short] Windows: 0x481c90
     * @note[short] iOS: 0x26dbc4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x34d024
     * @note[short] MacOS (Intel): 0x3cbef0
     * @note[short] Windows: 0x482a40
     * @note[short] iOS: 0x26ef14
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x351fc0
     * @note[short] MacOS (Intel): 0x3d1be0
     * @note[short] Windows: 0x488a60
     * @note[short] iOS: 0x2731b4
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x34d39c
     * @note[short] MacOS (Intel): 0x3cc2d0
     * @note[short] Windows: 0x482d70
     * @note[short] iOS: 0x26f188
     * @note[short] Android
     */
    cocos2d::CCPoint objectPosToShaderPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x351d1c
     * @note[short] MacOS (Intel): 0x3d18d0
     * @note[short] Windows: 0x4880b0
     * @note[short] iOS: 0x2730e0
     * @note[short] Android
     */
    void performCalculations();

    /**
     * @note[short] MacOS (ARM): 0x3511ec
     * @note[short] MacOS (Intel): 0x3d0c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2725c0
     * @note[short] Android
     */
    void preBulgeShader();

    /**
     * @note[short] MacOS (ARM): 0x34ff24
     * @note[short] MacOS (Intel): 0x3cf720
     * @note[short] Windows: 0x485d20
     * @note[short] iOS: 0x2713d8
     * @note[short] Android
     */
    void preChromaticGlitchShader();

    /**
     * @note[short] MacOS (ARM): 0x34fc98
     * @note[short] MacOS (Intel): 0x3cf450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271150
     * @note[short] Android
     */
    void preChromaticShader();

    /**
     * @note[short] MacOS (ARM): 0x351934
     * @note[short] MacOS (Intel): 0x3d13d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272cfc
     * @note[short] Android
     */
    void preColorChangeShader();

    /**
     * @note[short] MacOS (ARM): 0x34d230
     * @note[short] MacOS (Intel): 0x3cc100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26f01c
     * @note[short] Android
     */
    void preCommonShader();

    /**
     * @note[short] MacOS (ARM): 0x34f7c4
     * @note[short] MacOS (Intel): 0x3ceea0
     * @note[short] Windows: 0x4855b0
     * @note[short] iOS: 0x270d4c
     * @note[short] Android
     */
    void preGlitchShader();

    /**
     * @note[short] MacOS (ARM): 0x3514a8
     * @note[short] MacOS (Intel): 0x3d0ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272870
     * @note[short] Android
     */
    void preGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x351788
     * @note[short] MacOS (Intel): 0x3d1220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272b54
     * @note[short] Android
     */
    void preHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x3516bc
     * @note[short] MacOS (Intel): 0x3d1130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272a88
     * @note[short] Android
     */
    void preInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x350908
     * @note[short] MacOS (Intel): 0x3d0240
     * @note[short] Windows: 0x486860
     * @note[short] iOS: 0x271d24
     * @note[short] Android
     */
    void preLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x350e4c
     * @note[short] MacOS (Intel): 0x3d07c0
     * @note[short] Windows: 0x486d30
     * @note[short] iOS: 0x272238
     * @note[short] Android
     */
    void preMotionBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x3504d8
     * @note[short] MacOS (Intel): 0x3cfdc0
     * @note[short] Windows: 0x486250
     * @note[short] iOS: 0x2718f4
     * @note[short] Android
     */
    cocos2d::CCPoint prepareTargetContainer();

    /**
     * @note[short] MacOS (ARM): 0x35141c
     * @note[short] MacOS (Intel): 0x3d0e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2727f0
     * @note[short] Android
     */
    void prePinchShader();

    /**
     * @note[short] MacOS (ARM): 0x3502f4
     * @note[short] MacOS (Intel): 0x3cfb60
     * @note[short] Windows: 0x4860a0
     * @note[short] iOS: 0x271790
     * @note[short] Android
     */
    void prePixelateShader();

    /**
     * @note[short] MacOS (ARM): 0x350b9c
     * @note[short] MacOS (Intel): 0x3d0510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271fac
     * @note[short] Android
     */
    void preRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x351594
     * @note[short] MacOS (Intel): 0x3d0ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27295c
     * @note[short] Android
     */
    void preSepiaShader();

    /**
     * @note[short] MacOS (ARM): 0x34f3b8
     * @note[short] MacOS (Intel): 0x3ce990
     * @note[short] Windows: 0x4850a0
     * @note[short] iOS: 0x270970
     * @note[short] Android
     */
    void preShockLineShader();

    /**
     * @note[short] MacOS (ARM): 0x34ee64
     * @note[short] MacOS (Intel): 0x3ce2e0
     * @note[short] Windows: 0x484550
     * @note[short] iOS: 0x270444
     * @note[short] Android
     */
    void preShockWaveShader();

    /**
     * @note[short] MacOS (ARM): 0x351ac4
     * @note[short] MacOS (Intel): 0x3d15e0
     * @note[short] Windows: 0x487d90
     * @note[short] iOS: 0x272e88
     * @note[short] Android
     */
    void preSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x352318
     * @note[short] MacOS (Intel): 0x3d1f90
     * @note[short] Windows: 0x4895d0
     * @note[short] iOS: 0x2733b0
     * @note[short] Android
     */
    bool resetAllShaders();

    /**
     * @note[short] MacOS (ARM): 0x35076c
     * @note[short] MacOS (Intel): 0x3d00b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271b88
     * @note[short] Android
     */
    void resetTargetContainer();

    /**
     * @note[short] MacOS (ARM): 0x34caf0
     * @note[short] MacOS (Intel): 0x3cb9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26ea60
     * @note[short] Android
     */
    void setupBulgeShader();

    /**
     * @note[short] MacOS (ARM): 0x34c880
     * @note[short] MacOS (Intel): 0x3cb750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26e7f0
     * @note[short] Android
     */
    void setupChromaticGlitchUniforms();

    /**
     * @note[short] MacOS (ARM): 0x34c81c
     * @note[short] MacOS (Intel): 0x3cb6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26e78c
     * @note[short] Android
     */
    void setupChromaticUniforms();

    /**
     * @note[short] MacOS (ARM): 0x34ce3c
     * @note[short] MacOS (Intel): 0x3cbd00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26ed2c
     * @note[short] Android
     */
    void setupColorChangeShader();

    /**
     * @note[short] MacOS (ARM): 0x34c230
     * @note[short] MacOS (Intel): 0x3cb0f0
     * @note[short] Windows: 0x482bc0
     * @note[short] iOS: 0x26e1a0
     * @note[short] Android
     */
    void setupCommonUniforms();

    /**
     * @note[short] MacOS (ARM): 0x34c74c
     * @note[short] MacOS (Intel): 0x3cb620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26e6bc
     * @note[short] Android
     */
    void setupGlitchUniforms();

    /**
     * @note[short] MacOS (ARM): 0x34ccd0
     * @note[short] MacOS (Intel): 0x3cbba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26ec40
     * @note[short] Android
     */
    void setupGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x34cdd8
     * @note[short] MacOS (Intel): 0x3cbca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26ecc8
     * @note[short] Android
     */
    void setupHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x34cd98
     * @note[short] MacOS (Intel): 0x3cbc60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x34c998
     * @note[short] MacOS (Intel): 0x3cb870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26e908
     * @note[short] Android
     */
    void setupLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x34cc48
     * @note[short] MacOS (Intel): 0x3cbb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26ebb8
     * @note[short] Android
     */
    void setupMotionBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x34cb9c
     * @note[short] MacOS (Intel): 0x3cba70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26eb0c
     * @note[short] Android
     */
    void setupPinchShader();

    /**
     * @note[short] MacOS (ARM): 0x34ca8c
     * @note[short] MacOS (Intel): 0x3cb960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26e9fc
     * @note[short] Android
     */
    void setupRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x34cd58
     * @note[short] MacOS (Intel): 0x3cbc20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupSepiaShader();

    /**
     * @note[short] MacOS (ARM): 0x34b910
     * @note[short] MacOS (Intel): 0x3ca740
     * @note[short] Windows: 0x481da0
     * @note[short] iOS: 0x26dc64
     * @note[short] Android
     */
    void setupShader(bool reset);

    /**
     * @note[short] MacOS (ARM): 0x34c580
     * @note[short] MacOS (Intel): 0x3cb450
     * @note[short] Windows: 0x484ea0
     * @note[short] iOS: 0x26e4f0
     * @note[short] Android
     */
    void setupShockLineUniforms();

    /**
     * @note[short] MacOS (ARM): 0x34c3b4
     * @note[short] MacOS (Intel): 0x3cb280
     * @note[short] Windows: 0x484350
     * @note[short] iOS: 0x26e324
     * @note[short] Android
     */
    void setupShockWaveUniforms();

    /**
     * @note[short] MacOS (ARM): 0x34cea0
     * @note[short] MacOS (Intel): 0x3cbd60
     * @note[short] Windows: 0x487be0
     * @note[short] iOS: 0x26ed90
     * @note[short] Android
     */
    void setupSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x34c1cc
     * @note[short] MacOS (Intel): 0x3cb0a0
     * @note[short] Windows: 0x4829d0
     * @note[short] iOS: 0x26e13c
     * @note[short] Android
     */
    void toggleAntiAlias(bool antiAlias);

    /**
     * @note[short] MacOS (ARM): 0x351120
     * @note[short] MacOS (Intel): 0x3d0b40
     * @note[short] Windows: 0x487040
     * @note[short] iOS: 0x2724f4
     * @note[short] Android
     */
    void triggerBulge(float fadeTime, float bulge, float screenOffsetX, float screenOffsetY, float radius, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x34fda4
     * @note[short] MacOS (Intel): 0x3cf590
     * @note[short] Windows: 0x485a00
     * @note[short] iOS: 0x27125c
     * @note[short] Android
     */
    void triggerChromaticGlitch(bool enable, float duration, float speed, float strength, float rgbOffset, float lineThickness, float lineStrength, float segmentHeight, int easingType, float easingRate, bool relative, bool relativePos);

    /**
     * @note[short] MacOS (ARM): 0x34fc20
     * @note[short] MacOS (Intel): 0x3cf3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2710d8
     * @note[short] Android
     */
    void triggerChromaticX(float fadeTime, float targetX, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x34fc5c
     * @note[short] MacOS (Intel): 0x3cf420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271114
     * @note[short] Android
     */
    void triggerChromaticY(float fadeTime, float targetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x351838
     * @note[short] MacOS (Intel): 0x3d12e0
     * @note[short] Windows: 0x487910
     * @note[short] iOS: 0x272c00
     * @note[short] Android
     */
    void triggerColorChange(float fadeTime, float cr, float cg, float cb, float br, float bg, float bb, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34f734
     * @note[short] MacOS (Intel): 0x3cee00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x270cc0
     * @note[short] Android
     */
    void triggerGlitch(float fadeTime, float strength, float speed, float sliceHeight, float maxSliceXOff, float maxColXOff, float maxColYOff, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x351484
     * @note[short] MacOS (Intel): 0x3d0ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27284c
     * @note[short] Android
     */
    void triggerGrayscale(float fadeTime, float target, bool useLuminance, int tintChannel, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x351770
     * @note[short] MacOS (Intel): 0x3d1200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272b3c
     * @note[short] Android
     */
    void triggerHueShift(float fadeTime, float degrees, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x3515ec
     * @note[short] MacOS (Intel): 0x3d1050
     * @note[short] Windows: 0x487690
     * @note[short] iOS: 0x2729b4
     * @note[short] Android
     */
    void triggerInvertColor(float fadeTime, float target, float r, float g, float b, bool editRGB, bool tweenRGB, bool clampRGB, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x3507f8
     * @note[short] MacOS (Intel): 0x3d0130
     * @note[short] Windows: 0x4865c0
     * @note[short] iOS: 0x271c14
     * @note[short] Android
     */
    void triggerLensCircle(float fadeTime, float size, float fade, float strength, int targetID, int tintChannel, float screenOffsetX, float screenOffsetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x350ca4
     * @note[short] MacOS (Intel): 0x3d0620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272090
     * @note[short] Android
     */
    void triggerMotionBlurX(float fadeTime, float targetX, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x350d78
     * @note[short] MacOS (Intel): 0x3d06f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272164
     * @note[short] Android
     */
    void triggerMotionBlurY(float fadeTime, float targetY, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x35125c
     * @note[short] MacOS (Intel): 0x3d0c80
     * @note[short] Windows: 0x487250
     * @note[short] iOS: 0x272630
     * @note[short] Android
     */
    void triggerPinchX(float fadeTime, float targetX, float screenOffsetX, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x35133c
     * @note[short] MacOS (Intel): 0x3d0d60
     * @note[short] Windows: 0x487470
     * @note[short] iOS: 0x272710
     * @note[short] Android
     */
    void triggerPinchY(float fadeTime, float targetY, float screenOffsetY, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x35021c
     * @note[short] MacOS (Intel): 0x3cfa80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2716b8
     * @note[short] Android
     */
    void triggerPixelateX(float fadeTime, float targetX, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x350288
     * @note[short] MacOS (Intel): 0x3cfaf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x271724
     * @note[short] Android
     */
    void triggerPixelateY(float fadeTime, float targetY, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x350a98
     * @note[short] MacOS (Intel): 0x3d0410
     * @note[short] Windows: 0x486a90
     * @note[short] iOS: 0x271ea8
     * @note[short] Android
     */
    void triggerRadialBlur(float fadeTime, float size, float intensity, float fade, int refChannel, float screenOffsetX, float screenOffsetY, bool target, int targetID, int easingType, float easingRate, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x35157c
     * @note[short] MacOS (Intel): 0x3d0fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272944
     * @note[short] Android
     */
    void triggerSepia(float fadeTime, float target, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34f1c8
     * @note[short] MacOS (Intel): 0x3ce730
     * @note[short] Windows: 0x4849f0
     * @note[short] iOS: 0x270780
     * @note[short] Android
     */
    void triggerShockLine(float speed, float thickness, bool rotate, bool flip, bool dual, bool invert, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, float screenOffset, int targetID, bool target, bool follow, bool relative, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34e520
     * @note[short] MacOS (Intel): 0x3cd970
     * @note[short] Windows: 0x483d90
     * @note[short] iOS: 0x26feec
     * @note[short] Android
     */
    void triggerShockWave(float speed, float thickness, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, bool invert, float inner, float screenOffsetX, float screenOffsetY, int targetID, bool target, bool follow, bool relative, float outer, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x351aac
     * @note[short] MacOS (Intel): 0x3d15c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272e70
     * @note[short] Android
     */
    void triggerSplitScreenCols(float fadeTime, float targetX, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x351a94
     * @note[short] MacOS (Intel): 0x3d15a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x272e58
     * @note[short] Android
     */
    void triggerSplitScreenRows(float fadeTime, float targetY, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x35222c
     * @note[short] MacOS (Intel): 0x3d1e80
     * @note[short] Windows: 0x489440
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34e754
     * @note[short] MacOS (Intel): 0x3cdbf0
     * @note[short] Windows: 0x488d40
     * @note[short] iOS: 0x270120
     * @note[short] Android
     */
    void tweenValueAuto(float value, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34d4ac
     * @note[short] MacOS (Intel): 0x3cc420
     * @note[short] Windows: 0x482f30
     * @note[short] iOS: 0x26f220
     * @note[short] Android
     */
    void updateEffectOffsets(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x3510b8
     * @note[short] MacOS (Intel): 0x3d0aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27248c
     * @note[short] Android
     */
    void updateMotionBlurSpeedX(float x, float dt);

    /**
     * @note[short] MacOS (ARM): 0x3510ec
     * @note[short] MacOS (Intel): 0x3d0af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2724c0
     * @note[short] Android
     */
    void updateMotionBlurSpeedY(float y, float dt);

    /**
     * @note[short] MacOS (ARM): 0x34f394
     * @note[short] MacOS (Intel): 0x3ce960
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27094c
     * @note[short] Android
     */
    void updateShockLineCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x34ee40
     * @note[short] MacOS (Intel): 0x3ce2b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x270420
     * @note[short] Android
     */
    void updateShockWaveCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x34c140
     * @note[short] MacOS (Intel): 0x3cb020
     * @note[short] Windows: 0x489550
     * @note[short] iOS: 0x26e0c8
     * @note[short] Android
     */
    bool updateZLayer(int minLayer, int maxLayer, bool noParticles);
    GJShaderState m_state;
    bool m_timesyncShaderActions;
    cocos2d::CCGLProgram* m_shader;
    cocos2d::CCRenderTexture* m_renderTexture;
    cocos2d::CCSprite* m_sprite;
    bool m_antiAlias;
    bool m_configuredAntiAlias;
    void* m_unk3d4;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCPoint m_savedCameraPosition;
    float m_savedCameraRotation;
    float m_shockWaveTimeMult;
    float m_scaleFactor;
    float m_aspectRatio;
    cocos2d::CCSize m_screenSize;
    cocos2d::CCSize m_textureContentSize;
    cocos2d::CCSize m_targetTextureSize;
    cocos2d::CCSize m_targetTextureSizeExtra;
    int m_textureScaleUniform;
    int m_textureScaleInvUniform;
    int m_screenAspectUniform;
    int m_screenAspectINVUniform;
    int m_shaderPositionUniform;
    int m_blurRefColorUniform;
    int m_blurUseRefUniform;
    int m_blurIntensityUniform;
    int m_blurOnlyEmptyUniform;
    int m_shockWaveTimeUniform;
    int m_shockWaveTime1Uniform;
    int m_shockWaveTime2Uniform;
    int m_shockWaveTime3Uniform;
    int m_shockWaveTime4Uniform;
    int m_shockWaveStrengthUniform;
    int m_shockWaveWavesUniform;
    int m_shockWaveCenterUniform;
    int m_shockWaveInvertUniform;
    int m_shockWaveMinSizeUniform;
    int m_shockWaveMaxSizeUniform;
    int m_shockWaveMaxDistValUniform;
    float m_shockWaveTime1;
    float m_shockWaveTime2;
    float m_shockWaveTime3;
    float m_shockWaveTime4;
    float m_shockWaveMaxDistVal;
    float m_shockWaveMinSize;
    float m_shockWaveMaxSize;
    bool m_shockWaveUnk46c;
    int m_shockLineTimeUniform;
    int m_shockLineTime1Uniform;
    int m_shockLineTime2Uniform;
    int m_shockLineTime3Uniform;
    int m_shockLineTime4Uniform;
    int m_shockLineAxisUniform;
    int m_shockLineDirectionUniform;
    int m_shockLineDualUniform;
    int m_shockLineWavesUniform;
    int m_shockLineStrengthUniform;
    int m_shockLineCenterUniform;
    int m_shockLineMaxDistValUniform;
    float m_shockLineTime1;
    float m_shockLineTime2;
    float m_shockLineTime3;
    float m_shockLineTime4;
    float m_shockLineMaxDistVal;
    int m_unk4b4;
    int m_unk4b8;
    int m_unk4bc;
    int m_glitchBotUniform;
    int m_glitchTopUniform;
    int m_glitchXOffsetUniform;
    int m_glitchColOffsetUniform;
    int m_glitchRndUniform;
    int m_chromaticXOffUniform;
    int m_chromaticYOffUniform;
    int m_cGRGBOffsetUniform;
    int m_cGYOffsetUniform;
    int m_cGTimeUniform;
    int m_cGStrengthUniform;
    int m_cGHeightUniform;
    int m_cGLineThickUniform;
    int m_cGLineStrengthUniform;
    int m_lensCircleOriginUniform;
    int m_lensCircleStartUniform;
    int m_lensCircleEndUniform;
    int m_lensCircleStrengthUniform;
    int m_lensCircleTintUniform;
    int m_lensCircleAdditiveUniform;
    int m_radialBlurCenterUniform;
    int m_radialBlurValueUniform;
    int m_blurFadeUniform;
    int m_motionBlurValueUniform;
    int m_motionBlurMultUniform;
    int m_motionBlurDualUniform;
    int m_bulgeValueUniform;
    int m_bulgeValue2Uniform;
    int m_bulgeOriginUniform;
    int m_bulgeRadiusUniform;
    int m_pinchValueUniform;
    int m_pinchCenterPosUniform;
    int m_pinchCalcUniform;
    int m_pinchRadiusUniform;
    int m_grayscaleValueUniform;
    int m_grayscaleTintUniform;
    int m_grayscaleUseLumUniform;
    int m_sepiaValueUniform;
    int m_invertColorValueUniform;
    int m_hueShiftCosAUniform;
    int m_hueShiftSinAUniform;
    int m_colorChangeCUniform;
    int m_colorChangeBUniform;
    int m_rowmodUniform;
    int m_colmodUniform;
    int m_rowmodCalcUniform;
    int m_colmodCalcUniform;
    int m_splitXStartUniform;
    int m_splitXRangeUniform;
    int m_splitXRangeMultUniform;
    int m_splitYStartUniform;
    int m_splitYRangeUniform;
    int m_splitYRangeMultUniform;
};
