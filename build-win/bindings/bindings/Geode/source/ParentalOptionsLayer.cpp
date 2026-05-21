
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

auto ParentalOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(ParentalOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ParentalOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalOptionsLayer::addToggle(char const* label, char const* variable, char const* info) -> decltype(addToggle(label, variable, info)) {
	using FunctionType = decltype(addToggle(label, variable, info))(*)(ParentalOptionsLayer*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, variable, info);
}

auto ParentalOptionsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	using FunctionType = decltype(countForPage(page))(*)(ParentalOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c0650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ParentalOptionsLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(ParentalOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c08f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ParentalOptionsLayer::layerForPage(int page) -> decltype(layerForPage(page)) {
	using FunctionType = decltype(layerForPage(page))(*)(ParentalOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37bfe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ParentalOptionsLayer::objectsForPage(int page) -> decltype(objectsForPage(page)) {
	using FunctionType = decltype(objectsForPage(page))(*)(ParentalOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37be50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ParentalOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ParentalOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ParentalOptionsLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(ParentalOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c08d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ParentalOptionsLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(ParentalOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c08e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ParentalOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(ParentalOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
