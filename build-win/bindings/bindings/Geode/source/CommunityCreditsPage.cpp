
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

auto CommunityCreditsPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommunityCreditsPage::init), this);
	using FunctionType = decltype(init())(*)(CommunityCreditsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x940c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommunityCreditsPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommunityCreditsPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(CommunityCreditsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommunityCreditsPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommunityCreditsPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CommunityCreditsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommunityCreditsPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommunityCreditsPage::show), this);
	using FunctionType = decltype(show())(*)(CommunityCreditsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x96220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommunityCreditsPage::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(CommunityCreditsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x96100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CommunityCreditsPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CommunityCreditsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommunityCreditsPage::onSwitchPage(cocos2d::CCObject* sender) -> decltype(onSwitchPage(sender)) {
	using FunctionType = decltype(onSwitchPage(sender))(*)(CommunityCreditsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x960c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
