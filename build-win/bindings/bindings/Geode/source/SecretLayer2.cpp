
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

auto SecretLayer2::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e2160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SecretLayer2::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer2::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e22e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer2::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer2::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer2::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer2::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer2::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer2::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SecretLayer2*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer2::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer2::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SecretLayer2*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer2::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer2::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SecretLayer2*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer2::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&SecretLayer2::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(SecretLayer2*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e45c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SecretLayer2::getBasicMessage() -> decltype(getBasicMessage()) {
	using FunctionType = decltype(getBasicMessage())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e7bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer2::getErrorMessage() -> decltype(getErrorMessage()) {
	using FunctionType = decltype(getErrorMessage())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer2::getMessage() -> decltype(getMessage()) {
	using FunctionType = decltype(getMessage())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e7320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer2::getThreadMessage() -> decltype(getThreadMessage()) {
	using FunctionType = decltype(getThreadMessage())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e7500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer2::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer2*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer2::onDoor(cocos2d::CCObject* sender) -> decltype(onDoor(sender)) {
	using FunctionType = decltype(onDoor(sender))(*)(SecretLayer2*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e4910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer2::onSecretLevel(cocos2d::CCObject* sender) -> decltype(onSecretLevel(sender)) {
	using FunctionType = decltype(onSecretLevel(sender))(*)(SecretLayer2*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e4660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer2::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(SecretLayer2*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e5270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer2::playCoinEffect() -> decltype(playCoinEffect()) {
	using FunctionType = decltype(playCoinEffect())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e93d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer2::showCompletedLevel() -> decltype(showCompletedLevel()) {
	using FunctionType = decltype(showCompletedLevel())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e3910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer2::showSecretLevel() -> decltype(showSecretLevel()) {
	using FunctionType = decltype(showSecretLevel())(*)(SecretLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e37a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer2::updateMessageLabel(gd::string text) -> decltype(updateMessageLabel(text)) {
	using FunctionType = decltype(updateMessageLabel(text))(*)(SecretLayer2*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e7290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto SecretLayer2::updateSearchLabel(char const* text) -> decltype(updateSearchLabel(text)) {
	using FunctionType = decltype(updateSearchLabel(text))(*)(SecretLayer2*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}
