
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

EditorUI::EditorUI() : EditorUI(geode::CutoffConstructor, sizeof(EditorUI)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	EditorUI::~EditorUI();

	using FunctionType = void(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xde9e0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::getRandomStartKey(int specialTemplate) -> decltype(getRandomStartKey(specialTemplate)) {
	using FunctionType = decltype(getRandomStartKey(specialTemplate))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(specialTemplate);
}

auto EditorUI::getSmartObjectKey(int key, GJSmartDirection direction) -> decltype(getSmartObjectKey(key, direction)) {
	using FunctionType = decltype(getSmartObjectKey(key, direction))(*)(int, GJSmartDirection);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, direction);
}

auto EditorUI::smartTypeForKey(int key) -> decltype(smartTypeForKey(key)) {
	using FunctionType = decltype(smartTypeForKey(key))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto EditorUI::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::draw), this);
	using FunctionType = decltype(draw())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorUI::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorUI::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorUI::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorUI::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorUI::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1245e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorUI::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorUI::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorUI::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9b7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditorUI::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EditorUI*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EditorUI::getUI() -> decltype(getUI()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::getUI), this);
	using FunctionType = decltype(getUI())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdee20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&EditorUI::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(EditorUI*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto EditorUI::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&EditorUI::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(EditorUI*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto EditorUI::updateTransformControl() -> decltype(updateTransformControl()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::updateTransformControl), this);
	using FunctionType = decltype(updateTransformControl())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::transformChangeBegin() -> decltype(transformChangeBegin()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::transformChangeBegin), this);
	using FunctionType = decltype(transformChangeBegin())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1158f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::getTransformNode() -> decltype(getTransformNode()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::getTransformNode), this);
	using FunctionType = decltype(getTransformNode())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdee30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::transformScaleXChanged(float scaleX) -> decltype(transformScaleXChanged(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::transformScaleXChanged), this);
	using FunctionType = decltype(transformScaleXChanged(scaleX))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto EditorUI::transformScaleYChanged(float scaleY) -> decltype(transformScaleYChanged(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::transformScaleYChanged), this);
	using FunctionType = decltype(transformScaleYChanged(scaleY))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto EditorUI::transformScaleXYChanged(float scaleX, float scaleY) -> decltype(transformScaleXYChanged(scaleX, scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&EditorUI::transformScaleXYChanged), this);
	using FunctionType = decltype(transformScaleXYChanged(scaleX, scaleY))(*)(EditorUI*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX, scaleY);
}

auto EditorUI::transformSkewXChanged(float skewX) -> decltype(transformSkewXChanged(skewX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::transformSkewXChanged), this);
	using FunctionType = decltype(transformSkewXChanged(skewX))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, skewX);
}

auto EditorUI::transformSkewYChanged(float skewY) -> decltype(transformSkewYChanged(skewY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::transformSkewYChanged), this);
	using FunctionType = decltype(transformSkewYChanged(skewY))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1218a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, skewY);
}

auto EditorUI::transformRotationXChanged(float rotationX) -> decltype(transformRotationXChanged(rotationX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::transformRotationXChanged), this);
	using FunctionType = decltype(transformRotationXChanged(rotationX))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1218c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotationX);
}

auto EditorUI::transformRotationYChanged(float rotationY) -> decltype(transformRotationYChanged(rotationY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::transformRotationYChanged), this);
	using FunctionType = decltype(transformRotationYChanged(rotationY))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1218e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotationY);
}

auto EditorUI::transformRotationChanged(float rotation) -> decltype(transformRotationChanged(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::transformRotationChanged), this);
	using FunctionType = decltype(transformRotationChanged(rotation))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto EditorUI::transformResetRotation() -> decltype(transformResetRotation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::transformResetRotation), this);
	using FunctionType = decltype(transformResetRotation())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::transformRestoreRotation() -> decltype(transformRestoreRotation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::transformRestoreRotation), this);
	using FunctionType = decltype(transformRestoreRotation())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::songStateChanged() -> decltype(songStateChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::songStateChanged), this);
	using FunctionType = decltype(songStateChanged())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1120a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&EditorUI::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(EditorUI*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f6f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto EditorUI::keyUp(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyUp(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditorUI::keyUp), this);
	using FunctionType = decltype(keyUp(key, timestamp))(*)(EditorUI*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1267b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EditorUI::scrollWheel(float y, float x) -> decltype(scrollWheel(y, x)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&EditorUI::scrollWheel), this);
	using FunctionType = decltype(scrollWheel(y, x))(*)(EditorUI*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1267f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, y, x);
}

auto EditorUI::angleChangeBegin() -> decltype(angleChangeBegin()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::angleChangeBegin), this);
	using FunctionType = decltype(angleChangeBegin())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::angleChanged(float rotation) -> decltype(angleChanged(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EditorUI::angleChanged), this);
	using FunctionType = decltype(angleChanged(rotation))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto EditorUI::updateScaleControl() -> decltype(updateScaleControl()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::updateScaleControl), this);
	using FunctionType = decltype(updateScaleControl())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::anchorPointMoved(cocos2d::CCPoint anchorPoint) -> decltype(anchorPointMoved(anchorPoint)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&EditorUI::anchorPointMoved), this);
	using FunctionType = decltype(anchorPointMoved(anchorPoint))(*)(EditorUI*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, anchorPoint);
}

