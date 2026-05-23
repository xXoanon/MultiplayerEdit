
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

SetTextPopup::~SetTextPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetTextPopup*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SetTextPopupD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetTextPopup(geode::CutoffConstructor, sizeof(SetTextPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetTextPopup::create(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float offset) -> decltype(create(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset)) {
	using FunctionType = decltype(create(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset))(*)(gd::string, gd::string, int, gd::string, gd::string, bool, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SetTextPopup6createESsSsiSsSsbf")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset);
}

auto SetTextPopup::init(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float offset) -> decltype(init(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset)) {
	using FunctionType = decltype(init(value, placeholder, maxLength, title, okBtnText, showResetBtn, offset))(*)(SetTextPopup*, gd::string, gd::string, int, gd::string, gd::string, bool, float);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12SetTextPopup4initESsSsiSsSsbf")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, placeholder, maxLength, title, okBtnText, showResetBtn, offset);
}
