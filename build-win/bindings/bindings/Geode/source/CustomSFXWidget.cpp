
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

auto CustomSFXWidget::create(SFXInfoObject* object, CustomSFXDelegate* delegate, bool showDelete, bool showPlay, bool showDownload, bool noBackground, bool compactMode) -> decltype(create(object, delegate, showDelete, showPlay, showDownload, noBackground, compactMode)) {
	using FunctionType = decltype(create(object, delegate, showDelete, showPlay, showDownload, noBackground, compactMode))(*)(SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc0640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, delegate, showDelete, showPlay, showDownload, noBackground, compactMode);
}

auto CustomSFXWidget::downloadSFXFinished(int id) -> decltype(downloadSFXFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSFXWidget::downloadSFXFinished), this);
	using FunctionType = decltype(downloadSFXFinished(id))(*)(CustomSFXWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc2600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSFXWidget::downloadSFXFailed(int id, GJSongError errorType) -> decltype(downloadSFXFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSFXWidget::downloadSFXFailed), this);
	using FunctionType = decltype(downloadSFXFailed(id, errorType))(*)(CustomSFXWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc2680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSFXWidget::songStateChanged() -> decltype(songStateChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXWidget::songStateChanged), this);
	using FunctionType = decltype(songStateChanged())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXWidget::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&CustomSFXWidget::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(CustomSFXWidget*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc2780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto CustomSFXWidget::hideLoadingArt() -> decltype(hideLoadingArt()) {
	using FunctionType = decltype(hideLoadingArt())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::init(SFXInfoObject* object, CustomSFXDelegate* delegate, bool showDelete, bool showPlay, bool showDownload, bool noBackground, bool compactMode) -> decltype(init(object, delegate, showDelete, showPlay, showDownload, noBackground, compactMode)) {
	using FunctionType = decltype(init(object, delegate, showDelete, showPlay, showDownload, noBackground, compactMode))(*)(CustomSFXWidget*, SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc0780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, delegate, showDelete, showPlay, showDownload, noBackground, compactMode);
}

auto CustomSFXWidget::onCancelDownload(cocos2d::CCObject* sender) -> decltype(onCancelDownload(sender)) {
	using FunctionType = decltype(onCancelDownload(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc19a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onDelete(cocos2d::CCObject* sender) -> decltype(onDelete(sender)) {
	using FunctionType = decltype(onDelete(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onPlayback(cocos2d::CCObject* sender) -> decltype(onPlayback(sender)) {
	using FunctionType = decltype(onPlayback(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::showLoadingArt() -> decltype(showLoadingArt()) {
	using FunctionType = decltype(showLoadingArt())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc17b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::startMonitorDownload() -> decltype(startMonitorDownload()) {
	using FunctionType = decltype(startMonitorDownload())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::updateDownloadProgress(float dt) -> decltype(updateDownloadProgress(dt)) {
	using FunctionType = decltype(updateDownloadProgress(dt))(*)(CustomSFXWidget*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto CustomSFXWidget::updateProgressBar(int progress) -> decltype(updateProgressBar(progress)) {
	using FunctionType = decltype(updateProgressBar(progress))(*)(CustomSFXWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, progress);
}

auto CustomSFXWidget::updateSFXInfo() -> decltype(updateSFXInfo()) {
	using FunctionType = decltype(updateSFXInfo())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
