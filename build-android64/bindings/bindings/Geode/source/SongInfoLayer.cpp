
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

auto SongInfoLayer::create(gd::string songName, gd::string artistName, gd::string songURL, gd::string newgroundsURL, gd::string youtubeURL, gd::string facebookURL, int songID, gd::string songTags, int nongType) -> decltype(create(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType)) {
	using FunctionType = decltype(create(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType))(*)(gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, int, gd::string, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13SongInfoLayer6createESsSsSsSsSsSsiSsi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType);
}

auto SongInfoLayer::init(gd::string songName, gd::string artistName, gd::string songURL, gd::string newgroundsURL, gd::string youtubeURL, gd::string facebookURL, int songID, gd::string songTags, int nongType) -> decltype(init(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType)) {
	using FunctionType = decltype(init(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType))(*)(SongInfoLayer*, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, int, gd::string, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13SongInfoLayer4initESsSsSsSsSsSsiSsi")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType);
}
