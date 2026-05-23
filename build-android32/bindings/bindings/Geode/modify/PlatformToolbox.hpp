#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlatformToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_activateGameCenter
		#define GEODE_STATICS_activateGameCenter
		GEODE_AS_STATIC_FUNCTION(activateGameCenter) 
	#endif

	#ifndef GEODE_STATICS_copyToClipboard
		#define GEODE_STATICS_copyToClipboard
		GEODE_AS_STATIC_FUNCTION(copyToClipboard) 
	#endif

	#ifndef GEODE_STATICS_doesFileExist
		#define GEODE_STATICS_doesFileExist
		GEODE_AS_STATIC_FUNCTION(doesFileExist) 
	#endif

	#ifndef GEODE_STATICS_downloadAndSavePromoImage
		#define GEODE_STATICS_downloadAndSavePromoImage
		GEODE_AS_STATIC_FUNCTION(downloadAndSavePromoImage) 
	#endif

	#ifndef GEODE_STATICS_gameDidSave
		#define GEODE_STATICS_gameDidSave
		GEODE_AS_STATIC_FUNCTION(gameDidSave) 
	#endif

	#ifndef GEODE_STATICS_getClipboardString
		#define GEODE_STATICS_getClipboardString
		GEODE_AS_STATIC_FUNCTION(getClipboardString) 
	#endif

	#ifndef GEODE_STATICS_getDisplaySize
		#define GEODE_STATICS_getDisplaySize
		GEODE_AS_STATIC_FUNCTION(getDisplaySize) 
	#endif

	#ifndef GEODE_STATICS_getRawPath
		#define GEODE_STATICS_getRawPath
		GEODE_AS_STATIC_FUNCTION(getRawPath) 
	#endif

	#ifndef GEODE_STATICS_getUniqueUserID
		#define GEODE_STATICS_getUniqueUserID
		GEODE_AS_STATIC_FUNCTION(getUniqueUserID) 
	#endif

	#ifndef GEODE_STATICS_getUserID
		#define GEODE_STATICS_getUserID
		GEODE_AS_STATIC_FUNCTION(getUserID) 
	#endif

	#ifndef GEODE_STATICS_hideCursor
		#define GEODE_STATICS_hideCursor
		GEODE_AS_STATIC_FUNCTION(hideCursor) 
	#endif

	#ifndef GEODE_STATICS_isControllerConnected
		#define GEODE_STATICS_isControllerConnected
		GEODE_AS_STATIC_FUNCTION(isControllerConnected) 
	#endif

	#ifndef GEODE_STATICS_isHD
		#define GEODE_STATICS_isHD
		GEODE_AS_STATIC_FUNCTION(isHD) 
	#endif

	#ifndef GEODE_STATICS_isLocalPlayerAuthenticated
		#define GEODE_STATICS_isLocalPlayerAuthenticated
		GEODE_AS_STATIC_FUNCTION(isLocalPlayerAuthenticated) 
	#endif

	#ifndef GEODE_STATICS_isLowMemoryDevice
		#define GEODE_STATICS_isLowMemoryDevice
		GEODE_AS_STATIC_FUNCTION(isLowMemoryDevice) 
	#endif

	#ifndef GEODE_STATICS_isNetworkAvailable
		#define GEODE_STATICS_isNetworkAvailable
		GEODE_AS_STATIC_FUNCTION(isNetworkAvailable) 
	#endif

	#ifndef GEODE_STATICS_isSignedInGooglePlay
		#define GEODE_STATICS_isSignedInGooglePlay
		GEODE_AS_STATIC_FUNCTION(isSignedInGooglePlay) 
	#endif

	#ifndef GEODE_STATICS_loadAndDecryptFileToString
		#define GEODE_STATICS_loadAndDecryptFileToString
		GEODE_AS_STATIC_FUNCTION(loadAndDecryptFileToString) 
	#endif

	#ifndef GEODE_STATICS_logEvent
		#define GEODE_STATICS_logEvent
		GEODE_AS_STATIC_FUNCTION(logEvent) 
	#endif

	#ifndef GEODE_STATICS_onGameLaunch
		#define GEODE_STATICS_onGameLaunch
		GEODE_AS_STATIC_FUNCTION(onGameLaunch) 
	#endif

	#ifndef GEODE_STATICS_onNativePause
		#define GEODE_STATICS_onNativePause
		GEODE_AS_STATIC_FUNCTION(onNativePause) 
	#endif

	#ifndef GEODE_STATICS_onNativeResume
		#define GEODE_STATICS_onNativeResume
		GEODE_AS_STATIC_FUNCTION(onNativeResume) 
	#endif

	#ifndef GEODE_STATICS_onToggleKeyboard
		#define GEODE_STATICS_onToggleKeyboard
		GEODE_AS_STATIC_FUNCTION(onToggleKeyboard) 
	#endif

	#ifndef GEODE_STATICS_openAppPage
		#define GEODE_STATICS_openAppPage
		GEODE_AS_STATIC_FUNCTION(openAppPage) 
	#endif

	#ifndef GEODE_STATICS_platformShutdown
		#define GEODE_STATICS_platformShutdown
		GEODE_AS_STATIC_FUNCTION(platformShutdown) 
	#endif

	#ifndef GEODE_STATICS_refreshWindow
		#define GEODE_STATICS_refreshWindow
		GEODE_AS_STATIC_FUNCTION(refreshWindow) 
	#endif

	#ifndef GEODE_STATICS_reportAchievementWithID
		#define GEODE_STATICS_reportAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_reportLoadingFinished
		#define GEODE_STATICS_reportLoadingFinished
		GEODE_AS_STATIC_FUNCTION(reportLoadingFinished) 
	#endif

	#ifndef GEODE_STATICS_resizeWindow
		#define GEODE_STATICS_resizeWindow
		GEODE_AS_STATIC_FUNCTION(resizeWindow) 
	#endif

	#ifndef GEODE_STATICS_saveAndEncryptStringToFile
		#define GEODE_STATICS_saveAndEncryptStringToFile
		GEODE_AS_STATIC_FUNCTION(saveAndEncryptStringToFile) 
	#endif

	#ifndef GEODE_STATICS_sendMail
		#define GEODE_STATICS_sendMail
		GEODE_AS_STATIC_FUNCTION(sendMail) 
	#endif

	#ifndef GEODE_STATICS_setBlockBackButton
		#define GEODE_STATICS_setBlockBackButton
		GEODE_AS_STATIC_FUNCTION(setBlockBackButton) 
	#endif

	#ifndef GEODE_STATICS_setKeyboardState
		#define GEODE_STATICS_setKeyboardState
		GEODE_AS_STATIC_FUNCTION(setKeyboardState) 
	#endif

	#ifndef GEODE_STATICS_shouldResumeSound
		#define GEODE_STATICS_shouldResumeSound
		GEODE_AS_STATIC_FUNCTION(shouldResumeSound) 
	#endif

	#ifndef GEODE_STATICS_showAchievements
		#define GEODE_STATICS_showAchievements
		GEODE_AS_STATIC_FUNCTION(showAchievements) 
	#endif

	#ifndef GEODE_STATICS_showCursor
		#define GEODE_STATICS_showCursor
		GEODE_AS_STATIC_FUNCTION(showCursor) 
	#endif

	#ifndef GEODE_STATICS_signInGooglePlay
		#define GEODE_STATICS_signInGooglePlay
		GEODE_AS_STATIC_FUNCTION(signInGooglePlay) 
	#endif

	#ifndef GEODE_STATICS_signOutGooglePlay
		#define GEODE_STATICS_signOutGooglePlay
		GEODE_AS_STATIC_FUNCTION(signOutGooglePlay) 
	#endif

	#ifndef GEODE_STATICS_spriteFromSavedFile
		#define GEODE_STATICS_spriteFromSavedFile
		GEODE_AS_STATIC_FUNCTION(spriteFromSavedFile) 
	#endif

	#ifndef GEODE_STATICS_toggleCallGLFinish
		#define GEODE_STATICS_toggleCallGLFinish
		GEODE_AS_STATIC_FUNCTION(toggleCallGLFinish) 
	#endif

	#ifndef GEODE_STATICS_toggleCPUSleepMode
		#define GEODE_STATICS_toggleCPUSleepMode
		GEODE_AS_STATIC_FUNCTION(toggleCPUSleepMode) 
	#endif

	#ifndef GEODE_STATICS_toggleForceTimer
		#define GEODE_STATICS_toggleForceTimer
		GEODE_AS_STATIC_FUNCTION(toggleForceTimer) 
	#endif

	#ifndef GEODE_STATICS_toggleFullScreen
		#define GEODE_STATICS_toggleFullScreen
		GEODE_AS_STATIC_FUNCTION(toggleFullScreen) 
	#endif

	#ifndef GEODE_STATICS_toggleLockCursor
		#define GEODE_STATICS_toggleLockCursor
		GEODE_AS_STATIC_FUNCTION(toggleLockCursor) 
	#endif

	#ifndef GEODE_STATICS_toggleMouseControl
		#define GEODE_STATICS_toggleMouseControl
		GEODE_AS_STATIC_FUNCTION(toggleMouseControl) 
	#endif

	#ifndef GEODE_STATICS_toggleSmoothFix
		#define GEODE_STATICS_toggleSmoothFix
		GEODE_AS_STATIC_FUNCTION(toggleSmoothFix) 
	#endif

	#ifndef GEODE_STATICS_toggleVerticalSync
		#define GEODE_STATICS_toggleVerticalSync
		GEODE_AS_STATIC_FUNCTION(toggleVerticalSync) 
	#endif

	#ifndef GEODE_STATICS_tryShowRateDialog
		#define GEODE_STATICS_tryShowRateDialog
		GEODE_AS_STATIC_FUNCTION(tryShowRateDialog) 
	#endif

	#ifndef GEODE_STATICS_updateMouseControl
		#define GEODE_STATICS_updateMouseControl
		GEODE_AS_STATIC_FUNCTION(updateMouseControl) 
	#endif

	#ifndef GEODE_STATICS_updateWindowedSize
		#define GEODE_STATICS_updateWindowedSize
		GEODE_AS_STATIC_FUNCTION(updateWindowedSize) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_activateGameCenter
		#define GEODE_CONCEPT_CHECK_activateGameCenter
		GEODE_CONCEPT_FUNCTION_CHECK(activateGameCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyToClipboard
		#define GEODE_CONCEPT_CHECK_copyToClipboard
		GEODE_CONCEPT_FUNCTION_CHECK(copyToClipboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doesFileExist
		#define GEODE_CONCEPT_CHECK_doesFileExist
		GEODE_CONCEPT_FUNCTION_CHECK(doesFileExist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadAndSavePromoImage
		#define GEODE_CONCEPT_CHECK_downloadAndSavePromoImage
		GEODE_CONCEPT_FUNCTION_CHECK(downloadAndSavePromoImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameDidSave
		#define GEODE_CONCEPT_CHECK_gameDidSave
		GEODE_CONCEPT_FUNCTION_CHECK(gameDidSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getClipboardString
		#define GEODE_CONCEPT_CHECK_getClipboardString
		GEODE_CONCEPT_FUNCTION_CHECK(getClipboardString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeviceRefreshRate
		#define GEODE_CONCEPT_CHECK_getDeviceRefreshRate
		GEODE_CONCEPT_FUNCTION_CHECK(getDeviceRefreshRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDisplaySize
		#define GEODE_CONCEPT_CHECK_getDisplaySize
		GEODE_CONCEPT_FUNCTION_CHECK(getDisplaySize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRawPath
		#define GEODE_CONCEPT_CHECK_getRawPath
		GEODE_CONCEPT_FUNCTION_CHECK(getRawPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUniqueUserID
		#define GEODE_CONCEPT_CHECK_getUniqueUserID
		GEODE_CONCEPT_FUNCTION_CHECK(getUniqueUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserID
		#define GEODE_CONCEPT_CHECK_getUserID
		GEODE_CONCEPT_FUNCTION_CHECK(getUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideCursor
		#define GEODE_CONCEPT_CHECK_hideCursor
		GEODE_CONCEPT_FUNCTION_CHECK(hideCursor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isControllerConnected
		#define GEODE_CONCEPT_CHECK_isControllerConnected
		GEODE_CONCEPT_FUNCTION_CHECK(isControllerConnected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isHD
		#define GEODE_CONCEPT_CHECK_isHD
		GEODE_CONCEPT_FUNCTION_CHECK(isHD) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLocalPlayerAuthenticated
		#define GEODE_CONCEPT_CHECK_isLocalPlayerAuthenticated
		GEODE_CONCEPT_FUNCTION_CHECK(isLocalPlayerAuthenticated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLowMemoryDevice
		#define GEODE_CONCEPT_CHECK_isLowMemoryDevice
		GEODE_CONCEPT_FUNCTION_CHECK(isLowMemoryDevice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isNetworkAvailable
		#define GEODE_CONCEPT_CHECK_isNetworkAvailable
		GEODE_CONCEPT_FUNCTION_CHECK(isNetworkAvailable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSignedInGooglePlay
		#define GEODE_CONCEPT_CHECK_isSignedInGooglePlay
		GEODE_CONCEPT_FUNCTION_CHECK(isSignedInGooglePlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadAndDecryptFileToString
		#define GEODE_CONCEPT_CHECK_loadAndDecryptFileToString
		GEODE_CONCEPT_FUNCTION_CHECK(loadAndDecryptFileToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logEvent
		#define GEODE_CONCEPT_CHECK_logEvent
		GEODE_CONCEPT_FUNCTION_CHECK(logEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGameLaunch
		#define GEODE_CONCEPT_CHECK_onGameLaunch
		GEODE_CONCEPT_FUNCTION_CHECK(onGameLaunch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNativePause
		#define GEODE_CONCEPT_CHECK_onNativePause
		GEODE_CONCEPT_FUNCTION_CHECK(onNativePause) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNativeResume
		#define GEODE_CONCEPT_CHECK_onNativeResume
		GEODE_CONCEPT_FUNCTION_CHECK(onNativeResume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleKeyboard
		#define GEODE_CONCEPT_CHECK_onToggleKeyboard
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleKeyboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openAppPage
		#define GEODE_CONCEPT_CHECK_openAppPage
		GEODE_CONCEPT_FUNCTION_CHECK(openAppPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_platformShutdown
		#define GEODE_CONCEPT_CHECK_platformShutdown
		GEODE_CONCEPT_FUNCTION_CHECK(platformShutdown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshWindow
		#define GEODE_CONCEPT_CHECK_refreshWindow
		GEODE_CONCEPT_FUNCTION_CHECK(refreshWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportAchievementWithID
		#define GEODE_CONCEPT_CHECK_reportAchievementWithID
		GEODE_CONCEPT_FUNCTION_CHECK(reportAchievementWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportLoadingFinished
		#define GEODE_CONCEPT_CHECK_reportLoadingFinished
		GEODE_CONCEPT_FUNCTION_CHECK(reportLoadingFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resizeWindow
		#define GEODE_CONCEPT_CHECK_resizeWindow
		GEODE_CONCEPT_FUNCTION_CHECK(resizeWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveAndEncryptStringToFile
		#define GEODE_CONCEPT_CHECK_saveAndEncryptStringToFile
		GEODE_CONCEPT_FUNCTION_CHECK(saveAndEncryptStringToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sendMail
		#define GEODE_CONCEPT_CHECK_sendMail
		GEODE_CONCEPT_FUNCTION_CHECK(sendMail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlockBackButton
		#define GEODE_CONCEPT_CHECK_setBlockBackButton
		GEODE_CONCEPT_FUNCTION_CHECK(setBlockBackButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setKeyboardState
		#define GEODE_CONCEPT_CHECK_setKeyboardState
		GEODE_CONCEPT_FUNCTION_CHECK(setKeyboardState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldResumeSound
		#define GEODE_CONCEPT_CHECK_shouldResumeSound
		GEODE_CONCEPT_FUNCTION_CHECK(shouldResumeSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showAchievements
		#define GEODE_CONCEPT_CHECK_showAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(showAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCursor
		#define GEODE_CONCEPT_CHECK_showCursor
		GEODE_CONCEPT_FUNCTION_CHECK(showCursor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_signInGooglePlay
		#define GEODE_CONCEPT_CHECK_signInGooglePlay
		GEODE_CONCEPT_FUNCTION_CHECK(signInGooglePlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_signOutGooglePlay
		#define GEODE_CONCEPT_CHECK_signOutGooglePlay
		GEODE_CONCEPT_FUNCTION_CHECK(signOutGooglePlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spriteFromSavedFile
		#define GEODE_CONCEPT_CHECK_spriteFromSavedFile
		GEODE_CONCEPT_FUNCTION_CHECK(spriteFromSavedFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCallGLFinish
		#define GEODE_CONCEPT_CHECK_toggleCallGLFinish
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCallGLFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCPUSleepMode
		#define GEODE_CONCEPT_CHECK_toggleCPUSleepMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCPUSleepMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleForceTimer
		#define GEODE_CONCEPT_CHECK_toggleForceTimer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleForceTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFullScreen
		#define GEODE_CONCEPT_CHECK_toggleFullScreen
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFullScreen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLockCursor
		#define GEODE_CONCEPT_CHECK_toggleLockCursor
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLockCursor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMouseControl
		#define GEODE_CONCEPT_CHECK_toggleMouseControl
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMouseControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSmoothFix
		#define GEODE_CONCEPT_CHECK_toggleSmoothFix
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSmoothFix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleVerticalSync
		#define GEODE_CONCEPT_CHECK_toggleVerticalSync
		GEODE_CONCEPT_FUNCTION_CHECK(toggleVerticalSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowRateDialog
		#define GEODE_CONCEPT_CHECK_tryShowRateDialog
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowRateDialog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMouseControl
		#define GEODE_CONCEPT_CHECK_updateMouseControl
		GEODE_CONCEPT_FUNCTION_CHECK(updateMouseControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateWindowedSize
		#define GEODE_CONCEPT_CHECK_updateWindowedSize
		GEODE_CONCEPT_FUNCTION_CHECK(updateWindowedSize) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlatformToolbox> : ModifyBase<ModifyDerive<Der, PlatformToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlatformToolbox>>;
		using ModifyBase<ModifyDerive<Der, PlatformToolbox>>::ModifyBase;
		using Base = PlatformToolbox;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::activateGameCenter)), Default, PlatformToolbox, activateGameCenter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox15copyToClipboardESs")), Default, PlatformToolbox, copyToClipboard, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox13doesFileExistESs")), Default, PlatformToolbox, doesFileExist, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox25downloadAndSavePromoImageESsSs")), Default, PlatformToolbox, downloadAndSavePromoImage, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::gameDidSave)), Default, PlatformToolbox, gameDidSave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::getClipboardString)), Default, PlatformToolbox, getClipboardString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlatformToolbox, getDeviceRefreshRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::getDisplaySize)), Default, PlatformToolbox, getDisplaySize, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&PlatformToolbox::getRawPath)), Default, PlatformToolbox, getRawPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::getUniqueUserID)), Default, PlatformToolbox, getUniqueUserID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::getUserID)), Default, PlatformToolbox, getUserID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::hideCursor)), Default, PlatformToolbox, hideCursor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::isControllerConnected)), Default, PlatformToolbox, isControllerConnected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::isHD)), Default, PlatformToolbox, isHD, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::isLocalPlayerAuthenticated)), Default, PlatformToolbox, isLocalPlayerAuthenticated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::isLowMemoryDevice)), Default, PlatformToolbox, isLowMemoryDevice, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::isNetworkAvailable)), Default, PlatformToolbox, isNetworkAvailable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::isSignedInGooglePlay)), Default, PlatformToolbox, isSignedInGooglePlay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox26loadAndDecryptFileToStringEPKcS1_RSs")), Default, PlatformToolbox, loadAndDecryptFileToString, char const*, char const*, gd::string&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&PlatformToolbox::logEvent)), Default, PlatformToolbox, logEvent, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::onGameLaunch)), Default, PlatformToolbox, onGameLaunch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::onNativePause)), Default, PlatformToolbox, onNativePause, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::onNativeResume)), Default, PlatformToolbox, onNativeResume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::onToggleKeyboard)), Default, PlatformToolbox, onToggleKeyboard, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::openAppPage)), Default, PlatformToolbox, openAppPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::platformShutdown)), Default, PlatformToolbox, platformShutdown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::refreshWindow)), Default, PlatformToolbox, refreshWindow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&PlatformToolbox::reportAchievementWithID)), Default, PlatformToolbox, reportAchievementWithID, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::reportLoadingFinished)), Default, PlatformToolbox, reportLoadingFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&PlatformToolbox::resizeWindow)), Default, PlatformToolbox, resizeWindow, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox26saveAndEncryptStringToFileERSsPKcS2_")), Default, PlatformToolbox, saveAndEncryptStringToFile, gd::string&, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, char const*>::func(&PlatformToolbox::sendMail)), Default, PlatformToolbox, sendMail, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::setBlockBackButton)), Default, PlatformToolbox, setBlockBackButton, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::setKeyboardState)), Default, PlatformToolbox, setKeyboardState, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::shouldResumeSound)), Default, PlatformToolbox, shouldResumeSound, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::showAchievements)), Default, PlatformToolbox, showAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::showCursor)), Default, PlatformToolbox, showCursor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::signInGooglePlay)), Default, PlatformToolbox, signInGooglePlay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::signOutGooglePlay)), Default, PlatformToolbox, signOutGooglePlay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox19spriteFromSavedFileESs")), Default, PlatformToolbox, spriteFromSavedFile, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::toggleCallGLFinish)), Default, PlatformToolbox, toggleCallGLFinish, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::toggleCPUSleepMode)), Default, PlatformToolbox, toggleCPUSleepMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::toggleForceTimer)), Default, PlatformToolbox, toggleForceTimer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool, bool, bool>::func(&PlatformToolbox::toggleFullScreen)), Default, PlatformToolbox, toggleFullScreen, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::toggleLockCursor)), Default, PlatformToolbox, toggleLockCursor, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::toggleMouseControl)), Default, PlatformToolbox, toggleMouseControl, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::toggleSmoothFix)), Default, PlatformToolbox, toggleSmoothFix, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&PlatformToolbox::toggleVerticalSync)), Default, PlatformToolbox, toggleVerticalSync, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN15PlatformToolbox17tryShowRateDialogESs")), Default, PlatformToolbox, tryShowRateDialog, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&PlatformToolbox::updateMouseControl)), Default, PlatformToolbox, updateMouseControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, float>::func(&PlatformToolbox::updateWindowedSize)), Default, PlatformToolbox, updateWindowedSize, float, float)
		}
	};
}
