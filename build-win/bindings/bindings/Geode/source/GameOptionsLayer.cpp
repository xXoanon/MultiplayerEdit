
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

auto GameOptionsLayer::setupOptions() -> decltype(setupOptions()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameOptionsLayer::setupOptions), this);
	using FunctionType = decltype(setupOptions())(*)(GameOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29ef40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameOptionsLayer::didToggle(int tag) -> decltype(didToggle(tag)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameOptionsLayer::didToggle), this);
	using FunctionType = decltype(didToggle(tag))(*)(GameOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag);
}

auto GameOptionsLayer::onPracticeMusicSync(cocos2d::CCObject* sender) -> decltype(onPracticeMusicSync(sender)) {
	using FunctionType = decltype(onPracticeMusicSync(sender))(*)(GameOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GameOptionsLayer::onUIOptions(cocos2d::CCObject* sender) -> decltype(onUIOptions(sender)) {
	using FunctionType = decltype(onUIOptions(sender))(*)(GameOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a03f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GameOptionsLayer::onUIPOptions(cocos2d::CCObject* sender) -> decltype(onUIPOptions(sender)) {
	using FunctionType = decltype(onUIPOptions(sender))(*)(GameOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GameOptionsLayer::showPracticeMusicSyncUnlockInfo() -> decltype(showPracticeMusicSyncUnlockInfo()) {
	using FunctionType = decltype(showPracticeMusicSyncUnlockInfo())(*)(GameOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29fa10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
