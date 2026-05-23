
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

auto InfoAlertButton::create(gd::string title, gd::string desc, float spriteScale) -> decltype(create(title, desc, spriteScale)) {
	using FunctionType = decltype(create(title, desc, spriteScale))(*)(gd::string, gd::string, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15InfoAlertButton6createESsSsf")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, desc, spriteScale);
}

auto InfoAlertButton::init(gd::string title, gd::string desc, float spriteScale) -> decltype(init(title, desc, spriteScale)) {
	using FunctionType = decltype(init(title, desc, spriteScale))(*)(InfoAlertButton*, gd::string, gd::string, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15InfoAlertButton4initESsSsf")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, desc, spriteScale);
}
