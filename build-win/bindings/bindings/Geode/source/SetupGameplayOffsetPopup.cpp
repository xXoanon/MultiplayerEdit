
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

auto SetupGameplayOffsetPopup::updateInputValue(int tag, float& value) -> decltype(updateInputValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float&>::func(&SetupGameplayOffsetPopup::updateInputValue), this);
	using FunctionType = decltype(updateInputValue(tag, value))(*)(SetupGameplayOffsetPopup*, int, float&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x442940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupGameplayOffsetPopup::updateInputNode(int tag, float value) -> decltype(updateInputNode(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupGameplayOffsetPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(tag, value))(*)(SetupGameplayOffsetPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x442920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupGameplayOffsetPopup::triggerValueFromSliderValue(int tag, float value) -> decltype(triggerValueFromSliderValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupGameplayOffsetPopup::triggerValueFromSliderValue), this);
	using FunctionType = decltype(triggerValueFromSliderValue(tag, value))(*)(SetupGameplayOffsetPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4428d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupGameplayOffsetPopup::triggerSliderValueFromValue(int tag, float value) -> decltype(triggerSliderValueFromValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupGameplayOffsetPopup::triggerSliderValueFromValue), this);
	using FunctionType = decltype(triggerSliderValueFromValue(tag, value))(*)(SetupGameplayOffsetPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x442900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupGameplayOffsetPopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupGameplayOffsetPopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupGameplayOffsetPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x442820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupGameplayOffsetPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupGameplayOffsetPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x442040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupGameplayOffsetPopup::onDefaultValues(cocos2d::CCObject* sender) -> decltype(onDefaultValues(sender)) {
	using FunctionType = decltype(onDefaultValues(sender))(*)(SetupGameplayOffsetPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x442770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
