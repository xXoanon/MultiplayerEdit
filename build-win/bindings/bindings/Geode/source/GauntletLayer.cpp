
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

auto GauntletLayer::scene(GauntletType type) -> decltype(scene(type)) {
	using FunctionType = decltype(scene(type))(*)(GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f5df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GauntletLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GauntletLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GauntletLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f8460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GauntletLayer::loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type) -> decltype(loadLevelsFinished(levels, key, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&GauntletLayer::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(levels, key, type))(*)(GauntletLayer*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f6930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, levels, key, type);
}

auto GauntletLayer::loadLevelsFailed(char const* key, int type) -> decltype(loadLevelsFailed(key, type)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&GauntletLayer::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(key, type))(*)(GauntletLayer*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f6b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, type);
}

auto GauntletLayer::init(GauntletType type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(GauntletLayer*, GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f6140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GauntletLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(GauntletLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f8410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GauntletLayer::onLevel(cocos2d::CCObject* sender) -> decltype(onLevel(sender)) {
	using FunctionType = decltype(onLevel(sender))(*)(GauntletLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f7d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GauntletLayer::setupGauntlet(cocos2d::CCArray* levels) -> decltype(setupGauntlet(levels)) {
	using FunctionType = decltype(setupGauntlet(levels))(*)(GauntletLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f6d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GauntletLayer::unlockActiveItem() -> decltype(unlockActiveItem()) {
	using FunctionType = decltype(unlockActiveItem())(*)(GauntletLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f7e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
