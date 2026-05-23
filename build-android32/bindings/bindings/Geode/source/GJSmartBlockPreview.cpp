
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/cocos/platform/android/CCFileUtilsAndroid.h>

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
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19GJSmartBlockPreview6createESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartBlockPreview::addPreview(gd::string key, gd::string data, LevelEditorLayer* layer) -> decltype(addPreview(key, data, layer)) {
	using FunctionType = decltype(addPreview(key, data, layer))(*)(GJSmartBlockPreview*, gd::string, gd::string, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19GJSmartBlockPreview10addPreviewESsSsP16LevelEditorLayer")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, data, layer);
}

auto GJSmartBlockPreview::addTemplateGuide(gd::string key, int type) -> decltype(addTemplateGuide(key, type)) {
	using FunctionType = decltype(addTemplateGuide(key, type))(*)(GJSmartBlockPreview*, gd::string, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19GJSmartBlockPreview16addTemplateGuideESsi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, type);
}

auto GJSmartBlockPreview::init(gd::string key) -> decltype(init(key)) {
	using FunctionType = decltype(init(key))(*)(GJSmartBlockPreview*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19GJSmartBlockPreview4initESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}
