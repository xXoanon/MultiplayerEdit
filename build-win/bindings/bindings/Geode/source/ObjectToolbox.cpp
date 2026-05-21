
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

auto ObjectToolbox::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ObjectToolbox::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ObjectToolbox::init), this);
	using FunctionType = decltype(init())(*)(ObjectToolbox*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ObjectToolbox::gridNodeSizeForKey(int key) -> decltype(gridNodeSizeForKey(key)) {
	using FunctionType = decltype(gridNodeSizeForKey(key))(*)(ObjectToolbox*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x370ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto ObjectToolbox::intKeyToFrame(int key) -> decltype(intKeyToFrame(key)) {
	using FunctionType = decltype(intKeyToFrame(key))(*)(ObjectToolbox*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x370b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto ObjectToolbox::perspectiveBlockFrame(int key) -> decltype(perspectiveBlockFrame(key)) {
	using FunctionType = decltype(perspectiveBlockFrame(key))(*)(ObjectToolbox*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3715c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}
