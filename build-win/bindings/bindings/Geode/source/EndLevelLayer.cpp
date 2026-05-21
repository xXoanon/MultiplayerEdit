
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

auto EndLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EndLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1356d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EndLevelLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EndLevelLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EndLevelLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EndLevelLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EndLevelLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x132e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EndLevelLayer::showLayer(bool instant) -> decltype(showLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&EndLevelLayer::showLayer), this);
	using FunctionType = decltype(showLayer(instant))(*)(EndLevelLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto EndLevelLayer::coinEnterFinished(cocos2d::CCPoint position) -> decltype(coinEnterFinished(position)) {
	using FunctionType = decltype(coinEnterFinished(position))(*)(EndLevelLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x135e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto EndLevelLayer::coinEnterFinishedO(cocos2d::CCObject* sender) -> decltype(coinEnterFinishedO(sender)) {
	using FunctionType = decltype(coinEnterFinishedO(sender))(*)(EndLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x135e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EndLevelLayer::currencyEnterFinished() -> decltype(currencyEnterFinished()) {
	using FunctionType = decltype(currencyEnterFinished())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EndLevelLayer::diamondEnterFinished() -> decltype(diamondEnterFinished()) {
	using FunctionType = decltype(diamondEnterFinished())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1369a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EndLevelLayer::getCoinString() -> decltype(getCoinString()) {
	using FunctionType = decltype(getCoinString())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EndLevelLayer::getEndText() -> decltype(getEndText()) {
	using FunctionType = decltype(getEndText())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EndLevelLayer::goEdit() -> decltype(goEdit()) {
	using FunctionType = decltype(goEdit())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x135310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EndLevelLayer::onEdit(cocos2d::CCObject* sender) -> decltype(onEdit(sender)) {
	using FunctionType = decltype(onEdit(sender))(*)(EndLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x135210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EndLevelLayer::onHideLayer(cocos2d::CCObject* sender) -> decltype(onHideLayer(sender)) {
	using FunctionType = decltype(onHideLayer(sender))(*)(EndLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1353e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EndLevelLayer::onLevelLeaderboard(cocos2d::CCObject* sender) -> decltype(onLevelLeaderboard(sender)) {
	using FunctionType = decltype(onLevelLeaderboard(sender))(*)(EndLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EndLevelLayer::onMenu(cocos2d::CCObject* sender) -> decltype(onMenu(sender)) {
	using FunctionType = decltype(onMenu(sender))(*)(EndLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x135090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EndLevelLayer::onReplay(cocos2d::CCObject* sender) -> decltype(onReplay(sender)) {
	using FunctionType = decltype(onReplay(sender))(*)(EndLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EndLevelLayer::onRestartCheckpoint(cocos2d::CCObject* sender) -> decltype(onRestartCheckpoint(sender)) {
	using FunctionType = decltype(onRestartCheckpoint(sender))(*)(EndLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1354c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EndLevelLayer::playCoinEffect(float duration) -> decltype(playCoinEffect(duration)) {
	using FunctionType = decltype(playCoinEffect(duration))(*)(EndLevelLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x135be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration);
}

auto EndLevelLayer::playCurrencyEffect(float duration) -> decltype(playCurrencyEffect(duration)) {
	using FunctionType = decltype(playCurrencyEffect(duration))(*)(EndLevelLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration);
}

auto EndLevelLayer::playDiamondEffect(float duration) -> decltype(playDiamondEffect(duration)) {
	using FunctionType = decltype(playDiamondEffect(duration))(*)(EndLevelLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration);
}

auto EndLevelLayer::playEndEffect() -> decltype(playEndEffect()) {
	using FunctionType = decltype(playEndEffect())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EndLevelLayer::playStarEffect(float duration) -> decltype(playStarEffect(duration)) {
	using FunctionType = decltype(playStarEffect(duration))(*)(EndLevelLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1356e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration);
}

auto EndLevelLayer::starEnterFinished() -> decltype(starEnterFinished()) {
	using FunctionType = decltype(starEnterFinished())(*)(EndLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x135a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
