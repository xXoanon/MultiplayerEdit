
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

auto MenuLayer::scene(bool isVideoOptionsOpen) -> decltype(scene(isVideoOptionsOpen)) {
	using FunctionType = decltype(scene(isVideoOptionsOpen))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(isVideoOptionsOpen);
}

auto MenuLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::init), this);
	using FunctionType = decltype(init())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&MenuLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(MenuLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x336360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto MenuLayer::googlePlaySignedIn() -> decltype(googlePlaySignedIn()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::googlePlaySignedIn), this);
	using FunctionType = decltype(googlePlaySignedIn())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MenuLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MenuLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x336150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MenuLayer::endGame() -> decltype(endGame()) {
	using FunctionType = decltype(endGame())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3363d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::firstNetworkTest() -> decltype(firstNetworkTest()) {
	using FunctionType = decltype(firstNetworkTest())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3352f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::onAchievements(cocos2d::CCObject* sender) -> decltype(onAchievements(sender)) {
	using FunctionType = decltype(onAchievements(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onCreator(cocos2d::CCObject* sender) -> decltype(onCreator(sender)) {
	using FunctionType = decltype(onCreator(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onDaily(cocos2d::CCObject* sender) -> decltype(onDaily(sender)) {
	using FunctionType = decltype(onDaily(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3350a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onDiscord(cocos2d::CCObject* sender) -> decltype(onDiscord(sender)) {
	using FunctionType = decltype(onDiscord(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onFacebook(cocos2d::CCObject* sender) -> decltype(onFacebook(sender)) {
	using FunctionType = decltype(onFacebook(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3356a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onGarage(cocos2d::CCObject* sender) -> decltype(onGarage(sender)) {
	using FunctionType = decltype(onGarage(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onMoreGames(cocos2d::CCObject* sender) -> decltype(onMoreGames(sender)) {
	using FunctionType = decltype(onMoreGames(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onMyProfile(cocos2d::CCObject* sender) -> decltype(onMyProfile(sender)) {
	using FunctionType = decltype(onMyProfile(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3355e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onNewgrounds(cocos2d::CCObject* sender) -> decltype(onNewgrounds(sender)) {
	using FunctionType = decltype(onNewgrounds(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onOptionsInstant() -> decltype(onOptionsInstant()) {
	using FunctionType = decltype(onOptionsInstant())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3359d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onQuit(cocos2d::CCObject* sender) -> decltype(onQuit(sender)) {
	using FunctionType = decltype(onQuit(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onRobTop(cocos2d::CCObject* sender) -> decltype(onRobTop(sender)) {
	using FunctionType = decltype(onRobTop(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onStats(cocos2d::CCObject* sender) -> decltype(onStats(sender)) {
	using FunctionType = decltype(onStats(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onTwitch(cocos2d::CCObject* sender) -> decltype(onTwitch(sender)) {
	using FunctionType = decltype(onTwitch(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onTwitter(cocos2d::CCObject* sender) -> decltype(onTwitter(sender)) {
	using FunctionType = decltype(onTwitter(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3356c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onYouTube(cocos2d::CCObject* sender) -> decltype(onYouTube(sender)) {
	using FunctionType = decltype(onYouTube(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3356e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::openOptions(bool videoOptions) -> decltype(openOptions(videoOptions)) {
	using FunctionType = decltype(openOptions(videoOptions))(*)(MenuLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, videoOptions);
}

auto MenuLayer::showTOS() -> decltype(showTOS()) {
	using FunctionType = decltype(showTOS())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3354c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::updateUserProfileButton() -> decltype(updateUserProfileButton()) {
	using FunctionType = decltype(updateUserProfileButton())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3351f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::willClose() -> decltype(willClose()) {
	using FunctionType = decltype(willClose())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3360b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
