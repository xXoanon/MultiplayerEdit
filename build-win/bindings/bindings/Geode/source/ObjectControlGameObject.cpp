
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

auto ObjectControlGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ObjectControlGameObject::init), this);
	using FunctionType = decltype(init())(*)(ObjectControlGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ObjectControlGameObject::customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string>&, gd::vector<void*>&>::func(&ObjectControlGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(ObjectControlGameObject*, gd::vector<gd::string>&, gd::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto ObjectControlGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&ObjectControlGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(ObjectControlGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}
