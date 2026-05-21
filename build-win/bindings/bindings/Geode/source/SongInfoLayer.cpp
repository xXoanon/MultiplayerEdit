
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

auto SongInfoLayer::create(int artistID) -> decltype(create(artistID)) {
	using FunctionType = decltype(create(artistID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x492400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(artistID);
}

auto SongInfoLayer::create(gd::string songName, gd::string artistName, gd::string songURL, gd::string newgroundsURL, gd::string youtubeURL, gd::string facebookURL, int songID, gd::string songTags, int nongType) -> decltype(create(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType)) {
	using FunctionType = decltype(create(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType))(*)(gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, int, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x492610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType);
}

auto SongInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongInfoLayer::init(gd::string songName, gd::string artistName, gd::string songURL, gd::string newgroundsURL, gd::string youtubeURL, gd::string facebookURL, int songID, gd::string songTags, int nongType) -> decltype(init(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType)) {
	using FunctionType = decltype(init(songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType))(*)(SongInfoLayer*, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, int, gd::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x492930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songName, artistName, songURL, newgroundsURL, youtubeURL, facebookURL, songID, songTags, nongType);
}

auto SongInfoLayer::onBPM(cocos2d::CCObject* sender) -> decltype(onBPM(sender)) {
	using FunctionType = decltype(onBPM(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onFB(cocos2d::CCObject* sender) -> decltype(onFB(sender)) {
	using FunctionType = decltype(onFB(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4944d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onMenuMusic(cocos2d::CCObject* sender) -> decltype(onMenuMusic(sender)) {
	using FunctionType = decltype(onMenuMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4942b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onNG(cocos2d::CCObject* sender) -> decltype(onNG(sender)) {
	using FunctionType = decltype(onNG(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onPracticeMusic(cocos2d::CCObject* sender) -> decltype(onPracticeMusic(sender)) {
	using FunctionType = decltype(onPracticeMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onYT(cocos2d::CCObject* sender) -> decltype(onYT(sender)) {
	using FunctionType = decltype(onYT(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4944a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::showCustomMusicUnlockInfo() -> decltype(showCustomMusicUnlockInfo()) {
	using FunctionType = decltype(showCustomMusicUnlockInfo())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x493c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
