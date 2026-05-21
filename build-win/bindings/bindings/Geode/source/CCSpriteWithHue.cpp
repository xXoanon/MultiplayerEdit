
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

auto CCSpriteWithHue::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::draw), this);
	using FunctionType = decltype(draw())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* texture) -> decltype(initWithTexture(texture)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*>::func(&CCSpriteWithHue::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture))(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture);
}

auto CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect) -> decltype(initWithTexture(texture, rect)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&CCSpriteWithHue::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture, rect))(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture, rect);
}

auto CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated) -> decltype(initWithTexture(texture, rect, rotated)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool>::func(&CCSpriteWithHue::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture, rect, rotated))(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture, rect, rotated);
}

auto CCSpriteWithHue::initWithSpriteFrame(cocos2d::CCSpriteFrame* frame) -> decltype(initWithSpriteFrame(frame)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSpriteFrame*>::func(&CCSpriteWithHue::initWithSpriteFrame), this);
	using FunctionType = decltype(initWithSpriteFrame(frame))(*)(CCSpriteWithHue*, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frame);
}

auto CCSpriteWithHue::getShaderName() -> decltype(getShaderName()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::getShaderName), this);
	using FunctionType = decltype(getShaderName())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::shaderBody() -> decltype(shaderBody()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::shaderBody), this);
	using FunctionType = decltype(shaderBody())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::updateColor() -> decltype(updateColor()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::updateColor), this);
	using FunctionType = decltype(updateColor())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::initShader() -> decltype(initShader()) {
	using FunctionType = decltype(initShader())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCSpriteWithHue::updateColorMatrix() -> decltype(updateColorMatrix()) {
	using FunctionType = decltype(updateColorMatrix())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x489a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
