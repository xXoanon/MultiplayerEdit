
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

auto SetupAreaAnimTriggerPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupAreaAnimTriggerPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupAreaAnimTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4127c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupAreaAnimTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAreaAnimTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupAreaAnimTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaAnimTriggerPopup::createValueControlAdvancedAnim(int property, gd::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float min, float max, int page, int group, GJInputStyle inputStyle) -> decltype(createValueControlAdvancedAnim(property, label, position, scale, noSlider, valueType, length, arrows, min, max, page, group, inputStyle)) {
	using FunctionType = decltype(createValueControlAdvancedAnim(property, label, position, scale, noSlider, valueType, length, arrows, min, max, page, group, inputStyle))(*)(SetupAreaAnimTriggerPopup*, int, gd::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4125d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, scale, noSlider, valueType, length, arrows, min, max, page, group, inputStyle);
}

auto SetupAreaAnimTriggerPopup::init(EnterEffectObject* object, cocos2d::CCArray* objects, int id) -> decltype(init(object, objects, id)) {
	using FunctionType = decltype(init(object, objects, id))(*)(SetupAreaAnimTriggerPopup*, EnterEffectObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, id);
}

auto SetupAreaAnimTriggerPopup::onDeactivateAnimValue(cocos2d::CCObject* sender) -> decltype(onDeactivateAnimValue(sender)) {
	using FunctionType = decltype(onDeactivateAnimValue(sender))(*)(SetupAreaAnimTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAreaAnimTriggerPopup::updateTargetIDLabel() -> decltype(updateTargetIDLabel()) {
	using FunctionType = decltype(updateTargetIDLabel())(*)(SetupAreaAnimTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4128a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
