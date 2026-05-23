
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/cocos/platform/android/CCFileUtilsAndroid.h>

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

auto ConfigureValuePopup::create(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, gd::string title, gd::string description, int type) -> decltype(create(delegate, value, minimum, maximum, title, description, type)) {
	using FunctionType = decltype(create(delegate, value, minimum, maximum, title, description, type))(*)(ConfigureValuePopupDelegate*, float, float, float, gd::string, gd::string, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19ConfigureValuePopup6createEP27ConfigureValuePopupDelegatefffSsSsi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delegate, value, minimum, maximum, title, description, type);
}

auto ConfigureValuePopup::addInfoAlertButton(gd::string title, gd::string description) -> decltype(addInfoAlertButton(title, description)) {
	using FunctionType = decltype(addInfoAlertButton(title, description))(*)(ConfigureValuePopup*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19ConfigureValuePopup18addInfoAlertButtonESsSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, description);
}

auto ConfigureValuePopup::init(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, gd::string title, gd::string description, int type) -> decltype(init(delegate, value, minimum, maximum, title, description, type)) {
	using FunctionType = decltype(init(delegate, value, minimum, maximum, title, description, type))(*)(ConfigureValuePopup*, ConfigureValuePopupDelegate*, float, float, float, gd::string, gd::string, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19ConfigureValuePopup4initEP27ConfigureValuePopupDelegatefffSsSsi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate, value, minimum, maximum, title, description, type);
}
