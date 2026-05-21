
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

auto LocalLevelManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32ff30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto LocalLevelManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LocalLevelManager::init), this);
	using FunctionType = decltype(init())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32ffd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LocalLevelManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&LocalLevelManager::encodeDataTo), this);
	using FunctionType = decltype(encodeDataTo(dict))(*)(LocalLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3309a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto LocalLevelManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&LocalLevelManager::dataLoaded), this);
	using FunctionType = decltype(dataLoaded(dict))(*)(LocalLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto LocalLevelManager::firstLoad() -> decltype(firstLoad()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LocalLevelManager::firstLoad), this);
	using FunctionType = decltype(firstLoad())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LocalLevelManager::getAllLevelsInDict() -> decltype(getAllLevelsInDict()) {
	using FunctionType = decltype(getAllLevelsInDict())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3303a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::getMainLevelString(int id) -> decltype(getMainLevelString(id)) {
	using FunctionType = decltype(getMainLevelString(id))(*)(LocalLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto LocalLevelManager::tryLoadMainLevelString(int id) -> decltype(tryLoadMainLevelString(id)) {
	using FunctionType = decltype(tryLoadMainLevelString(id))(*)(LocalLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto LocalLevelManager::updateLevelOrder() -> decltype(updateLevelOrder()) {
	using FunctionType = decltype(updateLevelOrder())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::updateLevelRevision() -> decltype(updateLevelRevision()) {
	using FunctionType = decltype(updateLevelRevision())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
