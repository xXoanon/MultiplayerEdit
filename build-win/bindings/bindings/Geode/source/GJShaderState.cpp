
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

GJShaderState::GJShaderState() {
	using FunctionType = void(*)(GJShaderState*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a4950, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GJShaderState::timesyncShaderAction(int action) -> decltype(timesyncShaderAction(action)) {
	using FunctionType = decltype(timesyncShaderAction(action))(*)(GJShaderState*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto GJShaderState::updateTweenAction(float value, int actionID) -> decltype(updateTweenAction(value, actionID)) {
	using FunctionType = decltype(updateTweenAction(value, actionID))(*)(GJShaderState*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4817e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, actionID);
}
