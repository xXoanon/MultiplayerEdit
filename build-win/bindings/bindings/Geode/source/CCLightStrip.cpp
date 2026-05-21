
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

auto CCLightStrip::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCLightStrip::draw), this);
	using FunctionType = decltype(draw())(*)(CCLightStrip*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCLightStrip::updateTweenAction(float value, char const* keyword) -> decltype(updateTweenAction(value, keyword)) {
	auto self = addresser::thunkAdjust(Resolve<float, char const*>::func(&CCLightStrip::updateTweenAction), this);
	using FunctionType = decltype(updateTweenAction(value, keyword))(*)(CCLightStrip*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, keyword);
}
