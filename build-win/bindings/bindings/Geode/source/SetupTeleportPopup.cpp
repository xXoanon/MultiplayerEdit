
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

auto SetupTeleportPopup::create(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer) -> decltype(create(object, objects, id, platformer)) {
	using FunctionType = decltype(create(object, objects, id, platformer))(*)(TeleportPortalObject*, cocos2d::CCArray*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x460830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, id, platformer);
}

auto SetupTeleportPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTeleportPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupTeleportPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTeleportPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTeleportPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupTeleportPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x461ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTeleportPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupTeleportPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupTeleportPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x461b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupTeleportPopup::init(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer) -> decltype(init(object, objects, id, platformer)) {
	using FunctionType = decltype(init(object, objects, id, platformer))(*)(SetupTeleportPopup*, TeleportPortalObject*, cocos2d::CCArray*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x460970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, id, platformer);
}

auto SetupTeleportPopup::onTeleportGravity(cocos2d::CCObject* sender) -> decltype(onTeleportGravity(sender)) {
	using FunctionType = decltype(onTeleportGravity(sender))(*)(SetupTeleportPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x461c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTeleportPopup::updateTeleportGravityState(int state) -> decltype(updateTeleportGravityState(state)) {
	using FunctionType = decltype(updateTeleportGravityState(state))(*)(SetupTeleportPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x461c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}
