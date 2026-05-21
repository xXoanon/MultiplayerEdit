
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

auto CCSpriteCOpacity::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&CCSpriteCOpacity::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(CCSpriteCOpacity*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}
