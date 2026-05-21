
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

auto CCMenuItemToggler::create(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback) -> decltype(create(off, on, target, callback)) {
	using FunctionType = decltype(create(off, on, target, callback))(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(off, on, target, callback);
}

auto CCMenuItemToggler::activate() -> decltype(activate()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCMenuItemToggler::activate), this);
	using FunctionType = decltype(activate())(*)(CCMenuItemToggler*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCMenuItemToggler::selected() -> decltype(selected()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCMenuItemToggler::selected), this);
	using FunctionType = decltype(selected())(*)(CCMenuItemToggler*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x454b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCMenuItemToggler::unselected() -> decltype(unselected()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCMenuItemToggler::unselected), this);
	using FunctionType = decltype(unselected())(*)(CCMenuItemToggler*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCMenuItemToggler::setEnabled(bool enabled) -> decltype(setEnabled(enabled)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCMenuItemToggler::setEnabled), this);
	using FunctionType = decltype(setEnabled(enabled))(*)(CCMenuItemToggler*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x455a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, enabled);
}

auto CCMenuItemToggler::normalTouch(cocos2d::CCObject* sender) -> decltype(normalTouch(sender)) {
	using FunctionType = decltype(normalTouch(sender))(*)(CCMenuItemToggler*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x455f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CCMenuItemToggler::selectedTouch(cocos2d::CCObject* sender) -> decltype(selectedTouch(sender)) {
	using FunctionType = decltype(selectedTouch(sender))(*)(CCMenuItemToggler*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CCMenuItemToggler::setSizeMult(float mult) -> decltype(setSizeMult(mult)) {
	using FunctionType = decltype(setSizeMult(mult))(*)(CCMenuItemToggler*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, mult);
}

auto CCMenuItemToggler::toggle(bool on) -> decltype(toggle(on)) {
	using FunctionType = decltype(toggle(on))(*)(CCMenuItemToggler*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, on);
}
