
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

auto CreatorLayer::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9bfd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto CreatorLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::init), this);
	using FunctionType = decltype(init())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9c140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9f9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::sceneWillResume() -> decltype(sceneWillResume()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::sceneWillResume), this);
	using FunctionType = decltype(sceneWillResume())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9f860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&CreatorLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(CreatorLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9f740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto CreatorLayer::checkQuestsStatus() -> decltype(checkQuestsStatus()) {
	using FunctionType = decltype(checkQuestsStatus())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9f620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CreatorLayer::onAdventureMap(cocos2d::CCObject* sender) -> decltype(onAdventureMap(sender)) {
	using FunctionType = decltype(onAdventureMap(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9f800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onChallenge(cocos2d::CCObject* sender) -> decltype(onChallenge(sender)) {
	using FunctionType = decltype(onChallenge(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onDailyLevel(cocos2d::CCObject* sender) -> decltype(onDailyLevel(sender)) {
	using FunctionType = decltype(onDailyLevel(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onEventLevel(cocos2d::CCObject* sender) -> decltype(onEventLevel(sender)) {
	using FunctionType = decltype(onEventLevel(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onFeaturedLevels(cocos2d::CCObject* sender) -> decltype(onFeaturedLevels(sender)) {
	using FunctionType = decltype(onFeaturedLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onGauntlets(cocos2d::CCObject* sender) -> decltype(onGauntlets(sender)) {
	using FunctionType = decltype(onGauntlets(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9dc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onLeaderboards(cocos2d::CCObject* sender) -> decltype(onLeaderboards(sender)) {
	using FunctionType = decltype(onLeaderboards(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onMapPacks(cocos2d::CCObject* sender) -> decltype(onMapPacks(sender)) {
	using FunctionType = decltype(onMapPacks(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9db40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onMultiplayer(cocos2d::CCObject* sender) -> decltype(onMultiplayer(sender)) {
	using FunctionType = decltype(onMultiplayer(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9dc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onMyLevels(cocos2d::CCObject* sender) -> decltype(onMyLevels(sender)) {
	using FunctionType = decltype(onMyLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onOnlineLevels(cocos2d::CCObject* sender) -> decltype(onOnlineLevels(sender)) {
	using FunctionType = decltype(onOnlineLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9dac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onPaths(cocos2d::CCObject* sender) -> decltype(onPaths(sender)) {
	using FunctionType = decltype(onPaths(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onSavedLevels(cocos2d::CCObject* sender) -> decltype(onSavedLevels(sender)) {
	using FunctionType = decltype(onSavedLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onSecretVault(cocos2d::CCObject* sender) -> decltype(onSecretVault(sender)) {
	using FunctionType = decltype(onSecretVault(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onTopLists(cocos2d::CCObject* sender) -> decltype(onTopLists(sender)) {
	using FunctionType = decltype(onTopLists(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onTreasureRoom(cocos2d::CCObject* sender) -> decltype(onTreasureRoom(sender)) {
	using FunctionType = decltype(onTreasureRoom(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9eda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onWeeklyLevel(cocos2d::CCObject* sender) -> decltype(onWeeklyLevel(sender)) {
	using FunctionType = decltype(onWeeklyLevel(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e3e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
