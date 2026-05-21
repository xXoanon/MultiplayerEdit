
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

PlayerObject::PlayerObject() : PlayerObject(geode::CutoffConstructor, sizeof(PlayerObject)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	PlayerObject::~PlayerObject();

	using FunctionType = void(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x385350, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

PlayerObject::~PlayerObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PlayerObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3864a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PlayerObject(geode::CutoffConstructor, sizeof(PlayerObject));
		geode::DestructorLock::addLock(this);
	}
}

auto PlayerObject::create(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer) -> decltype(create(player, ship, gameLayer, layer, playLayer)) {
	using FunctionType = decltype(create(player, ship, gameLayer, layer, playLayer))(*)(int, int, GJBaseGameLayer*, cocos2d::CCLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3866d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(player, ship, gameLayer, layer, playLayer);
}

auto PlayerObject::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayerObject::update), this);
	using FunctionType = decltype(update(dt))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto PlayerObject::setScaleX(float scale) -> decltype(setScaleX(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayerObject::setScaleX), this);
	using FunctionType = decltype(setScaleX(scale))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto PlayerObject::setScaleY(float scale) -> decltype(setScaleY(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayerObject::setScaleY), this);
	using FunctionType = decltype(setScaleY(scale))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto PlayerObject::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayerObject::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto PlayerObject::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&PlayerObject::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(PlayerObject*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39c640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto PlayerObject::setVisible(bool visible) -> decltype(setVisible(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayerObject::setVisible), this);
	using FunctionType = decltype(setVisible(visible))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto PlayerObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayerObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto PlayerObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&PlayerObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(PlayerObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39daf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto PlayerObject::setColor(cocos2d::ccColor3B const& color) -> decltype(setColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&PlayerObject::setColor), this);
	using FunctionType = decltype(setColor(color))(*)(PlayerObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39d310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto PlayerObject::setFlipX(bool flipX) -> decltype(setFlipX(flipX)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayerObject::setFlipX), this);
	using FunctionType = decltype(setFlipX(flipX))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flipX);
}

auto PlayerObject::setFlipY(bool flipY) -> decltype(setFlipY(flipY)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayerObject::setFlipY), this);
	using FunctionType = decltype(setFlipY(flipY))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x198200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flipY);
}

