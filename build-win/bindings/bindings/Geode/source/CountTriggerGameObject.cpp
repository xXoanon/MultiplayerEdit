
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

auto CountTriggerGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, gd::vector<int> const*>::func(&CountTriggerGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(CountTriggerGameObject*, GJBaseGameLayer*, int, gd::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bb210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto CountTriggerGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&CountTriggerGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(CountTriggerGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bb680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto CountTriggerGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&CountTriggerGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(CountTriggerGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bb9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}
