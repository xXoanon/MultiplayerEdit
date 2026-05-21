
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

auto SetupInstantCountPopup::create(CountTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(CountTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x422270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupInstantCountPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupInstantCountPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupInstantCountPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4232e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupInstantCountPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupInstantCountPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupInstantCountPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupInstantCountPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupInstantCountPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupInstantCountPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x423490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupInstantCountPopup::init(CountTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupInstantCountPopup*, CountTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4223b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupInstantCountPopup::onCountType(cocos2d::CCObject* sender) -> decltype(onCountType(sender)) {
	using FunctionType = decltype(onCountType(sender))(*)(SetupInstantCountPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4237e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupInstantCountPopup::onEnableGroup(cocos2d::CCObject* sender) -> decltype(onEnableGroup(sender)) {
	using FunctionType = decltype(onEnableGroup(sender))(*)(SetupInstantCountPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupInstantCountPopup::onTargetCountArrow(cocos2d::CCObject* sender) -> decltype(onTargetCountArrow(sender)) {
	using FunctionType = decltype(onTargetCountArrow(sender))(*)(SetupInstantCountPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupInstantCountPopup::onTargetID2Arrow(cocos2d::CCObject* sender) -> decltype(onTargetID2Arrow(sender)) {
	using FunctionType = decltype(onTargetID2Arrow(sender))(*)(SetupInstantCountPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x423450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupInstantCountPopup::onTargetIDArrow(cocos2d::CCObject* sender) -> decltype(onTargetIDArrow(sender)) {
	using FunctionType = decltype(onTargetIDArrow(sender))(*)(SetupInstantCountPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupInstantCountPopup::updateCountTextInputLabel() -> decltype(updateCountTextInputLabel()) {
	using FunctionType = decltype(updateCountTextInputLabel())(*)(SetupInstantCountPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupInstantCountPopup::updateItemID() -> decltype(updateItemID()) {
	using FunctionType = decltype(updateItemID())(*)(SetupInstantCountPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupInstantCountPopup::updateItemIDInputLabel() -> decltype(updateItemIDInputLabel()) {
	using FunctionType = decltype(updateItemIDInputLabel())(*)(SetupInstantCountPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupInstantCountPopup::updateTargetCount() -> decltype(updateTargetCount()) {
	using FunctionType = decltype(updateTargetCount())(*)(SetupInstantCountPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupInstantCountPopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupInstantCountPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x423710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupInstantCountPopup::updateTargetIDInputLabel() -> decltype(updateTargetIDInputLabel()) {
	using FunctionType = decltype(updateTargetIDInputLabel())(*)(SetupInstantCountPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
