
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

auto LevelSettingsLayer::create(LevelSettingsObject* object, LevelEditorLayer* layer) -> decltype(create(object, layer)) {
	using FunctionType = decltype(create(object, layer))(*)(LevelSettingsObject*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31e830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, layer);
}

auto LevelSettingsLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelSettingsLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LevelSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3212e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelSettingsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelSettingsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x322180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelSettingsLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelSettingsLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelSettingsLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelSettingsLayer::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&LevelSettingsLayer::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(LevelSettingsLayer*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto LevelSettingsLayer::selectArtClosed(SelectArtLayer* layer) -> decltype(selectArtClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectArtLayer*>::func(&LevelSettingsLayer::selectArtClosed), this);
	using FunctionType = decltype(selectArtClosed(layer))(*)(LevelSettingsLayer*, SelectArtLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LevelSettingsLayer::selectSettingClosed(SelectSettingLayer* layer) -> decltype(selectSettingClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectSettingLayer*>::func(&LevelSettingsLayer::selectSettingClosed), this);
	using FunctionType = decltype(selectSettingClosed(layer))(*)(LevelSettingsLayer*, SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LevelSettingsLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSettingsLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(LevelSettingsLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSettingsLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSettingsLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(LevelSettingsLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSettingsLayer::createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position) -> decltype(createToggleButton(label, selector, toggled, menu, position)) {
	using FunctionType = decltype(createToggleButton(label, selector, toggled, menu, position))(*)(LevelSettingsLayer*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label, selector, toggled, menu, position);
}

auto LevelSettingsLayer::init(LevelSettingsObject* object, LevelEditorLayer* layer) -> decltype(init(object, layer)) {
	using FunctionType = decltype(init(object, layer))(*)(LevelSettingsLayer*, LevelSettingsObject*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ea20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, layer);
}

auto LevelSettingsLayer::onBGArt(cocos2d::CCObject* sender) -> decltype(onBGArt(sender)) {
	using FunctionType = decltype(onBGArt(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3217e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onCol(cocos2d::CCObject* sender) -> decltype(onCol(sender)) {
	using FunctionType = decltype(onCol(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3219e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onDisable(cocos2d::CCObject* sender) -> decltype(onDisable(sender)) {
	using FunctionType = decltype(onDisable(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3215b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onFGArt(cocos2d::CCObject* sender) -> decltype(onFGArt(sender)) {
	using FunctionType = decltype(onFGArt(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onGameplayMode(cocos2d::CCObject* sender) -> decltype(onGameplayMode(sender)) {
	using FunctionType = decltype(onGameplayMode(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onGArt(cocos2d::CCObject* sender) -> decltype(onGArt(sender)) {
	using FunctionType = decltype(onGArt(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onLiveEdit(cocos2d::CCObject* sender) -> decltype(onLiveEdit(sender)) {
	using FunctionType = decltype(onLiveEdit(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onMode(cocos2d::CCObject* sender) -> decltype(onMode(sender)) {
	using FunctionType = decltype(onMode(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onOptionToggle(cocos2d::CCObject* sender) -> decltype(onOptionToggle(sender)) {
	using FunctionType = decltype(onOptionToggle(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3215d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onSelectFont(cocos2d::CCObject* sender) -> decltype(onSelectFont(sender)) {
	using FunctionType = decltype(onSelectFont(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onShowPicker(cocos2d::CCObject* sender) -> decltype(onShowPicker(sender)) {
	using FunctionType = decltype(onShowPicker(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::onSpeed(cocos2d::CCObject* sender) -> decltype(onSpeed(sender)) {
	using FunctionType = decltype(onSpeed(sender))(*)(LevelSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3210b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSettingsLayer::updateColorSprite(ColorChannelSprite* sprite) -> decltype(updateColorSprite(sprite)) {
	using FunctionType = decltype(updateColorSprite(sprite))(*)(LevelSettingsLayer*, ColorChannelSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite);
}

auto LevelSettingsLayer::updateColorSprites() -> decltype(updateColorSprites()) {
	using FunctionType = decltype(updateColorSprites())(*)(LevelSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelSettingsLayer::updateGameplayModeButtons() -> decltype(updateGameplayModeButtons()) {
	using FunctionType = decltype(updateGameplayModeButtons())(*)(LevelSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
