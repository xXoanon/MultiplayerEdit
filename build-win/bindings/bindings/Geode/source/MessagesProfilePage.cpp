
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

auto MessagesProfilePage::create(bool sent) -> decltype(create(sent)) {
	using FunctionType = decltype(create(sent))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x336570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(sent);
}

auto MessagesProfilePage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessagesProfilePage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessagesProfilePage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessagesProfilePage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessagesProfilePage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MessagesProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MessagesProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MessagesProfilePage::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&MessagesProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(MessagesProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13eee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto MessagesProfilePage::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessagesProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(MessagesProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MessagesProfilePage::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessagesProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(MessagesProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13f0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MessagesProfilePage::loadMessagesFinished(cocos2d::CCArray* messages, char const* key) -> decltype(loadMessagesFinished(messages, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&MessagesProfilePage::loadMessagesFinished), this);
	using FunctionType = decltype(loadMessagesFinished(messages, key))(*)(MessagesProfilePage*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3381c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, messages, key);
}

auto MessagesProfilePage::loadMessagesFailed(char const* key, GJErrorCode errorType) -> decltype(loadMessagesFailed(key, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, GJErrorCode>::func(&MessagesProfilePage::loadMessagesFailed), this);
	using FunctionType = decltype(loadMessagesFailed(key, errorType))(*)(MessagesProfilePage*, char const*, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13f890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, errorType);
}

auto MessagesProfilePage::forceReloadMessages(bool sent) -> decltype(forceReloadMessages(sent)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&MessagesProfilePage::forceReloadMessages), this);
	using FunctionType = decltype(forceReloadMessages(sent))(*)(MessagesProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sent);
}

auto MessagesProfilePage::setupPageInfo(gd::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string, char const*>::func(&MessagesProfilePage::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(MessagesProfilePage*, gd::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto MessagesProfilePage::deleteSelected() -> decltype(deleteSelected()) {
	using FunctionType = decltype(deleteSelected())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MessagesProfilePage::init(bool sent) -> decltype(init(sent)) {
	using FunctionType = decltype(init(sent))(*)(MessagesProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x336710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent);
}

auto MessagesProfilePage::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(MessagesProfilePage*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13f140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto MessagesProfilePage::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(MessagesProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MessagesProfilePage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::onDeleteSelected(cocos2d::CCObject* sender) -> decltype(onDeleteSelected(sender)) {
	using FunctionType = decltype(onDeleteSelected(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3373a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3384d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3384e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::onSentMessages(cocos2d::CCObject* sender) -> decltype(onSentMessages(sender)) {
	using FunctionType = decltype(onSentMessages(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::onToggleAllObjects(cocos2d::CCObject* sender) -> decltype(onToggleAllObjects(sender)) {
	using FunctionType = decltype(onToggleAllObjects(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::setupCommentsBrowser(cocos2d::CCArray* messages) -> decltype(setupCommentsBrowser(messages)) {
	using FunctionType = decltype(setupCommentsBrowser(messages))(*)(MessagesProfilePage*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, messages);
}

auto MessagesProfilePage::untoggleAll() -> decltype(untoggleAll()) {
	using FunctionType = decltype(untoggleAll())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
