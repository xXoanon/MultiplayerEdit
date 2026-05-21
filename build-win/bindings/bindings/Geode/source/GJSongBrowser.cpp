
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

auto GJSongBrowser::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJSongBrowser::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJSongBrowser::init), this);
	using FunctionType = decltype(init())(*)(GJSongBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b72f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJSongBrowser::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJSongBrowser::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(GJSongBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b73f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJSongBrowser::exitLayer(cocos2d::CCObject* sender) -> decltype(exitLayer(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJSongBrowser::exitLayer), this);
	using FunctionType = decltype(exitLayer(sender))(*)(GJSongBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJSongBrowser::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJSongBrowser::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJSongBrowser*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJSongBrowser::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&GJSongBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(GJSongBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto GJSongBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJSongBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(GJSongBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJSongBrowser::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(GJSongBrowser*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJSongBrowser::onDeleteAll(cocos2d::CCObject* sender) -> decltype(onDeleteAll(sender)) {
	using FunctionType = decltype(onDeleteAll(sender))(*)(GJSongBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJSongBrowser::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(GJSongBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJSongBrowser::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(GJSongBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b7a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
