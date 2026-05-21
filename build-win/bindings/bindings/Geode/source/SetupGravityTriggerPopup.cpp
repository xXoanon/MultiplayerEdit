
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

auto SetupGravityTriggerPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x429140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupGravityTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupGravityTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupGravityTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4296d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupGravityTriggerPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupGravityTriggerPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x429250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}
