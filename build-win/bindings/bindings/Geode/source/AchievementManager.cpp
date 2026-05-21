
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

auto AchievementManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto AchievementManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AchievementManager::init), this);
	using FunctionType = decltype(init())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AchievementManager::achievementForUnlock(int id, UnlockType type) -> decltype(achievementForUnlock(id, type)) {
	using FunctionType = decltype(achievementForUnlock(id, type))(*)(AchievementManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto AchievementManager::addAchievement(gd::string identifier, gd::string title, gd::string achievedDescription, gd::string unachievedDescription, gd::string icon, int limits) -> decltype(addAchievement(identifier, title, achievedDescription, unachievedDescription, icon, limits)) {
	using FunctionType = decltype(addAchievement(identifier, title, achievedDescription, unachievedDescription, icon, limits))(*)(AchievementManager*, gd::string, gd::string, gd::string, gd::string, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, identifier, title, achievedDescription, unachievedDescription, icon, limits);
}

auto AchievementManager::addManualAchievements() -> decltype(addManualAchievements()) {
	using FunctionType = decltype(addManualAchievements())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::getAchievementsWithID(char const* id) -> decltype(getAchievementsWithID(id)) {
	using FunctionType = decltype(getAchievementsWithID(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::getAllAchievementsSorted(bool available) -> decltype(getAllAchievementsSorted(available)) {
	using FunctionType = decltype(getAllAchievementsSorted(available))(*)(AchievementManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, available);
}

auto AchievementManager::isAchievementEarned(char const* ach) -> decltype(isAchievementEarned(ach)) {
	using FunctionType = decltype(isAchievementEarned(ach))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, ach);
}

auto AchievementManager::notifyAchievementWithID(char const* id) -> decltype(notifyAchievementWithID(id)) {
	using FunctionType = decltype(notifyAchievementWithID(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::percentForAchievement(char const* id) -> decltype(percentForAchievement(id)) {
	using FunctionType = decltype(percentForAchievement(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::storeAchievementUnlocks() -> decltype(storeAchievementUnlocks()) {
	using FunctionType = decltype(storeAchievementUnlocks())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
