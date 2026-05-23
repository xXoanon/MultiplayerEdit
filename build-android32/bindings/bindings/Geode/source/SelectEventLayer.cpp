
#include <stdexcept>
#include <Geode/Bindings.hpp>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/cocos/platform/android/CCFileUtilsAndroid.h>

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

SelectEventLayer::~SelectEventLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SelectEventLayer*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16SelectEventLayerD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SelectEventLayer(geode::CutoffConstructor, sizeof(SelectEventLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SelectEventLayer::create(SetupEventLinkPopup* popup, gd::set<int>& eventIDs) -> decltype(create(popup, eventIDs)) {
	using FunctionType = decltype(create(popup, eventIDs))(*)(SetupEventLinkPopup*, gd::set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16SelectEventLayer6createEP19SetupEventLinkPopupRSt3setIiSt4lessIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(popup, eventIDs);
}

auto SelectEventLayer::addToggle(int id, gd::string info) -> decltype(addToggle(id, info)) {
	using FunctionType = decltype(addToggle(id, info))(*)(SelectEventLayer*, int, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16SelectEventLayer9addToggleEiSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, info);
}

auto SelectEventLayer::init(SetupEventLinkPopup* popup, gd::set<int>& eventIDs) -> decltype(init(popup, eventIDs)) {
	using FunctionType = decltype(init(popup, eventIDs))(*)(SelectEventLayer*, SetupEventLinkPopup*, gd::set<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN16SelectEventLayer4initEP19SetupEventLinkPopupRSt3setIiSt4lessIiESaIiEE")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, popup, eventIDs);
}
