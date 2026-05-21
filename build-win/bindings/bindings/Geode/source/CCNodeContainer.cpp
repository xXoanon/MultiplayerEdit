
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

auto CCNodeContainer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x248ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto CCNodeContainer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCNodeContainer::init), this);
	using FunctionType = decltype(init())(*)(CCNodeContainer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCNodeContainer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCNodeContainer::visit), this);
	using FunctionType = decltype(visit())(*)(CCNodeContainer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x248d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
