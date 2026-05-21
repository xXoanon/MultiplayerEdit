
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

auto ShareCommentLayer::create(gd::string title, int charLimit, CommentType type, int ID, gd::string desc) -> decltype(create(title, charLimit, type, ID, desc)) {
	using FunctionType = decltype(create(title, charLimit, type, ID, desc))(*)(gd::string, int, CommentType, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ce10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, charLimit, type, ID, desc);
}

auto ShareCommentLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShareCommentLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShareCommentLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShareCommentLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShareCommentLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ShareCommentLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(ShareCommentLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ShareCommentLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ShareCommentLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(ShareCommentLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ShareCommentLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ShareCommentLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(ShareCommentLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ea30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ShareCommentLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ShareCommentLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(ShareCommentLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48eac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ShareCommentLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&ShareCommentLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(ShareCommentLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48eb70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto ShareCommentLayer::init(gd::string title, int charLimit, CommentType type, int ID, gd::string desc) -> decltype(init(title, charLimit, type, ID, desc)) {
	using FunctionType = decltype(init(title, charLimit, type, ID, desc))(*)(ShareCommentLayer*, gd::string, int, CommentType, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48d020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title, charLimit, type, ID, desc);
}

auto ShareCommentLayer::onClear(cocos2d::CCObject* sender) -> decltype(onClear(sender)) {
	using FunctionType = decltype(onClear(sender))(*)(ShareCommentLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareCommentLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ShareCommentLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareCommentLayer::onPercent(cocos2d::CCObject* sender) -> decltype(onPercent(sender)) {
	using FunctionType = decltype(onPercent(sender))(*)(ShareCommentLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareCommentLayer::onShare(cocos2d::CCObject* sender) -> decltype(onShare(sender)) {
	using FunctionType = decltype(onShare(sender))(*)(ShareCommentLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareCommentLayer::updateDescText(gd::string desc) -> decltype(updateDescText(desc)) {
	using FunctionType = decltype(updateDescText(desc))(*)(ShareCommentLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, desc);
}

auto ShareCommentLayer::updatePercentLabel() -> decltype(updatePercentLabel()) {
	using FunctionType = decltype(updatePercentLabel())(*)(ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48e190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
