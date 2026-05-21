
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

auto MenuGameLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&MenuGameLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(MenuGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto MenuGameLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuGameLayer::init), this);
	using FunctionType = decltype(init())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x331420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuGameLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&MenuGameLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto MenuGameLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&MenuGameLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto MenuGameLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuGameLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3337b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuGameLayer::destroyPlayer() -> decltype(destroyPlayer()) {
	using FunctionType = decltype(destroyPlayer())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuGameLayer::getBGColor(int index) -> decltype(getBGColor(index)) {
	using FunctionType = decltype(getBGColor(index))(*)(MenuGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x331ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto MenuGameLayer::resetPlayer() -> decltype(resetPlayer()) {
	using FunctionType = decltype(resetPlayer())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuGameLayer::tryJump(float dt) -> decltype(tryJump(dt)) {
	using FunctionType = decltype(tryJump(dt))(*)(MenuGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x331f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto MenuGameLayer::updateColor(float dt) -> decltype(updateColor(dt)) {
	using FunctionType = decltype(updateColor(dt))(*)(MenuGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x331b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
