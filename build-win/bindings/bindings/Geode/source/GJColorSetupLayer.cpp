
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

auto GJColorSetupLayer::create(LevelSettingsObject* object) -> decltype(create(object)) {
	using FunctionType = decltype(create(object))(*)(LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x255f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto GJColorSetupLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJColorSetupLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJColorSetupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJColorSetupLayer::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&GJColorSetupLayer::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(GJColorSetupLayer*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJColorSetupLayer::init(LevelSettingsObject* object) -> decltype(init(object)) {
	using FunctionType = decltype(init(object))(*)(GJColorSetupLayer*, LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJColorSetupLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJColorSetupLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJColorSetupLayer::onColor(cocos2d::CCObject* sender) -> decltype(onColor(sender)) {
	using FunctionType = decltype(onColor(sender))(*)(GJColorSetupLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJColorSetupLayer::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(GJColorSetupLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJColorSetupLayer::showPage(int page) -> decltype(showPage(page)) {
	using FunctionType = decltype(showPage(page))(*)(GJColorSetupLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJColorSetupLayer::updateSpriteColor(ColorChannelSprite* sprite, cocos2d::CCLabelBMFont* label, int id) -> decltype(updateSpriteColor(sprite, label, id)) {
	using FunctionType = decltype(updateSpriteColor(sprite, label, id))(*)(GJColorSetupLayer*, ColorChannelSprite*, cocos2d::CCLabelBMFont*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite, label, id);
}

auto GJColorSetupLayer::updateSpriteColors() -> decltype(updateSpriteColors()) {
	using FunctionType = decltype(updateSpriteColors())(*)(GJColorSetupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2568f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
