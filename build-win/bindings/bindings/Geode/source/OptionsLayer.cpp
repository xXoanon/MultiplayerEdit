
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

auto OptionsLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(OptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x371d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsLayer::layerHidden() -> decltype(layerHidden()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsLayer::layerHidden), this);
	using FunctionType = decltype(layerHidden())(*)(OptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x373560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsLayer::musicSliderChanged(cocos2d::CCObject* sender) -> decltype(musicSliderChanged(sender)) {
	using FunctionType = decltype(musicSliderChanged(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x372990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onAccount(cocos2d::CCObject* sender) -> decltype(onAccount(sender)) {
	using FunctionType = decltype(onAccount(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x373480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onHelp(cocos2d::CCObject* sender) -> decltype(onHelp(sender)) {
	using FunctionType = decltype(onHelp(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x373540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onMenuMusic(cocos2d::CCObject* sender) -> decltype(onMenuMusic(sender)) {
	using FunctionType = decltype(onMenuMusic(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x372880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x372b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onRate(cocos2d::CCObject* sender) -> decltype(onRate(sender)) {
	using FunctionType = decltype(onRate(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3734d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onSecretVault(cocos2d::CCObject* sender) -> decltype(onSecretVault(sender)) {
	using FunctionType = decltype(onSecretVault(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x372cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onSoundtracks(cocos2d::CCObject* sender) -> decltype(onSoundtracks(sender)) {
	using FunctionType = decltype(onSoundtracks(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x372b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onSupport(cocos2d::CCObject* sender) -> decltype(onSupport(sender)) {
	using FunctionType = decltype(onSupport(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x373430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onVideo(cocos2d::CCObject* sender) -> decltype(onVideo(sender)) {
	using FunctionType = decltype(onVideo(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x373410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::sfxSliderChanged(cocos2d::CCObject* sender) -> decltype(sfxSliderChanged(sender)) {
	using FunctionType = decltype(sfxSliderChanged(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x372a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
