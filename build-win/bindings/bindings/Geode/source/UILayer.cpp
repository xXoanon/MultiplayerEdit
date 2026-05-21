
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

auto UILayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UILayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9b7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UILayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UILayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cde90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UILayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&UILayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(UILayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cde50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto UILayer::keyUp(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyUp(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&UILayer::keyUp), this);
	using FunctionType = decltype(keyUp(key, timestamp))(*)(UILayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cde70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto UILayer::handleKeypress(cocos2d::enumKeyCodes key, bool down, double timestamp) -> decltype(handleKeypress(key, down, timestamp)) {
	using FunctionType = decltype(handleKeypress(key, down, timestamp))(*)(UILayer*, cocos2d::enumKeyCodes, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, down, timestamp);
}

auto UILayer::init(GJBaseGameLayer* layer) -> decltype(init(layer)) {
	using FunctionType = decltype(init(layer))(*)(UILayer*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ccb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto UILayer::onCheck(cocos2d::CCObject* sender) -> decltype(onCheck(sender)) {
	using FunctionType = decltype(onCheck(sender))(*)(UILayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UILayer::onDeleteCheck(cocos2d::CCObject* sender) -> decltype(onDeleteCheck(sender)) {
	using FunctionType = decltype(onDeleteCheck(sender))(*)(UILayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UILayer::onPause(cocos2d::CCObject* sender) -> decltype(onPause(sender)) {
	using FunctionType = decltype(onPause(sender))(*)(UILayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cdf50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UILayer::processUINodesTouch(GJUITouchEvent event, cocos2d::CCTouch* touch) -> decltype(processUINodesTouch(event, touch)) {
	using FunctionType = decltype(processUINodesTouch(event, touch))(*)(UILayer*, GJUITouchEvent, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, event, touch);
}

auto UILayer::processUINodeTouch(GJUITouchEvent event, int touchID, cocos2d::CCPoint position, GJUINode* node, double timestamp) -> decltype(processUINodeTouch(event, touchID, position, node, timestamp)) {
	using FunctionType = decltype(processUINodeTouch(event, touchID, position, node, timestamp))(*)(UILayer*, GJUITouchEvent, int, cocos2d::CCPoint, GJUINode*, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, event, touchID, position, node, timestamp);
}

auto UILayer::resetUINodeState() -> decltype(resetUINodeState()) {
	using FunctionType = decltype(resetUINodeState())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::toggleCheckpointsMenu(bool visible) -> decltype(toggleCheckpointsMenu(visible)) {
	using FunctionType = decltype(toggleCheckpointsMenu(visible))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cded0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto UILayer::toggleMenuVisibility(bool visible) -> decltype(toggleMenuVisibility(visible)) {
	using FunctionType = decltype(toggleMenuVisibility(visible))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto UILayer::togglePlatformerMode(bool platformer) -> decltype(togglePlatformerMode(platformer)) {
	using FunctionType = decltype(togglePlatformerMode(platformer))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, platformer);
}

auto UILayer::updateCheckState() -> decltype(updateCheckState()) {
	using FunctionType = decltype(updateCheckState())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::updateUINodeVisibility(bool visible) -> decltype(updateUINodeVisibility(visible)) {
	using FunctionType = decltype(updateUINodeVisibility(visible))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}
