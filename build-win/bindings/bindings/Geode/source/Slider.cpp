
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

auto Slider::create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale) -> decltype(create(target, handler, bar, groove, thumb, thumbSel, scale)) {
	using FunctionType = decltype(create(target, handler, bar, groove, thumb, thumbSel, scale))(*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target, handler, bar, groove, thumb, thumbSel, scale);
}

auto Slider::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&Slider::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto Slider::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&Slider::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto Slider::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&Slider::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto Slider::init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale) -> decltype(init(target, handler, bar, groove, thumb, thumbSel, scale)) {
	using FunctionType = decltype(init(target, handler, bar, groove, thumb, thumbSel, scale))(*)(Slider*, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, target, handler, bar, groove, thumb, thumbSel, scale);
}

auto Slider::setMaxOffset(float offset) -> decltype(setMaxOffset(offset)) {
	using FunctionType = decltype(setMaxOffset(offset))(*)(Slider*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offset);
}

auto Slider::setRotated(bool rotated) -> decltype(setRotated(rotated)) {
	using FunctionType = decltype(setRotated(rotated))(*)(Slider*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rotated);
}

auto Slider::setValue(float val) -> decltype(setValue(val)) {
	using FunctionType = decltype(setValue(val))(*)(Slider*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, val);
}

auto Slider::updateBar() -> decltype(updateBar()) {
	using FunctionType = decltype(updateBar())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
