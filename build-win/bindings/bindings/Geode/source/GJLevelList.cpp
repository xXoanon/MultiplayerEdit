
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

auto GJLevelList::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJLevelList::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x175e80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJLevelList::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJLevelList::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJLevelList*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x178000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJLevelList::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJLevelList::init), this);
	using FunctionType = decltype(init())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJLevelList::addLevelToList(GJGameLevel* level) -> decltype(addLevelToList(level)) {
	using FunctionType = decltype(addLevelToList(level))(*)(GJLevelList*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJLevelList::completedLevels() -> decltype(completedLevels()) {
	using FunctionType = decltype(completedLevels())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x177870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJLevelList*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x177ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJLevelList::getListLevelsArray(cocos2d::CCArray* levels) -> decltype(getListLevelsArray(levels)) {
	using FunctionType = decltype(getListLevelsArray(levels))(*)(GJLevelList*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x177170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GJLevelList::getUnpackedDescription() -> decltype(getUnpackedDescription()) {
	using FunctionType = decltype(getUnpackedDescription())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::hasMatchingLevels(GJLevelList* list) -> decltype(hasMatchingLevels(list)) {
	using FunctionType = decltype(hasMatchingLevels(list))(*)(GJLevelList*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GJLevelList::parseListLevels(gd::string str) -> decltype(parseListLevels(str)) {
	using FunctionType = decltype(parseListLevels(str))(*)(GJLevelList*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GJLevelList::reorderLevel(int levelID, int newPosition) -> decltype(reorderLevel(levelID, newPosition)) {
	using FunctionType = decltype(reorderLevel(levelID, newPosition))(*)(GJLevelList*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x177080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, newPosition);
}

auto GJLevelList::showListInfo() -> decltype(showListInfo()) {
	using FunctionType = decltype(showListInfo())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x177910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::updateLevelsString() -> decltype(updateLevelsString()) {
	using FunctionType = decltype(updateLevelsString())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x177760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
