
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

auto SetupCollisionTriggerPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4181f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupCollisionTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCollisionTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCollisionTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4191a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCollisionTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCollisionTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCollisionTriggerPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupCollisionTriggerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupCollisionTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupCollisionTriggerPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupCollisionTriggerPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupCollisionTriggerPopup::onActivateOnExit(cocos2d::CCObject* sender) -> decltype(onActivateOnExit(sender)) {
	using FunctionType = decltype(onActivateOnExit(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::onEnableGroup(cocos2d::CCObject* sender) -> decltype(onEnableGroup(sender)) {
	using FunctionType = decltype(onEnableGroup(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::onItemID2Arrow(cocos2d::CCObject* sender) -> decltype(onItemID2Arrow(sender)) {
	using FunctionType = decltype(onItemID2Arrow(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4196c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::onItemIDArrow(cocos2d::CCObject* sender) -> decltype(onItemIDArrow(sender)) {
	using FunctionType = decltype(onItemIDArrow(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::onTargetIDArrow(cocos2d::CCObject* sender) -> decltype(onTargetIDArrow(sender)) {
	using FunctionType = decltype(onTargetIDArrow(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::onTargetP1(cocos2d::CCObject* sender) -> decltype(onTargetP1(sender)) {
	using FunctionType = decltype(onTargetP1(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4193c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::onTargetP2(cocos2d::CCObject* sender) -> decltype(onTargetP2(sender)) {
	using FunctionType = decltype(onTargetP2(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::onTargetPP(cocos2d::CCObject* sender) -> decltype(onTargetPP(sender)) {
	using FunctionType = decltype(onTargetPP(sender))(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCollisionTriggerPopup::updateItemID() -> decltype(updateItemID()) {
	using FunctionType = decltype(updateItemID())(*)(SetupCollisionTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCollisionTriggerPopup::updateItemID2() -> decltype(updateItemID2()) {
	using FunctionType = decltype(updateItemID2())(*)(SetupCollisionTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCollisionTriggerPopup::updateItemID2InputLabel() -> decltype(updateItemID2InputLabel()) {
	using FunctionType = decltype(updateItemID2InputLabel())(*)(SetupCollisionTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCollisionTriggerPopup::updateItemIDInputLabel() -> decltype(updateItemIDInputLabel()) {
	using FunctionType = decltype(updateItemIDInputLabel())(*)(SetupCollisionTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCollisionTriggerPopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupCollisionTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCollisionTriggerPopup::updateTargetIDInputLabel() -> decltype(updateTargetIDInputLabel()) {
	using FunctionType = decltype(updateTargetIDInputLabel())(*)(SetupCollisionTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
