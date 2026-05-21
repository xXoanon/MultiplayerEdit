
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

auto GJRewardItem::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJRewardItem::create(int chestID, int timeRemaining, gd::string rewardStr) -> decltype(create(chestID, timeRemaining, rewardStr)) {
	using FunctionType = decltype(create(chestID, timeRemaining, rewardStr))(*)(int, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f4190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chestID, timeRemaining, rewardStr);
}

auto GJRewardItem::createSpecial(GJRewardType rewardType, int orbs, int diamonds, SpecialRewardItem specialType1, int specialCount1, SpecialRewardItem specialType2, int specialCount2, int unlockType, int itemID) -> decltype(createSpecial(rewardType, orbs, diamonds, specialType1, specialCount1, specialType2, specialCount2, unlockType, itemID)) {
	using FunctionType = decltype(createSpecial(rewardType, orbs, diamonds, specialType1, specialCount1, specialType2, specialCount2, unlockType, itemID))(*)(GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(rewardType, orbs, diamonds, specialType1, specialCount1, specialType2, specialCount2, unlockType, itemID);
}

auto GJRewardItem::createWithObject(GJRewardType type, GJRewardObject* object) -> decltype(createWithObject(type, object)) {
	using FunctionType = decltype(createWithObject(type, object))(*)(GJRewardType, GJRewardObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, object);
}

auto GJRewardItem::createWithObjects(GJRewardType type, cocos2d::CCArray* objects) -> decltype(createWithObjects(type, objects)) {
	using FunctionType = decltype(createWithObjects(type, objects))(*)(GJRewardType, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, objects);
}

auto GJRewardItem::rewardItemToStat(SpecialRewardItem rewardItem) -> decltype(rewardItemToStat(rewardItem)) {
	using FunctionType = decltype(rewardItemToStat(rewardItem))(*)(SpecialRewardItem);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f44c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(rewardItem);
}

auto GJRewardItem::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJRewardItem::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJRewardItem*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f4720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJRewardItem::init(int chestID, int timeRemaining, gd::string rewardStr) -> decltype(init(chestID, timeRemaining, rewardStr)) {
	using FunctionType = decltype(init(chestID, timeRemaining, rewardStr))(*)(GJRewardItem*, int, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f4260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chestID, timeRemaining, rewardStr);
}
