
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

cocos2d::CCDictionary::CCDictionary() : cocos2d::CCDictionary(geode::CutoffConstructor, sizeof(cocos2d::CCDictionary)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCDictionary::~CCDictionary();

	using FunctionType = void(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionaryC2Ev")), tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCDictionary::~CCDictionary() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCDictionary*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionaryD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCDictionary(geode::CutoffConstructor, sizeof(cocos2d::CCDictionary));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCDictionary::charForKey(gd::string const& p0) -> decltype(charForKey(p0)) {
	using FunctionType = decltype(charForKey(p0))(*)(cocos2d::CCDictionary*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionary10charForKeyERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCDictionary::objectForKey(gd::string const& p0) -> decltype(objectForKey(p0)) {
	using FunctionType = decltype(objectForKey(p0))(*)(cocos2d::CCDictionary*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionary12objectForKeyERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCDictionary::removeObjectForKey(gd::string const& p0) -> decltype(removeObjectForKey(p0)) {
	using FunctionType = decltype(removeObjectForKey(p0))(*)(cocos2d::CCDictionary*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionary18removeObjectForKeyERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCDictionary::setObject(cocos2d::CCObject* p0, gd::string const& p1) -> decltype(setObject(p0, p1)) {
	using FunctionType = decltype(setObject(p0, p1))(*)(cocos2d::CCDictionary*, cocos2d::CCObject*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionary9setObjectEPNS_8CCObjectERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCDictionary::setObjectUnSafe(cocos2d::CCObject* p0, gd::string const& p1) -> decltype(setObjectUnSafe(p0, p1)) {
	using FunctionType = decltype(setObjectUnSafe(p0, p1))(*)(cocos2d::CCDictionary*, cocos2d::CCObject*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionary15setObjectUnSafeEPNS_8CCObjectERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCDictionary::valueForKey(gd::string const& p0) -> decltype(valueForKey(p0)) {
	using FunctionType = decltype(valueForKey(p0))(*)(cocos2d::CCDictionary*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d12CCDictionary11valueForKeyERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
