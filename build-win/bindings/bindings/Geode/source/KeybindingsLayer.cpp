
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

auto KeybindingsLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf8a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto KeybindingsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::init), this);
	using FunctionType = decltype(init())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::addKeyPair(char const* action, char const* key) -> decltype(addKeyPair(action, key)) {
	using FunctionType = decltype(addKeyPair(action, key))(*)(KeybindingsLayer*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c02a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action, key);
}

auto KeybindingsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	using FunctionType = decltype(countForPage(page))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c0650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto KeybindingsLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c08f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto KeybindingsLayer::layerForPage(int page) -> decltype(layerForPage(page)) {
	using FunctionType = decltype(layerForPage(page))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c0720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto KeybindingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindingsLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c08d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindingsLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c08e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
