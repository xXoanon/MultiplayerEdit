
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

auto TextAlertPopup::create(gd::string text, float delay, float scale, int opacity, gd::string font) -> decltype(create(text, delay, scale, opacity, font)) {
	using FunctionType = decltype(create(text, delay, scale, opacity, font))(*)(gd::string, float, float, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29db00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(text, delay, scale, opacity, font);
}

auto TextAlertPopup::init(gd::string text, float delay, float scale, int opacity, gd::string font) -> decltype(init(text, delay, scale, opacity, font)) {
	using FunctionType = decltype(init(text, delay, scale, opacity, font))(*)(TextAlertPopup*, gd::string, float, float, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29dc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, delay, scale, opacity, font);
}
