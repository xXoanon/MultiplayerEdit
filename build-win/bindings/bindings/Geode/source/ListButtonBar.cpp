
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

auto ListButtonBar::create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType) -> decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType)) {
	using FunctionType = decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType))(*)(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6ada0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType);
}

auto ListButtonBar::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(ListButtonBar*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ListButtonBar::init(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType) -> decltype(init(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType)) {
	using FunctionType = decltype(init(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType))(*)(ListButtonBar*, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6aeb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType);
}

auto ListButtonBar::onLeft(cocos2d::CCObject* sender) -> decltype(onLeft(sender)) {
	using FunctionType = decltype(onLeft(sender))(*)(ListButtonBar*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ListButtonBar::onRight(cocos2d::CCObject* sender) -> decltype(onRight(sender)) {
	using FunctionType = decltype(onRight(sender))(*)(ListButtonBar*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
