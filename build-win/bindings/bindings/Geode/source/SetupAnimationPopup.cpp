
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

auto SetupAnimationPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x408c30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupAnimationPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupAnimationPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupAnimationPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupAnimationPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupAnimationPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupAnimationPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupAnimationPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupAnimationPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupAnimationPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupAnimationPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupAnimationPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x408d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupAnimationPopup::onAnimationIDArrow(cocos2d::CCObject* sender) -> decltype(onAnimationIDArrow(sender)) {
	using FunctionType = decltype(onAnimationIDArrow(sender))(*)(SetupAnimationPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAnimationPopup::onTargetIDArrow(cocos2d::CCObject* sender) -> decltype(onTargetIDArrow(sender)) {
	using FunctionType = decltype(onTargetIDArrow(sender))(*)(SetupAnimationPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAnimationPopup::updateAnimationID() -> decltype(updateAnimationID()) {
	using FunctionType = decltype(updateAnimationID())(*)(SetupAnimationPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupAnimationPopup::updateAnimationTextInputLabel() -> decltype(updateAnimationTextInputLabel()) {
	using FunctionType = decltype(updateAnimationTextInputLabel())(*)(SetupAnimationPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupAnimationPopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupAnimationPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupAnimationPopup::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(SetupAnimationPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
