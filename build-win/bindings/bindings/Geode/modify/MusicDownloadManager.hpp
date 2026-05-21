#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_addMusicDownloadDelegate
		#define GEODE_STATICS_addMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_addSongObjectFromString
		#define GEODE_STATICS_addSongObjectFromString
		GEODE_AS_STATIC_FUNCTION(addSongObjectFromString) 
	#endif

	#ifndef GEODE_STATICS_clearUnusedSongs
		#define GEODE_STATICS_clearUnusedSongs
		GEODE_AS_STATIC_FUNCTION(clearUnusedSongs) 
	#endif

	#ifndef GEODE_STATICS_createArtistsInfo
		#define GEODE_STATICS_createArtistsInfo
		GEODE_AS_STATIC_FUNCTION(createArtistsInfo) 
	#endif

	#ifndef GEODE_STATICS_createSongsInfo
		#define GEODE_STATICS_createSongsInfo
		GEODE_AS_STATIC_FUNCTION(createSongsInfo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_downloadCustomSong
		#define GEODE_STATICS_downloadCustomSong
		GEODE_AS_STATIC_FUNCTION(downloadCustomSong) 
	#endif

	#ifndef GEODE_STATICS_downloadMusicLibrary
		#define GEODE_STATICS_downloadMusicLibrary
		GEODE_AS_STATIC_FUNCTION(downloadMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadSFX
		#define GEODE_STATICS_downloadSFX
		GEODE_AS_STATIC_FUNCTION(downloadSFX) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXLibrary
		#define GEODE_STATICS_downloadSFXLibrary
		GEODE_AS_STATIC_FUNCTION(downloadSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadSong
		#define GEODE_STATICS_downloadSong
		GEODE_AS_STATIC_FUNCTION(downloadSong) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongStarted
		#define GEODE_STATICS_downloadSongStarted
		GEODE_AS_STATIC_FUNCTION(downloadSongStarted) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByArtistID
		#define GEODE_STATICS_filterMusicByArtistID
		GEODE_AS_STATIC_FUNCTION(filterMusicByArtistID) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByTag
		#define GEODE_STATICS_filterMusicByTag
		GEODE_AS_STATIC_FUNCTION(filterMusicByTag) 
	#endif

	#ifndef GEODE_STATICS_generateCustomContentURL
		#define GEODE_STATICS_generateCustomContentURL
		GEODE_AS_STATIC_FUNCTION(generateCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_getCustomContentURL
		#define GEODE_STATICS_getCustomContentURL
		GEODE_AS_STATIC_FUNCTION(getCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getDownloadedSongs
		#define GEODE_STATICS_getDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(getDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_getSFXFolderPathForID
		#define GEODE_STATICS_getSFXFolderPathForID
		GEODE_AS_STATIC_FUNCTION(getSFXFolderPathForID) 
	#endif

	#ifndef GEODE_STATICS_getSongInfo
		#define GEODE_STATICS_getSongInfo
		GEODE_AS_STATIC_FUNCTION(getSongInfo) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoObject
		#define GEODE_STATICS_getSongInfoObject
		GEODE_AS_STATIC_FUNCTION(getSongInfoObject) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_isRunningActionForSongID
		#define GEODE_STATICS_isRunningActionForSongID
		GEODE_AS_STATIC_FUNCTION(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_STATICS_isSFXDownloaded
		#define GEODE_STATICS_isSFXDownloaded
		GEODE_AS_STATIC_FUNCTION(isSFXDownloaded) 
	#endif

	#ifndef GEODE_STATICS_isSongDownloaded
		#define GEODE_STATICS_isSongDownloaded
		GEODE_AS_STATIC_FUNCTION(isSongDownloaded) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_onDownloadMusicLibraryCompleted
		#define GEODE_STATICS_onDownloadMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXCompleted
		#define GEODE_STATICS_onDownloadSFXCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXLibraryCompleted
		#define GEODE_STATICS_onDownloadSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSongCompleted
		#define GEODE_STATICS_onDownloadSongCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetCustomContentURLCompleted
		#define GEODE_STATICS_onGetCustomContentURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetCustomContentURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfoCompleted
		#define GEODE_STATICS_onGetSongInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		#define GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		#define GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_parseMusicLibrary
		#define GEODE_STATICS_parseMusicLibrary
		GEODE_AS_STATIC_FUNCTION(parseMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_parseSFXLibrary
		#define GEODE_STATICS_parseSFXLibrary
		GEODE_AS_STATIC_FUNCTION(parseSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_pathForSFX
		#define GEODE_STATICS_pathForSFX
		GEODE_AS_STATIC_FUNCTION(pathForSFX) 
	#endif

	#ifndef GEODE_STATICS_pathForSFXFolder
		#define GEODE_STATICS_pathForSFXFolder
		GEODE_AS_STATIC_FUNCTION(pathForSFXFolder) 
	#endif

	#ifndef GEODE_STATICS_pathForSong
		#define GEODE_STATICS_pathForSong
		GEODE_AS_STATIC_FUNCTION(pathForSong) 
	#endif

	#ifndef GEODE_STATICS_pathForSongFolder
		#define GEODE_STATICS_pathForSongFolder
		GEODE_AS_STATIC_FUNCTION(pathForSongFolder) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpGetRequest
		#define GEODE_STATICS_ProcessHttpGetRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpGetRequest) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeMusicDownloadDelegate
		#define GEODE_STATICS_removeMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_showTOS
		#define GEODE_STATICS_showTOS
		GEODE_AS_STATIC_FUNCTION(showTOS) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateMusicLibrary
		#define GEODE_STATICS_tryUpdateMusicLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateSFXLibrary
		#define GEODE_STATICS_tryUpdateSFXLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateSFXLibrary) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSongObjectFromString
		#define GEODE_CONCEPT_CHECK_addSongObjectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(addSongObjectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearSong
		#define GEODE_CONCEPT_CHECK_clearSong
		GEODE_CONCEPT_FUNCTION_CHECK(clearSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearUnusedSongs
		#define GEODE_CONCEPT_CHECK_clearUnusedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(clearUnusedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createArtistsInfo
		#define GEODE_CONCEPT_CHECK_createArtistsInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createArtistsInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSongsInfo
		#define GEODE_CONCEPT_CHECK_createSongsInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createSongsInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSFX
		#define GEODE_CONCEPT_CHECK_deleteSFX
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSong
		#define GEODE_CONCEPT_CHECK_deleteSong
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadCustomSong
		#define GEODE_CONCEPT_CHECK_downloadCustomSong
		GEODE_CONCEPT_FUNCTION_CHECK(downloadCustomSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadMusicLibrary
		#define GEODE_CONCEPT_CHECK_downloadMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFX
		#define GEODE_CONCEPT_CHECK_downloadSFX
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFailed
		#define GEODE_CONCEPT_CHECK_downloadSFXFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFinished
		#define GEODE_CONCEPT_CHECK_downloadSFXFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXLibrary
		#define GEODE_CONCEPT_CHECK_downloadSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSong
		#define GEODE_CONCEPT_CHECK_downloadSong
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFailed
		#define GEODE_CONCEPT_CHECK_downloadSongFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFinished
		#define GEODE_CONCEPT_CHECK_downloadSongFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongStarted
		#define GEODE_CONCEPT_CHECK_downloadSongStarted
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongStarted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filterMusicByArtistID
		#define GEODE_CONCEPT_CHECK_filterMusicByArtistID
		GEODE_CONCEPT_FUNCTION_CHECK(filterMusicByArtistID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filterMusicByTag
		#define GEODE_CONCEPT_CHECK_filterMusicByTag
		GEODE_CONCEPT_FUNCTION_CHECK(filterMusicByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateCustomContentURL
		#define GEODE_CONCEPT_CHECK_generateCustomContentURL
		GEODE_CONCEPT_FUNCTION_CHECK(generateCustomContentURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateResourceAssetList
		#define GEODE_CONCEPT_CHECK_generateResourceAssetList
		GEODE_CONCEPT_FUNCTION_CHECK(generateResourceAssetList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicArtists
		#define GEODE_CONCEPT_CHECK_getAllMusicArtists
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicArtists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicObjects
		#define GEODE_CONCEPT_CHECK_getAllMusicObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicTags
		#define GEODE_CONCEPT_CHECK_getAllMusicTags
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicTags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSFXObjects
		#define GEODE_CONCEPT_CHECK_getAllSFXObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSFXObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSongs
		#define GEODE_CONCEPT_CHECK_getAllSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomContentURL
		#define GEODE_CONCEPT_CHECK_getCustomContentURL
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomContentURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLObject
		#define GEODE_CONCEPT_CHECK_getDLObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadedSongs
		#define GEODE_CONCEPT_CHECK_getDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadProgress
		#define GEODE_CONCEPT_CHECK_getDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicArtistForID
		#define GEODE_CONCEPT_CHECK_getMusicArtistForID
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicArtistForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicObject
		#define GEODE_CONCEPT_CHECK_getMusicObject
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXDownloadKey
		#define GEODE_CONCEPT_CHECK_getSFXDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXDownloadProgress
		#define GEODE_CONCEPT_CHECK_getSFXDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXFolderObjectForID
		#define GEODE_CONCEPT_CHECK_getSFXFolderObjectForID
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXFolderObjectForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXFolderPathForID
		#define GEODE_CONCEPT_CHECK_getSFXFolderPathForID
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXFolderPathForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXObject
		#define GEODE_CONCEPT_CHECK_getSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongDownloadKey
		#define GEODE_CONCEPT_CHECK_getSongDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfo
		#define GEODE_CONCEPT_CHECK_getSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoKey
		#define GEODE_CONCEPT_CHECK_getSongInfoKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoObject
		#define GEODE_CONCEPT_CHECK_getSongInfoObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongPriority
		#define GEODE_CONCEPT_CHECK_getSongPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getSongPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementPriorityForSong
		#define GEODE_CONCEPT_CHECK_incrementPriorityForSong
		GEODE_CONCEPT_FUNCTION_CHECK(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isMusicLibraryLoaded
		#define GEODE_CONCEPT_CHECK_isMusicLibraryLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isMusicLibraryLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isResourceSFX
		#define GEODE_CONCEPT_CHECK_isResourceSFX
		GEODE_CONCEPT_FUNCTION_CHECK(isResourceSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isResourceSong
		#define GEODE_CONCEPT_CHECK_isResourceSong
		GEODE_CONCEPT_FUNCTION_CHECK(isResourceSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRunningActionForSongID
		#define GEODE_CONCEPT_CHECK_isRunningActionForSongID
		GEODE_CONCEPT_FUNCTION_CHECK(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSFXDownloaded
		#define GEODE_CONCEPT_CHECK_isSFXDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSFXDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSFXLibraryLoaded
		#define GEODE_CONCEPT_CHECK_isSFXLibraryLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSFXLibraryLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSongDownloaded
		#define GEODE_CONCEPT_CHECK_isSongDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSongDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitDownloadedSongs
		#define GEODE_CONCEPT_CHECK_limitDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFailed
		#define GEODE_CONCEPT_CHECK_loadSongInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFinished
		#define GEODE_CONCEPT_CHECK_loadSongInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForTagID
		#define GEODE_CONCEPT_CHECK_nameForTagID
		GEODE_CONCEPT_FUNCTION_CHECK(nameForTagID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadMusicLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadMusicLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSFXCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSFXCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSFXCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSFXLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSFXLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetCustomContentURLCompleted
		#define GEODE_CONCEPT_CHECK_onGetCustomContentURLCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetCustomContentURLCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryUpdateMusicLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onTryUpdateMusicLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onTryUpdateMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryUpdateSFXLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onTryUpdateSFXLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onTryUpdateSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseMusicLibrary
		#define GEODE_CONCEPT_CHECK_parseMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(parseMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseSFXLibrary
		#define GEODE_CONCEPT_CHECK_parseSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(parseSFXLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSFX
		#define GEODE_CONCEPT_CHECK_pathForSFX
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSFXFolder
		#define GEODE_CONCEPT_CHECK_pathForSFXFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSFXFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSong
		#define GEODE_CONCEPT_CHECK_pathForSong
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSongFolder
		#define GEODE_CONCEPT_CHECK_pathForSongFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSongFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpGetRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpGetRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpGetRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_responseToDict
		#define GEODE_CONCEPT_CHECK_responseToDict
		GEODE_CONCEPT_FUNCTION_CHECK(responseToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTOS
		#define GEODE_CONCEPT_CHECK_showTOS
		GEODE_CONCEPT_FUNCTION_CHECK(showTOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopDownload
		#define GEODE_CONCEPT_CHECK_stopDownload
		GEODE_CONCEPT_FUNCTION_CHECK(stopDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeMusicObject
		#define GEODE_CONCEPT_CHECK_storeMusicObject
		GEODE_CONCEPT_FUNCTION_CHECK(storeMusicObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSFXInfoObject
		#define GEODE_CONCEPT_CHECK_storeSFXInfoObject
		GEODE_CONCEPT_FUNCTION_CHECK(storeSFXInfoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryLoadLibraries
		#define GEODE_CONCEPT_CHECK_tryLoadLibraries
		GEODE_CONCEPT_FUNCTION_CHECK(tryLoadLibraries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateMusicLibrary
		#define GEODE_CONCEPT_CHECK_tryUpdateMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateSFXLibrary
		#define GEODE_CONCEPT_CHECK_tryUpdateSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateSFXLibrary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicDownloadManager> : ModifyBase<ModifyDerive<Der, MusicDownloadManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadManager>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadManager>>::ModifyBase;
		using Base = MusicDownloadManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33cc00, Default, MusicDownloadManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d1e0, Thiscall, MusicDownloadManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33efc0, Thiscall, MusicDownloadManager, addDLToActive, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d380, Thiscall, MusicDownloadManager, addMusicDownloadDelegate, MusicDownloadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33da40, Thiscall, MusicDownloadManager, addSongObjectFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, clearSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e6a0, Thiscall, MusicDownloadManager, clearUnusedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e190, Thiscall, MusicDownloadManager, createArtistsInfo, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33dde0, Thiscall, MusicDownloadManager, createSongsInfo, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33fa20, Thiscall, MusicDownloadManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, deleteSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, deleteSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340310, Thiscall, MusicDownloadManager, downloadCustomSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340940, Thiscall, MusicDownloadManager, downloadMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x342240, Thiscall, MusicDownloadManager, downloadSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3445b0, Thiscall, MusicDownloadManager, downloadSFXFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, downloadSFXFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3429e0, Thiscall, MusicDownloadManager, downloadSFXLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33ea20, Thiscall, MusicDownloadManager, downloadSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x344530, Thiscall, MusicDownloadManager, downloadSongFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, downloadSongFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e9a0, Thiscall, MusicDownloadManager, downloadSongStarted, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3420e0, Thiscall, MusicDownloadManager, filterMusicByArtistID, int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x342190, Thiscall, MusicDownloadManager, filterMusicByTag, int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x343aa0, Thiscall, MusicDownloadManager, generateCustomContentURL, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, generateResourceAssetList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getAllMusicArtists, OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getAllMusicObjects, GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getAllMusicTags, OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getAllSFXObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getAllSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33ff10, Thiscall, MusicDownloadManager, getCustomContentURL, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39d70, Thiscall, MusicDownloadManager, getDLObject, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e5e0, Thiscall, MusicDownloadManager, getDownloadedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getDownloadProgress, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getMusicArtistForID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getMusicObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getSFXDownloadKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getSFXDownloadProgress, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getSFXFolderObjectForID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x343880, Thiscall, MusicDownloadManager, getSFXFolderPathForID, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getSFXObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getSongDownloadKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d5d0, Thiscall, MusicDownloadManager, getSongInfo, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getSongInfoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f140, Thiscall, MusicDownloadManager, getSongInfoObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, getSongPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d0f0, Thiscall, MusicDownloadManager, handleIt, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, handleItDelayed, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, handleItND, cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, incrementPriorityForSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, isMusicLibraryLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, isResourceSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, isResourceSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d4f0, Thiscall, MusicDownloadManager, isRunningActionForSongID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f580, Thiscall, MusicDownloadManager, isSFXDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, isSFXLibraryLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f250, Thiscall, MusicDownloadManager, isSongDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, limitDownloadedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3444b0, Thiscall, MusicDownloadManager, loadSongInfoFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x344430, Thiscall, MusicDownloadManager, loadSongInfoFinished, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3446b0, Thiscall, MusicDownloadManager, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x344630, Thiscall, MusicDownloadManager, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, nameForTagID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340bd0, Thiscall, MusicDownloadManager, onDownloadMusicLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3424a0, Thiscall, MusicDownloadManager, onDownloadSFXCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x342c40, Thiscall, MusicDownloadManager, onDownloadSFXLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33ed20, Thiscall, MusicDownloadManager, onDownloadSongCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340180, Thiscall, MusicDownloadManager, onGetCustomContentURLCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d8b0, Thiscall, MusicDownloadManager, onGetSongInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33cff0, Thiscall, MusicDownloadManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340810, Thiscall, MusicDownloadManager, onTryUpdateMusicLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3428a0, Thiscall, MusicDownloadManager, onTryUpdateSFXLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340d80, Thiscall, MusicDownloadManager, parseMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x342dd0, Thiscall, MusicDownloadManager, parseSFXLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f800, Thiscall, MusicDownloadManager, pathForSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f6b0, Thiscall, MusicDownloadManager, pathForSFXFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f4d0, Thiscall, MusicDownloadManager, pathForSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f380, Thiscall, MusicDownloadManager, pathForSongFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33ced0, Thiscall, MusicDownloadManager, ProcessHttpGetRequest, gd::string, gd::string, cocos2d::extension::SEL_HttpResponse, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33cd90, Thiscall, MusicDownloadManager, ProcessHttpRequest, gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f090, Thiscall, MusicDownloadManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d460, Thiscall, MusicDownloadManager, removeMusicDownloadDelegate, MusicDownloadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33e390, Thiscall, MusicDownloadManager, responseToDict, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33f8c0, Thiscall, MusicDownloadManager, showTOS, FLAlertLayerProtocol*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x33d570, Thiscall, MusicDownloadManager, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, stopDownload, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, storeMusicObject, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, storeSFXInfoObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, tryLoadLibraries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x340580, Thiscall, MusicDownloadManager, tryUpdateMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x342600, Thiscall, MusicDownloadManager, tryUpdateSFXLibrary, )
		}
	};
}
