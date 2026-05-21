
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

auto HSVLiveOverlay::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVLiveOverlay::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVLiveOverlay::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVLiveOverlay::show), this);
	using FunctionType = decltype(show())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVLiveOverlay::hsvChanged(ConfigureHSVWidget* widget) -> decltype(hsvChanged(widget)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureHSVWidget*>::func(&HSVLiveOverlay::hsvChanged), this);
	using FunctionType = decltype(hsvChanged(widget))(*)(HSVLiveOverlay*, ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, widget);
}

auto HSVLiveOverlay::closeColorSelect(cocos2d::CCObject* sender) -> decltype(closeColorSelect(sender)) {
	using FunctionType = decltype(closeColorSelect(sender))(*)(HSVLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto HSVLiveOverlay::createHSVWidget(int tab) -> decltype(createHSVWidget(tab)) {
	using FunctionType = decltype(createHSVWidget(tab))(*)(HSVLiveOverlay*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto HSVLiveOverlay::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b9e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HSVLiveOverlay::init(GameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(HSVLiveOverlay*, GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b99c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto HSVLiveOverlay::onSelectTab(cocos2d::CCObject* sender) -> decltype(onSelectTab(sender)) {
	using FunctionType = decltype(onSelectTab(sender))(*)(HSVLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
