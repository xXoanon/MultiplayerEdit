
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

auto AppDelegate::applicationDidFinishLaunching() -> decltype(applicationDidFinishLaunching()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationDidFinishLaunching), this);
	using FunctionType = decltype(applicationDidFinishLaunching())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationDidEnterBackground() -> decltype(applicationDidEnterBackground()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationDidEnterBackground), this);
	using FunctionType = decltype(applicationDidEnterBackground())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationWillEnterForeground() -> decltype(applicationWillEnterForeground()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationWillEnterForeground), this);
	using FunctionType = decltype(applicationWillEnterForeground())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationWillBecomeActive() -> decltype(applicationWillBecomeActive()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationWillBecomeActive), this);
	using FunctionType = decltype(applicationWillBecomeActive())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationWillResignActive() -> decltype(applicationWillResignActive()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationWillResignActive), this);
	using FunctionType = decltype(applicationWillResignActive())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::trySaveGame(bool force) -> decltype(trySaveGame(force)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&AppDelegate::trySaveGame), this);
	using FunctionType = decltype(trySaveGame(force))(*)(AppDelegate*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, force);
}

auto AppDelegate::willSwitchToScene(cocos2d::CCScene* scene) -> decltype(willSwitchToScene(scene)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCScene*>::func(&AppDelegate::willSwitchToScene), this);
	using FunctionType = decltype(willSwitchToScene(scene))(*)(AppDelegate*, cocos2d::CCScene*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x835e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scene);
}

auto AppDelegate::musicTest() -> decltype(musicTest()) {
	using FunctionType = decltype(musicTest())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x833c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AppDelegate::pauseGame() -> decltype(pauseGame()) {
	using FunctionType = decltype(pauseGame())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AppDelegate::pauseSound() -> decltype(pauseSound()) {
	using FunctionType = decltype(pauseSound())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AppDelegate::platformShutdown() -> decltype(platformShutdown()) {
	using FunctionType = decltype(platformShutdown())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x825b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AppDelegate::resumeSound() -> decltype(resumeSound()) {
	using FunctionType = decltype(resumeSound())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x832c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AppDelegate::setupGLView() -> decltype(setupGLView()) {
	using FunctionType = decltype(setupGLView())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x825d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
