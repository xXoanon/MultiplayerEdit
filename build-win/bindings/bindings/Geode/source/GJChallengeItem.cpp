
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

auto GJChallengeItem::create(GJChallengeType challengeType, int goal, int reward, int timeLeft, gd::string questName) -> decltype(create(challengeType, goal, reward, timeLeft, questName)) {
	using FunctionType = decltype(create(challengeType, goal, reward, timeLeft, questName))(*)(GJChallengeType, int, int, int, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f49f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(challengeType, goal, reward, timeLeft, questName);
}

auto GJChallengeItem::createFromString(gd::string string) -> decltype(createFromString(string)) {
	using FunctionType = decltype(createFromString(string))(*)(gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f4790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(string);
}

auto GJChallengeItem::encodeWithCoder(DS_Dictionary* dsdict) -> decltype(encodeWithCoder(dsdict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJChallengeItem::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dsdict))(*)(GJChallengeItem*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f4b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dsdict);
}
