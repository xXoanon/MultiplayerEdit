
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

auto AnimatedShopKeeper::animationFinished(char const* key) -> decltype(animationFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&AnimatedShopKeeper::animationFinished), this);
	using FunctionType = decltype(animationFinished(key))(*)(AnimatedShopKeeper*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2aff00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto AnimatedShopKeeper::playReactAnimation() -> decltype(playReactAnimation()) {
	using FunctionType = decltype(playReactAnimation())(*)(AnimatedShopKeeper*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2afbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AnimatedShopKeeper::startAnimating() -> decltype(startAnimating()) {
	using FunctionType = decltype(startAnimating())(*)(AnimatedShopKeeper*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2afe70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
