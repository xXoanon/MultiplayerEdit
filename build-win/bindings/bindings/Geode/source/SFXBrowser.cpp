
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

auto SFXBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&SFXBrowser::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(SFXBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto SFXBrowser::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&SFXBrowser::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(SFXBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto SFXBrowser::sortSelectClosed(SelectSFXSortLayer* layer) -> decltype(sortSelectClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectSFXSortLayer*>::func(&SFXBrowser::sortSelectClosed), this);
	using FunctionType = decltype(sortSelectClosed(layer))(*)(SFXBrowser*, SelectSFXSortLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SFXBrowser::setTextPopupClosed(SetTextPopup* popup, gd::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, gd::string>::func(&SFXBrowser::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(SFXBrowser*, SetTextPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4806e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto SFXBrowser::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&SFXBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(SFXBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto SFXBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::shouldSnapToSelected() -> decltype(shouldSnapToSelected()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::shouldSnapToSelected), this);
	using FunctionType = decltype(shouldSnapToSelected())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::init(int id) -> decltype(init(id)) {
	using FunctionType = decltype(init(id))(*)(SFXBrowser*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto SFXBrowser::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onCredits(cocos2d::CCObject* sender) -> decltype(onCredits(sender)) {
	using FunctionType = decltype(onCredits(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onExitFolder(cocos2d::CCObject* sender) -> decltype(onExitFolder(sender)) {
	using FunctionType = decltype(onExitFolder(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4808a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onSorting(cocos2d::CCObject* sender) -> decltype(onSorting(sender)) {
	using FunctionType = decltype(onSorting(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4802c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onToggleCompactMode(cocos2d::CCObject* sender) -> decltype(onToggleCompactMode(sender)) {
	using FunctionType = decltype(onToggleCompactMode(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onUpdateLibrary(cocos2d::CCObject* sender) -> decltype(onUpdateLibrary(sender)) {
	using FunctionType = decltype(onUpdateLibrary(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::setupList(SFXSearchResult* result) -> decltype(setupList(result)) {
	using FunctionType = decltype(setupList(result))(*)(SFXBrowser*, SFXSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47fa20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, result);
}

auto SFXBrowser::setupSFXBrowser() -> decltype(setupSFXBrowser()) {
	using FunctionType = decltype(setupSFXBrowser())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXBrowser::trySetupSFXBrowser() -> decltype(trySetupSFXBrowser()) {
	using FunctionType = decltype(trySetupSFXBrowser())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXBrowser::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
