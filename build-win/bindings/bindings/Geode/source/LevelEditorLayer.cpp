
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

LevelEditorLayer::LevelEditorLayer() : LevelEditorLayer(geode::CutoffConstructor, sizeof(LevelEditorLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	LevelEditorLayer::~LevelEditorLayer();

	using FunctionType = void(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d0b50, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::create(GJGameLevel* level, bool noUI) -> decltype(create(level, noUI)) {
	using FunctionType = decltype(create(level, noUI))(*)(GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d1d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, noUI);
}

auto LevelEditorLayer::updateObjectLabel(GameObject* object) -> decltype(updateObjectLabel(object)) {
	using FunctionType = decltype(updateObjectLabel(object))(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d7660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelEditorLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::draw), this);
	using FunctionType = decltype(draw())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e88d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::postUpdate(float dt) -> decltype(postUpdate(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&LevelEditorLayer::postUpdate), this);
	using FunctionType = decltype(postUpdate(dt))(*)(LevelEditorLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e0f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto LevelEditorLayer::updateVisibility(float dt) -> decltype(updateVisibility(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&LevelEditorLayer::updateVisibility), this);
	using FunctionType = decltype(updateVisibility(dt))(*)(LevelEditorLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d8e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto LevelEditorLayer::playerTookDamage(PlayerObject* player) -> decltype(playerTookDamage(player)) {
	auto self = addresser::thunkAdjust(Resolve<PlayerObject*>::func(&LevelEditorLayer::playerTookDamage), this);
	using FunctionType = decltype(playerTookDamage(player))(*)(LevelEditorLayer*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e0f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, player);
}

auto LevelEditorLayer::updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2) -> decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&LevelEditorLayer::updateColor), this);
	using FunctionType = decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2))(*)(LevelEditorLayer*, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dda10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2);
}

auto LevelEditorLayer::updateDebugDraw() -> decltype(updateDebugDraw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::updateDebugDraw), this);
	using FunctionType = decltype(updateDebugDraw())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e6c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::addToGroup(GameObject* object, int groupID, bool triggerGroup) -> decltype(addToGroup(object, groupID, triggerGroup)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int, bool>::func(&LevelEditorLayer::addToGroup), this);
	using FunctionType = decltype(addToGroup(object, groupID, triggerGroup))(*)(LevelEditorLayer*, GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dea00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID, triggerGroup);
}

auto LevelEditorLayer::removeFromGroup(GameObject* object, int groupID) -> decltype(removeFromGroup(object, groupID)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int>::func(&LevelEditorLayer::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(object, groupID))(*)(LevelEditorLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2deb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID);
}

auto LevelEditorLayer::updateObjectSection(GameObject* object) -> decltype(updateObjectSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&LevelEditorLayer::updateObjectSection), this);
	using FunctionType = decltype(updateObjectSection(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2df930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::updateDisabledObjectsLastPos(cocos2d::CCArray* objects) -> decltype(updateDisabledObjectsLastPos(objects)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&LevelEditorLayer::updateDisabledObjectsLastPos), this);
	using FunctionType = decltype(updateDisabledObjectsLastPos(objects))(*)(LevelEditorLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dfbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, objects);
}

auto LevelEditorLayer::timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id) -> decltype(timeForPos(position, order, channel, songTriggers, id)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint, int, int, bool, int>::func(&LevelEditorLayer::timeForPos), this);
	using FunctionType = decltype(timeForPos(position, order, channel, songTriggers, id))(*)(LevelEditorLayer*, cocos2d::CCPoint, int, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position, order, channel, songTriggers, id);
}

auto LevelEditorLayer::posForTime(float time) -> decltype(posForTime(time)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&LevelEditorLayer::posForTime), this);
	using FunctionType = decltype(posForTime(time))(*)(LevelEditorLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de8a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, time);
}

