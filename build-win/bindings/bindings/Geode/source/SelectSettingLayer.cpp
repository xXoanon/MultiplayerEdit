
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

auto SelectSettingLayer::create(SelectSettingType type, int value) -> decltype(create(type, value)) {
	using FunctionType = decltype(create(type, value))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x323110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, value);
}

auto SelectSettingLayer::frameForItem(SelectSettingType type, int index) -> decltype(frameForItem(type, index)) {
	using FunctionType = decltype(frameForItem(type, index))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x323970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, index);
}

auto SelectSettingLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectSettingLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x323f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectSettingLayer::init(SelectSettingType type, int value) -> decltype(init(type, value)) {
	using FunctionType = decltype(init(type, value))(*)(SelectSettingLayer*, SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x323220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, value);
}

auto SelectSettingLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SelectSettingLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x323ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectSettingLayer::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(SelectSettingLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x323e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
