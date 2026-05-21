
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

auto CCPartAnimSprite::setScaleX(float scaleX) -> decltype(setScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCPartAnimSprite::setScaleX), this);
	using FunctionType = decltype(setScaleX(scaleX))(*)(CCPartAnimSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto CCPartAnimSprite::setScaleY(float scaleY) -> decltype(setScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCPartAnimSprite::setScaleY), this);
	using FunctionType = decltype(setScaleY(scaleY))(*)(CCPartAnimSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto CCPartAnimSprite::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCPartAnimSprite::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(CCPartAnimSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto CCPartAnimSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&CCPartAnimSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(CCPartAnimSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto CCPartAnimSprite::setBlendFunc(cocos2d::ccBlendFunc blendFunc) -> decltype(setBlendFunc(blendFunc)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccBlendFunc>::func(&CCPartAnimSprite::setBlendFunc), this);
	using FunctionType = decltype(setBlendFunc(blendFunc))(*)(CCPartAnimSprite*, cocos2d::ccBlendFunc);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, blendFunc);
}

auto CCPartAnimSprite::setDisplayFrame(cocos2d::CCSpriteFrame* frame) -> decltype(setDisplayFrame(frame)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSpriteFrame*>::func(&CCPartAnimSprite::setDisplayFrame), this);
	using FunctionType = decltype(setDisplayFrame(frame))(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frame);
}

auto CCPartAnimSprite::isFrameDisplayed(cocos2d::CCSpriteFrame* frame) -> decltype(isFrameDisplayed(frame)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSpriteFrame*>::func(&CCPartAnimSprite::isFrameDisplayed), this);
	using FunctionType = decltype(isFrameDisplayed(frame))(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x463a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frame);
}

auto CCPartAnimSprite::displayFrame() -> decltype(displayFrame()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCPartAnimSprite::displayFrame), this);
	using FunctionType = decltype(displayFrame())(*)(CCPartAnimSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x463c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCPartAnimSprite::initWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(initWithAnimDesc(definition, texture, useTexture)) {
	using FunctionType = decltype(initWithAnimDesc(definition, texture, useTexture))(*)(CCPartAnimSprite*, char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, definition, texture, useTexture);
}

auto CCPartAnimSprite::setColor(cocos2d::ccColor3B color) -> decltype(setColor(color)) {
	using FunctionType = decltype(setColor(color))(*)(CCPartAnimSprite*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto CCPartAnimSprite::tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration) -> decltype(tweenToFrame(frame, duration)) {
	using FunctionType = decltype(tweenToFrame(frame, duration))(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x463d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, duration);
}
