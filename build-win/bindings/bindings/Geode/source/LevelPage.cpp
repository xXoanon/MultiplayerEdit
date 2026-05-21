
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

auto LevelPage::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&LevelPage::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(LevelPage*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31e290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto LevelPage::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&LevelPage::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(LevelPage*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto LevelPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9b7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelPage::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&LevelPage::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(LevelPage*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31d7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LevelPage::addSecretCoin() -> decltype(addSecretCoin()) {
	using FunctionType = decltype(addSecretCoin())(*)(LevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31c3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelPage::addSecretDoor() -> decltype(addSecretDoor()) {
	using FunctionType = decltype(addSecretDoor())(*)(LevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31cab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelPage::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(LevelPage*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto LevelPage::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ddf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPage::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(LevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31d880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPage::onSecretDoor(cocos2d::CCObject* sender) -> decltype(onSecretDoor(sender)) {
	using FunctionType = decltype(onSecretDoor(sender))(*)(LevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ccc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPage::onTheTower(cocos2d::CCObject* sender) -> decltype(onTheTower(sender)) {
	using FunctionType = decltype(onTheTower(sender))(*)(LevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31bce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPage::playCoinEffect() -> decltype(playCoinEffect()) {
	using FunctionType = decltype(playCoinEffect())(*)(LevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31c5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelPage::playStep2() -> decltype(playStep2()) {
	using FunctionType = decltype(playStep2())(*)(LevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31dc10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelPage::playStep3() -> decltype(playStep3()) {
	using FunctionType = decltype(playStep3())(*)(LevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31dcf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelPage::updateDynamicPage(GJGameLevel* level) -> decltype(updateDynamicPage(level)) {
	using FunctionType = decltype(updateDynamicPage(level))(*)(LevelPage*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}
