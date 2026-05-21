
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

auto AchievementsLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&AchievementsLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(AchievementsLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x822b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto AchievementsLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AchievementsLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(AchievementsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AchievementsLayer::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(AchievementsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto AchievementsLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(AchievementsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AchievementsLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(AchievementsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
