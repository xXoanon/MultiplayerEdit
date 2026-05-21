
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

auto GameStatsManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameStatsManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameStatsManager::init), this);
	using FunctionType = decltype(init())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameStatsManager::addSimpleSpecialChestReward(gd::string key, UnlockType type, int id, bool unused) -> decltype(addSimpleSpecialChestReward(key, type, id, unused)) {
	using FunctionType = decltype(addSimpleSpecialChestReward(key, type, id, unused))(*)(GameStatsManager*, gd::string, UnlockType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, type, id, unused);
}

auto GameStatsManager::addSpecialRewardDescription(gd::string key, gd::string description) -> decltype(addSpecialRewardDescription(key, description)) {
	using FunctionType = decltype(addSpecialRewardDescription(key, description))(*)(GameStatsManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea2b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, description);
}

auto GameStatsManager::addStoreItem(int index, int id, int unlockType, int price, ShopType shopType) -> decltype(addStoreItem(index, id, unlockType, price, shopType)) {
	using FunctionType = decltype(addStoreItem(index, id, unlockType, price, shopType))(*)(GameStatsManager*, int, int, int, int, ShopType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d3fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index, id, unlockType, price, shopType);
}

auto GameStatsManager::awardCurrencyForLevel(GJGameLevel* level) -> decltype(awardCurrencyForLevel(level)) {
	using FunctionType = decltype(awardCurrencyForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e0960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::awardDiamondsForLevel(GJGameLevel* level) -> decltype(awardDiamondsForLevel(level)) {
	using FunctionType = decltype(awardDiamondsForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::awardSecretKey() -> decltype(awardSecretKey()) {
	using FunctionType = decltype(awardSecretKey())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f19f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::checkAchievement(char const* statKey) -> decltype(checkAchievement(statKey)) {
	using FunctionType = decltype(checkAchievement(statKey))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d5440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, statKey);
}

auto GameStatsManager::checkCoinAchievement(GJGameLevel* level) -> decltype(checkCoinAchievement(level)) {
	using FunctionType = decltype(checkCoinAchievement(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dd800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::completedDailyLevel(GJGameLevel* level) -> decltype(completedDailyLevel(level)) {
	using FunctionType = decltype(completedDailyLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e2de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::completedDemonLevel(GJGameLevel* level) -> decltype(completedDemonLevel(level)) {
	using FunctionType = decltype(completedDemonLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::completedLevel(GJGameLevel* level) -> decltype(completedLevel(level)) {
	using FunctionType = decltype(completedLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::completedMapPack(GJMapPack* pack) -> decltype(completedMapPack(pack)) {
	using FunctionType = decltype(completedMapPack(pack))(*)(GameStatsManager*, GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dee00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, pack);
}

auto GameStatsManager::completedStarLevel(GJGameLevel* level) -> decltype(completedStarLevel(level)) {
	using FunctionType = decltype(completedStarLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::createReward(GJRewardType type, int id, gd::string str) -> decltype(createReward(type, id, str)) {
	using FunctionType = decltype(createReward(type, id, str))(*)(GameStatsManager*, GJRewardType, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e15f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, str);
}

auto GameStatsManager::createSecretChestRewards() -> decltype(createSecretChestRewards()) {
	using FunctionType = decltype(createSecretChestRewards())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eaaf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::createSpecialChestItems() -> decltype(createSpecialChestItems()) {
	using FunctionType = decltype(createSpecialChestItems())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e5c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::createStoreItems() -> decltype(createStoreItems()) {
	using FunctionType = decltype(createStoreItems())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GameStatsManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f24a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameStatsManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameStatsManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f21a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameStatsManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f1ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::generateItemUnlockableData() -> decltype(generateItemUnlockableData()) {
	using FunctionType = decltype(generateItemUnlockableData())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getAwardedCurrencyForLevel(GJGameLevel* level) -> decltype(getAwardedCurrencyForLevel(level)) {
	using FunctionType = decltype(getAwardedCurrencyForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e0720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getAwardedDiamondsForLevel(GJGameLevel* level) -> decltype(getAwardedDiamondsForLevel(level)) {
	using FunctionType = decltype(getAwardedDiamondsForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e0f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getBaseCurrencyForLevel(GJGameLevel* level) -> decltype(getBaseCurrencyForLevel(level)) {
	using FunctionType = decltype(getBaseCurrencyForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e0480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getChallenge(int id) -> decltype(getChallenge(id)) {
	using FunctionType = decltype(getChallenge(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getCollectedCoinsForLevel(GJGameLevel* level) -> decltype(getCollectedCoinsForLevel(level)) {
	using FunctionType = decltype(getCollectedCoinsForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ddba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getCompletedMapPacks() -> decltype(getCompletedMapPacks()) {
	using FunctionType = decltype(getCompletedMapPacks())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1df150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getGauntletRewardKey(int id) -> decltype(getGauntletRewardKey(id)) {
	using FunctionType = decltype(getGauntletRewardKey(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getItemKey(int id, int type) -> decltype(getItemKey(id, type)) {
	using FunctionType = decltype(getItemKey(id, type))(*)(GameStatsManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::getItemUnlockState(int itemID, UnlockType unlockType) -> decltype(getItemUnlockState(itemID, unlockType)) {
	using FunctionType = decltype(getItemUnlockState(itemID, unlockType))(*)(GameStatsManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e5b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, itemID, unlockType);
}

auto GameStatsManager::getLevelKey(int levelID, bool isOnline, bool isDaily, bool isGauntlet, bool isEvent) -> decltype(getLevelKey(levelID, isOnline, isDaily, isGauntlet, isEvent)) {
	using FunctionType = decltype(getLevelKey(levelID, isOnline, isDaily, isGauntlet, isEvent))(*)(GameStatsManager*, int, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ddd20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, isOnline, isDaily, isGauntlet, isEvent);
}

auto GameStatsManager::getPathRewardKey(int id) -> decltype(getPathRewardKey(id)) {
	using FunctionType = decltype(getPathRewardKey(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getQueuedChallenge(int id) -> decltype(getQueuedChallenge(id)) {
	using FunctionType = decltype(getQueuedChallenge(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getRewardKey(GJRewardType type, int id) -> decltype(getRewardKey(type, id)) {
	using FunctionType = decltype(getRewardKey(type, id))(*)(GameStatsManager*, GJRewardType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GameStatsManager::getSecondaryQueuedChallenge(int id) -> decltype(getSecondaryQueuedChallenge(id)) {
	using FunctionType = decltype(getSecondaryQueuedChallenge(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getSpecialUnlockDescription(int id, UnlockType type, bool unused) -> decltype(getSpecialUnlockDescription(id, type, unused)) {
	using FunctionType = decltype(getSpecialUnlockDescription(id, type, unused))(*)(GameStatsManager*, int, UnlockType, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, unused);
}

auto GameStatsManager::getStat(char const* key) -> decltype(getStat(key)) {
	using FunctionType = decltype(getStat(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d51b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::getTotalCollectedCurrency() -> decltype(getTotalCollectedCurrency()) {
	using FunctionType = decltype(getTotalCollectedCurrency())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e3880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getTotalCollectedDiamonds() -> decltype(getTotalCollectedDiamonds()) {
	using FunctionType = decltype(getTotalCollectedDiamonds())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e4150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::hasClaimedListReward(GJLevelList* list) -> decltype(hasClaimedListReward(list)) {
	using FunctionType = decltype(hasClaimedListReward(list))(*)(GameStatsManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e2c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameStatsManager::hasCompletedChallenge(GJChallengeItem* item) -> decltype(hasCompletedChallenge(item)) {
	using FunctionType = decltype(hasCompletedChallenge(item))(*)(GameStatsManager*, GJChallengeItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e2840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto GameStatsManager::hasCompletedDailyLevel(int dailyID) -> decltype(hasCompletedDailyLevel(dailyID)) {
	using FunctionType = decltype(hasCompletedDailyLevel(dailyID))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e2ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dailyID);
}

auto GameStatsManager::hasCompletedGauntletLevel(int id) -> decltype(hasCompletedGauntletLevel(id)) {
	using FunctionType = decltype(hasCompletedGauntletLevel(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::hasCompletedLevel(GJGameLevel* level) -> decltype(hasCompletedLevel(level)) {
	using FunctionType = decltype(hasCompletedLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ddf80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::hasCompletedMainLevel(int levelID) -> decltype(hasCompletedMainLevel(levelID)) {
	using FunctionType = decltype(hasCompletedMainLevel(levelID))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dde50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameStatsManager::hasCompletedMapPack(int id) -> decltype(hasCompletedMapPack(id)) {
	using FunctionType = decltype(hasCompletedMapPack(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1def90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::hasCompletedOnlineLevel(int id) -> decltype(hasCompletedOnlineLevel(id)) {
	using FunctionType = decltype(hasCompletedOnlineLevel(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::hasCompletedStarLevel(GJGameLevel* level) -> decltype(hasCompletedStarLevel(level)) {
	using FunctionType = decltype(hasCompletedStarLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::hasPendingUserCoin(char const* key) -> decltype(hasPendingUserCoin(key)) {
	using FunctionType = decltype(hasPendingUserCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dfe60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::hasRewardBeenCollected(GJRewardType type, int id) -> decltype(hasRewardBeenCollected(type, id)) {
	using FunctionType = decltype(hasRewardBeenCollected(type, id))(*)(GameStatsManager*, GJRewardType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GameStatsManager::hasSecretCoin(char const* key) -> decltype(hasSecretCoin(key)) {
	using FunctionType = decltype(hasSecretCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dff20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::hasUserCoin(char const* key) -> decltype(hasUserCoin(key)) {
	using FunctionType = decltype(hasUserCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dfce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::incrementChallenge(GJChallengeType type, int amount) -> decltype(incrementChallenge(type, amount)) {
	using FunctionType = decltype(incrementChallenge(type, amount))(*)(GameStatsManager*, GJChallengeType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e20c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, amount);
}

auto GameStatsManager::incrementStat(char const* key, int amount) -> decltype(incrementStat(key, amount)) {
	using FunctionType = decltype(incrementStat(key, amount))(*)(GameStatsManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d44d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, amount);
}

auto GameStatsManager::isItemUnlocked(UnlockType type, int id) -> decltype(isItemUnlocked(type, id)) {
	using FunctionType = decltype(isItemUnlocked(type, id))(*)(GameStatsManager*, UnlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e5820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GameStatsManager::isSecretChestUnlocked(int id) -> decltype(isSecretChestUnlocked(id)) {
	using FunctionType = decltype(isSecretChestUnlocked(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::isSecretCoinValid(gd::string key) -> decltype(isSecretCoinValid(key)) {
	using FunctionType = decltype(isSecretCoinValid(key))(*)(GameStatsManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e00c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::isSpecialChestUnlocked(gd::string key) -> decltype(isSpecialChestUnlocked(key)) {
	using FunctionType = decltype(isSpecialChestUnlocked(key))(*)(GameStatsManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::isStoreItemUnlocked(int index) -> decltype(isStoreItemUnlocked(index)) {
	using FunctionType = decltype(isStoreItemUnlocked(index))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d41e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameStatsManager::linkSpecialChestUnlocks(GJRewardItem* item, gd::string key) -> decltype(linkSpecialChestUnlocks(item, key)) {
	using FunctionType = decltype(linkSpecialChestUnlocks(item, key))(*)(GameStatsManager*, GJRewardItem*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e9f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, item, key);
}

auto GameStatsManager::markLevelAsCompletedAndClaimed(GJGameLevel* level) -> decltype(markLevelAsCompletedAndClaimed(level)) {
	using FunctionType = decltype(markLevelAsCompletedAndClaimed(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::postLoadGameStats() -> decltype(postLoadGameStats()) {
	using FunctionType = decltype(postLoadGameStats())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::preProcessReward(GJRewardItem* item) -> decltype(preProcessReward(item)) {
	using FunctionType = decltype(preProcessReward(item))(*)(GameStatsManager*, GJRewardItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto GameStatsManager::preSaveGameStats() -> decltype(preSaveGameStats()) {
	using FunctionType = decltype(preSaveGameStats())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::processChallengeQueue(int position) -> decltype(processChallengeQueue(position)) {
	using FunctionType = decltype(processChallengeQueue(position))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e2920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GameStatsManager::processOnlineChests() -> decltype(processOnlineChests()) {
	using FunctionType = decltype(processOnlineChests())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f35f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::purchaseItem(int index) -> decltype(purchaseItem(index)) {
	using FunctionType = decltype(purchaseItem(index))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d42b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameStatsManager::recountSpecialStats() -> decltype(recountSpecialStats()) {
	using FunctionType = decltype(recountSpecialStats())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e4450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::recountUserCoins(bool force) -> decltype(recountUserCoins(force)) {
	using FunctionType = decltype(recountUserCoins(force))(*)(GameStatsManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1df3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, force);
}

auto GameStatsManager::registerRewardsFromItem(GJRewardItem* item) -> decltype(registerRewardsFromItem(item)) {
	using FunctionType = decltype(registerRewardsFromItem(item))(*)(GameStatsManager*, GJRewardItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f1500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto GameStatsManager::removeErrorFromSpecialChests() -> decltype(removeErrorFromSpecialChests()) {
	using FunctionType = decltype(removeErrorFromSpecialChests())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f37e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::resetSpecialStatAchievements() -> decltype(resetSpecialStatAchievements()) {
	using FunctionType = decltype(resetSpecialStatAchievements())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e52b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::setStarsForMapPack(int id, int stars) -> decltype(setStarsForMapPack(id, stars)) {
	using FunctionType = decltype(setStarsForMapPack(id, stars))(*)(GameStatsManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1df060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, stars);
}

auto GameStatsManager::setStat(char const* key, int value) -> decltype(setStat(key, value)) {
	using FunctionType = decltype(setStat(key, value))(*)(GameStatsManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d52d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameStatsManager::setupIconCredits() -> decltype(setupIconCredits()) {
	using FunctionType = decltype(setupIconCredits())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c4110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::storeQueuedChallenge(int position, GJChallengeItem* challenge) -> decltype(storeQueuedChallenge(position, challenge)) {
	using FunctionType = decltype(storeQueuedChallenge(position, challenge))(*)(GameStatsManager*, int, GJChallengeItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e1d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, challenge);
}

auto GameStatsManager::storeRewardState(GJRewardType type, int id, int remaining, gd::string str) -> decltype(storeRewardState(type, id, remaining, str)) {
	using FunctionType = decltype(storeRewardState(type, id, remaining, str))(*)(GameStatsManager*, GJRewardType, int, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e18e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, remaining, str);
}

auto GameStatsManager::storeSecretCoin(char const* key) -> decltype(storeSecretCoin(key)) {
	using FunctionType = decltype(storeSecretCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dfff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::storeUserCoin(char const* key) -> decltype(storeUserCoin(key)) {
	using FunctionType = decltype(storeUserCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dfda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::toggleEnableItem(UnlockType type, int id, bool enabled) -> decltype(toggleEnableItem(type, id, enabled)) {
	using FunctionType = decltype(toggleEnableItem(type, id, enabled))(*)(GameStatsManager*, UnlockType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e5bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, enabled);
}

auto GameStatsManager::tryFixPathBug() -> decltype(tryFixPathBug()) {
	using FunctionType = decltype(tryFixPathBug())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d47e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::trySelectActivePath() -> decltype(trySelectActivePath()) {
	using FunctionType = decltype(trySelectActivePath())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d4660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::uncompleteLevel(GJGameLevel* level) -> decltype(uncompleteLevel(level)) {
	using FunctionType = decltype(uncompleteLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1deb90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::unlockOnlineChest(gd::string key) -> decltype(unlockOnlineChest(key)) {
	using FunctionType = decltype(unlockOnlineChest(key))(*)(GameStatsManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::unlockSecretChest(int id) -> decltype(unlockSecretChest(id)) {
	using FunctionType = decltype(unlockSecretChest(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::unlockSpecialChest(gd::string key) -> decltype(unlockSpecialChest(key)) {
	using FunctionType = decltype(unlockSpecialChest(key))(*)(GameStatsManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ea5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::verifyPathAchievements() -> decltype(verifyPathAchievements()) {
	using FunctionType = decltype(verifyPathAchievements())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d4f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::verifyUserCoins() -> decltype(verifyUserCoins()) {
	using FunctionType = decltype(verifyUserCoins())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dfc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
