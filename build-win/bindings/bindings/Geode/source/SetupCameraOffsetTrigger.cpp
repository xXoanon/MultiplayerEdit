
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

auto SetupCameraOffsetTrigger::create(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x415350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupCameraOffsetTrigger::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCameraOffsetTrigger::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4166b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCameraOffsetTrigger::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCameraOffsetTrigger::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCameraOffsetTrigger::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupCameraOffsetTrigger::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupCameraOffsetTrigger*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4173c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupCameraOffsetTrigger::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetupCameraOffsetTrigger::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetupCameraOffsetTrigger*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupCameraOffsetTrigger::init(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupCameraOffsetTrigger*, CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x415470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupCameraOffsetTrigger::onEasing(cocos2d::CCObject* sender) -> decltype(onEasing(sender)) {
	using FunctionType = decltype(onEasing(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::onEasingRate(cocos2d::CCObject* sender) -> decltype(onEasingRate(sender)) {
	using FunctionType = decltype(onEasingRate(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4169f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::onTargetMode(cocos2d::CCObject* sender) -> decltype(onTargetMode(sender)) {
	using FunctionType = decltype(onTargetMode(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4172e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x271d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::sliderXChanged(cocos2d::CCObject* sender) -> decltype(sliderXChanged(sender)) {
	using FunctionType = decltype(sliderXChanged(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4170e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::sliderYChanged(cocos2d::CCObject* sender) -> decltype(sliderYChanged(sender)) {
	using FunctionType = decltype(sliderYChanged(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::toggleEasingRateVisibility() -> decltype(toggleEasingRateVisibility()) {
	using FunctionType = decltype(toggleEasingRateVisibility())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateDuration() -> decltype(updateDuration()) {
	using FunctionType = decltype(updateDuration())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x272a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateEasingLabel() -> decltype(updateEasingLabel()) {
	using FunctionType = decltype(updateEasingLabel())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateEasingRateLabel() -> decltype(updateEasingRateLabel()) {
	using FunctionType = decltype(updateEasingRateLabel())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x416b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateMoveCommandPosX() -> decltype(updateMoveCommandPosX()) {
	using FunctionType = decltype(updateMoveCommandPosX())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateMoveCommandPosY() -> decltype(updateMoveCommandPosY()) {
	using FunctionType = decltype(updateMoveCommandPosY())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateValueXLabel() -> decltype(updateValueXLabel()) {
	using FunctionType = decltype(updateValueXLabel())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateValueYLabel() -> decltype(updateValueYLabel()) {
	using FunctionType = decltype(updateValueYLabel())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
