
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

auto CustomListView::create(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y) -> decltype(create(entries, delegate, height, width, page, type, y)) {
	using FunctionType = decltype(create(entries, delegate, height, width, page, type, y))(*)(cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaa720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(entries, delegate, height, width, page, type, y);
}

auto CustomListView::getCellHeight(BoomListType type) -> decltype(getCellHeight(type)) {
	using FunctionType = decltype(getCellHeight(type))(*)(BoomListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto CustomListView::setupList(float yOffset) -> decltype(setupList(yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CustomListView::setupList), this);
	using FunctionType = decltype(setupList(yOffset))(*)(CustomListView*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xabcd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, yOffset);
}

auto CustomListView::getListCell(char const* identifier) -> decltype(getListCell(identifier)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&CustomListView::getListCell), this);
	using FunctionType = decltype(getListCell(identifier))(*)(CustomListView*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaa850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, identifier);
}

auto CustomListView::loadCell(TableViewCell* cell, int index) -> decltype(loadCell(cell, index)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int>::func(&CustomListView::loadCell), this);
	using FunctionType = decltype(loadCell(cell, index))(*)(CustomListView*, TableViewCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, index);
}

auto CustomListView::reloadAll() -> decltype(reloadAll()) {
	using FunctionType = decltype(reloadAll())(*)(CustomListView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xac3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
