
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

auto HardStreak::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b8d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto HardStreak::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HardStreak::init), this);
	using FunctionType = decltype(init())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b8e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HardStreak::addPoint(cocos2d::CCPoint point) -> decltype(addPoint(point)) {
	using FunctionType = decltype(addPoint(point))(*)(HardStreak*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b9800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, point);
}

auto HardStreak::stopStroke() -> decltype(stopStroke()) {
	using FunctionType = decltype(stopStroke())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b8eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HardStreak::updateStroke(float dt) -> decltype(updateStroke(dt)) {
	using FunctionType = decltype(updateStroke(dt))(*)(HardStreak*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b8ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
