
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

EffectGameObject::EffectGameObject() : EffectGameObject(geode::CutoffConstructor, sizeof(EffectGameObject)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	EffectGameObject::~EffectGameObject();

	using FunctionType = void(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495720, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto EffectGameObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&EffectGameObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(EffectGameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto EffectGameObject::firstSetup() -> decltype(firstSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EffectGameObject::firstSetup), this);
	using FunctionType = decltype(firstSetup())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a87b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EffectGameObject::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EffectGameObject::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a87e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EffectGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, gd::vector<int> const*>::func(&EffectGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(EffectGameObject*, GJBaseGameLayer*, int, gd::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto EffectGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&EffectGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(EffectGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a8ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto EffectGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&EffectGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(EffectGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4abc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto EffectGameObject::setRScaleX(float scaleX) -> decltype(setRScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EffectGameObject::setRScaleX), this);
	using FunctionType = decltype(setRScaleX(scaleX))(*)(EffectGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a58f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto EffectGameObject::setRScaleY(float scaleY) -> decltype(setRScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EffectGameObject::setRScaleY), this);
	using FunctionType = decltype(setRScaleY(scaleY))(*)(EffectGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto EffectGameObject::triggerActivated(float xPosition) -> decltype(triggerActivated(xPosition)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&EffectGameObject::triggerActivated), this);
	using FunctionType = decltype(triggerActivated(xPosition))(*)(EffectGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a8790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, xPosition);
}

auto EffectGameObject::restoreObject() -> decltype(restoreObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EffectGameObject::restoreObject), this);
	using FunctionType = decltype(restoreObject())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a8580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EffectGameObject::spawnXPosition() -> decltype(spawnXPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EffectGameObject::spawnXPosition), this);
	using FunctionType = decltype(spawnXPosition())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a8750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EffectGameObject::canReverse() -> decltype(canReverse()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EffectGameObject::canReverse), this);
	using FunctionType = decltype(canReverse())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4aba40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EffectGameObject::canBeOrdered() -> decltype(canBeOrdered()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EffectGameObject::canBeOrdered), this);
	using FunctionType = decltype(canBeOrdered())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4abbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EffectGameObject::getObjectLabel() -> decltype(getObjectLabel()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EffectGameObject::getObjectLabel), this);
	using FunctionType = decltype(getObjectLabel())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EffectGameObject::setObjectLabel(cocos2d::CCLabelBMFont* label) -> decltype(setObjectLabel(label)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCLabelBMFont*>::func(&EffectGameObject::setObjectLabel), this);
	using FunctionType = decltype(setObjectLabel(label))(*)(EffectGameObject*, cocos2d::CCLabelBMFont*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4959a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, label);
}

auto EffectGameObject::stateSensitiveOff(GJBaseGameLayer* layer) -> decltype(stateSensitiveOff(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&EffectGameObject::stateSensitiveOff), this);
	using FunctionType = decltype(stateSensitiveOff(layer))(*)(EffectGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a84d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto EffectGameObject::canSpawnTriggers() -> decltype(canSpawnTriggers()) {
	using FunctionType = decltype(canSpawnTriggers())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4abb20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EffectGameObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(EffectGameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto EffectGameObject::playTriggerEffect() -> decltype(playTriggerEffect()) {
	using FunctionType = decltype(playTriggerEffect())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EffectGameObject::triggerEffectFinished() -> decltype(triggerEffectFinished()) {
	using FunctionType = decltype(triggerEffectFinished())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EffectGameObject::updateInteractiveHover(float offset) -> decltype(updateInteractiveHover(offset)) {
	using FunctionType = decltype(updateInteractiveHover(offset))(*)(EffectGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a8630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offset);
}

auto EffectGameObject::updateSpecialColor() -> decltype(updateSpecialColor()) {
	using FunctionType = decltype(updateSpecialColor())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a85b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EffectGameObject::updateSpeedModType() -> decltype(updateSpeedModType()) {
	using FunctionType = decltype(updateSpeedModType())(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ab8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
