
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

auto BoomScrollLayer::create(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate) -> decltype(create(pages, offset, looped, dynamicObjects, delegate)) {
	using FunctionType = decltype(create(pages, offset, looped, dynamicObjects, delegate))(*)(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(pages, offset, looped, dynamicObjects, delegate);
}

auto BoomScrollLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&BoomScrollLayer::visit), this);
	using FunctionType = decltype(visit())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto BoomScrollLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&BoomScrollLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto BoomScrollLayer::init(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate) -> decltype(init(pages, offset, looped, dynamicObjects, delegate)) {
	using FunctionType = decltype(init(pages, offset, looped, dynamicObjects, delegate))(*)(BoomScrollLayer*, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, pages, offset, looped, dynamicObjects, delegate);
}

auto BoomScrollLayer::instantMoveToPage(int page) -> decltype(instantMoveToPage(page)) {
	using FunctionType = decltype(instantMoveToPage(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3de10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::moveToPage(int page) -> decltype(moveToPage(page)) {
	using FunctionType = decltype(moveToPage(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3def0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::moveToPageEnded() -> decltype(moveToPageEnded()) {
	using FunctionType = decltype(moveToPageEnded())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BoomScrollLayer::pageNumberForPosition(cocos2d::CCPoint position) -> decltype(pageNumberForPosition(position)) {
	using FunctionType = decltype(pageNumberForPosition(position))(*)(BoomScrollLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dd10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto BoomScrollLayer::repositionPagesLooped() -> decltype(repositionPagesLooped()) {
	using FunctionType = decltype(repositionPagesLooped())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BoomScrollLayer::setupDynamicScrolling(cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate) -> decltype(setupDynamicScrolling(dynamicObjects, delegate)) {
	using FunctionType = decltype(setupDynamicScrolling(dynamicObjects, delegate))(*)(BoomScrollLayer*, cocos2d::CCArray*, DynamicScrollDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dynamicObjects, delegate);
}

auto BoomScrollLayer::togglePageIndicators(bool visible) -> decltype(togglePageIndicators(visible)) {
	using FunctionType = decltype(togglePageIndicators(visible))(*)(BoomScrollLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto BoomScrollLayer::updateDots(float dt) -> decltype(updateDots(dt)) {
	using FunctionType = decltype(updateDots(dt))(*)(BoomScrollLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto BoomScrollLayer::updatePages() -> decltype(updatePages()) {
	using FunctionType = decltype(updatePages())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
