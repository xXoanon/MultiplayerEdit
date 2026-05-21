
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

auto CCLightFlash::cleanupFlash() -> decltype(cleanupFlash()) {
	using FunctionType = decltype(cleanupFlash())(*)(CCLightFlash*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCLightFlash::playEffect(cocos2d::CCPoint pos, cocos2d::ccColor3B col, float startWidth, float startWidthVariation, float endWidth, float endWidthVariation, float endHeight, float stripDuration, float stripDurationVariance, float stripInterval, float stripStartDelay, float stripStartDelayVariation, float stripRotation, float stripRotationVariation, float stripOpacity, float stripOpacityVariation, int stripCount, bool circleRotation, bool fadeIn, float delay) -> decltype(playEffect(pos, col, startWidth, startWidthVariation, endWidth, endWidthVariation, endHeight, stripDuration, stripDurationVariance, stripInterval, stripStartDelay, stripStartDelayVariation, stripRotation, stripRotationVariation, stripOpacity, stripOpacityVariation, stripCount, circleRotation, fadeIn, delay)) {
	using FunctionType = decltype(playEffect(pos, col, startWidth, startWidthVariation, endWidth, endWidthVariation, endHeight, stripDuration, stripDurationVariance, stripInterval, stripStartDelay, stripStartDelayVariation, stripRotation, stripRotationVariation, stripOpacity, stripOpacityVariation, stripCount, circleRotation, fadeIn, delay))(*)(CCLightFlash*, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, pos, col, startWidth, startWidthVariation, endWidth, endWidthVariation, endHeight, stripDuration, stripDurationVariance, stripInterval, stripStartDelay, stripStartDelayVariation, stripRotation, stripRotationVariation, stripOpacity, stripOpacityVariation, stripCount, circleRotation, fadeIn, delay);
}

auto CCLightFlash::removeLights() -> decltype(removeLights()) {
	using FunctionType = decltype(removeLights())(*)(CCLightFlash*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCLightFlash::showFlash() -> decltype(showFlash()) {
	using FunctionType = decltype(showFlash())(*)(CCLightFlash*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
