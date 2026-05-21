
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

auto SecretLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dca70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SecretLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3df820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SecretLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3df970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SecretLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3df970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer::getBasicMessage() -> decltype(getBasicMessage()) {
	using FunctionType = decltype(getBasicMessage())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e0d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::getMessage() -> decltype(getMessage()) {
	using FunctionType = decltype(getMessage())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dfdc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::getThreadMessage() -> decltype(getThreadMessage()) {
	using FunctionType = decltype(getThreadMessage())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dffb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(SecretLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dddb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer::playCoinEffect() -> decltype(playCoinEffect()) {
	using FunctionType = decltype(playCoinEffect())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::updateMessageLabel(gd::string text) -> decltype(updateMessageLabel(text)) {
	using FunctionType = decltype(updateMessageLabel(text))(*)(SecretLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dfd30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto SecretLayer::updateSearchLabel(char const* text) -> decltype(updateSearchLabel(text)) {
	using FunctionType = decltype(updateSearchLabel(text))(*)(SecretLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dfa40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}
