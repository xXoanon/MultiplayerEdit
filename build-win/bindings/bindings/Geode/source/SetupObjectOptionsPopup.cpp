
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

auto SetupObjectOptionsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::show), this);
	using FunctionType = decltype(show())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupObjectOptionsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupObjectOptionsPopup::init(GameObject* object, cocos2d::CCArray* objects, SetGroupIDLayer* layer) -> decltype(init(object, objects, layer)) {
	using FunctionType = decltype(init(object, objects, layer))(*)(SetupObjectOptionsPopup*, GameObject*, cocos2d::CCArray*, SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fdf30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, layer);
}

auto SetupObjectOptionsPopup::onAlwaysHide(cocos2d::CCObject* sender) -> decltype(onAlwaysHide(sender)) {
	using FunctionType = decltype(onAlwaysHide(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onApplyScaleStick(cocos2d::CCObject* sender) -> decltype(onApplyScaleStick(sender)) {
	using FunctionType = decltype(onApplyScaleStick(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onCenterEffect(cocos2d::CCObject* sender) -> decltype(onCenterEffect(sender)) {
	using FunctionType = decltype(onCenterEffect(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDisableGlow(cocos2d::CCObject* sender) -> decltype(onDisableGlow(sender)) {
	using FunctionType = decltype(onDisableGlow(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDisableObject(cocos2d::CCObject* sender) -> decltype(onDisableObject(sender)) {
	using FunctionType = decltype(onDisableObject(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ffe70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDontBoost(cocos2d::CCObject* sender) -> decltype(onDontBoost(sender)) {
	using FunctionType = decltype(onDontBoost(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDontBoostX(cocos2d::CCObject* sender) -> decltype(onDontBoostX(sender)) {
	using FunctionType = decltype(onDontBoostX(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDontEnter(cocos2d::CCObject* sender) -> decltype(onDontEnter(sender)) {
	using FunctionType = decltype(onDontEnter(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ffcc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDontFade(cocos2d::CCObject* sender) -> decltype(onDontFade(sender)) {
	using FunctionType = decltype(onDontFade(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ffc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onExtendedCollision(cocos2d::CCObject* sender) -> decltype(onExtendedCollision(sender)) {
	using FunctionType = decltype(onExtendedCollision(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onExtraSticky(cocos2d::CCObject* sender) -> decltype(onExtraSticky(sender)) {
	using FunctionType = decltype(onExtraSticky(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4002f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onGripSlope(cocos2d::CCObject* sender) -> decltype(onGripSlope(sender)) {
	using FunctionType = decltype(onGripSlope(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fff90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onHideEffects(cocos2d::CCObject* sender) -> decltype(onHideEffects(sender)) {
	using FunctionType = decltype(onHideEffects(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ffd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onHighDetail(cocos2d::CCObject* sender) -> decltype(onHighDetail(sender)) {
	using FunctionType = decltype(onHighDetail(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4006e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onIceBlock(cocos2d::CCObject* sender) -> decltype(onIceBlock(sender)) {
	using FunctionType = decltype(onIceBlock(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ffba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onNoAudioScale(cocos2d::CCObject* sender) -> decltype(onNoAudioScale(sender)) {
	using FunctionType = decltype(onNoAudioScale(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4004a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onNonStickX(cocos2d::CCObject* sender) -> decltype(onNonStickX(sender)) {
	using FunctionType = decltype(onNonStickX(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4001d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onNonStickY(cocos2d::CCObject* sender) -> decltype(onNonStickY(sender)) {
	using FunctionType = decltype(onNonStickY(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onNoParticle(cocos2d::CCObject* sender) -> decltype(onNoParticle(sender)) {
	using FunctionType = decltype(onNoParticle(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ffde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onPassable(cocos2d::CCObject* sender) -> decltype(onPassable(sender)) {
	using FunctionType = decltype(onPassable(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4000b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onReverse(cocos2d::CCObject* sender) -> decltype(onReverse(sender)) {
	using FunctionType = decltype(onReverse(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4008a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onSinglePlayerTouch(cocos2d::CCObject* sender) -> decltype(onSinglePlayerTouch(sender)) {
	using FunctionType = decltype(onSinglePlayerTouch(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onToggleAreaParent(cocos2d::CCObject* sender) -> decltype(onToggleAreaParent(sender)) {
	using FunctionType = decltype(onToggleAreaParent(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onToggleGroupParent(cocos2d::CCObject* sender) -> decltype(onToggleGroupParent(sender)) {
	using FunctionType = decltype(onToggleGroupParent(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4005c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
