
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

auto MultilineBitmapFont::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&MultilineBitmapFont::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(MultilineBitmapFont*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6c780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto MultilineBitmapFont::initWithFont(char const* font, gd::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor) -> decltype(initWithFont(font, text, scale, width, anchor, height, disableColor)) {
	using FunctionType = decltype(initWithFont(font, text, scale, width, anchor, height, disableColor))(*)(MultilineBitmapFont*, char const*, gd::string, float, float, cocos2d::CCPoint, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6bed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, font, text, scale, width, anchor, height, disableColor);
}

auto MultilineBitmapFont::moveSpecialDescriptors(int index, int size) -> decltype(moveSpecialDescriptors(index, size)) {
	using FunctionType = decltype(moveSpecialDescriptors(index, size))(*)(MultilineBitmapFont*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index, size);
}

auto MultilineBitmapFont::readColorInfo(gd::string text) -> decltype(readColorInfo(text)) {
	using FunctionType = decltype(readColorInfo(text))(*)(MultilineBitmapFont*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6c800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto MultilineBitmapFont::stringWithMaxWidth(gd::string text, float width, float scale) -> decltype(stringWithMaxWidth(text, width, scale)) {
	using FunctionType = decltype(stringWithMaxWidth(text, width, scale))(*)(MultilineBitmapFont*, gd::string, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, width, scale);
}
