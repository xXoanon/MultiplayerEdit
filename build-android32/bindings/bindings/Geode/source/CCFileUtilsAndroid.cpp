
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

cocos2d::CCFileUtilsAndroid::CCFileUtilsAndroid() : cocos2d::CCFileUtilsAndroid(geode::CutoffConstructor, sizeof(cocos2d::CCFileUtilsAndroid)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCFileUtilsAndroid::~CCFileUtilsAndroid();

	using FunctionType = void(*)(cocos2d::CCFileUtilsAndroid*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroidC2Ev")), tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCFileUtilsAndroid::~CCFileUtilsAndroid() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCFileUtilsAndroid*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroidD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCFileUtilsAndroid(geode::CutoffConstructor, sizeof(cocos2d::CCFileUtilsAndroid));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCFileUtilsAndroid::isAbsolutePath(gd::string const& p0) -> decltype(isAbsolutePath(p0)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&>::func(&cocos2d::CCFileUtilsAndroid::isAbsolutePath), this);
	using FunctionType = decltype(isAbsolutePath(p0))(*)(cocos2d::CCFileUtilsAndroid*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroid14isAbsolutePathERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCFileUtilsAndroid::isFileExist(gd::string const& p0) -> decltype(isFileExist(p0)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&>::func(&cocos2d::CCFileUtilsAndroid::isFileExist), this);
	using FunctionType = decltype(isFileExist(p0))(*)(cocos2d::CCFileUtilsAndroid*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroid11isFileExistERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
