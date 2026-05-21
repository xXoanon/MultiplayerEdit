
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

auto LevelOptionsLayer::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&LevelOptionsLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(LevelOptionsLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto LevelOptionsLayer::getValue(int tag) -> decltype(getValue(tag)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelOptionsLayer::getValue), this);
	using FunctionType = decltype(getValue(tag))(*)(LevelOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag);
}

auto LevelOptionsLayer::setupOptions() -> decltype(setupOptions()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelOptionsLayer::setupOptions), this);
	using FunctionType = decltype(setupOptions())(*)(LevelOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelOptionsLayer::didToggle(int tag) -> decltype(didToggle(tag)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelOptionsLayer::didToggle), this);
	using FunctionType = decltype(didToggle(tag))(*)(LevelOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag);
}

auto LevelOptionsLayer::init(LevelSettingsObject* object) -> decltype(init(object)) {
	using FunctionType = decltype(init(object))(*)(LevelOptionsLayer*, LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelOptionsLayer::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(LevelOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
