
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

PlayLayer::PlayLayer() : PlayLayer(geode::CutoffConstructor, sizeof(PlayLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	PlayLayer::~PlayLayer();

	using FunctionType = void(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a4da0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

PlayLayer::~PlayLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PlayLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3a57b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PlayLayer(geode::CutoffConstructor, sizeof(PlayLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto PlayLayer::scene(GJGameLevel* level, bool useReplay, bool dontCreateObjects) -> decltype(scene(level, useReplay, dontCreateObjects)) {
	using FunctionType = decltype(scene(level, useReplay, dontCreateObjects))(*)(GJGameLevel*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5a50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, useReplay, dontCreateObjects);
}

auto PlayLayer::onEnterTransitionDidFinish() -> decltype(onEnterTransitionDidFinish()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::onEnterTransitionDidFinish), this);
	using FunctionType = decltype(onEnterTransitionDidFinish())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3baf90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bafc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::postUpdate(float dt) -> decltype(postUpdate(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::postUpdate), this);
	using FunctionType = decltype(postUpdate(dt))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto PlayLayer::checkForEnd() -> decltype(checkForEnd()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::checkForEnd), this);
	using FunctionType = decltype(checkForEnd())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::updateVerifyDamage() -> decltype(updateVerifyDamage()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::updateVerifyDamage), this);
	using FunctionType = decltype(updateVerifyDamage())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::updateAttemptTime(float attemptTime) -> decltype(updateAttemptTime(attemptTime)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::updateAttemptTime), this);
	using FunctionType = decltype(updateAttemptTime(attemptTime))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, attemptTime);
}

auto PlayLayer::updateVisibility(float dt) -> decltype(updateVisibility(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::updateVisibility), this);
	using FunctionType = decltype(updateVisibility(dt))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3af3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto PlayLayer::opacityForObject(GameObject* object) -> decltype(opacityForObject(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&PlayLayer::opacityForObject), this);
	using FunctionType = decltype(opacityForObject(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b02e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto PlayLayer::updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2) -> decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&PlayLayer::updateColor), this);
	using FunctionType = decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2))(*)(PlayLayer*, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b1f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2);
}

auto PlayLayer::activatePlatformerEndTrigger(EndTriggerGameObject* object, gd::vector<int> const& remapKeys) -> decltype(activatePlatformerEndTrigger(object, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<EndTriggerGameObject*, gd::vector<int> const&>::func(&PlayLayer::activatePlatformerEndTrigger), this);
	using FunctionType = decltype(activatePlatformerEndTrigger(object, remapKeys))(*)(PlayLayer*, EndTriggerGameObject*, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ac2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, remapKeys);
}

auto PlayLayer::toggleGlitter(bool visible) -> decltype(toggleGlitter(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleGlitter), this);
	using FunctionType = decltype(toggleGlitter(visible))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b38b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto PlayLayer::destroyPlayer(PlayerObject* player, GameObject* object) -> decltype(destroyPlayer(player, object)) {
	auto self = addresser::thunkAdjust(Resolve<PlayerObject*, GameObject*>::func(&PlayLayer::destroyPlayer), this);
	using FunctionType = decltype(destroyPlayer(player, object))(*)(PlayLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b39d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, player, object);
}

auto PlayLayer::toggleGroundVisibility(bool visible) -> decltype(toggleGroundVisibility(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleGroundVisibility), this);
	using FunctionType = decltype(toggleGroundVisibility(visible))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b3700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto PlayLayer::toggleMGVisibility(bool visible) -> decltype(toggleMGVisibility(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleMGVisibility), this);
	using FunctionType = decltype(toggleMGVisibility(visible))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b3780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto PlayLayer::toggleHideAttempts(bool hide) -> decltype(toggleHideAttempts(hide)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleHideAttempts), this);
	using FunctionType = decltype(toggleHideAttempts(hide))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b37c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, hide);
}

auto PlayLayer::timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id) -> decltype(timeForPos(position, order, channel, songTriggers, id)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint, int, int, bool, int>::func(&PlayLayer::timeForPos), this);
	using FunctionType = decltype(timeForPos(position, order, channel, songTriggers, id))(*)(PlayLayer*, cocos2d::CCPoint, int, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b35d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position, order, channel, songTriggers, id);
}

auto PlayLayer::posForTime(float time) -> decltype(posForTime(time)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::posForTime), this);
	using FunctionType = decltype(posForTime(time))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b3660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, time);
}

