
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

auto MusicBrowser::create(int songID, GJSongType songType) -> decltype(create(songID, songType)) {
	using FunctionType = decltype(create(songID, songType))(*)(int, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID, songType);
}

auto MusicBrowser::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&MusicBrowser::update), this);
	using FunctionType = decltype(update(dt))(*)(MusicBrowser*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto MusicBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ab60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MusicBrowser::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(MusicBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto MusicBrowser::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MusicBrowser::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(MusicBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto MusicBrowser::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&MusicBrowser::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(MusicBrowser*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto MusicBrowser::setTextPopupClosed(SetTextPopup* popup, gd::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, gd::string>::func(&MusicBrowser::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(MusicBrowser*, SetTextPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a8d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto MusicBrowser::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&MusicBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(MusicBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto MusicBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MusicBrowser::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MusicBrowser*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33aa70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MusicBrowser::init(int songID, GJSongType songType) -> decltype(init(songID, songType)) {
	using FunctionType = decltype(init(songID, songType))(*)(MusicBrowser*, int, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3388b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songID, songType);
}

auto MusicBrowser::onArtistFilters(cocos2d::CCObject* sender) -> decltype(onArtistFilters(sender)) {
	using FunctionType = decltype(onArtistFilters(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33aad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onPlaybackControl(cocos2d::CCObject* sender) -> decltype(onPlaybackControl(sender)) {
	using FunctionType = decltype(onPlaybackControl(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onTagFilters(cocos2d::CCObject* sender) -> decltype(onTagFilters(sender)) {
	using FunctionType = decltype(onTagFilters(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onUpdateLibrary(cocos2d::CCObject* sender) -> decltype(onUpdateLibrary(sender)) {
	using FunctionType = decltype(onUpdateLibrary(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::setupList(MusicSearchResult* result) -> decltype(setupList(result)) {
	using FunctionType = decltype(setupList(result))(*)(MusicBrowser*, MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, result);
}

auto MusicBrowser::setupSongControls() -> decltype(setupSongControls()) {
	using FunctionType = decltype(setupSongControls())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicBrowser::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::trySetupMusicBrowser() -> decltype(trySetupMusicBrowser()) {
	using FunctionType = decltype(trySetupMusicBrowser())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
