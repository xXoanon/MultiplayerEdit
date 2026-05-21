
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

auto GJTransformControl::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJTransformControl::init), this);
	using FunctionType = decltype(init())(*)(GJTransformControl*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12ae50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJTransformControl::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12cc10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::onToggleLockScale(cocos2d::CCObject* sender) -> decltype(onToggleLockScale(sender)) {
	using FunctionType = decltype(onToggleLockScale(sender))(*)(GJTransformControl*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJTransformControl::refreshControl() -> decltype(refreshControl()) {
	using FunctionType = decltype(refreshControl())(*)(GJTransformControl*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJTransformControl::scaleButtons(float scale) -> decltype(scaleButtons(scale)) {
	using FunctionType = decltype(scaleButtons(scale))(*)(GJTransformControl*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GJTransformControl::updateButtons(bool transform, bool skew) -> decltype(updateButtons(transform, skew)) {
	using FunctionType = decltype(updateButtons(transform, skew))(*)(GJTransformControl*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, transform, skew);
}
