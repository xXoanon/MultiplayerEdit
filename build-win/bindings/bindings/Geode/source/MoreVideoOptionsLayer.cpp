
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

auto MoreVideoOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreVideoOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(MoreVideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreVideoOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreVideoOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MoreVideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreVideoOptionsLayer::addToggle(char const* label, char const* key, char const* description) -> decltype(addToggle(label, key, description)) {
	using FunctionType = decltype(addToggle(label, key, description))(*)(MoreVideoOptionsLayer*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x379720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, key, description);
}

auto MoreVideoOptionsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	using FunctionType = decltype(countForPage(page))(*)(MoreVideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x379d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreVideoOptionsLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(MoreVideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37a1a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreVideoOptionsLayer::layerForPage(int page) -> decltype(layerForPage(page)) {
	using FunctionType = decltype(layerForPage(page))(*)(MoreVideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x379fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreVideoOptionsLayer::objectsForPage(int page) -> decltype(objectsForPage(page)) {
	using FunctionType = decltype(objectsForPage(page))(*)(MoreVideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x379e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreVideoOptionsLayer::onApplyFPS(cocos2d::CCObject* sender) -> decltype(onApplyFPS(sender)) {
	using FunctionType = decltype(onApplyFPS(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37a180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37a190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37a5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::updateFPSButtons() -> decltype(updateFPSButtons()) {
	using FunctionType = decltype(updateFPSButtons())(*)(MoreVideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37af50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
