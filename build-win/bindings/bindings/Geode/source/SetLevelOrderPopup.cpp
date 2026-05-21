
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

auto SetLevelOrderPopup::init(int levelID, int order, int amount) -> decltype(init(levelID, order, amount)) {
	using FunctionType = decltype(init(levelID, order, amount))(*)(SetLevelOrderPopup*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, order, amount);
}

auto SetLevelOrderPopup::onOrderButton(cocos2d::CCObject* sender) -> decltype(onOrderButton(sender)) {
	using FunctionType = decltype(onOrderButton(sender))(*)(SetLevelOrderPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3091a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