auto LevelEditorLayer::resetSPTriggered() -> decltype(resetSPTriggered()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::resetSPTriggered), this);
	using FunctionType = decltype(resetSPTriggered())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::didRotateGameplay() -> decltype(didRotateGameplay()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::didRotateGameplay), this);
	using FunctionType = decltype(didRotateGameplay())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2df8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::manualUpdateObjectColors(GameObject* object) -> decltype(manualUpdateObjectColors(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&LevelEditorLayer::manualUpdateObjectColors), this);
	using FunctionType = decltype(manualUpdateObjectColors(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d9e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::claimCustomParticle(gd::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd) -> decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool>::func(&LevelEditorLayer::claimCustomParticle), this);
	using FunctionType = decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd))(*)(LevelEditorLayer*, gd::string const&, cocos2d::ParticleStruct const&, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e16d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, zLayer, zOrder, uiObject, dontAdd);
}

auto LevelEditorLayer::unclaimCustomParticle(gd::string const& key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimCustomParticle(key, particle)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, cocos2d::CCParticleSystemQuad*>::func(&LevelEditorLayer::unclaimCustomParticle), this);
	using FunctionType = decltype(unclaimCustomParticle(key, particle))(*)(LevelEditorLayer*, gd::string const&, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particle);
}

