
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

auto SetupShaderEffectPopup::toggleGroup(int group, bool visible) -> decltype(toggleGroup(group, visible)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&SetupShaderEffectPopup::toggleGroup), this);
	using FunctionType = decltype(toggleGroup(group, visible))(*)(SetupShaderEffectPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4549f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, group, visible);
}

auto SetupShaderEffectPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupShaderEffectPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupShaderEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupShaderEffectPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupShaderEffectPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44a5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupShaderEffectPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupShaderEffectPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupShaderEffectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4545c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupShaderEffectPopup::init(EffectGameObject* object, cocos2d::CCArray* objects, int id) -> decltype(init(object, objects, id)) {
	using FunctionType = decltype(init(object, objects, id))(*)(SetupShaderEffectPopup*, EffectGameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44a2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, id);
}

auto SetupShaderEffectPopup::onResetColors(cocos2d::CCObject* sender) -> decltype(onResetColors(sender)) {
	using FunctionType = decltype(onResetColors(sender))(*)(SetupShaderEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x453f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupShaderEffectPopup::onZLayer(cocos2d::CCObject* sender) -> decltype(onZLayer(sender)) {
	using FunctionType = decltype(onZLayer(sender))(*)(SetupShaderEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupShaderEffectPopup::setupBulge() -> decltype(setupBulge()) {
	using FunctionType = decltype(setupBulge())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4511a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupChromatic() -> decltype(setupChromatic()) {
	using FunctionType = decltype(setupChromatic())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ddd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupChromaticGlitch() -> decltype(setupChromaticGlitch()) {
	using FunctionType = decltype(setupChromaticGlitch())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44e350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupColorChange() -> decltype(setupColorChange()) {
	using FunctionType = decltype(setupColorChange())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x453850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupGlitch() -> decltype(setupGlitch()) {
	using FunctionType = decltype(setupGlitch())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44d750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupGrayscale() -> decltype(setupGrayscale()) {
	using FunctionType = decltype(setupGrayscale())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x452660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupHueShift() -> decltype(setupHueShift()) {
	using FunctionType = decltype(setupHueShift())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x453500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupInvertColor() -> decltype(setupInvertColor()) {
	using FunctionType = decltype(setupInvertColor())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x452e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupLensCircle() -> decltype(setupLensCircle()) {
	using FunctionType = decltype(setupLensCircle())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44f2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupMotionBlur() -> decltype(setupMotionBlur()) {
	using FunctionType = decltype(setupMotionBlur())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x450630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupPinch() -> decltype(setupPinch()) {
	using FunctionType = decltype(setupPinch())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupPixelate() -> decltype(setupPixelate()) {
	using FunctionType = decltype(setupPixelate())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ec00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupRadialBlur() -> decltype(setupRadialBlur()) {
	using FunctionType = decltype(setupRadialBlur())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44fbf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupSepia() -> decltype(setupSepia()) {
	using FunctionType = decltype(setupSepia())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x452b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupShaderTrigger() -> decltype(setupShaderTrigger()) {
	using FunctionType = decltype(setupShaderTrigger())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44a6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupShockLine() -> decltype(setupShockLine()) {
	using FunctionType = decltype(setupShockLine())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44c550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupShockWave() -> decltype(setupShockWave()) {
	using FunctionType = decltype(setupShockWave())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupSplitScreen() -> decltype(setupSplitScreen()) {
	using FunctionType = decltype(setupSplitScreen())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4540e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::updateZLayerButtons() -> decltype(updateZLayerButtons()) {
	using FunctionType = decltype(updateZLayerButtons())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::zLayerToString(int zLayer) -> decltype(zLayerToString(zLayer)) {
	using FunctionType = decltype(zLayerToString(zLayer))(*)(SetupShaderEffectPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44adc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}
