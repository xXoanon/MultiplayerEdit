
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

auto GJMGLayer::showGround() -> decltype(showGround()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMGLayer::showGround), this);
	using FunctionType = decltype(showGround())(*)(GJMGLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27edf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMGLayer::init(int index) -> decltype(init(index)) {
	using FunctionType = decltype(init(index))(*)(GJMGLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GJMGLayer::loadGroundSprites(int count, bool ground1) -> decltype(loadGroundSprites(count, ground1)) {
	using FunctionType = decltype(loadGroundSprites(count, ground1))(*)(GJMGLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count, ground1);
}
