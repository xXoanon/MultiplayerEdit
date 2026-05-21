
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

auto LoadingCircle::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto LoadingCircle::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LoadingCircle::init), this);
	using FunctionType = decltype(init())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LoadingCircle::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LoadingCircle::draw), this);
	using FunctionType = decltype(draw())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6bbf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LoadingCircle::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LoadingCircle::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6bc10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LoadingCircle::fadeAndRemove() -> decltype(fadeAndRemove()) {
	using FunctionType = decltype(fadeAndRemove())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6bb50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LoadingCircle::show() -> decltype(show()) {
	using FunctionType = decltype(show())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6ba50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
