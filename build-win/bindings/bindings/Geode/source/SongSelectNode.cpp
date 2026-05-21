
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

auto SongSelectNode::create(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel) -> decltype(create(id, customSong, settings, selectType, position, parent, menu, noLabel)) {
	using FunctionType = decltype(create(id, customSong, settings, selectType, position, parent, menu, noLabel))(*)(int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, customSong, settings, selectType, position, parent, menu, noLabel);
}

auto SongSelectNode::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&SongSelectNode::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(SongSelectNode*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto SongSelectNode::customSongLayerClosed() -> decltype(customSongLayerClosed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongSelectNode::customSongLayerClosed), this);
	using FunctionType = decltype(customSongLayerClosed())(*)(SongSelectNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongSelectNode::songIDChanged(int id) -> decltype(songIDChanged(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&SongSelectNode::songIDChanged), this);
	using FunctionType = decltype(songIDChanged(id))(*)(SongSelectNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto SongSelectNode::getActiveSongID() -> decltype(getActiveSongID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongSelectNode::getActiveSongID), this);
	using FunctionType = decltype(getActiveSongID())(*)(SongSelectNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongSelectNode::getSongFileName() -> decltype(getSongFileName()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongSelectNode::getSongFileName), this);
	using FunctionType = decltype(getSongFileName())(*)(SongSelectNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongSelectNode::getLevelSettings() -> decltype(getLevelSettings()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongSelectNode::getLevelSettings), this);
	using FunctionType = decltype(getLevelSettings())(*)(SongSelectNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongSelectNode::audioNext(cocos2d::CCObject* sender) -> decltype(audioNext(sender)) {
	using FunctionType = decltype(audioNext(sender))(*)(SongSelectNode*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc77d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongSelectNode::audioPrevious(cocos2d::CCObject* sender) -> decltype(audioPrevious(sender)) {
	using FunctionType = decltype(audioPrevious(sender))(*)(SongSelectNode*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongSelectNode::init(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel) -> decltype(init(id, customSong, settings, selectType, position, parent, menu, noLabel)) {
	using FunctionType = decltype(init(id, customSong, settings, selectType, position, parent, menu, noLabel))(*)(SongSelectNode*, int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, customSong, settings, selectType, position, parent, menu, noLabel);
}

auto SongSelectNode::onOpenCustomSong(cocos2d::CCObject* sender) -> decltype(onOpenCustomSong(sender)) {
	using FunctionType = decltype(onOpenCustomSong(sender))(*)(SongSelectNode*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongSelectNode::onSongMode(cocos2d::CCObject* sender) -> decltype(onSongMode(sender)) {
	using FunctionType = decltype(onSongMode(sender))(*)(SongSelectNode*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongSelectNode::onSongMode(int songMode) -> decltype(onSongMode(songMode)) {
	using FunctionType = decltype(onSongMode(songMode))(*)(SongSelectNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songMode);
}

auto SongSelectNode::showCustomSongSelect() -> decltype(showCustomSongSelect()) {
	using FunctionType = decltype(showCustomSongSelect())(*)(SongSelectNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongSelectNode::updateAudioLabel() -> decltype(updateAudioLabel()) {
	using FunctionType = decltype(updateAudioLabel())(*)(SongSelectNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc76e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongSelectNode::updateWidgetVisibility() -> decltype(updateWidgetVisibility()) {
	using FunctionType = decltype(updateWidgetVisibility())(*)(SongSelectNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
