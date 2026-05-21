#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MenuLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_googlePlaySignedIn
		#define GEODE_STATICS_googlePlaySignedIn
		GEODE_AS_STATIC_FUNCTION(googlePlaySignedIn) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_endGame
		#define GEODE_STATICS_endGame
		GEODE_AS_STATIC_FUNCTION(endGame) 
	#endif

	#ifndef GEODE_STATICS_firstNetworkTest
		#define GEODE_STATICS_firstNetworkTest
		GEODE_AS_STATIC_FUNCTION(firstNetworkTest) 
	#endif

	#ifndef GEODE_STATICS_onAchievements
		#define GEODE_STATICS_onAchievements
		GEODE_AS_STATIC_FUNCTION(onAchievements) 
	#endif

	#ifndef GEODE_STATICS_onCreator
		#define GEODE_STATICS_onCreator
		GEODE_AS_STATIC_FUNCTION(onCreator) 
	#endif

	#ifndef GEODE_STATICS_onDaily
		#define GEODE_STATICS_onDaily
		GEODE_AS_STATIC_FUNCTION(onDaily) 
	#endif

	#ifndef GEODE_STATICS_onDiscord
		#define GEODE_STATICS_onDiscord
		GEODE_AS_STATIC_FUNCTION(onDiscord) 
	#endif

	#ifndef GEODE_STATICS_onFacebook
		#define GEODE_STATICS_onFacebook
		GEODE_AS_STATIC_FUNCTION(onFacebook) 
	#endif

	#ifndef GEODE_STATICS_onFreeLevels
		#define GEODE_STATICS_onFreeLevels
		GEODE_AS_STATIC_FUNCTION(onFreeLevels) 
	#endif

	#ifndef GEODE_STATICS_onFullVersion
		#define GEODE_STATICS_onFullVersion
		GEODE_AS_STATIC_FUNCTION(onFullVersion) 
	#endif

	#ifndef GEODE_STATICS_onGarage
		#define GEODE_STATICS_onGarage
		GEODE_AS_STATIC_FUNCTION(onGarage) 
	#endif

	#ifndef GEODE_STATICS_onMoreGames
		#define GEODE_STATICS_onMoreGames
		GEODE_AS_STATIC_FUNCTION(onMoreGames) 
	#endif

	#ifndef GEODE_STATICS_onMyProfile
		#define GEODE_STATICS_onMyProfile
		GEODE_AS_STATIC_FUNCTION(onMyProfile) 
	#endif

	#ifndef GEODE_STATICS_onNewgrounds
		#define GEODE_STATICS_onNewgrounds
		GEODE_AS_STATIC_FUNCTION(onNewgrounds) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onOptionsInstant
		#define GEODE_STATICS_onOptionsInstant
		GEODE_AS_STATIC_FUNCTION(onOptionsInstant) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_onRobTop
		#define GEODE_STATICS_onRobTop
		GEODE_AS_STATIC_FUNCTION(onRobTop) 
	#endif

	#ifndef GEODE_STATICS_onStats
		#define GEODE_STATICS_onStats
		GEODE_AS_STATIC_FUNCTION(onStats) 
	#endif

	#ifndef GEODE_STATICS_onTwitch
		#define GEODE_STATICS_onTwitch
		GEODE_AS_STATIC_FUNCTION(onTwitch) 
	#endif

	#ifndef GEODE_STATICS_onTwitter
		#define GEODE_STATICS_onTwitter
		GEODE_AS_STATIC_FUNCTION(onTwitter) 
	#endif

	#ifndef GEODE_STATICS_onYouTube
		#define GEODE_STATICS_onYouTube
		GEODE_AS_STATIC_FUNCTION(onYouTube) 
	#endif

	#ifndef GEODE_STATICS_openOptions
		#define GEODE_STATICS_openOptions
		GEODE_AS_STATIC_FUNCTION(openOptions) 
	#endif

	#ifndef GEODE_STATICS_showTOS
		#define GEODE_STATICS_showTOS
		GEODE_AS_STATIC_FUNCTION(showTOS) 
	#endif

	#ifndef GEODE_STATICS_updateUserProfileButton
		#define GEODE_STATICS_updateUserProfileButton
		GEODE_AS_STATIC_FUNCTION(updateUserProfileButton) 
	#endif

	#ifndef GEODE_STATICS_willClose
		#define GEODE_STATICS_willClose
		GEODE_AS_STATIC_FUNCTION(willClose) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_googlePlaySignedIn
		#define GEODE_CONCEPT_CHECK_googlePlaySignedIn
		GEODE_CONCEPT_FUNCTION_CHECK(googlePlaySignedIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_endGame
		#define GEODE_CONCEPT_CHECK_endGame
		GEODE_CONCEPT_FUNCTION_CHECK(endGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstNetworkTest
		#define GEODE_CONCEPT_CHECK_firstNetworkTest
		GEODE_CONCEPT_FUNCTION_CHECK(firstNetworkTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAchievements
		#define GEODE_CONCEPT_CHECK_onAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(onAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreator
		#define GEODE_CONCEPT_CHECK_onCreator
		GEODE_CONCEPT_FUNCTION_CHECK(onCreator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDaily
		#define GEODE_CONCEPT_CHECK_onDaily
		GEODE_CONCEPT_FUNCTION_CHECK(onDaily) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDiscord
		#define GEODE_CONCEPT_CHECK_onDiscord
		GEODE_CONCEPT_FUNCTION_CHECK(onDiscord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEveryplay
		#define GEODE_CONCEPT_CHECK_onEveryplay
		GEODE_CONCEPT_FUNCTION_CHECK(onEveryplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFacebook
		#define GEODE_CONCEPT_CHECK_onFacebook
		GEODE_CONCEPT_FUNCTION_CHECK(onFacebook) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFreeLevels
		#define GEODE_CONCEPT_CHECK_onFreeLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onFreeLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFullVersion
		#define GEODE_CONCEPT_CHECK_onFullVersion
		GEODE_CONCEPT_FUNCTION_CHECK(onFullVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGameCenter
		#define GEODE_CONCEPT_CHECK_onGameCenter
		GEODE_CONCEPT_FUNCTION_CHECK(onGameCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGarage
		#define GEODE_CONCEPT_CHECK_onGarage
		GEODE_CONCEPT_FUNCTION_CHECK(onGarage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGooglePlayGames
		#define GEODE_CONCEPT_CHECK_onGooglePlayGames
		GEODE_CONCEPT_FUNCTION_CHECK(onGooglePlayGames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMoreGames
		#define GEODE_CONCEPT_CHECK_onMoreGames
		GEODE_CONCEPT_FUNCTION_CHECK(onMoreGames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMyProfile
		#define GEODE_CONCEPT_CHECK_onMyProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onMyProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewgrounds
		#define GEODE_CONCEPT_CHECK_onNewgrounds
		GEODE_CONCEPT_FUNCTION_CHECK(onNewgrounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptionsInstant
		#define GEODE_CONCEPT_CHECK_onOptionsInstant
		GEODE_CONCEPT_FUNCTION_CHECK(onOptionsInstant) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlay
		#define GEODE_CONCEPT_CHECK_onPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQuit
		#define GEODE_CONCEPT_CHECK_onQuit
		GEODE_CONCEPT_FUNCTION_CHECK(onQuit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRobTop
		#define GEODE_CONCEPT_CHECK_onRobTop
		GEODE_CONCEPT_FUNCTION_CHECK(onRobTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStats
		#define GEODE_CONCEPT_CHECK_onStats
		GEODE_CONCEPT_FUNCTION_CHECK(onStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTrailer
		#define GEODE_CONCEPT_CHECK_onTrailer
		GEODE_CONCEPT_FUNCTION_CHECK(onTrailer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTwitch
		#define GEODE_CONCEPT_CHECK_onTwitch
		GEODE_CONCEPT_FUNCTION_CHECK(onTwitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTwitter
		#define GEODE_CONCEPT_CHECK_onTwitter
		GEODE_CONCEPT_FUNCTION_CHECK(onTwitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onYouTube
		#define GEODE_CONCEPT_CHECK_onYouTube
		GEODE_CONCEPT_FUNCTION_CHECK(onYouTube) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openOptions
		#define GEODE_CONCEPT_CHECK_openOptions
		GEODE_CONCEPT_FUNCTION_CHECK(openOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGCQuestion
		#define GEODE_CONCEPT_CHECK_showGCQuestion
		GEODE_CONCEPT_FUNCTION_CHECK(showGCQuestion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showMeltdownPromo
		#define GEODE_CONCEPT_CHECK_showMeltdownPromo
		GEODE_CONCEPT_FUNCTION_CHECK(showMeltdownPromo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTOS
		#define GEODE_CONCEPT_CHECK_showTOS
		GEODE_CONCEPT_FUNCTION_CHECK(showTOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncPlatformAchievements
		#define GEODE_CONCEPT_CHECK_syncPlatformAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(syncPlatformAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowAd
		#define GEODE_CONCEPT_CHECK_tryShowAd
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserProfileButton
		#define GEODE_CONCEPT_CHECK_updateUserProfileButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserProfileButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_videoOptionsClosed
		#define GEODE_CONCEPT_CHECK_videoOptionsClosed
		GEODE_CONCEPT_FUNCTION_CHECK(videoOptionsClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_videoOptionsOpened
		#define GEODE_CONCEPT_CHECK_videoOptionsOpened
		GEODE_CONCEPT_FUNCTION_CHECK(videoOptionsOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willClose
		#define GEODE_CONCEPT_CHECK_willClose
		GEODE_CONCEPT_FUNCTION_CHECK(willClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MenuLayer> : ModifyBase<ModifyDerive<Der, MenuLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MenuLayer>>;
		using ModifyBase<ModifyDerive<Der, MenuLayer>>::ModifyBase;
		using Base = MenuLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x333900, Default, MenuLayer, scene, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x333a90, Thiscall, MenuLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335f80, Thiscall, MenuLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x336360, Thiscall, MenuLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335980, Thiscall, MenuLayer, googlePlaySignedIn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x336150, Thiscall, MenuLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3363d0, Thiscall, MenuLayer, endGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3352f0, Thiscall, MenuLayer, firstNetworkTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335820, Thiscall, MenuLayer, onAchievements, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335d30, Thiscall, MenuLayer, onCreator, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3350a0, Thiscall, MenuLayer, onDaily, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335720, Thiscall, MenuLayer, onDiscord, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, onEveryplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3356a0, Thiscall, MenuLayer, onFacebook, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MenuLayer, onFreeLevels, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MenuLayer, onFullVersion, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, onGameCenter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335dc0, Thiscall, MenuLayer, onGarage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, onGooglePlayGames, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335740, Thiscall, MenuLayer, onMoreGames, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3355e0, Thiscall, MenuLayer, onMyProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335e50, Thiscall, MenuLayer, onNewgrounds, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335a70, Thiscall, MenuLayer, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335a80, Thiscall, MenuLayer, onOptionsInstant, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3359d0, Thiscall, MenuLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335f90, Thiscall, MenuLayer, onQuit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335680, Thiscall, MenuLayer, onRobTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335c10, Thiscall, MenuLayer, onStats, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, onTrailer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335700, Thiscall, MenuLayer, onTwitch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3356c0, Thiscall, MenuLayer, onTwitter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3356e0, Thiscall, MenuLayer, onYouTube, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x335a90, Thiscall, MenuLayer, openOptions, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, showGCQuestion, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, showMeltdownPromo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3354c0, Thiscall, MenuLayer, showTOS, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, syncPlatformAchievements, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, tryShowAd, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3351f0, Thiscall, MenuLayer, updateUserProfileButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, videoOptionsClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MenuLayer, videoOptionsOpened, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3360b0, Thiscall, MenuLayer, willClose, )
		}
	};
}
