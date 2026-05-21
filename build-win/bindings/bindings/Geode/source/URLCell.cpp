
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

auto URLCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&URLCell::init), this);
	using FunctionType = decltype(init())(*)(URLCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto URLCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&URLCell::draw), this);
	using FunctionType = decltype(draw())(*)(URLCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xade20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto URLCell::loadFromObject(CCURLObject* object) -> decltype(loadFromObject(object)) {
	using FunctionType = decltype(loadFromObject(object))(*)(URLCell*, CCURLObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc0250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto URLCell::onURL(cocos2d::CCObject* sender) -> decltype(onURL(sender)) {
	using FunctionType = decltype(onURL(sender))(*)(URLCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc0480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
