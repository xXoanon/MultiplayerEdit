
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

auto InfoAlertButton::create(gd::string title, gd::string desc, float spriteScale) -> decltype(create(title, desc, spriteScale)) {
	using FunctionType = decltype(create(title, desc, spriteScale))(*)(gd::string, gd::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, desc, spriteScale);
}

auto InfoAlertButton::activate() -> decltype(activate()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoAlertButton::activate), this);
	using FunctionType = decltype(activate())(*)(InfoAlertButton*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
