
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

auto CreateParticlePopup::create(gd::string str) -> decltype(create(str)) {
	using FunctionType = decltype(create(str))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19CreateParticlePopup6createESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto CreateParticlePopup::create(ParticleGameObject* object, cocos2d::CCArray* objects, gd::string str) -> decltype(create(object, objects, str)) {
	using FunctionType = decltype(create(object, objects, str))(*)(ParticleGameObject*, cocos2d::CCArray*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19CreateParticlePopup6createEP18ParticleGameObjectPN7cocos2d7CCArrayESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, str);
}

auto CreateParticlePopup::init(ParticleGameObject* object, cocos2d::CCArray* objects, gd::string str) -> decltype(init(object, objects, str)) {
	using FunctionType = decltype(init(object, objects, str))(*)(CreateParticlePopup*, ParticleGameObject*, cocos2d::CCArray*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19CreateParticlePopup4initEP18ParticleGameObjectPN7cocos2d7CCArrayESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, str);
}
