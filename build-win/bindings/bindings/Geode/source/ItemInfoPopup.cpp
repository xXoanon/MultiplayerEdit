
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

auto ItemInfoPopup::create(int id, UnlockType type) -> decltype(create(id, type)) {
	using FunctionType = decltype(create(id, type))(*)(int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27b7b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, type);
}

auto ItemInfoPopup::nameForUnlockType(int id, UnlockType type) -> decltype(nameForUnlockType(id, type)) {
	using FunctionType = decltype(nameForUnlockType(id, type))(*)(int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27d820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, type);
}

auto ItemInfoPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ItemInfoPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ItemInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ItemInfoPopup::init(int id, UnlockType type) -> decltype(init(id, type)) {
	using FunctionType = decltype(init(id, type))(*)(ItemInfoPopup*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27b8a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto ItemInfoPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ItemInfoPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ItemInfoPopup::onCredit(cocos2d::CCObject* sender) -> decltype(onCredit(sender)) {
	using FunctionType = decltype(onCredit(sender))(*)(ItemInfoPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27d7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
