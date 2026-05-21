
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

auto TriggerControlGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, gd::vector<int> const*>::func(&TriggerControlGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(TriggerControlGameObject*, GJBaseGameLayer*, int, gd::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto TriggerControlGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&TriggerControlGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(TriggerControlGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto TriggerControlGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&TriggerControlGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(TriggerControlGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto TriggerControlGameObject::updateTriggerControlFrame() -> decltype(updateTriggerControlFrame()) {
	using FunctionType = decltype(updateTriggerControlFrame())(*)(TriggerControlGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
