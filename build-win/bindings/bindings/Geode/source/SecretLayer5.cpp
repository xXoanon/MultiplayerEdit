
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

auto SecretLayer5::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::updateTweenActionInt(float value, int tag) -> decltype(updateTweenActionInt(value, tag)) {
	auto self = addresser::thunkAdjust(Resolve<float, int>::func(&SecretLayer5::updateTweenActionInt), this);
	using FunctionType = decltype(updateTweenActionInt(value, tag))(*)(SecretLayer5*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, tag);
}

auto SecretLayer5::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f8000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer5::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SecretLayer5*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer5::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer5::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SecretLayer5*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f74a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer5::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer5::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SecretLayer5*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f74a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer5::onlineRewardStatusFinished(gd::string key) -> decltype(onlineRewardStatusFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string>::func(&SecretLayer5::onlineRewardStatusFinished), this);
	using FunctionType = decltype(onlineRewardStatusFinished(key))(*)(SecretLayer5*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto SecretLayer5::onlineRewardStatusFailed() -> decltype(onlineRewardStatusFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::onlineRewardStatusFailed), this);
	using FunctionType = decltype(onlineRewardStatusFailed())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::animateHead() -> decltype(animateHead()) {
	using FunctionType = decltype(animateHead())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f53d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::claimOnlineReward() -> decltype(claimOnlineReward()) {
	using FunctionType = decltype(claimOnlineReward())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::fadeInSubmitMessage() -> decltype(fadeInSubmitMessage()) {
	using FunctionType = decltype(fadeInSubmitMessage())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f51d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::fadeOutMessage() -> decltype(fadeOutMessage()) {
	using FunctionType = decltype(fadeOutMessage())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f53a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::finishLoadingState() -> decltype(finishLoadingState()) {
	using FunctionType = decltype(finishLoadingState())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::handleSecretResponse() -> decltype(handleSecretResponse()) {
	using FunctionType = decltype(handleSecretResponse())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f57b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer5*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer5::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(SecretLayer5*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer5::playWinSFX() -> decltype(playWinSFX()) {
	using FunctionType = decltype(playWinSFX())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showFailAnimation() -> decltype(showFailAnimation()) {
	using FunctionType = decltype(showFailAnimation())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showFirstDialog() -> decltype(showFirstDialog()) {
	using FunctionType = decltype(showFirstDialog())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showSuccessAnimation() -> decltype(showSuccessAnimation()) {
	using FunctionType = decltype(showSuccessAnimation())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showTextInput() -> decltype(showTextInput()) {
	using FunctionType = decltype(showTextInput())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::unlockUI() -> decltype(unlockUI()) {
	using FunctionType = decltype(unlockUI())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::updateSearchLabel(char const* text) -> decltype(updateSearchLabel(text)) {
	using FunctionType = decltype(updateSearchLabel(text))(*)(SecretLayer5*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}
