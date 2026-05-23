
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

FLAlertLayer::~FLAlertLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FLAlertLayer*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12FLAlertLayerD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FLAlertLayer(geode::CutoffConstructor, sizeof(FLAlertLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto FLAlertLayer::create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width) -> decltype(create(delegate, title, desc, btn1, btn2, width)) {
	using FunctionType = decltype(create(delegate, title, desc, btn1, btn2, width))(*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12FLAlertLayer6createEP20FLAlertLayerProtocolPKcSsS3_S3_f")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delegate, title, desc, btn1, btn2, width);
}

auto FLAlertLayer::create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale) -> decltype(create(delegate, title, desc, btn1, btn2, width, scroll, height, textScale)) {
	using FunctionType = decltype(create(delegate, title, desc, btn1, btn2, width, scroll, height, textScale))(*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12FLAlertLayer6createEP20FLAlertLayerProtocolPKcSsS3_S3_fbff")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delegate, title, desc, btn1, btn2, width, scroll, height, textScale);
}

auto FLAlertLayer::init(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale) -> decltype(init(delegate, title, desc, btn1, btn2, width, scroll, height, textScale)) {
	using FunctionType = decltype(init(delegate, title, desc, btn1, btn2, width, scroll, height, textScale))(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12FLAlertLayer4initEP20FLAlertLayerProtocolPKcSsS3_S3_fbff")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate, title, desc, btn1, btn2, width, scroll, height, textScale);
}
