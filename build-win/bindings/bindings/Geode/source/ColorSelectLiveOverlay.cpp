
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

auto ColorSelectLiveOverlay::create(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object) -> decltype(create(baseAction, detailAction, object)) {
	using FunctionType = decltype(create(baseAction, detailAction, object))(*)(ColorAction*, ColorAction*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8bd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(baseAction, detailAction, object);
}

auto ColorSelectLiveOverlay::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectLiveOverlay::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectLiveOverlay::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectLiveOverlay::show), this);
	using FunctionType = decltype(show())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectLiveOverlay::closeColorSelect(cocos2d::CCObject* sender) -> decltype(closeColorSelect(sender)) {
	using FunctionType = decltype(closeColorSelect(sender))(*)(ColorSelectLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectLiveOverlay::init(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object) -> decltype(init(baseAction, detailAction, object)) {
	using FunctionType = decltype(init(baseAction, detailAction, object))(*)(ColorSelectLiveOverlay*, ColorAction*, ColorAction*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8be60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, baseAction, detailAction, object);
}

auto ColorSelectLiveOverlay::onSelectTab(cocos2d::CCObject* sender) -> decltype(onSelectTab(sender)) {
	using FunctionType = decltype(onSelectTab(sender))(*)(ColorSelectLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectLiveOverlay::selectColor(cocos2d::ccColor3B color) -> decltype(selectColor(color)) {
	using FunctionType = decltype(selectColor(color))(*)(ColorSelectLiveOverlay*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto ColorSelectLiveOverlay::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(ColorSelectLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8cdf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectLiveOverlay::toggleControls(bool visible) -> decltype(toggleControls(visible)) {
	using FunctionType = decltype(toggleControls(visible))(*)(ColorSelectLiveOverlay*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto ColorSelectLiveOverlay::updateColorLabel() -> decltype(updateColorLabel()) {
	using FunctionType = decltype(updateColorLabel())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