auto EditorUI::scaleChangeBegin() -> decltype(scaleChangeBegin()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorUI::scaleChangeBegin), this);
	using FunctionType = decltype(scaleChangeBegin())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorUI::scaleXChanged(float scaleX, bool lock) -> decltype(scaleXChanged(scaleX, lock)) {
	auto self = addresser::thunkAdjust(Resolve<float, bool>::func(&EditorUI::scaleXChanged), this);
	using FunctionType = decltype(scaleXChanged(scaleX, lock))(*)(EditorUI*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX, lock);
}

auto EditorUI::scaleYChanged(float scaleY, bool lock) -> decltype(scaleYChanged(scaleY, lock)) {
	auto self = addresser::thunkAdjust(Resolve<float, bool>::func(&EditorUI::scaleYChanged), this);
	using FunctionType = decltype(scaleYChanged(scaleY, lock))(*)(EditorUI*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleY, lock);
}

auto EditorUI::scaleXYChanged(float scaleX, float scaleY, bool lock) -> decltype(scaleXYChanged(scaleX, scaleY, lock)) {
	auto self = addresser::thunkAdjust(Resolve<float, float, bool>::func(&EditorUI::scaleXYChanged), this);
	using FunctionType = decltype(scaleXYChanged(scaleX, scaleY, lock))(*)(EditorUI*, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1150c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX, scaleY, lock);
}

