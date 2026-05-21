
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

auto DailyLevelPage::create(GJTimedLevelType type) -> decltype(create(type)) {
	using FunctionType = decltype(create(type))(*)(GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xce400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto DailyLevelPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DailyLevelPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DailyLevelPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DailyLevelPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x869d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DailyLevelPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DailyLevelPage::show), this);
	using FunctionType = decltype(show())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x867f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DailyLevelPage::dailyStatusFinished(GJTimedLevelType type) -> decltype(dailyStatusFinished(type)) {
	auto self = addresser::thunkAdjust(Resolve<GJTimedLevelType>::func(&DailyLevelPage::dailyStatusFinished), this);
	using FunctionType = decltype(dailyStatusFinished(type))(*)(DailyLevelPage*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcf990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto DailyLevelPage::dailyStatusFailed(GJTimedLevelType type, GJErrorCode errorType) -> decltype(dailyStatusFailed(type, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<GJTimedLevelType, GJErrorCode>::func(&DailyLevelPage::dailyStatusFailed), this);
	using FunctionType = decltype(dailyStatusFailed(type, errorType))(*)(DailyLevelPage*, GJTimedLevelType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcfc90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type, errorType);
}

auto DailyLevelPage::levelDownloadFinished(GJGameLevel* level) -> decltype(levelDownloadFinished(level)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&DailyLevelPage::levelDownloadFinished), this);
	using FunctionType = decltype(levelDownloadFinished(level))(*)(DailyLevelPage*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcffc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, level);
}

auto DailyLevelPage::levelDownloadFailed(int response) -> decltype(levelDownloadFailed(response)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&DailyLevelPage::levelDownloadFailed), this);
	using FunctionType = decltype(levelDownloadFailed(response))(*)(DailyLevelPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd0020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, response);
}

auto DailyLevelPage::claimLevelReward(DailyLevelNode* node, GJGameLevel* level, cocos2d::CCPoint position) -> decltype(claimLevelReward(node, level, position)) {
	using FunctionType = decltype(claimLevelReward(node, level, position))(*)(DailyLevelPage*, DailyLevelNode*, GJGameLevel*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd1ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, node, level, position);
}

auto DailyLevelPage::createDailyNode(GJGameLevel* level, bool instant, float delay, bool isNew) -> decltype(createDailyNode(level, instant, delay, isNew)) {
	using FunctionType = decltype(createDailyNode(level, instant, delay, isNew))(*)(DailyLevelPage*, GJGameLevel*, bool, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd0270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, instant, delay, isNew);
}

auto DailyLevelPage::createNodeIfLoaded() -> decltype(createNodeIfLoaded()) {
	using FunctionType = decltype(createNodeIfLoaded())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd0180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DailyLevelPage::downloadAndCreateNode() -> decltype(downloadAndCreateNode()) {
	using FunctionType = decltype(downloadAndCreateNode())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd00d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DailyLevelPage::exitDailyNode(DailyLevelNode* node, float delay) -> decltype(exitDailyNode(node, delay)) {
	using FunctionType = decltype(exitDailyNode(node, delay))(*)(DailyLevelPage*, DailyLevelNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd0560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, node, delay);
}

auto DailyLevelPage::getDailyTimeString(int timeLeft) -> decltype(getDailyTimeString(timeLeft)) {
	using FunctionType = decltype(getDailyTimeString(timeLeft))(*)(DailyLevelPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd0630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, timeLeft);
}

auto DailyLevelPage::init(GJTimedLevelType type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(DailyLevelPage*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xce540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto DailyLevelPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(DailyLevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DailyLevelPage::onTheSafe(cocos2d::CCObject* sender) -> decltype(onTheSafe(sender)) {
	using FunctionType = decltype(onTheSafe(sender))(*)(DailyLevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd1fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DailyLevelPage::skipDailyLevel(DailyLevelNode* node, GJGameLevel* level) -> decltype(skipDailyLevel(node, level)) {
	using FunctionType = decltype(skipDailyLevel(node, level))(*)(DailyLevelPage*, DailyLevelNode*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd1db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, node, level);
}

auto DailyLevelPage::tryGetDailyStatus() -> decltype(tryGetDailyStatus()) {
	using FunctionType = decltype(tryGetDailyStatus())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd0040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DailyLevelPage::updateTimers(float dt) -> decltype(updateTimers(dt)) {
	using FunctionType = decltype(updateTimers(dt))(*)(DailyLevelPage*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd1790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
