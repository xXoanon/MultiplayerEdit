
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

auto SetupRandTriggerPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43f9f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupRandTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupRandTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupRandTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4408b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupRandTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupRandTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupRandTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x441390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupRandTriggerPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupRandTriggerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupRandTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x440bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupRandTriggerPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupRandTriggerPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43fb30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupRandTriggerPopup::onTargetID2Arrow(cocos2d::CCObject* sender) -> decltype(onTargetID2Arrow(sender)) {
	using FunctionType = decltype(onTargetID2Arrow(sender))(*)(SetupRandTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x440b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupRandTriggerPopup::onTargetIDArrow(cocos2d::CCObject* sender) -> decltype(onTargetIDArrow(sender)) {
	using FunctionType = decltype(onTargetIDArrow(sender))(*)(SetupRandTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x440b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupRandTriggerPopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupRandTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x440a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupRandTriggerPopup::updateChance() -> decltype(updateChance()) {
	using FunctionType = decltype(updateChance())(*)(SetupRandTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x272a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupRandTriggerPopup::updateChanceLabel(bool decimals) -> decltype(updateChanceLabel(decimals)) {
	using FunctionType = decltype(updateChanceLabel(decimals))(*)(SetupRandTriggerPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x440a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, decimals);
}

auto SetupRandTriggerPopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupRandTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4411f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupRandTriggerPopup::updateTargetID2() -> decltype(updateTargetID2()) {
	using FunctionType = decltype(updateTargetID2())(*)(SetupRandTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4412c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupRandTriggerPopup::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(SetupRandTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x440e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupRandTriggerPopup::updateTextInputLabel2() -> decltype(updateTextInputLabel2()) {
	using FunctionType = decltype(updateTextInputLabel2())(*)(SetupRandTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x441040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
