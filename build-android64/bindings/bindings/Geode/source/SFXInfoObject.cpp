
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

auto SFXInfoObject::create(int id, gd::string name, int folderID, int size, int duration) -> decltype(create(id, name, folderID, size, duration)) {
	using FunctionType = decltype(create(id, name, folderID, size, duration))(*)(int, gd::string, int, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13SFXInfoObject6createEiSsiii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, name, folderID, size, duration);
}

auto SFXInfoObject::init(int id, gd::string name, int folderID, int size, int duration) -> decltype(init(id, name, folderID, size, duration)) {
	using FunctionType = decltype(init(id, name, folderID, size, duration))(*)(SFXInfoObject*, int, gd::string, int, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13SFXInfoObject4initEiSsiii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, name, folderID, size, duration);
}
