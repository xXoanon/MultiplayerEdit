
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

LevelBrowserLayer::LevelBrowserLayer() : LevelBrowserLayer(geode::CutoffConstructor, sizeof(LevelBrowserLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	LevelBrowserLayer::~LevelBrowserLayer();

	using FunctionType = void(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c87d0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

LevelBrowserLayer::~LevelBrowserLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelBrowserLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2c89c0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelBrowserLayer(geode::CutoffConstructor, sizeof(LevelBrowserLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelBrowserLayer::create(GJSearchObject* object) -> decltype(create(object)) {
	using FunctionType = decltype(create(object))(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c8bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelBrowserLayer::scene(GJSearchObject* object) -> decltype(scene(object)) {
	using FunctionType = decltype(scene(object))(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c8ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelBrowserLayer::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cfc90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::onEnterTransitionDidFinish() -> decltype(onEnterTransitionDidFinish()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::onEnterTransitionDidFinish), this);
	using FunctionType = decltype(onEnterTransitionDidFinish())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2490b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cfdd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ccf10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&LevelBrowserLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(LevelBrowserLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ccf30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto LevelBrowserLayer::loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type) -> decltype(loadLevelsFinished(levels, key, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&LevelBrowserLayer::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(levels, key, type))(*)(LevelBrowserLayer*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cc420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, levels, key, type);
}

auto LevelBrowserLayer::loadLevelsFailed(char const* key, int type) -> decltype(loadLevelsFailed(key, type)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&LevelBrowserLayer::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(key, type))(*)(LevelBrowserLayer*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cc550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, type);
}

auto LevelBrowserLayer::setupPageInfo(gd::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string, char const*>::func(&LevelBrowserLayer::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(LevelBrowserLayer*, gd::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cc5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto LevelBrowserLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&LevelBrowserLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cce80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto LevelBrowserLayer::shareCommentClosed(gd::string text, ShareCommentLayer* layer) -> decltype(shareCommentClosed(text, layer)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string, ShareCommentLayer*>::func(&LevelBrowserLayer::shareCommentClosed), this);
	using FunctionType = decltype(shareCommentClosed(text, layer))(*)(LevelBrowserLayer*, gd::string, ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ce130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, text, layer);
}

auto LevelBrowserLayer::setTextPopupClosed(SetTextPopup* popup, gd::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, gd::string>::func(&LevelBrowserLayer::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(LevelBrowserLayer*, SetTextPopup*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ceea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto LevelBrowserLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelBrowserLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelBrowserLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cf6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelBrowserLayer::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&LevelBrowserLayer::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(LevelBrowserLayer*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cca50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto LevelBrowserLayer::updateResultArray(cocos2d::CCArray* results) -> decltype(updateResultArray(results)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&LevelBrowserLayer::updateResultArray), this);
	using FunctionType = decltype(updateResultArray(results))(*)(LevelBrowserLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c8970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, results);
}

auto LevelBrowserLayer::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&LevelBrowserLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(LevelBrowserLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cfd30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto LevelBrowserLayer::getItemsMatchingSearch(cocos2d::CCArray* items, gd::string query, GJSearchObject* object) -> decltype(getItemsMatchingSearch(items, query, object)) {
	using FunctionType = decltype(getItemsMatchingSearch(items, query, object))(*)(LevelBrowserLayer*, cocos2d::CCArray*, gd::string, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cef60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, items, query, object);
}

auto LevelBrowserLayer::getSearchTitle() -> decltype(getSearchTitle()) {
	using FunctionType = decltype(getSearchTitle())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cbbc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::init(GJSearchObject* object) -> decltype(init(object)) {
	using FunctionType = decltype(init(object))(*)(LevelBrowserLayer*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c8c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelBrowserLayer::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(LevelBrowserLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ca550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto LevelBrowserLayer::loadPage(GJSearchObject* object) -> decltype(loadPage(object)) {
	using FunctionType = decltype(loadPage(object))(*)(LevelBrowserLayer*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ca720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelBrowserLayer::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ceb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onDeleteAll(cocos2d::CCObject* sender) -> decltype(onDeleteAll(sender)) {
	using FunctionType = decltype(onDeleteAll(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ce5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onDeleteSelected(cocos2d::CCObject* sender) -> decltype(onDeleteSelected(sender)) {
	using FunctionType = decltype(onDeleteSelected(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cf2f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onFavorites(cocos2d::CCObject* sender) -> decltype(onFavorites(sender)) {
	using FunctionType = decltype(onFavorites(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ce410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToFolder(cocos2d::CCObject* sender) -> decltype(onGoToFolder(sender)) {
	using FunctionType = decltype(onGoToFolder(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cc9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToLastPage(cocos2d::CCObject* sender) -> decltype(onGoToLastPage(sender)) {
	using FunctionType = decltype(onGoToLastPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cc820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToPage(cocos2d::CCObject* sender) -> decltype(onGoToPage(sender)) {
	using FunctionType = decltype(onGoToPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cc890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ccfd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onLocalMode(cocos2d::CCObject* sender) -> decltype(onLocalMode(sender)) {
	using FunctionType = decltype(onLocalMode(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ce050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onMyOnlineLevels(cocos2d::CCObject* sender) -> decltype(onMyOnlineLevels(sender)) {
	using FunctionType = decltype(onMyOnlineLevels(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ce240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onNew(cocos2d::CCObject* sender) -> decltype(onNew(sender)) {
	using FunctionType = decltype(onNew(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cdba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ccd80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cce00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onRefresh(cocos2d::CCObject* sender) -> decltype(onRefresh(sender)) {
	using FunctionType = decltype(onRefresh(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cea40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onRemoveAllFavorites(cocos2d::CCObject* sender) -> decltype(onRemoveAllFavorites(sender)) {
	using FunctionType = decltype(onRemoveAllFavorites(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ce770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onSaved(cocos2d::CCObject* sender) -> decltype(onSaved(sender)) {
	using FunctionType = decltype(onSaved(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ce4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onSavedMode(cocos2d::CCObject* sender) -> decltype(onSavedMode(sender)) {
	using FunctionType = decltype(onSavedMode(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cdf70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cec20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onToggleAllObjects(cocos2d::CCObject* sender) -> decltype(onToggleAllObjects(sender)) {
	using FunctionType = decltype(onToggleAllObjects(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cf630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::setupLevelBrowser(cocos2d::CCArray* items) -> decltype(setupLevelBrowser(items)) {
	using FunctionType = decltype(setupLevelBrowser(items))(*)(LevelBrowserLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cb8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, items);
}

auto LevelBrowserLayer::show() -> decltype(show()) {
	using FunctionType = decltype(show())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cfe40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ccc50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
