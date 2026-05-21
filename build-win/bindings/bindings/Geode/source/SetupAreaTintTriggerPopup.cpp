
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

SetupAreaTintTriggerPopup::SetupAreaTintTriggerPopup() : SetupAreaTintTriggerPopup(geode::CutoffConstructor, sizeof(SetupAreaTintTriggerPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup();

	using FunctionType = void(*)(SetupAreaTintTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40af10, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto SetupAreaTintTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupAreaTintTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupAreaTintTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupAreaTintTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupAreaTintTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupAreaTintTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupAreaTintTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAreaTintTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupAreaTintTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaTintTriggerPopup::hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value) -> decltype(hsvPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<HSVWidgetPopup*, cocos2d::ccHSVValue>::func(&SetupAreaTintTriggerPopup::hsvPopupClosed), this);
	using FunctionType = decltype(hsvPopupClosed(popup, value))(*)(SetupAreaTintTriggerPopup*, HSVWidgetPopup*, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupAreaTintTriggerPopup::init(EnterEffectObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupAreaTintTriggerPopup*, EnterEffectObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40f900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupAreaTintTriggerPopup::onHSV(cocos2d::CCObject* sender) -> decltype(onHSV(sender)) {
	using FunctionType = decltype(onHSV(sender))(*)(SetupAreaTintTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4106a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAreaTintTriggerPopup::updateHSVButton() -> decltype(updateHSVButton()) {
	using FunctionType = decltype(updateHSVButton())(*)(SetupAreaTintTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
