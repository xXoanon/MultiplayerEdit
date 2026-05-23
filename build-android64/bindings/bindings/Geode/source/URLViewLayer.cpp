
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

auto URLViewLayer::create(gd::string title, cocos2d::CCArray* objects) -> decltype(create(title, objects)) {
	using FunctionType = decltype(create(title, objects))(*)(gd::string, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12URLViewLayer6createESsPN7cocos2d7CCArrayE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, objects);
}

auto URLViewLayer::init(gd::string title, cocos2d::CCArray* objects) -> decltype(init(title, objects)) {
	using FunctionType = decltype(init(title, objects))(*)(URLViewLayer*, gd::string, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12URLViewLayer4initESsPN7cocos2d7CCArrayE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, objects);
}
