
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

auto GJHttpResult::create(bool success, gd::string response, gd::string tag, GJHttpType type) -> decltype(create(success, response, tag, type)) {
	using FunctionType = decltype(create(success, response, tag, type))(*)(bool, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12GJHttpResult6createEbSsSs10GJHttpType")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(success, response, tag, type);
}

auto GJHttpResult::init(bool success, gd::string response, gd::string tag, GJHttpType type) -> decltype(init(success, response, tag, type)) {
	using FunctionType = decltype(init(success, response, tag, type))(*)(GJHttpResult*, bool, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12GJHttpResult4initEbSsSs10GJHttpType")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}
