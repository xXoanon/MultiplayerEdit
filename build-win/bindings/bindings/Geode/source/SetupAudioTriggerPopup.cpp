
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

auto SetupAudioTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAudioTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupAudioTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4466a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAudioTriggerPopup::addProxVolControls(int page) -> decltype(addProxVolControls(page)) {
	using FunctionType = decltype(addProxVolControls(page))(*)(SetupAudioTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4456c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto SetupAudioTriggerPopup::addTimeControls(int page, float yOffset) -> decltype(addTimeControls(page, yOffset)) {
	using FunctionType = decltype(addTimeControls(page, yOffset))(*)(SetupAudioTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x445300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, yOffset);
}

auto SetupAudioTriggerPopup::onProxMode(cocos2d::CCObject* sender) -> decltype(onProxMode(sender)) {
	using FunctionType = decltype(onProxMode(sender))(*)(SetupAudioTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x446550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAudioTriggerPopup::updateSpecialGroup() -> decltype(updateSpecialGroup()) {
	using FunctionType = decltype(updateSpecialGroup())(*)(SetupAudioTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x446620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
