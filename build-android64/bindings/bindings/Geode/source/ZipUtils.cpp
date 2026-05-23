
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

auto cocos2d::ZipUtils::base64DecodeEnc(gd::string const& p0, gd::string p1) -> decltype(base64DecodeEnc(p0, p1)) {
	using FunctionType = decltype(base64DecodeEnc(p0, p1))(*)(gd::string const&, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils15base64DecodeEncERKSsSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ZipUtils::base64EncodeEnc(gd::string const& p0, gd::string p1) -> decltype(base64EncodeEnc(p0, p1)) {
	using FunctionType = decltype(base64EncodeEnc(p0, p1))(*)(gd::string const&, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils15base64EncodeEncERKSsSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ZipUtils::base64URLDecode(gd::string const& p0) -> decltype(base64URLDecode(p0)) {
	using FunctionType = decltype(base64URLDecode(p0))(*)(gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils15base64URLDecodeERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ZipUtils::base64URLEncode(gd::string const& p0) -> decltype(base64URLEncode(p0)) {
	using FunctionType = decltype(base64URLEncode(p0))(*)(gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils15base64URLEncodeERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ZipUtils::compressString(gd::string const& data, bool encrypt, int encryptionKey) -> decltype(compressString(data, encrypt, encryptionKey)) {
	using FunctionType = decltype(compressString(data, encrypt, encryptionKey))(*)(gd::string const&, bool, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils14compressStringERKSsbi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(data, encrypt, encryptionKey);
}

auto cocos2d::ZipUtils::decompressString(gd::string const& data, bool encrypt, int encryptionKey) -> decltype(decompressString(data, encrypt, encryptionKey)) {
	using FunctionType = decltype(decompressString(data, encrypt, encryptionKey))(*)(gd::string const&, bool, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils16decompressStringERKSsbi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(data, encrypt, encryptionKey);
}

auto cocos2d::ZipUtils::hexToChar(gd::string const& p0) -> decltype(hexToChar(p0)) {
	using FunctionType = decltype(hexToChar(p0))(*)(gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils9hexToCharERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ZipUtils::urlDecode(gd::string const& p0) -> decltype(urlDecode(p0)) {
	using FunctionType = decltype(urlDecode(p0))(*)(gd::string const&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d8ZipUtils9urlDecodeERKSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}
