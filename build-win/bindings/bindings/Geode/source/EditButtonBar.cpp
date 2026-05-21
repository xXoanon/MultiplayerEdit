
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

auto EditButtonBar::create(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows) -> decltype(create(objects, position, tab, hasCreateItems, columns, rows)) {
	using FunctionType = decltype(create(objects, position, tab, hasCreateItems, columns, rows))(*)(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objects, position, tab, hasCreateItems, columns, rows);
}

auto EditButtonBar::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(EditButtonBar*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto EditButtonBar::loadFromItems(cocos2d::CCArray* objects, int rows, int columns, bool keepPage) -> decltype(loadFromItems(objects, rows, columns, keepPage)) {
	using FunctionType = decltype(loadFromItems(objects, rows, columns, keepPage))(*)(EditButtonBar*, cocos2d::CCArray*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd45d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, rows, columns, keepPage);
}

auto EditButtonBar::onLeft(cocos2d::CCObject* sender) -> decltype(onLeft(sender)) {
	using FunctionType = decltype(onLeft(sender))(*)(EditButtonBar*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditButtonBar::onRight(cocos2d::CCObject* sender) -> decltype(onRight(sender)) {
	using FunctionType = decltype(onRight(sender))(*)(EditButtonBar*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd4f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
