
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

auto PlatformToolbox::copyToClipboard(gd::string str) -> decltype(copyToClipboard(str)) {
	using FunctionType = decltype(copyToClipboard(str))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox15copyToClipboardESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto PlatformToolbox::doesFileExist(gd::string path) -> decltype(doesFileExist(path)) {
	using FunctionType = decltype(doesFileExist(path))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox13doesFileExistESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::downloadAndSavePromoImage(gd::string url, gd::string path) -> decltype(downloadAndSavePromoImage(url, path)) {
	using FunctionType = decltype(downloadAndSavePromoImage(url, path))(*)(gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox25downloadAndSavePromoImageESsSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(url, path);
}

auto PlatformToolbox::loadAndDecryptFileToString(char const* dirPath, char const* fileName, gd::string& str) -> decltype(loadAndDecryptFileToString(dirPath, fileName, str)) {
	using FunctionType = decltype(loadAndDecryptFileToString(dirPath, fileName, str))(*)(char const*, char const*, gd::string&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox26loadAndDecryptFileToStringEPKcS1_RSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dirPath, fileName, str);
}

auto PlatformToolbox::saveAndEncryptStringToFile(gd::string& str, char const* fileName, char const* dirPath) -> decltype(saveAndEncryptStringToFile(str, fileName, dirPath)) {
	using FunctionType = decltype(saveAndEncryptStringToFile(str, fileName, dirPath))(*)(gd::string&, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox26saveAndEncryptStringToFileERSsPKcS2_")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, fileName, dirPath);
}

auto PlatformToolbox::spriteFromSavedFile(gd::string path) -> decltype(spriteFromSavedFile(path)) {
	using FunctionType = decltype(spriteFromSavedFile(path))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox19spriteFromSavedFileESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::tryShowRateDialog(gd::string gameName) -> decltype(tryShowRateDialog(gameName)) {
	using FunctionType = decltype(tryShowRateDialog(gameName))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox17tryShowRateDialogESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(gameName);
}
