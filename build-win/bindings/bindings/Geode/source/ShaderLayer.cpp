
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

auto ShaderLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShaderLayer::init), this);
	using FunctionType = decltype(init())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShaderLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ShaderLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(ShaderLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto ShaderLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShaderLayer::visit), this);
	using FunctionType = decltype(visit())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShaderLayer::objectPosToShaderPos(cocos2d::CCPoint position) -> decltype(objectPosToShaderPos(position)) {
	using FunctionType = decltype(objectPosToShaderPos(position))(*)(ShaderLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto ShaderLayer::performCalculations() -> decltype(performCalculations()) {
	using FunctionType = decltype(performCalculations())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4880b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preChromaticGlitchShader() -> decltype(preChromaticGlitchShader()) {
	using FunctionType = decltype(preChromaticGlitchShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preGlitchShader() -> decltype(preGlitchShader()) {
	using FunctionType = decltype(preGlitchShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4855b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preLensCircleShader() -> decltype(preLensCircleShader()) {
	using FunctionType = decltype(preLensCircleShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preMotionBlurShader() -> decltype(preMotionBlurShader()) {
	using FunctionType = decltype(preMotionBlurShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::prepareTargetContainer() -> decltype(prepareTargetContainer()) {
	using FunctionType = decltype(prepareTargetContainer())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::prePixelateShader() -> decltype(prePixelateShader()) {
	using FunctionType = decltype(prePixelateShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4860a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preShockLineShader() -> decltype(preShockLineShader()) {
	using FunctionType = decltype(preShockLineShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4850a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preShockWaveShader() -> decltype(preShockWaveShader()) {
	using FunctionType = decltype(preShockWaveShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x484550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preSplitScreenShader() -> decltype(preSplitScreenShader()) {
	using FunctionType = decltype(preSplitScreenShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::resetAllShaders() -> decltype(resetAllShaders()) {
	using FunctionType = decltype(resetAllShaders())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4895d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupCommonUniforms() -> decltype(setupCommonUniforms()) {
	using FunctionType = decltype(setupCommonUniforms())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupShader(bool reset) -> decltype(setupShader(reset)) {
	using FunctionType = decltype(setupShader(reset))(*)(ShaderLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, reset);
}

auto ShaderLayer::setupShockLineUniforms() -> decltype(setupShockLineUniforms()) {
	using FunctionType = decltype(setupShockLineUniforms())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x484ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupShockWaveUniforms() -> decltype(setupShockWaveUniforms()) {
	using FunctionType = decltype(setupShockWaveUniforms())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x484350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupSplitScreenShader() -> decltype(setupSplitScreenShader()) {
	using FunctionType = decltype(setupSplitScreenShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::toggleAntiAlias(bool antiAlias) -> decltype(toggleAntiAlias(antiAlias)) {
	using FunctionType = decltype(toggleAntiAlias(antiAlias))(*)(ShaderLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4829d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, antiAlias);
}

auto ShaderLayer::triggerBulge(float fadeTime, float bulge, float screenOffsetX, float screenOffsetY, float radius, int targetID, int easingType, float easingRate, bool relative) -> decltype(triggerBulge(fadeTime, bulge, screenOffsetX, screenOffsetY, radius, targetID, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerBulge(fadeTime, bulge, screenOffsetX, screenOffsetY, radius, targetID, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, float, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, bulge, screenOffsetX, screenOffsetY, radius, targetID, easingType, easingRate, relative);
}

auto ShaderLayer::triggerChromaticGlitch(bool enable, float duration, float speed, float strength, float rgbOffset, float lineThickness, float lineStrength, float segmentHeight, int easingType, float easingRate, bool relative, bool relativePos) -> decltype(triggerChromaticGlitch(enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos)) {
	using FunctionType = decltype(triggerChromaticGlitch(enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos))(*)(ShaderLayer*, bool, float, float, float, float, float, float, float, int, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos);
}

auto ShaderLayer::triggerColorChange(float fadeTime, float cr, float cg, float cb, float br, float bg, float bb, int easingType, float easingRate) -> decltype(triggerColorChange(fadeTime, cr, cg, cb, br, bg, bb, easingType, easingRate)) {
	using FunctionType = decltype(triggerColorChange(fadeTime, cr, cg, cb, br, bg, bb, easingType, easingRate))(*)(ShaderLayer*, float, float, float, float, float, float, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, cr, cg, cb, br, bg, bb, easingType, easingRate);
}

auto ShaderLayer::triggerInvertColor(float fadeTime, float target, float r, float g, float b, bool editRGB, bool tweenRGB, bool clampRGB, int easingType, float easingRate) -> decltype(triggerInvertColor(fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate)) {
	using FunctionType = decltype(triggerInvertColor(fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate))(*)(ShaderLayer*, float, float, float, float, float, bool, bool, bool, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate);
}

auto ShaderLayer::triggerLensCircle(float fadeTime, float size, float fade, float strength, int targetID, int tintChannel, float screenOffsetX, float screenOffsetY, int easingType, float easingRate, bool relative) -> decltype(triggerLensCircle(fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerLensCircle(fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, int, int, float, float, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4865c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative);
}

auto ShaderLayer::triggerPinchX(float fadeTime, float targetX, float screenOffsetX, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative) -> decltype(triggerPinchX(fadeTime, targetX, screenOffsetX, radius, modifier, target, targetID, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerPinchX(fadeTime, targetX, screenOffsetX, radius, modifier, target, targetID, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, float, bool, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetX, screenOffsetX, radius, modifier, target, targetID, easingType, easingRate, relative);
}

auto ShaderLayer::triggerPinchY(float fadeTime, float targetY, float screenOffsetY, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative) -> decltype(triggerPinchY(fadeTime, targetY, screenOffsetY, radius, modifier, target, targetID, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerPinchY(fadeTime, targetY, screenOffsetY, radius, modifier, target, targetID, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, float, bool, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetY, screenOffsetY, radius, modifier, target, targetID, easingType, easingRate, relative);
}

auto ShaderLayer::triggerRadialBlur(float fadeTime, float size, float intensity, float fade, int refChannel, float screenOffsetX, float screenOffsetY, bool target, int targetID, int easingType, float easingRate, bool emptyOnly) -> decltype(triggerRadialBlur(fadeTime, size, intensity, fade, refChannel, screenOffsetX, screenOffsetY, target, targetID, easingType, easingRate, emptyOnly)) {
	using FunctionType = decltype(triggerRadialBlur(fadeTime, size, intensity, fade, refChannel, screenOffsetX, screenOffsetY, target, targetID, easingType, easingRate, emptyOnly))(*)(ShaderLayer*, float, float, float, float, int, float, float, bool, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, size, intensity, fade, refChannel, screenOffsetX, screenOffsetY, target, targetID, easingType, easingRate, emptyOnly);
}

auto ShaderLayer::triggerShockLine(float speed, float thickness, bool rotate, bool flip, bool dual, bool invert, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, float screenOffset, int targetID, bool target, bool follow, bool relative, float maxSize, bool animate, float fadeTime, int easingType, float easingRate) -> decltype(triggerShockLine(speed, thickness, rotate, flip, dual, invert, strength, waveWidth, fadeIn, fadeOut, timeOffset, screenOffset, targetID, target, follow, relative, maxSize, animate, fadeTime, easingType, easingRate)) {
	using FunctionType = decltype(triggerShockLine(speed, thickness, rotate, flip, dual, invert, strength, waveWidth, fadeIn, fadeOut, timeOffset, screenOffset, targetID, target, follow, relative, maxSize, animate, fadeTime, easingType, easingRate))(*)(ShaderLayer*, float, float, bool, bool, bool, bool, float, float, float, float, float, float, int, bool, bool, bool, float, bool, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4849f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, speed, thickness, rotate, flip, dual, invert, strength, waveWidth, fadeIn, fadeOut, timeOffset, screenOffset, targetID, target, follow, relative, maxSize, animate, fadeTime, easingType, easingRate);
}

auto ShaderLayer::triggerShockWave(float speed, float thickness, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, bool invert, float inner, float screenOffsetX, float screenOffsetY, int targetID, bool target, bool follow, bool relative, float outer, float maxSize, bool animate, float fadeTime, int easingType, float easingRate) -> decltype(triggerShockWave(speed, thickness, strength, waveWidth, fadeIn, fadeOut, timeOffset, invert, inner, screenOffsetX, screenOffsetY, targetID, target, follow, relative, outer, maxSize, animate, fadeTime, easingType, easingRate)) {
	using FunctionType = decltype(triggerShockWave(speed, thickness, strength, waveWidth, fadeIn, fadeOut, timeOffset, invert, inner, screenOffsetX, screenOffsetY, targetID, target, follow, relative, outer, maxSize, animate, fadeTime, easingType, easingRate))(*)(ShaderLayer*, float, float, float, float, float, float, float, bool, float, float, float, int, bool, bool, bool, float, float, bool, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, speed, thickness, strength, waveWidth, fadeIn, fadeOut, timeOffset, invert, inner, screenOffsetX, screenOffsetY, targetID, target, follow, relative, outer, maxSize, animate, fadeTime, easingType, easingRate);
}

auto ShaderLayer::tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate) -> decltype(tweenValue(fromValue, toValue, action, duration, easingType, easingRate)) {
	using FunctionType = decltype(tweenValue(fromValue, toValue, action, duration, easingType, easingRate))(*)(ShaderLayer*, float, float, int, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x489440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fromValue, toValue, action, duration, easingType, easingRate);
}

auto ShaderLayer::tweenValueAuto(float value, int action, float duration, int easingType, float easingRate) -> decltype(tweenValueAuto(value, action, duration, easingType, easingRate)) {
	using FunctionType = decltype(tweenValueAuto(value, action, duration, easingType, easingRate))(*)(ShaderLayer*, float, int, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, action, duration, easingType, easingRate);
}

auto ShaderLayer::updateEffectOffsets(cocos2d::CCPoint center) -> decltype(updateEffectOffsets(center)) {
	using FunctionType = decltype(updateEffectOffsets(center))(*)(ShaderLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, center);
}

auto ShaderLayer::updateZLayer(int minLayer, int maxLayer, bool noParticles) -> decltype(updateZLayer(minLayer, maxLayer, noParticles)) {
	using FunctionType = decltype(updateZLayer(minLayer, maxLayer, noParticles))(*)(ShaderLayer*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x489550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, minLayer, maxLayer, noParticles);
}