auto PlayerObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayerObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x396ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayerObject::getRealPosition() -> decltype(getRealPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayerObject::getRealPosition), this);
	using FunctionType = decltype(getRealPosition())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39dc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayerObject::getOrientedBox() -> decltype(getOrientedBox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayerObject::getOrientedBox), this);
	using FunctionType = decltype(getOrientedBox())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayerObject::getObjectRotation() -> decltype(getObjectRotation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayerObject::getObjectRotation), this);
	using FunctionType = decltype(getObjectRotation())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayerObject::animationFinished(char const* key) -> decltype(animationFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&PlayerObject::animationFinished), this);
	using FunctionType = decltype(animationFinished(key))(*)(PlayerObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto PlayerObject::activateStreak() -> decltype(activateStreak()) {
	using FunctionType = decltype(activateStreak())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::addAllParticles() -> decltype(addAllParticles()) {
	using FunctionType = decltype(addAllParticles())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::animatePlatformerJump(float scale) -> decltype(animatePlatformerJump(scale)) {
	using FunctionType = decltype(animatePlatformerJump(scale))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38cc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto PlayerObject::boostPlayer(float yVelocity) -> decltype(boostPlayer(yVelocity)) {
	using FunctionType = decltype(boostPlayer(yVelocity))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39fee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, yVelocity);
}

auto PlayerObject::bumpPlayer(float bumpMod, int objectType, bool noEffects, GameObject* object) -> decltype(bumpPlayer(bumpMod, objectType, noEffects, object)) {
	using FunctionType = decltype(bumpPlayer(bumpMod, objectType, noEffects, object))(*)(PlayerObject*, float, int, bool, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39f6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, bumpMod, objectType, noEffects, object);
}

auto PlayerObject::checkSnapJumpToObject(GameObject* object) -> decltype(checkSnapJumpToObject(object)) {
	using FunctionType = decltype(checkSnapJumpToObject(object))(*)(PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x393cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayerObject::collidedWithObject(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck) -> decltype(collidedWithObject(dt, object, rect, skipCheck)) {
	using FunctionType = decltype(collidedWithObject(dt, object, rect, skipCheck))(*)(PlayerObject*, float, GameObject*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3919b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, object, rect, skipCheck);
}

auto PlayerObject::collidedWithObjectInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck) -> decltype(collidedWithObjectInternal(dt, object, rect, skipCheck)) {
	using FunctionType = decltype(collidedWithObjectInternal(dt, object, rect, skipCheck))(*)(PlayerObject*, float, GameObject*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x391a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, object, rect, skipCheck);
}

auto PlayerObject::collidedWithSlopeInternal(float dt, GameObject* object, bool forced) -> decltype(collidedWithSlopeInternal(dt, object, forced)) {
	using FunctionType = decltype(collidedWithSlopeInternal(dt, object, forced))(*)(PlayerObject*, float, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38f810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, object, forced);
}

auto PlayerObject::convertToClosestRotation(float rotation) -> decltype(convertToClosestRotation(rotation)) {
	using FunctionType = decltype(convertToClosestRotation(rotation))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38d100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rotation);
}

auto PlayerObject::copyAttributes(PlayerObject* player) -> decltype(copyAttributes(player)) {
	using FunctionType = decltype(copyAttributes(player))(*)(PlayerObject*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a04a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player);
}

auto PlayerObject::createFadeOutDartStreak() -> decltype(createFadeOutDartStreak()) {
	using FunctionType = decltype(createFadeOutDartStreak())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::createRobot(int frame) -> decltype(createRobot(frame)) {
	using FunctionType = decltype(createRobot(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x387ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::createSpider(int frame) -> decltype(createSpider(frame)) {
	using FunctionType = decltype(createSpider(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3882b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::didHitHead() -> decltype(didHitHead()) {
	using FunctionType = decltype(didHitHead())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x393c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::disablePlayerControls() -> decltype(disablePlayerControls()) {
	using FunctionType = decltype(disablePlayerControls())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39f3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::disableSwingFire() -> decltype(disableSwingFire()) {
	using FunctionType = decltype(disableSwingFire())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39af00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::doReversePlayer(bool reverse) -> decltype(doReversePlayer(reverse)) {
	using FunctionType = decltype(doReversePlayer(reverse))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, reverse);
}

auto PlayerObject::enablePlayerControls() -> decltype(enablePlayerControls()) {
	using FunctionType = decltype(enablePlayerControls())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39f500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::exitPlatformerAnimateJump() -> decltype(exitPlatformerAnimateJump()) {
	using FunctionType = decltype(exitPlatformerAnimateJump())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38cf30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::fadeOutStreak2(float duration) -> decltype(fadeOutStreak2(duration)) {
	using FunctionType = decltype(fadeOutStreak2(duration))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration);
}

auto PlayerObject::flipGravity(bool flip, bool noEffects) -> decltype(flipGravity(flip, noEffects)) {
	using FunctionType = decltype(flipGravity(flip, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39a1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, flip, noEffects);
}

auto PlayerObject::handleRotatedCollisionInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck, bool skipPre, bool slope) -> decltype(handleRotatedCollisionInternal(dt, object, rect, skipCheck, skipPre, slope)) {
	using FunctionType = decltype(handleRotatedCollisionInternal(dt, object, rect, skipCheck, skipPre, slope))(*)(PlayerObject*, float, GameObject*, cocos2d::CCRect, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38f140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, object, rect, skipCheck, skipPre, slope);
}

auto PlayerObject::hitGround(GameObject* object, bool notFlipped) -> decltype(hitGround(object, notFlipped)) {
	using FunctionType = decltype(hitGround(object, notFlipped))(*)(PlayerObject*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39bf30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, notFlipped);
}

auto PlayerObject::hitGroundNoJump(GameObject* object, bool notFlipped) -> decltype(hitGroundNoJump(object, notFlipped)) {
	using FunctionType = decltype(hitGroundNoJump(object, notFlipped))(*)(PlayerObject*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39bed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, notFlipped);
}

auto PlayerObject::incrementJumps() -> decltype(incrementJumps()) {
	using FunctionType = decltype(incrementJumps())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38cba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::init(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer) -> decltype(init(player, ship, gameLayer, layer, playLayer)) {
	using FunctionType = decltype(init(player, ship, gameLayer, layer, playLayer))(*)(PlayerObject*, int, int, GJBaseGameLayer*, cocos2d::CCLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x386770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, ship, gameLayer, layer, playLayer);
}

auto PlayerObject::levelFlipFinished() -> decltype(levelFlipFinished()) {
	using FunctionType = decltype(levelFlipFinished())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::levelFlipping() -> decltype(levelFlipping()) {
	using FunctionType = decltype(levelFlipping())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39b4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::levelWillFlip() -> decltype(levelWillFlip()) {
	using FunctionType = decltype(levelWillFlip())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::loadFromCheckpoint(PlayerCheckpoint* object) -> decltype(loadFromCheckpoint(object)) {
	using FunctionType = decltype(loadFromCheckpoint(object))(*)(PlayerObject*, PlayerCheckpoint*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a21b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayerObject::lockPlayer() -> decltype(lockPlayer()) {
	using FunctionType = decltype(lockPlayer())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39f2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::placeStreakPoint() -> decltype(placeStreakPoint()) {
	using FunctionType = decltype(placeStreakPoint())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::playBumpEffect(int objectType, GameObject* player) -> decltype(playBumpEffect(objectType, player)) {
	using FunctionType = decltype(playBumpEffect(objectType, player))(*)(PlayerObject*, int, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39fa50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectType, player);
}

auto PlayerObject::playCompleteEffect(bool noEffects, bool instant) -> decltype(playCompleteEffect(noEffects, instant)) {
	using FunctionType = decltype(playCompleteEffect(noEffects, instant))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x384020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, noEffects, instant);
}

auto PlayerObject::playDeathEffect() -> decltype(playDeathEffect()) {
	using FunctionType = decltype(playDeathEffect())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ef10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::playDynamicSpiderRun() -> decltype(playDynamicSpiderRun()) {
	using FunctionType = decltype(playDynamicSpiderRun())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a14d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::playerDestroyed(bool noEffects) -> decltype(playerDestroyed(noEffects)) {
	using FunctionType = decltype(playerDestroyed(noEffects))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, noEffects);
}

auto PlayerObject::playerIsFallingBugged() -> decltype(playerIsFallingBugged()) {
	using FunctionType = decltype(playerIsFallingBugged())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39a430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::playSpawnEffect() -> decltype(playSpawnEffect()) {
	using FunctionType = decltype(playSpawnEffect())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to) -> decltype(playSpiderDashEffect(from, to)) {
	using FunctionType = decltype(playSpiderDashEffect(from, to))(*)(PlayerObject*, cocos2d::CCPoint, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x395170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, from, to);
}

auto PlayerObject::postCollision(float dt, bool betweenSteps) -> decltype(postCollision(dt, betweenSteps)) {
	using FunctionType = decltype(postCollision(dt, betweenSteps))(*)(PlayerObject*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38d580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, betweenSteps);
}

auto PlayerObject::preSlopeCollision(float dt, GameObject* object) -> decltype(preSlopeCollision(dt, object)) {
	using FunctionType = decltype(preSlopeCollision(dt, object))(*)(PlayerObject*, float, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38f2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, object);
}

auto PlayerObject::propellPlayer(float yVelocity, bool noEffects, int objectType) -> decltype(propellPlayer(yVelocity, noEffects, objectType)) {
	using FunctionType = decltype(propellPlayer(yVelocity, noEffects, objectType))(*)(PlayerObject*, float, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39f850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, yVelocity, noEffects, objectType);
}

auto PlayerObject::pushButton(PlayerButton button) -> decltype(pushButton(button)) {
	using FunctionType = decltype(pushButton(button))(*)(PlayerObject*, PlayerButton);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto PlayerObject::redirectPlayerForce(float rotation, float modifier, float minimum, float maximum) -> decltype(redirectPlayerForce(rotation, modifier, minimum, maximum)) {
	using FunctionType = decltype(redirectPlayerForce(rotation, modifier, minimum, maximum))(*)(PlayerObject*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39fc60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rotation, modifier, minimum, maximum);
}

auto PlayerObject::releaseAllButtons() -> decltype(releaseAllButtons()) {
	using FunctionType = decltype(releaseAllButtons())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39f100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::releaseButton(PlayerButton button) -> decltype(releaseButton(button)) {
	using FunctionType = decltype(releaseButton(button))(*)(PlayerObject*, PlayerButton);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3981d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto PlayerObject::removePendingCheckpoint() -> decltype(removePendingCheckpoint()) {
	using FunctionType = decltype(removePendingCheckpoint())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::resetAllParticles() -> decltype(resetAllParticles()) {
	using FunctionType = decltype(resetAllParticles())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::resetPlayerIcon() -> decltype(resetPlayerIcon()) {
	using FunctionType = decltype(resetPlayerIcon())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39b2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::resetStreak() -> decltype(resetStreak()) {
	using FunctionType = decltype(resetStreak())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::resetTouchedRings(bool removeAll) -> decltype(resetTouchedRings(removeAll)) {
	using FunctionType = decltype(resetTouchedRings(removeAll))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3982e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, removeAll);
}

auto PlayerObject::reversePlayer(EffectGameObject* object) -> decltype(reversePlayer(object)) {
	using FunctionType = decltype(reversePlayer(object))(*)(PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayerObject::ringJump(RingObject* object, bool skipCheck) -> decltype(ringJump(object, skipCheck)) {
	using FunctionType = decltype(ringJump(object, skipCheck))(*)(PlayerObject*, RingObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, skipCheck);
}

auto PlayerObject::rotateGameplay(int moveDirection, int groundDirection, bool editVelocity, float velocityModX, float velocityModY, bool overrideVelocity, bool dontSlide) -> decltype(rotateGameplay(moveDirection, groundDirection, editVelocity, velocityModX, velocityModY, overrideVelocity, dontSlide)) {
	using FunctionType = decltype(rotateGameplay(moveDirection, groundDirection, editVelocity, velocityModX, velocityModY, overrideVelocity, dontSlide))(*)(PlayerObject*, int, int, bool, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x399d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, moveDirection, groundDirection, editVelocity, velocityModX, velocityModY, overrideVelocity, dontSlide);
}

auto PlayerObject::rotateGameplayObject(GameObject* object) -> decltype(rotateGameplayObject(object)) {
	using FunctionType = decltype(rotateGameplayObject(object))(*)(PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3913f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayerObject::runBallRotation(float speed) -> decltype(runBallRotation(speed)) {
	using FunctionType = decltype(runBallRotation(speed))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38d350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, speed);
}

auto PlayerObject::runBallRotation2() -> decltype(runBallRotation2()) {
	using FunctionType = decltype(runBallRotation2())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38d480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::runNormalRotation(bool notNormalMode, float speed) -> decltype(runNormalRotation(notNormalMode, speed)) {
	using FunctionType = decltype(runNormalRotation(notNormalMode, speed))(*)(PlayerObject*, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38d220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, notNormalMode, speed);
}

auto PlayerObject::saveToCheckpoint(PlayerCheckpoint* checkpoint) -> decltype(saveToCheckpoint(checkpoint)) {
	using FunctionType = decltype(saveToCheckpoint(checkpoint))(*)(PlayerObject*, PlayerCheckpoint*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, checkpoint);
}

auto PlayerObject::setSecondColor(cocos2d::ccColor3B const& color) -> decltype(setSecondColor(color)) {
	using FunctionType = decltype(setSecondColor(color))(*)(PlayerObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39d3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto PlayerObject::setupStreak() -> decltype(setupStreak()) {
	using FunctionType = decltype(setupStreak())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3887c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::setYVelocity(double velocity, int type) -> decltype(setYVelocity(velocity, type)) {
	using FunctionType = decltype(setYVelocity(velocity, type))(*)(PlayerObject*, double, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, velocity, type);
}

auto PlayerObject::spawnCircle() -> decltype(spawnCircle()) {
	using FunctionType = decltype(spawnCircle())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3975b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::spawnDualCircle() -> decltype(spawnDualCircle()) {
	using FunctionType = decltype(spawnDualCircle())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::spawnPortalCircle(cocos2d::ccColor3B color, float startRadius) -> decltype(spawnPortalCircle(color, startRadius)) {
	using FunctionType = decltype(spawnPortalCircle(color, startRadius))(*)(PlayerObject*, cocos2d::ccColor3B, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color, startRadius);
}

auto PlayerObject::spawnScaleCircle() -> decltype(spawnScaleCircle()) {
	using FunctionType = decltype(spawnScaleCircle())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::spiderTestJump(bool dynamic) -> decltype(spiderTestJump(dynamic)) {
	using FunctionType = decltype(spiderTestJump(dynamic))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x394340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dynamic);
}

auto PlayerObject::spiderTestJumpInternal(bool dynamic) -> decltype(spiderTestJumpInternal(dynamic)) {
	using FunctionType = decltype(spiderTestJumpInternal(dynamic))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3943f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dynamic);
}

auto PlayerObject::startDashing(DashRingObject* object) -> decltype(startDashing(object)) {
	using FunctionType = decltype(startDashing(object))(*)(PlayerObject*, DashRingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x395910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayerObject::stopBurstEffect() -> decltype(stopBurstEffect()) {
	using FunctionType = decltype(stopBurstEffect())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39b4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::stopDashing() -> decltype(stopDashing()) {
	using FunctionType = decltype(stopDashing())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x396650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::stopParticles() -> decltype(stopParticles()) {
	using FunctionType = decltype(stopParticles())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::stopPlatformerJumpAnimation() -> decltype(stopPlatformerJumpAnimation()) {
	using FunctionType = decltype(stopPlatformerJumpAnimation())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38d060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::switchedDirTo(PlayerButton button) -> decltype(switchedDirTo(button)) {
	using FunctionType = decltype(switchedDirTo(button))(*)(PlayerObject*, PlayerButton);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto PlayerObject::switchedToMode(GameObjectType type) -> decltype(switchedToMode(type)) {
	using FunctionType = decltype(switchedToMode(type))(*)(PlayerObject*, GameObjectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39be30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto PlayerObject::toggleBirdMode(bool enable, bool noEffects) -> decltype(toggleBirdMode(enable, noEffects)) {
	using FunctionType = decltype(toggleBirdMode(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39a820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleDartMode(bool enable, bool noEffects) -> decltype(toggleDartMode(enable, noEffects)) {
	using FunctionType = decltype(toggleDartMode(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39af90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleFlyMode(bool enable, bool noEffects) -> decltype(toggleFlyMode(enable, noEffects)) {
	using FunctionType = decltype(toggleFlyMode(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39a4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleGhostEffect(GhostType type) -> decltype(toggleGhostEffect(type)) {
	using FunctionType = decltype(toggleGhostEffect(type))(*)(PlayerObject*, GhostType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39ee30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto PlayerObject::togglePlayerScale(bool enable, bool noEffects) -> decltype(togglePlayerScale(enable, noEffects)) {
	using FunctionType = decltype(togglePlayerScale(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleRobotMode(bool enable, bool noEffects) -> decltype(toggleRobotMode(enable, noEffects)) {
	using FunctionType = decltype(toggleRobotMode(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39b6f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleRollMode(bool enable, bool noEffects) -> decltype(toggleRollMode(enable, noEffects)) {
	using FunctionType = decltype(toggleRollMode(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39b570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleSpiderMode(bool enable, bool noEffects) -> decltype(toggleSpiderMode(enable, noEffects)) {
	using FunctionType = decltype(toggleSpiderMode(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39ba70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleSwingMode(bool enable, bool noEffects) -> decltype(toggleSwingMode(enable, noEffects)) {
	using FunctionType = decltype(toggleSwingMode(enable, noEffects))(*)(PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39ab20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, noEffects);
}

auto PlayerObject::toggleVisibility(bool visible) -> decltype(toggleVisibility(visible)) {
	using FunctionType = decltype(toggleVisibility(visible))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto PlayerObject::tryPlaceCheckpoint() -> decltype(tryPlaceCheckpoint()) {
	using FunctionType = decltype(tryPlaceCheckpoint())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a32d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::unrotateGameplayObject(GameObject* object) -> decltype(unrotateGameplayObject(object)) {
	using FunctionType = decltype(unrotateGameplayObject(object))(*)(PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3916e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayerObject::updateCollide(PlayerCollisionDirection direction, GameObject* object) -> decltype(updateCollide(direction, object)) {
	using FunctionType = decltype(updateCollide(direction, object))(*)(PlayerObject*, PlayerCollisionDirection, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x393ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, direction, object);
}

auto PlayerObject::updateCollideLeft(float x, GameObject* object) -> decltype(updateCollideLeft(x, object)) {
	using FunctionType = decltype(updateCollideLeft(x, object))(*)(PlayerObject*, float, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x394200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, x, object);
}

auto PlayerObject::updateCollideRight(float x, GameObject* object) -> decltype(updateCollideRight(x, object)) {
	using FunctionType = decltype(updateCollideRight(x, object))(*)(PlayerObject*, float, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3942a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, x, object);
}

auto PlayerObject::updateDashAnimation() -> decltype(updateDashAnimation()) {
	using FunctionType = decltype(updateDashAnimation())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x396d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updateDashArt() -> decltype(updateDashArt()) {
	using FunctionType = decltype(updateDashArt())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3961c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updateGlowColor() -> decltype(updateGlowColor()) {
	using FunctionType = decltype(updateGlowColor())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39d430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updateInternalActions(float dt) -> decltype(updateInternalActions(dt)) {
	using FunctionType = decltype(updateInternalActions(dt))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a3f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto PlayerObject::updateJump(float dt) -> decltype(updateJump(dt)) {
	using FunctionType = decltype(updateJump(dt))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto PlayerObject::updateMove(float dt) -> decltype(updateMove(dt)) {
	using FunctionType = decltype(updateMove(dt))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38a0c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto PlayerObject::updatePlayerArt() -> decltype(updatePlayerArt()) {
	using FunctionType = decltype(updatePlayerArt())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updatePlayerBirdFrame(int frame) -> decltype(updatePlayerBirdFrame(frame)) {
	using FunctionType = decltype(updatePlayerBirdFrame(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39e2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::updatePlayerDartFrame(int frame) -> decltype(updatePlayerDartFrame(frame)) {
	using FunctionType = decltype(updatePlayerDartFrame(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39e9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::updatePlayerFrame(int frame) -> decltype(updatePlayerFrame(frame)) {
	using FunctionType = decltype(updatePlayerFrame(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39dc50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::updatePlayerGlow() -> decltype(updatePlayerGlow()) {
	using FunctionType = decltype(updatePlayerGlow())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a02a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updatePlayerJetpackFrame(int frame) -> decltype(updatePlayerJetpackFrame(frame)) {
	using FunctionType = decltype(updatePlayerJetpackFrame(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39e0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::updatePlayerRollFrame(int frame) -> decltype(updatePlayerRollFrame(frame)) {
	using FunctionType = decltype(updatePlayerRollFrame(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39e580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::updatePlayerScale() -> decltype(updatePlayerScale()) {
	using FunctionType = decltype(updatePlayerScale())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updatePlayerShipFrame(int frame) -> decltype(updatePlayerShipFrame(frame)) {
	using FunctionType = decltype(updatePlayerShipFrame(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39de80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::updatePlayerSpriteExtra(gd::string frameName) -> decltype(updatePlayerSpriteExtra(frameName)) {
	using FunctionType = decltype(updatePlayerSpriteExtra(frameName))(*)(PlayerObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39ec10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frameName);
}

auto PlayerObject::updatePlayerSwingFrame(int frame) -> decltype(updatePlayerSwingFrame(frame)) {
	using FunctionType = decltype(updatePlayerSwingFrame(frame))(*)(PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39e7b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto PlayerObject::updateRobotAnimationSpeed() -> decltype(updateRobotAnimationSpeed()) {
	using FunctionType = decltype(updateRobotAnimationSpeed())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a10e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updateRotation(float dt) -> decltype(updateRotation(dt)) {
	using FunctionType = decltype(updateRotation(dt))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x391020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto PlayerObject::updateRotation(float dt, float rotation) -> decltype(updateRotation(dt, rotation)) {
	using FunctionType = decltype(updateRotation(dt, rotation))(*)(PlayerObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x391260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, rotation);
}

auto PlayerObject::updateShipRotation(float dt) -> decltype(updateShipRotation(dt)) {
	using FunctionType = decltype(updateShipRotation(dt))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x390c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto PlayerObject::updateShipSpriteExtra(gd::string frameName) -> decltype(updateShipSpriteExtra(frameName)) {
	using FunctionType = decltype(updateShipSpriteExtra(frameName))(*)(PlayerObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39ed20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frameName);
}

auto PlayerObject::updateSlopeRotation(float dt) -> decltype(updateSlopeRotation(dt)) {
	using FunctionType = decltype(updateSlopeRotation(dt))(*)(PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x390bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto PlayerObject::updateStreakBlend(bool blend) -> decltype(updateStreakBlend(blend)) {
	using FunctionType = decltype(updateStreakBlend(blend))(*)(PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, blend);
}

auto PlayerObject::updateSwingFire() -> decltype(updateSwingFire()) {
	using FunctionType = decltype(updateSwingFire())(*)(PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39add0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayerObject::updateTimeMod(float speed, bool noEffects) -> decltype(updateTimeMod(speed, noEffects)) {
	using FunctionType = decltype(updateTimeMod(speed, noEffects))(*)(PlayerObject*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, speed, noEffects);
}