auto PlayLayer::resetSPTriggered() -> decltype(resetSPTriggered()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::resetSPTriggered), this);
	using FunctionType = decltype(resetSPTriggered())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b36c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::updateTimeWarp(float timeWarp) -> decltype(updateTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::updateTimeWarp), this);
	using FunctionType = decltype(updateTimeWarp(timeWarp))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ab9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto PlayLayer::playGravityEffect(bool flip) -> decltype(playGravityEffect(flip)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::playGravityEffect), this);
	using FunctionType = decltype(playGravityEffect(flip))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b2050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flip);
}

auto PlayLayer::manualUpdateObjectColors(GameObject* object) -> decltype(manualUpdateObjectColors(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&PlayLayer::manualUpdateObjectColors), this);
	using FunctionType = decltype(manualUpdateObjectColors(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b02f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto PlayLayer::checkpointActivated(CheckpointGameObject* object) -> decltype(checkpointActivated(object)) {
	auto self = addresser::thunkAdjust(Resolve<CheckpointGameObject*>::func(&PlayLayer::checkpointActivated), this);
	using FunctionType = decltype(checkpointActivated(object))(*)(PlayLayer*, CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto PlayLayer::flipArt(bool flip) -> decltype(flipArt(flip)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::flipArt), this);
	using FunctionType = decltype(flipArt(flip))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b2a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flip);
}

auto PlayLayer::updateTimeLabel(int seconds, int centiseconds, bool decimals) -> decltype(updateTimeLabel(seconds, centiseconds, decimals)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, bool>::func(&PlayLayer::updateTimeLabel), this);
	using FunctionType = decltype(updateTimeLabel(seconds, centiseconds, decimals))(*)(PlayLayer*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b2560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, seconds, centiseconds, decimals);
}

