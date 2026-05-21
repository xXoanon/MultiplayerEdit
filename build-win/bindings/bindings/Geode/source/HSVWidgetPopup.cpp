
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

auto HSVWidgetPopup::create(cocos2d::ccHSVValue hsv, HSVWidgetDelegate* delegate, gd::string title) -> decltype(create(hsv, delegate, title)) {
	using FunctionType = decltype(create(hsv, delegate, title))(*)(cocos2d::ccHSVValue, HSVWidgetDelegate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x964d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(hsv, delegate, title);
}

auto HSVWidgetPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVWidgetPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(HSVWidgetPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x96a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVWidgetPopup::init(cocos2d::ccHSVValue hsv, HSVWidgetDelegate* delegate, gd::string title) -> decltype(init(hsv, delegate, title)) {
	using FunctionType = decltype(init(hsv, delegate, title))(*)(HSVWidgetPopup*, cocos2d::ccHSVValue, HSVWidgetDelegate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x965f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, hsv, delegate, title);
}

auto HSVWidgetPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(HSVWidgetPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x96920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
