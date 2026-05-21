
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

auto TextArea::create(gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor) -> decltype(create(str, font, scale, width, anchor, lineHeight, disableColor)) {
	using FunctionType = decltype(create(str, font, scale, width, anchor, lineHeight, disableColor))(*)(gd::string, char const*, float, float, cocos2d::CCPoint, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76e80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, font, scale, width, anchor, lineHeight, disableColor);
}

auto TextArea::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&TextArea::update), this);
	using FunctionType = decltype(update(dt))(*)(TextArea*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x776e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto TextArea::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&TextArea::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(TextArea*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x775f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto TextArea::colorAllCharactersTo(cocos2d::ccColor3B color) -> decltype(colorAllCharactersTo(color)) {
	using FunctionType = decltype(colorAllCharactersTo(color))(*)(TextArea*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto TextArea::fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style) -> decltype(fadeInCharacters(duration, charDuration, fadeOut, style)) {
	using FunctionType = decltype(fadeInCharacters(duration, charDuration, fadeOut, style))(*)(TextArea*, float, float, bool, TextFadeInStyle);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x778c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, charDuration, fadeOut, style);
}

auto TextArea::finishFade() -> decltype(finishFade()) {
	using FunctionType = decltype(finishFade())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x775d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TextArea::setString(gd::string text) -> decltype(setString(text)) {
	using FunctionType = decltype(setString(text))(*)(TextArea*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto TextArea::stopAllCharacterActions() -> decltype(stopAllCharacterActions()) {
	using FunctionType = decltype(stopAllCharacterActions())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
