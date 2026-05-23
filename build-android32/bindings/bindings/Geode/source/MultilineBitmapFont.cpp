
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

MultilineBitmapFont::~MultilineBitmapFont() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MultilineBitmapFont*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19MultilineBitmapFontD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MultilineBitmapFont(geode::CutoffConstructor, sizeof(MultilineBitmapFont));
		geode::DestructorLock::addLock(this);
	}
}

auto MultilineBitmapFont::createWithFont(char const* font, gd::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor) -> decltype(createWithFont(font, text, scale, width, anchor, height, disableColor)) {
	using FunctionType = decltype(createWithFont(font, text, scale, width, anchor, height, disableColor))(*)(char const*, gd::string, float, float, cocos2d::CCPoint, int, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19MultilineBitmapFont14createWithFontEPKcSsffN7cocos2d7CCPointEib")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(font, text, scale, width, anchor, height, disableColor);
}

auto MultilineBitmapFont::initWithFont(char const* font, gd::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor) -> decltype(initWithFont(font, text, scale, width, anchor, height, disableColor)) {
	using FunctionType = decltype(initWithFont(font, text, scale, width, anchor, height, disableColor))(*)(MultilineBitmapFont*, char const*, gd::string, float, float, cocos2d::CCPoint, int, bool);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19MultilineBitmapFont12initWithFontEPKcSsffN7cocos2d7CCPointEib")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, font, text, scale, width, anchor, height, disableColor);
}

auto MultilineBitmapFont::readColorInfo(gd::string text) -> decltype(readColorInfo(text)) {
	using FunctionType = decltype(readColorInfo(text))(*)(MultilineBitmapFont*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19MultilineBitmapFont13readColorInfoESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto MultilineBitmapFont::stringWithMaxWidth(gd::string text, float width, float scale) -> decltype(stringWithMaxWidth(text, width, scale)) {
	using FunctionType = decltype(stringWithMaxWidth(text, width, scale))(*)(MultilineBitmapFont*, gd::string, float, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19MultilineBitmapFont18stringWithMaxWidthESsff")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, width, scale);
}
