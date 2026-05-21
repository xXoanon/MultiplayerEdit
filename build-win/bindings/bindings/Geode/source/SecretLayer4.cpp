
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

auto SecretLayer4::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer4::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3efb20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer4::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer4::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer4::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer4::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f3720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer4::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer4::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SecretLayer4*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer4::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer4::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SecretLayer4*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer4::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer4::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SecretLayer4*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer4::getBasicMessage() -> decltype(getBasicMessage()) {
	using FunctionType = decltype(getBasicMessage())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f2e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::getErrorMessage() -> decltype(getErrorMessage()) {
	using FunctionType = decltype(getErrorMessage())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::getMessage() -> decltype(getMessage()) {
	using FunctionType = decltype(getMessage())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f2260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::getThreadMessage() -> decltype(getThreadMessage()) {
	using FunctionType = decltype(getThreadMessage())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f2440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer4*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f3670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer4::onChest01(cocos2d::CCObject* sender) -> decltype(onChest01(sender)) {
	using FunctionType = decltype(onChest01(sender))(*)(SecretLayer4*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f0be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer4::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(SecretLayer4*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f0d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer4::showFirstDialog() -> decltype(showFirstDialog()) {
	using FunctionType = decltype(showFirstDialog())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f2860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::updateMessageLabel(gd::string text) -> decltype(updateMessageLabel(text)) {
	using FunctionType = decltype(updateMessageLabel(text))(*)(SecretLayer4*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e7290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto SecretLayer4::updateSearchLabel(char const* text) -> decltype(updateSearchLabel(text)) {
	using FunctionType = decltype(updateSearchLabel(text))(*)(SecretLayer4*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}
