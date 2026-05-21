
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

auto GJLocalLevelScoreCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJLocalLevelScoreCell::init), this);
	using FunctionType = decltype(init())(*)(GJLocalLevelScoreCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJLocalLevelScoreCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJLocalLevelScoreCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJLocalLevelScoreCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xade20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJLocalLevelScoreCell::loadFromScore(GJLocalScore* score) -> decltype(loadFromScore(score)) {
	using FunctionType = decltype(loadFromScore(score))(*)(GJLocalLevelScoreCell*, GJLocalScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, score);
}
