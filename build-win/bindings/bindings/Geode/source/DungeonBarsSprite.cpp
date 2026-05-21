
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

auto DungeonBarsSprite::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DungeonBarsSprite::init), this);
	using FunctionType = decltype(init())(*)(DungeonBarsSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DungeonBarsSprite::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DungeonBarsSprite::visit), this);
	using FunctionType = decltype(visit())(*)(DungeonBarsSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
