
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

auto ColorAction::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ColorAction::setupFromMap(gd::map<gd::string, gd::string>& setup) -> decltype(setupFromMap(setup)) {
	using FunctionType = decltype(setupFromMap(setup))(*)(ColorAction*, gd::map<gd::string, gd::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto ColorAction::setupFromString(gd::string setup) -> decltype(setupFromString(setup)) {
	using FunctionType = decltype(setupFromString(setup))(*)(ColorAction*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto ColorAction::step(float dt) -> decltype(step(dt)) {
	using FunctionType = decltype(step(dt))(*)(ColorAction*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
