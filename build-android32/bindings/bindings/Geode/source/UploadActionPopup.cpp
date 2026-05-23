
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

auto UploadActionPopup::create(UploadPopupDelegate* delegate, gd::string str) -> decltype(create(delegate, str)) {
	using FunctionType = decltype(create(delegate, str))(*)(UploadPopupDelegate*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17UploadActionPopup6createEP19UploadPopupDelegateSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delegate, str);
}

auto UploadActionPopup::init(UploadPopupDelegate* delegate, gd::string str) -> decltype(init(delegate, str)) {
	using FunctionType = decltype(init(delegate, str))(*)(UploadActionPopup*, UploadPopupDelegate*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17UploadActionPopup4initEP19UploadPopupDelegateSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate, str);
}

auto UploadActionPopup::showFailMessage(gd::string message) -> decltype(showFailMessage(message)) {
	using FunctionType = decltype(showFailMessage(message))(*)(UploadActionPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17UploadActionPopup15showFailMessageESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message);
}

auto UploadActionPopup::showSuccessMessage(gd::string message) -> decltype(showSuccessMessage(message)) {
	using FunctionType = decltype(showSuccessMessage(message))(*)(UploadActionPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17UploadActionPopup18showSuccessMessageESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message);
}
