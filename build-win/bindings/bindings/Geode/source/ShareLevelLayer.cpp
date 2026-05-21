
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

auto ShareLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShareLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ShareLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShareLevelLayer::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(ShareLevelLayer*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48eec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto ShareLevelLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ShareLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelLayer::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(ShareLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelLayer::onShare(cocos2d::CCObject* sender) -> decltype(onShare(sender)) {
	using FunctionType = decltype(onShare(sender))(*)(ShareLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelLayer::selectRating(cocos2d::CCObject* sender) -> decltype(selectRating(sender)) {
	using FunctionType = decltype(selectRating(sender))(*)(ShareLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ff90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelLayer::setupStars() -> decltype(setupStars()) {
	using FunctionType = decltype(setupStars())(*)(ShareLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48fb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
