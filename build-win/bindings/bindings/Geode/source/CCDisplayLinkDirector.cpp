
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

auto cocos2d::CCDisplayLinkDirector::setAnimationInterval(double p0) -> decltype(setAnimationInterval(p0)) {
	auto self = addresser::thunkAdjust(Resolve<double>::func(&cocos2d::CCDisplayLinkDirector::setAnimationInterval), this);
	using FunctionType = decltype(setAnimationInterval(p0))(*)(cocos2d::CCDisplayLinkDirector*, double);
	static auto func = wrapFunction<FunctionType>(base::getCocos() + 0xbf3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCDisplayLinkDirector::stopAnimation() -> decltype(stopAnimation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCDisplayLinkDirector::stopAnimation), this);
	using FunctionType = decltype(stopAnimation())(*)(cocos2d::CCDisplayLinkDirector*);
	static auto func = wrapFunction<FunctionType>(base::getCocos() + 0xbff30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCDisplayLinkDirector::startAnimation() -> decltype(startAnimation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCDisplayLinkDirector::startAnimation), this);
	using FunctionType = decltype(startAnimation())(*)(cocos2d::CCDisplayLinkDirector*);
	static auto func = wrapFunction<FunctionType>(base::getCocos() + 0xbfef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCDisplayLinkDirector::mainLoop() -> decltype(mainLoop()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCDisplayLinkDirector::mainLoop), this);
	using FunctionType = decltype(mainLoop())(*)(cocos2d::CCDisplayLinkDirector*);
	static auto func = wrapFunction<FunctionType>(base::getCocos() + 0xbeae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
