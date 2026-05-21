
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

auto PlayerFireBoostSprite::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlayerFireBoostSprite::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayerFireBoostSprite::init), this);
	using FunctionType = decltype(init())(*)(PlayerFireBoostSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayerFireBoostSprite::loopFireAnimation() -> decltype(loopFireAnimation()) {
	using FunctionType = decltype(loopFireAnimation())(*)(PlayerFireBoostSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
