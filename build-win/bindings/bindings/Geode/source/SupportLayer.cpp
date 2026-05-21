
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

auto SupportLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SupportLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(SupportLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c8560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SupportLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&SupportLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(SupportLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto SupportLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&SupportLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(SupportLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto SupportLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&SupportLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(SupportLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto SupportLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&SupportLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(SupportLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ca950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto SupportLayer::createToggleButton(gd::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCArray* nodes) -> decltype(createToggleButton(text, selector, toggled, menu, position, nodes)) {
	using FunctionType = decltype(createToggleButton(text, selector, toggled, menu, position, nodes))(*)(SupportLayer*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, selector, toggled, menu, position, nodes);
}

auto SupportLayer::onCocos2d(cocos2d::CCObject* sender) -> decltype(onCocos2d(sender)) {
	using FunctionType = decltype(onCocos2d(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onEmail(cocos2d::CCObject* sender) -> decltype(onEmail(sender)) {
	using FunctionType = decltype(onEmail(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onGetReward(cocos2d::CCObject* sender) -> decltype(onGetReward(sender)) {
	using FunctionType = decltype(onGetReward(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onLinks(cocos2d::CCObject* sender) -> decltype(onLinks(sender)) {
	using FunctionType = decltype(onLinks(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ca0f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onLowDetail(cocos2d::CCObject* sender) -> decltype(onLowDetail(sender)) {
	using FunctionType = decltype(onLowDetail(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onPrivacy(cocos2d::CCObject* sender) -> decltype(onPrivacy(sender)) {
	using FunctionType = decltype(onPrivacy(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29e5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onRequestAccess(cocos2d::CCObject* sender) -> decltype(onRequestAccess(sender)) {
	using FunctionType = decltype(onRequestAccess(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onRobTop(cocos2d::CCObject* sender) -> decltype(onRobTop(sender)) {
	using FunctionType = decltype(onRobTop(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onSFX(cocos2d::CCObject* sender) -> decltype(onSFX(sender)) {
	using FunctionType = decltype(onSFX(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SupportLayer::onTOS(cocos2d::CCObject* sender) -> decltype(onTOS(sender)) {
	using FunctionType = decltype(onTOS(sender))(*)(SupportLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29e600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
