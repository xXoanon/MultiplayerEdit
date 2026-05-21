
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

GJBaseGameLayer::GJBaseGameLayer() : GJBaseGameLayer(geode::CutoffConstructor, sizeof(GJBaseGameLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJBaseGameLayer::~GJBaseGameLayer();

	using FunctionType = void(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cfef0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

GJBaseGameLayer::~GJBaseGameLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJBaseGameLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2057a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJBaseGameLayer(geode::CutoffConstructor, sizeof(GJBaseGameLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJBaseGameLayer::convertToClosestDirection(float angle, float bound) -> decltype(convertToClosestDirection(angle, bound)) {
	using FunctionType = decltype(convertToClosestDirection(angle, bound))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22e8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(angle, bound);
}

auto GJBaseGameLayer::gameEventToString(GJGameEvent event) -> decltype(gameEventToString(event)) {
	using FunctionType = decltype(gameEventToString(event))(*)(GJGameEvent);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x232720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(event);
}

auto GJBaseGameLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto GJBaseGameLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::init), this);
	using FunctionType = decltype(init())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::visit), this);
	using FunctionType = decltype(visit())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x246ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::opacityForObject(GameObject* object) -> decltype(opacityForObject(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::opacityForObject), this);
	using FunctionType = decltype(opacityForObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::objectsCollided(int blockAID, int blockBID) -> decltype(objectsCollided(blockAID, blockBID)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJBaseGameLayer::objectsCollided), this);
	using FunctionType = decltype(objectsCollided(blockAID, blockBID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x219170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, blockAID, blockBID);
}

auto GJBaseGameLayer::updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2) -> decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&GJBaseGameLayer::updateColor), this);
	using FunctionType = decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2))(*)(GJBaseGameLayer*, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2);
}

auto GJBaseGameLayer::toggleGroupTriggered(int group, bool activate, gd::vector<int> const& remapKeys, int triggerID, int controlID) -> decltype(toggleGroupTriggered(group, activate, remapKeys, triggerID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, gd::vector<int> const&, int, int>::func(&GJBaseGameLayer::toggleGroupTriggered), this);
	using FunctionType = decltype(toggleGroupTriggered(group, activate, remapKeys, triggerID, controlID))(*)(GJBaseGameLayer*, int, bool, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, group, activate, remapKeys, triggerID, controlID);
}

auto GJBaseGameLayer::spawnGroup(int group, bool ordered, double delay, gd::vector<int> const& remapKeys, int triggerID, int controlID) -> decltype(spawnGroup(group, ordered, delay, remapKeys, triggerID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double, gd::vector<int> const&, int, int>::func(&GJBaseGameLayer::spawnGroup), this);
	using FunctionType = decltype(spawnGroup(group, ordered, delay, remapKeys, triggerID, controlID))(*)(GJBaseGameLayer*, int, bool, double, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21ab80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, group, ordered, delay, remapKeys, triggerID, controlID);
}

auto GJBaseGameLayer::spawnObject(GameObject* object, double delay, gd::vector<int> const& remapKeys) -> decltype(spawnObject(object, delay, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, double, gd::vector<int> const&>::func(&GJBaseGameLayer::spawnObject), this);
	using FunctionType = decltype(spawnObject(object, delay, remapKeys))(*)(GJBaseGameLayer*, GameObject*, double, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21b030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, delay, remapKeys);
}

auto GJBaseGameLayer::updateDebugDraw() -> decltype(updateDebugDraw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::updateDebugDraw), this);
	using FunctionType = decltype(updateDebugDraw())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x210800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::addToSection(GameObject* object) -> decltype(addToSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::addToSection), this);
	using FunctionType = decltype(addToSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x226500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::addToGroup(GameObject* object, int groupID, bool triggerGroup) -> decltype(addToGroup(object, groupID, triggerGroup)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int, bool>::func(&GJBaseGameLayer::addToGroup), this);
	using FunctionType = decltype(addToGroup(object, groupID, triggerGroup))(*)(GJBaseGameLayer*, GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID, triggerGroup);
}

auto GJBaseGameLayer::removeFromGroup(GameObject* object, int groupID) -> decltype(removeFromGroup(object, groupID)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int>::func(&GJBaseGameLayer::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(object, groupID))(*)(GJBaseGameLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID);
}

auto GJBaseGameLayer::updateObjectSection(GameObject* object) -> decltype(updateObjectSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::updateObjectSection), this);
	using FunctionType = decltype(updateObjectSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x227f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::updateScreenRotation(float rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<float, bool, bool, float, int, float, int, int>::func(&GJBaseGameLayer::updateScreenRotation), this);
	using FunctionType = decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, bool, bool, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID);
}

auto GJBaseGameLayer::reverseDirection(EffectGameObject* object) -> decltype(reverseDirection(object)) {
	auto self = addresser::thunkAdjust(Resolve<EffectGameObject*>::func(&GJBaseGameLayer::reverseDirection), this);
	using FunctionType = decltype(reverseDirection(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x218160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::rotateGameplay(RotateGameplayGameObject* object) -> decltype(rotateGameplay(object)) {
	auto self = addresser::thunkAdjust(Resolve<RotateGameplayGameObject*>::func(&GJBaseGameLayer::rotateGameplay), this);
	using FunctionType = decltype(rotateGameplay(object))(*)(GJBaseGameLayer*, RotateGameplayGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2181c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::updateTimeWarp(float timeWarp) -> decltype(updateTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::updateTimeWarp), this);
	using FunctionType = decltype(updateTimeWarp(timeWarp))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto GJBaseGameLayer::applyTimeWarp(float timeWarp) -> decltype(applyTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::applyTimeWarp), this);
	using FunctionType = decltype(applyTimeWarp(timeWarp))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2361a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto GJBaseGameLayer::createCustomParticle(gd::string const& key, cocos2d::ParticleStruct const& particleStruct, int minimum, bool dontAdd) -> decltype(createCustomParticle(key, particleStruct, minimum, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, cocos2d::ParticleStruct const&, int, bool>::func(&GJBaseGameLayer::createCustomParticle), this);
	using FunctionType = decltype(createCustomParticle(key, particleStruct, minimum, dontAdd))(*)(GJBaseGameLayer*, gd::string const&, cocos2d::ParticleStruct const&, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, minimum, dontAdd);
}

auto GJBaseGameLayer::claimCustomParticle(gd::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd) -> decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool>::func(&GJBaseGameLayer::claimCustomParticle), this);
	using FunctionType = decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd))(*)(GJBaseGameLayer*, gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, zLayer, zOrder, uiObject, dontAdd);
}

auto GJBaseGameLayer::unclaimCustomParticle(gd::string const& key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimCustomParticle(key, particle)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, cocos2d::CCParticleSystemQuad*>::func(&GJBaseGameLayer::unclaimCustomParticle), this);
	using FunctionType = decltype(unclaimCustomParticle(key, particle))(*)(GJBaseGameLayer*, gd::string const&, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particle);
}

