
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

auto GJRequestCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRequestCell::init), this);
	using FunctionType = decltype(init())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRequestCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRequestCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xade20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRequestCell::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJRequestCell::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJRequestCell*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcf10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJRequestCell::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRequestCell::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(GJRequestCell*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd0c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRequestCell::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRequestCell::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(GJRequestCell*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRequestCell::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJRequestCell::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(GJRequestCell*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc1b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJRequestCell::loadFromScore(GJUserScore* score) -> decltype(loadFromScore(score)) {
	using FunctionType = decltype(loadFromScore(score))(*)(GJRequestCell*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, score);
}

auto GJRequestCell::markAsRead() -> decltype(markAsRead()) {
	using FunctionType = decltype(markAsRead())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcc70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJRequestCell::onDeleteRequest(cocos2d::CCObject* sender) -> decltype(onDeleteRequest(sender)) {
	using FunctionType = decltype(onDeleteRequest(sender))(*)(GJRequestCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRequestCell::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(GJRequestCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRequestCell::onViewFriendRequest(cocos2d::CCObject* sender) -> decltype(onViewFriendRequest(sender)) {
	using FunctionType = decltype(onViewFriendRequest(sender))(*)(GJRequestCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcbc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRequestCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(GJRequestCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbb500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
