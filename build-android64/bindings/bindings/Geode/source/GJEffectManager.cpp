
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/cocos/platform/android/CCFileUtilsAndroid.h>

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

auto GJEffectManager::createKeyframeCommand(int targetID, cocos2d::CCArray* group, GameObject* object, int uniqueID, int controlID, bool temporary, float posXMod, float posYMod, float rotMod, float scaleXMod, float scaleYMod, float timeMod, gd::vector<int> const& remapKeys) -> decltype(createKeyframeCommand(targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys)) {
	using FunctionType = decltype(createKeyframeCommand(targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys))(*)(GJEffectManager*, int, cocos2d::CCArray*, GameObject*, int, int, bool, float, float, float, float, float, float, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager21createKeyframeCommandEiPN7cocos2d7CCArrayEP10GameObjectiibffffffRKSt6vectorIiSaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys);
}

auto GJEffectManager::getLoadedMoveOffset(gd::unordered_map<int, std::pair<double, double>>& offsets) -> decltype(getLoadedMoveOffset(offsets)) {
	using FunctionType = decltype(getLoadedMoveOffset(offsets))(*)(GJEffectManager*, gd::unordered_map<int, std::pair<double, double>>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager19getLoadedMoveOffsetERSt13unordered_mapIiSt4pairIddESt4hashIiESt8equal_toIiESaIS1_IKiS2_EEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsets);
}

auto GJEffectManager::getPersistentState(gd::unordered_map<int, int>& counts, gd::unordered_map<int, TimerItem>& items) -> decltype(getPersistentState(counts, items)) {
	using FunctionType = decltype(getPersistentState(counts, items))(*)(GJEffectManager*, gd::unordered_map<int, int>&, gd::unordered_map<int, TimerItem>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager18getPersistentStateERSt13unordered_mapIiiSt4hashIiESt8equal_toIiESaISt4pairIKiiEEERS0_Ii9TimerItemS2_S4_SaIS5_IS6_SB_EEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, counts, items);
}

auto GJEffectManager::loadPersistentStateString(gd::string state) -> decltype(loadPersistentStateString(state)) {
	using FunctionType = decltype(loadPersistentStateString(state))(*)(GJEffectManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager25loadPersistentStateStringESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto GJEffectManager::registerCollisionTrigger(int targetID, int blockAID, int blockBID, bool triggerOnExit, bool activateGroup, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(registerCollisionTrigger(targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(registerCollisionTrigger(targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, int, int, bool, bool, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager24registerCollisionTriggerEiiibbRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::runCountTrigger(int id, int targetCount, bool multiActivate, int targetID, bool activateGroup, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(runCountTrigger(id, targetCount, multiActivate, targetID, activateGroup, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(runCountTrigger(id, targetCount, multiActivate, targetID, activateGroup, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, int, bool, int, bool, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager15runCountTriggerEiibibRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, targetCount, multiActivate, targetID, activateGroup, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::runDeathTrigger(int targetID, bool activateGroup, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(runDeathTrigger(targetID, activateGroup, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(runDeathTrigger(targetID, activateGroup, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, bool, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager15runDeathTriggerEibRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, targetID, activateGroup, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::runTimerTrigger(int id, double targetTime, bool multiActivate, int targetID, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(runTimerTrigger(id, targetTime, multiActivate, targetID, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(runTimerTrigger(id, targetTime, multiActivate, targetID, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, double, bool, int, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager15runTimerTriggerEidbiRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, targetTime, multiActivate, targetID, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::runTouchTriggerCommand(int targetID, bool holdMode, TouchTriggerType touchType, TouchTriggerControl touchControl, bool dualMode, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(runTouchTriggerCommand(targetID, holdMode, touchType, touchControl, dualMode, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(runTouchTriggerCommand(targetID, holdMode, touchType, touchControl, dualMode, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, bool, TouchTriggerType, TouchTriggerControl, bool, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager22runTouchTriggerCommandEib16TouchTriggerType19TouchTriggerControlbRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, targetID, holdMode, touchType, touchControl, dualMode, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::setupFromString(gd::string str) -> decltype(setupFromString(str)) {
	using FunctionType = decltype(setupFromString(str))(*)(GJEffectManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager15setupFromStringESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GJEffectManager::spawnGroup(int targetID, float delay, bool spawnOrdered, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(spawnGroup(targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(spawnGroup(targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, float, bool, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager10spawnGroupEifbRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::spawnObject(GameObject* object, float delay, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(spawnObject(object, delay, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(spawnObject(object, delay, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, GameObject*, float, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager11spawnObjectEP10GameObjectfRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, delay, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::startTimer(int id, double startTime, double targetTime, bool stopTime, bool active, bool dontOverride, float timeMod, bool ignoreTimewarp, int targetID, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(startTimer(id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(startTimer(id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, double, double, bool, bool, bool, float, bool, int, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15GJEffectManager10startTimerEiddbbbfbiRKSt6vectorIiSaIiEEii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID);
}
