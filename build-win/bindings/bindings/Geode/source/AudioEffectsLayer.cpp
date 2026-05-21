
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

auto AudioEffectsLayer::updateTweenAction(float value, char const* key) -> decltype(updateTweenAction(value, key)) {
	auto self = addresser::thunkAdjust(Resolve<float, char const*>::func(&AudioEffectsLayer::updateTweenAction), this);
	using FunctionType = decltype(updateTweenAction(value, key))(*)(AudioEffectsLayer*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, key);
}

auto AudioEffectsLayer::audioStep(float dt) -> decltype(audioStep(dt)) {
	using FunctionType = decltype(audioStep(dt))(*)(AudioEffectsLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto AudioEffectsLayer::goingDown() -> decltype(goingDown()) {
	using FunctionType = decltype(goingDown())(*)(AudioEffectsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AudioEffectsLayer::init(gd::string audioString) -> decltype(init(audioString)) {
	using FunctionType = decltype(init(audioString))(*)(AudioEffectsLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, audioString);
}

auto AudioEffectsLayer::resetAudioVars() -> decltype(resetAudioVars()) {
	using FunctionType = decltype(resetAudioVars())(*)(AudioEffectsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
