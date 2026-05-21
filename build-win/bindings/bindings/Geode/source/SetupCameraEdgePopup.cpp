
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

auto SetupCameraEdgePopup::create(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupCameraEdgePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCameraEdgePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCameraEdgePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4139d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCameraEdgePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCameraEdgePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCameraEdgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCameraEdgePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupCameraEdgePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupCameraEdgePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupCameraEdgePopup::init(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupCameraEdgePopup*, CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupCameraEdgePopup::onCameraEdge(cocos2d::CCObject* sender) -> decltype(onCameraEdge(sender)) {
	using FunctionType = decltype(onCameraEdge(sender))(*)(SetupCameraEdgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraEdgePopup::onTargetIDArrow(cocos2d::CCObject* sender) -> decltype(onTargetIDArrow(sender)) {
	using FunctionType = decltype(onTargetIDArrow(sender))(*)(SetupCameraEdgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraEdgePopup::onUnlockEdge(cocos2d::CCObject* sender) -> decltype(onUnlockEdge(sender)) {
	using FunctionType = decltype(onUnlockEdge(sender))(*)(SetupCameraEdgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraEdgePopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupCameraEdgePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraEdgePopup::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(SetupCameraEdgePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
