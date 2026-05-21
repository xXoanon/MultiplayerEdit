
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

auto LevelListLayer::scene(GJLevelList* list) -> decltype(scene(list)) {
	using FunctionType = decltype(scene(list))(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(list);
}

auto LevelListLayer::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelListLayer::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(LevelListLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3050d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelListLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelListLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(LevelListLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelListLayer::loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type) -> decltype(loadLevelsFinished(levels, key, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&LevelListLayer::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(levels, key, type))(*)(LevelListLayer*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3068d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, levels, key, type);
}

auto LevelListLayer::loadLevelsFailed(char const* key, int type) -> decltype(loadLevelsFailed(key, type)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&LevelListLayer::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(key, type))(*)(LevelListLayer*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cc550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, type);
}

auto LevelListLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&LevelListLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto LevelListLayer::shareCommentClosed(gd::string text, ShareCommentLayer* layer) -> decltype(shareCommentClosed(text, layer)) {
	auto self = addresser::thunkAdjust(Resolve<gd::string, ShareCommentLayer*>::func(&LevelListLayer::shareCommentClosed), this);
	using FunctionType = decltype(shareCommentClosed(text, layer))(*)(LevelListLayer*, gd::string, ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, text, layer);
}

auto LevelListLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelListLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelListLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelListLayer::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&LevelListLayer::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(LevelListLayer*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto LevelListLayer::updateResultArray(cocos2d::CCArray* results) -> decltype(updateResultArray(results)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&LevelListLayer::updateResultArray), this);
	using FunctionType = decltype(updateResultArray(results))(*)(LevelListLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, results);
}

auto LevelListLayer::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&LevelListLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(LevelListLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto LevelListLayer::likedItem(LikeItemType type, int id, bool liked) -> decltype(likedItem(type, id, liked)) {
	auto self = addresser::thunkAdjust(Resolve<LikeItemType, int, bool>::func(&LevelListLayer::likedItem), this);
	using FunctionType = decltype(likedItem(type, id, liked))(*)(LevelListLayer*, LikeItemType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type, id, liked);
}

auto LevelListLayer::iconSelectClosed(SelectListIconLayer* layer) -> decltype(iconSelectClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectListIconLayer*>::func(&LevelListLayer::iconSelectClosed), this);
	using FunctionType = decltype(iconSelectClosed(layer))(*)(LevelListLayer*, SelectListIconLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LevelListLayer::levelListDeleteFinished(int id) -> decltype(levelListDeleteFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelListLayer::levelListDeleteFinished), this);
	using FunctionType = decltype(levelListDeleteFinished(id))(*)(LevelListLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto LevelListLayer::levelListDeleteFailed(int id) -> decltype(levelListDeleteFailed(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelListLayer::levelListDeleteFailed), this);
	using FunctionType = decltype(levelListDeleteFailed(id))(*)(LevelListLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto LevelListLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelListLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(LevelListLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelListLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelListLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(LevelListLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelListLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelListLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(LevelListLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelListLayer::cloneList() -> decltype(cloneList()) {
	using FunctionType = decltype(cloneList())(*)(LevelListLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3081e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelListLayer::confirmClone(cocos2d::CCObject* sender) -> decltype(confirmClone(sender)) {
	using FunctionType = decltype(confirmClone(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3080f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::confirmDelete(cocos2d::CCObject* sender) -> decltype(confirmDelete(sender)) {
	using FunctionType = decltype(confirmDelete(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::confirmOwnerDelete(cocos2d::CCObject* sender) -> decltype(confirmOwnerDelete(sender)) {
	using FunctionType = decltype(confirmOwnerDelete(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3085a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::init(GJLevelList* list) -> decltype(init(list)) {
	using FunctionType = decltype(init(list))(*)(LevelListLayer*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto LevelListLayer::onClaimReward(cocos2d::CCObject* sender) -> decltype(onClaimReward(sender)) {
	using FunctionType = decltype(onClaimReward(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3060a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onDescription(cocos2d::CCObject* sender) -> decltype(onDescription(sender)) {
	using FunctionType = decltype(onDescription(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onFavorite(cocos2d::CCObject* sender) -> decltype(onFavorite(sender)) {
	using FunctionType = decltype(onFavorite(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onLike(cocos2d::CCObject* sender) -> decltype(onLike(sender)) {
	using FunctionType = decltype(onLike(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onListInfo(cocos2d::CCObject* sender) -> decltype(onListInfo(sender)) {
	using FunctionType = decltype(onListInfo(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3050c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onRefreshLevelList(cocos2d::CCObject* sender) -> decltype(onRefreshLevelList(sender)) {
	using FunctionType = decltype(onRefreshLevelList(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onSelectIcon(cocos2d::CCObject* sender) -> decltype(onSelectIcon(sender)) {
	using FunctionType = decltype(onSelectIcon(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onShare(cocos2d::CCObject* sender) -> decltype(onShare(sender)) {
	using FunctionType = decltype(onShare(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onToggleEditMode(cocos2d::CCObject* sender) -> decltype(onToggleEditMode(sender)) {
	using FunctionType = decltype(onToggleEditMode(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3080b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(LevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3076f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListLayer::updateSideButtons() -> decltype(updateSideButtons()) {
	using FunctionType = decltype(updateSideButtons())(*)(LevelListLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelListLayer::updateStatsArt() -> decltype(updateStatsArt()) {
	using FunctionType = decltype(updateStatsArt())(*)(LevelListLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
