
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

auto EditLevelLayer::scene(GJGameLevel* level) -> decltype(scene(level)) {
	using FunctionType = decltype(scene(level))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd52b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level);
}

auto EditLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditLevelLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditLevelLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EditLevelLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EditLevelLayer::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&EditLevelLayer::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(EditLevelLayer*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto EditLevelLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&EditLevelLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(EditLevelLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd8c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto EditLevelLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditLevelLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(EditLevelLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd7af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto EditLevelLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditLevelLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(EditLevelLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd74f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto EditLevelLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditLevelLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(EditLevelLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd7c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto EditLevelLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditLevelLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(EditLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto EditLevelLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditLevelLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(EditLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto EditLevelLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&EditLevelLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(EditLevelLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto EditLevelLayer::closeTextInputs() -> decltype(closeTextInputs()) {
	using FunctionType = decltype(closeTextInputs())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd7490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::confirmClone(cocos2d::CCObject* sender) -> decltype(confirmClone(sender)) {
	using FunctionType = decltype(confirmClone(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd92a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::confirmDelete(cocos2d::CCObject* sender) -> decltype(confirmDelete(sender)) {
	using FunctionType = decltype(confirmDelete(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd8b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::confirmMoveToTop(cocos2d::CCObject* sender) -> decltype(confirmMoveToTop(sender)) {
	using FunctionType = decltype(confirmMoveToTop(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd93c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(EditLevelLayer*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd5440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto EditLevelLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onEdit(cocos2d::CCObject* sender) -> decltype(onEdit(sender)) {
	using FunctionType = decltype(onEdit(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd82b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onGuidelines(cocos2d::CCObject* sender) -> decltype(onGuidelines(sender)) {
	using FunctionType = decltype(onGuidelines(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onHelp(cocos2d::CCObject* sender) -> decltype(onHelp(sender)) {
	using FunctionType = decltype(onHelp(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd9180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onLevelInfo(cocos2d::CCObject* sender) -> decltype(onLevelInfo(sender)) {
	using FunctionType = decltype(onLevelInfo(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onLevelLeaderboard(cocos2d::CCObject* sender) -> decltype(onLevelLeaderboard(sender)) {
	using FunctionType = decltype(onLevelLeaderboard(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onLevelOptions(cocos2d::CCObject* sender) -> decltype(onLevelOptions(sender)) {
	using FunctionType = decltype(onLevelOptions(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd7e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onSetFolder(cocos2d::CCObject* sender) -> decltype(onSetFolder(sender)) {
	using FunctionType = decltype(onSetFolder(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd94f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onShare(cocos2d::CCObject* sender) -> decltype(onShare(sender)) {
	using FunctionType = decltype(onShare(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd8450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onUpdateDescription(cocos2d::CCObject* sender) -> decltype(onUpdateDescription(sender)) {
	using FunctionType = decltype(onUpdateDescription(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd8180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::playStep2() -> decltype(playStep2()) {
	using FunctionType = decltype(playStep2())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd8010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::playStep3() -> decltype(playStep3()) {
	using FunctionType = decltype(playStep3())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd80f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::setupLevelInfo() -> decltype(setupLevelInfo()) {
	using FunctionType = decltype(setupLevelInfo())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::verifyLevelName() -> decltype(verifyLevelName()) {
	using FunctionType = decltype(verifyLevelName())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd97c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
