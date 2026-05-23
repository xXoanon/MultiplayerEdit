
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

cocos2d::CCFileUtils::CCFileUtils() : cocos2d::CCFileUtils(geode::CutoffConstructor, sizeof(cocos2d::CCFileUtils)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCFileUtils::~CCFileUtils();

	using FunctionType = void(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtilsC2Ev")), tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCFileUtils::~CCFileUtils() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCFileUtils*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtilsD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCFileUtils(geode::CutoffConstructor, sizeof(cocos2d::CCFileUtils));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCFileUtils::addSuffix(gd::string p0, gd::string p1) -> decltype(addSuffix(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string, gd::string>::func(&cocos2d::CCFileUtils::addSuffix), this);
	using FunctionType = decltype(addSuffix(p0, p1))(*)(cocos2d::CCFileUtils*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils9addSuffixESsSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCFileUtils::createCCArrayWithContentsOfFile(gd::string const& p0) -> decltype(createCCArrayWithContentsOfFile(p0)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::createCCArrayWithContentsOfFile), this);
	using FunctionType = decltype(createCCArrayWithContentsOfFile(p0))(*)(cocos2d::CCFileUtils*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils31createCCArrayWithContentsOfFileERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCFileUtils::createCCDictionaryWithContentsOfFile(gd::string const& p0) -> decltype(createCCDictionaryWithContentsOfFile(p0)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::createCCDictionaryWithContentsOfFile), this);
	using FunctionType = decltype(createCCDictionaryWithContentsOfFile(p0))(*)(cocos2d::CCFileUtils*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils36createCCDictionaryWithContentsOfFileERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCFileUtils::getFullPathForDirectoryAndFilename(gd::string const& p0, gd::string const& p1) -> decltype(getFullPathForDirectoryAndFilename(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, gd::string const&>::func(&cocos2d::CCFileUtils::getFullPathForDirectoryAndFilename), this);
	using FunctionType = decltype(getFullPathForDirectoryAndFilename(p0, p1))(*)(cocos2d::CCFileUtils*, gd::string const&, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils34getFullPathForDirectoryAndFilenameERKSsS1_")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCFileUtils::getPathForFilename(gd::string const& p0, gd::string const& p1, gd::string const& p2) -> decltype(getPathForFilename(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&, gd::string const&, gd::string const&>::func(&cocos2d::CCFileUtils::getPathForFilename), this);
	using FunctionType = decltype(getPathForFilename(p0, p1, p2))(*)(cocos2d::CCFileUtils*, gd::string const&, gd::string const&, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils18getPathForFilenameERKSsS1_S1_")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto cocos2d::CCFileUtils::isAbsolutePath(gd::string const& p0) -> decltype(isAbsolutePath(p0)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::isAbsolutePath), this);
	using FunctionType = decltype(isAbsolutePath(p0))(*)(cocos2d::CCFileUtils*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils14isAbsolutePathERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCFileUtils::setSearchPaths(gd::vector<gd::string> const& p0) -> decltype(setSearchPaths(p0)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string> const&>::func(&cocos2d::CCFileUtils::setSearchPaths), this);
	using FunctionType = decltype(setSearchPaths(p0))(*)(cocos2d::CCFileUtils*, gd::vector<gd::string> const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils14setSearchPathsERKSt6vectorISsSaISsEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCFileUtils::setSearchResolutionsOrder(gd::vector<gd::string> const& p0) -> decltype(setSearchResolutionsOrder(p0)) {
	auto self = addresser::thunkAdjust(Resolve<gd::vector<gd::string> const&>::func(&cocos2d::CCFileUtils::setSearchResolutionsOrder), this);
	using FunctionType = decltype(setSearchResolutionsOrder(p0))(*)(cocos2d::CCFileUtils*, gd::vector<gd::string> const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils25setSearchResolutionsOrderERKSt6vectorISsSaISsEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCFileUtils::writeToFile(cocos2d::CCDictionary* p0, gd::string const& p1) -> decltype(writeToFile(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCDictionary*, gd::string const&>::func(&cocos2d::CCFileUtils::writeToFile), this);
	using FunctionType = decltype(writeToFile(p0, p1))(*)(cocos2d::CCFileUtils*, cocos2d::CCDictionary*, gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d11CCFileUtils11writeToFileEPNS_12CCDictionaryERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
