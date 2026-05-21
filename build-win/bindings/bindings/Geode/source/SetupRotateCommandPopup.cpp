
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

auto SetupRotateCommandPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupRotateCommandPopup::updateInputNode(int tag, float value) -> decltype(updateInputNode(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupRotateCommandPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(tag, value))(*)(SetupRotateCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupRotateCommandPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupRotateCommandPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupRotateCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupRotateCommandPopup::triggerValueFromSliderValue(int tag, float value) -> decltype(triggerValueFromSliderValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupRotateCommandPopup::triggerValueFromSliderValue), this);
	using FunctionType = decltype(triggerValueFromSliderValue(tag, value))(*)(SetupRotateCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupRotateCommandPopup::triggerSliderValueFromValue(int tag, float value) -> decltype(triggerSliderValueFromValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupRotateCommandPopup::triggerSliderValueFromValue), this);
	using FunctionType = decltype(triggerSliderValueFromValue(tag, value))(*)(SetupRotateCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupRotateCommandPopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupRotateCommandPopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupRotateCommandPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupRotateCommandPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupRotateCommandPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupRotateCommandPopup::onInfiniteDuration(cocos2d::CCObject* sender) -> decltype(onInfiniteDuration(sender)) {
	using FunctionType = decltype(onInfiniteDuration(sender))(*)(SetupRotateCommandPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a92d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupRotateCommandPopup::updateControlVisibility() -> decltype(updateControlVisibility()) {
	using FunctionType = decltype(updateControlVisibility())(*)(SetupRotateCommandPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a91f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
