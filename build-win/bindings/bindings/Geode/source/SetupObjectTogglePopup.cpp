
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

auto SetupObjectTogglePopup::create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer) -> decltype(create(object, objects, platformer)) {
	using FunctionType = decltype(create(object, objects, platformer))(*)(EffectGameObject*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4298f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, platformer);
}

auto SetupObjectTogglePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupObjectTogglePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupObjectTogglePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4244b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupObjectTogglePopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupObjectTogglePopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupObjectTogglePopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupObjectTogglePopup::init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer) -> decltype(init(object, objects, platformer)) {
	using FunctionType = decltype(init(object, objects, platformer))(*)(SetupObjectTogglePopup*, EffectGameObject*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x429a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, platformer);
}
