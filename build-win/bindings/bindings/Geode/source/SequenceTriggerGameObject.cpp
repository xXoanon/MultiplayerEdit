
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

auto SequenceTriggerGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SequenceTriggerGameObject::init), this);
	using FunctionType = decltype(init())(*)(SequenceTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b4820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SequenceTriggerGameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SequenceTriggerGameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(SequenceTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b4840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SequenceTriggerGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, gd::vector<int> const*>::func(&SequenceTriggerGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(SequenceTriggerGameObject*, GJBaseGameLayer*, int, gd::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b4870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto SequenceTriggerGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&SequenceTriggerGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(SequenceTriggerGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b4c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto SequenceTriggerGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&SequenceTriggerGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(SequenceTriggerGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b4fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}
