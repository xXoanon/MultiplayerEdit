
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

auto ProfilePage::create(int accountID, bool ownProfile) -> decltype(create(accountID, ownProfile)) {
	using FunctionType = decltype(create(accountID, ownProfile))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3be660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(accountID, ownProfile);
}

auto ProfilePage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::show), this);
	using FunctionType = decltype(show())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c53b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&ProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(ProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto ProfilePage::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::updateUserScoreFailed() -> decltype(updateUserScoreFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::updateUserScoreFailed), this);
	using FunctionType = decltype(updateUserScoreFailed())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::getUserInfoFinished(GJUserScore* score) -> decltype(getUserInfoFinished(score)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&ProfilePage::getUserInfoFinished), this);
	using FunctionType = decltype(getUserInfoFinished(score))(*)(ProfilePage*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, score);
}

auto ProfilePage::getUserInfoFailed(int id) -> decltype(getUserInfoFailed(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ProfilePage::getUserInfoFailed), this);
	using FunctionType = decltype(getUserInfoFailed(id))(*)(ProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto ProfilePage::userInfoChanged(GJUserScore* score) -> decltype(userInfoChanged(score)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&ProfilePage::userInfoChanged), this);
	using FunctionType = decltype(userInfoChanged(score))(*)(ProfilePage*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, score);
}

auto ProfilePage::loadCommentsFinished(cocos2d::CCArray* comments, char const* key) -> decltype(loadCommentsFinished(comments, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&ProfilePage::loadCommentsFinished), this);
	using FunctionType = decltype(loadCommentsFinished(comments, key))(*)(ProfilePage*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, comments, key);
}

auto ProfilePage::loadCommentsFailed(char const* key) -> decltype(loadCommentsFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&ProfilePage::loadCommentsFailed), this);
	using FunctionType = decltype(loadCommentsFailed(key))(*)(ProfilePage*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c66b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto ProfilePage::setupPageInfo(gd::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string, char const*>::func(&ProfilePage::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(ProfilePage*, gd::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto ProfilePage::commentUploadFinished(int parentID) -> decltype(commentUploadFinished(parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ProfilePage::commentUploadFinished), this);
	using FunctionType = decltype(commentUploadFinished(parentID))(*)(ProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID);
}

auto ProfilePage::commentUploadFailed(int parentID, CommentError errorType) -> decltype(commentUploadFailed(parentID, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, CommentError>::func(&ProfilePage::commentUploadFailed), this);
	using FunctionType = decltype(commentUploadFailed(parentID, errorType))(*)(ProfilePage*, int, CommentError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID, errorType);
}

auto ProfilePage::commentDeleteFailed(int id, int parentID) -> decltype(commentDeleteFailed(id, parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ProfilePage::commentDeleteFailed), this);
	using FunctionType = decltype(commentDeleteFailed(id, parentID))(*)(ProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, parentID);
}

auto ProfilePage::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&ProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(ProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto ProfilePage::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(ProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ProfilePage::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(ProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ProfilePage::init(int accountID, bool ownProfile) -> decltype(init(accountID, ownProfile)) {
	using FunctionType = decltype(init(accountID, ownProfile))(*)(ProfilePage*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3be840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, ownProfile);
}

auto ProfilePage::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(ProfilePage*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c60a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto ProfilePage::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(ProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c61d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ProfilePage::loadPageFromUserInfo(GJUserScore* score) -> decltype(loadPageFromUserInfo(score)) {
	using FunctionType = decltype(loadPageFromUserInfo(score))(*)(ProfilePage*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bfe80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, score);
}

auto ProfilePage::onBlockUser(cocos2d::CCObject* sender) -> decltype(onBlockUser(sender)) {
	using FunctionType = decltype(onBlockUser(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c42d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c50a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onComment(cocos2d::CCObject* sender) -> decltype(onComment(sender)) {
	using FunctionType = decltype(onComment(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onCommentHistory(cocos2d::CCObject* sender) -> decltype(onCommentHistory(sender)) {
	using FunctionType = decltype(onCommentHistory(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onCopyName(cocos2d::CCObject* sender) -> decltype(onCopyName(sender)) {
	using FunctionType = decltype(onCopyName(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c32b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onFollow(cocos2d::CCObject* sender) -> decltype(onFollow(sender)) {
	using FunctionType = decltype(onFollow(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onFriend(cocos2d::CCObject* sender) -> decltype(onFriend(sender)) {
	using FunctionType = decltype(onFriend(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onFriends(cocos2d::CCObject* sender) -> decltype(onFriends(sender)) {
	using FunctionType = decltype(onFriends(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c34e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onMessages(cocos2d::CCObject* sender) -> decltype(onMessages(sender)) {
	using FunctionType = decltype(onMessages(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onMyLevels(cocos2d::CCObject* sender) -> decltype(onMyLevels(sender)) {
	using FunctionType = decltype(onMyLevels(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onMyLists(cocos2d::CCObject* sender) -> decltype(onMyLists(sender)) {
	using FunctionType = decltype(onMyLists(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c68f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onRequests(cocos2d::CCObject* sender) -> decltype(onRequests(sender)) {
	using FunctionType = decltype(onRequests(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onSendMessage(cocos2d::CCObject* sender) -> decltype(onSendMessage(sender)) {
	using FunctionType = decltype(onSendMessage(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onSocialPage(cocos2d::CCObject* sender) -> decltype(onSocialPage(sender)) {
	using FunctionType = decltype(onSocialPage(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onStatInfo(cocos2d::CCObject* sender) -> decltype(onStatInfo(sender)) {
	using FunctionType = decltype(onStatInfo(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c30e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bf7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::setupCommentsBrowser(cocos2d::CCArray* comments) -> decltype(setupCommentsBrowser(comments)) {
	using FunctionType = decltype(setupCommentsBrowser(comments))(*)(ProfilePage*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c64c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, comments);
}

auto ProfilePage::showNoAccountError() -> decltype(showNoAccountError()) {
	using FunctionType = decltype(showNoAccountError())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ProfilePage::toggleShip(cocos2d::CCObject* sender) -> decltype(toggleShip(sender)) {
	using FunctionType = decltype(toggleShip(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::updatePageArrows() -> decltype(updatePageArrows()) {
	using FunctionType = decltype(updatePageArrows())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
