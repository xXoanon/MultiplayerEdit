
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

auto SetupMoveCommandPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x280820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupMoveCommandPopup::updateInputValue(int tag, float& value) -> decltype(updateInputValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float&>::func(&SetupMoveCommandPopup::updateInputValue), this);
	using FunctionType = decltype(updateInputValue(tag, value))(*)(SetupMoveCommandPopup*, int, float&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x281e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupMoveCommandPopup::updateInputNode(int tag, float value) -> decltype(updateInputNode(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupMoveCommandPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(tag, value))(*)(SetupMoveCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x281dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupMoveCommandPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupMoveCommandPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupMoveCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x281e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupMoveCommandPopup::triggerValueFromSliderValue(int tag, float value) -> decltype(triggerValueFromSliderValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupMoveCommandPopup::triggerValueFromSliderValue), this);
	using FunctionType = decltype(triggerValueFromSliderValue(tag, value))(*)(SetupMoveCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x281d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupMoveCommandPopup::triggerSliderValueFromValue(int tag, float value) -> decltype(triggerSliderValueFromValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupMoveCommandPopup::triggerSliderValueFromValue), this);
	using FunctionType = decltype(triggerSliderValueFromValue(tag, value))(*)(SetupMoveCommandPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x281d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupMoveCommandPopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupMoveCommandPopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupMoveCommandPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2824a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupMoveCommandPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupMoveCommandPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x280940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupMoveCommandPopup::updateControlVisibility() -> decltype(updateControlVisibility()) {
	using FunctionType = decltype(updateControlVisibility())(*)(SetupMoveCommandPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2822e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
