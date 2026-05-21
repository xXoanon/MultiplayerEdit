
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

auto GJPathsLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x284b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJPathsLayer::nameForPath(int path) -> decltype(nameForPath(path)) {
	using FunctionType = decltype(nameForPath(path))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x284890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto GJPathsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathsLayer::init), this);
	using FunctionType = decltype(init())(*)(GJPathsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x284c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathsLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathsLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(GJPathsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x285160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathsLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathsLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(GJPathsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJPathsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x285450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathsLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathsLayer::show), this);
	using FunctionType = decltype(show())(*)(GJPathsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x867f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJPathsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2853f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJPathsLayer::onPath(cocos2d::CCObject* sender) -> decltype(onPath(sender)) {
	using FunctionType = decltype(onPath(sender))(*)(GJPathsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2851b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
