
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

SetupAreaMoveTriggerPopup::SetupAreaMoveTriggerPopup() : SetupAreaMoveTriggerPopup(geode::CutoffConstructor, sizeof(SetupAreaMoveTriggerPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup();

	using FunctionType = void(*)(SetupAreaMoveTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40aba0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupAreaMoveTriggerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x40b400, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupAreaMoveTriggerPopup(geode::CutoffConstructor, sizeof(SetupAreaMoveTriggerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupAreaMoveTriggerPopup::updateInputValue(int tag, float& value) -> decltype(updateInputValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float&>::func(&SetupAreaMoveTriggerPopup::updateInputValue), this);
	using FunctionType = decltype(updateInputValue(tag, value))(*)(SetupAreaMoveTriggerPopup*, int, float&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaMoveTriggerPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupAreaMoveTriggerPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupAreaMoveTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40d9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupAreaMoveTriggerPopup::updateInputNode(int tag, float value) -> decltype(updateInputNode(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAreaMoveTriggerPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(tag, value))(*)(SetupAreaMoveTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaMoveTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAreaMoveTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupAreaMoveTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40df00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaMoveTriggerPopup::triggerValueFromSliderValue(int tag, float value) -> decltype(triggerValueFromSliderValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAreaMoveTriggerPopup::triggerValueFromSliderValue), this);
	using FunctionType = decltype(triggerValueFromSliderValue(tag, value))(*)(SetupAreaMoveTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaMoveTriggerPopup::triggerSliderValueFromValue(int tag, float value) -> decltype(triggerSliderValueFromValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAreaMoveTriggerPopup::triggerSliderValueFromValue), this);
	using FunctionType = decltype(triggerSliderValueFromValue(tag, value))(*)(SetupAreaMoveTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaMoveTriggerPopup::addAreaDefaultControls(int objectID) -> decltype(addAreaDefaultControls(objectID)) {
	using FunctionType = decltype(addAreaDefaultControls(objectID))(*)(SetupAreaMoveTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto SetupAreaMoveTriggerPopup::init(EnterEffectObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupAreaMoveTriggerPopup*, EnterEffectObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40b4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupAreaMoveTriggerPopup::onMode(cocos2d::CCObject* sender) -> decltype(onMode(sender)) {
	using FunctionType = decltype(onMode(sender))(*)(SetupAreaMoveTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40dda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAreaMoveTriggerPopup::onNextFreeEffectID(cocos2d::CCObject* sender) -> decltype(onNextFreeEffectID(sender)) {
	using FunctionType = decltype(onNextFreeEffectID(sender))(*)(SetupAreaMoveTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40d9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAreaMoveTriggerPopup::onSpecialTarget(cocos2d::CCObject* sender) -> decltype(onSpecialTarget(sender)) {
	using FunctionType = decltype(onSpecialTarget(sender))(*)(SetupAreaMoveTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40daa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAreaMoveTriggerPopup::updateEnterTargetIDState() -> decltype(updateEnterTargetIDState()) {
	using FunctionType = decltype(updateEnterTargetIDState())(*)(SetupAreaMoveTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40db40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
