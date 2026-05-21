
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

auto RateStarsLayer::create(int levelID, bool platformer, bool moderator) -> decltype(create(levelID, platformer, moderator)) {
	using FunctionType = decltype(create(levelID, platformer, moderator))(*)(int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(levelID, platformer, moderator);
}

auto RateStarsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RateStarsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(RateStarsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3caef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RateStarsLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&RateStarsLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(RateStarsLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cacf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto RateStarsLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&RateStarsLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(RateStarsLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cad70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto RateStarsLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&RateStarsLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(RateStarsLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cae30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto RateStarsLayer::init(int levelID, bool platformer, bool moderator) -> decltype(init(levelID, platformer, moderator)) {
	using FunctionType = decltype(init(levelID, platformer, moderator))(*)(RateStarsLayer*, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, platformer, moderator);
}

auto RateStarsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(RateStarsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3caeb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RateStarsLayer::onFeature(cocos2d::CCObject* sender) -> decltype(onFeature(sender)) {
	using FunctionType = decltype(onFeature(sender))(*)(RateStarsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RateStarsLayer::onRate(cocos2d::CCObject* sender) -> decltype(onRate(sender)) {
	using FunctionType = decltype(onRate(sender))(*)(RateStarsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cab00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RateStarsLayer::selectRating(cocos2d::CCObject* sender) -> decltype(selectRating(sender)) {
	using FunctionType = decltype(selectRating(sender))(*)(RateStarsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