auto LevelEditorLayer::activatedAudioTrigger(SFXTriggerGameObject* object) -> decltype(activatedAudioTrigger(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXTriggerGameObject*>::func(&LevelEditorLayer::activatedAudioTrigger), this);
	using FunctionType = decltype(activatedAudioTrigger(object))(*)(LevelEditorLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e0e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::checkpointActivated(CheckpointGameObject* object) -> decltype(checkpointActivated(object)) {
	auto self = addresser::thunkAdjust(Resolve<CheckpointGameObject*>::func(&LevelEditorLayer::checkpointActivated), this);
	using FunctionType = decltype(checkpointActivated(object))(*)(LevelEditorLayer*, CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e0e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::addKeyframe(KeyframeGameObject* object) -> decltype(addKeyframe(object)) {
	auto self = addresser::thunkAdjust(Resolve<KeyframeGameObject*>::func(&LevelEditorLayer::addKeyframe), this);
	using FunctionType = decltype(addKeyframe(object))(*)(LevelEditorLayer*, KeyframeGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e17d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::levelSettingsUpdated() -> decltype(levelSettingsUpdated()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::levelSettingsUpdated), this);
	using FunctionType = decltype(levelSettingsUpdated())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d3720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::activateTriggerEffect(EffectGameObject* object, float currentTime, float playTime, float boundTime, bool active) -> decltype(activateTriggerEffect(object, currentTime, playTime, boundTime, active)) {
	using FunctionType = decltype(activateTriggerEffect(object, currentTime, playTime, boundTime, active))(*)(LevelEditorLayer*, EffectGameObject*, float, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dcf40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, currentTime, playTime, boundTime, active);
}

auto LevelEditorLayer::addDelayedSpawn(EffectGameObject* object, float delay) -> decltype(addDelayedSpawn(object, delay)) {
	using FunctionType = decltype(addDelayedSpawn(object, delay))(*)(LevelEditorLayer*, EffectGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dd790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, delay);
}

auto LevelEditorLayer::addSpecial(GameObject* object) -> decltype(addSpecial(object)) {
	using FunctionType = decltype(addSpecial(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d7bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::applyGroupState(GameObject* dest, GameObject* src) -> decltype(applyGroupState(dest, src)) {
	using FunctionType = decltype(applyGroupState(dest, src))(*)(LevelEditorLayer*, GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e13d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dest, src);
}

auto LevelEditorLayer::breakApartTextObject(TextGameObject* object) -> decltype(breakApartTextObject(object)) {
	using FunctionType = decltype(breakApartTextObject(object))(*)(LevelEditorLayer*, TextGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2df5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::copyObjectState(GameObject* object) -> decltype(copyObjectState(object)) {
	using FunctionType = decltype(copyObjectState(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::createObject(int key, cocos2d::CCPoint position, bool noUndo) -> decltype(createObject(key, position, noUndo)) {
	using FunctionType = decltype(createObject(key, position, noUndo))(*)(LevelEditorLayer*, int, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d46a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, position, noUndo);
}

auto LevelEditorLayer::createObjectsFromSetup(gd::string& setup) -> decltype(createObjectsFromSetup(setup)) {
	using FunctionType = decltype(createObjectsFromSetup(setup))(*)(LevelEditorLayer*, gd::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d3800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto LevelEditorLayer::createObjectsFromString(gd::string const& str, bool noUndo, bool noLimit) -> decltype(createObjectsFromString(str, noUndo, noLimit)) {
	using FunctionType = decltype(createObjectsFromString(str, noUndo, noLimit))(*)(LevelEditorLayer*, gd::string const&, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, noUndo, noLimit);
}

auto LevelEditorLayer::duplicateKeyframeAnimation(int keyframeGroup) -> decltype(duplicateKeyframeAnimation(keyframeGroup)) {
	using FunctionType = decltype(duplicateKeyframeAnimation(keyframeGroup))(*)(LevelEditorLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, keyframeGroup);
}

auto LevelEditorLayer::getLastObjectX() -> decltype(getLastObjectX()) {
	using FunctionType = decltype(getLastObjectX())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::getLevelString() -> decltype(getLevelString()) {
	using FunctionType = decltype(getLevelString())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d6c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::getNextColorChannel() -> decltype(getNextColorChannel()) {
	using FunctionType = decltype(getNextColorChannel())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2db070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::getNextFreeAreaEffectID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeAreaEffectID(exclude)) {
	using FunctionType = decltype(getNextFreeAreaEffectID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dae50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeEditorLayer(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeEditorLayer(exclude)) {
	using FunctionType = decltype(getNextFreeEditorLayer(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dabf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeEnterChannel(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeEnterChannel(exclude)) {
	using FunctionType = decltype(getNextFreeEnterChannel(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dad20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeGradientID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeGradientID(exclude)) {
	using FunctionType = decltype(getNextFreeGradientID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2daf60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeGroupID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeGroupID(exclude)) {
	using FunctionType = decltype(getNextFreeGroupID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2da7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeItemID(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeItemID(exclude)) {
	using FunctionType = decltype(getNextFreeItemID(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2da980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getNextFreeOrderChannel(const gd::unordered_set<int>& exclude) -> decltype(getNextFreeOrderChannel(exclude)) {
	using FunctionType = decltype(getNextFreeOrderChannel(exclude))(*)(LevelEditorLayer*, const gd::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2daab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, exclude);
}

auto LevelEditorLayer::getObjectRect(GameObject* object, bool forceSize, bool dontCalculate) -> decltype(getObjectRect(object, forceSize, dontCalculate)) {
	using FunctionType = decltype(getObjectRect(object, forceSize, dontCalculate))(*)(LevelEditorLayer*, GameObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d5800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, forceSize, dontCalculate);
}

auto LevelEditorLayer::getSFXIDs() -> decltype(getSFXIDs()) {
	using FunctionType = decltype(getSFXIDs())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d7360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::getSongIDs(bool& multipleSongs) -> decltype(getSongIDs(multipleSongs)) {
	using FunctionType = decltype(getSongIDs(multipleSongs))(*)(LevelEditorLayer*, bool&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d6fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, multipleSongs);
}

auto LevelEditorLayer::getTriggerGroup(int id) -> decltype(getTriggerGroup(id)) {
	using FunctionType = decltype(getTriggerGroup(id))(*)(LevelEditorLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2decb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto LevelEditorLayer::handleAction(bool undo, cocos2d::CCArray* undoObjects) -> decltype(handleAction(undo, undoObjects)) {
	using FunctionType = decltype(handleAction(undo, undoObjects))(*)(LevelEditorLayer*, bool, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d6550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, undo, undoObjects);
}

auto LevelEditorLayer::init(GJGameLevel* level, bool noUI) -> decltype(init(level, noUI)) {
	using FunctionType = decltype(init(level, noUI))(*)(LevelEditorLayer*, GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d1dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, noUI);
}

auto LevelEditorLayer::objectAtPosition(cocos2d::CCPoint position) -> decltype(objectAtPosition(position)) {
	using FunctionType = decltype(objectAtPosition(position))(*)(LevelEditorLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d5050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto LevelEditorLayer::objectsAtPosition(cocos2d::CCPoint position) -> decltype(objectsAtPosition(position)) {
	using FunctionType = decltype(objectsAtPosition(position))(*)(LevelEditorLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d5410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto LevelEditorLayer::objectsInRect(cocos2d::CCRect rect, bool ignoreGroups) -> decltype(objectsInRect(rect, ignoreGroups)) {
	using FunctionType = decltype(objectsInRect(rect, ignoreGroups))(*)(LevelEditorLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d5ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rect, ignoreGroups);
}

auto LevelEditorLayer::onPlaytest() -> decltype(onPlaytest()) {
	using FunctionType = decltype(onPlaytest())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dfcd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::onStopPlaytest() -> decltype(onStopPlaytest()) {
	using FunctionType = decltype(onStopPlaytest())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e0630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::quickUpdateAllPositions() -> decltype(quickUpdateAllPositions()) {
	using FunctionType = decltype(quickUpdateAllPositions())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dfa60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::recreateGroups() -> decltype(recreateGroups()) {
	using FunctionType = decltype(recreateGroups())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ded10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::removeAllObjectsOfType(int objectID) -> decltype(removeAllObjectsOfType(objectID)) {
	using FunctionType = decltype(removeAllObjectsOfType(objectID))(*)(LevelEditorLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d62c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto LevelEditorLayer::removeObject(GameObject* object, bool noUndo) -> decltype(removeObject(object, noUndo)) {
	using FunctionType = decltype(removeObject(object, noUndo))(*)(LevelEditorLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d6180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, noUndo);
}

auto LevelEditorLayer::removeSpecial(GameObject* object) -> decltype(removeSpecial(object)) {
	using FunctionType = decltype(removeSpecial(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d8310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::resetToggledGroupsAndObjects() -> decltype(resetToggledGroupsAndObjects()) {
	using FunctionType = decltype(resetToggledGroupsAndObjects())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::resetUnusedColorChannels() -> decltype(resetUnusedColorChannels()) {
	using FunctionType = decltype(resetUnusedColorChannels())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2db440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::rotationForSlopeNearObject(GameObject* object) -> decltype(rotationForSlopeNearObject(object)) {
	using FunctionType = decltype(rotationForSlopeNearObject(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::runColorEffect(EffectGameObject* object, int colorID, float delay, float interval, bool instant) -> decltype(runColorEffect(object, colorID, delay, interval, instant)) {
	using FunctionType = decltype(runColorEffect(object, colorID, delay, interval, instant))(*)(LevelEditorLayer*, EffectGameObject*, int, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dd870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, colorID, delay, interval, instant);
}

auto LevelEditorLayer::shouldBlend(int colorID) -> decltype(shouldBlend(colorID)) {
	using FunctionType = decltype(shouldBlend(colorID))(*)(LevelEditorLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d36d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, colorID);
}

auto LevelEditorLayer::spawnGroupPreview(int groupID, float xPos, float delay, float currentTime, float playTime, float boundTime, bool ordered, bool active) -> decltype(spawnGroupPreview(groupID, xPos, delay, currentTime, playTime, boundTime, ordered, active)) {
	using FunctionType = decltype(spawnGroupPreview(groupID, xPos, delay, currentTime, playTime, boundTime, ordered, active))(*)(LevelEditorLayer*, int, float, float, float, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ddf40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID, xPos, delay, currentTime, playTime, boundTime, ordered, active);
}

auto LevelEditorLayer::stopTriggersInGroup(int id, float delay) -> decltype(stopTriggersInGroup(id, delay)) {
	using FunctionType = decltype(stopTriggersInGroup(id, delay))(*)(LevelEditorLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ddb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, delay);
}

auto LevelEditorLayer::toggleGroupPreview(int id, bool enable) -> decltype(toggleGroupPreview(id, enable)) {
	using FunctionType = decltype(toggleGroupPreview(id, enable))(*)(LevelEditorLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, enable);
}

auto LevelEditorLayer::transferDefaultColors(GJEffectManager* src, GJEffectManager* dest) -> decltype(transferDefaultColors(src, dest)) {
	using FunctionType = decltype(transferDefaultColors(src, dest))(*)(LevelEditorLayer*, GJEffectManager*, GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dbde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, src, dest);
}

auto LevelEditorLayer::tryUpdateSpeedObject(EffectGameObject* object, bool noPreview) -> decltype(tryUpdateSpeedObject(object, noPreview)) {
	using FunctionType = decltype(tryUpdateSpeedObject(object, noPreview))(*)(LevelEditorLayer*, EffectGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d8900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, noPreview);
}

auto LevelEditorLayer::typeExistsAtPosition(int objectID, cocos2d::CCPoint position, bool flipX, bool flipY, float rotation) -> decltype(typeExistsAtPosition(objectID, position, flipX, flipY, rotation)) {
	using FunctionType = decltype(typeExistsAtPosition(objectID, position, flipX, flipY, rotation))(*)(LevelEditorLayer*, int, cocos2d::CCPoint, bool, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID, position, flipX, flipY, rotation);
}

auto LevelEditorLayer::updateAnimateOnTriggerObjects(bool animate) -> decltype(updateAnimateOnTriggerObjects(animate)) {
	using FunctionType = decltype(updateAnimateOnTriggerObjects(animate))(*)(LevelEditorLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e14a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animate);
}

auto LevelEditorLayer::updateBlendValues() -> decltype(updateBlendValues()) {
	using FunctionType = decltype(updateBlendValues())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateEditor(float dt) -> decltype(updateEditor(dt)) {
	using FunctionType = decltype(updateEditor(dt))(*)(LevelEditorLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d8aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto LevelEditorLayer::updateEditorMode() -> decltype(updateEditorMode()) {
	using FunctionType = decltype(updateEditorMode())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2db7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateGameObjects() -> decltype(updateGameObjects()) {
	using FunctionType = decltype(updateGameObjects())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dc110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateGridLayerParent() -> decltype(updateGridLayerParent()) {
	using FunctionType = decltype(updateGridLayerParent())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d3620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateKeyframeObjects() -> decltype(updateKeyframeObjects()) {
	using FunctionType = decltype(updateKeyframeObjects())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateLevelFont(int index) -> decltype(updateLevelFont(index)) {
	using FunctionType = decltype(updateLevelFont(index))(*)(LevelEditorLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2df070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto LevelEditorLayer::updateObjectColors(cocos2d::CCArray* gameObjects) -> decltype(updateObjectColors(gameObjects)) {
	using FunctionType = decltype(updateObjectColors(gameObjects))(*)(LevelEditorLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d9f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, gameObjects);
}

auto LevelEditorLayer::updateOptions() -> decltype(updateOptions()) {
	using FunctionType = decltype(updateOptions())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d2f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updatePreviewParticle(ParticleGameObject* object) -> decltype(updatePreviewParticle(object)) {
	using FunctionType = decltype(updatePreviewParticle(object))(*)(LevelEditorLayer*, ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::updatePreviewParticles() -> decltype(updatePreviewParticles()) {
	using FunctionType = decltype(updatePreviewParticles())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateToggledGroups() -> decltype(updateToggledGroups()) {
	using FunctionType = decltype(updateToggledGroups())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2de4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
