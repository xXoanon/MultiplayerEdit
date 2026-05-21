
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

auto GJObjectDecoder::sharedDecoder() -> decltype(sharedDecoder()) {
	using FunctionType = decltype(sharedDecoder())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x283fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJObjectDecoder::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJObjectDecoder::init), this);
	using FunctionType = decltype(init())(*)(GJObjectDecoder*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJObjectDecoder::getDecodedObject(int type, DS_Dictionary* dict) -> decltype(getDecodedObject(type, dict)) {
	auto self = addresser::thunkAdjust(Resolve<int, DS_Dictionary*>::func(&GJObjectDecoder::getDecodedObject), this);
	using FunctionType = decltype(getDecodedObject(type, dict))(*)(GJObjectDecoder*, int, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x284060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type, dict);
}
