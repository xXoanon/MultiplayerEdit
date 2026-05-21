
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

auto SelectFontLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectFontLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SelectFontLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x846a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectFontLayer::init(LevelEditorLayer* layer) -> decltype(init(layer)) {
	using FunctionType = decltype(init(layer))(*)(SelectFontLayer*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28e510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto SelectFontLayer::onChangeFont(cocos2d::CCObject* sender) -> decltype(onChangeFont(sender)) {
	using FunctionType = decltype(onChangeFont(sender))(*)(SelectFontLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28ed30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectFontLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SelectFontLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectFontLayer::updateFontLabel() -> decltype(updateFontLabel()) {
	using FunctionType = decltype(updateFontLabel())(*)(SelectFontLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28eb30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
