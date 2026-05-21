
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

auto SetupAudioLineGuidePopup::selectSettingClosed(SelectSettingLayer* layer) -> decltype(selectSettingClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectSettingLayer*>::func(&SetupAudioLineGuidePopup::selectSettingClosed), this);
	using FunctionType = decltype(selectSettingClosed(layer))(*)(SetupAudioLineGuidePopup*, SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SetupAudioLineGuidePopup::init(AudioLineGuideGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupAudioLineGuidePopup*, AudioLineGuideGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46ffb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupAudioLineGuidePopup::onSpeed(cocos2d::CCObject* sender) -> decltype(onSpeed(sender)) {
	using FunctionType = decltype(onSpeed(sender))(*)(SetupAudioLineGuidePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4706c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
