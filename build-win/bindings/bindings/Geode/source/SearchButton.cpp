
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

auto SearchButton::create(char const* background, char const* label, float scale, char const* icon) -> decltype(create(background, label, scale, icon)) {
	using FunctionType = decltype(create(background, label, scale, icon))(*)(char const*, char const*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x312880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(background, label, scale, icon);
}

auto SearchButton::init(char const* background, char const* label, float scale, char const* icon) -> decltype(init(background, label, scale, icon)) {
	using FunctionType = decltype(init(background, label, scale, icon))(*)(SearchButton*, char const*, char const*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x312950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, background, label, scale, icon);
}
