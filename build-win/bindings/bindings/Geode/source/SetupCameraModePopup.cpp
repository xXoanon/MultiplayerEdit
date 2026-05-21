
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

auto SetupCameraModePopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupCameraModePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCameraModePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCameraModePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCameraModePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCameraModePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCameraModePopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupCameraModePopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupCameraModePopup::onEditCameraSettings(cocos2d::CCObject* sender) -> decltype(onEditCameraSettings(sender)) {
	using FunctionType = decltype(onEditCameraSettings(sender))(*)(SetupCameraModePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraModePopup::onUnboundMode(cocos2d::CCObject* sender) -> decltype(onUnboundMode(sender)) {
	using FunctionType = decltype(onUnboundMode(sender))(*)(SetupCameraModePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraModePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupCameraModePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraModePopup::updateCameraEasing() -> decltype(updateCameraEasing()) {
	using FunctionType = decltype(updateCameraEasing())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4150f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraModePopup::updateCameraEasingLabel() -> decltype(updateCameraEasingLabel()) {
	using FunctionType = decltype(updateCameraEasingLabel())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x415090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraModePopup::updateCameraPadding() -> decltype(updateCameraPadding()) {
	using FunctionType = decltype(updateCameraPadding())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4151f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraModePopup::updateCameraPaddingLabel() -> decltype(updateCameraPaddingLabel()) {
	using FunctionType = decltype(updateCameraPaddingLabel())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x415180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraModePopup::updateItemVisibility() -> decltype(updateItemVisibility()) {
	using FunctionType = decltype(updateItemVisibility())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
