
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

EnterEffectInstance::EnterEffectInstance(EnterEffectObject* object, int targetID, int centerID, int unknown, int targetGroupIndex, int easeIndexCount, int controlID) {
	using FunctionType = void(*)(EnterEffectInstance*, EnterEffectObject*, int, int, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2042f0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this, object, targetID, centerID, unknown, targetGroupIndex, easeIndexCount, controlID);
}

auto EnterEffectInstance::animateValue(int key, float value, float distance, float duration, int easingType, float easingRate, int easingBuffer) -> decltype(animateValue(key, value, distance, duration, easingType, easingRate, easingBuffer)) {
	using FunctionType = decltype(animateValue(key, value, distance, duration, easingType, easingRate, easingBuffer))(*)(EnterEffectInstance*, int, float, float, float, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, value, distance, duration, easingType, easingRate, easingBuffer);
}

auto EnterEffectInstance::loadTransitions(EnterEffectObject* object, float time) -> decltype(loadTransitions(object, time)) {
	using FunctionType = decltype(loadTransitions(object, time))(*)(EnterEffectInstance*, EnterEffectObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, time);
}

auto EnterEffectInstance::loadValuesFromObject(EnterEffectObject* object) -> decltype(loadValuesFromObject(object)) {
	using FunctionType = decltype(loadValuesFromObject(object))(*)(EnterEffectInstance*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1387a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto EnterEffectInstance::setValue(int key, float value) -> decltype(setValue(key, value)) {
	using FunctionType = decltype(setValue(key, value))(*)(EnterEffectInstance*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto EnterEffectInstance::updateTransitions(float dt, GJBaseGameLayer* layer) -> decltype(updateTransitions(dt, layer)) {
	using FunctionType = decltype(updateTransitions(dt, layer))(*)(EnterEffectInstance*, float, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, layer);
}
