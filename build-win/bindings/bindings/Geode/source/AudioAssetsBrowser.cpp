
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

auto AudioAssetsBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsBrowser::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&AudioAssetsBrowser::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(AudioAssetsBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto AudioAssetsBrowser::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&AudioAssetsBrowser::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(AudioAssetsBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto AudioAssetsBrowser::init(gd::vector<int>& songIds, gd::vector<int>& sfxIds) -> decltype(init(songIds, sfxIds)) {
	using FunctionType = decltype(init(songIds, sfxIds))(*)(AudioAssetsBrowser*, gd::vector<int>&, gd::vector<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x837b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songIds, sfxIds);
}

auto AudioAssetsBrowser::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(AudioAssetsBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AudioAssetsBrowser::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(AudioAssetsBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AudioAssetsBrowser::setupList() -> decltype(setupList()) {
	using FunctionType = decltype(setupList())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
