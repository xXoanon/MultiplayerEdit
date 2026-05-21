
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

auto SetupShakePopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x454bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupShakePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupShakePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupShakePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x455a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupShakePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupShakePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupShakePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4564c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupShakePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupShakePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupShakePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x456100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupShakePopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupShakePopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x454d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupShakePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupShakePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x455c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupShakePopup::updateDuration() -> decltype(updateDuration()) {
	using FunctionType = decltype(updateDuration())(*)(SetupShakePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x272a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShakePopup::updateDurLabel(bool decimals) -> decltype(updateDurLabel(decimals)) {
	using FunctionType = decltype(updateDurLabel(decimals))(*)(SetupShakePopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x271de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, decimals);
}

auto SetupShakePopup::updateInterval() -> decltype(updateInterval()) {
	using FunctionType = decltype(updateInterval())(*)(SetupShakePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x456080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShakePopup::updateIntervalLabel(bool decimals) -> decltype(updateIntervalLabel(decimals)) {
	using FunctionType = decltype(updateIntervalLabel(decimals))(*)(SetupShakePopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x455fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, decimals);
}

auto SetupShakePopup::updateShake() -> decltype(updateShake()) {
	using FunctionType = decltype(updateShake())(*)(SetupShakePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x455f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShakePopup::updateShakeLabel(bool decimals) -> decltype(updateShakeLabel(decimals)) {
	using FunctionType = decltype(updateShakeLabel(decimals))(*)(SetupShakePopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x455e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, decimals);
}
