
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

auto GameLevelManager::responseToDict(gd::string response, bool colon) -> decltype(responseToDict(response, colon)) {
	using FunctionType = decltype(responseToDict(response, colon))(*)(gd::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ab90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response, colon);
}

auto GameLevelManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameLevelManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameLevelManager::init), this);
	using FunctionType = decltype(init())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x144290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameLevelManager::acceptFriendRequest(int accountID, int requestID) -> decltype(acceptFriendRequest(accountID, requestID)) {
	using FunctionType = decltype(acceptFriendRequest(accountID, requestID))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x161170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, requestID);
}

auto GameLevelManager::addDLToActive(char const* key) -> decltype(addDLToActive(key)) {
	using FunctionType = decltype(addDLToActive(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::blockUser(int accountID) -> decltype(blockUser(accountID)) {
	using FunctionType = decltype(blockUser(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x161f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::cleanupDailyLevels() -> decltype(cleanupDailyLevels()) {
	using FunctionType = decltype(cleanupDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14a6e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createAndGetCommentsFull(gd::string str, int parentID, bool account) -> decltype(createAndGetCommentsFull(str, parentID, account)) {
	using FunctionType = decltype(createAndGetCommentsFull(str, parentID, account))(*)(GameLevelManager*, gd::string, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15cfe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, parentID, account);
}

auto GameLevelManager::createAndGetLevelLists(gd::string str) -> decltype(createAndGetLevelLists(str)) {
	using FunctionType = decltype(createAndGetLevelLists(str))(*)(GameLevelManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x146c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetLevels(gd::string str) -> decltype(createAndGetLevels(str)) {
	using FunctionType = decltype(createAndGetLevels(str))(*)(GameLevelManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1466f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetMapPacks(gd::string str) -> decltype(createAndGetMapPacks(str)) {
	using FunctionType = decltype(createAndGetMapPacks(str))(*)(GameLevelManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x146ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetScores(gd::string str, GJScoreType type) -> decltype(createAndGetScores(str, type)) {
	using FunctionType = decltype(createAndGetScores(str, type))(*)(GameLevelManager*, gd::string, GJScoreType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, type);
}

auto GameLevelManager::createNewLevel() -> decltype(createNewLevel()) {
	using FunctionType = decltype(createNewLevel())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x144870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createNewLevelList() -> decltype(createNewLevelList()) {
	using FunctionType = decltype(createNewLevelList())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x145320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14b410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::deleteComment(int id, CommentType type, int parentID) -> decltype(deleteComment(id, type, parentID)) {
	using FunctionType = decltype(deleteComment(id, type, parentID))(*)(GameLevelManager*, int, CommentType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15f070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, parentID);
}

auto GameLevelManager::deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent) -> decltype(deleteFriendRequests(accountID, accounts, sent)) {
	using FunctionType = decltype(deleteFriendRequests(accountID, accounts, sent))(*)(GameLevelManager*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, accounts, sent);
}

auto GameLevelManager::deleteLevel(GJGameLevel* level) -> decltype(deleteLevel(level)) {
	using FunctionType = decltype(deleteLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x145050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::deleteLevelList(GJLevelList* list) -> decltype(deleteLevelList(list)) {
	using FunctionType = decltype(deleteLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x145900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::deleteServerLevel(int id) -> decltype(deleteServerLevel(id)) {
	using FunctionType = decltype(deleteServerLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1544e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::deleteServerLevelList(int id) -> decltype(deleteServerLevelList(id)) {
	using FunctionType = decltype(deleteServerLevelList(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x150420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender) -> decltype(deleteUserMessages(message, messages, isSender)) {
	using FunctionType = decltype(deleteUserMessages(message, messages, isSender))(*)(GameLevelManager*, GJUserMessage*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15b4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, message, messages, isSender);
}

auto GameLevelManager::downloadLevel(int id, bool gauntletLevel, int dailyID) -> decltype(downloadLevel(id, gauntletLevel, dailyID)) {
	using FunctionType = decltype(downloadLevel(id, gauntletLevel, dailyID))(*)(GameLevelManager*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x151e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, gauntletLevel, dailyID);
}

auto GameLevelManager::downloadUserMessage(int id, bool sent) -> decltype(downloadUserMessage(id, sent)) {
	using FunctionType = decltype(downloadUserMessage(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15aa80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14af00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14ab40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::friendRequestWasRemoved(int accountID, bool sent) -> decltype(friendRequestWasRemoved(accountID, sent)) {
	using FunctionType = decltype(friendRequestWasRemoved(accountID, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1633a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, sent);
}

auto GameLevelManager::getAccountComments(int accountID, int page, int total) -> decltype(getAccountComments(accountID, page, total)) {
	using FunctionType = decltype(getAccountComments(accountID, page, total))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, page, total);
}

auto GameLevelManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14c5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedDailyLevels() -> decltype(getCompletedDailyLevels()) {
	using FunctionType = decltype(getCompletedDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x148700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedEventLevels(int minStars, int maxStars) -> decltype(getCompletedEventLevels(minStars, maxStars)) {
	using FunctionType = decltype(getCompletedEventLevels(minStars, maxStars))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x148900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, minStars, maxStars);
}

auto GameLevelManager::getCompletedLevels(bool useOrbCompletion) -> decltype(getCompletedLevels(useOrbCompletion)) {
	using FunctionType = decltype(getCompletedLevels(useOrbCompletion))(*)(GameLevelManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1478a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, useOrbCompletion);
}

auto GameLevelManager::getCompletedWeeklyLevels() -> decltype(getCompletedWeeklyLevels()) {
	using FunctionType = decltype(getCompletedWeeklyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1484f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDemonLevelsString() -> decltype(getDemonLevelsString()) {
	using FunctionType = decltype(getDemonLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto) -> decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto)) {
	using FunctionType = decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14d4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto);
}

auto GameLevelManager::getFolderName(int id, bool local) -> decltype(getFolderName(id, local)) {
	using FunctionType = decltype(getFolderName(id, local))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14aa10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, local);
}

auto GameLevelManager::getFriendRequests(bool sent, int page, int total) -> decltype(getFriendRequests(sent, page, total)) {
	using FunctionType = decltype(getFriendRequests(sent, page, total))(*)(GameLevelManager*, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15fcc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent, page, total);
}

auto GameLevelManager::getGauntletLevels(int id) -> decltype(getGauntletLevels(id)) {
	using FunctionType = decltype(getGauntletLevels(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x151ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getGauntlets() -> decltype(getGauntlets()) {
	using FunctionType = decltype(getGauntlets())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x151200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJChallenges() -> decltype(getGJChallenges()) {
	using FunctionType = decltype(getGJChallenges())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJDailyLevelState(GJTimedLevelType type) -> decltype(getGJDailyLevelState(type)) {
	using FunctionType = decltype(getGJDailyLevelState(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x168910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getGJRewards(int type) -> decltype(getGJRewards(type)) {
	using FunctionType = decltype(getGJRewards(type))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x166020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getGJSecretReward(gd::string key) -> decltype(getGJSecretReward(key)) {
	using FunctionType = decltype(getGJSecretReward(key))(*)(GameLevelManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getGJUserInfo(int id) -> decltype(getGJUserInfo(id)) {
	using FunctionType = decltype(getGJUserInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getLeaderboardScores(LeaderboardType type, LeaderboardStat stat) -> decltype(getLeaderboardScores(type, stat)) {
	using FunctionType = decltype(getLeaderboardScores(type, stat))(*)(GameLevelManager*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x157980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto GameLevelManager::getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat) -> decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat)) {
	using FunctionType = decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14d760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, isTiny, isShort, isMedium, isLong, isXL, isPlat);
}

auto GameLevelManager::getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype) -> decltype(getLevelComments(ID, page, total, mode, keytype)) {
	using FunctionType = decltype(getLevelComments(ID, page, total, mode, keytype))(*)(GameLevelManager*, int, int, int, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15be00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, ID, page, total, mode, keytype);
}

auto GameLevelManager::getLevelLeaderboard(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(getLevelLeaderboard(level, type, mode)) {
	using FunctionType = decltype(getLevelLeaderboard(level, type, mode))(*)(GameLevelManager*, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x158040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, type, mode);
}

auto GameLevelManager::getLevelLists(GJSearchObject* object) -> decltype(getLevelLists(object)) {
	using FunctionType = decltype(getLevelLists(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x150760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getLevelRateInfo(int id) -> decltype(getLevelRateInfo(id)) {
	using FunctionType = decltype(getLevelRateInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15f860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getLevelSaveData() -> decltype(getLevelSaveData()) {
	using FunctionType = decltype(getLevelSaveData())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14edc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getLocalLevel(int uniqueID) -> decltype(getLocalLevel(uniqueID)) {
	using FunctionType = decltype(getLocalLevel(uniqueID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x144800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID);
}

auto GameLevelManager::getLocalLevelList(int uniqueID) -> decltype(getLocalLevelList(uniqueID)) {
	using FunctionType = decltype(getLocalLevelList(uniqueID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1452b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID);
}

auto GameLevelManager::getMainLevel(int levelID, bool dontGetLevelString) -> decltype(getMainLevel(levelID, dontGetLevelString)) {
	using FunctionType = decltype(getMainLevel(levelID, dontGetLevelString))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x144450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, dontGetLevelString);
}

auto GameLevelManager::getMapPacks(GJSearchObject* object) -> decltype(getMapPacks(object)) {
	using FunctionType = decltype(getMapPacks(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getNextLevelName(gd::string name) -> decltype(getNextLevelName(name)) {
	using FunctionType = decltype(getNextLevelName(name))(*)(GameLevelManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x144b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto GameLevelManager::getOnlineLevels(GJSearchObject* object) -> decltype(getOnlineLevels(object)) {
	using FunctionType = decltype(getOnlineLevels(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14dc70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getPageInfo(char const* key) -> decltype(getPageInfo(key)) {
	using FunctionType = decltype(getPageInfo(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getSavedDailyLevel(int dailyID) -> decltype(getSavedDailyLevel(dailyID)) {
	using FunctionType = decltype(getSavedDailyLevel(dailyID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x148be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dailyID);
}

auto GameLevelManager::getSavedGauntletLevel(int id) -> decltype(getSavedGauntletLevel(id)) {
	using FunctionType = decltype(getSavedGauntletLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x148cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevel(int id) -> decltype(getSavedLevel(id)) {
	using FunctionType = decltype(getSavedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x148b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevelLists(int folder) -> decltype(getSavedLevelLists(folder)) {
	using FunctionType = decltype(getSavedLevelLists(folder))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, folder);
}

auto GameLevelManager::getSavedLevels(bool favorite, int folder) -> decltype(getSavedLevels(favorite, folder)) {
	using FunctionType = decltype(getSavedLevels(favorite, folder))(*)(GameLevelManager*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, favorite, folder);
}

auto GameLevelManager::getSplitIntFromKey(char const* key, int index) -> decltype(getSplitIntFromKey(key, index)) {
	using FunctionType = decltype(getSplitIntFromKey(key, index))(*)(GameLevelManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, index);
}

auto GameLevelManager::getStarLevelsString() -> decltype(getStarLevelsString()) {
	using FunctionType = decltype(getStarLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getStoredLevelComments(char const* key) -> decltype(getStoredLevelComments(key)) {
	using FunctionType = decltype(getStoredLevelComments(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getStoredOnlineLevels(char const* key) -> decltype(getStoredOnlineLevels(key)) {
	using FunctionType = decltype(getStoredOnlineLevels(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getStoredUserList(UserListType type) -> decltype(getStoredUserList(type)) {
	using FunctionType = decltype(getStoredUserList(type))(*)(GameLevelManager*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1630a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getTimeLeft(char const* key, float length) -> decltype(getTimeLeft(key, length)) {
	using FunctionType = decltype(getTimeLeft(key, length))(*)(GameLevelManager*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, length);
}

auto GameLevelManager::getTopArtists(int page, int total) -> decltype(getTopArtists(page, total)) {
	using FunctionType = decltype(getTopArtists(page, total))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x158fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, total);
}

auto GameLevelManager::getUserList(UserListType type) -> decltype(getUserList(type)) {
	using FunctionType = decltype(getUserList(type))(*)(GameLevelManager*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x162990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getUserMessages(bool sent, int page, int total) -> decltype(getUserMessages(sent, page, total)) {
	using FunctionType = decltype(getUserMessages(sent, page, total))(*)(GameLevelManager*, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15a1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent, page, total);
}

auto GameLevelManager::getUsers(GJSearchObject* object) -> decltype(getUsers(object)) {
	using FunctionType = decltype(getUsers(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::gotoLevelPage(GJGameLevel* level) -> decltype(gotoLevelPage(level)) {
	using FunctionType = decltype(gotoLevelPage(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1494c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::handleIt(bool success, gd::string response, gd::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GameLevelManager*, bool, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GameLevelManager::hasDownloadedLevel(int id) -> decltype(hasDownloadedLevel(id)) {
	using FunctionType = decltype(hasDownloadedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1537b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasLikedAccountItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedAccountItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedAccountItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItemFullCheck(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedItemFullCheck(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedItemFullCheck(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasRatedDemon(int id) -> decltype(hasRatedDemon(id)) {
	using FunctionType = decltype(hasRatedDemon(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasRatedLevelStars(int id) -> decltype(hasRatedLevelStars(id)) {
	using FunctionType = decltype(hasRatedLevelStars(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasReportedLevel(int id) -> decltype(hasReportedLevel(id)) {
	using FunctionType = decltype(hasReportedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::invalidateMessages(bool sent, bool reload) -> decltype(invalidateMessages(sent, reload)) {
	using FunctionType = decltype(invalidateMessages(sent, reload))(*)(GameLevelManager*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15bcb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent, reload);
}

auto GameLevelManager::invalidateRequests(bool sent, bool reload) -> decltype(invalidateRequests(sent, reload)) {
	using FunctionType = decltype(invalidateRequests(sent, reload))(*)(GameLevelManager*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent, reload);
}

auto GameLevelManager::isDLActive(char const* tag) -> decltype(isDLActive(tag)) {
	using FunctionType = decltype(isDLActive(tag))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GameLevelManager::isFollowingUser(int id) -> decltype(isFollowingUser(id)) {
	using FunctionType = decltype(isFollowingUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14a940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::isTimeValid(char const* key, float length) -> decltype(isTimeValid(key, length)) {
	using FunctionType = decltype(isTimeValid(key, length))(*)(GameLevelManager*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, length);
}

auto GameLevelManager::keyHasTimer(char const* key) -> decltype(keyHasTimer(key)) {
	using FunctionType = decltype(keyHasTimer(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14a020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::levelIDFromCommentKey(char const* key) -> decltype(levelIDFromCommentKey(key)) {
	using FunctionType = decltype(levelIDFromCommentKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::likeItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(likeItem(type, id, liked, parentID)) {
	using FunctionType = decltype(likeItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::limitSavedLevels() -> decltype(limitSavedLevels()) {
	using FunctionType = decltype(limitSavedLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14a190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::makeTimeStamp(char const* key) -> decltype(makeTimeStamp(key)) {
	using FunctionType = decltype(makeTimeStamp(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::markItemAsLiked(LikeItemType type, int id, bool liked, int parentID) -> decltype(markItemAsLiked(type, id, liked, parentID)) {
	using FunctionType = decltype(markItemAsLiked(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::markLevelAsDownloaded(int id) -> decltype(markLevelAsDownloaded(id)) {
	using FunctionType = decltype(markLevelAsDownloaded(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::messageWasRemoved(int id, bool sent) -> decltype(messageWasRemoved(id, sent)) {
	using FunctionType = decltype(messageWasRemoved(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::onAcceptFriendRequestCompleted(gd::string response, gd::string tag) -> decltype(onAcceptFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onAcceptFriendRequestCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x161490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onBanUserCompleted(gd::string response, gd::string tag) -> decltype(onBanUserCompleted(response, tag)) {
	using FunctionType = decltype(onBanUserCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onBlockUserCompleted(gd::string response, gd::string tag) -> decltype(onBlockUserCompleted(response, tag)) {
	using FunctionType = decltype(onBlockUserCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x162210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteCommentCompleted(gd::string response, gd::string tag) -> decltype(onDeleteCommentCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteCommentCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15f550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteFriendRequestCompleted(gd::string response, gd::string tag) -> decltype(onDeleteFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteFriendRequestCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteServerLevelCompleted(gd::string response, gd::string tag) -> decltype(onDeleteServerLevelCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteServerLevelCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1548d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteUserMessagesCompleted(gd::string response, gd::string tag) -> decltype(onDeleteUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteUserMessagesCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15b920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDownloadUserMessageCompleted(gd::string response, gd::string tag) -> decltype(onDownloadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onDownloadUserMessageCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15acc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetAccountCommentsCompleted(gd::string response, gd::string tag) -> decltype(onGetAccountCommentsCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountCommentsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15caa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetFriendRequestsCompleted(gd::string response, gd::string tag) -> decltype(onGetFriendRequestsCompleted(response, tag)) {
	using FunctionType = decltype(onGetFriendRequestsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ff00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGauntletsCompleted(gd::string response, gd::string tag) -> decltype(onGetGauntletsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGauntletsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1514f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJChallengesCompleted(gd::string response, gd::string tag) -> decltype(onGetGJChallengesCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJChallengesCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJDailyLevelStateCompleted(gd::string response, gd::string tag) -> decltype(onGetGJDailyLevelStateCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJDailyLevelStateCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x168df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJRewardsCompleted(gd::string response, gd::string tag) -> decltype(onGetGJRewardsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJRewardsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x166790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJSecretRewardCompleted(gd::string response, gd::string tag) -> decltype(onGetGJSecretRewardCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJSecretRewardCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1653a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJUserInfoCompleted(gd::string response, gd::string tag) -> decltype(onGetGJUserInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJUserInfoCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15a030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLeaderboardScoresCompleted(gd::string response, gd::string tag) -> decltype(onGetLeaderboardScoresCompleted(response, tag)) {
	using FunctionType = decltype(onGetLeaderboardScoresCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x157d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelCommentsCompleted(gd::string response, gd::string tag) -> decltype(onGetLevelCommentsCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelCommentsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelLeaderboardCompleted(gd::string response, gd::string tag) -> decltype(onGetLevelLeaderboardCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelLeaderboardCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x158d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelListsCompleted(gd::string response, gd::string tag) -> decltype(onGetLevelListsCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelListsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1509f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelRateInfoCompleted(gd::string response, gd::string tag) -> decltype(onGetLevelRateInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelRateInfoCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15fb90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelSaveDataCompleted(gd::string response, gd::string tag) -> decltype(onGetLevelSaveDataCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelSaveDataCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetMapPacksCompleted(gd::string response, gd::string tag) -> decltype(onGetMapPacksCompleted(response, tag)) {
	using FunctionType = decltype(onGetMapPacksCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14f700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetOnlineLevelsCompleted(gd::string response, gd::string tag) -> decltype(onGetOnlineLevelsCompleted(response, tag)) {
	using FunctionType = decltype(onGetOnlineLevelsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14e4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetTopArtistsCompleted(gd::string response, gd::string tag) -> decltype(onGetTopArtistsCompleted(response, tag)) {
	using FunctionType = decltype(onGetTopArtistsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1592d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserListCompleted(gd::string response, gd::string tag) -> decltype(onGetUserListCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserListCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x162ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserMessagesCompleted(gd::string response, gd::string tag) -> decltype(onGetUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserMessagesCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15a400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUsersCompleted(gd::string response, gd::string tag) -> decltype(onGetUsersCompleted(response, tag)) {
	using FunctionType = decltype(onGetUsersCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1599b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onLikeItemCompleted(gd::string response, gd::string tag) -> decltype(onLikeItemCompleted(response, tag)) {
	using FunctionType = decltype(onLikeItemCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GameLevelManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GameLevelManager::onRateDemonCompleted(gd::string response, gd::string tag) -> decltype(onRateDemonCompleted(response, tag)) {
	using FunctionType = decltype(onRateDemonCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x155780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRateStarsCompleted(gd::string response, gd::string tag) -> decltype(onRateStarsCompleted(response, tag)) {
	using FunctionType = decltype(onRateStarsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRemoveFriendCompleted(gd::string response, gd::string tag) -> decltype(onRemoveFriendCompleted(response, tag)) {
	using FunctionType = decltype(onRemoveFriendCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x161cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onReportLevelCompleted(gd::string response, gd::string tag) -> decltype(onReportLevelCompleted(response, tag)) {
	using FunctionType = decltype(onReportLevelCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRequestUserAccessCompleted(gd::string response, gd::string tag) -> decltype(onRequestUserAccessCompleted(response, tag)) {
	using FunctionType = decltype(onRequestUserAccessCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1649a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRestoreItemsCompleted(gd::string response, gd::string tag) -> decltype(onRestoreItemsCompleted(response, tag)) {
	using FunctionType = decltype(onRestoreItemsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x169b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSetLevelStarsCompleted(gd::string response, gd::string tag) -> decltype(onSetLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSetLevelStarsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x155ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSuggestLevelStarsCompleted(gd::string response, gd::string tag) -> decltype(onSuggestLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSuggestLevelStarsCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1550b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUnblockUserCompleted(gd::string response, gd::string tag) -> decltype(onUnblockUserCompleted(response, tag)) {
	using FunctionType = decltype(onUnblockUserCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x162730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateDescriptionCompleted(gd::string response, gd::string tag) -> decltype(onUpdateDescriptionCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateDescriptionCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateUserScoreCompleted(gd::string response, gd::string tag) -> decltype(onUpdateUserScoreCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateUserScoreCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x157650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadCommentCompleted(gd::string response, gd::string tag) -> decltype(onUploadCommentCompleted(response, tag)) {
	using FunctionType = decltype(onUploadCommentCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadFriendRequestCompleted(gd::string response, gd::string tag) -> decltype(onUploadFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onUploadFriendRequestCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1609a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadLevelCompleted(gd::string response, gd::string tag) -> decltype(onUploadLevelCompleted(response, tag)) {
	using FunctionType = decltype(onUploadLevelCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14d2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadUserMessageCompleted(gd::string response, gd::string tag) -> decltype(onUploadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onUploadUserMessageCompleted(response, tag))(*)(GameLevelManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15b290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::ProcessHttpRequest(gd::string endpoint, gd::string params, gd::string tag, GJHttpType httpType) -> decltype(ProcessHttpRequest(endpoint, params, tag, httpType)) {
	using FunctionType = decltype(ProcessHttpRequest(endpoint, params, tag, httpType))(*)(GameLevelManager*, gd::string, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, endpoint, params, tag, httpType);
}

auto GameLevelManager::processOnDownloadLevelCompleted(gd::string response, gd::string tag, bool update) -> decltype(processOnDownloadLevelCompleted(response, tag, update)) {
	using FunctionType = decltype(processOnDownloadLevelCompleted(response, tag, update))(*)(GameLevelManager*, gd::string, gd::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag, update);
}

auto GameLevelManager::purgeUnusedLevels() -> decltype(purgeUnusedLevels()) {
	using FunctionType = decltype(purgeUnusedLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14a430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::rateDemon(int id, int diff, bool moderator) -> decltype(rateDemon(id, diff, moderator)) {
	using FunctionType = decltype(rateDemon(id, diff, moderator))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x155350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, diff, moderator);
}

auto GameLevelManager::rateStars(int id, int diff) -> decltype(rateStars(id, diff)) {
	using FunctionType = decltype(rateStars(id, diff))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, diff);
}

auto GameLevelManager::readFriendRequest(int id) -> decltype(readFriendRequest(id)) {
	using FunctionType = decltype(readFriendRequest(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x161680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::removeDelimiterChars(gd::string str, bool colon) -> decltype(removeDelimiterChars(str, colon)) {
	using FunctionType = decltype(removeDelimiterChars(str, colon))(*)(GameLevelManager*, gd::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, colon);
}

auto GameLevelManager::removeDLFromActive(char const* key) -> decltype(removeDLFromActive(key)) {
	using FunctionType = decltype(removeDLFromActive(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::removeFriend(int accountID) -> decltype(removeFriend(accountID)) {
	using FunctionType = decltype(removeFriend(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x161990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::removeUserFromList(int id, UserListType type) -> decltype(removeUserFromList(id, type)) {
	using FunctionType = decltype(removeUserFromList(id, type))(*)(GameLevelManager*, int, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1628e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::reportLevel(int id) -> decltype(reportLevel(id)) {
	using FunctionType = decltype(reportLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::requestUserAccess() -> decltype(requestUserAccess()) {
	using FunctionType = decltype(requestUserAccess())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1646c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetCommentTimersForAccountID(int id) -> decltype(resetCommentTimersForAccountID(id)) {
	using FunctionType = decltype(resetCommentTimersForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15eed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::resetCommentTimersForLevelID(int id, CommentKeyType type) -> decltype(resetCommentTimersForLevelID(id, type)) {
	using FunctionType = decltype(resetCommentTimersForLevelID(id, type))(*)(GameLevelManager*, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ed00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::resetStoredUserList(UserListType type) -> decltype(resetStoredUserList(type)) {
	using FunctionType = decltype(resetStoredUserList(type))(*)(GameLevelManager*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::resetTimerForKey(char const* key) -> decltype(resetTimerForKey(key)) {
	using FunctionType = decltype(resetTimerForKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14a0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::saveFetchedLevels(cocos2d::CCArray* levels) -> decltype(saveFetchedLevels(levels)) {
	using FunctionType = decltype(saveFetchedLevels(levels))(*)(GameLevelManager*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1469a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GameLevelManager::saveLevel(GJGameLevel* level) -> decltype(saveLevel(level)) {
	using FunctionType = decltype(saveLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x148d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::saveLevelList(GJLevelList* list) -> decltype(saveLevelList(list)) {
	using FunctionType = decltype(saveLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x150ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::setDiffVal(int diff, bool value) -> decltype(setDiffVal(diff, value)) {
	using FunctionType = decltype(setDiffVal(diff, value))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, diff, value);
}

auto GameLevelManager::setLenVal(int diff, bool value) -> decltype(setLenVal(diff, value)) {
	using FunctionType = decltype(setLenVal(diff, value))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, diff, value);
}

auto GameLevelManager::storeCommentsResult(cocos2d::CCArray* comments, gd::string pageInfo, char const* key) -> decltype(storeCommentsResult(comments, pageInfo, key)) {
	using FunctionType = decltype(storeCommentsResult(comments, pageInfo, key))(*)(GameLevelManager*, cocos2d::CCArray*, gd::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d7b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, comments, pageInfo, key);
}

auto GameLevelManager::storeSearchResult(cocos2d::CCArray* levels, gd::string pageInfo, char const* searchKey) -> decltype(storeSearchResult(levels, pageInfo, searchKey)) {
	using FunctionType = decltype(storeSearchResult(levels, pageInfo, searchKey))(*)(GameLevelManager*, cocos2d::CCArray*, gd::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x149670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels, pageInfo, searchKey);
}

auto GameLevelManager::storeUserName(int userID, int accountID, gd::string userName) -> decltype(storeUserName(userID, accountID, userName)) {
	using FunctionType = decltype(storeUserName(userID, accountID, userName))(*)(GameLevelManager*, int, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x145d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, userID, accountID, userName);
}

auto GameLevelManager::storeUserNames(gd::string usernameString) -> decltype(storeUserNames(usernameString)) {
	using FunctionType = decltype(storeUserNames(usernameString))(*)(GameLevelManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x145a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, usernameString);
}

auto GameLevelManager::submitUserInfo() -> decltype(submitUserInfo()) {
	using FunctionType = decltype(submitUserInfo())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x169e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::suggestLevelStars(int id, int stars, int feature) -> decltype(suggestLevelStars(id, stars, feature)) {
	using FunctionType = decltype(suggestLevelStars(id, stars, feature))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, stars, feature);
}

auto GameLevelManager::tryGetUsername(int accountID) -> decltype(tryGetUsername(accountID)) {
	using FunctionType = decltype(tryGetUsername(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x146070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::unblockUser(int id) -> decltype(unblockUser(id)) {
	using FunctionType = decltype(unblockUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x162410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::updateDescription(int id, gd::string description) -> decltype(updateDescription(id, description)) {
	using FunctionType = decltype(updateDescription(id, description))(*)(GameLevelManager*, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1636b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, description);
}

auto GameLevelManager::updateLevel(GJGameLevel* level) -> decltype(updateLevel(level)) {
	using FunctionType = decltype(updateLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateLevelOrders() -> decltype(updateLevelOrders()) {
	using FunctionType = decltype(updateLevelOrders())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1476c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::updateLevelRewards(GJGameLevel* level) -> decltype(updateLevelRewards(level)) {
	using FunctionType = decltype(updateLevelRewards(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1463c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateSavedLevelList(GJLevelList* list) -> decltype(updateSavedLevelList(list)) {
	using FunctionType = decltype(updateSavedLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x150fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::updateUserScore() -> decltype(updateUserScore()) {
	using FunctionType = decltype(updateUserScore())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x155c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::uploadComment(gd::string content, CommentType type, int levelID, int percent) -> decltype(uploadComment(content, type, levelID, percent)) {
	using FunctionType = decltype(uploadComment(content, type, levelID, percent))(*)(GameLevelManager*, gd::string, CommentType, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15daa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, content, type, levelID, percent);
}

auto GameLevelManager::uploadFriendRequest(int accountID, gd::string content) -> decltype(uploadFriendRequest(accountID, content)) {
	using FunctionType = decltype(uploadFriendRequest(accountID, content))(*)(GameLevelManager*, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, content);
}

auto GameLevelManager::uploadLevel(GJGameLevel* level) -> decltype(uploadLevel(level)) {
	using FunctionType = decltype(uploadLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14c7c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::uploadLevelList(GJLevelList* list) -> decltype(uploadLevelList(list)) {
	using FunctionType = decltype(uploadLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14fdf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::uploadUserMessage(int accountID, gd::string subject, gd::string content) -> decltype(uploadUserMessage(accountID, subject, content)) {
	using FunctionType = decltype(uploadUserMessage(accountID, subject, content))(*)(GameLevelManager*, int, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ae40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, subject, content);
}

auto GameLevelManager::userNameForUserID(int id) -> decltype(userNameForUserID(id)) {
	using FunctionType = decltype(userNameForUserID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x145ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::verifyContainerOnlyHasLevels(cocos2d::CCDictionary* dict) -> decltype(verifyContainerOnlyHasLevels(dict)) {
	using FunctionType = decltype(verifyContainerOnlyHasLevels(dict))(*)(GameLevelManager*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14b1a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::writeSpecialFilters(GJSearchObject* object) -> decltype(writeSpecialFilters(object)) {
	using FunctionType = decltype(writeSpecialFilters(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14d9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}
