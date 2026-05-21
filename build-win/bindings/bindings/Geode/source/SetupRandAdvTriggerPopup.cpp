
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

auto SetupRandAdvTriggerPopup::create(RandTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(RandTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43d220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupRandAdvTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupRandAdvTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupRandAdvTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43dde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupRandAdvTriggerPopup::callRemoveFromGroup(float dt) -> decltype(callRemoveFromGroup(dt)) {
	using FunctionType = decltype(callRemoveFromGroup(dt))(*)(SetupRandAdvTriggerPopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43e820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto SetupRandAdvTriggerPopup::init(RandTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupRandAdvTriggerPopup*, RandTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43d360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupRandAdvTriggerPopup::onAddChance(cocos2d::CCObject* sender) -> decltype(onAddChance(sender)) {
	using FunctionType = decltype(onAddChance(sender))(*)(SetupRandAdvTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43ea60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupRandAdvTriggerPopup::onRemoveFromGroup(cocos2d::CCObject* sender) -> decltype(onRemoveFromGroup(sender)) {
	using FunctionType = decltype(onRemoveFromGroup(sender))(*)(SetupRandAdvTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43e990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupRandAdvTriggerPopup::updateGroupIDButtons() -> decltype(updateGroupIDButtons()) {
	using FunctionType = decltype(updateGroupIDButtons())(*)(SetupRandAdvTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43dea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
