
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

ButtonSprite::ButtonSprite() : ButtonSprite(geode::CutoffConstructor, sizeof(ButtonSprite)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	ButtonSprite::~ButtonSprite();

	using FunctionType = void(*)(ButtonSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ed90, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto ButtonSprite::create(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height) -> decltype(create(caption, width, minWidth, scale, absolute, font, bg, height)) {
	using FunctionType = decltype(create(caption, width, minWidth, scale, absolute, font, bg, height))(*)(char const*, int, int, float, bool, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(caption, width, minWidth, scale, absolute, font, bg, height);
}

auto ButtonSprite::create(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG) -> decltype(create(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG)) {
	using FunctionType = decltype(create(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG))(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eeb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG);
}

auto ButtonSprite::init(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height) -> decltype(init(caption, width, minWidth, scale, absolute, font, bg, height)) {
	using FunctionType = decltype(init(caption, width, minWidth, scale, absolute, font, bg, height))(*)(ButtonSprite*, char const*, int, int, float, bool, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, caption, width, minWidth, scale, absolute, font, bg, height);
}

auto ButtonSprite::init(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG) -> decltype(init(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG)) {
	using FunctionType = decltype(init(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG))(*)(ButtonSprite*, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG);
}

auto ButtonSprite::setString(char const* text) -> decltype(setString(text)) {
	using FunctionType = decltype(setString(text))(*)(ButtonSprite*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto ButtonSprite::updateBGImage(char const* filename) -> decltype(updateBGImage(filename)) {
	using FunctionType = decltype(updateBGImage(filename))(*)(ButtonSprite*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, filename);
}

auto ButtonSprite::updateSpriteBGSize() -> decltype(updateSpriteBGSize()) {
	using FunctionType = decltype(updateSpriteBGSize())(*)(ButtonSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
