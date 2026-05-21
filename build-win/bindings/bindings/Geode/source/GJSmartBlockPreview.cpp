
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

auto GJSmartBlockPreview::create(gd::string key) -> decltype(create(key)) {
	using FunctionType = decltype(create(key))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b59d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartBlockPreview::addChance(int count, int total) -> decltype(addChance(count, total)) {
	using FunctionType = decltype(addChance(count, total))(*)(GJSmartBlockPreview*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b6770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count, total);
}

auto GJSmartBlockPreview::addPreview(gd::string key, gd::string data, LevelEditorLayer* layer) -> decltype(addPreview(key, data, layer)) {
	using FunctionType = decltype(addPreview(key, data, layer))(*)(GJSmartBlockPreview*, gd::string, gd::string, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b65f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, data, layer);
}

auto GJSmartBlockPreview::addTemplateGuide(SmartPrefabResult result, float opacity) -> decltype(addTemplateGuide(result, opacity)) {
	using FunctionType = decltype(addTemplateGuide(result, opacity))(*)(GJSmartBlockPreview*, SmartPrefabResult, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b5da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, result, opacity);
}

auto GJSmartBlockPreview::addTemplateGuide(gd::string key, int type) -> decltype(addTemplateGuide(key, type)) {
	using FunctionType = decltype(addTemplateGuide(key, type))(*)(GJSmartBlockPreview*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b5b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, type);
}