auto GJBaseGameLayer::activatedAudioTrigger(SFXTriggerGameObject* object) -> decltype(activatedAudioTrigger(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXTriggerGameObject*>::func(&GJBaseGameLayer::activatedAudioTrigger), this);
	using FunctionType = decltype(activatedAudioTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::checkpointActivated(CheckpointGameObject* object) -> decltype(checkpointActivated(object)) {
	auto self = addresser::thunkAdjust(Resolve<CheckpointGameObject*>::func(&GJBaseGameLayer::checkpointActivated), this);
	using FunctionType = decltype(checkpointActivated(object))(*)(GJBaseGameLayer*, CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x246ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::addKeyframe(KeyframeGameObject* object) -> decltype(addKeyframe(object)) {
	auto self = addresser::thunkAdjust(Resolve<KeyframeGameObject*>::func(&GJBaseGameLayer::addKeyframe), this);
	using FunctionType = decltype(addKeyframe(object))(*)(GJBaseGameLayer*, KeyframeGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::activatedAudioTrigger(SFXTriggerGameObject* object, float levelTime) -> decltype(activatedAudioTrigger(object, levelTime)) {
	using FunctionType = decltype(activatedAudioTrigger(object, levelTime))(*)(GJBaseGameLayer*, SFXTriggerGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, levelTime);
}

auto GJBaseGameLayer::activateEventTrigger(EventLinkTrigger* object, gd::vector<int> const& remapKeys) -> decltype(activateEventTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateEventTrigger(object, remapKeys))(*)(GJBaseGameLayer*, EventLinkTrigger*, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x232110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::activateItemCompareTrigger(ItemTriggerGameObject* object, gd::vector<int> const& remapKeys) -> decltype(activateItemCompareTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateItemCompareTrigger(object, remapKeys))(*)(GJBaseGameLayer*, ItemTriggerGameObject*, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x234630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::activateItemEditTrigger(ItemTriggerGameObject* object) -> decltype(activateItemEditTrigger(object)) {
	using FunctionType = decltype(activateItemEditTrigger(object))(*)(GJBaseGameLayer*, ItemTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x234250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activatePersistentItemTrigger(ItemTriggerGameObject* object) -> decltype(activatePersistentItemTrigger(object)) {
	using FunctionType = decltype(activatePersistentItemTrigger(object))(*)(GJBaseGameLayer*, ItemTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x234a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activatePlayerControlTrigger(PlayerControlGameObject* object) -> decltype(activatePlayerControlTrigger(object)) {
	using FunctionType = decltype(activatePlayerControlTrigger(object))(*)(GJBaseGameLayer*, PlayerControlGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2174e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSFXEditTrigger(SFXTriggerGameObject* object) -> decltype(activateSFXEditTrigger(object)) {
	using FunctionType = decltype(activateSFXEditTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSFXTrigger(SFXTriggerGameObject* object) -> decltype(activateSFXTrigger(object)) {
	using FunctionType = decltype(activateSFXTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSongEditTrigger(SongTriggerGameObject* object) -> decltype(activateSongEditTrigger(object)) {
	using FunctionType = decltype(activateSongEditTrigger(object))(*)(GJBaseGameLayer*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSongTrigger(SongTriggerGameObject* object) -> decltype(activateSongTrigger(object)) {
	using FunctionType = decltype(activateSongTrigger(object))(*)(GJBaseGameLayer*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2415c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateTimerTrigger(TimerTriggerGameObject* object, gd::vector<int> const& remapKeys) -> decltype(activateTimerTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateTimerTrigger(object, remapKeys))(*)(GJBaseGameLayer*, TimerTriggerGameObject*, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x234e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::addAreaEffect(EnterEffectObject* object, gd::vector<EnterEffectInstance>* instances, GJAreaActionType type) -> decltype(addAreaEffect(object, instances, type)) {
	using FunctionType = decltype(addAreaEffect(object, instances, type))(*)(GJBaseGameLayer*, EnterEffectObject*, gd::vector<EnterEffectInstance>*, GJAreaActionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x227480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, instances, type);
}

auto GJBaseGameLayer::addCustomEnterEffect(EnterEffectObject* object, bool enter) -> decltype(addCustomEnterEffect(object, enter)) {
	using FunctionType = decltype(addCustomEnterEffect(object, enter))(*)(GJBaseGameLayer*, EnterEffectObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20e400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, enter);
}

auto GJBaseGameLayer::addGuideArt(GameObject* object) -> decltype(addGuideArt(object)) {
	using FunctionType = decltype(addGuideArt(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x245ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::addProximityVolumeEffect(int channelID, int targetType, SFXTriggerGameObject* object) -> decltype(addProximityVolumeEffect(channelID, targetType, object)) {
	using FunctionType = decltype(addProximityVolumeEffect(channelID, targetType, object))(*)(GJBaseGameLayer*, int, int, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channelID, targetType, object);
}

auto GJBaseGameLayer::addRemapTargets(gd::set<int>& targets) -> decltype(addRemapTargets(targets)) {
	using FunctionType = decltype(addRemapTargets(targets))(*)(GJBaseGameLayer*, gd::set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20dbd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targets);
}

auto GJBaseGameLayer::addToGroups(GameObject* object, bool duplicateTrigger) -> decltype(addToGroups(object, duplicateTrigger)) {
	using FunctionType = decltype(addToGroups(object, duplicateTrigger))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, duplicateTrigger);
}

auto GJBaseGameLayer::addUIObject(GameObject* object) -> decltype(addUIObject(object)) {
	using FunctionType = decltype(addUIObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::animateInDualGroundNew(GameObject* object, float height, bool instant, float duration) -> decltype(animateInDualGroundNew(object, height, instant, duration)) {
	using FunctionType = decltype(animateInDualGroundNew(object, height, instant, duration))(*)(GJBaseGameLayer*, GameObject*, float, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, height, instant, duration);
}

auto GJBaseGameLayer::applyRemap(EffectGameObject* object, gd::vector<int> const& remapKeys, gd::unordered_map<int, int>& remap) -> decltype(applyRemap(object, remapKeys, remap)) {
	using FunctionType = decltype(applyRemap(object, remapKeys, remap))(*)(GJBaseGameLayer*, EffectGameObject*, gd::vector<int> const&, gd::unordered_map<int, int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21b1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys, remap);
}

auto GJBaseGameLayer::applySFXEditTrigger(int channelID, int targetType, SFXTriggerGameObject* object) -> decltype(applySFXEditTrigger(channelID, targetType, object)) {
	using FunctionType = decltype(applySFXEditTrigger(channelID, targetType, object))(*)(GJBaseGameLayer*, int, int, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channelID, targetType, object);
}

auto GJBaseGameLayer::assignNewStickyGroups(cocos2d::CCArray* objects) -> decltype(assignNewStickyGroups(objects)) {
	using FunctionType = decltype(assignNewStickyGroups(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::bumpPlayer(PlayerObject* player, EffectGameObject* object) -> decltype(bumpPlayer(player, object)) {
	using FunctionType = decltype(bumpPlayer(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2179d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::buttonIsRelevant(PlayerButtonCommand const& button) -> decltype(buttonIsRelevant(button)) {
	using FunctionType = decltype(buttonIsRelevant(button))(*)(GJBaseGameLayer*, PlayerButtonCommand const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto GJBaseGameLayer::calculateColorGroups() -> decltype(calculateColorGroups()) {
	using FunctionType = decltype(calculateColorGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20e0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::canBeActivatedByPlayer(PlayerObject* player, EffectGameObject* object) -> decltype(canBeActivatedByPlayer(player, object)) {
	using FunctionType = decltype(canBeActivatedByPlayer(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2178c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::canProcessSFX(SFXTriggerState& state, gd::unordered_map<int, int>& stateIndices, gd::unordered_map<int, float>& times, gd::vector<SFXTriggerState>& states) -> decltype(canProcessSFX(state, stateIndices, times, states)) {
	using FunctionType = decltype(canProcessSFX(state, stateIndices, times, states))(*)(GJBaseGameLayer*, SFXTriggerState&, gd::unordered_map<int, int>&, gd::unordered_map<int, float>&, gd::vector<SFXTriggerState>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2431a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state, stateIndices, times, states);
}

auto GJBaseGameLayer::checkCameraLimitAfterTeleport(PlayerObject* player, float yOffset) -> decltype(checkCameraLimitAfterTeleport(player, yOffset)) {
	using FunctionType = decltype(checkCameraLimitAfterTeleport(player, yOffset))(*)(GJBaseGameLayer*, PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, yOffset);
}

auto GJBaseGameLayer::checkCollision(int blockAID, int blockBID) -> decltype(checkCollision(blockAID, blockBID)) {
	using FunctionType = decltype(checkCollision(blockAID, blockBID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x219090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, blockAID, blockBID);
}

auto GJBaseGameLayer::checkCollisionBlocks(EffectGameObject* object, gd::vector<EffectGameObject*>* blocks, int blockCount) -> decltype(checkCollisionBlocks(object, blocks, blockCount)) {
	using FunctionType = decltype(checkCollisionBlocks(object, blocks, blockCount))(*)(GJBaseGameLayer*, EffectGameObject*, gd::vector<EffectGameObject*>*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x218ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, blocks, blockCount);
}

auto GJBaseGameLayer::checkCollisions(PlayerObject* object, float dt, bool ignoreDamage) -> decltype(checkCollisions(object, dt, ignoreDamage)) {
	using FunctionType = decltype(checkCollisions(object, dt, ignoreDamage))(*)(GJBaseGameLayer*, PlayerObject*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2137f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, dt, ignoreDamage);
}

auto GJBaseGameLayer::checkRepellPlayer() -> decltype(checkRepellPlayer()) {
	using FunctionType = decltype(checkRepellPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2398d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::checkSpawnObjects() -> decltype(checkSpawnObjects()) {
	using FunctionType = decltype(checkSpawnObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21a8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::claimMoveAction(int groupID, bool ignoreStaticGroups) -> decltype(claimMoveAction(groupID, ignoreStaticGroups)) {
	using FunctionType = decltype(claimMoveAction(groupID, ignoreStaticGroups))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22dbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID, ignoreStaticGroups);
}

auto GJBaseGameLayer::claimParticle(gd::string key, int zLayer) -> decltype(claimParticle(key, zLayer)) {
	using FunctionType = decltype(claimParticle(key, zLayer))(*)(GJBaseGameLayer*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2409d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, zLayer);
}

auto GJBaseGameLayer::claimRotationAction(int targetID, int centerID, float& rotation, float& offset, bool ignoreStaticGroups, bool unused) -> decltype(claimRotationAction(targetID, centerID, rotation, offset, ignoreStaticGroups, unused)) {
	using FunctionType = decltype(claimRotationAction(targetID, centerID, rotation, offset, ignoreStaticGroups, unused))(*)(GJBaseGameLayer*, int, int, float&, float&, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22d9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, centerID, rotation, offset, ignoreStaticGroups, unused);
}

auto GJBaseGameLayer::collisionCheckObjects(PlayerObject* object, gd::vector<GameObject*>* objects, int objectCount, float dt) -> decltype(collisionCheckObjects(object, objects, objectCount, dt)) {
	using FunctionType = decltype(collisionCheckObjects(object, objects, objectCount, dt))(*)(GJBaseGameLayer*, PlayerObject*, gd::vector<GameObject*>*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, objectCount, dt);
}

auto GJBaseGameLayer::controlAreaEffect(EnterEffectObject* object, gd::vector<EnterEffectInstance>* instances, GJActionCommand command) -> decltype(controlAreaEffect(object, instances, command)) {
	using FunctionType = decltype(controlAreaEffect(object, instances, command))(*)(GJBaseGameLayer*, EnterEffectObject*, gd::vector<EnterEffectInstance>*, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2279f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, instances, command);
}

auto GJBaseGameLayer::controlAreaEffectWithID(int uniqueID, int controlID, GJActionCommand command) -> decltype(controlAreaEffectWithID(uniqueID, controlID, command)) {
	using FunctionType = decltype(controlAreaEffectWithID(uniqueID, controlID, command))(*)(GJBaseGameLayer*, int, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2277f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID, controlID, command);
}

auto GJBaseGameLayer::controlEventLink(int uniqueID, int controlID, GJActionCommand command) -> decltype(controlEventLink(uniqueID, controlID, command)) {
	using FunctionType = decltype(controlEventLink(uniqueID, controlID, command))(*)(GJBaseGameLayer*, int, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x232380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID, controlID, command);
}

auto GJBaseGameLayer::controlTriggersInGroup(int group, GJActionCommand command) -> decltype(controlTriggersInGroup(group, command)) {
	using FunctionType = decltype(controlTriggersInGroup(group, command))(*)(GJBaseGameLayer*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, group, command);
}

auto GJBaseGameLayer::controlTriggersWithControlID(int controlID, GJActionCommand command) -> decltype(controlTriggersWithControlID(controlID, command)) {
	using FunctionType = decltype(controlTriggersWithControlID(controlID, command))(*)(GJBaseGameLayer*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, controlID, command);
}

auto GJBaseGameLayer::createBackground(int background) -> decltype(createBackground(background)) {
	using FunctionType = decltype(createBackground(background))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20b820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, background);
}

auto GJBaseGameLayer::createGroundLayer(int ground, int line) -> decltype(createGroundLayer(ground, line)) {
	using FunctionType = decltype(createGroundLayer(ground, line))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20bc60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, ground, line);
}

auto GJBaseGameLayer::createMiddleground(int middleground) -> decltype(createMiddleground(middleground)) {
	using FunctionType = decltype(createMiddleground(middleground))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20bae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, middleground);
}

auto GJBaseGameLayer::createParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(createParticle(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(createParticle(objectType, plistName, tag, positionType))(*)(GJBaseGameLayer*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2405f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GJBaseGameLayer::createPlayer() -> decltype(createPlayer()) {
	using FunctionType = decltype(createPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20b310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createPlayerCollisionBlock() -> decltype(createPlayerCollisionBlock()) {
	using FunctionType = decltype(createPlayerCollisionBlock())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x218370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createTextLayers() -> decltype(createTextLayers()) {
	using FunctionType = decltype(createTextLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20ec90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::damagingObjectsInRect(cocos2d::CCRect rect, bool enabledGroups) -> decltype(damagingObjectsInRect(rect, enabledGroups)) {
	using FunctionType = decltype(damagingObjectsInRect(rect, enabledGroups))(*)(GJBaseGameLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rect, enabledGroups);
}

auto GJBaseGameLayer::destroyObject(GameObject* object) -> decltype(destroyObject(object)) {
	using FunctionType = decltype(destroyObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::exitStaticCamera(bool exitX, bool exitY, float time, int easingType, float easingRate, bool smoothVelocity, float smoothVelocityMod, bool exitInstant) -> decltype(exitStaticCamera(exitX, exitY, time, easingType, easingRate, smoothVelocity, smoothVelocityMod, exitInstant)) {
	using FunctionType = decltype(exitStaticCamera(exitX, exitY, time, easingType, easingRate, smoothVelocity, smoothVelocityMod, exitInstant))(*)(GJBaseGameLayer*, bool, bool, float, int, float, bool, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23f670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exitX, exitY, time, easingType, easingRate, smoothVelocity, smoothVelocityMod, exitInstant);
}

auto GJBaseGameLayer::flipGravity(PlayerObject* object, bool flip, bool noEffects) -> decltype(flipGravity(object, flip, noEffects)) {
	using FunctionType = decltype(flipGravity(object, flip, noEffects))(*)(GJBaseGameLayer*, PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, flip, noEffects);
}

auto GJBaseGameLayer::flipObjects() -> decltype(flipObjects()) {
	using FunctionType = decltype(flipObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x246a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::gameEventTriggered(GJGameEvent event, int material, int playerID) -> decltype(gameEventTriggered(event, material, playerID)) {
	using FunctionType = decltype(gameEventTriggered(event, material, playerID))(*)(GJBaseGameLayer*, GJGameEvent, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, event, material, playerID);
}

auto GJBaseGameLayer::generateEnterEasingBuffer(int easingType, float easingRate) -> decltype(generateEnterEasingBuffer(easingType, easingRate)) {
	using FunctionType = decltype(generateEnterEasingBuffer(easingType, easingRate))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20ea40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, easingType, easingRate);
}

auto GJBaseGameLayer::generateSpawnRemap() -> decltype(generateSpawnRemap()) {
	using FunctionType = decltype(generateSpawnRemap())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21dfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::generateTargetGroups() -> decltype(generateTargetGroups()) {
	using FunctionType = decltype(generateTargetGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::generateVisibilityGroups() -> decltype(generateVisibilityGroups()) {
	using FunctionType = decltype(generateVisibilityGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getAreaObjectValue(EnterEffectInstance* instance, GameObject* object, cocos2d::CCPoint& position, bool& show) -> decltype(getAreaObjectValue(instance, object, position, show)) {
	using FunctionType = decltype(getAreaObjectValue(instance, object, position, show))(*)(GJBaseGameLayer*, EnterEffectInstance*, GameObject*, cocos2d::CCPoint&, bool&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, instance, object, position, show);
}

auto GJBaseGameLayer::getEasedAreaValue(GameObject* object, EnterEffectInstance* instance, float value, bool show, int index) -> decltype(getEasedAreaValue(object, instance, value, show, index)) {
	using FunctionType = decltype(getEasedAreaValue(object, instance, value, show, index))(*)(GJBaseGameLayer*, GameObject*, EnterEffectInstance*, float, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, instance, value, show, index);
}

auto GJBaseGameLayer::getFollowSpeedVal(GameObject* object, int startSpeedRef, int startDirRef, float startDir, float startSpeed) -> decltype(getFollowSpeedVal(object, startSpeedRef, startDirRef, startDir, startSpeed)) {
	using FunctionType = decltype(getFollowSpeedVal(object, startSpeedRef, startDirRef, startDir, startSpeed))(*)(GJBaseGameLayer*, GameObject*, int, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22e950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, startSpeedRef, startDirRef, startDir, startSpeed);
}

auto GJBaseGameLayer::getGroundHeightForMode(int type) -> decltype(getGroundHeightForMode(type)) {
	using FunctionType = decltype(getGroundHeightForMode(type))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJBaseGameLayer::getGroup(int id) -> decltype(getGroup(id)) {
	using FunctionType = decltype(getGroup(id))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJBaseGameLayer::getItemValue(int type, int id) -> decltype(getItemValue(type, id)) {
	using FunctionType = decltype(getItemValue(type, id))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2341c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GJBaseGameLayer::getMaxPortalY() -> decltype(getMaxPortalY()) {
	using FunctionType = decltype(getMaxPortalY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getMinDistance(cocos2d::CCPoint position, cocos2d::CCArray* objects, float minNear, int mode) -> decltype(getMinDistance(position, objects, minNear, mode)) {
	using FunctionType = decltype(getMinDistance(position, objects, minNear, mode))(*)(GJBaseGameLayer*, cocos2d::CCPoint, cocos2d::CCArray*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2429c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, objects, minNear, mode);
}

auto GJBaseGameLayer::getMinPortalY() -> decltype(getMinPortalY()) {
	using FunctionType = decltype(getMinPortalY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getModifiedDelta(float dt) -> decltype(getModifiedDelta(dt)) {
	using FunctionType = decltype(getModifiedDelta(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2377b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::getParticleKey(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(getParticleKey(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(getParticleKey(objectType, plistName, tag, positionType))(*)(GJBaseGameLayer*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2403c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GJBaseGameLayer::getParticleKey2(gd::string key) -> decltype(getParticleKey2(key)) {
	using FunctionType = decltype(getParticleKey2(key))(*)(GJBaseGameLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJBaseGameLayer::getRecordString(bool compress) -> decltype(getRecordString(compress)) {
	using FunctionType = decltype(getRecordString(compress))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a2f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, compress);
}

auto GJBaseGameLayer::getSavedPosition(int groupID, float delay) -> decltype(getSavedPosition(groupID, delay)) {
	using FunctionType = decltype(getSavedPosition(groupID, delay))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2192a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID, delay);
}

auto GJBaseGameLayer::groupStickyObjects(cocos2d::CCArray* objects) -> decltype(groupStickyObjects(objects)) {
	using FunctionType = decltype(groupStickyObjects(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::handleButton(bool down, int button, bool isPlayer1) -> decltype(handleButton(down, button, isPlayer1)) {
	using FunctionType = decltype(handleButton(down, button, isPlayer1))(*)(GJBaseGameLayer*, bool, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2338e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, down, button, isPlayer1);
}

auto GJBaseGameLayer::hasUniqueCoin(EffectGameObject* object) -> decltype(hasUniqueCoin(object)) {
	using FunctionType = decltype(hasUniqueCoin(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::increaseBatchNodeCapacity() -> decltype(increaseBatchNodeCapacity()) {
	using FunctionType = decltype(increaseBatchNodeCapacity())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20cc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::lightningFlash(cocos2d::CCPoint from, cocos2d::CCPoint to, cocos2d::ccColor3B color, float lineWidth, float duration, int displacement, bool flash, float opacity) -> decltype(lightningFlash(from, to, color, lineWidth, duration, displacement, flash, opacity)) {
	using FunctionType = decltype(lightningFlash(from, to, color, lineWidth, duration, displacement, flash, opacity))(*)(GJBaseGameLayer*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, int, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x246d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, from, to, color, lineWidth, duration, displacement, flash, opacity);
}

auto GJBaseGameLayer::loadGroupParentsFromString(GameObject* object, gd::string groupList) -> decltype(loadGroupParentsFromString(object, groupList)) {
	using FunctionType = decltype(loadGroupParentsFromString(object, groupList))(*)(GJBaseGameLayer*, GameObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, groupList);
}

auto GJBaseGameLayer::loadLevelSettings() -> decltype(loadLevelSettings()) {
	using FunctionType = decltype(loadLevelSettings())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ad00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::loadStartPosObject() -> decltype(loadStartPosObject()) {
	using FunctionType = decltype(loadStartPosObject())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::loadUpToPosition(float position, int order, int channel) -> decltype(loadUpToPosition(position, order, channel)) {
	using FunctionType = decltype(loadUpToPosition(position, order, channel))(*)(GJBaseGameLayer*, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, order, channel);
}

auto GJBaseGameLayer::maxZOrderForShaderZ(int zLayer) -> decltype(maxZOrderForShaderZ(zLayer)) {
	using FunctionType = decltype(maxZOrderForShaderZ(zLayer))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2237b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}

auto GJBaseGameLayer::minZOrderForShaderZ(int zLayer) -> decltype(minZOrderForShaderZ(zLayer)) {
	using FunctionType = decltype(minZOrderForShaderZ(zLayer))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}

auto GJBaseGameLayer::modifyGroupPhysics(AdvancedFollowEditObject* object, cocos2d::CCArray* group) -> decltype(modifyGroupPhysics(object, group)) {
	using FunctionType = decltype(modifyGroupPhysics(object, group))(*)(GJBaseGameLayer*, AdvancedFollowEditObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22ee00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, group);
}

auto GJBaseGameLayer::moveAreaObject(GameObject* object, float dx, float dy) -> decltype(moveAreaObject(object, dx, dy)) {
	using FunctionType = decltype(moveAreaObject(object, dx, dy))(*)(GJBaseGameLayer*, GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22aab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, dx, dy);
}

auto GJBaseGameLayer::moveObjects(cocos2d::CCArray* objects, double dx, double dy, bool lockPlayerY) -> decltype(moveObjects(objects, dx, dy, lockPlayerY)) {
	using FunctionType = decltype(moveObjects(objects, dx, dy, lockPlayerY))(*)(GJBaseGameLayer*, cocos2d::CCArray*, double, double, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22dd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, dx, dy, lockPlayerY);
}

auto GJBaseGameLayer::moveObjectToStaticGroup(GameObject* object) -> decltype(moveObjectToStaticGroup(object)) {
	using FunctionType = decltype(moveObjectToStaticGroup(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::objectTypeToGameEvent(int type) -> decltype(objectTypeToGameEvent(type)) {
	using FunctionType = decltype(objectTypeToGameEvent(type))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x232560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJBaseGameLayer::optimizeMoveGroups() -> decltype(optimizeMoveGroups()) {
	using FunctionType = decltype(optimizeMoveGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x230a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::orderSpawnObjects() -> decltype(orderSpawnObjects()) {
	using FunctionType = decltype(orderSpawnObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x245d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::parentForZLayer(int zLayer, bool blending, int parentMode, int uiObject) -> decltype(parentForZLayer(zLayer, blending, parentMode, uiObject)) {
	using FunctionType = decltype(parentForZLayer(zLayer, blending, parentMode, uiObject))(*)(GJBaseGameLayer*, int, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20f160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zLayer, blending, parentMode, uiObject);
}

auto GJBaseGameLayer::pauseAudio() -> decltype(pauseAudio()) {
	using FunctionType = decltype(pauseAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2374b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::pickupItem(EffectGameObject* object) -> decltype(pickupItem(object)) {
	using FunctionType = decltype(pickupItem(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2161b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::playerCircleCollision(PlayerObject* player, GameObject* object) -> decltype(playerCircleCollision(player, object)) {
	using FunctionType = decltype(playerCircleCollision(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerTouchedRing(PlayerObject* player, RingObject* object) -> decltype(playerTouchedRing(player, object)) {
	using FunctionType = decltype(playerTouchedRing(player, object))(*)(GJBaseGameLayer*, PlayerObject*, RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x217e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerTouchedTrigger(PlayerObject* player, EffectGameObject* object) -> decltype(playerTouchedTrigger(player, object)) {
	using FunctionType = decltype(playerTouchedTrigger(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x217f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerWillSwitchMode(PlayerObject* player, GameObject* object) -> decltype(playerWillSwitchMode(player, object)) {
	using FunctionType = decltype(playerWillSwitchMode(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playExitDualEffect(PlayerObject* player) -> decltype(playExitDualEffect(player)) {
	using FunctionType = decltype(playExitDualEffect(player))(*)(GJBaseGameLayer*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player);
}

auto GJBaseGameLayer::playKeyframeAnimation(KeyframeAnimTriggerObject* object, gd::vector<int> const& remapKeys) -> decltype(playKeyframeAnimation(object, remapKeys)) {
	using FunctionType = decltype(playKeyframeAnimation(object, remapKeys))(*)(GJBaseGameLayer*, KeyframeAnimTriggerObject*, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x217bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::positionForShaderTarget(int groupID) -> decltype(positionForShaderTarget(groupID)) {
	using FunctionType = decltype(positionForShaderTarget(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::positionUIObjects() -> decltype(positionUIObjects()) {
	using FunctionType = decltype(positionUIObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x226070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::prepareSavePositionObjects() -> decltype(prepareSavePositionObjects()) {
	using FunctionType = decltype(prepareSavePositionObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2197b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::preUpdateVisibility(float dt) -> decltype(preUpdateVisibility(dt)) {
	using FunctionType = decltype(preUpdateVisibility(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processActivatedAudioTriggers(float levelTime) -> decltype(processActivatedAudioTriggers(levelTime)) {
	using FunctionType = decltype(processActivatedAudioTriggers(levelTime))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x243970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelTime);
}

auto GJBaseGameLayer::processAdvancedFollowAction(AdvancedFollowInstance& instance, bool started, float dt) -> decltype(processAdvancedFollowAction(instance, started, dt)) {
	using FunctionType = decltype(processAdvancedFollowAction(instance, started, dt))(*)(GJBaseGameLayer*, AdvancedFollowInstance&, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22f300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, instance, started, dt);
}

auto GJBaseGameLayer::processAdvancedFollowActions(float dt) -> decltype(processAdvancedFollowActions(dt)) {
	using FunctionType = decltype(processAdvancedFollowActions(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22f0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processAreaActions(float dt, bool visibleFrame) -> decltype(processAreaActions(dt, visibleFrame)) {
	using FunctionType = decltype(processAreaActions(dt, visibleFrame))(*)(GJBaseGameLayer*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, visibleFrame);
}

auto GJBaseGameLayer::processAreaEffects(gd::vector<EnterEffectInstance>* effects, GJAreaActionType type, float dt, bool visibleFrame) -> decltype(processAreaEffects(effects, type, dt, visibleFrame)) {
	using FunctionType = decltype(processAreaEffects(effects, type, dt, visibleFrame))(*)(GJBaseGameLayer*, gd::vector<EnterEffectInstance>*, GJAreaActionType, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2283e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, effects, type, dt, visibleFrame);
}

auto GJBaseGameLayer::processAreaMoveGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaMoveGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaMoveGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processAreaRotateGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaRotateGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaRotateGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processAreaTintGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups) -> decltype(processAreaTintGroupAction(objects, instance, position, targetGroups)) {
	using FunctionType = decltype(processAreaTintGroupAction(objects, instance, position, targetGroups))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22aba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, targetGroups);
}

auto GJBaseGameLayer::processAreaTransformGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaTransformGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaTransformGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processCommands(float dt, bool isHalfTick, bool isLastTick) -> decltype(processCommands(dt, isHalfTick, isLastTick)) {
	using FunctionType = decltype(processCommands(dt, isHalfTick, isLastTick))(*)(GJBaseGameLayer*, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, isHalfTick, isLastTick);
}

auto GJBaseGameLayer::processDynamicObjectActions(int type, float dt) -> decltype(processDynamicObjectActions(type, dt)) {
	using FunctionType = decltype(processDynamicObjectActions(type, dt))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22e280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, dt);
}

auto GJBaseGameLayer::processFollowActions() -> decltype(processFollowActions()) {
	using FunctionType = decltype(processFollowActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x230580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processItems() -> decltype(processItems()) {
	using FunctionType = decltype(processItems())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processMoveActions() -> decltype(processMoveActions()) {
	using FunctionType = decltype(processMoveActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22d5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processMoveActionsStep(float dt, bool visibleFrame) -> decltype(processMoveActionsStep(dt, visibleFrame)) {
	using FunctionType = decltype(processMoveActionsStep(dt, visibleFrame))(*)(GJBaseGameLayer*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22b5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, visibleFrame);
}

auto GJBaseGameLayer::processOptionsTrigger(GameOptionsTrigger* object) -> decltype(processOptionsTrigger(object)) {
	using FunctionType = decltype(processOptionsTrigger(object))(*)(GJBaseGameLayer*, GameOptionsTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::processPlayerFollowActions(float dt) -> decltype(processPlayerFollowActions(dt)) {
	using FunctionType = decltype(processPlayerFollowActions(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22ded0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processQueuedAudioTriggers() -> decltype(processQueuedAudioTriggers()) {
	using FunctionType = decltype(processQueuedAudioTriggers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23bae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processQueuedButtons(float dt, bool clearInputQueue) -> decltype(processQueuedButtons(dt, clearInputQueue)) {
	using FunctionType = decltype(processQueuedButtons(dt, clearInputQueue))(*)(GJBaseGameLayer*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, clearInputQueue);
}

auto GJBaseGameLayer::processRotationActions() -> decltype(processRotationActions()) {
	using FunctionType = decltype(processRotationActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22b7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processSFXObjects() -> decltype(processSFXObjects()) {
	using FunctionType = decltype(processSFXObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processSFXState(SFXTriggerState* state1, SFXTriggerState* state2, int type, float levelTime) -> decltype(processSFXState(state1, state2, type, levelTime)) {
	using FunctionType = decltype(processSFXState(state1, state2, type, levelTime))(*)(GJBaseGameLayer*, SFXTriggerState*, SFXTriggerState*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x244e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state1, state2, type, levelTime);
}

auto GJBaseGameLayer::processSongState(int musicID, float spawnDelay, float levelTime, int songOffset, float volume, float speed, gd::vector<SongTriggerState>* states, SongTriggerGameObject* object) -> decltype(processSongState(musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object)) {
	using FunctionType = decltype(processSongState(musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object))(*)(GJBaseGameLayer*, int, float, float, int, float, float, gd::vector<SongTriggerState>*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x245350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object);
}

auto GJBaseGameLayer::processTransformActions(bool visibleFrame) -> decltype(processTransformActions(visibleFrame)) {
	using FunctionType = decltype(processTransformActions(visibleFrame))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visibleFrame);
}

auto GJBaseGameLayer::refreshCounterLabels() -> decltype(refreshCounterLabels()) {
	using FunctionType = decltype(refreshCounterLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2355b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::refreshKeyframeAnims() -> decltype(refreshKeyframeAnims()) {
	using FunctionType = decltype(refreshKeyframeAnims())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::removeFromGroups(GameObject* object) -> decltype(removeFromGroups(object)) {
	using FunctionType = decltype(removeFromGroups(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2240c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removeGroupParent(int groupID) -> decltype(removeGroupParent(groupID)) {
	using FunctionType = decltype(removeGroupParent(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::removeObjectFromSection(GameObject* object) -> decltype(removeObjectFromSection(object)) {
	using FunctionType = decltype(removeObjectFromSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x226d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removeReleasedButtons() -> decltype(removeReleasedButtons()) {
	using FunctionType = decltype(removeReleasedButtons())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetActiveEnterEffects() -> decltype(resetActiveEnterEffects()) {
	using FunctionType = decltype(resetActiveEnterEffects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20e390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetAreaObjectValues(GameObject* object, bool update) -> decltype(resetAreaObjectValues(object, update)) {
	using FunctionType = decltype(resetAreaObjectValues(object, update))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x227c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, update);
}

auto GJBaseGameLayer::resetAudio() -> decltype(resetAudio()) {
	using FunctionType = decltype(resetAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetCamera() -> decltype(resetCamera()) {
	using FunctionType = decltype(resetCamera())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23fb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetGradientLayers() -> decltype(resetGradientLayers()) {
	using FunctionType = decltype(resetGradientLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x220fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetLevelVariables() -> decltype(resetLevelVariables()) {
	using FunctionType = decltype(resetLevelVariables())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetPlayer() -> decltype(resetPlayer()) {
	using FunctionType = decltype(resetPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2120b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetRecord(int steps, bool noFullReset) -> decltype(resetRecord(steps, noFullReset)) {
	using FunctionType = decltype(resetRecord(steps, noFullReset))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, steps, noFullReset);
}

auto GJBaseGameLayer::resetSpawnChannelIndex() -> decltype(resetSpawnChannelIndex()) {
	using FunctionType = decltype(resetSpawnChannelIndex())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x245e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetStaticCamera(bool resetX, bool resetY) -> decltype(resetStaticCamera(resetX, resetY)) {
	using FunctionType = decltype(resetStaticCamera(resetX, resetY))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23fde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, resetX, resetY);
}

auto GJBaseGameLayer::restoreRemap(EffectGameObject* object, gd::unordered_map<int, int>& remap) -> decltype(restoreRemap(object, remap)) {
	using FunctionType = decltype(restoreRemap(object, remap))(*)(GJBaseGameLayer*, EffectGameObject*, gd::unordered_map<int, int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21cfa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remap);
}

auto GJBaseGameLayer::resumeAudio() -> decltype(resumeAudio()) {
	using FunctionType = decltype(resumeAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::rotateAreaObjects(GameObject* object, cocos2d::CCArray* objects, float rotation, bool reset) -> decltype(rotateAreaObjects(object, objects, rotation, reset)) {
	using FunctionType = decltype(rotateAreaObjects(object, objects, rotation, reset))(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, rotation, reset);
}

auto GJBaseGameLayer::rotateObject(GameObject* object, float rotation) -> decltype(rotateObject(object, rotation)) {
	using FunctionType = decltype(rotateObject(object, rotation))(*)(GJBaseGameLayer*, GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, rotation);
}

auto GJBaseGameLayer::rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint position, cocos2d::CCPoint offset, bool finished, bool unused) -> decltype(rotateObjects(objects, rotation, position, offset, finished, unused)) {
	using FunctionType = decltype(rotateObjects(objects, rotation, position, offset, finished, unused))(*)(GJBaseGameLayer*, cocos2d::CCArray*, float, cocos2d::CCPoint, cocos2d::CCPoint, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c1a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, rotation, position, offset, finished, unused);
}

auto GJBaseGameLayer::setGroupParent(GameObject* object, int groupID) -> decltype(setGroupParent(object, groupID)) {
	using FunctionType = decltype(setGroupParent(object, groupID))(*)(GJBaseGameLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, groupID);
}

auto GJBaseGameLayer::setupLayers() -> decltype(setupLayers()) {
	using FunctionType = decltype(setupLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::setupLevelStart(LevelSettingsObject* settings) -> decltype(setupLevelStart(settings)) {
	using FunctionType = decltype(setupLevelStart(settings))(*)(GJBaseGameLayer*, LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, settings);
}

auto GJBaseGameLayer::shakeCamera(float duration, float strength, float interval) -> decltype(shakeCamera(duration, strength, interval)) {
	using FunctionType = decltype(shakeCamera(duration, strength, interval))(*)(GJBaseGameLayer*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23bc50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, strength, interval);
}

auto GJBaseGameLayer::shouldExitHackedLevel() -> decltype(shouldExitHackedLevel()) {
	using FunctionType = decltype(shouldExitHackedLevel())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20b050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortGroups() -> decltype(sortGroups()) {
	using FunctionType = decltype(sortGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2242f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortSectionVector() -> decltype(sortSectionVector()) {
	using FunctionType = decltype(sortSectionVector())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x226fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortStickyGroups() -> decltype(sortStickyGroups()) {
	using FunctionType = decltype(sortStickyGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::spawnObjectsInOrder(cocos2d::CCArray* objects, double delay, gd::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(spawnObjectsInOrder(objects, delay, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(spawnObjectsInOrder(objects, delay, remapKeys, uniqueID, controlID))(*)(GJBaseGameLayer*, cocos2d::CCArray*, double, gd::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21ae00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, delay, remapKeys, uniqueID, controlID);
}

auto GJBaseGameLayer::spawnParticle(char const* plist, int zOrder, cocos2d::tCCPositionType positionType, cocos2d::CCPoint position) -> decltype(spawnParticle(plist, zOrder, positionType, position)) {
	using FunctionType = decltype(spawnParticle(plist, zOrder, positionType, position))(*)(GJBaseGameLayer*, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2402e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, plist, zOrder, positionType, position);
}

auto GJBaseGameLayer::spawnParticleTrigger(int particleID, cocos2d::CCPoint position, float rotation, float scale) -> decltype(spawnParticleTrigger(particleID, position, rotation, scale)) {
	using FunctionType = decltype(spawnParticleTrigger(particleID, position, rotation, scale))(*)(GJBaseGameLayer*, int, cocos2d::CCPoint, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23feb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, particleID, position, rotation, scale);
}

auto GJBaseGameLayer::speedForShaderTarget(int groupID) -> decltype(speedForShaderTarget(groupID)) {
	using FunctionType = decltype(speedForShaderTarget(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::staticObjectsInRect(cocos2d::CCRect rect, bool enabledGroups) -> decltype(staticObjectsInRect(rect, enabledGroups)) {
	using FunctionType = decltype(staticObjectsInRect(rect, enabledGroups))(*)(GJBaseGameLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rect, enabledGroups);
}

auto GJBaseGameLayer::stopCustomEnterEffect(EnterEffectObject* object, bool enter) -> decltype(stopCustomEnterEffect(object, enter)) {
	using FunctionType = decltype(stopCustomEnterEffect(object, enter))(*)(GJBaseGameLayer*, EnterEffectObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20e760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, enter);
}

auto GJBaseGameLayer::switchToRobotMode(PlayerObject* player, GameObject* object, bool noPortal) -> decltype(switchToRobotMode(player, object, noPortal)) {
	using FunctionType = decltype(switchToRobotMode(player, object, noPortal))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object, noPortal);
}

auto GJBaseGameLayer::switchToRollMode(PlayerObject* player, GameObject* object, bool noPortal) -> decltype(switchToRollMode(player, object, noPortal)) {
	using FunctionType = decltype(switchToRollMode(player, object, noPortal))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object, noPortal);
}

auto GJBaseGameLayer::switchToSpiderMode(PlayerObject* player, GameObject* object, bool noPortal) -> decltype(switchToSpiderMode(player, object, noPortal)) {
	using FunctionType = decltype(switchToSpiderMode(player, object, noPortal))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object, noPortal);
}

auto GJBaseGameLayer::syncBGTextures() -> decltype(syncBGTextures()) {
	using FunctionType = decltype(syncBGTextures())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23afa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::teleportPlayer(TeleportPortalObject* object, PlayerObject* player) -> decltype(teleportPlayer(object, player)) {
	using FunctionType = decltype(teleportPlayer(object, player))(*)(GJBaseGameLayer*, TeleportPortalObject*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20fdb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, player);
}

auto GJBaseGameLayer::toggleAudioVisualizer(bool visible) -> decltype(toggleAudioVisualizer(visible)) {
	using FunctionType = decltype(toggleAudioVisualizer(visible))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x248ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto GJBaseGameLayer::toggleDualMode(GameObject* object, bool dual, PlayerObject* player, bool noEffects) -> decltype(toggleDualMode(object, dual, player, noEffects)) {
	using FunctionType = decltype(toggleDualMode(object, dual, player, noEffects))(*)(GJBaseGameLayer*, GameObject*, bool, PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2168d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, dual, player, noEffects);
}

auto GJBaseGameLayer::toggleFlipped(bool flip, bool noEffects) -> decltype(toggleFlipped(flip, noEffects)) {
	using FunctionType = decltype(toggleFlipped(flip, noEffects))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2467d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, flip, noEffects);
}

auto GJBaseGameLayer::toggleGroup(int id, bool activate) -> decltype(toggleGroup(id, activate)) {
	using FunctionType = decltype(toggleGroup(id, activate))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, activate);
}

auto GJBaseGameLayer::transformAreaObjects(GameObject* object, cocos2d::CCArray* objects, float scaleX, float scaleY, bool reset) -> decltype(transformAreaObjects(object, objects, scaleX, scaleY, reset)) {
	using FunctionType = decltype(transformAreaObjects(object, objects, scaleX, scaleY, reset))(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, scaleX, scaleY, reset);
}

auto GJBaseGameLayer::triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* object) -> decltype(triggerAdvancedFollowEditCommand(object)) {
	using FunctionType = decltype(triggerAdvancedFollowEditCommand(object))(*)(GJBaseGameLayer*, AdvancedFollowEditObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22eac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerAreaEffect(EnterEffectObject* object) -> decltype(triggerAreaEffect(object)) {
	using FunctionType = decltype(triggerAreaEffect(object))(*)(GJBaseGameLayer*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2271c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerDynamicRotateCommand(EnhancedTriggerObject* object) -> decltype(triggerDynamicRotateCommand(object)) {
	using FunctionType = decltype(triggerDynamicRotateCommand(object))(*)(GJBaseGameLayer*, EnhancedTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerGradientCommand(GradientTriggerObject* object) -> decltype(triggerGradientCommand(object)) {
	using FunctionType = decltype(triggerGradientCommand(object))(*)(GJBaseGameLayer*, GradientTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerMoveCommand(EffectGameObject* object) -> decltype(triggerMoveCommand(object)) {
	using FunctionType = decltype(triggerMoveCommand(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21ea40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerShaderCommand(ShaderGameObject* object) -> decltype(triggerShaderCommand(object)) {
	using FunctionType = decltype(triggerShaderCommand(object))(*)(GJBaseGameLayer*, ShaderGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerTransformCommand(TransformTriggerGameObject* object) -> decltype(triggerTransformCommand(object)) {
	using FunctionType = decltype(triggerTransformCommand(object))(*)(GJBaseGameLayer*, TransformTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::tryGetMainObject(int groupID) -> decltype(tryGetMainObject(groupID)) {
	using FunctionType = decltype(tryGetMainObject(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::tryGetObject(int groupID) -> decltype(tryGetObject(groupID)) {
	using FunctionType = decltype(tryGetObject(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::unclaimParticle(char const* key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimParticle(key, particle)) {
	using FunctionType = decltype(unclaimParticle(key, particle))(*)(GJBaseGameLayer*, char const*, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, particle);
}

auto GJBaseGameLayer::ungroupStickyObjects(cocos2d::CCArray* objects) -> decltype(ungroupStickyObjects(objects)) {
	using FunctionType = decltype(ungroupStickyObjects(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::updateAreaObjectLastValues(GameObject* object) -> decltype(updateAreaObjectLastValues(object)) {
	using FunctionType = decltype(updateAreaObjectLastValues(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x227eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::updateAudioVisualizer() -> decltype(updateAudioVisualizer()) {
	using FunctionType = decltype(updateAudioVisualizer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x248880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateCamera(float dt) -> decltype(updateCamera(dt)) {
	using FunctionType = decltype(updateCamera(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23bcf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updateCameraBGArt(cocos2d::CCPoint position, float zoom) -> decltype(updateCameraBGArt(position, zoom)) {
	using FunctionType = decltype(updateCameraBGArt(position, zoom))(*)(GJBaseGameLayer*, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, zoom);
}

auto GJBaseGameLayer::updateCameraOffsetX(float offsetX, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateCameraOffsetX(offsetX, duration, easingType, easingRate, uniqueID, controlID)) {
	using FunctionType = decltype(updateCameraOffsetX(offsetX, duration, easingType, easingRate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offsetX, duration, easingType, easingRate, uniqueID, controlID);
}

auto GJBaseGameLayer::updateCameraOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateCameraOffsetY(offsetY, duration, easingType, easingRate, uniqueID, controlID)) {
	using FunctionType = decltype(updateCameraOffsetY(offsetY, duration, easingType, easingRate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offsetY, duration, easingType, easingRate, uniqueID, controlID);
}

auto GJBaseGameLayer::updateCollisionBlocks() -> decltype(updateCollisionBlocks()) {
	using FunctionType = decltype(updateCollisionBlocks())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2187d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateCounters(int itemId, int value) -> decltype(updateCounters(itemId, value)) {
	using FunctionType = decltype(updateCounters(itemId, value))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, itemId, value);
}

auto GJBaseGameLayer::updateDualGround(PlayerObject* object, int mode, bool instant, float duration) -> decltype(updateDualGround(object, mode, instant, duration)) {
	using FunctionType = decltype(updateDualGround(object, mode, instant, duration))(*)(GJBaseGameLayer*, PlayerObject*, int, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, mode, instant, duration);
}

auto GJBaseGameLayer::updateEnterEffects(float dt) -> decltype(updateEnterEffects(dt)) {
	using FunctionType = decltype(updateEnterEffects(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20e960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updateExtraGameLayers() -> decltype(updateExtraGameLayers()) {
	using FunctionType = decltype(updateExtraGameLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGradientLayers() -> decltype(updateGradientLayers()) {
	using FunctionType = decltype(updateGradientLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGroundShadows() -> decltype(updateGroundShadows()) {
	using FunctionType = decltype(updateGroundShadows())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20bd60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGuideArt() -> decltype(updateGuideArt()) {
	using FunctionType = decltype(updateGuideArt())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2466c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateKeyframeOrder(int keyframeGroup) -> decltype(updateKeyframeOrder(keyframeGroup)) {
	using FunctionType = decltype(updateKeyframeOrder(keyframeGroup))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, keyframeGroup);
}

auto GJBaseGameLayer::updateLayerCapacity(gd::string capacityString) -> decltype(updateLayerCapacity(capacityString)) {
	using FunctionType = decltype(updateLayerCapacity(capacityString))(*)(GJBaseGameLayer*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20cd00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, capacityString);
}

auto GJBaseGameLayer::updateLevelColors() -> decltype(updateLevelColors()) {
	using FunctionType = decltype(updateLevelColors())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20c490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateMaxGameplayY() -> decltype(updateMaxGameplayY()) {
	using FunctionType = decltype(updateMaxGameplayY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23aec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateMGOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateMGOffsetY(offsetY, duration, easingType, easingRate, uniqueID, controlID)) {
	using FunctionType = decltype(updateMGOffsetY(offsetY, duration, easingType, easingRate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2360b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offsetY, duration, easingType, easingRate, uniqueID, controlID);
}

auto GJBaseGameLayer::updateParticles(float dt) -> decltype(updateParticles(dt)) {
	using FunctionType = decltype(updateParticles(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updatePlatformerTime() -> decltype(updatePlatformerTime()) {
	using FunctionType = decltype(updatePlatformerTime())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2396c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updatePlayerCollisionBlocks() -> decltype(updatePlayerCollisionBlocks()) {
	using FunctionType = decltype(updatePlayerCollisionBlocks())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2185a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateProximityVolumeEffects() -> decltype(updateProximityVolumeEffects()) {
	using FunctionType = decltype(updateProximityVolumeEffects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateShaderLayer(float dt) -> decltype(updateShaderLayer(dt)) {
	using FunctionType = decltype(updateShaderLayer(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2222b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updateSpecialGroupData() -> decltype(updateSpecialGroupData()) {
	using FunctionType = decltype(updateSpecialGroupData())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20df30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateSpecialLabels() -> decltype(updateSpecialLabels()) {
	using FunctionType = decltype(updateSpecialLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2393e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateStaticCameraPos(cocos2d::CCPoint pos, bool staticX, bool staticY, bool followOrSmoothEase, float time, int easingType, float easingRate) -> decltype(updateStaticCameraPos(pos, staticX, staticY, followOrSmoothEase, time, easingType, easingRate)) {
	using FunctionType = decltype(updateStaticCameraPos(pos, staticX, staticY, followOrSmoothEase, time, easingType, easingRate))(*)(GJBaseGameLayer*, cocos2d::CCPoint, bool, bool, bool, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23f230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, pos, staticX, staticY, followOrSmoothEase, time, easingType, easingRate);
}

auto GJBaseGameLayer::updateStaticCameraPosToGroup(int centerID, bool updateX, bool updateY, bool followObject, float followEase, float duration, int easingType, float easingRate, bool smoothVelocity, float velocityMod) -> decltype(updateStaticCameraPosToGroup(centerID, updateX, updateY, followObject, followEase, duration, easingType, easingRate, smoothVelocity, velocityMod)) {
	using FunctionType = decltype(updateStaticCameraPosToGroup(centerID, updateX, updateY, followObject, followEase, duration, easingType, easingRate, smoothVelocity, velocityMod))(*)(GJBaseGameLayer*, int, bool, bool, bool, float, float, int, float, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ee40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, centerID, updateX, updateY, followObject, followEase, duration, easingType, easingRate, smoothVelocity, velocityMod);
}

auto GJBaseGameLayer::updateTimerLabels() -> decltype(updateTimerLabels()) {
	using FunctionType = decltype(updateTimerLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateZoom(float zoom, float duration, int easing, float rate, int uniqueID, int controlID) -> decltype(updateZoom(zoom, duration, easing, rate, uniqueID, controlID)) {
	using FunctionType = decltype(updateZoom(zoom, duration, easing, rate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zoom, duration, easing, rate, uniqueID, controlID);
}

auto GJBaseGameLayer::visitWithColorFlash() -> decltype(visitWithColorFlash()) {
	using FunctionType = decltype(visitWithColorFlash())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2482c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::volumeForProximityEffect(SFXTriggerInstance& instance) -> decltype(volumeForProximityEffect(instance)) {
	using FunctionType = decltype(volumeForProximityEffect(instance))(*)(GJBaseGameLayer*, SFXTriggerInstance&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2425f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, instance);
}
