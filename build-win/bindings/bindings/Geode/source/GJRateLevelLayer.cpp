
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

auto GJRateLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRateLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJRateLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRateLevelLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateLevelLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28f250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateLevelLayer::onCustomButton(cocos2d::CCObject* sender) -> decltype(onCustomButton(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateLevelLayer::onCustomButton), this);
	using FunctionType = decltype(onCustomButton(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f54d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateLevelLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(GJRateLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRateLevelLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(GJRateLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRateLevelLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJRateLevelLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(GJRateLevelLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJRateLevelLayer::rateInfoFinished(int id, gd::string info) -> decltype(rateInfoFinished(id, info)) {
	auto self = addresser::thunkAdjust(Resolve<int, gd::string>::func(&GJRateLevelLayer::rateInfoFinished), this);
	using FunctionType = decltype(rateInfoFinished(id, info))(*)(GJRateLevelLayer*, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, info);
}

auto GJRateLevelLayer::rateInfoFailed(int id, int response) -> decltype(rateInfoFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelLayer::rateInfoFailed), this);
	using FunctionType = decltype(rateInfoFailed(id, response))(*)(GJRateLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRateLevelLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJRateLevelLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJRateLevelLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f5750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJRateLevelLayer::createStatPillar(int width, int height, int count, cocos2d::ccColor3B innerColor, cocos2d::ccColor3B outerColor, cocos2d::CCPoint position, gd::string text) -> decltype(createStatPillar(width, height, count, innerColor, outerColor, position, text)) {
	using FunctionType = decltype(createStatPillar(width, height, count, innerColor, outerColor, position, text))(*)(GJRateLevelLayer*, int, int, int, cocos2d::ccColor3B, cocos2d::ccColor3B, cocos2d::CCPoint, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, width, height, count, innerColor, outerColor, position, text);
}

auto GJRateLevelLayer::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(GJRateLevelLayer*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f4920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJRateLevelLayer::onFeature(cocos2d::CCObject* sender) -> decltype(onFeature(sender)) {
	using FunctionType = decltype(onFeature(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f5920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRateLevelLayer::onRate(cocos2d::CCObject* sender) -> decltype(onRate(sender)) {
	using FunctionType = decltype(onRate(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRateLevelLayer::onToggleCoins(cocos2d::CCObject* sender) -> decltype(onToggleCoins(sender)) {
	using FunctionType = decltype(onToggleCoins(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f58b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRateLevelLayer::selectRating(cocos2d::CCObject* sender) -> decltype(selectRating(sender)) {
	using FunctionType = decltype(selectRating(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f68c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRateLevelLayer::setupRateInfo(gd::string info) -> decltype(setupRateInfo(info)) {
	using FunctionType = decltype(setupRateInfo(info))(*)(GJRateLevelLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f5980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, info);
}
