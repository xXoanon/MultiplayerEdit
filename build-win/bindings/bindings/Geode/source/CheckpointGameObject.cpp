
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

auto CheckpointGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CheckpointGameObject::init), this);
	using FunctionType = decltype(init())(*)(CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CheckpointGameObject::setupCustomSprites(gd::string frameName) -> decltype(setupCustomSprites(frameName)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string>::func(&CheckpointGameObject::setupCustomSprites), this);
	using FunctionType = decltype(setupCustomSprites(frameName))(*)(CheckpointGameObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ba1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frameName);
}

auto CheckpointGameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CheckpointGameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bafc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CheckpointGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, gd::vector<int> const*>::func(&CheckpointGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(CheckpointGameObject*, GJBaseGameLayer*, int, gd::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto CheckpointGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&CheckpointGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(CheckpointGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bae90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto CheckpointGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&CheckpointGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(CheckpointGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4babc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto CheckpointGameObject::triggerActivated(float xPosition) -> decltype(triggerActivated(xPosition)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CheckpointGameObject::triggerActivated), this);
	using FunctionType = decltype(triggerActivated(xPosition))(*)(CheckpointGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, xPosition);
}

auto CheckpointGameObject::restoreObject() -> decltype(restoreObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CheckpointGameObject::restoreObject), this);
	using FunctionType = decltype(restoreObject())(*)(CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bb1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CheckpointGameObject::updateSyncedAnimation(float totalTime, int frameIndex) -> decltype(updateSyncedAnimation(totalTime, frameIndex)) {
	auto self = addresser::thunkAdjust(Resolve<float, int>::func(&CheckpointGameObject::updateSyncedAnimation), this);
	using FunctionType = decltype(updateSyncedAnimation(totalTime, frameIndex))(*)(CheckpointGameObject*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ba870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, totalTime, frameIndex);
}

auto CheckpointGameObject::resetCheckpoint() -> decltype(resetCheckpoint()) {
	using FunctionType = decltype(resetCheckpoint())(*)(CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bb040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
