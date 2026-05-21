
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

auto ShareLevelSettingsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShareLevelSettingsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ShareLevelSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x491ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShareLevelSettingsLayer::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(ShareLevelSettingsLayer*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4910e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto ShareLevelSettingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ShareLevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x491e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelSettingsLayer::onUnlisted(cocos2d::CCObject* sender) -> decltype(onUnlisted(sender)) {
	using FunctionType = decltype(onUnlisted(sender))(*)(ShareLevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x491b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelSettingsLayer::onUnlistedFriendsOnly(cocos2d::CCObject* sender) -> decltype(onUnlistedFriendsOnly(sender)) {
	using FunctionType = decltype(onUnlistedFriendsOnly(sender))(*)(ShareLevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x491d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelSettingsLayer::updateSettingsState() -> decltype(updateSettingsState()) {
	using FunctionType = decltype(updateSettingsState())(*)(ShareLevelSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x491d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
