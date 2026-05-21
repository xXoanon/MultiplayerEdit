
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

auto UIOptionsLayer::create(bool dual) -> decltype(create(dual)) {
	using FunctionType = decltype(create(dual))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dual);
}

auto UIOptionsLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UIOptionsLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(UIOptionsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UIOptionsLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UIOptionsLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(UIOptionsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UIOptionsLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UIOptionsLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(UIOptionsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UIOptionsLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UIOptionsLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(UIOptionsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UIOptionsLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UIOptionsLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(UIOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9b7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UIOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&UIOptionsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(UIOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto UIOptionsLayer::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&UIOptionsLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(UIOptionsLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a31e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto UIOptionsLayer::getValue(int tag) -> decltype(getValue(tag)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&UIOptionsLayer::getValue), this);
	using FunctionType = decltype(getValue(tag))(*)(UIOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag);
}

auto UIOptionsLayer::init(bool dual) -> decltype(init(dual)) {
	using FunctionType = decltype(init(dual))(*)(UIOptionsLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dual);
}

auto UIOptionsLayer::onReset(cocos2d::CCObject* sender) -> decltype(onReset(sender)) {
	using FunctionType = decltype(onReset(sender))(*)(UIOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a30d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UIOptionsLayer::onSaveLoad(cocos2d::CCObject* sender) -> decltype(onSaveLoad(sender)) {
	using FunctionType = decltype(onSaveLoad(sender))(*)(UIOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UIOptionsLayer::toggleUIGroup(int group) -> decltype(toggleUIGroup(group)) {
	using FunctionType = decltype(toggleUIGroup(group))(*)(UIOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, group);
}
