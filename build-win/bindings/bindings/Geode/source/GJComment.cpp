
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

auto GJComment::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1752a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJComment::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJComment::init), this);
	using FunctionType = decltype(init())(*)(GJComment*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x175e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
