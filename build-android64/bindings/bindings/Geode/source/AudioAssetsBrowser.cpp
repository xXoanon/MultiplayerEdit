
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

AudioAssetsBrowser::~AudioAssetsBrowser() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AudioAssetsBrowser*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AudioAssetsBrowserD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AudioAssetsBrowser(geode::CutoffConstructor, sizeof(AudioAssetsBrowser));
		geode::DestructorLock::addLock(this);
	}
}

auto AudioAssetsBrowser::create(gd::vector<int>& songIds, gd::vector<int>& sfxIds) -> decltype(create(songIds, sfxIds)) {
	using FunctionType = decltype(create(songIds, sfxIds))(*)(gd::vector<int>&, gd::vector<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AudioAssetsBrowser6createERSt6vectorIiSaIiEES3_")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songIds, sfxIds);
}

auto AudioAssetsBrowser::init(gd::vector<int>& songIds, gd::vector<int>& sfxIds) -> decltype(init(songIds, sfxIds)) {
	using FunctionType = decltype(init(songIds, sfxIds))(*)(AudioAssetsBrowser*, gd::vector<int>&, gd::vector<int>&);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AudioAssetsBrowser4initERSt6vectorIiSaIiEES3_")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songIds, sfxIds);
}
