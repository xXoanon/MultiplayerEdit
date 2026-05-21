
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

auto SetupZoomTriggerPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupZoomTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupZoomTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupZoomTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupZoomTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupZoomTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupZoomTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupZoomTriggerPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupZoomTriggerPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}
