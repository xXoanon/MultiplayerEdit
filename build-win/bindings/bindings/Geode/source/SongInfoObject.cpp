
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

auto SongInfoObject::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3448b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::create(int songID) -> decltype(create(songID)) {
	using FunctionType = decltype(create(songID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x344730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID);
}

auto SongInfoObject::create(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, gd::string unknown, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(create(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(create(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, gd::string, int, gd::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x345bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}

auto SongInfoObject::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&SongInfoObject::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(SongInfoObject*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3465b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto SongInfoObject::addTags(gd::string tags) -> decltype(addTags(tags)) {
	using FunctionType = decltype(addTags(tags))(*)(SongInfoObject*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tags);
}

auto SongInfoObject::getArtistNames(int unused) -> decltype(getArtistNames(unused)) {
	using FunctionType = decltype(getArtistNames(unused))(*)(SongInfoObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3467b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto SongInfoObject::getExtraArtistCount() -> decltype(getExtraArtistCount()) {
	using FunctionType = decltype(getExtraArtistCount())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getTagsString(bool shortTags) -> decltype(getTagsString(shortTags)) {
	using FunctionType = decltype(getTagsString(shortTags))(*)(SongInfoObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, shortTags);
}

auto SongInfoObject::init(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, gd::string unknown, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(init(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(init(songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(SongInfoObject*, int, gd::string, gd::string, int, float, gd::string, gd::string, gd::string, gd::string, int, gd::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x345e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, unknown, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}