auto PlayLayer::toggleProgressbar() -> decltype(toggleProgressbar()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::toggleProgressbar), this);
	using FunctionType = decltype(toggleProgressbar())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b2760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::toggleInfoLabel() -> decltype(toggleInfoLabel()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::toggleInfoLabel), this);
	using FunctionType = decltype(toggleInfoLabel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b3550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::removeAllCheckpoints() -> decltype(removeAllCheckpoints()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::removeAllCheckpoints), this);
	using FunctionType = decltype(removeAllCheckpoints())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::toggleMusicInPractice() -> decltype(toggleMusicInPractice()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::toggleMusicInPractice), this);
	using FunctionType = decltype(toggleMusicInPractice())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b2900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::processCheckpoints() -> decltype(processCheckpoints()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::processCheckpoints), this);
	using FunctionType = decltype(processCheckpoints())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::resetLevel() -> decltype(resetLevel()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::resetLevel), this);
	using FunctionType = decltype(resetLevel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::currencyWillExit(CurrencyRewardLayer* layer) -> decltype(currencyWillExit(layer)) {
	auto self = addresser::thunkAdjust(Resolve<CurrencyRewardLayer*>::func(&PlayLayer::currencyWillExit), this);
	using FunctionType = decltype(currencyWillExit(layer))(*)(PlayLayer*, CurrencyRewardLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto PlayLayer::circleWaveWillBeRemoved(CCCircleWave* circleWave) -> decltype(circleWaveWillBeRemoved(circleWave)) {
	auto self = addresser::thunkAdjust(Resolve<CCCircleWave*>::func(&PlayLayer::circleWaveWillBeRemoved), this);
	using FunctionType = decltype(circleWaveWillBeRemoved(circleWave))(*)(PlayLayer*, CCCircleWave*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b48f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, circleWave);
}

auto PlayLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&PlayLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(PlayLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto PlayLayer::addObject(GameObject* object) -> decltype(addObject(object)) {
	using FunctionType = decltype(addObject(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3add70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::applyCustomEnterEffect(GameObject* object, bool isRight) -> decltype(applyCustomEnterEffect(object, isRight)) {
	using FunctionType = decltype(applyCustomEnterEffect(object, isRight))(*)(PlayLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b0970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, isRight);
}

auto PlayLayer::applyEnterEffect(GameObject* object, int enterType, bool isRight) -> decltype(applyEnterEffect(object, enterType, isRight)) {
	using FunctionType = decltype(applyEnterEffect(object, enterType, isRight))(*)(PlayLayer*, GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b1660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, enterType, isRight);
}

auto PlayLayer::commitJumps() -> decltype(commitJumps()) {
	using FunctionType = decltype(commitJumps())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b9de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::createCheckpoint() -> decltype(createCheckpoint()) {
	using FunctionType = decltype(createCheckpoint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::createObjectsFromSetupFinished() -> decltype(createObjectsFromSetupFinished()) {
	using FunctionType = decltype(createObjectsFromSetupFinished())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ad8d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::delayedResetLevel() -> decltype(delayedResetLevel()) {
	using FunctionType = decltype(delayedResetLevel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::fullReset() -> decltype(fullReset()) {
	using FunctionType = decltype(fullReset())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::getCurrentPercent() -> decltype(getCurrentPercent()) {
	using FunctionType = decltype(getCurrentPercent())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b3950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::gravityEffectFinished() -> decltype(gravityEffectFinished()) {
	using FunctionType = decltype(gravityEffectFinished())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b23a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) -> decltype(init(level, useReplay, dontCreateObjects)) {
	using FunctionType = decltype(init(level, useReplay, dontCreateObjects))(*)(PlayLayer*, GJGameLevel*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, useReplay, dontCreateObjects);
}

auto PlayLayer::levelComplete() -> decltype(levelComplete()) {
	using FunctionType = decltype(levelComplete())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a7a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::loadDefaultColors() -> decltype(loadDefaultColors()) {
	using FunctionType = decltype(loadDefaultColors())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b1c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::loadFromCheckpoint(CheckpointObject* object) -> decltype(loadFromCheckpoint(object)) {
	using FunctionType = decltype(loadFromCheckpoint(object))(*)(PlayLayer*, CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::markCheckpoint() -> decltype(markCheckpoint()) {
	using FunctionType = decltype(markCheckpoint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::onQuit() -> decltype(onQuit()) {
	using FunctionType = decltype(onQuit())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3babb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::optimizeColorGroups() -> decltype(optimizeColorGroups()) {
	using FunctionType = decltype(optimizeColorGroups())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aebd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::optimizeOpacityGroups() -> decltype(optimizeOpacityGroups()) {
	using FunctionType = decltype(optimizeOpacityGroups())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aee60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::pauseGame(bool unfocused) -> decltype(pauseGame(unfocused)) {
	using FunctionType = decltype(pauseGame(unfocused))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ba0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, unfocused);
}

auto PlayLayer::playEndAnimationToPos(cocos2d::CCPoint position) -> decltype(playEndAnimationToPos(position)) {
	using FunctionType = decltype(playEndAnimationToPos(position))(*)(PlayLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aba00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto PlayLayer::playPlatformerEndAnimationToPos(cocos2d::CCPoint position, bool instant) -> decltype(playPlatformerEndAnimationToPos(position, instant)) {
	using FunctionType = decltype(playPlatformerEndAnimationToPos(position, instant))(*)(PlayLayer*, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ac3e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, instant);
}

auto PlayLayer::prepareCreateObjectsFromSetup(gd::string& levelString) -> decltype(prepareCreateObjectsFromSetup(levelString)) {
	using FunctionType = decltype(prepareCreateObjectsFromSetup(levelString))(*)(PlayLayer*, gd::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ace40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelString);
}

auto PlayLayer::prepareMusic(bool dontWait) -> decltype(prepareMusic(dontWait)) {
	using FunctionType = decltype(prepareMusic(dontWait))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ba8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dontWait);
}

auto PlayLayer::processCreateObjectsFromSetup() -> decltype(processCreateObjectsFromSetup()) {
	using FunctionType = decltype(processCreateObjectsFromSetup())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ad0f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::processLoadedMoveActions() -> decltype(processLoadedMoveActions()) {
	using FunctionType = decltype(processLoadedMoveActions())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3af1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::removeAllObjects() -> decltype(removeAllObjects()) {
	using FunctionType = decltype(removeAllObjects())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3badb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::removeCheckpoint(bool first) -> decltype(removeCheckpoint(first)) {
	using FunctionType = decltype(removeCheckpoint(first))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, first);
}

auto PlayLayer::resetLevelFromStart() -> decltype(resetLevelFromStart()) {
	using FunctionType = decltype(resetLevelFromStart())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::resume() -> decltype(resume()) {
	using FunctionType = decltype(resume())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ba640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::resumeAndRestart(bool fromStart) -> decltype(resumeAndRestart(fromStart)) {
	using FunctionType = decltype(resumeAndRestart(fromStart))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ba3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fromStart);
}

auto PlayLayer::saveActiveSaveObjects(gd::vector<SavedActiveObjectState>& activeObjects, gd::vector<SavedSpecialObjectState>& specialObjects) -> decltype(saveActiveSaveObjects(activeObjects, specialObjects)) {
	using FunctionType = decltype(saveActiveSaveObjects(activeObjects, specialObjects))(*)(PlayLayer*, gd::vector<SavedActiveObjectState>&, gd::vector<SavedSpecialObjectState>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b89f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, activeObjects, specialObjects);
}

auto PlayLayer::saveDynamicSaveObjects(gd::vector<SavedObjectStateRef>& dynamicObjects) -> decltype(saveDynamicSaveObjects(dynamicObjects)) {
	using FunctionType = decltype(saveDynamicSaveObjects(dynamicObjects))(*)(PlayLayer*, gd::vector<SavedObjectStateRef>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b86e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dynamicObjects);
}

auto PlayLayer::scanDynamicSaveObjects() -> decltype(scanDynamicSaveObjects()) {
	using FunctionType = decltype(scanDynamicSaveObjects())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::screenFlipObject(GameObject* object) -> decltype(screenFlipObject(object)) {
	using FunctionType = decltype(screenFlipObject(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b0750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::setupHasCompleted() -> decltype(setupHasCompleted()) {
	using FunctionType = decltype(setupHasCompleted())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a66d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showCompleteEffect() -> decltype(showCompleteEffect()) {
	using FunctionType = decltype(showCompleteEffect())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a8f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showCompleteText() -> decltype(showCompleteText()) {
	using FunctionType = decltype(showCompleteText())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a8900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showEndLayer() -> decltype(showEndLayer()) {
	using FunctionType = decltype(showEndLayer())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ac700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showHint() -> decltype(showHint()) {
	using FunctionType = decltype(showHint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showNewBest(bool newReward, int orbs, int diamonds, bool demonKey, bool noRetry, bool noTitle) -> decltype(showNewBest(newReward, orbs, diamonds, demonKey, noRetry, noTitle)) {
	using FunctionType = decltype(showNewBest(newReward, orbs, diamonds, demonKey, noRetry, noTitle))(*)(PlayLayer*, bool, int, int, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a9550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, newReward, orbs, diamonds, demonKey, noRetry, noTitle);
}

auto PlayLayer::showRetryLayer() -> decltype(showRetryLayer()) {
	using FunctionType = decltype(showRetryLayer())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ac900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showTwoPlayerGuide() -> decltype(showTwoPlayerGuide()) {
	using FunctionType = decltype(showTwoPlayerGuide())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3acaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::spawnCircle() -> decltype(spawnCircle()) {
	using FunctionType = decltype(spawnCircle())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3abf00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::spawnFirework() -> decltype(spawnFirework()) {
	using FunctionType = decltype(spawnFirework())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3abff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::startGame() -> decltype(startGame()) {
	using FunctionType = decltype(startGame())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a7a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::startGameDelayed() -> decltype(startGameDelayed()) {
	using FunctionType = decltype(startGameDelayed())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a7a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::startMusic() -> decltype(startMusic()) {
	using FunctionType = decltype(startMusic())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3baa60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::storeCheckpoint(CheckpointObject* checkpoint) -> decltype(storeCheckpoint(checkpoint)) {
	using FunctionType = decltype(storeCheckpoint(checkpoint))(*)(PlayLayer*, CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b74a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, checkpoint);
}

auto PlayLayer::toggleDebugDraw() -> decltype(toggleDebugDraw()) {
	using FunctionType = decltype(toggleDebugDraw())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a7900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::togglePracticeMode(bool practiceMode) -> decltype(togglePracticeMode(practiceMode)) {
	using FunctionType = decltype(togglePracticeMode(practiceMode))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b9e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, practiceMode);
}

auto PlayLayer::updateAttempts() -> decltype(updateAttempts()) {
	using FunctionType = decltype(updateAttempts())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b9ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateDebugDrawSettings() -> decltype(updateDebugDrawSettings()) {
	using FunctionType = decltype(updateDebugDrawSettings())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a7800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateInfoLabel() -> decltype(updateInfoLabel()) {
	using FunctionType = decltype(updateInfoLabel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b2a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateInvisibleBlock(GameObject* object, float rightFadeBound, float leftFadeBound, float rightFadeWidth, float leftFadeWidth, cocos2d::ccColor3B const& lbgColor) -> decltype(updateInvisibleBlock(object, rightFadeBound, leftFadeBound, rightFadeWidth, leftFadeWidth, lbgColor)) {
	using FunctionType = decltype(updateInvisibleBlock(object, rightFadeBound, leftFadeBound, rightFadeWidth, leftFadeWidth, lbgColor))(*)(PlayLayer*, GameObject*, float, float, float, float, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b03b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, rightFadeBound, leftFadeBound, rightFadeWidth, leftFadeWidth, lbgColor);
}

auto PlayLayer::updateProgressbar() -> decltype(updateProgressbar()) {
	using FunctionType = decltype(updateProgressbar())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b23c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateTestModeLabel() -> decltype(updateTestModeLabel()) {
	using FunctionType = decltype(updateTestModeLabel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a7990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
