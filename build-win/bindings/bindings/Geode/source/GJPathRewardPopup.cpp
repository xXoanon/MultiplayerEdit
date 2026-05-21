
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

auto GJPathRewardPopup::closePopup() -> decltype(closePopup()) {
	using FunctionType = decltype(closePopup())(*)(GJPathRewardPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2853f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPathRewardPopup::init(int path) -> decltype(init(path)) {
	using FunctionType = decltype(init(path))(*)(GJPathRewardPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x289f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto GJPathRewardPopup::onClaim(cocos2d::CCObject* sender) -> decltype(onClaim(sender)) {
	using FunctionType = decltype(onClaim(sender))(*)(GJPathRewardPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28a400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
