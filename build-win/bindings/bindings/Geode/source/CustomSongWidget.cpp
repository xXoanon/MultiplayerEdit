
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

auto CustomSongWidget::create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk) -> decltype(create(songInfo, songDelegate, showSongSelect, showPlayMusic, showDownload, isRobtopSong, unkBool, isMusicLibrary, unk)) {
	using FunctionType = decltype(create(songInfo, songDelegate, showSongSelect, showPlayMusic, showDownload, isRobtopSong, unkBool, isMusicLibrary, unk))(*)(SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc8230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songInfo, songDelegate, showSongSelect, showPlayMusic, showDownload, isRobtopSong, unkBool, isMusicLibrary, unk);
}

auto CustomSongWidget::loadSongInfoFinished(SongInfoObject* object) -> decltype(loadSongInfoFinished(object)) {
	auto self = addresser::thunkAdjust(Resolve<SongInfoObject*>::func(&CustomSongWidget::loadSongInfoFinished), this);
	using FunctionType = decltype(loadSongInfoFinished(object))(*)(CustomSongWidget*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xccc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto CustomSongWidget::loadSongInfoFailed(int id, GJSongError errorType) -> decltype(loadSongInfoFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::loadSongInfoFailed), this);
	using FunctionType = decltype(loadSongInfoFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcce10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::downloadSongStarted(int id) -> decltype(downloadSongStarted(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSongStarted), this);
	using FunctionType = decltype(downloadSongStarted(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xccf00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSongFinished(int id) -> decltype(downloadSongFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSongFinished), this);
	using FunctionType = decltype(downloadSongFinished(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xccf20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSongFailed(int id, GJSongError errorType) -> decltype(downloadSongFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::downloadSongFailed), this);
	using FunctionType = decltype(downloadSongFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xccfe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::downloadSFXFinished(int id) -> decltype(downloadSFXFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSFXFinished), this);
	using FunctionType = decltype(downloadSFXFinished(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSFXFailed(int id, GJSongError errorType) -> decltype(downloadSFXFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::downloadSFXFailed), this);
	using FunctionType = decltype(downloadSFXFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&CustomSongWidget::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(CustomSongWidget*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto CustomSongWidget::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&CustomSongWidget::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(CustomSongWidget*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto CustomSongWidget::songStateChanged() -> decltype(songStateChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongWidget::songStateChanged), this);
	using FunctionType = decltype(songStateChanged())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcb4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongWidget::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&CustomSongWidget::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(CustomSongWidget*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto CustomSongWidget::deleteSong() -> decltype(deleteSong()) {
	using FunctionType = decltype(deleteSong())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xca020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::downloadAssetFailed(int id, GJAssetType type, GJSongError errorType) -> decltype(downloadAssetFailed(id, type, errorType)) {
	using FunctionType = decltype(downloadAssetFailed(id, type, errorType))(*)(CustomSongWidget*, int, GJAssetType, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, errorType);
}

auto CustomSongWidget::downloadAssetFinished(int id, GJAssetType type) -> decltype(downloadAssetFinished(id, type)) {
	using FunctionType = decltype(downloadAssetFinished(id, type))(*)(CustomSongWidget*, int, GJAssetType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd4a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto CustomSongWidget::getSongInfoIfUnloaded() -> decltype(getSongInfoIfUnloaded()) {
	using FunctionType = decltype(getSongInfoIfUnloaded())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xca9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk) -> decltype(init(songInfo, songDelegate, showSongSelect, showPlayMusic, showDownload, isRobtopSong, unkBool, isMusicLibrary, unk)) {
	using FunctionType = decltype(init(songInfo, songDelegate, showSongSelect, showPlayMusic, showDownload, isRobtopSong, unkBool, isMusicLibrary, unk))(*)(CustomSongWidget*, SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc8470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songInfo, songDelegate, showSongSelect, showPlayMusic, showDownload, isRobtopSong, unkBool, isMusicLibrary, unk);
}

auto CustomSongWidget::onCancelDownload(cocos2d::CCObject* sender) -> decltype(onCancelDownload(sender)) {
	using FunctionType = decltype(onCancelDownload(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcaaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onDelete(cocos2d::CCObject* sender) -> decltype(onDelete(sender)) {
	using FunctionType = decltype(onDelete(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc9f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcabc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onGetSongInfo(cocos2d::CCObject* sender) -> decltype(onGetSongInfo(sender)) {
	using FunctionType = decltype(onGetSongInfo(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcab30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc9c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onMore(cocos2d::CCObject* sender) -> decltype(onMore(sender)) {
	using FunctionType = decltype(onMore(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xca220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onPlayback(cocos2d::CCObject* sender) -> decltype(onPlayback(sender)) {
	using FunctionType = decltype(onPlayback(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcaec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcae60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::positionInfoObjects() -> decltype(positionInfoObjects()) {
	using FunctionType = decltype(positionInfoObjects())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc9630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::processNextMultiAsset() -> decltype(processNextMultiAsset()) {
	using FunctionType = decltype(processNextMultiAsset())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::showError(bool fast) -> decltype(showError(fast)) {
	using FunctionType = decltype(showError(fast))(*)(CustomSongWidget*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fast);
}

auto CustomSongWidget::startDownload() -> decltype(startDownload()) {
	using FunctionType = decltype(startDownload())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcada0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::startMultiAssetDownload() -> decltype(startMultiAssetDownload()) {
	using FunctionType = decltype(startMultiAssetDownload())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::updateDownloadProgress(float dt) -> decltype(updateDownloadProgress(dt)) {
	using FunctionType = decltype(updateDownloadProgress(dt))(*)(CustomSongWidget*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcb390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto CustomSongWidget::updateError(GJSongError errorType) -> decltype(updateError(errorType)) {
	using FunctionType = decltype(updateError(errorType))(*)(CustomSongWidget*, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcd6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, errorType);
}

auto CustomSongWidget::updateMultiAssetInfo(bool update) -> decltype(updateMultiAssetInfo(update)) {
	using FunctionType = decltype(updateMultiAssetInfo(update))(*)(CustomSongWidget*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcc6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, update);
}

auto CustomSongWidget::updatePlaybackBtn() -> decltype(updatePlaybackBtn()) {
	using FunctionType = decltype(updatePlaybackBtn())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcb2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::updateProgressBar(int progress) -> decltype(updateProgressBar(progress)) {
	using FunctionType = decltype(updateProgressBar(progress))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcb440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, progress);
}

auto CustomSongWidget::updateSongInfo() -> decltype(updateSongInfo()) {
	using FunctionType = decltype(updateSongInfo())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcb4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::updateWithMultiAssets(gd::string songList, gd::string sfxList, int bytes) -> decltype(updateWithMultiAssets(songList, sfxList, bytes)) {
	using FunctionType = decltype(updateWithMultiAssets(songList, sfxList, bytes))(*)(CustomSongWidget*, gd::string, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcc350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songList, sfxList, bytes);
}
