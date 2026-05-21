
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

auto SetupOptionsTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupOptionsTriggerPopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupOptionsTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x436940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupOptionsTriggerPopup::addOption(int property, gd::string label) -> decltype(addOption(property, label)) {
	using FunctionType = decltype(addOption(property, label))(*)(SetupOptionsTriggerPopup*, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4366e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, property, label);
}

auto SetupOptionsTriggerPopup::init(GameOptionsTrigger* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupOptionsTriggerPopup*, GameOptionsTrigger*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x435ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}
