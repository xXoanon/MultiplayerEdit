
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

auto BrowseSmartKeyLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&BrowseSmartKeyLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto BrowseSmartKeyLayer::getAllSelectedBlocks() -> decltype(getAllSelectedBlocks()) {
	using FunctionType = decltype(getAllSelectedBlocks())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartKeyLayer::init(GJSmartTemplate* smartTemplate, gd::string prefabKey) -> decltype(init(smartTemplate, prefabKey)) {
	using FunctionType = decltype(init(smartTemplate, prefabKey))(*)(BrowseSmartKeyLayer*, GJSmartTemplate*, gd::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, prefabKey);
}

auto BrowseSmartKeyLayer::onButton(cocos2d::CCObject* sender) -> decltype(onButton(sender)) {
	using FunctionType = decltype(onButton(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45be50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartKeyLayer::onPrefabObject(cocos2d::CCObject* sender) -> decltype(onPrefabObject(sender)) {
	using FunctionType = decltype(onPrefabObject(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartKeyLayer::updateChanceValues() -> decltype(updateChanceValues()) {
	using FunctionType = decltype(updateChanceValues())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
