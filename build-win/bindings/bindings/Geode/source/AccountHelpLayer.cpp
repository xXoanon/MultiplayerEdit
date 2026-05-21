
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

auto AccountHelpLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountHelpLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(AccountHelpLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7f610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountHelpLayer::layerHidden() -> decltype(layerHidden()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountHelpLayer::layerHidden), this);
	using FunctionType = decltype(layerHidden())(*)(AccountHelpLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountHelpLayer::accountStatusChanged() -> decltype(accountStatusChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountHelpLayer::accountStatusChanged), this);
	using FunctionType = decltype(accountStatusChanged())(*)(AccountHelpLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fd10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountHelpLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountHelpLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(AccountHelpLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto AccountHelpLayer::onAccountManagement(cocos2d::CCObject* sender) -> decltype(onAccountManagement(sender)) {
	using FunctionType = decltype(onAccountManagement(sender))(*)(AccountHelpLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fa60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountHelpLayer::onReLogin(cocos2d::CCObject* sender) -> decltype(onReLogin(sender)) {
	using FunctionType = decltype(onReLogin(sender))(*)(AccountHelpLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fa20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountHelpLayer::onUnlink(cocos2d::CCObject* sender) -> decltype(onUnlink(sender)) {
	using FunctionType = decltype(onUnlink(sender))(*)(AccountHelpLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fb70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountHelpLayer::updatePage() -> decltype(updatePage()) {
	using FunctionType = decltype(updatePage())(*)(AccountHelpLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fd20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
