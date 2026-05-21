
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

auto CCCircleWave::create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut) -> decltype(create(startRadius, endRadius, duration, fadeIn, easeOut)) {
	using FunctionType = decltype(create(startRadius, endRadius, duration, fadeIn, easeOut))(*)(float, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(startRadius, endRadius, duration, fadeIn, easeOut);
}

auto CCCircleWave::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&CCCircleWave::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(CCCircleWave*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto CCCircleWave::removeMeAndCleanup() -> decltype(removeMeAndCleanup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCCircleWave::removeMeAndCleanup), this);
	using FunctionType = decltype(removeMeAndCleanup())(*)(CCCircleWave*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCCircleWave::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCCircleWave::draw), this);
	using FunctionType = decltype(draw())(*)(CCCircleWave*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCCircleWave::updateTweenAction(float value, char const* key) -> decltype(updateTweenAction(value, key)) {
	auto self = addresser::thunkAdjust(Resolve<float, char const*>::func(&CCCircleWave::updateTweenAction), this);
	using FunctionType = decltype(updateTweenAction(value, key))(*)(CCCircleWave*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, key);
}

auto CCCircleWave::init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut) -> decltype(init(startRadius, endRadius, duration, fadeIn, easeOut)) {
	using FunctionType = decltype(init(startRadius, endRadius, duration, fadeIn, easeOut))(*)(CCCircleWave*, float, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, startRadius, endRadius, duration, fadeIn, easeOut);
}

auto CCCircleWave::updatePosition(float dt) -> decltype(updatePosition(dt)) {
	using FunctionType = decltype(updatePosition(dt))(*)(CCCircleWave*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
