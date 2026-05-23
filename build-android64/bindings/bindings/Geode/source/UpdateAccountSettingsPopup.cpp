
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

UpdateAccountSettingsPopup::~UpdateAccountSettingsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(UpdateAccountSettingsPopup*);
		static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26UpdateAccountSettingsPopupD2Ev")), tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) UpdateAccountSettingsPopup(geode::CutoffConstructor, sizeof(UpdateAccountSettingsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto UpdateAccountSettingsPopup::create(GJAccountSettingsLayer* settingsLayer, int messageStatus, int friendStatus, int commentStatus, gd::string youtubeURL, gd::string twitterURL, gd::string twitchURL, gd::string instagramURL, gd::string tiktokURL, gd::string discordUsername, gd::string customString) -> decltype(create(settingsLayer, messageStatus, friendStatus, commentStatus, youtubeURL, twitterURL, twitchURL, instagramURL, tiktokURL, discordUsername, customString)) {
	using FunctionType = decltype(create(settingsLayer, messageStatus, friendStatus, commentStatus, youtubeURL, twitterURL, twitchURL, instagramURL, tiktokURL, discordUsername, customString))(*)(GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26UpdateAccountSettingsPopup6createEP22GJAccountSettingsLayeriiiSsSsSsSsSsSsSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(settingsLayer, messageStatus, friendStatus, commentStatus, youtubeURL, twitterURL, twitchURL, instagramURL, tiktokURL, discordUsername, customString);
}

auto UpdateAccountSettingsPopup::init(GJAccountSettingsLayer* settingsLayer, int messageStatus, int friendStatus, int commentStatus, gd::string youtubeURL, gd::string twitterURL, gd::string twitchURL, gd::string instagramURL, gd::string tiktokURL, gd::string discordUsername, gd::string customString) -> decltype(init(settingsLayer, messageStatus, friendStatus, commentStatus, youtubeURL, twitterURL, twitchURL, instagramURL, tiktokURL, discordUsername, customString)) {
	using FunctionType = decltype(init(settingsLayer, messageStatus, friendStatus, commentStatus, youtubeURL, twitterURL, twitchURL, instagramURL, tiktokURL, discordUsername, customString))(*)(UpdateAccountSettingsPopup*, GJAccountSettingsLayer*, int, int, int, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string);
	static auto func = wrapFunction<FunctionType>(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN26UpdateAccountSettingsPopup4initEP22GJAccountSettingsLayeriiiSsSsSsSsSsSsSs")), tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, settingsLayer, messageStatus, friendStatus, commentStatus, youtubeURL, twitterURL, twitchURL, instagramURL, tiktokURL, discordUsername, customString);
}
