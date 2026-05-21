
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

auto SetupAdvFollowPopup::create(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(AdvancedFollowTriggerObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4023f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupAdvFollowPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupAdvFollowPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupAdvFollowPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupAdvFollowPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupAdvFollowPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupAdvFollowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4055d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupAdvFollowPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAdvFollowPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupAdvFollowPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4056c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAdvFollowPopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupAdvFollowPopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupAdvFollowPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x405a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupAdvFollowPopup::selectPremadeClosed(SelectPremadeLayer* layer, int type) -> decltype(selectPremadeClosed(layer, type)) {
	auto self = addresser::thunkAdjust(Resolve<SelectPremadeLayer*, int>::func(&SetupAdvFollowPopup::selectPremadeClosed), this);
	using FunctionType = decltype(selectPremadeClosed(layer, type))(*)(SetupAdvFollowPopup*, SelectPremadeLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x405cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, type);
}

auto SetupAdvFollowPopup::init(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupAdvFollowPopup*, AdvancedFollowTriggerObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x402510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupAdvFollowPopup::onMode(cocos2d::CCObject* sender) -> decltype(onMode(sender)) {
	using FunctionType = decltype(onMode(sender))(*)(SetupAdvFollowPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x405ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAdvFollowPopup::onPremade(cocos2d::CCObject* sender) -> decltype(onPremade(sender)) {
	using FunctionType = decltype(onPremade(sender))(*)(SetupAdvFollowPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x405b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAdvFollowPopup::updateMode(int mode) -> decltype(updateMode(mode)) {
	using FunctionType = decltype(updateMode(mode))(*)(SetupAdvFollowPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x405ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, mode);
}
