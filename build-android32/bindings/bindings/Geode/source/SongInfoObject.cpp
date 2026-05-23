
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

auto SongInfoObject::create(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, gd::string unknown, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(create(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(create(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, gd::string, int, gd::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject6createEiSsSsifSsSsSsSsiSsbii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}

auto SongInfoObject::addTags(gd::string tags) -> decltype(addTags(tags)) {
	using FunctionType = decltype(addTags(tags))(*)(SongInfoObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject7addTagsESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tags);
}

auto SongInfoObject::init(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, gd::string unknown, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(init(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(init(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(SongInfoObject*, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, gd::string, int, gd::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject4initEiSsSsifSsSsSsSsiSsbii")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}

auto SongInfoObject::updateArtists(gd::string artists) -> decltype(updateArtists(artists)) {
	using FunctionType = decltype(updateArtists(artists))(*)(SongInfoObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14SongInfoObject13updateArtistsESs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, artists);
}
