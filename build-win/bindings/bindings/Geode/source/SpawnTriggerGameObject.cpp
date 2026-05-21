
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

auto SpawnTriggerGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SpawnTriggerGameObject::init), this);
	using FunctionType = decltype(init())(*)(SpawnTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SpawnTriggerGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, gd::vector<int> const*>::func(&SpawnTriggerGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(SpawnTriggerGameObject*, GJBaseGameLayer*, int, gd::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b91f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto SpawnTriggerGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&SpawnTriggerGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(SpawnTriggerGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto SpawnTriggerGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&SpawnTriggerGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(SpawnTriggerGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b98a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SpawnTriggerGameObject::changeRemap(int oldID, int newID, bool reverse) -> decltype(changeRemap(oldID, newID, reverse)) {
	using FunctionType = decltype(changeRemap(oldID, newID, reverse))(*)(SpawnTriggerGameObject*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, oldID, newID, reverse);
}

auto SpawnTriggerGameObject::updateRemapKeys(gd::vector<int> const& remapKeys) -> decltype(updateRemapKeys(remapKeys)) {
	using FunctionType = decltype(updateRemapKeys(remapKeys))(*)(SpawnTriggerGameObject*, gd::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b90f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, remapKeys);
}
