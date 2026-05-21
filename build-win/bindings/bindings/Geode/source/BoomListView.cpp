
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

BoomListView::~BoomListView() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(BoomListView*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3bf80, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) BoomListView(geode::CutoffConstructor, sizeof(BoomListView));
		geode::DestructorLock::addLock(this);
	}
}

auto BoomListView::setupList(float yOffset) -> decltype(setupList(yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&BoomListView::setupList), this);
	using FunctionType = decltype(setupList(yOffset))(*)(BoomListView*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, yOffset);
}

auto BoomListView::cellHeightForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView) -> decltype(cellHeightForRowAtIndexPath(indexPath, tableView)) {
	auto self = addresser::thunkAdjust(Resolve<CCIndexPath&, TableView*>::func(&BoomListView::cellHeightForRowAtIndexPath), this);
	using FunctionType = decltype(cellHeightForRowAtIndexPath(indexPath, tableView))(*)(BoomListView*, CCIndexPath&, TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, indexPath, tableView);
}

auto BoomListView::numberOfRowsInSection(unsigned int section, TableView* tableView) -> decltype(numberOfRowsInSection(section, tableView)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned int, TableView*>::func(&BoomListView::numberOfRowsInSection), this);
	using FunctionType = decltype(numberOfRowsInSection(section, tableView))(*)(BoomListView*, unsigned int, TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, section, tableView);
}

auto BoomListView::cellForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView) -> decltype(cellForRowAtIndexPath(indexPath, tableView)) {
	auto self = addresser::thunkAdjust(Resolve<CCIndexPath&, TableView*>::func(&BoomListView::cellForRowAtIndexPath), this);
	using FunctionType = decltype(cellForRowAtIndexPath(indexPath, tableView))(*)(BoomListView*, CCIndexPath&, TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, indexPath, tableView);
}

auto BoomListView::getListCell(char const* identifier) -> decltype(getListCell(identifier)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&BoomListView::getListCell), this);
	using FunctionType = decltype(getListCell(identifier))(*)(BoomListView*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, identifier);
}

auto BoomListView::loadCell(TableViewCell* cell, int index) -> decltype(loadCell(cell, index)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int>::func(&BoomListView::loadCell), this);
	using FunctionType = decltype(loadCell(cell, index))(*)(BoomListView*, TableViewCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, index);
}

auto BoomListView::init(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y) -> decltype(init(entries, delegate, height, width, page, type, y)) {
	using FunctionType = decltype(init(entries, delegate, height, width, page, type, y))(*)(BoomListView*, cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, entries, delegate, height, width, page, type, y);
}
