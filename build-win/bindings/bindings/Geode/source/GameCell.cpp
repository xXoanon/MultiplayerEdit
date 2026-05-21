
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

auto GameCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameCell::init), this);
	using FunctionType = decltype(init())(*)(GameCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameCell::draw), this);
	using FunctionType = decltype(draw())(*)(GameCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameCell::loadFromString(gd::string str) -> decltype(loadFromString(str)) {
	using FunctionType = decltype(loadFromString(str))(*)(GameCell*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameCell::onTouch(cocos2d::CCObject* sender) -> decltype(onTouch(sender)) {
	using FunctionType = decltype(onTouch(sender))(*)(GameCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
