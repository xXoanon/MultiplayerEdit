
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

auto InfoLayer::create(GJGameLevel* level, GJUserScore* score, GJLevelList* list) -> decltype(create(level, score, list)) {
	using FunctionType = decltype(create(level, score, list))(*)(GJGameLevel*, GJUserScore*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ba8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, score, list);
}

auto InfoLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2be210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::show), this);
	using FunctionType = decltype(show())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::loadCommentsFinished(cocos2d::CCArray* comments, char const* key) -> decltype(loadCommentsFinished(comments, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&InfoLayer::loadCommentsFinished), this);
	using FunctionType = decltype(loadCommentsFinished(comments, key))(*)(InfoLayer*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2beb50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, comments, key);
}

auto InfoLayer::loadCommentsFailed(char const* key) -> decltype(loadCommentsFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&InfoLayer::loadCommentsFailed), this);
	using FunctionType = decltype(loadCommentsFailed(key))(*)(InfoLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bebc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto InfoLayer::setupPageInfo(gd::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string, char const*>::func(&InfoLayer::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(InfoLayer*, gd::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bec10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto InfoLayer::commentUploadFinished(int parentID) -> decltype(commentUploadFinished(parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InfoLayer::commentUploadFinished), this);
	using FunctionType = decltype(commentUploadFinished(parentID))(*)(InfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bef50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID);
}

auto InfoLayer::commentUploadFailed(int parentID, CommentError errorType) -> decltype(commentUploadFailed(parentID, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, CommentError>::func(&InfoLayer::commentUploadFailed), this);
	using FunctionType = decltype(commentUploadFailed(parentID, errorType))(*)(InfoLayer*, int, CommentError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID, errorType);
}

auto InfoLayer::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bee00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&InfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(InfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bd3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto InfoLayer::confirmReport(cocos2d::CCObject* sender) -> decltype(confirmReport(sender)) {
	using FunctionType = decltype(confirmReport(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bce50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::getSpriteButton(char const* frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position) -> decltype(getSpriteButton(frame, selector, menu, scale, position)) {
	using FunctionType = decltype(getSpriteButton(frame, selector, menu, scale, position))(*)(InfoLayer*, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bc9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, selector, menu, scale, position);
}

auto InfoLayer::init(GJGameLevel* level, GJUserScore* score, GJLevelList* list) -> decltype(init(level, score, list)) {
	using FunctionType = decltype(init(level, score, list))(*)(InfoLayer*, GJGameLevel*, GJUserScore*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2baa70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, score, list);
}

auto InfoLayer::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(InfoLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2be220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto InfoLayer::loadPage(int page, bool noSetup) -> decltype(loadPage(page, noSetup)) {
	using FunctionType = decltype(loadPage(page, noSetup))(*)(InfoLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2be350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, noSetup);
}

auto InfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2be190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onComment(cocos2d::CCObject* sender) -> decltype(onComment(sender)) {
	using FunctionType = decltype(onComment(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bd5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onCopyLevelID(cocos2d::CCObject* sender) -> decltype(onCopyLevelID(sender)) {
	using FunctionType = decltype(onCopyLevelID(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bd270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onGetComments(cocos2d::CCObject* sender) -> decltype(onGetComments(sender)) {
	using FunctionType = decltype(onGetComments(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bdba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onLevelInfo(cocos2d::CCObject* sender) -> decltype(onLevelInfo(sender)) {
	using FunctionType = decltype(onLevelInfo(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bdbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onMore(cocos2d::CCObject* sender) -> decltype(onMore(sender)) {
	using FunctionType = decltype(onMore(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bd4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bef30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onOriginal(cocos2d::CCObject* sender) -> decltype(onOriginal(sender)) {
	using FunctionType = decltype(onOriginal(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bd530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bef40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onRefreshComments(cocos2d::CCObject* sender) -> decltype(onRefreshComments(sender)) {
	using FunctionType = decltype(onRefreshComments(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bccf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::reloadWindow() -> decltype(reloadWindow()) {
	using FunctionType = decltype(reloadWindow())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::setupCommentsBrowser(cocos2d::CCArray* comments) -> decltype(setupCommentsBrowser(comments)) {
	using FunctionType = decltype(setupCommentsBrowser(comments))(*)(InfoLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2be8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, comments);
}

auto InfoLayer::setupLevelInfo() -> decltype(setupLevelInfo()) {
	using FunctionType = decltype(setupLevelInfo())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bcaf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::toggleCommentMode(cocos2d::CCObject* sender) -> decltype(toggleCommentMode(sender)) {
	using FunctionType = decltype(toggleCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::toggleExtendedMode(cocos2d::CCObject* sender) -> decltype(toggleExtendedMode(sender)) {
	using FunctionType = decltype(toggleExtendedMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::toggleSmallCommentMode(cocos2d::CCObject* sender) -> decltype(toggleSmallCommentMode(sender)) {
	using FunctionType = decltype(toggleSmallCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::updateCommentModeButtons() -> decltype(updateCommentModeButtons()) {
	using FunctionType = decltype(updateCommentModeButtons())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bf5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
