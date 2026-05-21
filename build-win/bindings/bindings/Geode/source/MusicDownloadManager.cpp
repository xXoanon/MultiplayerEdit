
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

auto MusicDownloadManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33cc00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto MusicDownloadManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicDownloadManager::init), this);
	using FunctionType = decltype(init())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d1e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicDownloadManager::addDLToActive(char const* tag, cocos2d::CCObject* obj) -> decltype(addDLToActive(tag, obj)) {
	using FunctionType = decltype(addDLToActive(tag, obj))(*)(MusicDownloadManager*, char const*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33efc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag, obj);
}

auto MusicDownloadManager::addMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(addMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(addMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::addSongObjectFromString(gd::string str) -> decltype(addSongObjectFromString(str)) {
	using FunctionType = decltype(addSongObjectFromString(str))(*)(MusicDownloadManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33da40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto MusicDownloadManager::clearUnusedSongs() -> decltype(clearUnusedSongs()) {
	using FunctionType = decltype(clearUnusedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::createArtistsInfo(gd::string str) -> decltype(createArtistsInfo(str)) {
	using FunctionType = decltype(createArtistsInfo(str))(*)(MusicDownloadManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto MusicDownloadManager::createSongsInfo(gd::string songsStr, gd::string artistsStr) -> decltype(createSongsInfo(songsStr, artistsStr)) {
	using FunctionType = decltype(createSongsInfo(songsStr, artistsStr))(*)(MusicDownloadManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33dde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songsStr, artistsStr);
}

auto MusicDownloadManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(MusicDownloadManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33fa20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto MusicDownloadManager::downloadCustomSong(int id) -> decltype(downloadCustomSong(id)) {
	using FunctionType = decltype(downloadCustomSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadMusicLibrary() -> decltype(downloadMusicLibrary()) {
	using FunctionType = decltype(downloadMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadSFX(int id) -> decltype(downloadSFX(id)) {
	using FunctionType = decltype(downloadSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSFXFailed(int id, GJSongError errorCode) -> decltype(downloadSFXFailed(id, errorCode)) {
	using FunctionType = decltype(downloadSFXFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3445b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::downloadSFXLibrary() -> decltype(downloadSFXLibrary()) {
	using FunctionType = decltype(downloadSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3429e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadSong(int id) -> decltype(downloadSong(id)) {
	using FunctionType = decltype(downloadSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ea20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSongFailed(int id, GJSongError errorCode) -> decltype(downloadSongFailed(id, errorCode)) {
	using FunctionType = decltype(downloadSongFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x344530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::downloadSongStarted(int id) -> decltype(downloadSongStarted(id)) {
	using FunctionType = decltype(downloadSongStarted(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::filterMusicByArtistID(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByArtistID(id, songs)) {
	using FunctionType = decltype(filterMusicByArtistID(id, songs))(*)(MusicDownloadManager*, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3420e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, songs);
}

auto MusicDownloadManager::filterMusicByTag(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByTag(id, songs)) {
	using FunctionType = decltype(filterMusicByTag(id, songs))(*)(MusicDownloadManager*, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, songs);
}

auto MusicDownloadManager::generateCustomContentURL(gd::string path) -> decltype(generateCustomContentURL(path)) {
	using FunctionType = decltype(generateCustomContentURL(path))(*)(MusicDownloadManager*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x343aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto MusicDownloadManager::getCustomContentURL() -> decltype(getCustomContentURL()) {
	using FunctionType = decltype(getCustomContentURL())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ff10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getDLObject(char const* id) -> decltype(getDLObject(id)) {
	using FunctionType = decltype(getDLObject(id))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getDownloadedSongs() -> decltype(getDownloadedSongs()) {
	using FunctionType = decltype(getDownloadedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getSFXFolderPathForID(int id, bool nextFolder) -> decltype(getSFXFolderPathForID(id, nextFolder)) {
	using FunctionType = decltype(getSFXFolderPathForID(id, nextFolder))(*)(MusicDownloadManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x343880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, nextFolder);
}

auto MusicDownloadManager::getSongInfo(int id, bool download) -> decltype(getSongInfo(id, download)) {
	using FunctionType = decltype(getSongInfo(id, download))(*)(MusicDownloadManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, download);
}

auto MusicDownloadManager::getSongInfoObject(int id) -> decltype(getSongInfoObject(id)) {
	using FunctionType = decltype(getSongInfoObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::handleIt(bool success, gd::string response, gd::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(MusicDownloadManager*, bool, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d0f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto MusicDownloadManager::isRunningActionForSongID(int id) -> decltype(isRunningActionForSongID(id)) {
	using FunctionType = decltype(isRunningActionForSongID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isSFXDownloaded(int id) -> decltype(isSFXDownloaded(id)) {
	using FunctionType = decltype(isSFXDownloaded(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isSongDownloaded(int id) -> decltype(isSongDownloaded(id)) {
	using FunctionType = decltype(isSongDownloaded(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::loadSongInfoFailed(int id, GJSongError errorCode) -> decltype(loadSongInfoFailed(id, errorCode)) {
	using FunctionType = decltype(loadSongInfoFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3444b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::loadSongInfoFinished(SongInfoObject* object) -> decltype(loadSongInfoFinished(object)) {
	using FunctionType = decltype(loadSongInfoFinished(object))(*)(MusicDownloadManager*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x344430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	using FunctionType = decltype(musicActionFailed(action))(*)(MusicDownloadManager*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3446b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto MusicDownloadManager::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	using FunctionType = decltype(musicActionFinished(action))(*)(MusicDownloadManager*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x344630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto MusicDownloadManager::onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadMusicLibraryCompleted(client, response)) {
	using FunctionType = decltype(onDownloadMusicLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSFXCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSFXCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3424a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSFXLibraryCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSFXLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSongCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSongCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSongCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ed20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onGetCustomContentURLCompleted(gd::string response, gd::string tag) -> decltype(onGetCustomContentURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetCustomContentURLCompleted(response, tag))(*)(MusicDownloadManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onGetSongInfoCompleted(gd::string response, gd::string tag) -> decltype(onGetSongInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetSongInfoCompleted(response, tag))(*)(MusicDownloadManager*, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33cff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateMusicLibraryCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateMusicLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateSFXLibraryCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateSFXLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3428a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::parseMusicLibrary() -> decltype(parseMusicLibrary()) {
	using FunctionType = decltype(parseMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::parseSFXLibrary() -> decltype(parseSFXLibrary()) {
	using FunctionType = decltype(parseSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::pathForSFX(int id) -> decltype(pathForSFX(id)) {
	using FunctionType = decltype(pathForSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSFXFolder(int id) -> decltype(pathForSFXFolder(id)) {
	using FunctionType = decltype(pathForSFXFolder(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSong(int id) -> decltype(pathForSong(id)) {
	using FunctionType = decltype(pathForSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSongFolder(int id) -> decltype(pathForSongFolder(id)) {
	using FunctionType = decltype(pathForSongFolder(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::ProcessHttpGetRequest(gd::string url, gd::string tag, cocos2d::extension::SEL_HttpResponse selector, int connectTimeout, int readTimeout) -> decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout)) {
	using FunctionType = decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout))(*)(MusicDownloadManager*, gd::string, gd::string, cocos2d::extension::SEL_HttpResponse, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ced0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, tag, selector, connectTimeout, readTimeout);
}

auto MusicDownloadManager::ProcessHttpRequest(gd::string url, gd::string params, gd::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(MusicDownloadManager*, gd::string, gd::string, gd::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33cd90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto MusicDownloadManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	using FunctionType = decltype(removeDLFromActive(tag))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto MusicDownloadManager::removeMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(removeMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(removeMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::responseToDict(gd::string response, char const* delimiter) -> decltype(responseToDict(response, delimiter)) {
	using FunctionType = decltype(responseToDict(response, delimiter))(*)(MusicDownloadManager*, gd::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, delimiter);
}

auto MusicDownloadManager::showTOS(FLAlertLayerProtocol* delegate) -> decltype(showTOS(delegate)) {
	using FunctionType = decltype(showTOS(delegate))(*)(MusicDownloadManager*, FLAlertLayerProtocol*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::songStateChanged() -> decltype(songStateChanged()) {
	using FunctionType = decltype(songStateChanged())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryUpdateMusicLibrary() -> decltype(tryUpdateMusicLibrary()) {
	using FunctionType = decltype(tryUpdateMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryUpdateSFXLibrary() -> decltype(tryUpdateSFXLibrary()) {
	using FunctionType = decltype(tryUpdateSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
