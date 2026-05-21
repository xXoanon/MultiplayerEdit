
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

auto SetupEnterEffectPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupEnterEffectPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupEnterEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupEnterEffectPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupEnterEffectPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupEnterEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupEnterEffectPopup::updateInputValue(int tag, float& value) -> decltype(updateInputValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float&>::func(&SetupEnterEffectPopup::updateInputValue), this);
	using FunctionType = decltype(updateInputValue(tag, value))(*)(SetupEnterEffectPopup*, int, float&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupEnterEffectPopup::updateInputNode(int tag, float value) -> decltype(updateInputNode(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupEnterEffectPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(tag, value))(*)(SetupEnterEffectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupEnterEffectPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupEnterEffectPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupEnterEffectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupEnterEffectPopup::triggerValueFromSliderValue(int tag, float value) -> decltype(triggerValueFromSliderValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupEnterEffectPopup::triggerValueFromSliderValue), this);
	using FunctionType = decltype(triggerValueFromSliderValue(tag, value))(*)(SetupEnterEffectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupEnterEffectPopup::triggerSliderValueFromValue(int tag, float value) -> decltype(triggerSliderValueFromValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupEnterEffectPopup::triggerSliderValueFromValue), this);
	using FunctionType = decltype(triggerSliderValueFromValue(tag, value))(*)(SetupEnterEffectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupEnterEffectPopup::hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value) -> decltype(hsvPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<HSVWidgetPopup*, cocos2d::ccHSVValue>::func(&SetupEnterEffectPopup::hsvPopupClosed), this);
	using FunctionType = decltype(hsvPopupClosed(popup, value))(*)(SetupEnterEffectPopup*, HSVWidgetPopup*, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupEnterEffectPopup::init(EnterEffectObject* object, cocos2d::CCArray* objects, int id) -> decltype(init(object, objects, id)) {
	using FunctionType = decltype(init(object, objects, id))(*)(SetupEnterEffectPopup*, EnterEffectObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, id);
}

auto SetupEnterEffectPopup::onEnterType(cocos2d::CCObject* sender) -> decltype(onEnterType(sender)) {
	using FunctionType = decltype(onEnterType(sender))(*)(SetupEnterEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEnterEffectPopup::onHSV(cocos2d::CCObject* sender) -> decltype(onHSV(sender)) {
	using FunctionType = decltype(onHSV(sender))(*)(SetupEnterEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEnterEffectPopup::onNextFreeEnterChannel(cocos2d::CCObject* sender) -> decltype(onNextFreeEnterChannel(sender)) {
	using FunctionType = decltype(onNextFreeEnterChannel(sender))(*)(SetupEnterEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEnterEffectPopup::onNextFreeEnterEffectID(cocos2d::CCObject* sender) -> decltype(onNextFreeEnterEffectID(sender)) {
	using FunctionType = decltype(onNextFreeEnterEffectID(sender))(*)(SetupEnterEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40d9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEnterEffectPopup::updateHSVButton() -> decltype(updateHSVButton()) {
	using FunctionType = decltype(updateHSVButton())(*)(SetupEnterEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4207a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
