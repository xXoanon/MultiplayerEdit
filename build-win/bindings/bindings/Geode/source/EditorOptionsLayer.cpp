
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

auto EditorOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(EditorOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorOptionsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorOptionsLayer::setupOptions() -> decltype(setupOptions()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorOptionsLayer::setupOptions), this);
	using FunctionType = decltype(setupOptions())(*)(EditorOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorOptionsLayer::onButtonRows(cocos2d::CCObject* sender) -> decltype(onButtonRows(sender)) {
	using FunctionType = decltype(onButtonRows(sender))(*)(EditorOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorOptionsLayer::onButtonsPerRow(cocos2d::CCObject* sender) -> decltype(onButtonsPerRow(sender)) {
	using FunctionType = decltype(onButtonsPerRow(sender))(*)(EditorOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
