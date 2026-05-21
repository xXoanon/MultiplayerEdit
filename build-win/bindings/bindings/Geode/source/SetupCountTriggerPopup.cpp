
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

auto SetupCountTriggerPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41ae70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupCountTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCountTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCountTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCountTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCountTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCountTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCountTriggerPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupCountTriggerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupCountTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupCountTriggerPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupCountTriggerPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41afb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupCountTriggerPopup::onEnableGroup(cocos2d::CCObject* sender) -> decltype(onEnableGroup(sender)) {
	using FunctionType = decltype(onEnableGroup(sender))(*)(SetupCountTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCountTriggerPopup::onItemIDArrow(cocos2d::CCObject* sender) -> decltype(onItemIDArrow(sender)) {
	using FunctionType = decltype(onItemIDArrow(sender))(*)(SetupCountTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCountTriggerPopup::onMultiActivate(cocos2d::CCObject* sender) -> decltype(onMultiActivate(sender)) {
	using FunctionType = decltype(onMultiActivate(sender))(*)(SetupCountTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCountTriggerPopup::onTargetCountArrow(cocos2d::CCObject* sender) -> decltype(onTargetCountArrow(sender)) {
	using FunctionType = decltype(onTargetCountArrow(sender))(*)(SetupCountTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCountTriggerPopup::onTargetIDArrow(cocos2d::CCObject* sender) -> decltype(onTargetIDArrow(sender)) {
	using FunctionType = decltype(onTargetIDArrow(sender))(*)(SetupCountTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCountTriggerPopup::updateCountTextInputLabel() -> decltype(updateCountTextInputLabel()) {
	using FunctionType = decltype(updateCountTextInputLabel())(*)(SetupCountTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCountTriggerPopup::updateItemID() -> decltype(updateItemID()) {
	using FunctionType = decltype(updateItemID())(*)(SetupCountTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCountTriggerPopup::updateItemIDInputLabel() -> decltype(updateItemIDInputLabel()) {
	using FunctionType = decltype(updateItemIDInputLabel())(*)(SetupCountTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCountTriggerPopup::updateTargetCount() -> decltype(updateTargetCount()) {
	using FunctionType = decltype(updateTargetCount())(*)(SetupCountTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCountTriggerPopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupCountTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCountTriggerPopup::updateTargetIDInputLabel() -> decltype(updateTargetIDInputLabel()) {
	using FunctionType = decltype(updateTargetIDInputLabel())(*)(SetupCountTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
