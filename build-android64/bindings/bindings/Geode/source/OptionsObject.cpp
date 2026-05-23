
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

auto OptionsObject::create(int id, bool enabled, gd::string name, OptionsObjectDelegate* delegate) -> decltype(create(id, enabled, name, delegate)) {
	using FunctionType = decltype(create(id, enabled, name, delegate))(*)(int, bool, gd::string, OptionsObjectDelegate*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13OptionsObject6createEibSsP21OptionsObjectDelegate")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, enabled, name, delegate);
}

auto OptionsObject::init(int id, bool enabled, gd::string name, OptionsObjectDelegate* delegate) -> decltype(init(id, enabled, name, delegate)) {
	using FunctionType = decltype(init(id, enabled, name, delegate))(*)(OptionsObject*, int, bool, gd::string, OptionsObjectDelegate*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13OptionsObject4initEibSsP21OptionsObjectDelegate")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, enabled, name, delegate);
}
