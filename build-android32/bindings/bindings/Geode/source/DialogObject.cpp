
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

auto DialogObject::create(gd::string character, gd::string text, int characterFrame, float textScale, bool skippable, cocos2d::ccColor3B color) -> decltype(create(character, text, characterFrame, textScale, skippable, color)) {
	using FunctionType = decltype(create(character, text, characterFrame, textScale, skippable, color))(*)(gd::string, gd::string, int, float, bool, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12DialogObject6createESsSsifbN7cocos2d10_ccColor3BE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(character, text, characterFrame, textScale, skippable, color);
}

auto DialogObject::init(gd::string character, gd::string text, int characterFrame, float textScale, bool skippable, cocos2d::ccColor3B color) -> decltype(init(character, text, characterFrame, textScale, skippable, color)) {
	using FunctionType = decltype(init(character, text, characterFrame, textScale, skippable, color))(*)(DialogObject*, gd::string, gd::string, int, float, bool, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12DialogObject4initESsSsifbN7cocos2d10_ccColor3BE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, character, text, characterFrame, textScale, skippable, color);
}
