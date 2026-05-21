
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

auto CCCounterLabel::setTargetCount(int count) -> decltype(setTargetCount(count)) {
	using FunctionType = decltype(setTargetCount(count))(*)(CCCounterLabel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x431a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count);
}

auto CCCounterLabel::updateCounter(float dt) -> decltype(updateCounter(dt)) {
	using FunctionType = decltype(updateCounter(dt))(*)(CCCounterLabel*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto CCCounterLabel::updateString() -> decltype(updateString()) {
	using FunctionType = decltype(updateString())(*)(CCCounterLabel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x432b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