auto EditorUI::activateRotationControl(cocos2d::CCObject* sender) -> decltype(activateRotationControl(sender)) {
	using FunctionType = decltype(activateRotationControl(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::activateScaleControl(cocos2d::CCObject* sender) -> decltype(activateScaleControl(sender)) {
	using FunctionType = decltype(activateScaleControl(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::activateTransformControl(cocos2d::CCObject* sender) -> decltype(activateTransformControl(sender)) {
	using FunctionType = decltype(activateTransformControl(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::addObjectsToSmartTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects) -> decltype(addObjectsToSmartTemplate(smartTemplate, objects)) {
	using FunctionType = decltype(addObjectsToSmartTemplate(smartTemplate, objects))(*)(EditorUI*, GJSmartTemplate*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, objects);
}

auto EditorUI::alignObjects(cocos2d::CCArray* objects, bool axisY) -> decltype(alignObjects(objects, axisY)) {
	using FunctionType = decltype(alignObjects(objects, axisY))(*)(EditorUI*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, axisY);
}

auto EditorUI::applyOffset(GameObject* object) -> decltype(applyOffset(object)) {
	using FunctionType = decltype(applyOffset(object))(*)(EditorUI*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1228f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto EditorUI::applySpecialOffset(cocos2d::CCPoint position, GameObject* object, cocos2d::CCPoint offset) -> decltype(applySpecialOffset(position, object, offset)) {
	using FunctionType = decltype(applySpecialOffset(position, object, offset))(*)(EditorUI*, cocos2d::CCPoint, GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, object, offset);
}

auto EditorUI::assignNewGroups(bool groupY) -> decltype(assignNewGroups(groupY)) {
	using FunctionType = decltype(assignNewGroups(groupY))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupY);
}

auto EditorUI::canSelectObject(GameObject* object) -> decltype(canSelectObject(object)) {
	using FunctionType = decltype(canSelectObject(object))(*)(EditorUI*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto EditorUI::checkDiffAfterTransformAnchor(cocos2d::CCPoint diff, cocos2d::CCArray* objects) -> decltype(checkDiffAfterTransformAnchor(diff, objects)) {
	using FunctionType = decltype(checkDiffAfterTransformAnchor(diff, objects))(*)(EditorUI*, cocos2d::CCPoint, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, diff, objects);
}

auto EditorUI::checkLiveColorSelect() -> decltype(checkLiveColorSelect()) {
	using FunctionType = decltype(checkLiveColorSelect())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::clickOnPosition(cocos2d::CCPoint position) -> decltype(clickOnPosition(position)) {
	using FunctionType = decltype(clickOnPosition(position))(*)(EditorUI*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe26e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto EditorUI::closeLiveColorSelect() -> decltype(closeLiveColorSelect()) {
	using FunctionType = decltype(closeLiveColorSelect())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11efa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::closeLiveHSVSelect() -> decltype(closeLiveHSVSelect()) {
	using FunctionType = decltype(closeLiveHSVSelect())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f1f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::constrainGameLayerPosition(float x, float y) -> decltype(constrainGameLayerPosition(x, y)) {
	using FunctionType = decltype(constrainGameLayerPosition(x, y))(*)(EditorUI*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, x, y);
}

auto EditorUI::convertKeyBasedOnNeighbors(int smartKey, int objectID, cocos2d::CCPoint position, cocos2d::CCArray* objects) -> decltype(convertKeyBasedOnNeighbors(smartKey, objectID, position, objects)) {
	using FunctionType = decltype(convertKeyBasedOnNeighbors(smartKey, objectID, position, objects))(*)(EditorUI*, int, int, cocos2d::CCPoint, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12deb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartKey, objectID, position, objects);
}

auto EditorUI::convertToBaseKey(int objectID) -> decltype(convertToBaseKey(objectID)) {
	using FunctionType = decltype(convertToBaseKey(objectID))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12ddb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto EditorUI::copyObjects(cocos2d::CCArray* objects, bool copyColors, bool sort) -> decltype(copyObjects(objects, copyColors, sort)) {
	using FunctionType = decltype(copyObjects(objects, copyColors, sort))(*)(EditorUI*, cocos2d::CCArray*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, copyColors, sort);
}

auto EditorUI::createCustomItems() -> decltype(createCustomItems()) {
	using FunctionType = decltype(createCustomItems())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::createEdgeForObject(GameObject* object, int type) -> decltype(createEdgeForObject(object, type)) {
	using FunctionType = decltype(createEdgeForObject(object, type))(*)(EditorUI*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12e690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, type);
}

auto EditorUI::createExtraObject(int id, cocos2d::CCPoint position, GameObject* object, cocos2d::CCArray* objects, int zOrder, int editorLayer) -> decltype(createExtraObject(id, position, object, objects, zOrder, editorLayer)) {
	using FunctionType = decltype(createExtraObject(id, position, object, objects, zOrder, editorLayer))(*)(EditorUI*, int, cocos2d::CCPoint, GameObject*, cocos2d::CCArray*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x132c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, position, object, objects, zOrder, editorLayer);
}

auto EditorUI::createExtrasForObject(int id, GameObject* object, cocos2d::CCArray* objects) -> decltype(createExtrasForObject(id, object, objects)) {
	using FunctionType = decltype(createExtrasForObject(id, object, objects))(*)(EditorUI*, int, GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12ff20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, object, objects);
}

auto EditorUI::createLoop() -> decltype(createLoop()) {
	using FunctionType = decltype(createLoop())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::createMoveMenu() -> decltype(createMoveMenu()) {
	using FunctionType = decltype(createMoveMenu())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11ad30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::createNewKeyframeAnim() -> decltype(createNewKeyframeAnim()) {
	using FunctionType = decltype(createNewKeyframeAnim())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::createObject(int objectID, cocos2d::CCPoint position) -> decltype(createObject(objectID, position)) {
	using FunctionType = decltype(createObject(objectID, position))(*)(EditorUI*, int, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10ff20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID, position);
}

auto EditorUI::createOutlines(cocos2d::CCArray* objects) -> decltype(createOutlines(objects)) {
	using FunctionType = decltype(createOutlines(objects))(*)(EditorUI*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12ecf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto EditorUI::createPrefab(GJSmartTemplate* smartTemplate, gd::string key, int id) -> decltype(createPrefab(smartTemplate, key, id)) {
	using FunctionType = decltype(createPrefab(smartTemplate, key, id))(*)(EditorUI*, GJSmartTemplate*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1179a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, key, id);
}

auto EditorUI::createRockBases(cocos2d::CCArray* objects) -> decltype(createRockBases(objects)) {
	using FunctionType = decltype(createRockBases(objects))(*)(EditorUI*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto EditorUI::createRockEdges(cocos2d::CCArray* objects) -> decltype(createRockEdges(objects)) {
	using FunctionType = decltype(createRockEdges(objects))(*)(EditorUI*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12e320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto EditorUI::createSmartObjectsFromTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects, bool useNearby, bool dontDelete, bool referenceOnly, bool dontPaste) -> decltype(createSmartObjectsFromTemplate(smartTemplate, objects, useNearby, dontDelete, referenceOnly, dontPaste)) {
	using FunctionType = decltype(createSmartObjectsFromTemplate(smartTemplate, objects, useNearby, dontDelete, referenceOnly, dontPaste))(*)(EditorUI*, GJSmartTemplate*, cocos2d::CCArray*, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x116e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, objects, useNearby, dontDelete, referenceOnly, dontPaste);
}

auto EditorUI::createSmartObjectsFromType(int type, cocos2d::CCArray* objects, bool extras, bool dontDelete) -> decltype(createSmartObjectsFromType(type, objects, extras, dontDelete)) {
	using FunctionType = decltype(createSmartObjectsFromType(type, objects, extras, dontDelete))(*)(EditorUI*, int, cocos2d::CCArray*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x117f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, objects, extras, dontDelete);
}

auto EditorUI::createUndoObject(UndoCommand command, bool addToList) -> decltype(createUndoObject(command, addToList)) {
	using FunctionType = decltype(createUndoObject(command, addToList))(*)(EditorUI*, UndoCommand, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, command, addToList);
}

auto EditorUI::createUndoSelectObject(bool redo) -> decltype(createUndoSelectObject(redo)) {
	using FunctionType = decltype(createUndoSelectObject(redo))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, redo);
}

auto EditorUI::deactivateScaleControl() -> decltype(deactivateScaleControl()) {
	using FunctionType = decltype(deactivateScaleControl())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::deactivateTransformControl() -> decltype(deactivateTransformControl()) {
	using FunctionType = decltype(deactivateTransformControl())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::deleteSmartBlocksFromObjects(cocos2d::CCArray* objects) -> decltype(deleteSmartBlocksFromObjects(objects)) {
	using FunctionType = decltype(deleteSmartBlocksFromObjects(objects))(*)(EditorUI*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x117db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto EditorUI::deselectAll() -> decltype(deselectAll()) {
	using FunctionType = decltype(deselectAll())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::deselectObject(GameObject* object) -> decltype(deselectObject(object)) {
	using FunctionType = decltype(deselectObject(object))(*)(EditorUI*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto EditorUI::deselectObjectsColor() -> decltype(deselectObjectsColor()) {
	using FunctionType = decltype(deselectObjectsColor())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::deselectTargetPortals() -> decltype(deselectTargetPortals()) {
	using FunctionType = decltype(deselectTargetPortals())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::doCopyObjects(bool withColor) -> decltype(doCopyObjects(withColor)) {
	using FunctionType = decltype(doCopyObjects(withColor))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1131a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, withColor);
}

auto EditorUI::doPasteObjects(bool withColor) -> decltype(doPasteObjects(withColor)) {
	using FunctionType = decltype(doPasteObjects(withColor))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x113330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, withColor);
}

auto EditorUI::dynamicGroupUpdate(bool reGroup) -> decltype(dynamicGroupUpdate(reGroup)) {
	using FunctionType = decltype(dynamicGroupUpdate(reGroup))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1188b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, reGroup);
}

auto EditorUI::editButton2Usable() -> decltype(editButton2Usable()) {
	using FunctionType = decltype(editButton2Usable())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::editButtonUsable() -> decltype(editButtonUsable()) {
	using FunctionType = decltype(editButtonUsable())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::editColor() -> decltype(editColor()) {
	using FunctionType = decltype(editColor())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11ed90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::editGroup(cocos2d::CCObject* sender) -> decltype(editGroup(sender)) {
	using FunctionType = decltype(editGroup(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::editHSV() -> decltype(editHSV()) {
	using FunctionType = decltype(editHSV())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::editObject(cocos2d::CCObject* sender) -> decltype(editObject(sender)) {
	using FunctionType = decltype(editObject(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11bef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::editObject2(cocos2d::CCObject* sender) -> decltype(editObject2(sender)) {
	using FunctionType = decltype(editObject2(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11de80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::editObjectSpecial(int type) -> decltype(editObjectSpecial(type)) {
	using FunctionType = decltype(editObjectSpecial(type))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11de90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto EditorUI::findAndSelectObject(int id, bool useUniqueID) -> decltype(findAndSelectObject(id, useUniqueID)) {
	using FunctionType = decltype(findAndSelectObject(id, useUniqueID))(*)(EditorUI*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, useUniqueID);
}

auto EditorUI::findSnapObject(cocos2d::CCArray* objects, float offset) -> decltype(findSnapObject(objects, offset)) {
	using FunctionType = decltype(findSnapObject(objects, offset))(*)(EditorUI*, cocos2d::CCArray*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, offset);
}

auto EditorUI::findSnapObject(cocos2d::CCPoint position, float offset) -> decltype(findSnapObject(position, offset)) {
	using FunctionType = decltype(findSnapObject(position, offset))(*)(EditorUI*, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, offset);
}

auto EditorUI::flipObjectsX(cocos2d::CCArray* objects) -> decltype(flipObjectsX(objects)) {
	using FunctionType = decltype(flipObjectsX(objects))(*)(EditorUI*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x120c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto EditorUI::flipObjectsY(cocos2d::CCArray* objects) -> decltype(flipObjectsY(objects)) {
	using FunctionType = decltype(flipObjectsY(objects))(*)(EditorUI*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x120e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto EditorUI::getCreateBtn(int id, int bg) -> decltype(getCreateBtn(id, bg)) {
	using FunctionType = decltype(getCreateBtn(id, bg))(*)(EditorUI*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, bg);
}

auto EditorUI::getEditColorTargets(ColorAction*& mainColor, ColorAction*& detailColor, EffectGameObject*& object) -> decltype(getEditColorTargets(mainColor, detailColor, object)) {
	using FunctionType = decltype(getEditColorTargets(mainColor, detailColor, object))(*)(EditorUI*, ColorAction*&, ColorAction*&, EffectGameObject*&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11eb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, mainColor, detailColor, object);
}

auto EditorUI::getGroupCenter(cocos2d::CCArray* objects, bool absolute) -> decltype(getGroupCenter(objects, absolute)) {
	using FunctionType = decltype(getGroupCenter(objects, absolute))(*)(EditorUI*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, absolute);
}

auto EditorUI::getLimitedPosition(cocos2d::CCPoint position) -> decltype(getLimitedPosition(position)) {
	using FunctionType = decltype(getLimitedPosition(position))(*)(EditorUI*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x120110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto EditorUI::getNeighbor(int smartKey, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects) -> decltype(getNeighbor(smartKey, position, direction, objects)) {
	using FunctionType = decltype(getNeighbor(smartKey, position, direction, objects))(*)(EditorUI*, int, cocos2d::CCPoint, GJSmartDirection, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1187e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartKey, position, direction, objects);
}

auto EditorUI::getSelectedObjects() -> decltype(getSelectedObjects()) {
	using FunctionType = decltype(getSelectedObjects())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::getSmartNeighbor(SmartGameObject* object, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects) -> decltype(getSmartNeighbor(object, position, direction, objects)) {
	using FunctionType = decltype(getSmartNeighbor(object, position, direction, objects))(*)(EditorUI*, SmartGameObject*, cocos2d::CCPoint, GJSmartDirection, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1186c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, position, direction, objects);
}

auto EditorUI::getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset) -> decltype(getSpriteButton(spriteFrameName, selector, menu, scale, buttonKind, offset)) {
	using FunctionType = decltype(getSpriteButton(spriteFrameName, selector, menu, scale, buttonKind, offset))(*)(EditorUI*, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, spriteFrameName, selector, menu, scale, buttonKind, offset);
}

auto EditorUI::getSpriteButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset) -> decltype(getSpriteButton(sprite, selector, menu, scale, buttonKind, offset)) {
	using FunctionType = decltype(getSpriteButton(sprite, selector, menu, scale, buttonKind, offset))(*)(EditorUI*, cocos2d::CCSprite*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, int, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite, selector, menu, scale, buttonKind, offset);
}

auto EditorUI::getXMin(int offset) -> decltype(getXMin(offset)) {
	using FunctionType = decltype(getXMin(offset))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offset);
}

auto EditorUI::init(LevelEditorLayer* editorLayer) -> decltype(init(editorLayer)) {
	using FunctionType = decltype(init(editorLayer))(*)(EditorUI*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdf390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, editorLayer);
}

auto EditorUI::isSpecialSnapObject(int id) -> decltype(isSpecialSnapObject(id)) {
	using FunctionType = decltype(isSpecialSnapObject(id))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto EditorUI::menuItemFromObjectString(gd::string str, int id) -> decltype(menuItemFromObjectString(str, id)) {
	using FunctionType = decltype(menuItemFromObjectString(str, id))(*)(EditorUI*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, id);
}

auto EditorUI::moveForCommand(EditCommand command) -> decltype(moveForCommand(command)) {
	using FunctionType = decltype(moveForCommand(command))(*)(EditorUI*, EditCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, command);
}

auto EditorUI::moveGamelayer(cocos2d::CCPoint offset) -> decltype(moveGamelayer(offset)) {
	using FunctionType = decltype(moveGamelayer(offset))(*)(EditorUI*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offset);
}

auto EditorUI::moveObject(GameObject* object, cocos2d::CCPoint offset) -> decltype(moveObject(object, offset)) {
	using FunctionType = decltype(moveObject(object, offset))(*)(EditorUI*, GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11fcb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, offset);
}

auto EditorUI::moveObjectCall(EditCommand command) -> decltype(moveObjectCall(command)) {
	using FunctionType = decltype(moveObjectCall(command))(*)(EditorUI*, EditCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11fa20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, command);
}

auto EditorUI::moveObjectCall(cocos2d::CCObject* sender) -> decltype(moveObjectCall(sender)) {
	using FunctionType = decltype(moveObjectCall(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::offsetForKey(int id) -> decltype(offsetForKey(id)) {
	using FunctionType = decltype(offsetForKey(id))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1269a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto EditorUI::onAssignNewGroupID() -> decltype(onAssignNewGroupID()) {
	using FunctionType = decltype(onAssignNewGroupID())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::onColorFilter(cocos2d::CCObject* sender) -> decltype(onColorFilter(sender)) {
	using FunctionType = decltype(onColorFilter(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe72a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x113190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onCopyState(cocos2d::CCObject* sender) -> decltype(onCopyState(sender)) {
	using FunctionType = decltype(onCopyState(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onCreate() -> decltype(onCreate()) {
	using FunctionType = decltype(onCreate())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10f3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::onCreateButton(cocos2d::CCObject* sender) -> decltype(onCreateButton(sender)) {
	using FunctionType = decltype(onCreateButton(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10ef60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onCreateObject(int id) -> decltype(onCreateObject(id)) {
	using FunctionType = decltype(onCreateObject(id))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10f5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto EditorUI::onDelete(cocos2d::CCObject* sender) -> decltype(onDelete(sender)) {
	using FunctionType = decltype(onDelete(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe5e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onDeleteCustomItem(cocos2d::CCObject* sender) -> decltype(onDeleteCustomItem(sender)) {
	using FunctionType = decltype(onDeleteCustomItem(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onDeleteInfo(cocos2d::CCObject* sender) -> decltype(onDeleteInfo(sender)) {
	using FunctionType = decltype(onDeleteInfo(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe5cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onDeleteSelected(cocos2d::CCObject* sender) -> decltype(onDeleteSelected(sender)) {
	using FunctionType = decltype(onDeleteSelected(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onDeleteSelectedType(cocos2d::CCObject* sender) -> decltype(onDeleteSelectedType(sender)) {
	using FunctionType = decltype(onDeleteSelectedType(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe69d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onDeleteStartPos(cocos2d::CCObject* sender) -> decltype(onDeleteStartPos(sender)) {
	using FunctionType = decltype(onDeleteStartPos(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onDeselectAll(cocos2d::CCObject* sender) -> decltype(onDeselectAll(sender)) {
	using FunctionType = decltype(onDeselectAll(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onDuplicate(cocos2d::CCObject* sender) -> decltype(onDuplicate(sender)) {
	using FunctionType = decltype(onDuplicate(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onEditColor(cocos2d::CCObject* sender) -> decltype(onEditColor(sender)) {
	using FunctionType = decltype(onEditColor(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11ea90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onFindObject(cocos2d::CCObject* sender) -> decltype(onFindObject(sender)) {
	using FunctionType = decltype(onFindObject(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onGoToBaseLayer(cocos2d::CCObject* sender) -> decltype(onGoToBaseLayer(sender)) {
	using FunctionType = decltype(onGoToBaseLayer(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1147e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onGoToLayer(cocos2d::CCObject* sender) -> decltype(onGoToLayer(sender)) {
	using FunctionType = decltype(onGoToLayer(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onGroupDown(cocos2d::CCObject* sender) -> decltype(onGroupDown(sender)) {
	using FunctionType = decltype(onGroupDown(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onGroupIDFilter(cocos2d::CCObject* sender) -> decltype(onGroupIDFilter(sender)) {
	using FunctionType = decltype(onGroupIDFilter(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onGroupSticky(cocos2d::CCObject* sender) -> decltype(onGroupSticky(sender)) {
	using FunctionType = decltype(onGroupSticky(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1128e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onGroupUp(cocos2d::CCObject* sender) -> decltype(onGroupUp(sender)) {
	using FunctionType = decltype(onGroupUp(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onLockLayer(cocos2d::CCObject* sender) -> decltype(onLockLayer(sender)) {
	using FunctionType = decltype(onLockLayer(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onNewCustomItem(cocos2d::CCObject* sender) -> decltype(onNewCustomItem(sender)) {
	using FunctionType = decltype(onNewCustomItem(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x113320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onPasteColor(cocos2d::CCObject* sender) -> decltype(onPasteColor(sender)) {
	using FunctionType = decltype(onPasteColor(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onPasteState(cocos2d::CCObject* sender) -> decltype(onPasteState(sender)) {
	using FunctionType = decltype(onPasteState(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1143e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onPause(cocos2d::CCObject* sender) -> decltype(onPause(sender)) {
	using FunctionType = decltype(onPause(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe19c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onPlayback(cocos2d::CCObject* sender) -> decltype(onPlayback(sender)) {
	using FunctionType = decltype(onPlayback(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onPlaytest(cocos2d::CCObject* sender) -> decltype(onPlaytest(sender)) {
	using FunctionType = decltype(onPlaytest(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1120b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onResetSpecialFilter(cocos2d::CCObject* sender) -> decltype(onResetSpecialFilter(sender)) {
	using FunctionType = decltype(onResetSpecialFilter(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onSelectBuildTab(cocos2d::CCObject* sender) -> decltype(onSelectBuildTab(sender)) {
	using FunctionType = decltype(onSelectBuildTab(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onStickyToggle(cocos2d::CCObject* sender) -> decltype(onStickyToggle(sender)) {
	using FunctionType = decltype(onStickyToggle(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onStopPlaytest(cocos2d::CCObject* sender) -> decltype(onStopPlaytest(sender)) {
	using FunctionType = decltype(onStopPlaytest(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onTargetIDChange(int change) -> decltype(onTargetIDChange(change)) {
	using FunctionType = decltype(onTargetIDChange(change))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1223e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, change);
}

auto EditorUI::onUngroupSticky(cocos2d::CCObject* sender) -> decltype(onUngroupSticky(sender)) {
	using FunctionType = decltype(onUngroupSticky(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::onUpdateDeleteFilter(cocos2d::CCObject* sender) -> decltype(onUpdateDeleteFilter(sender)) {
	using FunctionType = decltype(onUpdateDeleteFilter(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::orderDownCustomItem(cocos2d::CCObject* sender) -> decltype(orderDownCustomItem(sender)) {
	using FunctionType = decltype(orderDownCustomItem(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe46f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::orderUpCustomItem(cocos2d::CCObject* sender) -> decltype(orderUpCustomItem(sender)) {
	using FunctionType = decltype(orderUpCustomItem(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::pasteObjects(gd::string str, bool withColor, bool noUndo) -> decltype(pasteObjects(str, withColor, noUndo)) {
	using FunctionType = decltype(pasteObjects(str, withColor, noUndo))(*)(EditorUI*, gd::string, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1135b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, withColor, noUndo);
}

auto EditorUI::playtestStopped() -> decltype(playtestStopped()) {
	using FunctionType = decltype(playtestStopped())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::processSelectObjects(cocos2d::CCArray* objects) -> decltype(processSelectObjects(objects)) {
	using FunctionType = decltype(processSelectObjects(objects))(*)(EditorUI*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto EditorUI::processSmartObjectsFromType(int type, cocos2d::CCArray* objects, cocos2d::CCArray* objects2, cocos2d::CCArray* objects3, cocos2d::CCArray* objects4) -> decltype(processSmartObjectsFromType(type, objects, objects2, objects3, objects4)) {
	using FunctionType = decltype(processSmartObjectsFromType(type, objects, objects2, objects3, objects4))(*)(EditorUI*, int, cocos2d::CCArray*, cocos2d::CCArray*, cocos2d::CCArray*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x118430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, objects, objects2, objects3, objects4);
}

auto EditorUI::redoLastAction(cocos2d::CCObject* sender) -> decltype(redoLastAction(sender)) {
	using FunctionType = decltype(redoLastAction(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::reloadCustomItems() -> decltype(reloadCustomItems()) {
	using FunctionType = decltype(reloadCustomItems())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::removeOffset(GameObject* object) -> decltype(removeOffset(object)) {
	using FunctionType = decltype(removeOffset(object))(*)(EditorUI*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto EditorUI::replaceGroupID(GameObject* object, int oldID, int newID) -> decltype(replaceGroupID(object, oldID, newID)) {
	using FunctionType = decltype(replaceGroupID(object, oldID, newID))(*)(EditorUI*, GameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x118fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, oldID, newID);
}

auto EditorUI::repositionObjectsToCenter(cocos2d::CCArray* objects, cocos2d::CCPoint position, bool absolute) -> decltype(repositionObjectsToCenter(objects, position, absolute)) {
	using FunctionType = decltype(repositionObjectsToCenter(objects, position, absolute))(*)(EditorUI*, cocos2d::CCArray*, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1142c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, position, absolute);
}

auto EditorUI::resetSelectedObjectsColor() -> decltype(resetSelectedObjectsColor()) {
	using FunctionType = decltype(resetSelectedObjectsColor())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::resetUI() -> decltype(resetUI()) {
	using FunctionType = decltype(resetUI())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint pivotPoint) -> decltype(rotateObjects(objects, rotation, pivotPoint)) {
	using FunctionType = decltype(rotateObjects(objects, rotation, pivotPoint))(*)(EditorUI*, cocos2d::CCArray*, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, rotation, pivotPoint);
}

auto EditorUI::scaleObjects(cocos2d::CCArray* objects, float scaleX, float scaleY, cocos2d::CCPoint pivotPoint, ObjectScaleType type, bool lockMove) -> decltype(scaleObjects(objects, scaleX, scaleY, pivotPoint, type, lockMove)) {
	using FunctionType = decltype(scaleObjects(objects, scaleX, scaleY, pivotPoint, type, lockMove))(*)(EditorUI*, cocos2d::CCArray*, float, float, cocos2d::CCPoint, ObjectScaleType, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, scaleX, scaleY, pivotPoint, type, lockMove);
}

auto EditorUI::selectAllWithDirection(bool left) -> decltype(selectAllWithDirection(left)) {
	using FunctionType = decltype(selectAllWithDirection(left))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1115b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, left);
}

auto EditorUI::selectBuildTab(int tab) -> decltype(selectBuildTab(tab)) {
	using FunctionType = decltype(selectBuildTab(tab))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto EditorUI::selectObject(GameObject* object, bool ignoreFilter) -> decltype(selectObject(object, ignoreFilter)) {
	using FunctionType = decltype(selectObject(object, ignoreFilter))(*)(EditorUI*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, ignoreFilter);
}

auto EditorUI::selectObjects(cocos2d::CCArray* objects, bool ignoreFilter) -> decltype(selectObjects(objects, ignoreFilter)) {
	using FunctionType = decltype(selectObjects(objects, ignoreFilter))(*)(EditorUI*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, ignoreFilter);
}

auto EditorUI::setupCreateMenu() -> decltype(setupCreateMenu()) {
	using FunctionType = decltype(setupCreateMenu())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::setupDeleteMenu() -> decltype(setupDeleteMenu()) {
	using FunctionType = decltype(setupDeleteMenu())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::shouldDeleteObject(GameObject* object) -> decltype(shouldDeleteObject(object)) {
	using FunctionType = decltype(shouldDeleteObject(object))(*)(EditorUI*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto EditorUI::showLiveColorSelectForMode(int colorID) -> decltype(showLiveColorSelectForMode(colorID)) {
	using FunctionType = decltype(showLiveColorSelectForMode(colorID))(*)(EditorUI*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11eee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, colorID);
}

auto EditorUI::showMaxBasicError() -> decltype(showMaxBasicError()) {
	using FunctionType = decltype(showMaxBasicError())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::showMaxError() -> decltype(showMaxError()) {
	using FunctionType = decltype(showMaxError())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::showUI(bool show) -> decltype(showUI(show)) {
	using FunctionType = decltype(showUI(show))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, show);
}

auto EditorUI::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::spriteFromObjectString(gd::string str, bool absoluteCenter, bool useGroup, int objLimit, cocos2d::CCArray* objects, cocos2d::CCArray* group, GameObject* groupParent) -> decltype(spriteFromObjectString(str, absoluteCenter, useGroup, objLimit, objects, group, groupParent)) {
	using FunctionType = decltype(spriteFromObjectString(str, absoluteCenter, useGroup, objLimit, objects, group, groupParent))(*)(EditorUI*, gd::string, bool, bool, int, cocos2d::CCArray*, cocos2d::CCArray*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10de60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, absoluteCenter, useGroup, objLimit, objects, group, groupParent);
}

auto EditorUI::toggleEditObjectButton() -> decltype(toggleEditObjectButton()) {
	using FunctionType = decltype(toggleEditObjectButton())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::toggleEnableRotate(cocos2d::CCObject* sender) -> decltype(toggleEnableRotate(sender)) {
	using FunctionType = decltype(toggleEnableRotate(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1101e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::toggleFreeMove(cocos2d::CCObject* sender) -> decltype(toggleFreeMove(sender)) {
	using FunctionType = decltype(toggleFreeMove(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::toggleMode(cocos2d::CCObject* sender) -> decltype(toggleMode(sender)) {
	using FunctionType = decltype(toggleMode(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::toggleObjectInfoLabel() -> decltype(toggleObjectInfoLabel()) {
	using FunctionType = decltype(toggleObjectInfoLabel())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::toggleSnap(cocos2d::CCObject* sender) -> decltype(toggleSnap(sender)) {
	using FunctionType = decltype(toggleSnap(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::toggleSpecialEditButtons() -> decltype(toggleSpecialEditButtons()) {
	using FunctionType = decltype(toggleSpecialEditButtons())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::toggleSwipe(cocos2d::CCObject* sender) -> decltype(toggleSwipe(sender)) {
	using FunctionType = decltype(toggleSwipe(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10ffc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::transformObject(GameObject* object, EditCommand command, bool noOffset) -> decltype(transformObject(object, command, noOffset)) {
	using FunctionType = decltype(transformObject(object, command, noOffset))(*)(EditorUI*, GameObject*, EditCommand, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x120720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, command, noOffset);
}

auto EditorUI::transformObjectCall(EditCommand command) -> decltype(transformObjectCall(command)) {
	using FunctionType = decltype(transformObjectCall(command))(*)(EditorUI*, EditCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1201d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, command);
}

auto EditorUI::transformObjectCall(cocos2d::CCObject* sender) -> decltype(transformObjectCall(sender)) {
	using FunctionType = decltype(transformObjectCall(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1201a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::transformObjects(cocos2d::CCArray* objs, cocos2d::CCPoint anchor, float scaleX, float scaleY, float rotateX, float rotateY, float warpX, float warpY) -> decltype(transformObjects(objs, anchor, scaleX, scaleY, rotateX, rotateY, warpX, warpY)) {
	using FunctionType = decltype(transformObjects(objs, anchor, scaleX, scaleY, rotateX, rotateY, warpX, warpY))(*)(EditorUI*, cocos2d::CCArray*, cocos2d::CCPoint, float, float, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objs, anchor, scaleX, scaleY, rotateX, rotateY, warpX, warpY);
}

auto EditorUI::transformObjectsActive() -> decltype(transformObjectsActive()) {
	using FunctionType = decltype(transformObjectsActive())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::triggerSwipeMode() -> decltype(triggerSwipeMode()) {
	using FunctionType = decltype(triggerSwipeMode())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::undoLastAction(cocos2d::CCObject* object) -> decltype(undoLastAction(object)) {
	using FunctionType = decltype(undoLastAction(object))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto EditorUI::updateButtons() -> decltype(updateButtons()) {
	using FunctionType = decltype(updateButtons())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updateCreateMenu(bool selectTab) -> decltype(updateCreateMenu(selectTab)) {
	using FunctionType = decltype(updateCreateMenu(selectTab))(*)(EditorUI*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10efa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, selectTab);
}

auto EditorUI::updateDeleteButtons() -> decltype(updateDeleteButtons()) {
	using FunctionType = decltype(updateDeleteButtons())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updateEditButtonColor(int tag, cocos2d::ccColor3B color) -> decltype(updateEditButtonColor(tag, color)) {
	using FunctionType = decltype(updateEditButtonColor(tag, color))(*)(EditorUI*, int, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag, color);
}

auto EditorUI::updateEditColorButton() -> decltype(updateEditColorButton()) {
	using FunctionType = decltype(updateEditColorButton())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updateGridNodeSize() -> decltype(updateGridNodeSize()) {
	using FunctionType = decltype(updateGridNodeSize())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updateGroupIDLabel() -> decltype(updateGroupIDLabel()) {
	using FunctionType = decltype(updateGroupIDLabel())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updateObjectInfoLabel() -> decltype(updateObjectInfoLabel()) {
	using FunctionType = decltype(updateObjectInfoLabel())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updatePlaybackBtn() -> decltype(updatePlaybackBtn()) {
	using FunctionType = decltype(updatePlaybackBtn())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updateSlider() -> decltype(updateSlider()) {
	using FunctionType = decltype(updateSlider())(*)(EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorUI::updateZoom(float zoom) -> decltype(updateZoom(zoom)) {
	using FunctionType = decltype(updateZoom(zoom))(*)(EditorUI*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1126e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zoom);
}

auto EditorUI::zoomIn(cocos2d::CCObject* sender) -> decltype(zoomIn(sender)) {
	using FunctionType = decltype(zoomIn(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorUI::zoomOut(cocos2d::CCObject* sender) -> decltype(zoomOut(sender)) {
	using FunctionType = decltype(zoomOut(sender))(*)(EditorUI*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
