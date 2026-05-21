
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

auto SetupArtSwitchPopup::create(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id) -> decltype(create(object, objects, id)) {
	using FunctionType = decltype(create(object, objects, id))(*)(ArtTriggerGameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, id);
}

auto SetupArtSwitchPopup::selectArtClosed(SelectArtLayer* layer) -> decltype(selectArtClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectArtLayer*>::func(&SetupArtSwitchPopup::selectArtClosed), this);
	using FunctionType = decltype(selectArtClosed(layer))(*)(SetupArtSwitchPopup*, SelectArtLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SetupArtSwitchPopup::init(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id) -> decltype(init(object, objects, id)) {
	using FunctionType = decltype(init(object, objects, id))(*)(SetupArtSwitchPopup*, ArtTriggerGameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, id);
}

auto SetupArtSwitchPopup::onArt(cocos2d::CCObject* sender) -> decltype(onArt(sender)) {
	using FunctionType = decltype(onArt(sender))(*)(SetupArtSwitchPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4723f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
