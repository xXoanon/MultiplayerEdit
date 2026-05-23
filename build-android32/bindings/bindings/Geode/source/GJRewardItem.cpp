
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/cocos/platform/android/CCFileUtilsAndroid.h>

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

auto GJRewardItem::create(int chestID, int timeRemaining, gd::string rewardStr) -> decltype(create(chestID, timeRemaining, rewardStr)) {
	using FunctionType = decltype(create(chestID, timeRemaining, rewardStr))(*)(int, int, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12GJRewardItem6createEiiSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chestID, timeRemaining, rewardStr);
}

auto GJRewardItem::init(int chestID, int timeRemaining, gd::string rewardStr) -> decltype(init(chestID, timeRemaining, rewardStr)) {
	using FunctionType = decltype(init(chestID, timeRemaining, rewardStr))(*)(GJRewardItem*, int, int, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12GJRewardItem4initEiiSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chestID, timeRemaining, rewardStr);
}
