
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

auto DialogLayer::createDialogLayer(DialogObject* object, cocos2d::CCArray* objects, int background) -> decltype(createDialogLayer(object, objects, background)) {
	using FunctionType = decltype(createDialogLayer(object, objects, background))(*)(DialogObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd3490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, background);
}

auto DialogLayer::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DialogLayer::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DialogLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DialogLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DialogLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DialogLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd40c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DialogLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DialogLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd40e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DialogLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DialogLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DialogLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DialogLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DialogLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&DialogLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(DialogLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd43b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto DialogLayer::fadeInTextFinished(TextArea* textArea) -> decltype(fadeInTextFinished(textArea)) {
	auto self = addresser::thunkAdjust(Resolve<TextArea*>::func(&DialogLayer::fadeInTextFinished), this);
	using FunctionType = decltype(fadeInTextFinished(textArea))(*)(DialogLayer*, TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, textArea);
}

auto DialogLayer::addToMainScene() -> decltype(addToMainScene()) {
	using FunctionType = decltype(addToMainScene())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd3fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::animateInRandomSide() -> decltype(animateInRandomSide()) {
	using FunctionType = decltype(animateInRandomSide())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::displayDialogObject(DialogObject* object) -> decltype(displayDialogObject(object)) {
	using FunctionType = decltype(displayDialogObject(object))(*)(DialogLayer*, DialogObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd3aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DialogLayer::displayNextObject() -> decltype(displayNextObject()) {
	using FunctionType = decltype(displayNextObject())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd3a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::handleDialogTap() -> decltype(handleDialogTap()) {
	using FunctionType = decltype(handleDialogTap())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd3e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::init(DialogObject* object, cocos2d::CCArray* objects, int background) -> decltype(init(object, objects, background)) {
	using FunctionType = decltype(init(object, objects, background))(*)(DialogLayer*, DialogObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd35e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, background);
}

auto DialogLayer::onClose() -> decltype(onClose()) {
	using FunctionType = decltype(onClose())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::updateNavButtonFrame() -> decltype(updateNavButtonFrame()) {
	using FunctionType = decltype(updateNavButtonFrame())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd3df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
