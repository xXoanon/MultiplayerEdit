
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

auto RetryLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RetryLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(RetryLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RetryLevelLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&RetryLevelLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(RetryLevelLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbe40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto RetryLevelLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RetryLevelLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(RetryLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RetryLevelLayer::showLayer(bool instant) -> decltype(showLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&RetryLevelLayer::showLayer), this);
	using FunctionType = decltype(showLayer(instant))(*)(RetryLevelLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto RetryLevelLayer::enterAnimFinished() -> decltype(enterAnimFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RetryLevelLayer::enterAnimFinished), this);
	using FunctionType = decltype(enterAnimFinished())(*)(RetryLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbd20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RetryLevelLayer::rewardedVideoFinished() -> decltype(rewardedVideoFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RetryLevelLayer::rewardedVideoFinished), this);
	using FunctionType = decltype(rewardedVideoFinished())(*)(RetryLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbd60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RetryLevelLayer::onMenu(cocos2d::CCObject* sender) -> decltype(onMenu(sender)) {
	using FunctionType = decltype(onMenu(sender))(*)(RetryLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbe90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RetryLevelLayer::onReplay(cocos2d::CCObject* sender) -> decltype(onReplay(sender)) {
	using FunctionType = decltype(onReplay(sender))(*)(RetryLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbd70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RetryLevelLayer::setupLastProgress() -> decltype(setupLastProgress()) {
	using FunctionType = decltype(setupLastProgress())(*)(RetryLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb7c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
