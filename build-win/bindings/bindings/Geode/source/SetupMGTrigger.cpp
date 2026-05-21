
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

auto SetupMGTrigger::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x427160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupMGTrigger::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupMGTrigger::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupMGTrigger::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupMGTrigger::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupMGTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupMGTrigger::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupMGTrigger::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupMGTrigger*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4285b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupMGTrigger::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetupMGTrigger::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetupMGTrigger*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupMGTrigger::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupMGTrigger*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x427280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupMGTrigger::onEasing(cocos2d::CCObject* sender) -> decltype(onEasing(sender)) {
	using FunctionType = decltype(onEasing(sender))(*)(SetupMGTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupMGTrigger::onEasingRate(cocos2d::CCObject* sender) -> decltype(onEasingRate(sender)) {
	using FunctionType = decltype(onEasingRate(sender))(*)(SetupMGTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4169f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupMGTrigger::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupMGTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x271d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupMGTrigger::sliderYChanged(cocos2d::CCObject* sender) -> decltype(sliderYChanged(sender)) {
	using FunctionType = decltype(sliderYChanged(sender))(*)(SetupMGTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4284b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupMGTrigger::toggleEasingRateVisibility() -> decltype(toggleEasingRateVisibility()) {
	using FunctionType = decltype(toggleEasingRateVisibility())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupMGTrigger::updateDuration() -> decltype(updateDuration()) {
	using FunctionType = decltype(updateDuration())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x272a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupMGTrigger::updateDurLabel(bool decimals) -> decltype(updateDurLabel(decimals)) {
	using FunctionType = decltype(updateDurLabel(decimals))(*)(SetupMGTrigger*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x271de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, decimals);
}

auto SetupMGTrigger::updateEasingLabel() -> decltype(updateEasingLabel()) {
	using FunctionType = decltype(updateEasingLabel())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupMGTrigger::updateEasingRateLabel() -> decltype(updateEasingRateLabel()) {
	using FunctionType = decltype(updateEasingRateLabel())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupMGTrigger::updateMoveCommandPosY() -> decltype(updateMoveCommandPosY()) {
	using FunctionType = decltype(updateMoveCommandPosY())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupMGTrigger::updateValueYLabel() -> decltype(updateValueYLabel()) {
	using FunctionType = decltype(updateValueYLabel())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
