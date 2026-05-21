
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

auto SetupEndPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41ca90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupEndPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupEndPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupEndPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupEndPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupEndPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupEndPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupEndPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupEndPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetupEndPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupEndPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupEndPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupEndPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupEndPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupEndPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41cbc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupEndPopup::onLockY(cocos2d::CCObject* sender) -> decltype(onLockY(sender)) {
	using FunctionType = decltype(onLockY(sender))(*)(SetupEndPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEndPopup::onMultiActivate(cocos2d::CCObject* sender) -> decltype(onMultiActivate(sender)) {
	using FunctionType = decltype(onMultiActivate(sender))(*)(SetupEndPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEndPopup::onReversed(cocos2d::CCObject* sender) -> decltype(onReversed(sender)) {
	using FunctionType = decltype(onReversed(sender))(*)(SetupEndPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEndPopup::onTargetIDArrow(cocos2d::CCObject* sender) -> decltype(onTargetIDArrow(sender)) {
	using FunctionType = decltype(onTargetIDArrow(sender))(*)(SetupEndPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEndPopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupEndPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupEndPopup::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(SetupEndPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
