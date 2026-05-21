
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

auto SetupStaticCameraPopup::create(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45fb90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupStaticCameraPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupStaticCameraPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupStaticCameraPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4606a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupStaticCameraPopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupStaticCameraPopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupStaticCameraPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x442820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupStaticCameraPopup::init(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupStaticCameraPopup*, CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45fca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupStaticCameraPopup::updateState() -> decltype(updateState()) {
	using FunctionType = decltype(updateState())(*)(SetupStaticCameraPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4606c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
