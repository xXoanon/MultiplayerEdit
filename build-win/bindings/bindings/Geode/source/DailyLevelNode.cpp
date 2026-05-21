
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

auto DailyLevelNode::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&DailyLevelNode::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(DailyLevelNode*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd3160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto DailyLevelNode::init(GJGameLevel* level, DailyLevelPage* page, bool isNew) -> decltype(init(level, page, isNew)) {
	using FunctionType = decltype(init(level, page, isNew))(*)(DailyLevelNode*, GJGameLevel*, DailyLevelPage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd20c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, page, isNew);
}

auto DailyLevelNode::onClaimReward(cocos2d::CCObject* sender) -> decltype(onClaimReward(sender)) {
	using FunctionType = decltype(onClaimReward(sender))(*)(DailyLevelNode*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd2e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DailyLevelNode::onSkipLevel(cocos2d::CCObject* sender) -> decltype(onSkipLevel(sender)) {
	using FunctionType = decltype(onSkipLevel(sender))(*)(DailyLevelNode*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd2f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DailyLevelNode::showSkipButton() -> decltype(showSkipButton()) {
	using FunctionType = decltype(showSkipButton())(*)(DailyLevelNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd2dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
