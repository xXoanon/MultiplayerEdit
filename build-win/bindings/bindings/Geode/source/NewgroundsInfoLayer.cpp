
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

auto NewgroundsInfoLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewgroundsInfoLayer::init), this);
	using FunctionType = decltype(init())(*)(NewgroundsInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc5650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewgroundsInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewgroundsInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NewgroundsInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewgroundsInfoLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&NewgroundsInfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(NewgroundsInfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc63b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto NewgroundsInfoLayer::onArtists(cocos2d::CCObject* sender) -> decltype(onArtists(sender)) {
	using FunctionType = decltype(onArtists(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc5f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onChanges(cocos2d::CCObject* sender) -> decltype(onChanges(sender)) {
	using FunctionType = decltype(onChanges(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onGuidelines(cocos2d::CCObject* sender) -> decltype(onGuidelines(sender)) {
	using FunctionType = decltype(onGuidelines(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc60e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onNewgrounds(cocos2d::CCObject* sender) -> decltype(onNewgrounds(sender)) {
	using FunctionType = decltype(onNewgrounds(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc5f7a, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onSupporter(cocos2d::CCObject* sender) -> decltype(onSupporter(sender)) {
	using FunctionType = decltype(onSupporter(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc60c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
