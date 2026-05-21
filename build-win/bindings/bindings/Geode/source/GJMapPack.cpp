
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

auto GJMapPack::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x170120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJMapPack::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMapPack::init), this);
	using FunctionType = decltype(init())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x170c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMapPack::completedMaps() -> decltype(completedMaps()) {
	using FunctionType = decltype(completedMaps())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x170f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapPack::parsePackColors(gd::string textColorStr, gd::string barColorStr) -> decltype(parsePackColors(textColorStr, barColorStr)) {
	using FunctionType = decltype(parsePackColors(textColorStr, barColorStr))(*)(GJMapPack*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x170ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, textColorStr, barColorStr);
}
