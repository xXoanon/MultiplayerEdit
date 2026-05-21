
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

auto GameManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17b4a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameManager::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameManager::update), this);
	using FunctionType = decltype(update(dt))(*)(GameManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x189bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto GameManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameManager::init), this);
	using FunctionType = decltype(init())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17b4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GameManager::encodeDataTo), this);
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x188fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GameManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GameManager::dataLoaded), this);
	using FunctionType = decltype(dataLoaded(dict))(*)(GameManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x186a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GameManager::firstLoad() -> decltype(firstLoad()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameManager::firstLoad), this);
	using FunctionType = decltype(firstLoad())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1886b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameManager::activeIconForType(IconType type) -> decltype(activeIconForType(type)) {
	using FunctionType = decltype(activeIconForType(type))(*)(GameManager*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x181a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::addCustomAnimationFrame(int objectID, int frameIndex, gd::string mainFrame, gd::string detailFrame) -> decltype(addCustomAnimationFrame(objectID, frameIndex, mainFrame, detailFrame)) {
	using FunctionType = decltype(addCustomAnimationFrame(objectID, frameIndex, mainFrame, detailFrame))(*)(GameManager*, int, int, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1aeb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID, frameIndex, mainFrame, detailFrame);
}

auto GameManager::addGameAnimation(int objectID, int frames, float frameTime, gd::string mainAnimFrame, gd::string detailAnimFrame, int defaultFrame) -> decltype(addGameAnimation(objectID, frames, frameTime, mainAnimFrame, detailAnimFrame, defaultFrame)) {
	using FunctionType = decltype(addGameAnimation(objectID, frames, frameTime, mainAnimFrame, detailAnimFrame, defaultFrame))(*)(GameManager*, int, int, float, gd::string, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ae9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID, frames, frameTime, mainAnimFrame, detailAnimFrame, defaultFrame);
}

auto GameManager::addNewCustomObject(gd::string str) -> decltype(addNewCustomObject(str)) {
	using FunctionType = decltype(addNewCustomObject(str))(*)(GameManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1837f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameManager::applicationWillEnterForeground() -> decltype(applicationWillEnterForeground()) {
	using FunctionType = decltype(applicationWillEnterForeground())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x189c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::checkSteamAchievementUnlock() -> decltype(checkSteamAchievementUnlock()) {
	using FunctionType = decltype(checkSteamAchievementUnlock())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::checkUsedIcons() -> decltype(checkUsedIcons()) {
	using FunctionType = decltype(checkUsedIcons())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1841d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::colorForIdx(int index) -> decltype(colorForIdx(index)) {
	using FunctionType = decltype(colorForIdx(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x181350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::colorKey(int id, UnlockType type) -> decltype(colorKey(id, type)) {
	using FunctionType = decltype(colorKey(id, type))(*)(GameManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17c7b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::completedAchievement(gd::string key) -> decltype(completedAchievement(key)) {
	using FunctionType = decltype(completedAchievement(key))(*)(GameManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17d1f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::countForType(IconType type) -> decltype(countForType(type)) {
	using FunctionType = decltype(countForType(type))(*)(GameManager*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x181c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::dpadConfigToString(UIButtonConfig& config) -> decltype(dpadConfigToString(config)) {
	using FunctionType = decltype(dpadConfigToString(config))(*)(GameManager*, UIButtonConfig&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x186490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, config);
}

auto GameManager::fadeInMenuMusic() -> decltype(fadeInMenuMusic()) {
	using FunctionType = decltype(fadeInMenuMusic())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17bab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::fadeInMusic(gd::string path) -> decltype(fadeInMusic(path)) {
	using FunctionType = decltype(fadeInMusic(path))(*)(GameManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17bba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto GameManager::finishedLoadingBGAsync(cocos2d::CCObject* obj) -> decltype(finishedLoadingBGAsync(obj)) {
	using FunctionType = decltype(finishedLoadingBGAsync(obj))(*)(GameManager*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, obj);
}

auto GameManager::finishedLoadingGAsync(int index) -> decltype(finishedLoadingGAsync(index)) {
	using FunctionType = decltype(finishedLoadingGAsync(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::finishedLoadingGAsync1(cocos2d::CCObject* obj) -> decltype(finishedLoadingGAsync1(obj)) {
	using FunctionType = decltype(finishedLoadingGAsync1(obj))(*)(GameManager*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, obj);
}

auto GameManager::finishedLoadingGAsync2(cocos2d::CCObject* obj) -> decltype(finishedLoadingGAsync2(obj)) {
	using FunctionType = decltype(finishedLoadingGAsync2(obj))(*)(GameManager*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, obj);
}

auto GameManager::finishedLoadingMGAsync(int index) -> decltype(finishedLoadingMGAsync(index)) {
	using FunctionType = decltype(finishedLoadingMGAsync(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::finishedLoadingMGAsync1(cocos2d::CCObject* obj) -> decltype(finishedLoadingMGAsync1(obj)) {
	using FunctionType = decltype(finishedLoadingMGAsync1(obj))(*)(GameManager*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, obj);
}

auto GameManager::finishedLoadingMGAsync2(cocos2d::CCObject* obj) -> decltype(finishedLoadingMGAsync2(obj)) {
	using FunctionType = decltype(finishedLoadingMGAsync2(obj))(*)(GameManager*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, obj);
}

auto GameManager::generateSecretNumber() -> decltype(generateSecretNumber()) {
	using FunctionType = decltype(generateSecretNumber())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x185cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getGameVariable(char const* key) -> decltype(getGameVariable(key)) {
	using FunctionType = decltype(getGameVariable(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::getIntGameVariable(char const* key) -> decltype(getIntGameVariable(key)) {
	using FunctionType = decltype(getIntGameVariable(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::getMenuMusicFile() -> decltype(getMenuMusicFile()) {
	using FunctionType = decltype(getMenuMusicFile())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17b720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getUGV(char const* key) -> decltype(getUGV(key)) {
	using FunctionType = decltype(getUGV(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1834a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::getUnlockForAchievement(gd::string key, int& id, UnlockType& type) -> decltype(getUnlockForAchievement(key, id, type)) {
	using FunctionType = decltype(getUnlockForAchievement(key, id, type))(*)(GameManager*, gd::string, int&, UnlockType&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17c9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, id, type);
}

auto GameManager::iconKey(int id, IconType type) -> decltype(iconKey(id, type)) {
	using FunctionType = decltype(iconKey(id, type))(*)(GameManager*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17c2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::iconTypeToUnlockType(IconType type) -> decltype(iconTypeToUnlockType(type)) {
	using FunctionType = decltype(iconTypeToUnlockType(type))(*)(GameManager*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17c5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::isColorUnlocked(int id, UnlockType type) -> decltype(isColorUnlocked(id, type)) {
	using FunctionType = decltype(isColorUnlocked(id, type))(*)(GameManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17c8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::isIconUnlocked(int id, IconType type) -> decltype(isIconUnlocked(id, type)) {
	using FunctionType = decltype(isIconUnlocked(id, type))(*)(GameManager*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17c500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::loadBackground(int index) -> decltype(loadBackground(index)) {
	using FunctionType = decltype(loadBackground(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1828a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadDpadFromString(UIButtonConfig& config, gd::string str) -> decltype(loadDpadFromString(config, str)) {
	using FunctionType = decltype(loadDpadFromString(config, str))(*)(GameManager*, UIButtonConfig&, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x186780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, config, str);
}

auto GameManager::loadDPadLayout(int index, bool dual) -> decltype(loadDPadLayout(index, dual)) {
	using FunctionType = decltype(loadDPadLayout(index, dual))(*)(GameManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1861e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index, dual);
}

auto GameManager::loadFont(int index) -> decltype(loadFont(index)) {
	using FunctionType = decltype(loadFont(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1827f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadGround(int index) -> decltype(loadGround(index)) {
	using FunctionType = decltype(loadGround(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadIcon(int id, int type, int requestID) -> decltype(loadIcon(id, type, requestID)) {
	using FunctionType = decltype(loadIcon(id, type, requestID))(*)(GameManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x181d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, requestID);
}

auto GameManager::loadMiddleground(int index) -> decltype(loadMiddleground(index)) {
	using FunctionType = decltype(loadMiddleground(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::playMenuMusic() -> decltype(playMenuMusic()) {
	using FunctionType = decltype(playMenuMusic())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17b830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::playSFXTrigger(SFXTriggerGameObject* object) -> decltype(playSFXTrigger(object)) {
	using FunctionType = decltype(playSFXTrigger(object))(*)(GameManager*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17bcc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameManager::prepareDPadSettings() -> decltype(prepareDPadSettings()) {
	using FunctionType = decltype(prepareDPadSettings())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1869f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::recountUserStats(gd::string str) -> decltype(recountUserStats(str)) {
	using FunctionType = decltype(recountUserStats(str))(*)(GameManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameManager::reloadAll(bool switchingModes, bool toFullscreen, bool borderless, bool fix, bool unused) -> decltype(reloadAll(switchingModes, toFullscreen, borderless, fix, unused)) {
	using FunctionType = decltype(reloadAll(switchingModes, toFullscreen, borderless, fix, unused))(*)(GameManager*, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, switchingModes, toFullscreen, borderless, fix, unused);
}

auto GameManager::reloadAllStep2() -> decltype(reloadAllStep2()) {
	using FunctionType = decltype(reloadAllStep2())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadAllStep3() -> decltype(reloadAllStep3()) {
	using FunctionType = decltype(reloadAllStep3())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadAllStep4() -> decltype(reloadAllStep4()) {
	using FunctionType = decltype(reloadAllStep4())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadAllStep5() -> decltype(reloadAllStep5()) {
	using FunctionType = decltype(reloadAllStep5())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadMenu() -> decltype(reloadMenu()) {
	using FunctionType = decltype(reloadMenu())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a3e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reorderKey(int index, bool up) -> decltype(reorderKey(index, up)) {
	using FunctionType = decltype(reorderKey(index, up))(*)(GameManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index, up);
}

auto GameManager::reportAchievementWithID(char const* key, int percent, bool dontNotify) -> decltype(reportAchievementWithID(key, percent, dontNotify)) {
	using FunctionType = decltype(reportAchievementWithID(key, percent, dontNotify))(*)(GameManager*, char const*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17dff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, percent, dontNotify);
}

auto GameManager::reportPercentageForLevel(int levelID, int percentage, bool isPlatformer) -> decltype(reportPercentageForLevel(levelID, percentage, isPlatformer)) {
	using FunctionType = decltype(reportPercentageForLevel(levelID, percentage, isPlatformer))(*)(GameManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17d610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, percentage, isPlatformer);
}

auto GameManager::resetAchievement(gd::string key) -> decltype(resetAchievement(key)) {
	using FunctionType = decltype(resetAchievement(key))(*)(GameManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17d3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::resetAllIcons() -> decltype(resetAllIcons()) {
	using FunctionType = decltype(resetAllIcons())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::resetCoinUnlocks() -> decltype(resetCoinUnlocks()) {
	using FunctionType = decltype(resetCoinUnlocks())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::resolutionForKey(int key) -> decltype(resolutionForKey(key)) {
	using FunctionType = decltype(resolutionForKey(key))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::returnToLastScene(GJGameLevel* level) -> decltype(returnToLastScene(level)) {
	using FunctionType = decltype(returnToLastScene(level))(*)(GameManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x189fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameManager::safePopScene() -> decltype(safePopScene()) {
	using FunctionType = decltype(safePopScene())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::saveDPadLayout(int index, bool dual) -> decltype(saveDPadLayout(index, dual)) {
	using FunctionType = decltype(saveDPadLayout(index, dual))(*)(GameManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x185e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index, dual);
}

auto GameManager::setGameVariable(char const* key, bool value) -> decltype(setGameVariable(key, value)) {
	using FunctionType = decltype(setGameVariable(key, value))(*)(GameManager*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameManager::setIntGameVariable(char const* key, int value) -> decltype(setIntGameVariable(key, value)) {
	using FunctionType = decltype(setIntGameVariable(key, value))(*)(GameManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameManager::setUGV(char const* key, bool value) -> decltype(setUGV(key, value)) {
	using FunctionType = decltype(setUGV(key, value))(*)(GameManager*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameManager::setupGameAnimations() -> decltype(setupGameAnimations()) {
	using FunctionType = decltype(setupGameAnimations())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ab7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::sheetNameForIcon(int id, int type) -> decltype(sheetNameForIcon(id, type)) {
	using FunctionType = decltype(sheetNameForIcon(id, type))(*)(GameManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::stringForCustomObject(int customObjectID) -> decltype(stringForCustomObject(customObjectID)) {
	using FunctionType = decltype(stringForCustomObject(customObjectID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, customObjectID);
}

auto GameManager::switchCustomObjects(int key1, int key2) -> decltype(switchCustomObjects(key1, key2)) {
	using FunctionType = decltype(switchCustomObjects(key1, key2))(*)(GameManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key1, key2);
}

auto GameManager::toggleGameVariable(char const* key) -> decltype(toggleGameVariable(key)) {
	using FunctionType = decltype(toggleGameVariable(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::unloadIcon(int id, int type, int requestID) -> decltype(unloadIcon(id, type, requestID)) {
	using FunctionType = decltype(unloadIcon(id, type, requestID))(*)(GameManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, requestID);
}

auto GameManager::unloadIcons(int requestID) -> decltype(unloadIcons(requestID)) {
	using FunctionType = decltype(unloadIcons(requestID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x182330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, requestID);
}

auto GameManager::unlockTypeToIconType(int type) -> decltype(unlockTypeToIconType(type)) {
	using FunctionType = decltype(unlockTypeToIconType(type))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17c700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::updateCustomFPS() -> decltype(updateCustomFPS()) {
	using FunctionType = decltype(updateCustomFPS())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ac40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::verifyCoinUnlocks() -> decltype(verifyCoinUnlocks()) {
	using FunctionType = decltype(verifyCoinUnlocks())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
