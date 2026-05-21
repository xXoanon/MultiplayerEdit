
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

auto ChallengesPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ChallengesPage::init), this);
	using FunctionType = decltype(init())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ChallengesPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ChallengesPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ChallengesPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ChallengesPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x869d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ChallengesPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ChallengesPage::show), this);
	using FunctionType = decltype(show())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x867f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ChallengesPage::challengeStatusFinished() -> decltype(challengeStatusFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ChallengesPage::challengeStatusFinished), this);
	using FunctionType = decltype(challengeStatusFinished())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ChallengesPage::challengeStatusFailed() -> decltype(challengeStatusFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ChallengesPage::challengeStatusFailed), this);
	using FunctionType = decltype(challengeStatusFailed())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ChallengesPage::currencyWillExit(CurrencyRewardLayer* layer) -> decltype(currencyWillExit(layer)) {
	auto self = addresser::thunkAdjust(Resolve<CurrencyRewardLayer*>::func(&ChallengesPage::currencyWillExit), this);
	using FunctionType = decltype(currencyWillExit(layer))(*)(ChallengesPage*, CurrencyRewardLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto ChallengesPage::claimItem(ChallengeNode* node, GJChallengeItem* item, cocos2d::CCPoint position) -> decltype(claimItem(node, item, position)) {
	using FunctionType = decltype(claimItem(node, item, position))(*)(ChallengesPage*, ChallengeNode*, GJChallengeItem*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, node, item, position);
}

auto ChallengesPage::createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew) -> decltype(createChallengeNode(number, skipAnimation, animLength, isNew)) {
	using FunctionType = decltype(createChallengeNode(number, skipAnimation, animLength, isNew))(*)(ChallengesPage*, int, bool, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x860e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, number, skipAnimation, animLength, isNew);
}

auto ChallengesPage::exitNodeAtSlot(int position, float delay) -> decltype(exitNodeAtSlot(position, delay)) {
	using FunctionType = decltype(exitNodeAtSlot(position, delay))(*)(ChallengesPage*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, delay);
}

auto ChallengesPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ChallengesPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ChallengesPage::tryGetChallenges() -> decltype(tryGetChallenges()) {
	using FunctionType = decltype(tryGetChallenges())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ChallengesPage::updateDots() -> decltype(updateDots()) {
	using FunctionType = decltype(updateDots())(*)(ChallengesPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ChallengesPage::updateTimers(float dt) -> decltype(updateTimers(dt)) {
	using FunctionType = decltype(updateTimers(dt))(*)(ChallengesPage*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
