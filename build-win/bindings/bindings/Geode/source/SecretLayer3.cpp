
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

auto SecretLayer3::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer3::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer3::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer3::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer3::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer3::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer3::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&SecretLayer3::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(SecretLayer3*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SecretLayer3::animateEyes() -> decltype(animateEyes()) {
	using FunctionType = decltype(animateEyes())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer3::firstInteractionStep2() -> decltype(firstInteractionStep2()) {
	using FunctionType = decltype(firstInteractionStep2())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer3::firstInteractionStep4() -> decltype(firstInteractionStep4()) {
	using FunctionType = decltype(firstInteractionStep4())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ebe90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer3::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer3*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer3::onChest01(cocos2d::CCObject* sender) -> decltype(onChest01(sender)) {
	using FunctionType = decltype(onChest01(sender))(*)(SecretLayer3*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer3::onChest02(cocos2d::CCObject* sender) -> decltype(onChest02(sender)) {
	using FunctionType = decltype(onChest02(sender))(*)(SecretLayer3*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer3::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(SecretLayer3*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ec400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer3::revealStep1() -> decltype(revealStep1()) {
	using FunctionType = decltype(revealStep1())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3edc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer3::revealStep2() -> decltype(revealStep2()) {
	using FunctionType = decltype(revealStep2())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ede10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer3::revealStep4() -> decltype(revealStep4()) {
	using FunctionType = decltype(revealStep4())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ee2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer3::revealStep5() -> decltype(revealStep5()) {
	using FunctionType = decltype(revealStep5())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eeaf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer3::showUnlockDialog() -> decltype(showUnlockDialog()) {
	using FunctionType = decltype(showUnlockDialog())(*)(SecretLayer3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ed710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
