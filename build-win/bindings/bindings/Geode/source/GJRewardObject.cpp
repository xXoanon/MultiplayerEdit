
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

auto GJRewardObject::create(SpecialRewardItem type, int total, int itemID) -> decltype(create(type, total, itemID)) {
	using FunctionType = decltype(create(type, total, itemID))(*)(SpecialRewardItem, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3d50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, total, itemID);
}

auto GJRewardObject::createItemUnlock(UnlockType type, int id) -> decltype(createItemUnlock(type, id)) {
	using FunctionType = decltype(createItemUnlock(type, id))(*)(UnlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3ce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, id);
}

auto GJRewardObject::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJRewardObject::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJRewardObject*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f3dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}
