
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

auto SecretRewardsLayer::scene(bool fromShop) -> decltype(scene(fromShop)) {
	using FunctionType = decltype(scene(fromShop))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fromShop);
}

auto SecretRewardsLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretRewardsLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretRewardsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretRewardsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretRewardsLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&SecretRewardsLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(SecretRewardsLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d68e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SecretRewardsLayer::scrollLayerMoved(cocos2d::CCPoint position) -> decltype(scrollLayerMoved(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&SecretRewardsLayer::scrollLayerMoved), this);
	using FunctionType = decltype(scrollLayerMoved(position))(*)(SecretRewardsLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto SecretRewardsLayer::createSecondaryLayer(int chestType) -> decltype(createSecondaryLayer(chestType)) {
	using FunctionType = decltype(createSecondaryLayer(chestType))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d52e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chestType);
}

auto SecretRewardsLayer::fadeInOutMusic() -> decltype(fadeInOutMusic()) {
	using FunctionType = decltype(fadeInOutMusic())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::generateChestItems(int chestType) -> decltype(generateChestItems(chestType)) {
	using FunctionType = decltype(generateChestItems(chestType))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chestType);
}

auto SecretRewardsLayer::init(bool fromShop) -> decltype(init(fromShop)) {
	using FunctionType = decltype(init(fromShop))(*)(SecretRewardsLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fromShop);
}

auto SecretRewardsLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onChestType(cocos2d::CCObject* sender) -> decltype(onChestType(sender)) {
	using FunctionType = decltype(onChestType(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onGoldChest(cocos2d::CCObject* sender) -> decltype(onGoldChest(sender)) {
	using FunctionType = decltype(onGoldChest(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSelectItem(cocos2d::CCObject* sender) -> decltype(onSelectItem(sender)) {
	using FunctionType = decltype(onSelectItem(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onShop(cocos2d::CCObject* sender) -> decltype(onShop(sender)) {
	using FunctionType = decltype(onShop(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d66d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSpecialItem(cocos2d::CCObject* sender) -> decltype(onSpecialItem(sender)) {
	using FunctionType = decltype(onSpecialItem(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSwitchPage(cocos2d::CCObject* sender) -> decltype(onSwitchPage(sender)) {
	using FunctionType = decltype(onSwitchPage(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::showDialog01() -> decltype(showDialog01()) {
	using FunctionType = decltype(showDialog01())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showDialog03() -> decltype(showDialog03()) {
	using FunctionType = decltype(showDialog03())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d9790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showDialogDiamond() -> decltype(showDialogDiamond()) {
	using FunctionType = decltype(showDialogDiamond())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dbcf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showDialogMechanic() -> decltype(showDialogMechanic()) {
	using FunctionType = decltype(showDialogMechanic())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3daa60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::switchToOpenedState(CCMenuItemSpriteExtra* button) -> decltype(switchToOpenedState(button)) {
	using FunctionType = decltype(switchToOpenedState(button))(*)(SecretRewardsLayer*, CCMenuItemSpriteExtra*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto SecretRewardsLayer::updateBackButton() -> decltype(updateBackButton()) {
	using FunctionType = decltype(updateBackButton())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d51a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::updateUnlockedGoldLabel() -> decltype(updateUnlockedGoldLabel()) {
	using FunctionType = decltype(updateUnlockedGoldLabel())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::updateUnlockedLabel() -> decltype(updateUnlockedLabel()) {
	using FunctionType = decltype(updateUnlockedLabel())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
